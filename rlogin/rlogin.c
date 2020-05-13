#include <edidentifier.h>
__CIDENT_RCSID(rlogin_c,"$Id: rlogin.c,v 1.13 2020/05/13 16:16:30 cvsuser Exp $")

/* -*- mode: c; indent-width: 4; -*- */
/*
 * win rlogin
 *
 * Copyright (c) 2005 - 2020, Adam Young.
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
/*
 * Copyright (c) 1983, 1990, 1993
 * The Regents of the University of California.  All rights reserved.
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
 * $NetBSD: rlogin.c,v 1.43 2013/03/02 18:37:19 wiz Exp $;
 */

#include <sys/cdefs.h>

#include <sys/param.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/time.h>

#include <netinet/in.h>
#include <netinet/tcp.h>

#include <err.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <pwd.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <poll.h>
#include <unistd.h>
#include <assert.h>

#define _NETBSD_SOURCE
#include "../librcmd/getport.h"
#include "../librcmd/rcmd.h"
#include "../libtermemu/termios.h"
#include "../libtermemu/termemu_tsm.h"

#include <libw32_version.h>
#include <buildinfo.h>

#define RLOGIN_VERSION			WINSH_VERSION /* application version */
#define RLOGIN_BUILDNUMBER		WINSH_BUILD_NUMBER
#define RLOGIN_BUILDDATE		__DATE__ " " __TIME__

#if defined(__WATCOMC__)
#define DECLTHREAD	/**/
#define _putch(__c)	putch(__c)
#elif defined(_MSC_VER)
#define DECLTHREAD	cdecl
#else
#error target ...
#endif

static int eight, rem;
static struct termios deftty;

static int noescape;
static int ctrlbreak;
static u_char escapechar = '~';
static WCHAR oldtitle[256];

struct winsize {
	unsigned short ws_row;		/* rows, in characters */
	unsigned short ws_col;		/* columns, in characters */
	unsigned short ws_xpixel;	/* horizontal size, pixels */
	unsigned short ws_ypixel;	/* vertical size, pixels */
};
static struct winsize winsize;

static void		doit(void);
static void		done(int);
static void		echo(int);
static u_int		getescape(char *);
static void		lostpeer(int);
static void		msg(const char *);
static void		msgx(const char *);
static int		oob(void);
static int		reader(void);
static void		sigwinch(void);
static void		get_window_size(struct winsize *);
static void		sendwindow(void);
static void		sendbreak(void);
static void		stop(int);
static void		usage(void);
static void		version(void);
static void		writer(void);
static void		writeroob(void);

#define OPTIONS		"468dEe:K:N:i:l:np:t:V"

static const struct option long_options[] = {
	{ "usage",   no_argument, NULL, 1000 },
	{ "break",   no_argument, NULL, 1001 },
	{ "version", no_argument, NULL, 'V'  },
	{ NULL }
	};

