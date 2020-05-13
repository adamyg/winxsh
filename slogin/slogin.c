#include <edidentifier.h>
__CIDENT_RCSID(slogin_c,"$Id: slogin.c,v 1.11 2020/05/09 15:07:19 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * slogin, windows console ssh client (libssh2 based).
 *
 * Copyright (c) 2015 - 2020, Adam Young.
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
 * License for more details.
 * ==end==
 */

#if defined(HAVE_CONFIG_H)
#include "config.h"
#endif
#define WIN32_SOCKET_H_CLEAN		// disable socket function mapping

#ifdef HAVE_SYS_SOCKET_H
# include <sys/socket.h>
#endif
#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif
#ifdef HAVE_ARPA_INET_H
#include <arpa/inet.h>			// inet_pton
#else
#include <Ws2tcpip.h>
#endif
#include <netdb.h>
#include <sys/poll.h>
#include <poll.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#include <err.h>
#include <pwd.h>
#include <fcntl.h>
#include <errno.h>
#include <assert.h>

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#include <libssh2.h>
#include <libssh2_helper.h>

#define _NETBSD_SOURCE
#include "../libtermemu/termios.h"
#include "../libtermemu/compat.h"
#include "../libtermemu/termemu_tsm.h"

#include "options.h"

#if defined(__WATCOMC__)
#define DECLTHREAD	/**/
#define _putch(__c)	putch(__c)

#elif defined(_MSC_VER)
#define DECLTHREAD	cdecl

#else
#error target ...
#endif

struct winsize {
	unsigned short ws_row;		/* rows, in characters */
	unsigned short ws_col;		/* columns, in characters */
	unsigned short ws_xpixel;	/* horizontal size, pixels */
	unsigned short ws_ypixel;	/* vertical size, pixels */
};

static void		ssh2_sockinit(void);
static int		ssh2_create(const char *host, const struct options *options, const char *term, struct winsize *wp);
static int		ssh2_authenticate_direct(const struct options *options, const char *host);
static int		ssh2_authenticate_agent(const struct options *options);
static int		ssh2_prompt_continue(const struct options *options, const char *msg);
static int		ssh2_connect(const char **ahost, const char **aip, const struct options *options);
static void		ssh2_done(void);

static void *		ssh2_trace_init(const char *filename);
static void		ssh2_trace_close(void *context);
static void		ssh2_trace_handler(LIBSSH2_SESSION *session, void* context, const char *data, size_t length);

static int		prompt_confirm(const struct options *options, const char *msg);
static char *		prompt_user(const char *msg, int echo);
static int		prompt_password();

static char *		path_resolve(const char *path);
static int		path_make(const char *path, int has_file);

static void		run(const struct options *options);
static void		done(int status);
static void		writer(const struct options *options);
static void		echo(unsigned char ch, unsigned char escapechar);
static void		stop(int all);
static void		sigwinch(void);
static void		get_window_size(struct winsize *wp);
static void		sendwindow(void);
static DECLTHREAD void	reader_task(void *arg);
static int		reader(const struct options *options);
static int		nonterminal(const struct options *options);
static void		lostpeer(void);

static const char *	user;
static const char *	password;

static char		tty_cc[NCCS] = {0};
static struct winsize winsize;

static WCHAR		oldtitle[256] = {0};
static LIBSSH2_SESSION *session = NULL;
static LIBSSH2_AGENT   *agent = NULL;
static LIBSSH2_CHANNEL *channel = NULL;

static int		rem = -1;

static void kbd_callback_prompt(const char *name, int name_len,
		const char *instruction, int instruction_len,
		int num_prompts,
		const LIBSSH2_USERAUTH_KBDINT_PROMPT *prompts,
		LIBSSH2_USERAUTH_KBDINT_RESPONSE *responses,
		void **abstract)
{
	(void)name;
	(void)name_len;
	(void)instruction;
	(void)instruction_len;
	if (!password) password = prompt_user("Password:", FALSE);
	responses[0].text = strdup(password?password:"");
	responses[0].length = (unsigned)strlen(responses[0].text);
	free((void *)password), password = NULL;
	(void)prompts;
	(void)abstract;
} /* kbd_callback */

static void kbd_callback_noprompt(const char *name, int name_len,
		const char *instruction, int instruction_len,
		int num_prompts,
		const LIBSSH2_USERAUTH_KBDINT_PROMPT *prompts,
		LIBSSH2_USERAUTH_KBDINT_RESPONSE *responses,
		void **abstract)
{
	(void)name;
	(void)name_len;
	(void)instruction;
	(void)instruction_len;
	if (1 == num_prompts) {
		responses[0].text = strdup(password?password:"");
		responses[0].length = (unsigned)strlen(responses[0].text);
	}
	(void)prompts;
	(void)abstract;
} /* kbd_callback */


#define OPTIONS "46aAb:c:Ce:k:N:l:o:p:" "Tt:" "dnqVvE:" "PIK" "Q:"

static const struct option long_options[] = {
	{ "usage",   no_argument, NULL, 1000 },
	{ "version", no_argument, NULL, 'V' },
	{ NULL }
	};

int
main(int argc, char *argv[])
{
	char *u, term[1024] = "";
	struct options options = {0};

	const char *appname = NULL, *keytrans[4] = {NULL, NULL};
	const char *host = NULL;
	int ch, one;

	user = NULL;
	password = NULL;

	setprogname(argv[0]);
	ssh2_sockinit();

	options_default(&options);
	while ((ch = getopt_long(argc, argv, OPTIONS, long_options, NULL)) != -1)
		switch(ch) {
		case '4':   //IP4
			options.AddressFamily = AF_INET;
			break;
		case '6':   //IP6
			options.AddressFamily = AF_INET6;
			break;
		case 'a':   //disable agent
			options.Agent = 0;
			break;
		case 'A':   //enable agent -- undocumented
			options.Agent = 1;
			break;
		case 'b':   //bind-address
			if (options.BindAddress) usagex("multiple -b options specified.");
			options.BindAddress = optarg;
			break;
		case 'c':   //ciphers
			options.CipherList = optarg;
			break;
		case 'C':   //compression
			options.Compression = 1;
			break;
		case 'e':   //escape
			if (opt_parse_escape(optarg, &options.EscapeCharacter) < 0) {
				usagex("illegal escape specification <-e %s>", optarg);
			}
			break;
		case 'k':   //keysyms
			if (NULL == keytrans[0]) keytrans[0] = optarg;
			else if (NULL == keytrans[1]) keytrans[1] = optarg;
			else usagex("only two key-translation tables can be given.");
			break;
		case 'N':   //application name
			if (appname) usagex("multiple -N options specified.");
			appname = optarg;
			break;
		case 'l':   //login-name
			if (options.User) usagex("multiple -l options specified.");
			options.User = optarg;
			break;
		case 'o': { //option configuration.
#if defined(_DEBUG)
				if (0 == strcmp(optarg, "__test__")) {
					options_decode_test(&options);
					return -1;
				}
#endif
			}
			if (-1 == options_decode(&options, optarg)) {
				exit(3);
			}
			break;
		case 'p':   //port
			if (opt_parse_port(optarg, &options.Port) <= 0) {
				usagex("bad port specification <-p %s>", optarg);
			}
			break;
		case 'T':   //disable pseudo-terminal
			options.PseudoTerminal = 0;
			break;
		case 't':   //enable pseudo-terminal
			if (term[0]) errx(1, "multiple -t options specified.");
			strncpy(term, optarg, sizeof(term)-1);
			options.PseudoTerminal = 1;
			break;
		case 'q':   //quiet
			options.Quiet = 1;
			break;
		case 'd':   //debug mode.
			options.DebugMode = 1;
			break;
		case 'n':   //non-delay.
			options.NonDelay = 1;
			break;
		case 'E':   //logfile
			options.DebugOutput = optarg;
			break;
		case 'v':   //verbose, one or more (max 3)
			if (options.LogLevel < 3) {
				++options.LogLevel;
				++options.DebugMode;
			}
			break;
		case 'V':
			version();
			break;
		case 'P':
			options.Authentication |= AUTH_PASSWORD;
			break;
		case 'I':
			options.Authentication |= AUTH_INTERACTIVE;
			break;
		case 'K':
			options.Authentication |= AUTH_PUBLICKEY;
			break;

//		case 'x':   //Enables X11 forwarding.
//			options.forward_x11 = 0;
//			break;
//		case 'X':   //Disables X11 forwarding.
//			options.forward_x11 = 1;
//			break;
//		case 'Y':   //Enables trusted X11 forwarding.
//			options.forward_x11 = 1;
//			options.forward_x11_trusted = 1;
//			break;

		case 'Q':   //query <type>
			{
				const char *desc = NULL;
				int what = -1;

				if (0 == strcmp(optarg, "kex")) {
					desc = "key exchange algorithms";
					what = LIBSSH2_METHOD_KEX;

				} else if (0 == strcmp(optarg, "key")) {
					desc = "public key algorithms";
					what = LIBSSH2_METHOD_HOSTKEY;

				} else if (0 == strcmp(optarg, "cipher")) {
					desc = "symmetric algorithms";
					what = LIBSSH2_METHOD_CRYPT_CS;

				} else if (0 == strcmp(optarg, "mac")) {
					desc = "message integrity codes";
					what = LIBSSH2_METHOD_MAC_CS;

				} else if (0 == strcmp(optarg, "comp")) {
					desc = "compression methods";
					what = LIBSSH2_METHOD_COMP_CS;

				} else if (0 == strcmp(optarg, "lang")) {
					desc = "languages";
					what = LIBSSH2_METHOD_LANG_CS;

				} else if (0 == strcmp(optarg, "protocol-version")) {
					printf("2\n");
					return 0;

				} else {
					errx(1, "unknown query <%s> optarg; kex, key, cipher, mac, comp, lang or protocol-version", optarg);
				}

				if (what >= 0) {
					LIBSSH2_SESSION *session = libssh2_session_init();
					const char **algorithms = NULL;
					int i, rc;

					printf("LIBSSH2 engine: %s\n", libssh2_helper_engine());
					libssh2_session_flag(session, LIBSSH2_FLAG_COMPRESS, 1);
					if ((rc = libssh2_session_supported_algs(session, what,  &algorithms)) > 0) {
						if (desc) printf("Supported %s:\n", desc);
						for (i = 0; i < rc; ++i) {
							printf("%s\n", algorithms[i]);
						}
						libssh2_free(session, (void *)algorithms);
					}
				}
			}
			return 0;
		case 1000:
			usage_full();
		case '?':
		default:
			usage();
		}
	argc -= optind;
	argv += optind;

	/* Host and optional password */
	if (NULL == (host = *argv++)) {
		if (optind > 1) usagex("expected host specification.");
		usage();
	}
	if (*argv)                              // additional?
		usage();

	/* Accept user1[:password]@host format, though "-l user" overrides */
	user = options.User;
	if (NULL != (u = strchr(host, '@'))) {
		char *p;

		*u = '\0';                      // terminate user + [password].
		if (NULL != (p = strchr(host, ':')) && p < u) {
			*p++ = '\0';            // terminate user.
			if (*p) password = strdup(p);
		}
		if (!user && u > host)
			user = host;
		host = u + 1;
		if (*host == '\0')
			usage();
	}

	if (!user) {
		struct passwd *pw;
		if (!(pw = getpwuid(w32_getuid())))
			errx(1, "unknown user identifier.");
		if ((user = _strdup(pw->pw_name)) == NULL)
			err(1, "malloc");
	}

	if (!*term) strcpy(term, "xterm-color");

	termemu_init();
	if (appname) termemu_appname(appname);
	if (keytrans[0]) termemu_keysyms(keytrans[0]);
	if (keytrans[1]) termemu_keysyms(keytrans[1]);
	if (keytrans[2]) termemu_keysyms(keytrans[2]);
	if (keytrans[3]) termemu_keysyms(keytrans[3]);
	if (options.ColorPalette)
		termemu_palette(options.ColorPalette);
	(void)get_window_size(&winsize);
	{	char title[128];
		_snprintf(title, sizeof(title), "slogin %s - %s@%s", SLOGIN_VERSION, user, host);
		GetConsoleTitleW(oldtitle, sizeof(oldtitle));
		SetConsoleTitleA(title);
	}

	options.publickey_path = path_resolve(options.publickey_path);
	options.privatekey_path = path_resolve(options.privatekey_path);
	options.knownhosts_path = path_resolve(options.knownhosts_path);

	rem = ssh2_create(host, &options, term, &winsize);
	if (rem == -1) {
		done(1);
	}

//	if (options.DebugMode && setsockopt(rem, SOL_SOCKET, SO_DEBUG, (const char *)&one, sizeof(one)) < 0)
//		warn("setsockopt DEBUG (ignored)");
	if (options.NonDelay && setsockopt(rem, IPPROTO_TCP, TCP_NODELAY, (const char *)&one, sizeof(one)) < 0)
		warn("setsockopt NODELAY (ignored)");

	{	int bufsiz = 64*1024;
		if (setsockopt(rem, SOL_SOCKET, SO_SNDBUF, (const char *)&bufsiz, sizeof(bufsiz)) < 0)
			warn("setsockopt SO_SNDBUF (ignored)");
		if (setsockopt(rem, SOL_SOCKET, SO_RCVBUF, (const char *)&bufsiz, sizeof(bufsiz)) < 0)
			warn("setsockopt SO_RCVBUD (ignored)");
	}

#if defined(IPTOS_LOWDELAY)
	{
		struct sockaddr_storage ss;
		socklen_t sslen = sizeof(ss);
		if (getsockname(rem, (struct sockaddr *)&ss, &sslen) == 0
				&& ((struct sockaddr *)&ss)->sa_family == AF_INET) {
			one = IPTOS_LOWDELAY;
			if (setsockopt(rem, IPPROTO_IP, IP_TOS, (char *)&one, sizeof(int)) < 0)
				warn("setsockopt TOS (ignored)");
		}
	}
#endif

	run(&options);
	/*NOTREACHED*/
	return (0);
}

static void
ssh2_sockinit(void)
{
	WSADATA wsadata;
	if (WSAStartup(MAKEWORD(2,0), &wsadata) != 0) {
		err(1, "winsock initialisation : %d", err);
		exit(3);
	}
}

static int
ssh2_create(const char *host, const struct options *options, const char *term, struct winsize *wp)
{
	LIBSSH2_KNOWNHOSTS *knownhosts = NULL;
	const char *fingerprint = NULL, *fingerprint_type = "";
	const char *hostkey = NULL, *banner = NULL;
	const char *ip = "";
	int hostkey_type;
	size_t fingerprint_len = 0, hostkey_len = 0;
	char *errmsg = "";
	int sock, rc;

	/*
	 *  Initialisation
	 */
	rc = libssh2_init(0);
	if (rc != 0) {
		warnx("libssh2 initialization failed (%d)", rc);
		return 1;
	}

	/*
	 *  Connect ...
	 */
	if ((SOCKET)-1 == (sock = ssh2_connect(&host, &ip, options))) {
		warn("failed to connect");
		return -1;
	}

	/*
	 *  Create a session instance and start it up. This will trade welcome
	 *  banners, exchange keys, and setup crypto, compression, and MAC layers
	 */
	session = libssh2_session_init();

	if (options->DebugMode) {
		if (! libssh2_helper_trace()) { //only available when explicitly built (LIBSSH2DEBUG).
			warnx("LIBSSH2 trace not available, option ignored");
		} else {
			void *context = ssh2_trace_init(options->DebugOutput);
			int bitmask;

			if (context) {
				libssh2_trace_sethandler(session, context, ssh2_trace_handler);
			}

			bitmask |= LIBSSH2_TRACE_KEX | LIBSSH2_TRACE_AUTH | LIBSSH2_TRACE_PUBLICKEY | LIBSSH2_TRACE_ERROR;
			if (options->DebugMode > 1) bitmask |= LIBSSH2_TRACE_TRANS | LIBSSH2_TRACE_CONN;
			if (options->DebugMode > 2) bitmask |= LIBSSH2_TRACE_SOCKET;

			libssh2_trace(session, bitmask);
		}
	}

	if (options->Compression)
		(void) libssh2_session_flag(session, LIBSSH2_FLAG_COMPRESS, 1);

	if (options->CipherList && *options->CipherList) {
		libssh2_session_method_pref(session, LIBSSH2_METHOD_CRYPT_CS, options->CipherList);
		libssh2_session_method_pref(session, LIBSSH2_METHOD_CRYPT_SC, options->CipherList);
	}

	if (libssh2_session_handshake(session, sock)) {
		(void)libssh2_session_last_error(session, &errmsg, NULL, 0);
		warnx("failure establishing SSH session : %s", errmsg);
			//  if "Unable to exchange encryption keys" then
			//	check available ciphers
			//  endif
		return -1;
	}

	if (! options->Quiet) {
		fprintf(stderr, "Connected ... \n");
		if (NULL != (banner = libssh2_session_banner_get(session)) && *banner) {
			fprintf(stderr, "Remote: %s\n", banner);
		}
	}

	/*
	 *  At this point we havn't authenticated, verify host
	 */
	if (NULL != (fingerprint = libssh2_hostkey_hash(session, LIBSSH2_HOSTKEY_HASH_SHA1))) {
		fingerprint_type = "SHA1";
		fingerprint_len = 20;
	} else if (NULL != (fingerprint = libssh2_hostkey_hash(session, LIBSSH2_HOSTKEY_HASH_MD5))) {
		fingerprint_type = "MD5";
		fingerprint_len = 16;
	}

	if (NULL == (knownhosts = libssh2_knownhost_init(session))) {
		warnx("failed to initialize known hosts support");
		goto shutdown;
	}

	libssh2_knownhost_readfile(knownhosts, options->knownhosts_path, LIBSSH2_KNOWNHOST_FILE_OPENSSH);
	hostkey = (const char*)libssh2_session_hostkey(session, &hostkey_len, &hostkey_type);
	if (hostkey) {
		struct libssh2_knownhost *known = NULL;
		const int check = libssh2_knownhost_check(knownhosts, host, hostkey, hostkey_len,
					LIBSSH2_KNOWNHOST_TYPE_PLAIN | LIBSSH2_KNOWNHOST_KEYENC_RAW, &known);
		char fingerprint_text[256+1], message[1024];
		const char *prompt = NULL;
		size_t i;

		for(i = 0; i < fingerprint_len && i < (sizeof(fingerprint_text)/2); ++i) {
			sprintf(fingerprint_text + (i*3), ":%02x", (unsigned)(((unsigned char *)fingerprint)[i]));
		}

		if (check == LIBSSH2_KNOWNHOST_CHECK_MATCH) {
		} else if (check == LIBSSH2_KNOWNHOST_CHECK_MISMATCH) {
			_snprintf(message, sizeof(message),
				"-------------------------------------------------------\n"\
				"----------------------- WARNING -----------------------\n"\
				"-------------------------------------------------------\n"\
				"The authenticity of host '%.200s (%s)' is questionable.\n"\
				"Host key fingerprint hash is %s%s\n", host, ip, fingerprint_type, fingerprint_text);
			prompt = message;
		} else if (check == LIBSSH2_KNOWNHOST_CHECK_NOTFOUND) {
			_snprintf(message, sizeof(message),
				"The authenticity of host '%.200s (%s)' can't be established.\n"\
				"Host key fingerprint hash is %s%s\n", host, ip, fingerprint_type, fingerprint_text);
			prompt = message;
		} else /*if (check == LIBSSH2_KNOWNHOST_CHECK_FAILURE)*/ {
			(void)libssh2_session_last_error(session, &errmsg, NULL, 0);
			warnx("unable to verify known host: %s", errmsg);
			goto shutdown;
		}

		if (prompt && options->StrictHostKeyChecking /*default*/) {
			if (ssh2_prompt_continue(options, prompt) != 1) {
				goto shutdown;
			}
			if (check == LIBSSH2_KNOWNHOST_CHECK_NOTFOUND) {
				int key_type = 0, rc;

				switch (hostkey_type) {
				case LIBSSH2_HOSTKEY_TYPE_RSA:
					key_type = LIBSSH2_KNOWNHOST_KEY_SSHRSA;
					break;
				case LIBSSH2_HOSTKEY_TYPE_DSS:
					key_type = LIBSSH2_KNOWNHOST_KEY_SSHDSS;
					break;
				default:
					break;
				}

				if (libssh2_knownhost_addc(knownhosts, host, NULL, hostkey, hostkey_len, NULL, 0,
						(LIBSSH2_KNOWNHOST_TYPE_PLAIN | LIBSSH2_KNOWNHOST_KEYENC_RAW | key_type),
						NULL) != LIBSSH2_ERROR_NONE) {
					(void)libssh2_session_last_error(session, &errmsg, NULL, 0);
					warnx("unable to register known host: %s", errmsg);
				} else {
					if (0 != (rc = libssh2_knownhost_writefile(knownhosts, options->knownhosts_path, LIBSSH2_KNOWNHOST_FILE_OPENSSH))) {
						if (LIBSSH2_ERROR_FILE == rc) { //create path and retry
							if (path_make(options->knownhosts_path, 1)) {
								rc = libssh2_knownhost_writefile(knownhosts, options->knownhosts_path, LIBSSH2_KNOWNHOST_FILE_OPENSSH);
							}
						}
						if (rc) {
							(void)libssh2_session_last_error(session, &errmsg, NULL, 0);
							warnx("unable to update known host configuration <%s>: %s", options->knownhosts_path, errmsg);
						} else {
							warnx("Warning: permanently added '%.200s' to the list of known hosts.", host);
						}
					}
				}
			}
		}
	}

	/*
	 *  Authenticate
	 */
	if (! options->Agent) {
		if (-1 == ssh2_authenticate_direct(options, host)) {
			goto shutdown;
		}
	} else {
		if (-1 == ssh2_authenticate_agent(options)) {
			goto shutdown;
		}
	}

	/*
	 *  Request a shell
	 */
	if (!(channel = libssh2_channel_open_session(session))) {
		warnx("Unable to open a session");
		goto shutdown;
	}

	/*
	 *  Terminal environment.
	 */
//	if (options->colorterm[0]) {
//		libssh2_channel_setenv(channel, "COLORTERM", options->colorterm);
//	} else if (options->maxcolors == 256) {
//		if (0 == strcmp(term, "xterm-color")) { //rxvt/slang special
//			libssh2_channel_setenv(channel, "COLORTERM", "xterm-256color");
//		}
//	}

	if (options->VariableCount > 0) {
		const struct optionenv *var = options->VariableValues,
			*end = var + options->VariableCount;
		for (; var < end; ++var) {
			libssh2_channel_setenv(channel, var->name, var->value);
		}
	}

	/*
	 *  Request a terminal with user-specific otherwise 'vanilla' terminal emulation.
	 *  See /etc/termcap for more options
	 */
	if (!options->PseudoTerminal || !term || !*term)
		term = "vanilla";
	if (libssh2_channel_request_pty_ex(channel, term, (unsigned int)strlen(term),
			NULL, 0, wp->ws_col, wp->ws_row, wp->ws_xpixel, wp->ws_ypixel)) {
		warnx("failed requesting pty, terminal type <%s>", term);
		goto shutdown;
	}

	/*
	 *  Open a SHELL on that pty
	 */
	if (libssh2_channel_shell(channel)) {
		warnx("unable to request shell on allocated pty");
		goto shutdown;
	}

	libssh2_knownhost_free(knownhosts);
	return sock;

shutdown:
	if (knownhosts) libssh2_knownhost_free(knownhosts);
	if (sock != -1) closesocket(sock);
	return -1;
}


static int
ssh2_authenticate_direct(const struct options *options, const char *host)
{
	const char *userauthlist = NULL;
	int auth_pw = 0;

	/*
	 *  Check what authentication methods are available.
	 */
	userauthlist = libssh2_userauth_list(session, user, (unsigned int)strlen(user));
	if (! options->Quiet) fprintf(stderr, "Authentication methods: %s\n", userauthlist);
	if (userauthlist) {
		if (strstr(userauthlist, "password") != NULL) {
			auth_pw |= AUTH_PASSWORD;
		}
		if (strstr(userauthlist, "keyboard-interactive") != NULL) {
			auth_pw |= AUTH_INTERACTIVE;
		}
		if (strstr(userauthlist, "publickey") != NULL) {
			auth_pw |= AUTH_PUBLICKEY;
		}
	}
	if (options->Authentication) {
		const int avail_auth_pw = auth_pw;

		if ((avail_auth_pw & AUTH_PASSWORD) &&
				(options->Authentication & AUTH_PASSWORD)) {
			auth_pw = AUTH_PASSWORD;
		}
		if ((avail_auth_pw & AUTH_INTERACTIVE) &&
				(options->Authentication & AUTH_INTERACTIVE)) {
			auth_pw |= AUTH_INTERACTIVE;
				//allow both passwd & optional interactive.
		}
		if ((avail_auth_pw & AUTH_PUBLICKEY) &&
				(options->Authentication & AUTH_PUBLICKEY)) {
			auth_pw = AUTH_PUBLICKEY;
		}
	}

	if (auth_pw & AUTH_PASSWORD) {
		/* authenticate via password */
		if (!password && !options->BatchMode) {
			char prompt[1024];
			_snprintf(prompt, sizeof(prompt), "%s@%s password:", user, host);
			password = prompt_user(prompt, FALSE);
		}

		if (libssh2_userauth_password(session, user, (password ? password : ""))) {
			warnx("authentication by password failed!");
			return -1;
		} else {
			if (! options->Quiet) fprintf(stderr, "Authentication by password succeeded.\n");
		}

	} else if (auth_pw & AUTH_INTERACTIVE) {
		/* via keyboard-interactive */
		if (libssh2_userauth_keyboard_interactive(session, user,
				(options->BatchMode ? &kbd_callback_noprompt : &kbd_callback_prompt))) {
			warnx("authentication by keyboard-interactive failed!");
			return -1;
		} else {
			if (! options->Quiet) fprintf(stderr, "Authentication by keyboard-interactive succeeded.\n");
		}

	} else if (auth_pw & AUTH_PUBLICKEY) {
		/* by public key */
		if (!password && !options->BatchMode) {
			char prompt[1024];
			_snprintf(prompt, sizeof(prompt), "%s@%s passphase:", user, host);
			password = prompt_user(prompt, FALSE);
		}

		if (libssh2_userauth_publickey_fromfile(session, user,
				options->publickey_path, options->privatekey_path, (password ? password : ""))) {
			warnx("authentication by public key failed!");
			return -1;
		} else {
			if (! options->Quiet) fprintf(stderr, "Authentication by public key succeeded.\n");
		}
	} else {
		warnx("No supported authentication methods found!");
		return -1;
	}
	free((void *)password), password = NULL;

	return 0;
}


static int
ssh2_authenticate_agent(const struct options *options)
{
	const char *userauthlist = NULL;
	struct libssh2_agent_publickey *identity, *prev_identity = NULL;
	int count = 0, rc;

	/*
	 *  Check what authentication methods are available
	 */
	userauthlist = libssh2_userauth_list(session, user, strlen(user));
	fprintf(stderr, "Authentication methods: %s\n", userauthlist);
	if (strstr(userauthlist, "publickey") == NULL) {
		fprintf(stderr, "\"publickey\" authentication is not supported\n");
		return -1;
	}

	/*
	 *  Connect to the ssh-agent
	 */
	agent = libssh2_agent_init(session);
	if (!agent) {
		warnx("failure initializing ssh-agent support");
		return -1;
	}

	if (libssh2_agent_connect(agent)) {	// Pageant is the only supported ssh-agent interface.
		warnx("failure connecting to ssh-agent <Pageant>");
		return -1;
	}

	if (libssh2_agent_list_identities(agent)) {
		warnx("failure requesting identities to ssh-agent");
		return -1;
	}

	while (1) {
		rc = libssh2_agent_get_identity(agent, &identity, prev_identity);
		if (rc == 1)			// end of public keys.
			break;

		if (rc < 0) {
			warnx("failure obtaining identity from ssh-agent support");
			return -1;
		}

		if (libssh2_agent_userauth(agent, user, identity)) {
			warnx("authentication with user %s and public key %s failed!", user, identity->comment);
			++count;
		} else {
			if (! options->Quiet) fprintf(stderr,
				"authentication with user %s and public key %s succeeded!", user, identity->comment);
			return 0;
		}
		prev_identity = identity;
	}
	if (count) {
		warnx("no suitable public key, couldn't authentication");
	} else {
		warnx("no public keys available, couldn't authentication");
	}
	return -1;
}


static int
ssh2_prompt_continue(const struct options *options, const char *msg)
{
	fflush(stderr);
	if (msg && *msg) printf("%s", msg);
	return prompt_confirm(options, "Are you sure you want to continue connecting (yes/no)?");
}


static int
ssh2_connect(const char **ahost, const char **aip, const struct options *options)
{
#ifndef MAXHOSTNAMELEN
#define MAXHOSTNAMELEN 64
#endif
	static char hostbuf[MAXHOSTNAMELEN], ipbuf[32];
	const int af = (options->AddressFamily > 0 ? options->AddressFamily : AF_UNSPEC); //default
	const int port = (options->Port > 0 ? options->Port : SSH_DEFAULT_PORT);
	char service[NI_MAXSERV];
	struct addrinfo hints = {0}, *res, *rp;
	int gaierr;
	int sock;

	_snprintf(service, sizeof(service), "%u", (unsigned)port);
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = af;			// AF_UNSPEC (IPv4 or IPv6) otherwise specific.
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_CANONNAME;
	gaierr = getaddrinfo(*ahost, service, &hints, &res);
	if (gaierr) {
		warnx("getaddrinfo: %s: %s", *ahost, w32_gai_strerror(gaierr));
		return -1;
	}
	if (res->ai_canonname) {
		strlcpy(hostbuf, res->ai_canonname, sizeof(hostbuf));
		*ahost = hostbuf;		// resolved host.
	}

	for (rp = res; rp != NULL; rp = rp->ai_next) {
		if (-1 == (sock = socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol))) {
			w32_sockerror();	// socket error.

		} else {
			if (options->BindAddress) { // optional bind.
				struct addrinfo hints2 = {0}, *res2;
				hints2.ai_family = rp->ai_family;
				hints2.ai_socktype = rp->ai_socktype;
				hints2.ai_protocol = rp->ai_protocol;
				hints2.ai_flags = AI_PASSIVE;
				gaierr = getaddrinfo(options->BindAddress, NULL, &hints2, &res2);
				if (gaierr) {
					warnx("getaddrinfo: %s: %s", options->BindAddress, w32_gai_strerror(gaierr));
					goto failbind;
				}

				if (bind(sock, res2->ai_addr, (int)res2->ai_addrlen) < 0) {
					warnx("bind: %s: %s", options->BindAddress, w32_strerror(w32_sockerror()));
failbind:				closesocket(sock);
					freeaddrinfo(res2);
					break;
				}
			}

			if (connect(sock, rp->ai_addr, (int)rp->ai_addrlen) != -1) {
				if (aip) {
					switch (rp->ai_family) {
					case AF_INET:
						inet_ntop(AF_INET, &((struct sockaddr_in *)rp->ai_addr)->sin_addr, ipbuf, sizeof(ipbuf));
						break;
					case AF_INET6:
						inet_ntop(AF_INET6, &((struct sockaddr_in6 *)rp->ai_addr)->sin6_addr, ipbuf, sizeof(ipbuf));
						break;
					}
					*aip = ipbuf;
				}
				freeaddrinfo(res);
				return sock;	// success
			}
			w32_sockerror();	// connect error.
			closesocket(sock);
		}
	}
	freeaddrinfo(res);
	return -1;
}


