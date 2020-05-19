#include <edidentifier.h>
__CIDENT_RCSID(Session_cpp,"$Id: Session.cpp,v 1.13 2020/05/19 20:11:32 cvsuser Exp $")

/* -*- mode: c; indent-width: 4; -*- */
/*
 * win rlogind
 *
 * Copyright (c) 2020, Adam Young.
 * All rights reserved.
 *
 * This file is part of the WinRSH/WinSSH project.
 *
 * The WinRSH/WinSSH project is free software: you can redistribute it
 * and/or modify it under the terms of the WinRSH/WinSSH project License.
 *
 * Redistributions of source code must retain the above copyright
 * notice, and must be distributed with the license document above.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, and must include the license document above in
 * the documentation and/or other materials provided with the
 * distribution.
 *
 * The WinRSH/WinSSH project is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * ==end==
 */
/*-
 * Copyright (c) 1983, 1988, 1989, 1993
 *      The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $NetBSD: rlogind.c,v 1.42 2012/11/04 21:35:45 christos Exp $
 */

/*
 * remote login server:
 *      \0
 *      remuser\0
 *      locuser\0
 *      terminal_type/speed\0
 *      data
 */

#include "config.h"

#include <sys/cdefs.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>

#include <pwd.h>
#include <err.h>

#include "rlogind.h"                            // public interface
#include "session.h"                            // public interface
#include "conpty.h"                             // ConPTY management

#include "w32support.h"                         // General windows tweaks
#include "W32poll.h"                            // W32Poll

#include "../librcmd/rcmd.h"
#include "winsize.h"
#include "syslog.h"
#include "vis.h"

#if defined(_MSC_VER)
#include <msvc_system_error.hpp>
#endif
#include <iostream>
#include <string>
#include <new>

#if defined(__WATCOMC__)                        // missing 1.9
static BOOLEAN IN6_IS_ADDR_V4MAPPED(const IN6_ADDR *a)
{
    return (BOOLEAN)((a->s6_words[0] == 0) &&
                     (a->s6_words[1] == 0) &&
                     (a->s6_words[2] == 0) &&
                     (a->s6_words[3] == 0) &&
                     (a->s6_words[4] == 0) &&
                     (a->s6_words[5] == 0xffff));
}
#endif  //__WATCOMC__

static const char magic[2] =                    /* OOB magic */
        { (char)0377, (char)0377 };


///////////////////////////////////////////////////////////////////////////////
//      rlogin client
//

extern "C" void
rlogin(const struct Options *options, int clientfd)
{
        if (ConPTY::initialise_conpty()) {      /* ConPty */
                Session *session = NULL;
                int ret = -1;

                try {
                        session = new(std::nothrow) Session(options);
                        ret = session->rlogin(clientfd);

                } catch (const char *reason) {
                        syslog(LOG_INFO, "connection broken : %s", reason);

                } catch (std::exception &msg) {
                        syslog(LOG_WARNING, "connection terminated : exception, %s", msg.what());                  

                } catch (...) {
                        syslog(LOG_WARNING, "connection terminated : exception");
                }
                delete session;
        }
}


///////////////////////////////////////////////////////////////////////////////
//      rlogin client session
//

Session::Session(const struct Options *options) :
                options_(*options), netf_(0), pty_(0), confirmed_(0), win_()
{
        oobdata_[0] = (char)TIOCPKT_WINDOW;

        memset(lusername_, 0, sizeof(lusername_));
        memset(rusername_, 0, sizeof(rusername_));
        memset(env_, 0, sizeof(env_));
        memset(term_, 0, sizeof(term_));

#define ENVSIZE (sizeof("TERM=") - 1)           /* skip null for concatenation */
        strcpy(term_, "TERM=");
}


Session::~Session()
{
        if (pty_) delete pty_;
        if (netf_ >= 0) sockclose(netf_);
}


