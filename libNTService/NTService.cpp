#include <edidentifier.h>
__CIDENT_RCSID(NTService_cpp, "$Id: NTService.cpp,v 1.14 2023/12/27 14:22:58 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * CNTService - Classic window services framework (tweaked).
 *
 * Copyright (c) 2020 - 2023, Adam Young.
 * Based on the MSDN example service framework.
 * All rights reserved.
 *
 * This file is part of inetd-win32.
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
 * license for more details.
 * ==end==
 */

#ifndef  _CRT_SECURE_NO_WARNINGS
#define  _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

#if defined(__WATCOMC__) && (__WATCOMC < 1300)  // not visible under __cplusplus
extern "C" _WCRTLINK extern int asctime_s(char *__s, size_t __maxsize, const struct tm *__timeptr);
#endif

#include "NTService.h"                          // public interface
#include "NTServiceGetOpt.h"
#include "NTString.h"

#include "NTServMsg.h"                          // event msg identifiers

#if !defined(__MINGW32__)
#pragma comment(lib, "Version.lib")             // GetFileVersion
#pragma comment(lib, "Dbghelp.lib")             // EnumModules
#endif

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <Windows.h>

#if defined(__WATCOMC__)
#include <imagehlp.h>

#elif defined(__MINGW32__)
#include <imagehlp.h>
#include <strings.h>
#if !defined(_MAX_PATH)
#define _MAX_PATH MAX_PATH
#endif
#if !defined(ERROR_FILE_TOO_LARGE)
#define ERROR_FILE_TOO_LARGE 223
#endif
#pragma GCC diagnostics ignored "-Wmissing-field-initializers"
#define _strnicmp(__a,__b,__c) strncasecmp(__a,__b,__c)
#define _stricmp(__a,__b) strcasecmp(__a,__b)

#else
#pragma warning(disable:4091) // typedef ': ignored on left of '' when no variable is declared)
#include <dbghelp.h>
#include <comdef.h>
#endif
#include <psapi.h>


CNTService* CNTService::__serviceInstance = NULL;
        // Service singleton --
        //  WARNING: This limits the application to only one CNTService object.

CNTService::CNTService(const char* szServiceName, NTService::IDiagnostics &diags) :
                diags_(&diags), registry_(szServiceName, diags),
                m_iMajorVersion(1), m_iMinorVersion(0), m_iReleaseVersion(0),
                m_hStopEvent(NULL), m_hEventSource(NULL),
                m_hServiceStatus((SERVICE_STATUS_HANDLE)NULL), m_Status(),
                m_dwControlsAccepted(0),
                m_dwCheckPoint(0),
                m_bIsRunning(false),
                m_bRunAsConsole(false),
                m_bConsoleTrap(false),
                m_bDebugOutput(false)
{
        char t_szServiceName[sizeof(m_szServiceName)];

        memset(m_szServiceName, 0, sizeof(m_szServiceName));
        memset(m_szDescription, 0, sizeof(m_szDescription));

        assert(NULL == __serviceInstance);
        __serviceInstance = this;

        ::GetSystemTimeAsFileTime(&m_startTime);
        ::GetModuleFileNameA(NULL, m_szModule, sizeof(m_szModule)-1);
        m_szModule[sizeof(m_szModule) - 1] = 0;

        // Set the default service name and version
        if (!szServiceName || !*szServiceName) {
                szServiceName = DefaultServiceName(m_szModule, t_szServiceName, sizeof(t_szServiceName));
        }

        assert(strlen(szServiceName) < sizeof(m_szServiceName));
        strncpy(m_szServiceName, szServiceName, sizeof(m_szServiceName)-1);
        m_szServiceName[sizeof(m_szServiceName) - 1] = 0;

        m_hStopEvent = ::CreateEventA(NULL, TRUE, FALSE, NULL);
        assert(NULL != m_hStopEvent);

        // set up the initial service status
        m_Status.dwServiceType = SERVICE_WIN32_OWN_PROCESS;
        m_Status.dwCurrentState = SERVICE_STOPPED;
        m_Status.dwControlsAccepted = 0;
        m_dwControlsAccepted = SERVICE_ACCEPT_STOP;
                // Others of general interest:
                //  SERVICE_ACCEPT_PARAMCHANGE
                //  SERVICE_ACCEPT_PAUSE_CONTINUE
                //  SERVICE_ACCEPT_SHUTDOWN
        m_Status.dwWin32ExitCode = NO_ERROR;
        m_Status.dwServiceSpecificExitCode = 0;
        m_Status.dwCheckPoint = 0;
        m_Status.dwWaitHint = 0;
        m_bIsRunning = false;
}


CNTService::~CNTService()
{
        assert(! m_bIsRunning);

//      if (! m_bRunAsConsole) {
                // Unexpected shutdown, inform service manage; if possible
//              if (0 == m_hServiceStatus) {
//                      DWORD dwRet = 0;
//                      m_hServiceStatus = ::RegisterServiceCtrlHandler(m_szServiceName, ControlHandler);
//                              //Warning: not possible, causes an application crash outside service exec.
//                      if (m_hServiceStatus) {
//                              SetStatus(SERVICE_START_PENDING);
//                      }
//              }

                if (m_hServiceStatus) {
                        if (m_Status.dwCurrentState != SERVICE_STOPPED) {
                                SetStatus(SERVICE_STOPPED);
                        }
                }
//      }

        ::SetEvent(m_hStopEvent);
        if (m_hEventSource) {
                ::DeregisterEventSource(m_hEventSource);
        }
        ::CloseHandle(m_hStopEvent);
}


//static
//
// Purpose:
//  Derive the service name from the program path.
//
const char *
CNTService::DefaultServiceName(const char *arg0, char *buf, size_t buflen)
{
        assert(arg0 && buf && buflen >= 64);
        if (NULL == arg0 || NULL == buf || buflen < 1) {
                return NULL;
        }

        const char *dot, *p1 = strrchr(arg0, '\\'),
                *p2 = strrchr(arg0, '/');
        int t_length, length = buflen - 1 /*nul*/;

        if (p1 || p2) {                         // last component.
                arg0 = (p1 > p2 ? p1 : p2) + 1;
        }

        if ((t_length = (NULL != (dot = strchr(arg0, '.')) ?
                            dot - arg0 : strlen(arg0))) < length) {
                length = t_length;              // trimmed length.
        }
        (void) strncpy(buf, arg0, length);
        buf[length] = 0;

        return buf;
}


const char *
CNTService::ServiceName() const
{
        return m_szServiceName;
}


NTService::IDiagnostics &
CNTService::diags() const
{
        return *diags_;
}


void
CNTService::SetDiagnostics(NTService::IDiagnostics &diags)
{
        registry_.SetDiagnostics(diags);
        diags_ = &diags;
}


//
// Purpose:
//  Execute service verbs, 'version', 'install' and 'uninstall'.
//
// Return value:
//  Number of arguments parsed, 0 if the verb is not understood otherwise a negative error condition;
//
//  -1 Missing argument.
//  -2 Unexpected arguments.
//  -3 Missing service name.
//  -9 Help.
//
int CNTService::ExecuteCommand(int argc, const char * const *argv, unsigned filter)
{
        if (argc < 1) {
                return NTSERVICE_CMD_MISSING;

        } else if (0 == m_szServiceName[0]) {
                return NTSERVICE_CMD_MISSING_SERVICE;
        }

        const char *cmd = argv[0];

        if (0 == (filter & 0x001) && 0 == _stricmp(cmd, "version")) {
                if (argc > 1) {
                        return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                diags().finfo("%s Version %d.%d.%d", m_szServiceName, m_iMajorVersion, m_iMinorVersion, m_iReleaseVersion);
                diags().finfo("Service is %s installed", IsInstalled() ? "currently" : "not");
                return 1;

        } else if (0 == (filter & 0x002) && 0 == _stricmp(cmd, "install")) {
                InstallArguments arguments;

                (void) memset(&arguments, 0, sizeof(arguments));
                if (argc > 1) {                 // trailing argument
                        const int ret = InstallArgumentsParse(argc, argv, arguments);
                        if (ret) {              // rejected
                                return ret;
                        }
                }

                if (IsInstalled()) {
                        diags().finfo("%s is already installed\n", m_szServiceName);
                } else {                        // install ourselves
                        if (Install(arguments)) {
                                diags().finfo("%s installed", m_szServiceName);
                        } else {
                                const DWORD dwRet = GetLastError();
                                diags().finfo("%s failed to install. Error %u (%s)",
                                        m_szServiceName, dwRet, StrError(dwRet));
                        }
                }
                ZeroMemory(&arguments, sizeof(arguments));
                return 1;

        } else if (0 == (filter & 0x004) && 0 == _stricmp(cmd, "uninstall")) {
                if (argc > 1) {
                        return NTSERVICE_CMD_UNEXPECTED_ARG;
                }

                if (! IsInstalled()) {
                            diags().finfo("%s is not installed", m_szServiceName);
                } else {
                            // Try and remove the copy that's installed
                            if (Uninstall()) {
                                    diags().finfo("%s removed. [You must delete the file (%s) yourself]",
                                            m_szServiceName, m_szModule);
                            } else {
                                    const DWORD dwRet = GetLastError();
                                    diags().finfo("%s failed to remove. Error %u (%s)",
                                            m_szServiceName, dwRet, StrError(dwRet));
                            }
                }
                return 1;

        } else if (0 == (filter & 0x100) &&
                        (0 == _stricmp(cmd, "help") || 0 == _stricmp(cmd, "--help"))) {
                if (argc > 1) {
                        return NTSERVICE_CMD_UNEXPECTED_ARG;
                }

                        diags().info("\nService commands:");
                if (0 == (filter & 0x001))
                        diags().finfo("  version             - Version and installation status.");
                if (0 == (filter & 0x004))
                        diags().finfo("  uninstall           - Remove service.");
                if (0 == (filter & 0x002)) {
                        InstallArgumentsUsage();
                }
                return NTSERVICE_CMD_HELP;
        }
        return NTSERVICE_CMD_UNKNOWN;
}


//virtual
void CNTService::InstallArgumentsUsage()
{
        diags().finfo("  install [arguments] - Install as a service.");
        diags().finfo("      -U,--account=<user>             Account");
        diags().finfo("      -P,--password=<xxx>             Password");
        diags().finfo("      -D,--displayname=<xxx>          Display name");
        diags().finfo("      -C,--description=\"text\"         Description/comment text");
        diags().finfo("      -A,--arg=\"argument[=value]\"     Service argument; none or more");
        diags().finfo("      --grant                         Grant public access");
        diags().finfo("      --auto                          Auto start");
        diags().finfo("      --manual                        Manual start");
        diags().finfo("      -H,--help                       Command line help");
}


//virtual
int CNTService::InstallArgumentsParse(int argc, const char * const *argv, InstallArguments &arguments)
{
        using namespace NTService;

#define OPTIONS "P:U:D:C:gH"

        static struct Getopt::Option long_options[] = {
                { "account",        Getopt::argument_required,  NULL, 'U' }, //-U,--account=<user>
                { "password",       Getopt::argument_required,  NULL, 'P' }, //-P,--password=<xxx>
                { "displayname",    Getopt::argument_required,  NULL, 'D' }, //-D,--displayname=<xxx>
                { "description",    Getopt::argument_required,  NULL, 'C' }, //-C,--description=<xxx>
                { "grant",          Getopt::argument_none,      NULL, 'G' }, //-g,--grant
                { "arg",            Getopt::argument_required,  NULL, 'A' }, //-A,--arg "argument=value"
                { "auto",           Getopt::argument_none,      NULL, 100 }, //--auto
                { "manual",         Getopt::argument_none,      NULL, 101 }, //--manual
                { "help",           Getopt::argument_none,      NULL, 'H' }, //-H,--help
                { NULL }
                };

        Getopt options(*diags_, OPTIONS, long_options, argv[0]);

        while (EOF != options.shift(argc, argv)) {
                switch (options.optret()) {
                case 'U':   //-U,--account
                        arguments.account = options.optarg();
                        break;
                case 'P':   //-P,--password
                        arguments.password = options.optarg();
                        break;
                case 'D':   //-D,--display-name
                        arguments.displayname = options.optarg();
                        break;
                case 'C':   //-C,--description=<xxx>
                        arguments.description = options.optarg();
                        break;
                case 'G':   //-g,--grant
                        arguments.grant_control = true;
                        break;
                case 'A': { //-A,--arg
                                // TODO: allow client validation
                                const int needed = strlen(options.optarg());
                                char *cursor = arguments.buffer,
                                    *end = (cursor + sizeof(arguments.buffer)) - 1;

                                if (arguments.additional) { //current length
                                        cursor += strlen(arguments.buffer);
                                }

                                if ((cursor + needed + 1) >= end) {
                                        diags().ferror("%s: arguments overflow", options.progname());
                                        return NTSERVICE_CMD_INVALID_ARGS;
                                }
                                                            // append
                                if (arguments.additional) *cursor++ = ' ';
                                memcpy(cursor, options.optarg(), needed + 1);
                                arguments.additional = arguments.buffer;
                        }
                        break;
                case 100:   //--auto
                        arguments.auto_start = true;
                        break;
                case 101:   //--manual
                        arguments.auto_start = false;
                        break;
                case 'H':   //-H,--help
                        goto install_help;
                default:
                        return NTSERVICE_CMD_INVALID_ARGS;
                }
        }

        argv += options.optind();
        if (0 != (argc -= options.optind())) {  // 'install help'
                if (0 == _stricmp("help", argv[0])) {
install_help:;          InstallArgumentsUsage();
                        return NTSERVICE_CMD_HELP;
                }
                return NTSERVICE_CMD_UNEXPECTED_ARG;
        }
        return 0;       //success
}


//static
const char *CNTService::ExecuteReturnDesc(int ret)
{
        if (ret >= NTSERVICE_CMD_HELP) {
                return NULL;                    // complete.
        }

        switch (ret) {
        case NTSERVICE_CMD_MISSING_ARG:
                return "missing argument";
        case NTSERVICE_CMD_UNEXPECTED_ARG:
                return "unexpected argument";
        case NTSERVICE_CMD_MISSING_SERVICE:
                return "mssing service name";
        case NTSERVICE_CMD_MISSING:
                return "missing command";
        case NTSERVICE_CMD_UNKNOWN:
                return "unknown command";
        case NTSERVICE_CMD_INVALID_ARGS:
                return "invalid installation arguments";
        }
        return "unknown error";
}


/////////////////////////////////////////////////////////////////////////////////////////
// Install/uninstall routines

bool CNTService::IsInstalled() const
{
        BOOL bResult = FALSE;

        // Open the Service Control Manager
        SC_HANDLE hSCM = ::OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
        if (hSCM) {

                // Try to open the service
                SC_HANDLE hService = ::OpenService(hSCM, m_szServiceName, SERVICE_QUERY_CONFIG);
                if (hService) {
                        ::CloseServiceHandle(hService);
                        bResult = TRUE;
                }
                ::CloseServiceHandle(hSCM);
        }

        return (bResult ? true : false);
}


bool CNTService::Install(const InstallArguments &arguments)
{
        // Open the Service Control Manager
        SC_HANDLE hSCM = ::OpenSCManagerA(NULL, NULL, SC_MANAGER_ALL_ACCESS);
        if (!hSCM) return false;

        // Executable file path
        char szBinaryPathName[_MAX_PATH + 32];
        DWORD pathlen = ::GetModuleFileNameA(NULL, szBinaryPathName, _MAX_PATH);

        if (NULL != strchr(szBinaryPathName, ' ')) {
                //
                // If the path contains a space, it must be quoted so that it is correctly interpreted.
                // For example, "d:\my share\myservice.exe" should be specified as ""d:\my share\myservice.exe"".
                //
                (void) memmove(szBinaryPathName + 1, szBinaryPathName, pathlen++);
                szBinaryPathName[0] = '"'; szBinaryPathName[pathlen++] = '"'; szBinaryPathName[pathlen] = 0;
        }

        // Optional arguments
        char szBinaryPathNameEx[sizeof(szBinaryPathName)];

        szBinaryPathNameEx[0] = 0;
        if (arguments.additional) {             // Append argument
                const DWORD needed = strlen(arguments.additional) + 2 /*space+nul*/;
                if (needed >= (sizeof(szBinaryPathName) - pathlen)) {
                        ::SetLastError(ERROR_FILE_TOO_LARGE);
                        return false;
                }
                snprintf(szBinaryPathNameEx, sizeof(szBinaryPathNameEx) - 1, "%s %s", szBinaryPathName, arguments.additional);
                szBinaryPathNameEx[sizeof(szBinaryPathNameEx) - 1] = 0;
        }

        // Account and password
        const char *pServiceStartName, *pPassword;
        char t_account_name[128];

        t_account_name[0] = 0;
        if (NULL == (pServiceStartName = arguments.account)) {
                pPassword = NULL;
        } else {
                // The name of the account under which the service should run.
                // If the service type is SERVICE_WIN32_OWN_PROCESS, use an account name in the form "DomainName\\UserName".
                // The service process will be logged on as this user.
                // If the account belongs to the built-in domain, you can specify ".\UserName"
                //
                if (NULL == strchr(pServiceStartName, '\\')) {
                        snprintf(t_account_name, sizeof(t_account_name) - 1, "\\%s", pServiceStartName);
                        t_account_name[sizeof(t_account_name) - 1] = 0;
                        pServiceStartName = t_account_name;
                }
                pPassword = arguments.password;
        }

        // Create the service
        SC_HANDLE hService = ::CreateServiceA(
                                hSCM,
                                m_szServiceName,
                                arguments.displayname ? arguments.displayname : m_szServiceName,
                                SERVICE_ALL_ACCESS,
                                SERVICE_WIN32_OWN_PROCESS,
                                arguments.auto_start ? SERVICE_AUTO_START : SERVICE_DEMAND_START,
                                SERVICE_ERROR_NORMAL,
                                szBinaryPathNameEx[0] ?  szBinaryPathNameEx : szBinaryPathName,
                                NULL, NULL, NULL,
                                pServiceStartName, pPassword);

        if (! hService) {
                ::CloseServiceHandle(hSCM);
                return false;
        }

        // Description
        const char *szDescription = arguments.description;
        if (! szDescription) {
                szDescription = m_szDescription;
        }
        if (szDescription && *szDescription) {
                SERVICE_DESCRIPTIONA sd = {0};

                sd.lpDescription = const_cast<LPSTR>(szDescription);
                if (! ::ChangeServiceConfig2A(hService, SERVICE_CONFIG_DESCRIPTION, &sd)) {
                        DWORD dwRet = GetLastError();
                        diags().ferror("Unable to set description, error %u (%s)", (unsigned)dwRet, StrError(dwRet));
                }
        }

        // Allow open start control
        if (arguments.grant_control) {
                PSECURITY_DESCRIPTOR psd;

                if (NULL != (psd = (PSECURITY_DESCRIPTOR) LocalAlloc(LPTR, SECURITY_DESCRIPTOR_MIN_LENGTH))) {
                        if (! ::InitializeSecurityDescriptor(psd, SECURITY_DESCRIPTOR_REVISION) ||
                            ! ::SetSecurityDescriptorDacl(psd, TRUE, (PACL) NULL, FALSE) ||
                            ! ::SetServiceObjectSecurity(hService, DACL_SECURITY_INFORMATION, psd)) {
                                DWORD dwRet = GetLastError();
                                diags().ferror("Unable to grant open permissions, error %u (%s)", (unsigned)dwRet, StrError(dwRet));
                        }
                        ::LocalFree(psd);
                }
        }

        // Make registry entries to support logging messages
        // Add the source name as a subkey under the Application key in the EventLog service portion of the registry.
        char csKey[HKEY_LENGTH];
        HKEY hKey = NULL;

        snprintf(csKey, sizeof(csKey) - 1, "%s\\%s", HKEY_NT_LOG_EVENT, m_szServiceName);
        csKey[sizeof(csKey) - 1] = 0;

        if (::RegCreateKeyA(HKEY_LOCAL_MACHINE, csKey, &hKey) != ERROR_SUCCESS) {
                ::CloseServiceHandle(hService);
                ::CloseServiceHandle(hSCM);
                return false;
        }

        // Add the Event ID message-file name to the 'EventMessageFile' subkey.
        if (szBinaryPathName[0] == '"') {       // remove quotes
                (void) memmove(szBinaryPathName, szBinaryPathName + 1, pathlen -= 2);
                szBinaryPathName[pathlen] = 0;
        }
        ::RegSetValueExA(hKey, "EventMessageFile", 0, REG_EXPAND_SZ, (CONST BYTE *)szBinaryPathName, (DWORD)pathlen + 1);

        // Set the supported types flags.
        DWORD dwData = EVENTLOG_ERROR_TYPE | EVENTLOG_WARNING_TYPE | EVENTLOG_INFORMATION_TYPE;

        ::RegSetValueExA(hKey, "TypesSupported", 0, REG_DWORD, (CONST BYTE*)&dwData, sizeof(DWORD));
        ::RegCloseKey(hKey);

        LogEvent(EVENTLOG_INFORMATION_TYPE, EVMSG_INSTALLED, m_szServiceName);

        // tidy up
        ::CloseServiceHandle(hService);
        ::CloseServiceHandle(hSCM);
        return true;
}


bool CNTService::Uninstall()
{
        // Open the Service Control Manager
        SC_HANDLE hSCM = ::OpenSCManagerA(NULL, NULL, SC_MANAGER_ALL_ACCESS);
        if (!hSCM) return false;

        BOOL bResult = FALSE;
        SC_HANDLE hService = ::OpenServiceA(hSCM, m_szServiceName, DELETE);
        if (hService) {
                bool bIsRunning = m_bIsRunning;

                // Stop service if started
                if (bIsRunning) {
                        SERVICE_STATUS status = {0};

                        if (! ::ControlService(hService, SERVICE_CONTROL_STOP, &status)) {
                                // Service cannot be stopped
                                LogEvent(EVENTLOG_ERROR_TYPE, EVMSG_FAILED_STOP, m_szServiceName);

                        } else {
                                // Wait shutdown before continuing.
                                ::Sleep(10000);

                                LogEvent(EVENTLOG_INFORMATION_TYPE, EVMSG_STOPPED, m_szServiceName);
                                bIsRunning = false;
                        }
                }

                if (!bIsRunning) {
                        if (::DeleteService(hService)) {
                                LogEvent(EVENTLOG_INFORMATION_TYPE, EVMSG_REMOVED, m_szServiceName);

                                // Delete registry entries for logging message support
                                HKEY hKey = 0;
                                if (::RegOpenKeyExA(HKEY_LOCAL_MACHINE, HKEY_NT_LOG_EVENT, 0, KEY_WRITE, &hKey) == ERROR_SUCCESS) {
                                        ::RegDeleteKey(hKey, m_szServiceName);
                                        ::RegCloseKey(hKey);
                                }
                                bResult = TRUE;

                        } else {
                                LogEvent(EVENTLOG_ERROR_TYPE, EVMSG_NOTREMOVED, m_szServiceName);
                        }
                }

                ::CloseServiceHandle(hService);
        }

        ::CloseServiceHandle(hSCM);
        return (bResult ? true : false);
}


bool CNTService::IsAdmin() const
{
        SID_IDENTIFIER_AUTHORITY siaNtAuthority = SECURITY_NT_AUTHORITY;
        HANDLE hAccessToken;
        UCHAR InfoBuffer[1024];
        PTOKEN_GROUPS ptgGroups = (PTOKEN_GROUPS)InfoBuffer;
        DWORD dwInfoBufferSize;
        PSID psidAdministrators;
        bool ret = false;

        if (! ::OpenThreadToken(GetCurrentThread(), TOKEN_QUERY, TRUE, &hAccessToken)) {
                if (::GetLastError() != ERROR_NO_TOKEN) {
                        return false;
                }

                if (! ::OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hAccessToken)) {
                        return false;
                }
        }

        if (::GetTokenInformation(hAccessToken, TokenGroups, InfoBuffer, 1024, &dwInfoBufferSize)) {
                if (::AllocateAndInitializeSid(&siaNtAuthority, 2,
                            SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &psidAdministrators)) {
                        unsigned g;

                        for (g = 0; g < ptgGroups->GroupCount; ++g) {
                                if (::EqualSid(psidAdministrators, ptgGroups->Groups[g].Sid)) {
                                        ret = true;
                                        break;
                                }
                        }
                }
                ::FreeSid(psidAdministrators);
        }
        ::CloseHandle(hAccessToken);

        return ret;
}


/////////////////////////////////////////////////////////////////////////////////////////
// Registry runtime

//virtual
bool CNTService::ConfigOpen(bool create)
{
        if (registry_.is_open())                // open?
                return true;
        if (registry_.Open(create)) {
                ConfigUpdateProfile();
                return true;
        }
        return false;
}


//virtual
void CNTService::ConfigClose()
{
        registry_.Close();
}


#if defined(__MINGW32__) && !defined(__MINGW64_VERSION_MAJOR)
static int
asctime_s(char *buf, size_t buflen, const struct tm *tm)
{
        static const char day[][4] = {
                "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
                };
        static const char mon[][4] = {
                "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
                };

        snprintf(buf, buflen, "%.3s %.3s%3d %.2d:%.2d:%.2d %d\n", day[tm->tm_wday], mon[tm->tm_mon],
                tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec, 1900 + tm->tm_year);
        buf[buflen - 1] = 0;
        return 0;
}
#endif  //__MINGW32__


//virtual
bool CNTService::ConfigUpdateProfile()
{
        char  version[32] = {0}, now[32] = {0};
        HKEY  hSubkey = NULL;
        DWORD dwRet;

        //  Statistics/
        //      Version
        //      LastStart
        //      LastRun
        //      LastError
        //      Status
        //
        if (! registry_.is_open()) {            // open?
                return true;
        }
                                                // open/create
        if (::RegCreateKeyExA(registry_.RootKey(), "Statistics", 0, NULL, 0,
                        KEY_READ | KEY_WRITE, NULL, &hSubkey, &dwRet) == ERROR_SUCCESS) {

                const time_t curtime = time(NULL);
                (void) snprintf(version, sizeof(version) - 1, "%u.%u.%u",
                        m_iMajorVersion, m_iMinorVersion, m_iReleaseVersion);
                asctime_s(now, sizeof(now), gmtime(&curtime));

                CNTServiceReg::SetValue(hSubkey, diags(), "Version", version);
                if (! m_bIsRunning) {
                        CNTServiceReg::SetValue(hSubkey, diags(), "LastStart", now);
                } else {
                        CNTServiceReg::SetValue(hSubkey, diags(), "LastRun", now);
                }
                CNTServiceReg::Close(hSubkey);
        }
        return true;
}


bool CNTService::ConfigSet(const char *csKey, const char *szValue)
{
        return registry_.Set(csKey, szValue);
}


bool CNTService::ConfigSet(const char *csKey, DWORD dwValue)
{
        return registry_.Set(csKey, dwValue);
}


int CNTService::ConfigGet(const char *csKey, char *szBuffer, size_t dwSize, unsigned flags)
{
        size_t t_dwSize = dwSize;
        if (registry_.Get(csKey, szBuffer, t_dwSize, flags)) {
                return (int)t_dwSize;           // limit of 64k; overflow not possible.
        }
        return 0;
}


bool CNTService::ConfigGet(const char *csKey, DWORD &dwValue, unsigned flags)
{
        return registry_.Get(csKey, dwValue, flags);
}


/////////////////////////////////////////////////////////////////////////////////////////
// Application event logging

void CNTService::LogMessage(const char *fmt, ...)
{
        char message[256] = {0};
        va_list ap;

        va_start(ap, fmt);
        vsnprintf(message, sizeof(message) - 1, fmt, ap);
        LogEvent(EVENTLOG_INFORMATION_TYPE, EVMSG_GENERIC_MESSAGE, message);
        va_end(ap);
}


void CNTService::LogError(bool assystem, const char *fmt, ...)
{
        const DWORD dwID = (assystem ? EVMSG_GENERIC_ERROR : EVMSG_GENERIC_MESSAGE);
        char message[256] = {0};
        va_list ap;

        va_start(ap, fmt);
        vsnprintf(message, sizeof(message) - 1, fmt, ap);
        LogEvent(EVENTLOG_ERROR_TYPE, dwID, message);
        va_end(ap);
}


void CNTService::LogEvent(WORD wType, DWORD dwID, const char* pszS1, const char* pszS2, const char* pszS3)
{
        const char* ps[3];

        ps[0] = pszS1;
        ps[1] = pszS2;
        ps[2] = pszS3;

        int iStr = 0;
        for (int i = 0; i < 3; i++) {
                if (ps[i] != NULL) ++iStr;
        }

        // Check the event source has been registered and if not then register it now
        if (! m_hEventSource) {
                m_hEventSource = ::RegisterEventSourceA(NULL, m_szServiceName);
        }

        if (m_hEventSource) {
                ::ReportEventA(m_hEventSource, wType, 0, dwID, NULL, iStr, 0, ps, NULL);
        }

        if (m_bRunAsConsole) {
                diags().ferror("LOGEVENT: %u, %u, %s %s %s", wType, dwID,
                        (pszS1 ? pszS1 : ""), (pszS2 ? pszS2 : ""), (pszS3 ? pszS3 : ""));
        }
}


/////////////////////////////////////////////////////////////////////////////////////////
// Service startup and registration

bool CNTService::SetVersion(unsigned major, unsigned minor, unsigned release /*= 0*/)
{
        if (m_bIsRunning || registry_.is_open()) {
                return false;
        }

        m_iMajorVersion = major;
        m_iMinorVersion = minor;
        m_iReleaseVersion = release;
        return true;
}


bool CNTService::SetDescription(const char *szDescription)
{
        if (!szDescription) return false;
        if (m_bIsRunning || registry_.is_open()) {
                return false;
        }

        assert(strlen(szDescription) < sizeof(m_szDescription));
        strncpy(m_szDescription, szDescription, sizeof(m_szDescription) - 1);
        m_szDescription[sizeof(m_szDescription) - 1] = 0;

        return true;
}


bool CNTService::SetCompany(const char *szCompany, bool reopen /*=false*/)
{
        if (!szCompany) return false;
        return registry_.SetCompany(szCompany, reopen);
}


const char * CNTService::GetCompany() const
{
        return registry_.GetCompany();
}


bool CNTService::SetConsoleMode(bool isconsole, bool trap /*= true*/)
{
        if (m_bIsRunning) {
                return false;
        }

        m_bRunAsConsole = isconsole;
        if (isconsole) m_bRunAsConsole = trap;
        return true;
}


bool CNTService::GetConsoleMode() const
{
        return m_bRunAsConsole;
}


bool CNTService::Start()
{
        if (m_bRunAsConsole) {
                return ConsoleStart();
        }
        return ServiceStart();
}


bool CNTService::ConsoleStart()
{
        assert(this == __serviceInstance);
        assert(! m_bIsRunning);
        if (m_bIsRunning) {
                return false;
        }

        // Optional console interface
        if (m_bConsoleTrap) {
                ::SetConsoleCtrlHandler(CNTService::ConsoleHandler, TRUE);
                printf("Press Ctrl+C or Ctrl+Break to quit...");
                // TODO:
                //  ConsoleMonitorThread()
        }

        m_bRunAsConsole = true;                 // implied.
        m_bIsRunning = true;

        if (OnInit()) {
                ConfigUpdateProfile();          // required ??
                ServiceRun();                   // generally overridden
                OnShutdown();
        }

        m_bIsRunning = false;
        if (m_bConsoleTrap) {
                ::SetConsoleCtrlHandler(CNTService::ConsoleHandler, FALSE);
                printf("\nexiting ..\n");
        }

        return true;
}


bool CNTService::ServiceStart()
{
        SERVICE_TABLE_ENTRY st[] = {
                { m_szServiceName, ServiceMain },
                { NULL, NULL }
        };

        assert(this == __serviceInstance);
        assert(! m_bIsRunning);
        if (m_bIsRunning) {
                // Already running
                return false;
        }

        BOOL b = ::StartServiceCtrlDispatcher(st);

        if (! b) {
                const DWORD dwRet = ::GetLastError();
                if (ERROR_FAILED_SERVICE_CONTROLLER_CONNECT == dwRet) {
                        ServiceTrace("Not a service ....");
                } else {
                }
        }
        return (b ? true : false);
}


// static
// Service callback ..
void CNTService::ServiceMain(DWORD dwArgc, LPTSTR* lpszArgv)
{
        // Get a pointer to the C++ object
        CNTService* pService = __serviceInstance;

        assert(pService);
        pService->ServiceTrace("Entering CNTService::ServiceMain()");

        // Register the control request handler
        pService->m_Status.dwCurrentState = SERVICE_START_PENDING;
        pService->m_hServiceStatus = ::RegisterServiceCtrlHandlerA(pService->m_szServiceName, ControlHandler);
        if ((SERVICE_STATUS_HANDLE)NULL == pService->m_hServiceStatus) {
                pService->LogEvent(EVENTLOG_ERROR_TYPE, EVMSG_CTRLHANDLERNOTINSTALLED);
                return;
        }

        // Start the initialisation
        if (pService->Initialize()) {
                pService->m_bIsRunning = true;
                pService->m_Status.dwWin32ExitCode = 0;
                pService->m_Status.dwCheckPoint = 0;
                pService->m_Status.dwWaitHint = 0;
                pService->ConfigUpdateProfile();
                pService->ServiceRun();
        }

        // Tell the service manager we are stopped
        pService->SetStatus(SERVICE_STOPPED);

        pService->ServiceTrace("Leaving CNTService::ServiceMain()");
}


///////////////////////////////////////////////////////////////////////////////////////////
// status functions

bool CNTService::SetStatus(DWORD dwState, DWORD dwWin32ExitCode /*= 0*/, DWORD dwWaitHintMs /*= 0*/)
{
        switch (dwState) {
        case SERVICE_CONTINUE_PENDING:      // 0x00000005, service continue is pending.
        case SERVICE_PAUSE_PENDING:         // 0x00000006, service pause is pending.
        case SERVICE_PAUSED:                // 0x00000007, service is paused.
        case SERVICE_RUNNING:               // 0x00000004, service is running.
        case SERVICE_START_PENDING:         // 0x00000002, service is starting.
        case SERVICE_STOP_PENDING:          // 0x00000003, service is stopping.
        case SERVICE_STOPPED:               // 0x00000001, service has stopped.
                break;
        default:
                ServiceTrace("NTService::SetStatus(%lu, %lu) -- Unknown", m_hServiceStatus, dwState);
                assert(false);
                return false;
        }

        ServiceTrace("NTService::SetStatus(%lu, %lu)", m_hServiceStatus, dwState);

        m_Status.dwCurrentState = dwState;
        if (dwState == SERVICE_STOPPED) {
                m_Status.dwWin32ExitCode = dwWin32ExitCode;
        }
        m_Status.dwWaitHint = dwWaitHintMs;

        if (dwState == SERVICE_START_PENDING) {
                m_Status.dwControlsAccepted = 0;
        } else {
                m_Status.dwControlsAccepted = m_dwControlsAccepted;
        }

        if ((dwState == SERVICE_RUNNING) || (dwState == SERVICE_STOPPED)) {
                m_Status.dwCheckPoint = 0;
        } else {
                m_Status.dwCheckPoint = m_dwCheckPoint++;
        }

        // Report the status of the service to the SCM.
        return (0 != ::SetServiceStatus(m_hServiceStatus, &m_Status));
}


///////////////////////////////////////////////////////////////////////////////////////////
// Service initialization

bool CNTService::Initialize()
{
        ServiceTrace("Entering CNTService::Initialize()");

        // Start the initialization
        SetStatus(SERVICE_START_PENDING);

        // Perform the actual initialization
        BOOL bResult = OnInit();

        // Set final state
        m_Status.dwWin32ExitCode = GetLastError();
        m_Status.dwCheckPoint = 0;
        m_Status.dwWaitHint = 0;
        if (! bResult) {
                LogEvent(EVENTLOG_ERROR_TYPE, EVMSG_FAILEDINIT);
                SetStatus(SERVICE_STOPPED);
                return false;
        }

        LogEvent(EVENTLOG_INFORMATION_TYPE, EVMSG_STARTED);
        SetStatus(SERVICE_RUNNING);

        ServiceTrace("Leaving CNTService::Initialize()");
        return true;
}


///////////////////////////////////////////////////////////////////////////////////////////////
// Main function to do the real work of the service
// Genera;lly overidden by a derived class.

// Service main execution loop; exiting on the serving being stopped.
void CNTService::ServiceRun()
{
        ServiceTrace("Entering CNTService::ServiceRun()");
        while (m_bIsRunning &&                  // await shutdown
                    WAIT_TIMEOUT == ::WaitForSingleObject(m_hStopEvent, 30*1000)) {
                ServiceTrace("Sleeping...");
        }
        ServiceTrace("Leaving CNTService::ServiceRun()");
}


//////////////////////////////////////////////////////////////////////////////////////////////
// Control request handlers

//static
// function (callback) to handle commands from the service control manager
void CNTService::ControlHandler(DWORD dwOpcode)
{
        // Get a pointer to the object
        CNTService* pService = __serviceInstance;

        assert(pService);
        if (! pService) return;

        pService->ServiceTrace("NTService::Handler(%lu)", dwOpcode);
        switch (dwOpcode) {
        case SERVICE_CONTROL_STOP:          // 1
                pService->SetStatus(SERVICE_STOP_PENDING);
                pService->OnStop();
                pService->m_bIsRunning = false;
                ::SetEvent(pService->m_hStopEvent);
                pService->LogEvent(EVENTLOG_INFORMATION_TYPE, EVMSG_STOPPED);
                break;

        case SERVICE_CONTROL_PAUSE:         // 2
                pService->OnPause();
                break;

        case SERVICE_CONTROL_CONTINUE:      // 3
                pService->OnContinue();
                break;

        case SERVICE_CONTROL_INTERROGATE:   // 4
                pService->OnInterrogate();
                break;

        case SERVICE_CONTROL_SHUTDOWN:      // 5
                pService->SetStatus(SERVICE_STOP_PENDING);
                pService->OnShutdown();
                pService->m_bIsRunning = false;
                pService->LogEvent(EVENTLOG_INFORMATION_TYPE, EVMSG_STOPPED);
                break;

    /*  case SERVICE_CONTROL_PARAMCHANGE:   // 0x06
                break;
        case SERVICE_CONTROL_NETBINDADD:    // 0x07
                break;
        case SERVICE_CONTROL_NETBINDREMOVE: // 0x08
                break;
        case SERVICE_CONTROL_NETBINDENABLE: // 0x09
                break;
        case SERVICE_CONTROL_NETBINDDISABLE:// 0x0A
                break;
        case SERVICE_CONTROL_DEVICEEVENT:   // 0x0B
                break;
        case SERVICE_CONTROL_HARDWAREPROFILECHANGE: // 0x0C
                break;
#if (_WIN32_WINNT >= 0x0502)
        case SERVICE_CONTROL_POWEREVENT:    // 0x0D
                break;
#endif
#if (_WIN32_WINNT >= 0x0501)
        case SERVICE_CONTROL_SESSIONCHANGE: // 0x0E
                break;
#endif
        case SERVICE_CONTROL_PRESHUTDOWN:   // 0x0F
                break:
        case SERVICE_CONTROL_TIMECHANGE:    // 0x10
                break;
        case SERVICE_CONTROL_TRIGGEREVENT:  // 0x20
                break:
        */
        default:
                if (dwOpcode >= SERVICE_CONTROL_USER) {
                        if (! pService->OnUserControl(dwOpcode)) {
                                pService->LogEvent(EVENTLOG_ERROR_TYPE, EVMSG_BADREQUEST);
                        }
                } else {
                        pService->LogEvent(EVENTLOG_ERROR_TYPE, EVMSG_BADREQUEST);
                }
                break;
        }

        // Report current status
        pService->ServiceTrace("Updating status (%lu, %lu)", pService->m_hServiceStatus, pService->m_Status.dwCurrentState);
        ::SetServiceStatus(pService->m_hServiceStatus, &pService->m_Status);
}


// called when the service is first initialized
bool CNTService::OnInit()
{
        if (m_szDescription[0]) {
                ServiceTrace("%s (%s) - Version %d.%d",
                        m_szServiceName, m_szDescription, m_iMajorVersion, m_iMinorVersion);
        } else {
                ServiceTrace("%s - Version %d.%d",
                        m_szServiceName, m_iMajorVersion, m_iMinorVersion);
        }
        if (! ConfigOpen()) {
                return false;
        }
        ShowUser();
        ShowModules();
        ShowStatistics();
        return true;
}


// called when the service control manager wants to stop the service
void CNTService::OnStop()
{
        ServiceTrace("NTService::OnStop()");
}


// called when the service is interrogated
void CNTService::OnInterrogate()
{
        ServiceTrace("NTService::OnInterrogate()");
}


// called when the service is paused
void CNTService::OnPause()
{
        ServiceTrace("NTService::OnPause()");
}


// called when the service is continued
void CNTService::OnContinue()
{
        ServiceTrace("NTService::OnContinue()");
}


// called when the service is shut down
void CNTService::OnShutdown()
{
        ServiceTrace("NTService::OnShutdown()");
}


// called when the service gets a user control message
bool CNTService::OnUserControl(DWORD dwOpcode)
{
        ServiceTrace("NTService::OnUserControl(%8.8lXH)", dwOpcode);
        return false;
}


bool CNTService::IsRunning() const
{
        return m_bIsRunning;
}


DWORD CNTService::GetWin32ExitCode() const
{
        return m_Status.dwWin32ExitCode;
}


HANDLE CNTService::StopEvent() const
{
        return m_hStopEvent;
}


////////////////////////////////////////////////////////////////////////////////////////////
// Console support

BOOL WINAPI CNTService::ConsoleHandler(DWORD dwCtrlType)
{
        CNTService* pService = __serviceInstance;

        assert(pService);
        if (! pService) {
            return FALSE;
        }

        switch (dwCtrlType) {
        case CTRL_C_EVENT:
        case CTRL_BREAK_EVENT:
        case CTRL_SHUTDOWN_EVENT:
                printf("\nexiting service ...");
                pService->m_bIsRunning = false;
                ::SetEvent(pService->m_hStopEvent);
                return TRUE; //servived
        }
        return FALSE;
}


////////////////////////////////////////////////////////////////////////////////////////////
// Debugging support

struct ModuleProfile {
        NTService::CString Comments;
        NTService::CString CompanyName;
        NTService::CString FileDescription;
        NTService::CString FileVersion;
        NTService::CString LegalCopyright;
        NTService::CString LegalTrademarks;
        NTService::CString ProductName;
        NTService::CString ProductVersion;
};

static bool
GetModuleVersion(const char *szModule, char *buffer, size_t buflen, ModuleProfile *profile = NULL)
{
        bool ret = false;
        DWORD handle = 0, dwSize = 0;
        char *data = NULL;

        if (0 != (dwSize = ::GetFileVersionInfoSizeA(szModule, &handle)) &&
                        (NULL != (data = (char *) ::malloc(dwSize)))) {

                LPBYTE lpBuffer = NULL;
                UINT uSize = 0;

                if (::GetFileVersionInfoA(szModule, handle, dwSize, data) &&
                                ::VerQueryValueA(data, "\\", (LPVOID *) &lpBuffer, &uSize) && uSize) {
                        const VS_FIXEDFILEINFO *fvi = (VS_FIXEDFILEINFO *)lpBuffer;

                        if (fvi->dwSignature == 0xfeef04bd)  {
                                snprintf(buffer, buflen, "%d.%d.%d.%d",
                                    (fvi->dwFileVersionMS >> 16) & 0xffff, (fvi->dwFileVersionMS >> 0) & 0xffff,
                                    (fvi->dwFileVersionLS >> 16) & 0xffff, (fvi->dwFileVersionLS >> 0) & 0xffff);
                                buffer[buflen - 1] = 0;
                                ret = true;
                        }

                        if (profile) {      // Language ID=040904E4 (U.S. English, char set = Windows, Multilingual)
                                // Comments
                                if (::VerQueryValueA(data, "\\StringFileInfo\\040904E4\\Comments",
                                                (LPVOID *) &lpBuffer, &uSize) && uSize) {
                                        profile->Comments.assign((const char *)lpBuffer, uSize);
                                }

                                // CompanyName
                                if (::VerQueryValueA(data, "\\StringFileInfo\\040904E4\\CompanyName",
                                                (LPVOID *) &lpBuffer, &uSize) && uSize) {
                                        profile->CompanyName.assign((const char *)lpBuffer, uSize);
                                }

                                // FileDescription
                                if (::VerQueryValueA(data, "\\StringFileInfo\\040904E4\\FileDescription",
                                                (LPVOID *) &lpBuffer, &uSize) && uSize) {
                                        profile->FileDescription.assign((const char *)lpBuffer, uSize);
                                }

                                // FileVersion
                                if (::VerQueryValueA(data, "\\StringFileInfo\\040904E4\\FileVersion",
                                                (LPVOID *) &lpBuffer, &uSize) && uSize) {
                                        profile->FileVersion.assign((const char *)lpBuffer, uSize);
                                }

                                // InternalName

                                // LegalCopyright
                                if (::VerQueryValueA(data, "\\StringFileInfo\\040904E4\\LegalCopyright",
                                                (LPVOID *) &lpBuffer, &uSize) && uSize) {
                                        profile->LegalCopyright.assign((const char *)lpBuffer, uSize);
                                }

                                // LegalTrademarks
                                if (::VerQueryValueA(data, "\\StringFileInfo\\040904E4\\LegalTrademarks",
                                                (LPVOID *) &lpBuffer, &uSize) && uSize) {
                                        profile->LegalTrademarks.assign((const char *)lpBuffer, uSize);
                                }

                                // OriginalFilename
                                // PrivateBuild

                                // ProductName
                                if (::VerQueryValueA(data, "\\StringFileInfo\\040904E4\\ProductName",
                                                (LPVOID *) &lpBuffer, &uSize) && uSize) {
                                        profile->ProductName.assign((const char *)lpBuffer, uSize);
                                }

                                // ProductVersion
                                if (::VerQueryValueA(data, "\\StringFileInfo\\040904E4\\ProductVersion",
                                                (LPVOID *) &lpBuffer, &uSize) && uSize) {
                                        profile->ProductVersion.assign((const char *)lpBuffer, uSize);
                                }

                                // SpecialBuild
                        }
                }
                ::free((void *)data);
        }
        return ret;
}


void CNTService::ShowVersion()
{
        char t_version[32] = {0};
        if (GetModuleVersion(m_szModule, t_version, sizeof(t_version))) {
                ServiceTrace("File Version: %s", t_version);
        }
}


#ifdef _WIN64
static BOOL CALLBACK
ModuleEnumCb(PCSTR ModuleName, DWORD64 ModuleBase, ULONG ModuleSize, PVOID UserContext)
#else
static BOOL CALLBACK
ModuleEnumCb(PCSTR ModuleName, ULONG ModuleBase, ULONG ModuleSize, PVOID UserContext)
#endif
{
        CNTService *self = (CNTService *) UserContext;
        HMODULE aModule = (HMODULE) ModuleBase;

        self->__ModuleEnumImp(aModule);         // Module enum implementation.
        return TRUE;
}


bool CNTService::ShowUser()
{
        HANDLE hProcess = GetCurrentProcess(), hToken = 0;
        PTOKEN_USER ptu = NULL;
        DWORD dwLength = 0;
        bool ret = false;

        if (! ::OpenProcessToken(hProcess, TOKEN_QUERY, &hToken)) {
                return false;
        }

        if (! ::GetTokenInformation(hToken, TokenUser, NULL, 0, &dwLength) &&
                        ERROR_INSUFFICIENT_BUFFER == GetLastError()) {
                if (NULL != (ptu = (PTOKEN_USER)
                                HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, dwLength)) &&
                            ::GetTokenInformation(hToken, TokenUser, ptu, dwLength, &dwLength)) {

                        char lpName[256] = {0}, lpDomain[256] = {0};
                        DWORD dwSize = sizeof(lpName);
                        SID_NAME_USE SidType;

                        if (::LookupAccountSid(NULL, ptu->User.Sid, lpName, &dwSize, lpDomain, &dwSize, &SidType)) {
                                ServiceTrace("Process: %u, running as <%s\\%s>",
                                    (unsigned) GetProcessId(hProcess), lpDomain, lpName);
                                ret = true;
                        }
                }
        }

        if (! ret) {
                ServiceTrace("Process: %u, running as <Unknown> : %s",
                    (unsigned) GetProcessId(hProcess), StrError());
        }

        if (ptu != NULL) {
                ::HeapFree(GetProcessHeap(), 0, (LPVOID)ptu);
        }
        return ret;
}


