#include <edidentifier.h>
__CIDENT_RCSID(rlogind_c, "$Id: rlogind.cpp,v 1.14 2020/05/20 21:14:40 cvsuser Exp $")

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
  *     The Regents of the University of California.  All rights reserved.
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

#include "config.h"

#include <sys/cdefs.h>
#include <sys/cdefs.h>
#include <sys/param.h>
#include <sys/socket.h>

#include <cstring>
#include <cassert>
#include <unistd.h>

#include <getopt.h>
#include <errno.h>

#include <libw32_version.h>
#include <buildinfo.h>

#define RLOGIND_VERSION         WINSH_VERSION /* application version */
#define RLOGIND_BUILDNUMBER     WINSH_BUILD_NUMBER
#define RLOGIND_BUILDDATE       __DATE__ " " __TIME__

#include "w32support.h"
#include "../librcmd/rcmd.h"
#include "syslog.h"

#include "Service.h"                            // Service
#include "Logger.h"

#include "rlogind.h"                            // public interface

#include "../libNTService/NTServiceConfig.h"    // CNTServiceConfig
#include "../libNTService/NTServiceControl.h"   // CNTServiceControl

static bool             isconsole();
static int              console_width();

static void             version();
static void             usage(const char *msg = NULL);
static void             usage_print();
static void             usage_format(size_t lmargin, size_t rmargin, size_t col, const char *text);

static int              console_mode = 0;
struct Options          options = { 0 };

static const char *     progname = "rlogind";

#define OPTIONS         "alnLr"
#define ARGUMENTS       "S:I:p:CD"              // short argument
#define ARGUMENTDESCS   "-I <inifile> -p <port>"


static const struct option long_options[] = {   // long arguments
        { "service",            required_argument,  NULL, 'S'  },   //--service <name>
        { "console",            no_argument,        NULL, 1002 },   //--console
        { "noconsole",          no_argument,        NULL, 1003 },   //--noconsole
        { "help",               no_argument,        NULL, 1100 },   //--help
        { "usage",              no_argument,        NULL, 1100 },   //--usage
        { "version",            no_argument,        NULL, 'V'  },   //-V,--version
        { "verify-hostname",    no_argument,        NULL, 'a'  },   //-a,--verify-hostname

        { "no-rhosts",          no_argument,        NULL, 'l'  },   //-l,--no-rhosts
        { "no-keepalive",       no_argument,        NULL, 'n'  },   //-n,--no-keepalive
        { "log-successful",     no_argument,        NULL, 'L'  },   //-L,--log-successful
        { "port",               required_argument,  NULL, 'p'  },   //-p,--port=<port>
        { "reverse-required",   no_argument,        NULL, 'r'  },   //-r,--reverse-required

        { "no-stdout",          no_argument,        NULL, 'C'  },   //-C,--no-stdout
        { "delay",              no_argument,        NULL, 'd'  },   //-D,--start-delay
        { "ini-config",         required_argument,  NULL, 'I'  },   //-I,--ini-config=<file>

        { NULL }
        };