static void
ssh2_done(void)
{
	if (session) {
		if (agent) {
			libssh2_agent_disconnect(agent);
			libssh2_agent_free(agent);
			agent = NULL;
		}
		libssh2_session_disconnect(session, "Normal Shutdown, Thank you for playing");
		libssh2_session_free(session);
		session = NULL;
	}
	closesocket((SOCKET)rem);
	libssh2_exit();
}


struct context {            // diagnostics context
	FILE    *file;
	time_t  now;
	char    timestamp[32];
};


static void *
ssh2_trace_init(const char *filename)
{
	static const char buffer[] = "New slogin session ---";
	struct context *cxt = NULL;

	if (filename && *filename) {
		if (NULL == (cxt = (struct context *)calloc(1, sizeof(struct context))) ||
		    NULL != (cxt->file = fopen(filename, "a"))) {
			fputs("\n\n", cxt->file);
			ssh2_trace_handler(NULL, cxt, buffer, sizeof(buffer)-1);
		} else {
			warnx("unable to open trace file <%s> : %d (%s)", filename, errno, strerror(errno));
			free((void *)cxt), cxt = NULL;
		}
	}
	return (void *)cxt;
}


void
ssh2_trace_close(void *context)
{
	assert(context);
	if (context) {
		struct context *cxt = (struct context *) context;
		fclose(cxt->file);
		free(context);
	}
}