int
main(int argc, char *argv[])
{
	struct passwd *pw;
	struct servent *sp;
	uid_t uid;
	int argoff, ch, dflag, nflag, one, len;

	const char *host = NULL, *user = NULL, *name = NULL;
	const char *appname = NULL, *keytrans[4] = {NULL, NULL};
	int family = AF_UNSPEC;
	char term[1024] = {0};
	char *p;

	argoff = dflag = nflag = 0;
	one = 1;
	sp = NULL;

	setprogname(argv[0]);
	if (strcmp(getprogname(), "rlogin") != 0) {
		host = _strdup(getprogname());
		if (host == NULL)
			err(1, NULL);
	}

	/* handle "rlogin host flags" */
	if (!host && argc > 2 && argv[1][0] != '-') {
		host = argv[1];
		argoff = 1;
	}

	while ((ch = getopt_long(argc, argv, OPTIONS, long_options, NULL)) != -1) {
		switch(ch) {
		case '4':   //IP4
			family = AF_INET;
			break;
		case '6':   //IP6
			family = AF_INET6;
			break;
		case '8':   //eight bit
			eight = 1;
			break;
		case 'd':   //debug-mode
			dflag = 1;
			break;
		case 'E':   //noescape
			noescape = 1;
			break;
		case 'e':   //escape
			if (0 == strcmp(optarg, "none")) {
				noescape = 1;
			} else {
				noescape = 0;
				escapechar = getescape(optarg);
			}
			break;
		case 1001:  //enable ctrl-break
			ctrlbreak = 1;
			break;
		case 'K':   //key translation tables
			if (NULL == keytrans[0]) keytrans[0] = optarg;
			else if (NULL == keytrans[1]) keytrans[1] = optarg;
			else if (NULL == keytrans[2]) keytrans[2] = optarg;
			else if (NULL == keytrans[3]) keytrans[3] = optarg;
			else errx(1, "only four key-translation tables can be given.");
			break;
		case 'N':   //application name
			if (appname) errx(1, "multiple -N options specified.");
			appname = optarg;
			break;
		case 'i':   //local user
			if (name) errx(1, "multiple -i options specified.");
			name = optarg;
			break;
		case 'l':   //remote user
			if (user) errx(1, "multiple -l options specified.");
			user = optarg;
			break;
		case 'n':
			nflag = 1;
			break;
		case 'p':   //port
			sp = getport(optarg, "tcp");
			break;
		case 't':   //terminal_name
			if (term[0]) errx(1, "multiple -t options specified.");
			strncpy(term, optarg, sizeof(term)-1);
			break;
#if defined(CRYPT)          //WinRlogind only.
		case 'x':
			doencrypt = 1;
			des_set_key(cred.session, schedule);
			break;
#endif //CRYPT
		case 'V':   //version
			version();
		case 1000:
		case '?':
		default:
			usage();
		}
	}
	optind += argoff;
	argc -= optind;
	argv += optind;

	/* if haven't gotten a host yet, do so */
	if (!host && !(host = *argv++))
		usage();
	if (*argv)
		usage();

	if (!(pw = getpwuid(uid = w32_getuid())))
		errx(1, "unknown user id.");

	/* Accept user1@host format, though "-l user2" overrides user1 */
	p = strchr(host, '@');
	if (p) {
		*p = '\0';
		if (!user && p > host)
			user = host;
		host = p + 1;
		if (*host == '\0')
			usage();
	}
	if (NULL == name) {
		if ((name = _strdup(pw->pw_name)) == NULL) {
			err(1, "malloc");
		}
	}
	if (!user)
		user = name;

	if (-1 == w32_sockinit())
		err(1, "winsock initialisation");
	if (sp == NULL)
		sp = getservbyname("login", "tcp");
	if (sp == NULL)
		errx(1, "login/tcp: unknown service.");

	if (!*term) (void)strcpy(term, "xterm-color");
	len = (int)strlen(term);
	if (len + 8 < sizeof(term)) {
		strlcat(term, "/115200", sizeof(term));
	}

	termemu_init();
	if (appname) termemu_appname(appname);
	if (keytrans[0]) termemu_keysyms(keytrans[0]);
	if (keytrans[1]) termemu_keysyms(keytrans[1]);
	if (keytrans[2]) termemu_keysyms(keytrans[2]);
	if (keytrans[3]) termemu_keysyms(keytrans[3]);
	(void)get_window_size(&winsize);

	{	char title[128];
		sprintf(title, "rlogin %s - %s@%s", RLOGIN_VERSION, user, host);
		GetConsoleTitleW(oldtitle, sizeof(oldtitle));
		SetConsoleTitleA(title);
	}

	rem = rcmd_af(&host, sp->s_port, name, user, term, NULL, family);
	if (rem < 0) {
		done(1);
	}

	if (dflag && setsockopt(rem, SOL_SOCKET, SO_DEBUG, (void *)&one, sizeof(one)) < 0)
		warn("setsockopt DEBUG (ignored)");
	if (nflag && setsockopt(rem, IPPROTO_TCP, TCP_NODELAY, (void *)&one, sizeof(one)) < 0)
		warn("setsockopt NODELAY (ignored)");

	{	int bufsiz = 64*1024;
		if (setsockopt(rem, SOL_SOCKET, SO_SNDBUF, (void *)&bufsiz, sizeof(bufsiz)) < 0)
			warn("setsockopt SO_SNDBUF (ignored)");
		if (setsockopt(rem, SOL_SOCKET, SO_RCVBUF, (void *)&bufsiz, sizeof(bufsiz)) < 0)
			warn("setsockopt SO_RCVBUD (ignored)");
	}

#if defined(IPTOS_LOWDELAY)
	{
		struct sockaddr_storage ss;
		socklen_t sslen = sizeof(ss);
		if (getsockname(rem, (struct sockaddr *)&ss, &sslen) == 0 && ((struct sockaddr *)&ss)->sa_family == AF_INET) {
			one = IPTOS_LOWDELAY;
			if (setsockopt(rem, IPPROTO_IP, IP_TOS, (char *)&one, sizeof(int)) < 0)
				warn("setsockopt TOS (ignored)");
		}
	}
#endif	//IPTOS_LOWDELAY

	doit();
	/*NOTREACHED*/
	return (0);
}

