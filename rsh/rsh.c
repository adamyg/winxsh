/*-
 * Copyright (c) 1983, 1990, 1993, 1994
 *	The Regents of the University of California.  All rights reserved.
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
 *   __RCSID("$NetBSD: rsh.c,v 1.36.2.1 2014/12/01 13:43:13 martin Exp $");
 */

#include <sys/cdefs.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <poll.h>

#include <netinet/in.h>
#include <netinet/tcp.h>
#include <netdb.h>

#include <err.h>
#include <errno.h>
#include <limits.h>
#include <pwd.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define _NETBSD_SOURCE
#include "../librcmd/getport.h"
#include "../librcmd/rcmd.h"
#include "../librcmd/pathnames.h"

#if defined(__WATCOMC__)
#define DECLTHREAD      /**/
#elif defined(_MSC_VER)
#define DECLTHREAD      cdecl
#else
#error unknown toolchain
#endif


/*
 * rsh - remote shell
 */
static int	remerr = -1;

static void	set_env(const char *name, const char *value, int overwrite);
static char *	copyargs(char **);
static int	checkfd(struct pollfd *, int);
static void	talk(int, int);
static void	usage(void);
#ifdef IN_RCMD
static int	relay_signal;
#endif

void
main(int argc, char **argv)
{
	struct passwd *pw;
	struct servent *sp;
	struct protoent *proto;

#ifdef IN_RCMD
	char *locuser = 0, *loop, *relay;
#endif /* IN_RCMD */
	int argoff, asrsh, ch, dflag, nflag, one, rem;
	int family = AF_UNSPEC;
	uid_t uid;
	const char *host = NULL, *user;
	char *args, *p, *name;

	argoff = asrsh = dflag = nflag = 0;
	one = 1;
	host = user = NULL;
	sp = NULL;

	setprogname(argv[0]);
#ifndef IN_RCMD
	/*
	 * If called as something other than "rsh" use it as the host name, only for rsh.
	 */
	if (strcmp(getprogname(), "rsh") == 0)
		asrsh = 1;
	else {
		host = _strdup(getprogname());
		if (host == NULL)
			err(1, NULL);
	}
#endif /* IN_RCMD */

	/* handle "rsh host flags" */
	if (!host && argc > 2 && argv[1][0] != '-') {
		host = argv[1];
		argoff = 1;
	}

#ifdef IN_RCMD
	if ((relay = getenv("RCMD_RELAY_SIGNAL")) && strcmp(relay, "YES") == 0)
		relay_signal = 1;
	if ((loop = getenv("RCMD_LOOP")) && strcmp(loop, "YES") == 0)
		warnx("rcmd appears to be looping!");

	set_env("RCMD_LOOP", "YES", 1);

#define OPTIONS	"468KLdel:np:u:w"

#else /* IN_RCMD */

#define OPTIONS	"468KLdel:np:w"

#endif /* IN_RCMD */

	if (!(pw = getpwuid(uid = w32_getuid())))
		errx(1, "unknown user id");

	if ((name = _strdup(pw->pw_name)) == NULL)
		err(1, "malloc");
	while ((ch = getopt(argc - argoff, argv + argoff, OPTIONS)) != -1)
		switch (ch) {
		case '4':
			family = AF_INET;
			break;
		case '6':
			family = AF_INET6;
			break;
		case 'K':
			break;
		case 'L':	/* -8Lew are ignored to allow rlogin aliases */
		case 'e':
		case 'w':
		case '8':
			break;
		case 'd':
			dflag = 1;
			break;
		case 'l':
			user = optarg;
			break;
		case 'n':
			nflag = 1;
			break;
		case 'p':
			sp = getport(optarg, "tcp");
			break;
#ifdef IN_RCMD
		case 'u':
			locuser = optarg;
			break;
#endif /* IN_RCMD */
		case '?':
		default:
			usage();
		}
	optind += argoff;

	/* if haven't gotten a host yet, do so */
	if (!host && !(host = argv[optind++]))
		usage();

	/* if no further arguments, must have been called as rlogin. */
	if (!argv[optind]) {
#ifdef IN_RCMD
		usage();
#else
//		if (asrsh)
//			*argv = __UNCONST("rlogin");
//		execv(_PATH_RLOGIN, argv);
//		err(1, "can't exec %s", _PATH_RLOGIN);
		err(1, "use 'rlogin' ....");
#endif
	}

	if (w32_sockinit() == -1)
		err(3, "winsock initialisation");

	argc -= optind;
	argv += optind;

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
	if (!user)
		user = name;

	args = copyargs(argv);

	if (sp == NULL)
		sp = getservbyname("shell", "tcp");
	if (sp == NULL)
		errx(1, "shell/tcp: unknown service");

#ifdef IN_RCMD
	rem = orcmd_af(&host, sp->s_port, locuser ? locuser : name, user, args, &remerr, family);
#else
	rem = rcmd_af(&host, sp->s_port, name, user, args, &remerr, family);
#endif
	(void)free(name);

	if (rem < 0)
		exit(1);

	if (remerr < 0)
		errx(1, "can't establish stderr");
	if (dflag) {
		if (setsockopt(rem, SOL_SOCKET, SO_DEBUG, &one, sizeof(one)) < 0)
			warn("setsockopt remote");
		if (setsockopt(remerr, SOL_SOCKET, SO_DEBUG, &one, sizeof(one)) < 0)
			warn("setsockopt stderr");
	}
	proto = getprotobyname("tcp");
	setsockopt(rem, proto->p_proto, TCP_NODELAY, &one, sizeof(one));
	setsockopt(remerr, proto->p_proto, TCP_NODELAY, &one, sizeof(one));

#ifdef IN_RCMD
	if (!relay_signal)
#endif
	(void)ioctlsocket(remerr, FIONBIO, &one);
	(void)ioctlsocket(rem, FIONBIO, &one);

	talk(nflag, rem);
	exit(0);
}