static void
ssh2_trace_handler(LIBSSH2_SESSION *session, void* context, const char *data, size_t length)
{
	const time_t now = time(NULL);
	struct context *cxt = (struct context *) context;

	assert(context);
	if (cxt) {
		if (cxt->now != now) {
			const struct tm *tm = localtime(&now);
			cxt->timestamp[strftime(cxt->timestamp, sizeof(cxt->timestamp)-2, "%H:%M:%S", tm)] = '\0';
			cxt->now = now;
		}
		fprintf(cxt->file, "%s %*s\n", cxt->timestamp, length, data);
		fflush(cxt->file);
	}
}


static int
prompt_confirm(const struct options *options, const char *msg)
{
	const char *again = "Please type 'yes' or 'no': ";
	int ret = -1;

	if (! options->BatchMode) {		// interactive?
		for (;;msg = again) {		// prompt
			const char *p = prompt_user(msg, TRUE /*echo*/);
			if (p == NULL || (p[0] == '\0') || (p[0] == '\n') || _strnicmp(p, "no", 2) == 0)
				ret = 0;
			else if (p && _strnicmp(p, "yes", 3) == 0)
				ret = 1;
			free((void *)p);
			if (ret != -1)
				return ret;
		}
	}
	return 0;
}


static char *
prompt_user(const char *msg, int echo)
{
	char text[80], *cursor = text, *end = text + (sizeof(text)-1);
	int ch;

	fflush(stderr);
	if (msg) printf("%s", msg);
	for (;;) {
		fflush(stdout);
		if ((ch = _getch()) < 0)	// error
			break;
		if (ch == 3) { //ctrl-c; abort
			_putch('\a');
			*text = 0;
			break;
		} else if (ch == '\b') {	// delete/backspace
			if (cursor > text) {
				cursor--;
				if (echo) {
					_putch(ch); _putch(' '); _putch(ch);
				}
			}
		} else if (ch == '\r') {	// carriage return; complete
			break;
		} else if (ch > 0x1b && ch < 255) { //ascii
			if (cursor < end) {
				*cursor++ = (char)ch;
				if (echo) _putch(ch);
			} else {
				_putch('\a');
			}
		}
	}
	*cursor = 0;
	_putch('\n'), _putch('\r');
	return _strdup(text);
}