static DECLTHREAD void
reader_task(void *arg)
{
	if (reader() == 0) {
		msg("connection closed.");
		done(0);
	}
	msg("\aconnection closed.");
	done(1);
	/*NOTREACHED*/
}

static void
doit(void)
{
#define __CTRL(c)   (c & 0x037)

	deftty.c_cc[VEOF]   = __CTRL('d');
	deftty.c_cc[VERASE] = __CTRL('h');
	deftty.c_cc[VINTR]  = __CTRL('c');
	deftty.c_cc[VKILL]  = __CTRL('x');
	deftty.c_cc[VQUIT]  = __CTRL('\\');
	deftty.c_cc[VSTOP]  = __CTRL('s');
	deftty.c_cc[VSUSP]  = __CTRL('z');
	deftty.c_ispeed = 115200;
	deftty.c_ospeed = 115200;

	if (_beginthread(reader_task, 0, NULL) == -1L) {
		err(1, "rlogin: fork: %s", strerror(errno));
		done(1);
	}

	w32_sleep(1);
	writer();
	msg("closed connection.");
	done(0);
}

static void
done(int status)
{
	termemu_exit();
	if (oldtitle[0]) SetConsoleTitleW(oldtitle);
	exit(status);
}

static int dosigwinch;

/*
 * This is called when the reader process gets the out-of-band (urgent)
 * request to turn on the window-changing protocol.
 */
static void
writeroob(void)
{
	if (dosigwinch == 0) {
		sendwindow();
	}
	dosigwinch = 1;
}

/*
 * writer: write to remote: 0 -> line.
 *
 *  Client Escapes
 *      Normally everything we type to the Rlogin client is sent to the server. Occasionally, however,
 *      we want to talk directly to the Rlogin client program itself, and not have what we type sent to
 *      the server. This is done by typing a tilde (~) as the first character of a line, followed by
 *      one of the following four characters:
 *
 *          o A period terminates the client.
 *          o The end-of-file character (often Control-D) terminates the client.
 *          o The job control suspend character (often Control-Z) suspends the client.
 *          o The job-control delayed-suspend character (often Control-Y) suspends only the client input.
 *              Everything we type is now interpreted by whatever program we run on the client host, but
 *              anything sent to the Rlogin client by the Rlogin server is output to our terminal.
 *              This can be used when we start a long running job on the server and we want to know when
 *              it outputs something, but we want to continue running other programs on the client.
 *
 *      The last two commands are supported only if the client Unix system supports job control.
 *
 *  Examples:
 *      ~.                              Terminate
 *      ~^Z                             Suspend rlogin process.
 *      ~<delayed-suspend char>         Suspend rlogin process, but leave reader alone.
 *
 *  Extension:
 *      ~B                              Send a break to the remote system; WinRlogind only.
 *
 *  Todo:
 *      ~?                              Display a ist of escape characters.
 *      ~V                              Decrease the verbosity (loglevel).
 *      ~v                              Increase the verbosity (loglevel).
 */