void CNTService::ShowModules(bool verbose)
{
        ServiceTrace("Module: %s", m_szModule);
#if defined(_WIN64)
        ::EnumerateLoadedModules64(::GetCurrentProcess(),
                (PENUMLOADED_MODULES_CALLBACK64) &ModuleEnumCb, (void *) this);
#else
        ::EnumerateLoadedModules(::GetCurrentProcess(),
                (PENUMLOADED_MODULES_CALLBACK) &ModuleEnumCb, (void *) this);
#endif
}


void CNTService::__ModuleEnumImp(HMODULE hModule, bool loaded /*=true*/)
{
        char t_szModule[256], t_version[32];

        t_szModule[0] = 0; ::GetModuleFileNameA(hModule, t_szModule, sizeof(t_szModule));
        if (0 != strcmp(t_szModule, m_szModule)) {
                if (! GetModuleVersion(t_szModule, t_version, sizeof(t_version))) {
                        t_version[0] = 0;       // unknown
                }
                ServiceTrace("Module: %s %s 0x%p, version %s", (loaded ? "loaded" : "unloaded"),
                    t_szModule, (void *)hModule, (t_version[0] ? t_version : "<n/a>"));
        }
}


void CNTService::ShowStatistics()
{
        MEMORYSTATUSEX msx = {sizeof(MEMORYSTATUSEX)};
        PROCESS_MEMORY_COUNTERS pmc = {0};

#define WIDTH   9
        ::GlobalMemoryStatusEx(&msx);
        diags().finfo("SystemStatistics");
        diags().finfo("  %*ld percent of memory in use.", WIDTH, msx.dwMemoryLoad);
        diags().finfo("  %*I64d total KB of physical memory.", WIDTH, msx.ullTotalPhys / 1024);
        diags().finfo("  %*I64d free  KB of physical memory.", WIDTH, msx.ullAvailPhys / 1024);
        diags().finfo("  %*I64d total KB of paging file.", WIDTH, msx.ullTotalPageFile / 1024);
        diags().finfo("  %*I64d free  KB of paging file.", WIDTH, msx.ullAvailPageFile / 1024);
        diags().finfo("  %*I64d total KB of virtual memory.", WIDTH, msx.ullTotalVirtual / 1024);
        diags().finfo("  %*I64d free  KB of virtual memory.", WIDTH, msx.ullAvailVirtual / 1024);
        diags().finfo("  %*I64d free  KB of extended memory.", WIDTH, msx.ullAvailExtendedVirtual / 1024);

        if (! ::GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc))) {
                //  SIZE_T virtualMemUsedByMe = pmc.PrivateUsage;
                //      Note: The name "TotalPageFile" is a bit misleading here.
                //      In reality this parameter gives the "Virtual Memory Size", which is size of swap file plus installed RAM.
            return;
        }

        diags().finfo("ProcessStatistics");
        diags().finfo("  %*u Working set size", WIDTH, pmc.WorkingSetSize / 1024);
        diags().finfo("  %*u Quota peak paged pool usage", WIDTH, pmc.QuotaPeakPagedPoolUsage / 1024);
        diags().finfo("  %*u Quota paged pool usage", WIDTH, pmc.QuotaPagedPoolUsage / 1024);
        diags().finfo("  %*u Quota peak Nonpaged pool usage", WIDTH, pmc.QuotaPeakNonPagedPoolUsage / 1024);
        diags().finfo("  %*u Quota nonpaged pool usage", WIDTH, pmc.QuotaNonPagedPoolUsage / 1024);
        diags().finfo("  %*u Page file usage", WIDTH, pmc.PagefileUsage / 1024);
        diags().finfo("  %*u Peak page file usage", WIDTH, pmc.PeakPagefileUsage / 1024);
}