static char *
path_resolve(const char *path)
{
	char t_path[1024], *newpath = NULL, *p;

	if (*path == '~') {                     // embedded home
		extern const char *w32_gethome(int ignore_home);
		const char *home = w32_gethome(1);
		if (home && *home) {
			const size_t homelen = strlen(home);

			++path;
			if ((path[0] == '/' || path[0] == '\\') &&
					(home[homelen-1] == '/' || home[homelen-1] == '\\'))
				++path;
			_snprintf(t_path, sizeof(t_path), "%s%s", home, path);
			path = t_path;
		}
	}
	newpath = _strdup(path);
	for (p = newpath; *p; ++p) {
		if (*p == '\\') *p = '/';
	}
	return newpath;
}


static int
path_make(const char *path, int has_file)
{
	struct stat sb;
	char *slash;
	int done = 0;

	slash = (char *)path;
	while (!done) {
		slash += strspn(slash, "/\\");
		slash += strcspn(slash, "/\\");

		done = (*slash == '\0');
		if (done && has_file)
			return (0);

		*slash = '\0';
		if (w32_stat(path, &sb)) {
			if (errno != ENOENT || (w32_mkdir(path, 0777) && errno != EEXIST)) {
				warn("%s", path);
				return (-1);
			}
		} else if (!S_ISDIR(sb.st_mode)) {
			warnx("%s: %s", path, strerror(ENOTDIR));
			return (-1);
		}
		*slash = '/';
	}
	return (0);
}


