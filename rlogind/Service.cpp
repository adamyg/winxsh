#include <edidentifier.h>
__CIDENT_RCSID(Service_cpp,"$Id: Service.cpp,v 1.9 2020/07/02 21:27:03 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * rlogind serice adapter
 *
 * Copyright (c) 2020 - 2022, Adam Young.
 * All rights reserved.
 *
 * This file is part of the WinRSH/WinSSH project.
 *
 * The applications are free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 3.
 *
 * Redistributions of source code must retain the above copyright
 * notice, and must be distributed with the license document above.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, and must include the license document above in
 * the documentation and/or other materials provided with the
 * distribution.
 *
 * This project is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * License for more details.
 * ==end==
 */

#include "config.h"

#include <sys/cdefs.h>
#include <sys/param.h>
#include <sys/socket.h>
#include <time.h>
#include <fcntl.h>
#include <io.h>

#include "Service.h"                            // public header

#include <buildinfo.h>

#include "SyslogDiagnosticsIO.h"                // syslog() diagnostics adapter
#include "syslog.h"

#include "w32support.h"


/////////////////////////////////////////////////////////////////////////////////////////
//  Session arguments

namespace {
struct SessionArguments {
        SessionArguments(const struct Options *options, int client) :
                options_(options), client_(client) {
        }
        const struct Options *options_;
        int client_;
};
}; //namespace anon


/////////////////////////////////////////////////////////////////////////////////////////
//  Service framework

Service::Service(const char *svcname, bool console_mode) :
             CNTService(svcname, NTService::StdioDiagnosticsIO::Get()), options_(0), inifile_(0) {

        SetVersion(WINSH_VERSION_1, WINSH_VERSION_2, WINSH_VERSION_3);
        SetDescription("Remote login server, for rlogin clients");

        SetConsoleMode(console_mode);
        setlogoption(LOG_PID | LOG_NOHOST | (console_mode ? LOG_CONS : 0));
}


Service::~Service() {
}


void
Service::Start(const struct Options &options)
{
        options_ = &options;

        openlog("rlogind", LOG_TID | LOG_MSTIME | LOG_NOHOST |
                    (GetConsoleMode() && !options.no_stdout ? LOG_PERROR : 0), LOG_AUTH);

        SetDiagnostics(SyslogDiagnosticsIO::Get());
        AttachLogger();

        CNTService::Start();
}


void
Service::AttachLogger()
{
        logger_.attach_to_syslog();
}


bool
Service::ConfigLogger()
{
        Logger::Profile profile;
        char szValue[1024];
        int ret;

        ret = ConfigGet("LoggerFile", szValue, sizeof(szValue));
        profile.base_path(ResolveRelative(ret ? szValue : "./logs/rlogin.log"));

        if (ConfigGet("LoggerAge",  szValue,  sizeof(szValue)))
                profile.time_period(szValue);

        if (ConfigGet("LoggerSize", szValue,  sizeof(szValue)))
                 profile.size_limit(szValue);

        if (ConfigGet("LoggerLines", szValue, sizeof(szValue)))
                 profile.line_limit(szValue);

//      if (ConfigGet("LoggerLevel, szValue, sizeof(szValue))) {
//              profile.default_level(szValue);
//              setlogmask(xxx);
//      } 

      	if (ConfigGet("LoggerPurge", szValue, sizeof(szValue)))
                profile.purge_period(szValue);

        if (! logger_.start(profile)) {
                CNTService::LogError(true, "unable to initialise logger <%s>", profile.base_path());
                return false;
        }
        return true;
}


//virtual
bool
Service::OnInit()
{
        if (options_->delay_start) {
                ::Sleep(30 * 1000);             // debugger/start delay.
        }

        if (! ConfigOpen() || !ConfigLogger()) {
                return false;                   // fatal
        }

        return CNTService::OnInit();
}


//virtual
void
Service::OnStop()
{
//      logger_.flush();
        CNTService::OnStop();
}


//virtual
void
Service::ServiceRun()
{
        struct SessionArguments *arguments;
        int s, c;

        assert(sizeof(int) <= sizeof(char *));
        if ((s = Initialise()) >= 0) {
                HANDLE hSocketEvent;

                // Service accept loop
         
                hSocketEvent = WSACreateEvent();
                WSAEventSelect((SOCKET)s, hSocketEvent, FD_ACCEPT | FD_CLOSE);
                for (;;) {
                        HANDLE events[2] = { hSocketEvent, StopEvent() };
                        const DWORD dwWait = WaitForMultipleObjects((events[1] ? 2 : 1), events, FALSE, INFINITE);
                        if ((WAIT_OBJECT_0 + 0) == dwWait) {
                                WSANETWORKEVENTS nevents = {0};

                                if (0 != ::WSAEnumNetworkEvents((SOCKET)s, hSocketEvent, &nevents)) {
                                        syslog(LOG_ERR, "unable to emumerate socket events: %m");
                                        break;
                                }

                                if (FD_ACCEPT & nevents.lNetworkEvents) {
                                        if (-1 != (c = Welcome(s))) {
                                                if (NULL != (arguments = new(std::nothrow) SessionArguments(options_, c))) {
                                                        HANDLE hThread = CreateThread(NULL, 0, session_thread, (void *)arguments, 0, NULL);
                                                        if (hThread) {
                                                                CloseHandle(hThread);
                                                                continue;
                                                        }
                                                }
                                                syslog(LOG_ERR, "unable to create session thread: %m");
                                                delete arguments;
                                                sockclose(c);
                                        }

                                } else if (FD_CLOSE & nevents.lNetworkEvents) {
                                        syslog(LOG_WARNING, "service socket closed");
                                }
                                continue; //rearm

                        } else if ((WAIT_OBJECT_0 + 1) == dwWait) {
                                syslog(LOG_INFO, "service shutdown");

                //      } else if ((WAIT_OBJECT_0 + 2) == dwWait) {
                //              foreach(session) {
                //                      if (session->ended()) {
                //                              remove-from-container
                //                      }
                //              }

                        } else {
                                syslog(LOG_ERR, "unexpected wait status <%u>: %m", (unsigned)dwWait);
                        }
                        break; //other events
                }

                ::CloseHandle(hSocketEvent);
                sockclose(s);

                // Session shutdown

                //      foreach(Session) {
                //              session->shutdown("service shall shutdown in 30 seconds");
                //                      ==> signal shutdown-event, sends ctrl-break();
                //      }
                //      Sleep(30 seconds);
                //      foreach(Session) {
                //              session->ctrlbreak();
                //      }
                //      Sleep(5 seconds);
                //      foreach(Session) {
                //              session->terminate();
                //      }
        }
}


int
Service::Initialise()
{
        struct servent *sp = NULL;
        struct protoent *pp = NULL;
        struct sockaddr_in inaddr;
        int port = 513, len, s;
                // rlogin works over TCP port 513 by default.
                // rsh runs over TCP port 514 by default.

        if (-1 == w32_sockinit()) {
                syslog(LOG_ERR, "winsock initialisation: %m");
                return -1;
        }

        if (options_->port) {
                syslog(LOG_INFO, "rlogin/tcp: service, using explicit port %u", options_->port);
                port = (int)options_->port;

        } else {
                pp = getprotobyname("tcp");
                sp = getservbyname("rlogin", "tcp");
                if (NULL == sp) {
                        syslog(LOG_WARNING, "rlogin/tcp: unknown service, using default %d", port);
                } else {
                        syslog(LOG_INFO, "rlogin/tcp: service, using port %d", sp->s_port);
                        port = sp->s_port;
                }
        }

        if (INVALID_SOCKET == (s = socket(AF_INET, SOCK_STREAM, (pp ? pp->p_proto : IPPROTO_TCP)))) {
                syslog(LOG_ERR, "socket: %m");
                return -1;
        }

        (void) memset(&inaddr, 0, sizeof(inaddr));
        inaddr.sin_family = AF_INET;
        inaddr.sin_port = htons(port);
        inaddr.sin_addr.s_addr = htonl(INADDR_ANY);
        len = sizeof(inaddr);

        if (bind(s, (struct sockaddr *) &inaddr, len) < 0) {
                syslog(LOG_ERR, "bind: %m");
                return -1;
        }

        if (listen(s, 5) < 0) {
                syslog(LOG_ERR, "listen: %m");
                return -1;
        }

        return s;
}


int
Service::Welcome(int s)
{
        struct sockaddr_in inaddr;
        int bufsiz = 32 * 1024;
        int len, one = 1;
        int c;

        len = sizeof(inaddr);
        if (-1 == (c = accept(s, (struct sockaddr *) &inaddr, &len))) {
                syslog(LOG_ERR, "accept: %m");

        } else {
                // Disable the Nagle algorithm for send coalescing.
                if (setsockopt(c, IPPROTO_TCP, TCP_NODELAY, (char *)&one, sizeof(one)) < 0) {
                        syslog(LOG_ERR, "setsockopt (TCP_NODELAY): %m");
                }

                // Send/receive window sizes.
                if (setsockopt(c, SOL_SOCKET, SO_SNDBUF, (const char *)&bufsiz, sizeof(bufsiz)) < 0) {
                        syslog(LOG_ERR, "setsockopt SO_SNDBUF (ignored): %m");
                }

                if (setsockopt(c, SOL_SOCKET, SO_RCVBUF, (const char *)&bufsiz, sizeof(bufsiz)) < 0) {
                        syslog(LOG_ERR, "setsockopt SO_RCVBUD (ignored): %m");
                }
        }
        return c;
}


DWORD WINAPI
Service::session_thread(LPVOID lpParam)
{
        SessionArguments *arguments = (SessionArguments *)lpParam;

        rlogin(arguments->options_, arguments->client_);
        delete arguments;
        return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////
//  Diagnostics hook

//virtual
void Service::ServiceTrace(const char *fmt, ...)
{
        va_list ap;

        va_start(ap, fmt);
        diags().vinfo(fmt, ap);
        va_end(ap);
}


/////////////////////////////////////////////////////////////////////////////////////////
//  Configuration
//  Note: Move into NTServiceIni, allow a service to inherit.

std::string
Service::ResolveRelative(const char *path)
{
        // The working directory for services is always 'X:\WINDOWS\<SysWOW64>\system32',
        // hence resolve the path of a relative file against the application path not cwd.
        char t_szAppPath[_MAX_PATH] = {0};
        const char *basename = NULL;

        if ('.' == path[0] && ('/' == path[1] || '\\' == path[1])) {               
                if (0 == _access(path, 0)) {
                       return path;             // exists within CWD.
                }
                basename = path + 2;            // './xxxx' or '.\xxxx'

        } else if (NULL == strchr(path, '/') && NULL == strchr(path, '\\')) {
                basename = path;                // xxxx
        }

        if (basename) {
                int len = (int)::GetModuleFileName(NULL, t_szAppPath, sizeof(t_szAppPath));

                const char *d1 = strrchr(t_szAppPath, '/'), *d2 = strrchr(t_szAppPath, '\\'),
                    *d = (d1 > d2 ? d1 : d2);   // last delimitor
                len = (d ? (d - t_szAppPath) : len);

                snprintf(t_szAppPath + len, sizeof(t_szAppPath) - len, "\\%s", basename);
                t_szAppPath[sizeof(t_szAppPath) - 1] = 0;
                path = t_szAppPath;
        }

        return std::string(path);
}


//virtual
bool
Service::ConfigOpen(bool create /*= true*/)
{
        if (inifile_) return true;
        if (options_->ini_file) {
                CSimpleIniA *inifile = new(std::nothrow) CSimpleIniA;
                std::string path(ResolveRelative(options_->ini_file));
                int rc = inifile->LoadFile(path.c_str());
                if (rc >= 0) {                  // success
                        inifile_ = inifile;
                        return true;
                }

                CNTService::LogError(true, "unable to open configuration <%s>: %m", path.c_str());
                syslog(LOG_ERR, "unable to open configuration <%s>: %m", path.c_str());

                delete inifile;
                return false;
        }
        return CNTService::ConfigOpen();
}


//virtual
void
Service::ConfigClose()
{
        if (inifile_) {
                if (inifile_->SaveFile(options_->ini_file) < 0) {
                        syslog(LOG_WARNING, "unable to update configuration <%s>: %m", options_->ini_file);
                }
                delete inifile_, inifile_ = 0;
        }
        CNTService::ConfigClose();
}
 

//virtual
bool
Service::ConfigSet(const char *csKey, const char *szValue)
{
        if (options_->ini_file) {
                const char *sep;
                if (NULL != (sep = strchr(csKey, '\\'))) {
                        //TODO: sections
                        assert(sep);
                        return false;
                }
        }
        return CNTService::ConfigSet(csKey, szValue);
}

 
//virtual
bool
Service::ConfigSet(const char *csKey, DWORD dwValue)
{   
        if (options_->ini_file) {
                const char *sep;
                if (NULL != (sep = strchr(csKey, '\\'))) {
                        //TODO: sections
                        assert(sep);
                        return false;
                }
        }
        return CNTService::ConfigSet(csKey, dwValue);
}


//virtual
int
Service::ConfigGet(const char *csKey, char *szBuffer, size_t dwSize, unsigned flags)
{   
        if (options_->ini_file) {
                const char *sep;

                assert(csKey);
                assert(szBuffer && dwSize);
                if (!csKey) return false;
                if (!szBuffer || !dwSize) return false;

                if (NULL != (sep = strchr(csKey, '\\'))) {
                        //TODO: sections
                        assert(sep);
                } else {
                        const char *pszValue = inifile_->GetValue("", csKey, NULL /*default*/);
                        if (pszValue) {
                                const size_t len = strlen(pszValue);
                                if (len < dwSize) {
                                        memcpy(szBuffer, pszValue, len + 1 /*null*/);
                                        dwSize = len;
                                        return true;
                                }
                                diags().fwarning("parameter <%s> too large", csKey);
                                return false;
                        }
                }
                if (CFG_WARN & flags) {
                        diags().fwarning("parameter <%s> does not exist", csKey);
                }
                return false;
        }
        return CNTService::ConfigGet(csKey, szBuffer, dwSize, flags);
}


//virtual
bool
Service::ConfigGet(const char *csKey, DWORD &dwValue, unsigned flags)
{
        if (options_->ini_file) {
                const char *sep;

                assert(csKey);
                if (!csKey) return false;

                if (NULL != (sep = strchr(csKey, '\\'))) {
                        //TODO: sections
                        assert(sep);
                } else {
                        const char *pszValue = inifile_->GetValue("", csKey, NULL /*default*/);
                        if (pszValue) {
                                char *end = 0;
                                unsigned long ret = strtoul(pszValue, &end, 10);
                                if (end && 0 == *end) {
                                        dwValue = (DWORD)ret;
                                        return true;
                                }
                                diags().fwarning("parameter <%s> should be a numeric", csKey);
                                return false;
                        }
                }
                if (CFG_WARN & flags) {
                        diags().fwarning("parameter <%s> does not exist", csKey);
                }
                return false;
        }
        return CNTService::ConfigGet(csKey, dwValue, flags);
}

//end