int
Session::rlogin(int clientfd)
{
        struct sockaddr_storage from = {0};
        socklen_t fromlen = sizeof(from);
        int on;

        netf_ = clientfd;
        if (getpeername(clientfd, (struct sockaddr *)&from, &fromlen) < 0) {
                syslog(LOG_ERR,"Can't get peer name of remote host: %m");
                return -1;
        }

#ifdef INET6
        if (from.ss_family == AF_INET6 &&
                    IN6_IS_ADDR_V4MAPPED(&((struct sockaddr_in6 *)&from)->sin6_addr) &&
                    sizeof(struct sockaddr_in) <= sizeof(from)) {
                struct sockaddr_in sin4;
                struct sockaddr_in6 *sin6;
                const int off = sizeof(struct sockaddr_in6) -
                    sizeof(struct sockaddr_in);

                sin6 = (struct sockaddr_in6 *)&from;
                memset(&sin4, 0, sizeof(sin4));
                sin4.sin_family = AF_INET;
            //  sin4.sin_len = sizeof(struct sockaddr_in);
                memcpy(&sin4.sin_addr, &sin6->sin6_addr.s6_addr[off], sizeof(sin4.sin_addr));
                memcpy(&from, &sin4, sizeof(sin4));
        }
#else
        if (from.ss_family == AF_INET6 &&
                        IN6_IS_ADDR_V4MAPPED(&((struct sockaddr_in6 *)&from)->sin6_addr)) {
                char hbuf[NI_MAXHOST];
                if (getnameinfo((struct sockaddr *)&from, fromlen, hbuf,
                                sizeof(hbuf), NULL, 0, NI_NUMERICHOST) != 0) {
                        strlcpy(hbuf, "invalid", sizeof(hbuf));
                }
                syslog(LOG_ERR, "malformed \"from\" address (v4 mapped, %s)\n", hbuf);
                return;
        }
#endif

        on = 1;
        if (options_.keepalive &&
                        setsockopt(netf_, SOL_SOCKET, SO_KEEPALIVE, &on, sizeof (on)) < 0) {
                syslog(LOG_WARNING, "setsockopt (SO_KEEPALIVE): %m");
        }

#if defined(IP_TOS) && defined(IPTOS_LOWDELAY)
        if (from.ss_family == AF_INET) {
                on = IPTOS_LOWDELAY;
                if (setsockopt(0, IPPROTO_IP, IP_TOS, (char *)&on, sizeof(int)) < 0) {
                        syslog(LOG_WARNING, "setsockopt (IP_TOS): %m");
                }
        }
#endif

        if (ioctlsocket(netf_, FIONBIO, &on) < 0) {
                syslog(LOG_WARNING, "setsockopt (FIONBIO): %m");
        }

        return doit(&from);
}