#ifdef IN_RCMD
static void
set_env(const char *name, const char *value, int overwrite)
{
	if ((1 == overwrite) || NULL == getenv(name)) {
#if defined(__WATCOMC__)
		setenv(name, value, TRUE);
#else
		char buf[1024];
		snprintf(buf, sizeof(buf), "%s=%s", name, value);
		buf[sizeof(buf)-1] = 0;
		_putenv(_strdup(buf));
#endif
	}
}
#endif  //#ifdef IN_RCMD


static BOOL WINAPI
CtrlHandler(DWORD fdwCtrlType)
{
	char signo = 1;
	switch (fdwCtrlType) {
	case CTRL_C_EVENT:
		signo = 2;  // SIGINT
		w32_write(remerr, &signo, sizeof(signo));
		return TRUE;
	case CTRL_BREAK_EVENT:
		signo = 3;  // SIGQUIT
		w32_write(remerr, &signo, sizeof(signo));
		return FALSE;
	case CTRL_CLOSE_EVENT:
		signo = 15;  // SIGTERM
		w32_write(remerr, &signo, sizeof(signo));
		return TRUE;
	case CTRL_LOGOFF_EVENT:
	case CTRL_SHUTDOWN_EVENT:
		signo = 15;  // SIGTERM
		w32_write(remerr, &signo, sizeof(signo));
		return FALSE;
	default:
		return FALSE;
	}
}


static DECLTHREAD void
reader_task(void *arg)
{
	const int rem = *((int *)arg);
	struct pollfd fds[1] = {0};
	char buf[BUFSIZ];
	const char *bp;
	int cc;

	(void) SetConsoleCtrlHandler(CtrlHandler, TRUE);

reread: errno = 0;
	if ((cc = _read(STDIN_FILENO, buf, sizeof buf)) <= 0) {
		goto done;
	}
	bp = buf;

rewrite:;
	fds[0].events = POLLOUT;
	fds[0].fd = rem;
	if (poll(fds, 1, -1 /*INFTIM*/) == -1) {
		if (errno != EINTR)
			err(1, "poll");
		goto rewrite;
	}

	if (fds[0].revents & POLLOUT) {
		int wc = w32_write(rem, bp, cc);
		if (wc < 0) {
			if (errno == EWOULDBLOCK)
				goto rewrite;
			goto done;
		}
		bp += wc;
		cc -= wc;
		if (cc == 0)
		        goto reread;

	} else if (fds[0].revents & (POLLERR|POLLHUP)) {
		goto done;
	}
	goto rewrite;

done:;
        (void) SetConsoleCtrlHandler(CtrlHandler, FALSE);
	shutdown(rem, SD_SEND);
}