static void
writer(void)
{
	HANDLE hConsole = GetStdHandle(STD_INPUT_HANDLE);
	DWORD consoleMode;

	char ibuf[64+1], *ichr, *iend;	/* input buffer */
	char obuf[sizeof(ibuf)*2];	/* output buffer */
	int icnt, ocnt; 		/* in/out character number */
	int bol, local, terminate;	/* escape processing state */
	char c;

	bol = 1;			/* beginning of line */
	local = 0;			/* local escape processing */
	terminate = 0;

	GetConsoleMode(hConsole, &consoleMode);
	SetConsoleMode(hConsole, ENABLE_WINDOW_INPUT|ENABLE_MOUSE_INPUT);

	while (!terminate) {
		if ((icnt = termemu_read(ibuf, sizeof(ibuf)-1, sigwinch)) < 0)
			break;

		for (ichr = ibuf, iend = ibuf+icnt, ocnt = 0; ichr < iend;) {
			c = *ichr++;	/* next character */

			/*
			 * If we're at the beginning of the line and recognize a command character,
			 * then we echo locally.  Otherwise, characters are echo'd remotely.
			 * If the command character is doubled, this acts as a force and local echo
			 * is suppressed.
			 */
			if (bol) {
				bol = 0;
				if (icnt == 1) {/* only on single character keys */
					if (!noescape && c == escapechar) { //default: '~'
						local = 1;
						continue;
					}
				}
			} else if (local) {
				local = 0;
				if (icnt == 1) { /* only on single character keys */
					if (c == '.' || CCEQ(deftty.c_cc[VEOF], c)) {
						echo((int)c);
						terminate = 1;
						break;		//terminate (. and EOF)
					}
					if (ctrlbreak && 'B' == c /*FIXME*/) {
						sendbreak();
						continue;	//consume
					}
					if (CCEQ(deftty.c_cc[VSUSP], c)) {
						bol = 1;
						echo((int)c);
						stop(1);
						continue;	//suspend
					}
					if (CCEQ(deftty.c_cc[VDSUSP], c)) {
						bol = 1;
						echo((int)c);
						stop(0);
						continue;	//continue
					}
				}
				if (c != escapechar) {
					obuf[ ocnt++ ] = escapechar;
				}
			}
			obuf[ ocnt++ ] = c;

			bol = CCEQ(deftty.c_cc[VKILL], c) || CCEQ(deftty.c_cc[VEOF], c) ||
				CCEQ(deftty.c_cc[VINTR], c) || CCEQ(deftty.c_cc[VSUSP], c) ||
				c == '\r' || c == '\n';
		} /*for*/

		if (ocnt) {		/* flush out buffer */
			if (w32_write(rem, obuf, ocnt) == 0) {
				msg("line gone");
				break;
			}
			ocnt = 0;
		}
	}

	SetConsoleMode(hConsole, consoleMode);
}

static void
echo(int i)
{
	char c = (char)i;
	char buf[8], *p;

	p = buf;
	c &= 0177;
	*p++ = escapechar;
	if (c < ' ') {
		*p++ = '^';
		*p++ = c + '@';
	} else if (c == 0177) {
		*p++ = '^';
		*p++ = '?';
	} else
		*p++ = c;
	*p++ = '\r';
	*p++ = '\n';
	(void)termemu_write(buf, (unsigned)(p - buf));
	(void)termemu_flush();
}

static void
stop(int all)
{
	//TODO
	sigwinch();			/* check for size changes */
}

/*
 *  Screen resizing notifications.
 */
static void
sigwinch(void)
{
	int rows, cols;

	if (dosigwinch && termemu_winch(&rows, &cols)) {
		winsize.ws_row = rows, winsize.ws_col = cols;
		sendwindow();
	}
}

/*
 *  Update the current local terminal window size.
 */
static void
get_window_size(struct winsize *wp)
{
	int rows = 0, cols = 0;
	termemu_size(&rows, &cols);
	wp->ws_col = cols;
	wp->ws_row = rows;
	wp->ws_xpixel = 0;
	wp->ws_ypixel = 0;
}

/*
 * Send the window size to the server via the magic escape
 */