int
main(int argc, char *argv[])
{
        char t_service_name[256] = {0}, message[512] = {0};
        const char *service_name = CNTService::DefaultServiceName(argv[0], t_service_name, sizeof(t_service_name));

        const char *verb = NULL;
        bool console_mode = isconsole();
        int do_usage = 0, ch;

        // Parse command line options
        //  Note: Leading "-" on options to force parse in-order, ie stop at the first non option.

        while (NULL == verb && 0 == message[0] && 0 == do_usage &&
                    -1 != (ch = getopt_long2(argc, argv, "-" OPTIONS ARGUMENTS, long_options, 
                                    NULL, message, sizeof(message)))) {

                switch (ch) {
                case 'a':   //-a,--verify-hostname
                        options.check_all   = 1;
                        break;
                case 'l':   //-l,--no-rhosts
                        __check_rhosts_file = 0;
                        break;
                case 'n':   //-n,--no-keepalive
                        options.keepalive   = 0;
                        break;
                case 'L':   //-L,--log-successful
                        options.log_success = 1;
                        break;
                case 'p': { //-p,--port=<port>
                                char *end = 0;
                                options.port = (unsigned)strtoul(optarg, &end, 10);
                                if (*end || !options.port && options.port >= 0xffff) {
                                        snprintf(message, sizeof(message)-1, 
                                            "%s: illegal port specification", service_name);
                                }
                        }
                        break;
                case 'r':   //-r,--reverse-required
                        options.reverse_required = 1;
                        break;
                case 'S':   //-S,--service=<name>
                        service_name = optarg;
                        break;
                case 'C':   //-C,--no-stdout
                        options.no_stdout = true;
                        break;
                case 'D':   //-D,--delay-start
                        options.delay_start = true;
                        break;
                case 'I':   //-I,--ini-config=<file>
                        options.ini_file = optarg;
                        break;
                case 1002:  //console
                        console_mode = true;
                        break;
                case 1003:  //notconsole
                        console_mode = false;
                        break;
                case 1:     //verb -- first non optional argument
                        verb = optarg;
                        --optind;               // move back cursor  
                        break;  
                case 'V':   //version
                        do_usage = 2;
                        break;
                case 1100:  //usage
                        do_usage = 1;
                        break;
                case ':':
                case '?':
                default:
                        if (0 == message[0]) {
                                snprintf(message, sizeof(message)-1, 
                                        "%s: illegal option : %c", service_name, optopt);
                        }
                        break;
                }
        }

        // Instantiate service

        Service service(service_name, console_mode);

        if (message[0] || do_usage) {           // command line error
                if (console_mode) {
                        if (0 == message[0] && 2 == do_usage) {
                                version();
                        } else {
                                usage(message);
                        }
                } else {
                        service.LogMessage(message);
                }
              //service.StartAbort(message);    // TODO
                return EXIT_FAILURE;
        }
 
        // Control/configuration command.

        if (verb && console_mode) {             // <class> <command> [arguments]
                NTService::IDiagnostics &diags = service.diags();
                int ret = NTSERVICE_CMD_UNKNOWN;

                argv += optind; argc -= optind;
                assert(verb == argv[0]);

                if (0 == strcasecmp(verb, "config")) {
                        CNTServiceConfig service(service_name, diags);
                        ret = service.ExecuteCommand(argc - 1, argv + 1);

                } else if (0 == strcasecmp(verb, "control")) {
                        CNTServiceControl service(service_name, diags);
                        ret = service.ExecuteCommand(argc - 1, argv + 1);

                } else {                        // primary verbs
                        ret = service.ExecuteCommand(argc, argv);
                        verb = NULL;
                }

                if (const char *msg = CNTService::ExecuteReturnDesc(ret)) {
                        if (verb) {             // config or control
                                if (argc >= 2) {
                                        diags.ferror("command <%s %s> : %s", verb, argv[1], msg);
                                } else {
                                        diags.ferror("command <%s> : %s", argv[0], msg);
                                }
                        } else {
                                diags.ferror("command <%s> : %s", argv[0], msg);
                        }
                }

                if (ret < 0) {                  // command line error.
                    diags.ferror("\nsee '%s %shelp' for more details",
                            (verb ? verb : "rlogind"), (verb ? "" : "--"));
                }
                return (1 == ret ? EXIT_SUCCESS : EXIT_FAILURE);
        }

        // Service entry

        if (verb) {
                service.LogMessage("unexpected command line argument <%s>", verb);
        }

        service.Start(options);
        return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////
//  Support

// are we running under a cosole;
static bool
isconsole()
{
        return (NULL != GetConsoleWindow());
}


/////////////////////////////////////////////////////////////////////////////////////////
//  Usage

static bool
is_tty()
{
        return (console_mode || _isatty(STDERR_FILENO));
}


// console width; in characters.
static int
console_width()
{
        static int width = 0;
        if (! width && is_tty()) {
                CONSOLE_SCREEN_BUFFER_INFO scr = {0};
                GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &scr);
                width = (scr.srWindow.Right - scr.srWindow.Left) + 1;
        }
        return width;
}


static void
version(void)
{
        if (is_tty()) {                         // command line
                fprintf(stderr, "WinRlogind - Windows rlogind service/server\n");
                fprintf(stderr, "%s: %s Build %s (%s), ConPTY version\n\n",
                        progname, RLOGIND_VERSION, RLOGIND_BUILDNUMBER, RLOGIND_BUILDDATE);

                fprintf(stderr,
                        "Licensed under GNU General Public License version 3.0.\n"\
                        "Copyright (C) 2020 Adam Young.\n"\
                        "Copyright (C) 1990, 1993, The Regents of the University of California.\n"\
                        "All rights reserved\n\n");

                fprintf(stderr,
                        "Please send any bug reports (including the output of '%s -V') as tickets\n"\
                        "at https://github.com/adamyg/winxsh or https://sourceforge.net/projects/winrsh\n", progname);

        } else {                                // service
                syslog(LOG_INFO, "WinRlogind - Windows rlogind service/server, %s Build %s (%s), ConPTY version",
                        RLOGIND_VERSION, RLOGIND_BUILDNUMBER, RLOGIND_BUILDDATE);
        }

        exit(0);
}