int
Session::doit(struct sockaddr_storage *fromp)
{
        const socklen_t fromlen = sizeof(*fromp);
        const int niflags = NI_NUMERICHOST | NI_NUMERICSERV;
        const int af = fromp->ss_family;

        int  on = 1, authenticated = 0;
        char *hostname;
        char hostnamebuf[2 * MAXHOSTNAMELEN + 1];
//      char hostaddrbuf[sizeof(*fromp) * 4 + 1];
        char naddr[NI_MAXHOST];
        char saddr[NI_MAXHOST];
        char raddr[NI_MAXHOST];
        char c = -1;

        struct addrinfo hints, *res, *res0;
        u_int16_t *portp;
        int  gaierror;

        {       struct pollfd fd;
                fd.fd = netf_;
                fd.events = POLLIN;
                if (1 == poll(&fd, 1, 60 * 1000)) {
                        sockread(netf_, &c, 1);
                }
        }
        if (0 != c) {
                syslog(LOG_ERR, "malformed signature");
                return -1;
        }

        switch (af) {
        case AF_INET:
                portp = &((struct sockaddr_in *)fromp)->sin_port;
                break;
#ifdef INET6
        case AF_INET6:
                portp = &((struct sockaddr_in6 *)fromp)->sin6_port;
                break;
#endif
        default:
                syslog(LOG_ERR, "malformed \"from\" address (af %d)\n", af);
                return -1;
        }

        if (getnameinfo((struct sockaddr *)fromp, fromlen,
                    naddr, sizeof(naddr), NULL, 0, niflags) != 0) {
                syslog(LOG_ERR, "malformed \"from\" address (af %d)\n", af);
                return -1;
        }

        if (getnameinfo((struct sockaddr *)fromp, fromlen,
                    saddr, sizeof(saddr), NULL, 0, NI_NAMEREQD) == 0) {
                /*
                 * If name returned by getnameinfo is in our domain,
                 * attempt to verify that we haven't been fooled by someone
                 * in a remote net; look up the name and check that this
                 * address corresponds to the name.
                 */
                hostname = saddr;
                res0 = NULL;
                if (options_.check_all || local_domain(saddr)) {
                        strlcpy(hostnamebuf, saddr, sizeof(hostnamebuf));
                        memset(&hints, 0, sizeof(hints));
                        hints.ai_family = fromp->ss_family;
                        hints.ai_socktype = SOCK_STREAM;
                        hints.ai_flags = AI_CANONNAME;
                        gaierror = getaddrinfo(hostnamebuf, "0", &hints, &res0);
                        if (gaierror) {
                                syslog(LOG_NOTICE, "Couldn't look up address for %s: %s",
                                    hostnamebuf, gai_strerror(gaierror));
                                hostname = naddr;
                        } else {
                                for (res = res0; res; res = res->ai_next) {
                                        if (res->ai_family != fromp->ss_family)
                                                continue;
                                //      if (res->ai_addrlen != fromp->ss_len)
                                //              continue;
                                        if (getnameinfo(res->ai_addr, res->ai_addrlen,
                                                raddr, sizeof(raddr), NULL, 0, niflags) == 0
                                                        && strcmp(naddr, raddr) == 0) {
                                                hostname = res->ai_canonname
                                                        ? res->ai_canonname
                                                        : saddr;
                                                break;
                                        }
                                }
                                if (res == NULL) {
                                        syslog(LOG_NOTICE,  "Host addr %s not listed for host %s",
                                            naddr, res0->ai_canonname
                                                    ? res0->ai_canonname
                                                    : saddr);
                                        hostname = naddr;
                                }
                        }
                }
                strlcpy(hostnamebuf, hostname, sizeof(hostnamebuf));
                hostname = hostnamebuf;
                if (res0)
                        freeaddrinfo(res0);

        } else {
                if (options_.reverse_required) {
                        syslog(LOG_NOTICE, "can't resolve remote IP address");
                        remote_fatal("Permission denied", 0);
                }
                strlcpy(hostnamebuf, naddr, sizeof(hostnamebuf));
                hostname = hostnamebuf;
        }

        if (ntohs(*portp) >= IPPORT_RESERVED || ntohs(*portp) < IPPORT_RESERVED/2) {
                syslog(LOG_NOTICE, "Connection from %s on illegal port", naddr);
                remote_fatal("Permission denied", 0);
        }

#ifdef IP_OPTIONS
        if (fromp->ss_family == AF_INET) {
                u_char optbuf[BUFSIZ/3], *cp;
                char lbuf[BUFSIZ], *lp, *ep;
                socklen_t optsize = sizeof(optbuf);
                int ipproto;
                struct protoent *ip;

                if ((ip = getprotobyname("ip")) != NULL)
                        ipproto = ip->p_proto;
                else
                        ipproto = IPPROTO_IP;
                if (getsockopt(0, ipproto, IP_OPTIONS, (char *)optbuf, &optsize) == 0 && optsize != 0) {
                        lp = lbuf;
                        ep = lbuf + sizeof(lbuf);
                        for (cp = optbuf; optsize > 0; cp++, optsize--, lp += 3)
                                (void) snprintf(lp, ep - lp, " %2.2x", *cp);
                        syslog(LOG_NOTICE, "Connection received using IP options (ignored):%s", lbuf);
                        if (setsockopt(0, ipproto, IP_OPTIONS, NULL, optsize) != 0) {
                                syslog(LOG_ERR, "setsockopt IP_OPTIONS NULL: %m");
                                exit(1);
                        }
                }
        }
#endif  //IP_OPTIONS

        if (-2 == (c = handshake((struct sockaddr *)fromp, hostname))) {
                return -1;              /* protocol error */
        } else if (0 == c) {
                ++authenticated;
        }
        if (0 == confirmed_) {
                sockwrite(netf_, "", 1);
                confirmed_ = 1;         /* we sent the null! */
        }

        if (NULL == (pty_ = new(std::nothrow) ConPTY)) {
                remote_fatal("forkpty", -1);
        }

        pty_->set_pipe_mode(PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE);
        pty_->set_read_mode(FILE_FLAG_OVERLAPPED);
        pty_->set_write_mode(FILE_FLAG_OVERLAPPED);
                // Both pipe's and socket's cant be directly waited on (boo),
                // instead events must be attached via overlapping i/o requests and socket events; see W23Poll().

        if (! pty_->create_pty(&win_)) {
                remote_fatal("forkpty", -1);
        }

        // --- TODO - LOGIN PROMPT ---
        //
        //strvisx(hostaddrbuf, (const char *)(const void *)fromp, sizeof(*fromp), VIS_WHITE);
        //      authenticated
        //      hostname
        //      hostaddrbuf
        //      lusername_
        //
        //LookupAccountName()
        //PromptUser()
        //LogonUserA()
        //      attach_shell_as()
        //              CreateProcessAsUser()
        //

        pty_->attach_shell();           /* standard shell; without login XXX/FIXME */
        if (! pty_->is_attached()) {
                remote_fatal("exec", -1);
        }

        protocol();
        cleanup();
        return 0;
}