static void
run(const struct options *options)
{
	if (options->PseudoTerminal) {
#define CC_CHAR(c)	(c & 0x037)

		tty_cc[VEOF]   = CC_CHAR('d');
		tty_cc[VERASE] = CC_CHAR('h');
		tty_cc[VINTR]  = CC_CHAR('c');
		tty_cc[VKILL]  = CC_CHAR('x');
		tty_cc[VQUIT]  = CC_CHAR('\\');
		tty_cc[VSTOP]  = CC_CHAR('s');
		tty_cc[VSUSP]  = CC_CHAR('z');
		if (_beginthread(reader_task, 0, (void *)options) == -1L) {
			err(1, "slogin: fork: %s", strerror(errno));
			done(1);
		}
		writer(options);

	} else {
		nonterminal(options);
	}
	msg("closed connection.");
	done(0);
}

static void
done(int status)
{
	ssh2_done();
	w32_sleep(1);                           /* give reader() time to exit */
	termemu_exit();
	if (oldtitle[0]) SetConsoleTitleW(oldtitle);
	w32_sleep(status ? 2 : 1);
	exit(status);
}

/*
 * writer: write to remote: 0 -> line.
 *
 *  Client Escapes
 *   Normally everything we type to the rlogin client is sent to the server. Occasionally, however,
 *   we want to talk directly to the rlogin client program itself, and not have what we type sent to
 *   the server. This is done by typing a tilde (~) as the first character of a line, followed by
 *   one of the following characters:
 *
 *   The supported escapes (assuming the default `~') are:
 *
 *	~.	Disconnect/terminate.
 *
 *	~^Z	Background ssh. (TODO)
 *
 *	~#	List forwarded connections.
 *
 *	~&	Background ssh at logout when waiting for forwarded connection X11 sessions to terminate.
 *
 *	~?	Display a list of escape characters. (TODO)
 *
 *	~B	Send a BREAK to the remote system (only useful if the peer supports it).
 *
 *	~C	Open command line. (TODO)
 *		    Currently this allows the addition of port forwardings using the -L, -R
 *		    and -D options (see above).  It also allows the cancellation of existing
 *		    port-forwardings with
 *
 *			-KL[bind_address:]port for local,
 *			-KR[bind_address:]port for remote and
 *			-KD[bind_address:]port for dynamic port-forwardings.
 *
 *		    !command allows the user to execute a local command if the PermitLocalCommand
 *		    option is enabled in ssh_config(5).  Basic help is available, using the -h option.
 *
 *	~R	Request rekeying of the connection (only useful if the peer supports it). (TODO)
 *
 *	~V	Decrease the verbosity (LogLevel) when errors are being written to stderr. (TODO)
 *
 *	~v	Increase the verbosity (LogLevel) when errors are being written to stderr. (TODO)
 */
