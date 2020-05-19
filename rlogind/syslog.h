#pragma once
#if !defined(SYSLOG_H_INCLUDED)
#define SYSLOG_H_INCLUDED
/* -*- mode: c; indent-width: 4; -*- */
/*
 * Copyright (c) 1982, 1986, 1988, 1993
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
 * 4. Neither the name of the University nor the names of its contributors
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
 *      @(#)syslog.h    8.1 (Berkeley) 6/2/93
 */

/*
SYSLOG(3)                BSD Library Functions Manual                SYSLOG(3)

NAME
     syslog, vsyslog, openlog, closelog, setlogmask -- control system log

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <syslog.h>
     #include <stdarg.h>

     void syslog(int priority, const char *message, ...);
     void vsyslog(int priority, const char *message, va_list args);
     void openlog(const char *ident, int logopt, int facility);
     void closelog(void);
     int  setlogmask(int maskpri);

DESCRIPTION
     The syslog() function writes message to the system message logger.  The message is then written to the
     system console, log files, logged-in users, or forwarded to other machines as appropriate.  (See syslogd(8).)

     The message is identical to a printf(3) format string, except that `%m' is replaced by the current error message.
     (As denoted by the global variable errno; see strerror(3). A trailing newline is added if none is present.

     The vsyslog() function is an alternate form in which the arguments have already been captured using the
     variable-length argument facilities of stdarg(3).

     The message is tagged with priority.  Priorities are encoded as a facility and a level. The facility describes
     the part of the system generating the message.  The level is selected from the following ordered (high to low) list:

         LOG_EMERG     A panic condition.  This is normally broadcast to all users.

         LOG_ALERT     A condition that should be corrected immediately, such as a corrupted system database.

         LOG_CRIT      Critical conditions, e.g., hard device errors.

         LOG_ERR       Errors.

         LOG_WARNING   Warning messages.

         LOG_NOTICE    Conditions that are not error conditions, but should possibly be handled specially.

         LOG_INFO      Informational messages.

         LOG_DEBUG     Messages that contain information normally of use only when debugging a program.

     The openlog() function provides for more specialized processing of the messages sent by syslog() and vsyslog().
     The ident argument is a string that will be prepended to every message.  The logopt argument is a  bit
     field specifying logging options, which is formed by OR'ing one or more of the following values:

         LOG_CONS      If syslog() cannot pass the message to syslogd(8) it will attempt to write the
                       message to the console).

         LOG_NDELAY    Open the connection to syslogd(8) immediately.

         LOG_PERROR    Write the message to standard error output as well to the system log.

         LOG_PID       Log the process id with each message: useful for identifying instantiations of daemons.

     The facility argument encodes a default facility to be assigned to all messages that do not have
     an explicit facility encoded:

     The closelog() function can be used to close the log file.

     The setlogmask() function sets the log priority mask to maskpri and returns the previous mask.
     Calls to syslog() with a priority not set in maskpri are rejected. The mask for an individual priority
     pri is calculated by the macro LOG_MASK(pri); the mask for all priorities up to and including toppri
     is given by the macro LOG_UPTO(toppri);  The default allows all priorities to be logged.

RETURN VALUES
     The routines closelog(), openlog(), syslog() and vsyslog() return no value.
     The routine setlogmask() always returns the previous log mask level.

EXAMPLES
           syslog(LOG_ALERT, "who: internal error 23");
           openlog("ftpd", LOG_PID | LOG_NDELAY, LOG_FTP);
           setlogmask(LOG_UPTO(LOG_ERR));
           syslog(LOG_INFO, "Connection from host %d", CallingHost);
           syslog(LOG_ERR|LOG_LOCAL2, "foobar error: %m");
*/

#include <stdarg.h>

#define LOG_EMERG       0       /* system is unusable */
#define LOG_ALERT       1       /* action must be taken immediately */
#define LOG_CRIT        2       /* critical conditions */
#define LOG_ERR         3       /* error conditions */
#define LOG_WARNING     4       /* warning conditions */
#define LOG_NOTICE      5       /* normal but significant condition */
#define LOG_INFO        6       /* informational */
#define LOG_DEBUG       7       /* debug-level messages */

#define LOG_PRIMASK     0x07    /* mask to extract priority part (internal) extract priority */

#define LOG_PRI(p)      ((p) & LOG_PRIMASK)
#define LOG_MAKEPRI(fac, pri)   (((fac) << 3) | (pri))

#ifdef SYSLOG_NAMES
#define INTERNAL_NOPRI  0x10    /* the "no priority" priority mark "facility" */
#define INTERNAL_MARK   LOG_MAKEPRI(LOG_NFACILITIES, 0)
typedef struct _code {
        const char *c_name;
        int c_val;
} CODE;