/*
 * rlogin "protocol" machine.
 */

void
Session::protocol()
{
        char pibuf[(4 * 1024)+1], fibuf[(4 * 1024)+1], *pbp = NULL, *fbp = NULL;
        int  pcc = 0, fcc = 0;
                // pcc: pty read count
                // fcc: socket read count
        int  cc, nfd;                           // read and poll count

        HANDLE  ptystdout = pty_->stdout_pipe(), ptystdin = pty_->stdin_pipe(),
                    process = pty_->process_handle();
        W32Poll set(netf_, process, ptystdout, ptystdin);

#define FDSOCKET    0
#define FDPROCESS   1
#define FDPTYIN     2                           // read
#define FDPTYOUT    3                           // write

#if defined(DO_STDOUT_TRACE)
        {       HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                DWORD mode;
                                                // Windows 10 virtual console test.
                if (GetConsoleMode(hConsole, &mode)) {
                        if (0 == (mode & ENABLE_VIRTUAL_TERMINAL_PROCESSING)) {
                                SetConsoleMode(hConsole, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
                        }
                }
        }
#endif  //DO_STDOUT_TRACE
STDOUT_TRACE(std::cout << "protocol: ready\n";)

        cc = send(netf_, oobdata_, 1, MSG_OOB); // indicate new rlogin
STDOUT_TRACE(std::cout << "protocol: wrote signal : " << cc << "\n";)

        pty_->start_shell();                    // resume shell session

        for (;;) {
                set[FDSOCKET].events = POLLPRI; // clear existing spec
                set[FDPTYIN].events  = 0;
                set[FDPTYOUT].events = 0;

                if (fcc)                        // send to pty
                        set[FDPTYOUT].events |= POLLOUT;
                else                            // other get additional
                        set[FDSOCKET].events |= POLLIN;

                if (pcc >= 0) {
                        if (pcc) {              // send to remote
                                set[FDSOCKET].events |= POLLOUT;
                        } else {                // otheriwse get additional
                                set[FDPTYIN].events |= POLLIN;
                        }
                }

                if ((nfd = set.Poll(INFTIM)) < 0) {
STDOUT_TRACE(std::cout << "poll error\n";)
                        remote_fatal("poll");
                }
                if (0 == nfd) {                 // shouldn't happen.../
STDOUT_TRACE(std::cout << "poll null\n";)
                        w32_sleep(5);
                        continue;
                }
STDOUT_TRACE(std::cout << "poll [" << std::hex << set[0].revents << "] [" << set[1].revents << "] [" << set[2].revents << std::dec << "]" << std::endl;)

#define pkcontrol(c)    ((c)&(TIOCPKT_FLUSHWRITE|TIOCPKT_NOSTOP|TIOCPKT_DOSTOP))

                if (set[FDPTYIN].revents & POLLNVAL) {
                        remote_fatal("poll");
                } else if (set[FDPTYIN].revents & (POLLERR|POLLHUP)) {
                        remote_fatal("hangup");
                }

                if (set[FDSOCKET].revents & POLLNVAL) {
                        remote_fatal("poll");
                } else if (set[FDSOCKET].revents & (POLLERR|POLLHUP)) {
                        remote_fatal("hangup");
                }

                if (set[FDSOCKET].revents & POLLPRI) {
                                //Notes: OOB should be avoided.
                                // There are, at present, two conflicting interpretations of RFC 793 (where the concept is introduced).
                                // The implementation of OOB data in the Berkeley Software Distribution (BSD) does not conform to
                                // the Host Requirements specified in RFC 1122.
                        char cntl = 0;

STDOUT_TRACE(std::cout << "socket OOB; enhancement\n";)
                        cc = recv(netf_, &cntl, 1, MSG_OOB);
                        if (1 == cc && cntl == (char)0377) {
                                    if (! pty_->ctrlbreak()) {
                                            remote_fatal("break");
                                    }
                        } else {
                                    assert(false); remote_fatal("out-of-bounds");
                        }
                }

                if (set[FDPTYIN].revents & POLLPRI) {
STDOUT_TRACE(std::cout << "pipe OOB; unexpected\n";)
                        assert(false); remote_fatal("out-of-bounds");
//                      if (istty_) {           // unix pty protocol (TIOCPKT, packet mode)
//                              char cntl = 0;
//                              cc = read(child_stdout, &cntl, MSG_OOB);
//std::cout << "read pipe : " << cc << "\n";
//                              if (1 == cc && pkcontrol(cntl)) {
//                                      cntl |= oobdata_[0];
//                                      send(netf_, &cntl, 1, MSG_OOB);
//                                      if (cntl & TIOCPKT_FLUSHWRITE) {
//                                              pcc = 0;
//                                      }
//                              }
//                      }
                }

                if (set[FDSOCKET].revents & POLLIN) {
STDOUT_TRACE(std::cout << "reading socket\n";)
                        assert(0 == fcc);
                        fcc = sockread(netf_, fibuf, sizeof(fibuf)-1 /*nul/diagnostics*/);
STDOUT_TRACE(std::cout << "read socket : " << fcc << "\n";)
                        if (fcc < 0 && errno == EWOULDBLOCK) {
                                fcc = 0;
                        } else {
                                char *cp;
                                int left, n;

                                if (fcc <= 0)
                                        break;
                                fbp = fibuf;
                        top:    for (cp = fibuf; cp < fibuf+fcc-1; cp++) {
                                        if (cp[0] == magic[0] && cp[1] == magic[1]) {
                                                left = fcc - (cp-fibuf);
                                                n = ptycontrol(cp, left);
                                                if (n) {
STDOUT_TRACE(std::cout << "read socket : ptycontrol : " << n << "\n";)
                                                        left -= n;
                                                        if (left > 0)
                                                                memmove(cp, cp + n, left);
                                                        fcc -= n;
                                                        goto top; /* n^2 */
                                                }
                                        }
                                }
                        }
STDOUT_TRACE(std::cout << "read socket : final " << fcc << "\n";)
                }

                if ((set[FDPTYOUT].revents & POLLOUT) && fcc > 0) {
STDOUT_TRACE(std::cout << "writing pipe : " << fcc << "\n";)
                        cc = set.WritePipe(ptystdin, fbp, fcc);
STDOUT_TRACE(std::cout << "wrote pipe : " << cc << "\n";)
                        if (cc > 0) {
                                fcc -= cc;
                                fbp += cc;
                        }
                }

                if (set[FDPTYIN].revents & POLLIN) {
STDOUT_TRACE(std::cout << "reading pipe\n";)
                        assert(0 == pcc);
                        pcc = set.ReadPipe(ptystdout, pibuf, sizeof (pibuf)-1);
STDOUT_TRACE(std::cout << "read pipe :" << pcc << "\n";)
                        pbp = pibuf;
                        if (pcc < 0 /*&& errno == EWOULDBLOCK*/)
                                pcc = 0;
                        else if (pcc <= 0)
                                break;
STDOUT_TRACE(std::cout << "read pipe : final " << pcc << "\n";)

//                      else if (istty_) {      // unix pty protocol (TIOCPKT, packet mode)
//                              //  In packet mode, each subsequent read(2) will return a packet that either
//                              //  contains a single nonzero control byte, or has a single byte containing zero
//                              //  followed by data written on the slave side of the pseudoterminal.
//                              //  If the first byte is not TIOCPKT_DATA (0), then is is one ore more control bits.
//                              if (TIOCPKT_DATA == pibuf[0] {
//                                      pbp++, pcc--;
//                              } else {
//                                      if  (pkcontrol(pibuf[0])) {
//                                              pibuf[0] |= oobdata_[0];
//                                              send(netf_, &pibuf[0], 1, MSG_OOB);
//                                      }
//                                      pcc = 0;
//                              }
//                      }
                }

                if ((set[FDSOCKET].revents & POLLOUT) && pcc > 0) {
STDOUT_TRACE(std::cout << "writing socket :" << pcc << "\n";)
                        cc = set.SocketWrite(netf_, pbp, pcc);
STDOUT_TRACE(std::cout << "wrote socket :" << cc << "\n";)
                        if (cc > 0) {
                                pcc -= cc;
                                pbp += cc;
                        }
                }

                if (set[FDPROCESS].revents & (POLLHUP|POLLERR)) {
                        DWORD dwExit = 0;

                        pty_->get_process_exit(dwExit);
                        if (dwExit <= 255) {    // standard
                                remote_vfatal("process terminated : %u", (unsigned)dwExit);
                        } else {                // extended
                                remote_vfatal("process terminated : 0x%08X", (unsigned)dwExit);
                        }
                }
        }

STDOUT_TRACE(std::cout << "protocol: done\n";)
}


/*
 * Handle a "control" request (signaled by magic being present) in the data stream.
 * For now, we are only willing to handle window size changes.
 */
int
Session::ptycontrol(const char *cp, int n)
{
        struct winsize w;

        if (n < (int)(4 + sizeof (w)) || cp[2] != 's' || cp[3] != 's') {
                return 0;
        }

        oobdata_[0] &= ~TIOCPKT_WINDOW;         /* we know he heard */
        memmove(&w, cp+4, sizeof(w));
        w.ws_row    = ntohs(w.ws_row);
        w.ws_col    = ntohs(w.ws_col);
        w.ws_xpixel = ntohs(w.ws_xpixel);
        w.ws_ypixel = ntohs(w.ws_ypixel);

STDOUT_TRACE(std::cout << "read socket : winch : rows/cols " << w.ws_row << "x" << w.ws_col << "\n";)
        pty_->winch(&w);

        return (4 + sizeof (w));
}


void
Session::cleanup()
{
        shutdown(netf_, 2);
}


//fatal error report to remote user.
void
Session::remote_fatal(const char *msg, int syserr)
{
        char *bp = message_, *ep = (message_ + (sizeof(message_) - 1 /*nul*/));
        int  space, len;

        /*
         * Prepend binary one to message if we haven't sent the magic null as confirmation.
         */
        if (!confirmed_)
                *bp++ = '\001';                 /* error indicator */

        space = ep - bp;
        if (syserr) {
                len = snprintf(bp, space, "rlogind: %s: %s\r\n", msg, strerror(errno));
        } else {
                len = snprintf(bp, space, "rlogind: %s\r\n", msg);
        }
        if (len < len || len >= space) {        /* error/overflow */
                bp[ space ] = 0;
                len = space;                
        }

        (void) sockwrite(netf_, message_, (bp + len) - message_);

        if (bp[len-1] == '\n') bp[len-2] = 0;   // \r\n
        throw bp + 9;                           // "rlogind: "
}


//fatal error report to remote user.
void
Session::remote_vfatal(const char *fmt, ...)
{
        char msg[BUFSIZ];
        va_list ap;

        va_start(ap, fmt);
        int len = vsnprintf(msg, sizeof(msg), fmt, ap);
        if (len < 0 || len >= sizeof(msg)) {
                msg[sizeof(msg) - 1] = 0;       /* error/overflow */
        }
        remote_fatal(msg);
        /*NOTREACHED*/
}


//fatal error
void
Session::fatal(const char *msg, int syserr)
{
        int len;

        if (syserr) {          
                len = snprintf(message_, sizeof(message_), "%s: %s", msg, strerror(errno));
        } else {
                len = snprintf(message_, sizeof(message_), "%s", msg);
        }
        if (len < 0 || len >= sizeof(msg)) {    /* error/overflow */
                message_[sizeof(message_) - 1] = 0;
        }

        syslog(LOG_ERR, "%s", msg);
        throw message_;
}


int
Session::handshake(struct sockaddr *dest, const char *host)
{
        int retval;

        /*
         * remote login server:
         *      \0
         *      remuser\0
         *      locuser\0
         *      terminal_type/speed\0
         *      data
         */
        getstr(rusername_, sizeof(rusername_), "remuser too long");
        getstr(lusername_, sizeof(lusername_), "locuser too long");
        getstr(term_ + ENVSIZE, sizeof(term_) - ENVSIZE, "Terminal type too long");

        struct passwd *pwd = getpwnam(lusername_);
        if (NULL == pwd) {                      /* FIXME/WARNING: current implementation returns canned information */
                syslog(LOG_INFO,
                    "%s@%s as %s: unknown login.", rusername_, host, lusername_);
                return -2;
        }

        retval = iruserok_sa(dest, sizeof(*dest) /*dest->sa_len*/, /*FIXME*/ pwd->pw_uid == 0, rusername_, lusername_);
/* XXX put inet_ntoa(dest->sin_addr.s_addr) into all messages below */
        if (0 == retval) {
                if (options_.log_success)
                        syslog(LOG_INFO, "%s@%s as %s: iruserok succeeded",
                            rusername_, host, lusername_);
        } else {
                if (__rcmd_errstr)
                        syslog(LOG_INFO, "%s@%s as %s: iruserok failed (%s)",
                            rusername_, host, lusername_, __rcmd_errstr);
                else
                        syslog(LOG_INFO, "%s@%s as %s: iruserok failed",
                            rusername_, host, lusername_);
        }
        return retval;
}


void
Session::getstr(char *buf, int cnt, const char *errmsg)
{
        char c;

        do {
                if (sockread(netf_, &c, 1) != 1)
                        throw "remote read error";
                if (--cnt < 0) {
                        fatal(errmsg, 0);
                        /*NOTREACHED*/
                }
                *buf++ = c;
        } while (c != 0);
}


#if (XXX)
void
Session::setup_term(int fd)
{
//      env[0] = term;
//      env[1] = 0;
//      environ = env;
}
#endif  //XXX


/*
 * Check whether host h is in our local domain, defined as sharing the last two components of the domain part,
 * or the entire domain part if the local domain has only one component.
 *
 * If either name is unqualified (contains no '.'), assume that the host is local, as it will be interpreted as such.
 */
int
Session::local_domain(const char *h)
{
        char localhost[MAXHOSTNAMELEN + 1];
        const char *p1, *p2;

        localhost[0] = 0;
        (void) gethostname(localhost, sizeof(localhost));
        localhost[sizeof(localhost) - 1] = '\0';
        p1 = topdomain(localhost);
        p2 = topdomain(h);

        if (p1 == NULL || p2 == NULL || !strcasecmp(p1, p2)) {
                return 1;
        }
        return 0;
}


const char *
Session::topdomain(const char *h)
{
        const char *p;
        const char *maybe = NULL;
        int dots = 0;

        for (p = h + strlen(h); p >= h; p--) {
                if (*p == '.') {
                        if (++dots == 2)
                                return (p);
                        maybe = p;
                }
        }
        return (maybe);
}

//end