static void
sendwindow(void)
{
	struct winsize *wp;
	char obuf[4 + sizeof (struct winsize)];

	assert(sizeof(struct winsize) == 8);
	wp = (struct winsize *)(obuf + 4);
	obuf[0] = (char)0377;
	obuf[1] = (char)0377;
	obuf[2] = 's';
	obuf[3] = 's';
	wp->ws_row = htons(winsize.ws_row);
	wp->ws_col = htons(winsize.ws_col);
	wp->ws_xpixel = htons(winsize.ws_xpixel);
	wp->ws_ypixel = htons(winsize.ws_ypixel);
	(void)w32_write(rem, obuf, sizeof(obuf));
}


static void
sendbreak(void)
{
	char oobdata = (char)0377;
	(void)send(rem, &oobdata, 1, MSG_OOB);
}


/*
 * reader: read from remote: line -> 1
 */
static int		rcvcnt;
static char		rcvbuf[64 * 1024];

static int
oob(void)
{
	char waste[BUFSIZ], mark;
	int atmark, n;

/*
 *  When the server sends a command to the client, the server enters urgent mode with the last byte of urgent data being the
 *  command byte from the server. When the client receives the urgent mode notification, it reads from the connection, saving
 *  the data until the command byte (the last byte of urgent data) is encountered. The data that's saved by the client can be
 *  displayed on the terminal, or discarded, depending on the command. The four basic command bytes are:
 *
 *	Byte		Description
 *	0x02		Flush output. The client discards all the data received from the server, up through the command byte
 *			(the last byte of urgent data). The client also discards any pending terminal output that may be buffered.
 *			The server sends this command when it receives the interrupt key from the client.
 *	0x10		The client stops performing flow control.
 *	0x20		The client resumes flow control processing.
 *	0x80		The client responds immediately by sending the current window size to the server, and notifies the
 *			server in the future if the window size changes. This command is normally sent by the server immediately
 *			after the connection is established.
 */
#if !defined(TIOCPKT_DATA)
#define TIOCPKT_DATA		0x00	/* data packet */
#define TIOCPKT_FLUSHREAD	0x01	/* flush packet */
#define TIOCPKT_FLUSHWRITE	0x02	/* flush packet */
#define TIOCPKT_STOP		0x04	/* stop output */
#define TIOCPKT_START		0x08	/* start output */
#define TIOCPKT_NOSTOP		0x10	/* no more ^S, ^Q */
#define TIOCPKT_DOSTOP		0x20	/* now do ^S ^Q */
#define TIOCPKT_IOCTL		0x40	/* state change of pty driver */
#endif
#ifndef TIOCPKT_WINDOW
#define TIOCPKT_WINDOW		0x80
#endif

	while (recv(rem, &mark, 1, MSG_OOB) < 0) {
		switch (errno) {
		case EWOULDBLOCK:
			/*
			 * Urgent data not here yet.
			 * It may not be possible to send it yet if we are blocked for output
			 * and our input buffer is full.
			 */
			if (rcvcnt < (int)sizeof(rcvbuf)) {
				n = w32_read(rem, rcvbuf + rcvcnt, sizeof(rcvbuf) - rcvcnt);
				if (n <= 0) {
					if (n < 0) return -1;
					return 0;
				}
				rcvcnt += n;
			} else {
				n = w32_read(rem, waste, sizeof(waste));
				if (n <= 0) {
					if (n < 0) return -1;
					return 0;
				}
			}
			continue;
		default:
			return 0;
		}
	}

	if (mark & TIOCPKT_WINDOW) {
		writeroob();
	}

//	if (!eight && (mark & TIOCPKT_NOSTOP)) {
//	}

//	if (!eight && (mark & TIOCPKT_DOSTOP)) {
//	}

	if (mark & TIOCPKT_FLUSHWRITE) {
		for (;;) {
			if (ioctlsocket(rem, SIOCATMARK, &atmark) < 0) {
				warn("ioctl SIOCATMARK (ignored)");
				break;
			}
			if (atmark)
				break;
			n = w32_read(rem, waste, sizeof (waste));
			if (n <= 0)
				break;
		}

		/*
		 * Don't want any pending data to be output, so clear the recv buffer.
		 * If we were hanging on a write when interrupted, don't want it to restart.
		 * If we were reading, restart anyway.
		 */
		rcvcnt = 0;
		return 1;
	}

	/*
	 * If we filled the receive buffer while a read was pending, flush
	 */
	return 0;
}