static int
checkfd(struct pollfd *fdp, int outfd)
{
	int nr, nw;
	char buf[BUFSIZ];

	if (fdp->revents & (POLLNVAL|POLLERR|POLLHUP))
		return -1;

	if ((fdp->revents & POLLIN) == 0)
		return 0;

	errno = 0;
	nr = w32_read((int)fdp->fd, buf, sizeof buf);

	if (nr <= 0) {
		if (errno != EAGAIN)
			return -1;
		else
			return 0;
	}
	else {
		char *bc = buf;
		while (nr) {
			if ((nw = w32_write(outfd, bc, nr)) <= 0)
				return -1;
			nr -= nw;
			bc += nw;
		}
		return 0;
	}
}


static void
talk(int nflag, int rem)
{
	struct pollfd fds[3] = {0}, *fdp;
	int nfds;

	_setmode(STDIN_FILENO, _O_BINARY);
	_setmode(STDOUT_FILENO, _O_BINARY);

	if (! nflag) {
		if (_beginthread(reader_task, 0, (void *)&rem) == -1L) {
			err(1, "rsh: fork: %s", strerror(errno));
		}
	} else {
		shutdown(rem, SD_SEND);
	}

	fdp = &fds[1];
	nfds = 2;
	fds[0].events = 0;

#ifdef IN_RCMD
	if (relay_signal) {
		fdp = &fds[0];
		nfds = 3;
		fds[0].events = POLLIN|POLLNVAL|POLLERR|POLLHUP;
		fds[0].fd = 2;
	} //else
#endif

	fds[1].events = fds[2].events = POLLIN|POLLNVAL|POLLERR|POLLHUP;
	fds[1].fd = remerr;
	fds[2].fd = rem;
	do {
		if (poll(fdp, nfds, -1 /*INFTIM*/) == -1) {
			if (errno != EINTR)
				err(1, "poll");
			continue;
		}

		if ((fds[1].events != 0 && checkfd(&fds[1], STDERR_FILENO) == -1)
#ifdef IN_RCMD
		    || (fds[0].events != 0 && checkfd(&fds[0], remerr) == -1)
#endif
		    ) {
			nfds--;
			fds[1].events = 0;
#ifdef IN_RCMD
			if (relay_signal) {
				nfds--;
				fds[0].events = 0;
			}
#endif
			fdp = &fds[2];
		}

		if (fds[2].events != 0 && checkfd(&fds[2], STDOUT_FILENO) == -1) {
			nfds--;
			fds[2].events = 0;
		}
	}
	while (nfds);
}


static char *
copyargs(char **argv)
{
	char **ap, *args, *p, *ep;
	size_t cc;

	cc = 0;
	for (ap = argv; *ap; ++ap)
		cc += strlen(*ap) + 1;
	if (!(args = malloc((u_int)cc)))
		err(1, "malloc");
	ep = args + cc;
	for (p = args, *p = '\0', ap = argv; *ap; ++ap) {
		(void)strlcpy(p, *ap, ep - p);
		p += strlen(p);
		if (ap[1])
			*p++ = ' ';
	}
	*p = '\0';
	return (args);
}


static void
usage(void)
{
	(void)fprintf(stderr,
	    "usage: %s [-46dn] [-l login] [-p port]%s [login@]host command\n",
	    getprogname(),
#ifdef IN_RCMD
	    " [-u locuser]"
#else
	    ""
#endif
	    );
	exit(1);
}