static void
writer(const struct options *options)
{
	const unsigned char noescape = (options->EscapeCharacter < 0 ? 1 : 0),
		escapechar = (unsigned char)options->EscapeCharacter;
	HANDLE hConsole = GetStdHandle(STD_INPUT_HANDLE);
	DWORD consoleMode;

	unsigned char ibuf[64+1], *ichr, *iend; /* input buffer */
	unsigned char obuf[sizeof(ibuf)*2];	/* output buffer */
	int icnt, ocnt; 			/* in/out character number */
	int bol, local, terminate;		/* escape processing state */
	unsigned char c;

	bol = 1;				/* beginning of line */
	local = 0;				/* local escape processing */
	terminate = 0;

	GetConsoleMode(hConsole, &consoleMode);
	SetConsoleMode(hConsole, ENABLE_WINDOW_INPUT|ENABLE_MOUSE_INPUT);

	while (!terminate) {
		if ((icnt = termemu_read(ibuf, sizeof(ibuf)-1, sigwinch)) < 0)
			break;

		for (ichr = ibuf, iend = ibuf+icnt, ocnt = 0; ichr < iend;) {
			c = *ichr++;		/* next character */

			/*
			 * If we're at the beginning of the line and recognize a command character,
			 * then we echo locally.  Otherwise, characters are echo'd remotely.
			 *
			 * If the command character is doubled, this acts as a force and local echo is suppressed.
			 */
			if (bol) {
				bol = 0;
				if (icnt == 1) {/* only on single character keys */
					if (!noescape && c == escapechar) {
						local = 1;
						continue;
					}
				}
			} else if (local) {
				local = 0;
				if (icnt == 1) { /* only on single character keys */
					if (c == '.' || CCEQ(tty_cc[VEOF], c)) {
						echo(c, escapechar);
						terminate = 1;
						break;	    //terminate (. and EOF)
					}
					if (CCEQ(tty_cc[VSUSP], c)) {
						bol = 1;
						echo(c, escapechar);
						stop(1);
						continue;   //suspend
					}
					if (CCEQ(tty_cc[VDSUSP], c)) {
						bol = 1;
						echo(c, escapechar);
						stop(0);
						continue;   //continue
					}
				}
				if (c != escapechar) {
					obuf[ ocnt++ ] = escapechar;
				}
			}
			obuf[ ocnt++ ] = c;

			bol = CCEQ(tty_cc[VKILL], c) || CCEQ(tty_cc[VEOF], c) ||
				CCEQ(tty_cc[VINTR], c) || CCEQ(tty_cc[VSUSP], c) ||
				(c == '\r') || (c == '\n');
		} /*for*/

		if (ocnt) {		        /* flush out buffer */
			if (libssh2_channel_write(channel, (void *)obuf, ocnt) == 0) {
				msg("line gone");
				break;
			}
			ocnt = 0;
		}
	}

	SetConsoleMode(hConsole, consoleMode);
}