static const CODE prioritynames[] = {
    { "alert",   LOG_ALERT },
    { "crit",    LOG_CRIT },
    { "debug",   LOG_DEBUG },
    { "emerg",   LOG_EMERG },
    { "err",     LOG_ERR },
    { "error",   LOG_ERR },             /* DEPRECATED */
    { "info",    LOG_INFO },
    { "none",    INTERNAL_NOPRI },      /* INTERNAL */
    { "notice",  LOG_NOTICE },
    { "panic",   LOG_EMERG },           /* DEPRECATED */
    { "warn",    LOG_WARNING },         /* DEPRECATED */
    { "warning", LOG_WARNING },
    { NULL, -1 }
  };
#endif  //SYSLOG_NAMES

/* facility codes */
#define LOG_KERN        (0<<3)  /* kernel messages */
#define LOG_USER        (1<<3)  /* random user-level messages */
#define LOG_MAIL        (2<<3)  /* mail system */
#define LOG_DAEMON      (3<<3)  /* system daemons */
#define LOG_AUTH        (4<<3)  /* security/authorization messages */
#define LOG_SYSLOG      (5<<3)  /* messages generated internally by syslogd */
#define LOG_LPR         (6<<3)  /* line printer subsystem */
#define LOG_NEWS        (7<<3)  /* network news subsystem */
#define LOG_UUCP        (8<<3)  /* UUCP subsystem */
#define LOG_CRON        (9<<3)  /* clock daemon */
#define LOG_AUTHPRIV    (10<<3) /* security/authorization messages (private) */
#define LOG_FTP         (11<<3) /* ftp daemon */

        /* other codes through 15 reserved for system use */
#define LOG_LOCAL0      (16<<3) /* reserved for local use */
#define LOG_LOCAL1      (17<<3) /* reserved for local use */
#define LOG_LOCAL2      (18<<3) /* reserved for local use */
#define LOG_LOCAL3      (19<<3) /* reserved for local use */
#define LOG_LOCAL4      (20<<3) /* reserved for local use */
#define LOG_LOCAL5      (21<<3) /* reserved for local use */
#define LOG_LOCAL6      (22<<3) /* reserved for local use */
#define LOG_LOCAL7      (23<<3) /* reserved for local use */

#define LOG_NFACILITIES 24      /* current number of facilities */
#define LOG_FACMASK     0x03f8  /* mask to extract facility part */
                                /* facility of pri */
#define LOG_FAC(p)      (((p) & LOG_FACMASK) >> 3)

#ifdef SYSLOG_NAMES
static const CODE facilitynames[] =  {
    { "alert",   LOG_ALERT },
    { "crit",    LOG_CRIT },
    { "debug",   LOG_DEBUG },
    { "emerg",   LOG_EMERG },
    { "err",     LOG_ERR },
    { "error",   LOG_ERR },             /* DEPRECATED */
    { "info",    LOG_INFO },
    { "none",    INTERNAL_NOPRI },      /* INTERNAL */
    { "notice",  LOG_NOTICE },
    { "panic",   LOG_EMERG },           /* DEPRECATED */
    { "warn",    LOG_WARNING },         /* DEPRECATED */
    { "warning", LOG_WARNING },
    { NULL, -1 }
  };
#endif

/*
 * arguments to setlogmask.
 */
#define LOG_MASK(pri)   (1 << (pri))            /* mask for one priority */
#define LOG_UPTO(pri)   ((1 << ((pri)+1)) - 1)  /* all priorities through pri */

/*
 * Option flags for openlog.
 *
 * LOG_ODELAY no longer does anything.
 * LOG_NDELAY is the inverse of what it used to be.
 */
#define LOG_PID         0x001   /* log the pid with each message */
#define LOG_CONS        0x002   /* log on the console if errors in sending */
#define LOG_ODELAY      0x004   /* delay open until first syslog() (default) */
#define LOG_NDELAY      0x008   /* don't delay open */
#define LOG_NOWAIT      0x010   /* don't wait for console forks: DEPRECATED */
#define LOG_PERROR      0x020   /* log to stderr as well */
    /*extensions*/
#define LOG_TID         0x100   /* log thread identifier */
#define LOG_MSTIME      0x200   /* milliseconds */
#define LOG_NOHOST      0x400   /* exclude host details */

#ifdef __cplusplus
extern "C" {
#endif

typedef int (* SYSLOGPROXYCB)(void *data, int op, int pri, const char *msg, size_t msglen);

extern void openlog (const char *ident, int option, int facility);
extern void closelog (void);
extern void setlogproxy (SYSLOGPROXYCB fnProxy, void *data);
extern int  setlogmask (int mask);
extern int  setlogoption (int option);
extern void syslog (int pri, const char *fmt, ...);
extern void vsyslog (int pri, const char *fmt, va_list ap); //_BSD_SOURCE 

#ifdef __cplusplus
}
#endif

#endif  //SYSLOG_H_INCLUDED

//end