static void
usage(const char *msg)
{
        if (is_tty()) {                         // command line
                if (msg && *msg) {
                        fprintf(stderr, "%s: %s\n", progname, msg);
                }
                fprintf(stderr, "\nusage: %s [-%s] %s [command]", progname, OPTIONS, ARGUMENTDESCS);
                fprintf(stderr, "\nusage: %s <command>\n\n", progname);
                if (msg) {
                        fprintf(stderr, "see '%s --help' for details\n", progname);
                } else {
                        usage_print();
                }

        } else {                                // service
                if (msg && *msg) {
                        syslog(LOG_ERR, "%s: %s", progname, msg);
                } else {
                        syslog(LOG_ERR, "usage: % [-%s] %s", progname, OPTIONS, ARGUMENTDESCS);
                }
        }
        exit(1);
}


#if defined(__WATCOMC__)
#pragma disable_message(438) // string literal concatenated during array initialization
#endif

static const char *usage_text[] = {
        "Rlogind is the server for the rlogin program. " \
        "The server provides a remote login facility with authentication based on privileged port numbers from trusted hosts. ",

        "Note: rlogind has been deprecated on many systems due to its security implications. ",

        "Options supported by rlogind:",

//          "\1-D",                     "\2Set TCP_NODELAY; improves responsiveness at the expense of some additional network traffic.",

            "\1-a,--verify-hostname",   "\2Ask hostname for verification.",

//          "\1-d",--daemon",           "\2Daemon mode.",

            "\1-l,--no-rhosts",         "\2Prevent any authentication based on the user's 'rhosts' file.",

            "\1-n,--no-keepalive",      "\2Disable keep-alive messages; enabled by default.",

//          "\1-x,--encrypt",           "\2Turns on DES encryption for all data passed via the rlogind session; "
//                                      "may impact response time and CPU utilization, but provides increased security. ",

            "\1-p,--port <##>",         "\2Listen on the given port.",

//          "\1-s,--socket",            "\2Turns on socket level debugging.",

            "\1-r,--reverse-required",  "\2Require reverse resolving of a remote host IP.",

        "In addition the following windows service commands are available:",

            "\1version",                "\2Service version information.",

            "\1install",                "\2Install rlogind as a service; see 'install help' for details.",

            "\1uninstall",              "\2Uninstall as a service.",

                // Example:
                //      install --arg "--ini-config=rlogind.ini"

            "\1config <attribute>",     "\2Config service attributes; see 'config help' for details.",

            "\1control <action>",       "\2Service control functions; see 'control help' for details.",

        "The rlogind utility listens for service requests at the port indicated in the \"login\" service specification. "\
        "When a service request is received the following protocol is initiated:",

            "\1""1",    "\3The server checks the client's source port.  If the port is not in "\
                        "the range 512-1023, the server aborts the connection. ",

            "\1""2",    "\3The server checks the client's source address and requests the corresponding host name. "\
                        "If the hostname cannot be determined, the dot-notation representation of the host address is used. "\
                        "If the hostname is in the same domain as the server (according to the last two components of the domain name), "\
                        "or if the -a option is given, the addresses for the hostname are requested, verifying that the name and "\
                        "address correspond.  Normal authentication is bypassed if the address verification fails. ",

        "Once the source port and address have been checked, rlogind proceeds with the authentication process described in rshd. "\
        "It then allocates a pseudo terminal (ConPTY), and manipulates file descriptors so that the slave half of the pseudo terminal "\
        "becomes the stdin, stdout, and  stderr of a new process. "\
        "The login process is an instance of the login(1) program, invoked with the -f option if authentication has succeeded. "\
        "If automatic authentication fails, the user is prompted to log in as if on a standard terminal line. "\

        "The parent of the login process manipulates the master side of the pseudo terminal, operating as an intermediary between "\
        "the login process and the client instance of the 'rlogin' program. "\
        "In normal operation, the packet protocol provides `^S/^Q' type facilities and propagate interrupt signals to the remote programs.",
        "The screen or window size of the terminal is requested from the client, and window size changes from the client are "\
        "propagated to the pseudo terminal. ",

        "Transport-level keepalive messages are enabled unless the -n option is present. "\
        "The use of keepalive messages allows sessions to be timed out if the client crashes or becomes unreachable.",

        "CAVEATS:",
        "The authentication procedure used here assumes the integrity of each client machine and the connecting medium. "\
        "This is insecure, but useful in an “open” environment and/or within a closed network. ",

        "HISTORY:",
        " o The rlogind utility appeared in 4.2BSD.",
        " o IPv6 support was added by WIDE/KAME project.",
        " o adamyg ported to Windows and added ConPTY integration.",

        NULL
        };