static void
echo(unsigned char ch, unsigned char escapechar)
{
	unsigned char buf[32], *p = buf;

	ch &= 0177;
	*p++ = escapechar;
	if (ch < ' ') {
		*p++ = '^';
		*p++ = ch + '@';
	} else if (ch == 0177) {
		*p++ = '^';
		*p++ = '?';
	} else
		*p++ = ch;
	*p++ = '\r';
	*p++ = '\n';
	(void) libssh2_channel_write(channel, (void *)buf, p - buf);
}

static void
stop(int all)
{
	sigwinch();				/* check for size changes */
}


/*
 *  Screen resizing notifications.
 */
static void
sigwinch(void)
{
	int rows, cols;
	if (termemu_winch(&rows, &cols)) {
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
	struct winsize *wp = &winsize;
	libssh2_channel_request_pty_size_ex(channel,
		wp->ws_col, wp->ws_row, wp->ws_xpixel, wp->ws_ypixel);
}

static DECLTHREAD void
reader_task(void *arg)
{
	const struct options *options = (const struct options *)arg;
	if (reader(options) == 0) {
		msg("connection closed.");
		done(0);
	}
	msg("\aconnection closed.");
	done(1);
	/*NOTREACHED*/
}

/*
 *  reader: read from remote: line -> 1
 */
static int
reader(const struct options *options)
{
	static char rcvbuf[64 * 1024];

	const int keepalive = options->KeepAliveInterval;
	struct pollfd fds[1] = {0};
	time_t keepalive_next = 0;
	int flush = 0, seconds_to_next = 0;
	int timeoutms, ret;

	if (keepalive > 0) {
		libssh2_keepalive_config(session, 0, keepalive);
	}

	for (;;) {
		fds[0].fd = rem;
		fds[0].events = (POLLIN|POLLPRI);

		if (keepalive > 0) {
			libssh2_keepalive_send(session, &seconds_to_next);
		}

		timeoutms = (flush ? 25 : (seconds_to_next > 0 ? (seconds_to_next * 1000) - 100 : -1));
		if ((ret = w32_poll_native(fds, 1, timeoutms)) < 1) {
			if (0 == ret) {         /* timeout */
				if (flush) termemu_flush();
				flush = 0;
				continue;
			}
			return -1;
		}

		if (fds[0].revents & POLLPRI) {
			msgx("OOB data detected ");
			lostpeer();

		} else if (fds[0].revents & POLLHUP) {
			/* socket close */
			return 0;

		} else if (fds[0].revents & (POLLERR|POLLNVAL)) {
			/* socket error */
			lostpeer();

		} else if (fds[0].revents & POLLIN) {
			/* refill buffer */
			int rcvcnt = (int)libssh2_channel_read(channel, rcvbuf, (int)sizeof(rcvbuf));
			if (0 == rcvcnt) {
				if (libssh2_channel_eof(channel)) {
					return (0);
				}
			} else if (rcvcnt < 0) {
				if (rcvcnt == -EINTR || errno == EINTR /*???*/)
					continue;
				msgx("channel read");
				return (-1);
			}
			termemu_write(rcvbuf, rcvcnt);
			++flush;
		}
	}
	/*NOTREACHED*/
}

/*
 *  simple line client
 */
static int
nonterminal(const struct options *options)
{
	static char rcvbuf[64 * 1024], cmdline[1024*2];

	HANDLE hRemote, hConsole, handles[2];
	const int keepalive = options->KeepAliveInterval;
	int iteration, timeoutms, seconds_to_next = 0;
	DWORD dRet;
	size_t cmdlen = 0;

	if (keepalive > 0) {
		libssh2_keepalive_config(session, 0, keepalive);
	}

	hRemote = WSACreateEvent();
	WSAEventSelect(rem, hRemote, FD_READ);
	hConsole = GetStdHandle(STD_INPUT_HANDLE);

	for (iteration = 0;; ++iteration) {
		if (keepalive > 0) {
			libssh2_keepalive_send(session, &seconds_to_next);
		}

		handles[(iteration+0)%2] = hRemote; /* round robin handles */
		handles[(iteration+1)%2] = hConsole;

		timeoutms = (seconds_to_next > 0 ? (seconds_to_next * 1000) - 100 : -1);
		dRet = WaitForMultipleObjects(2, handles, FALSE, timeoutms);
		if (dRet < WAIT_OBJECT_0 || dRet > (WAIT_OBJECT_0 + 1)) {
			if (dRet == WAIT_TIMEOUT) { /* timeout */
				continue;
			}
			msgx("wait channel error");
			break;
		}

		if (handles[dRet] == hRemote) {
			int ret;

			libssh2_channel_set_blocking(channel, 0);
			do {
				ret = libssh2_channel_read(channel, rcvbuf, sizeof(rcvbuf));
				if (ret > 0) {
					(void) fwrite(rcvbuf, ret, 1, stdout);
					fflush(stdout);
				}
			} while (LIBSSH2_ERROR_EAGAIN != ret && ret > 0);
			if (ret >= 0) {
				if (libssh2_channel_eof(channel)) {
					lostpeer();
				}
			} else if (ret < 0 && LIBSSH2_ERROR_EAGAIN != ret) {
				msgx("read channel error");
				break;
			}

		} else if (handles[dRet] == hConsole) {
			INPUT_RECORD k = {0};
			DWORD count = 0;

			if (ReadConsoleInput(hConsole, &k, 1, &count) && count) {
				KEY_EVENT_RECORD *key = &k.Event.KeyEvent;
				char ch;

				if (k.EventType == KEY_EVENT && key->bKeyDown) {
					if ((ch = key->uChar.AsciiChar) != 0) {
						if (ch == 3) { //ctrl-c; abort
							cmdlen = 0;
						} else if (ch == '\b') { //delete/backspace
							if (cmdlen) {
								--cmdlen;
								_putch(ch); _putch(' '); _putch(ch);
							}
						} else if (cmdlen < (sizeof(cmdline)-2)) { //append
							cmdline[cmdlen++] = ch;
							_putch(ch);
						} else { //overflow
							_putch('\a');
						}
					}
				}
			}

			if (cmdlen && (cmdline[cmdlen-1] == '\r' || cmdline[cmdlen-1] == '\n')) {
				int ret, written = 0;

				while (cmdline &&	// trim trainling delimiters
					    (cmdline[cmdlen-1] == '\r' || cmdline[cmdlen-1] == '\n')) {
					--cmdlen;
				}

				if (cmdlen == 4 && 0 == strncmp(cmdline, "exit", 4)) {
					done(1);	// local exit command
				}

				cmdline[cmdlen++] = '\r';
				cmdline[cmdlen++] = '\n';
				cmdline[cmdlen] = 0;

				libssh2_channel_set_blocking(channel, 1);
				do {			// export
					ret = libssh2_channel_write(channel, cmdline, cmdlen - written);
					if (ret > 0) written += ret;
				} while (LIBSSH2_ERROR_EAGAIN != ret && ret > 0 && written != cmdlen);
				if (0 == ret) {
					if (libssh2_channel_eof(channel)) {
						break;
					}
				} else if (ret < 0 && LIBSSH2_ERROR_EAGAIN != ret) {
					msgx("write channel error");
					break;
				}

				_putch('\n');
				cmdlen = 0;
			}
		}
	}

	WSACloseEvent(hRemote);
	return 0;
}

static void
lostpeer()
{
	msg("\aconnection closed.");
	done(1);
}

#if (TODO)
static int
exec(const char *command)
{
	dos2unix(command);			/* CR+LF (Windows) => LF (Unix) */

	/* request a shell on a channel and execute command */
	while (0 != (rc = libssh2_channel_exec(channel, command)) {
	    switch (rc) {
		case LIBSSH2_ERROR_EAGAIN:
			waitsocket(socket, session);
			continue;
		default:
			SET_MSG_RESULT(result, strdup(NULL, "Cannot request a shell"));
			goto channel_close;
		}
	}

	for (;;) {
		/* loop until we block */
		do {
		    if (0 < (rc = libssh2_channel_read(channel, buf, sizeof(buf)))) {
			sz = (size_t)rc;
			if (sz > (size_t)(MAX_BUFFER_LEN - (bytecount + 1)))
				sz = (size_t)(MAX_BUFFER_LEN - (bytecount + 1));
			if (0 == sz)
				continue;
			memcpy(buffer + bytecount, buf, sz);
			bytecount += sz;
		    }
		} while (rc > 0);

		/* this is due to blocking that would occur otherwise so we loop on this condition */
		if (LIBSSH2_ERROR_EAGAIN == rc)
			waitsocket(s.socket, session);
		else if (rc < 0) {
			SET_MSG_RESULT(result, zbx_strdup(NULL, "Cannot read data from SSH server"));
			goto channel_close;
		}
		else
			break;
	}

	buffer[bytecount] = '\0';
	SET_STR_RESULT(result, convert_to_utf8(buffer, bytecount, encoding));

	ret = SYSINFO_RET_OK;
}
#endif	//TODO

/*end*/