const char *CNTService::StrError(DWORD dwError)
{
        DWORD   len = ::FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS |
                            FORMAT_MESSAGE_MAX_WIDTH_MASK, NULL,
                            dwError, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                                m_szStrError, sizeof(m_szStrError)-1 /*nul*/, NULL);

        if (0 == len) {
                memcpy(m_szStrError, "Unknown error", sizeof("Unknown error"));
        } else {
                while (--len) {                 // remove trailing whitespace
                        const char ch = m_szStrError[len];
                        if (ch == ' ' || ch == '.' || ch == '\n' || ch == '\r') {
                                continue;       // consume
                        }
                        break;  //done
                }
                m_szStrError[len+1] = 0;
        }
        return m_szStrError;
}


const char * CNTService::StrError()
{
        return StrError(GetLastError());
}


void CNTService::SystemError(const char *msg)
{
        DWORD   dwError = GetLastError();
        LPVOID  buf = NULL;

        ::FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS |
                FORMAT_MESSAGE_MAX_WIDTH_MASK | FORMAT_MESSAGE_ALLOCATE_BUFFER, NULL,
                dwError, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                    (LPTSTR) &buf, 0, NULL);

        diags().ferror("%s: System error 0x%x/%u (%s)\n", msg,
                (unsigned)dwError, (unsigned)dwError, (buf ? buf : "Unknown error"));

        ::LocalFree(buf);
}


void CNTService::ServiceTrace(const char *fmt, ...)
{
        int space, length, length2;
        char buffer[2 * 1024];
        va_list ap;

        va_start(ap, fmt);

        space = sizeof(buffer) / 2; /*half*/
        if ((length = snprintf(buffer, space, "[%s](%lu): ", m_szServiceName, GetCurrentThreadId())) < 0 ||
                            length >= space) {
                length  = space;
        }
        space = (sizeof(buffer) - length) - 2; /*nl/nul*/
        if ((length2 = vsnprintf(buffer + length, space, fmt, ap)) < 0 ||
                            length2 >= space) {
                length2 = space;
        }
        va_end(ap);

        diags().debug(buffer);

        if (m_bDebugOutput) {
                length += length2;
                buffer[length] = '\n', buffer[++length] = 0;
                ::OutputDebugStringA(buffer);
        }
}

//end