#if (TODO)
static struct configdef {
        const char *name;
        size_t namelen;
#define ONAME(__x) __x, sizeof(__x)-1
        const char *description;

} configdefs[] = {
        { ONAME("LoggerBase"),
                        "Base path of service logs, in the form '<path>\<name>.log'. "\
                        "Generated logs shall take the form '<path>\<name>_YYYYMMDD_HHMMSS.log'. " },

        { ONAME("LoggerSize"),
                        "Logger file size limit in bytes, in the form '<value>[Kb|Mb]'. " },

        { ONAME("LoggerLines"),
                        "Logger file line limit in lines, in the form '<value>[Kb|Mb]'. " },

        { ONAME("LoggerAge"),
                        "Logger file age limit, in the form 'HH:MM:SS' or '<value>[SHMD]'. " },
#undef ONAME
};
#endif


static void
usage_print()
{
        const size_t rmargin =
                (console_width() < 80  ? 80 :
                (console_width() < 120 ? console_width() - 4 : 116));

        // Usage text

        const char **opttext, *text;
        size_t optlen, collen, col;

        for (optlen = 0, opttext = usage_text; (text = *opttext) != NULL; ++opttext) {
                if (text[0] == '\1') {
                        const size_t t_optlen = strlen(text+1);
                        if (t_optlen > optlen) optlen = t_optlen;
                }
        }
        optlen = (optlen+4)|4;

        for (col = 0, opttext = usage_text; (text = *opttext) != NULL; ++opttext) {
                if (text[0] == '\1') {          //argument, left aligment.
                        if (opttext[1] && '\3' == opttext[1][0]) {
                                collen = 6;
                        } else {
                                collen = optlen;
                        }
                        col = 4 + collen;
                        fprintf(stderr, "    %-*.*s", collen, collen, text + 1);

                } else if (text[0] == '\2' ||   //description, right alignment.
                           text[0] == '\3') {   //section text, right alignment.
                        usage_format(col, rmargin, col, text + 1);
                        fprintf(stderr, "\n");
                        col = 0;

                } else {                        //normal text
                        if (col) fprintf(stderr, "\n");
                        if (*text) usage_format(2, rmargin, 0, text);
                        fprintf(stderr, "\n");
                        col = 0;
                }
                fflush(stderr);
        }

        // Configuration elements

//      const struct configdef *def = configdefs,
//              *defend = def + (sizeof(configdefs)/sizeof(configdefs[0]));
//      for (; def < defend; ++def) {
//              optlen = fprintf(stderr, "    %s\n", def->name);
//              usage_format(12, rmargin, 0, def->description);
//              fprintf(stderr, "\n");
//      }
}


static void
usage_format(size_t lmargin, size_t rmargin, size_t col, const char *text)
{
        const char *end;

        if (!text && !*text) return;
        end = text + strlen(text);
        do {
                const size_t wordlen = strcspn(text, " .,\t;\n") + 1;

                if (col < lmargin) {
                        fprintf(stderr, "%*s", lmargin - col, "");
                        col = lmargin;
                } else if (col && (wordlen + col) > rmargin) {
                        fprintf(stderr, "\n%*s", lmargin, "");
                        col = lmargin;
                }

                fprintf(stderr, "%.*s", wordlen, text);
                col += wordlen;

                if (text[wordlen-1] == '\n') { // <br>
                        text += wordlen;
                        col = 0;
                } else {
                        text += wordlen;
                        if ((wordlen + col) > rmargin) { //implied <br>
                                while (*text == ' ') ++text; //consume leadning white-space.
                                fprintf(stderr, "\n");
                                col = 0;
                        }
                }
        } while (text < end);
        if (col) fprintf(stderr, "\n");
}

//end
