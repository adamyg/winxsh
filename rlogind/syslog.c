#include <edidentifier.h>
__CIDENT_RCSID(syslog_c,"$Id: syslog.c,v 1.6 2020/05/18 22:13:47 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * syslog emulation
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

#include "config.h"

#include <sys/cdefs.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>

#define  SYSLOG_NAMES
#include "syslog.h"

#define  WIN32_MEAN_AND_LEAN
#include <Windows.h>

static const char * month[] = {
    "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

static char             syslog_hostname[256+1]; // Max plus leading space.
static const char *     syslog_ident = "app";
static int              syslog_facility = LOG_USER;
static int              syslog_mask = 0xfff;
static int              syslog_option = 0;
static char             syslog_pid[64];         // process identifier; cached preformated.

static int              syslog_network(void *, int op, int pri, const char *message, size_t len);

static SYSLOGPROXYCB    syslog_proxy = syslog_network;
static void *           syslog_data;

void
openlog(const char* ident, int option, int facility)
{
        syslog_ident = (ident ? ident : getprogname());

        if (facility && 0 == (facility & ~LOG_FACMASK)) {
                syslog_facility = facility;
        }

        setlogoption(option);
        (void) facilitynames;                   // unused warning
}


void
closelog(void)
{
}


int
setlogmask(int nmask)
{
	const int omask = syslog_mask;
	if (nmask) syslog_mask = nmask;
	return omask;
}


int
setlogoption(int option)
{
        const int ooption = syslog_option;      // previous option setting

        syslog_option = option;

        syslog_hostname[0] = 0;
        if (0 == (LOG_NOHOST & option) &&
                        0 == w32_gethostname(syslog_hostname + 1, sizeof(syslog_hostname) - 2)) {
                syslog_hostname[0] = ' ';
        }

        syslog_pid[0] = 0;                      // apply LOG_PID
        if (LOG_PID & option) {
                sprintf(syslog_pid, "[%u]", (unsigned)GetCurrentProcessId());
        }
        return ooption;
}


void
setlogproxy(SYSLOGPROXYCB proxy, void *data)
{
        if (proxy) {
                syslog_proxy = proxy, syslog_data = data;
        } else {
                syslog_proxy = syslog_network;
        }
}


void
syslog(int pri, const char *fmt, ...)
{
        va_list ap;

        va_start(ap, fmt);
        vsyslog(pri, fmt, ap);
        va_end(ap);
}


void
vsyslog(int pri, const char *fmt, va_list ap)
{
#define	MESSAGE_LEN (2*1024)
#define	FMT_LEN	1024

        const int saved_errno = errno;
        const char *label = prioritynames[LOG_PRI(pri)].c_name;
        char message[MESSAGE_LEN], fmt_copy[FMT_LEN];
        const char *p;
        SYSTEMTIME stm = {0};
        int len, len2, space;

	// Parameters

	if (pri & ~(LOG_PRIMASK|LOG_FACMASK)) {
	        syslog(LOG_ERR, "syslog: unknown facility/priority: %x", pri);
		pri &= LOG_PRIMASK|LOG_FACMASK;
	}

        if (!(LOG_MASK(LOG_PRI(pri)) & syslog_mask)) {
	        return;
        }

        if (0 == (pri & LOG_FACMASK)) {
	        pri |= syslog_facility;
        }

        // Parse format, %[mM] expansion

        for (p = strchr(fmt, '%'); p;) {
                if (p[1] == 'm' || p[1] == 'M') {
                        int left = sizeof(fmt_copy) - 1 /*nul*/;
                        char *f, ch;

                        for (f = fmt_copy; 0 != (ch = *fmt++) && left;) {
                                if ('%' == ch && left > 4) {//strerror
                                        if ('m' == *fmt) {
                                                int len = snprintf(f, left, "%s", strerror(saved_errno));
                                                if (len < 0 || len >= left) len = left;
                                                f += len, left -= len;
                                                ++fmt;
                                                continue;

                                        } else if ('M' == *fmt) { //windows error
                                                DWORD dwError = GetLastError();
                                                DWORD len = FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS |
                                                                FORMAT_MESSAGE_MAX_WIDTH_MASK, NULL, dwError,
                                                                    MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), f, left, NULL);
                                                f += len, left -= len;
                                                ++fmt;
                                                continue;
                                        }
                                }
                                *f++ = ch;
                                --left;
                        }
                        *f  = 0;
                        fmt = fmt_copy;
                        break;                  // done
                }
                p = strchr((char *)(p + 1), '%');
        }

        // Format:
        //  <pri>|<[label :]> MMM DD HH:MM:SS[.mmm] <hostname> <ident><[pid]>[.<tid>]
        //

        GetLocalTime(&stm);                     // wall clock

#define NLCR 2

        if (LOG_TID & syslog_option) {
                const DWORD tid = GetCurrentThreadId();

                if (LOG_MSTIME & syslog_option) {
                        len = sprintf_s(message, sizeof(message) - NLCR, "[%7.7s] : %s %2d %02u:%02u:%02u.%03u%s %s%s.%u: ",
                                label, month[ stm.wMonth - 1 ], stm.wDay, stm.wHour, stm.wMinute, stm.wSecond, stm.wMilliseconds,
                                    syslog_hostname, syslog_ident, syslog_pid, tid);

                } else {
                        len = sprintf_s(message, sizeof(message) - NLCR, "[%7.7s] : %s %2d %02u:%02u:%02u%s %s%s.%u: ",
                                label, month[ stm.wMonth - 1 ], stm.wDay, stm.wHour, stm.wMinute, stm.wSecond,
                                    syslog_hostname, syslog_ident, syslog_pid, tid);
                }

        } else {
                if (LOG_MSTIME & syslog_option) {
                        len = sprintf_s(message, sizeof(message) - NLCR, "[%7.7s] : %s %2d %02u:%02u:%02u.%03u%s %s%s: ",
                                label, month[ stm.wMonth - 1 ], stm.wDay, stm.wHour, stm.wMinute, stm.wSecond, stm.wMilliseconds,
                                    syslog_hostname, syslog_ident, syslog_pid);

                } else {
                        len = sprintf_s(message, sizeof(message) - NLCR, "[%7.7s] : %s %2d %02u:%02u:%02u%s%s%s: ",
                                label, month[ stm.wMonth - 1 ], stm.wDay, stm.wHour, stm.wMinute, stm.wSecond,
                                    syslog_hostname, syslog_ident, syslog_pid);
                }
        }
        space = sizeof(message) - (len + NLCR);

        if ('%' == fmt[0] && 's' == fmt[1] && 0 == fmt[2]) {
                //
                //  syslog( "%s", buffer )
                const char *buffer = va_arg(ap, const char *);
                if (buffer && *buffer) {        // formatting optimization
                        if ((len2 = strlen(buffer)) > space) len2 = space;
                        memcpy(message + len, buffer, len2);
                        len += len2;
                }
        } else {
                //
                //  syslog( ... )
                if ((len2 = vsprintf_s(message + len, space, fmt, ap)) >= 0) {
                        len += len2;
                }
        }

        assert(len <= sizeof(message));

        // Direct result

        if (LOG_PERROR & syslog_option) {
                message[len] = '\n', message[len + 1] = 0;
                fwrite(message, len + 1, 1, stderr);
                message[len] = 0;
        }

        if (! syslog_proxy(syslog_data, 0, pri, message, (size_t)len)) {
                if (LOG_CONS == ((LOG_CONS|LOG_PERROR) & syslog_option)) {
                        message[len] = '\n', message[len + 1] = 0;
                        fwrite(message, len + 1, 1, stdout);
                }
        }
}


static int
syslog_network(void *data, int op, int pri, const char *msg, size_t len)
{
        //TODO: not implementated
        return 0;
}

//end