/* reader: read from remote: line -> 1 */
static int
reader(void)
{
	struct	pollfd fds[1];
	int	ret, n, flush = 0;

	rcvcnt = 0;
	for (;;) {
		fds[0].fd = rem;
		fds[0].events = (POLLIN|POLLPRI);

		if ((ret = w32_poll_native(fds, 1, flush ? 20 : 28*1000)) < 1) {
			if (0 == ret) { /* flush terminal */
				termemu_flush();
				flush = 0;
				continue;
			}
			return -1;
		}

		if (fds[0].revents & POLLPRI) {
			/* OOB data detected */
			if (-1 == (n = oob()))
				return (-1);
			if (n == 0 && rcvcnt) {
				termemu_write(rcvbuf, rcvcnt);
				rcvcnt = 0;
				flush = 1;
			}

		} else if (fds[0].revents & POLLHUP) {
			/* socket close */
			return 0;

		} else if (fds[0].revents & (POLLERR|POLLNVAL)) {
			/* socket error */
			lostpeer(SIGPIPE);

		} else if (fds[0].revents & POLLIN) {
			/* refill buffer */
			rcvcnt = w32_read(rem, rcvbuf, sizeof (rcvbuf));
			if (rcvcnt == 0)
				return (0);
			if (rcvcnt < 0) {
				if (errno == EINTR)
					continue;
				msgx("read");
				return (-1);
			}
			termemu_write(rcvbuf, rcvcnt);
			rcvcnt = 0;
			flush = 1;
		}
	}
	/*NOTREACHED*/
}

static void
lostpeer(int signo)
{
	msg("\aconnection closed.");
	done(1);
}

static void
msg(const char *str)
{
	(void)fprintf(stderr, "\nrlogin: %s\r\n", str);
}

static void
msgx(const char *str)
{
	(void)fprintf(stderr, "\nrlogin: %s : %s\r\n", str, w32_strerror(errno));
}

static void
usage(void)
{
	const char *progname = getprogname();

	(void)fprintf(stderr,
	    "Usage:\n"\
		"\t%s [-468Edn] [-e char] [-k keytrans] [-i localname] [-l username] [-p port] [-t terminal-name] host\n" \
		"\t%s [-468Edn] [-e char] [-k keytrans] [-i localname] [-p port] [-t terminal-name] user@host\n"
		"\t%s -V\n",
	    progname, progname, progname);
	exit(1);
}

static void
version(void)
{
	const char *progname = getprogname();

	fprintf(stderr, "winrsh - console rlogin client\n");
	fprintf(stderr, "%s: %s Build %s (%s), libtsm %s, libw32 %s\n\n",
	    progname, RLOGIN_VERSION, RLOGIN_BUILDNUMBER, RLOGIN_BUILDDATE, LIBTSM_VERSION, LIBW32_VERSION);

	fprintf(stderr,
	    "Copyright (C) 2015-2020 Adam Young\n"
	    "libtsm - Copyright (c) 2011-2013 David Herrmann (https://www.freedesktop.org/wiki/Software/kmscon/libtsm/)\n"
	    "All rights reserved\n\n");

	fprintf(stderr,
	    "Please send any bug reports (including the output of '%s -V') as tickets\n"
	    "at https://sourceforge.net/projects/winrsh\n", progname);
	exit(0);
}

static u_int
getescape(char *p)
{
	long val;
	int len;

	if ((len = (int)strlen(p)) == 1)/* use any single char, including '\' */
		return ((u_int)*p);
					/* otherwise, \nnn */
	if (*p == '\\' && len >= 2 && len <= 4) {
		val = strtol(++p, NULL, 8);
		for (;;) {
			if (!*++p)
				return ((u_int)val);
			if (*p < '0' || *p > '8')
				break;
		}
	}
	msg("illegal option value -- e");
	usage();
	/* NOTREACHED */
	return (0);
}

