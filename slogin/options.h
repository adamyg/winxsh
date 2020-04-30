/* -*- mode: c; indent-width: 4; -*- */
/*
 * slogin configuration options.
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

#include <sys/cdefs.h>

__BEGIN_DECLS

#include <buildinfo.h>

#define SLOGIN_VERSION			WINSH_VERSION
#define SLOGIN_BUILD_NUMBER		WINSH_BUILD_NUMBER
#define SLOGIN_BUILD_DATE		__DATE__ " " __TIME__

#define SLOGIN_DEFAULT_PUBLICKEY_PATH	"~/.ssh/id_rsa.pub"
#define SLOGIN_DEFAULT_PRIVATEKEY_PATH 	"~/.ssh/id_rsa"
#define SLOGIN_DEFAULT_KNOWNHOSTS_PATH	"~/.ssh/known_hosts"

#define SSH_SERVICE_NAME		"ssh"
#define SSH_DEFAULT_PORT		22

struct optionenv {
	const char *name, *value;
};

struct options {

	const char *publickey_path;
	const char *privatekey_path;
	const char *knownhosts_path;

	int AddressFamily;		/* INET address family */
	int Authentication;		/* authentication types */
#define AUTH_PASSWORD		1
#define AUTH_INTERACTIVE	2
#define AUTH_PUBLICKEY		4
	const char *BindAddress;	/* explicit local bind address */
	int Agent;			/* agent */
	int BatchMode;			/* non interactive mode */
	int Compression;		/* compression level */
	int EscapeCharacter;		/* escape character */
	int KeepAliveInterval;		/* keepalive interval configuration in seconds, <= 0 disabled */
	int LogLevel;			/* diagnostics log level */
	int DebugMode;			/* debug mode */
	const char *DebugOutput;	/* optional debug filename */
	int ColorMax;			/* max terminal colors 8, 16, 88 or 256 */
	const char *ColorPalette;	/* color palattte name */
	int Port;			/* server port: default 22 */
	int Quiet;			/* quiet mode */
	const char *TerminalName;	/* terminal name override */
	int StrictHostKeyChecking;	/* yes/no (default: yes) */
	int NonDelay;
	int PseudoTerminal;		/* assign pseudo terminal */
	const char *User;
	int UsePrivilegedPort;

	struct optionenv VariableValues[128]; /* environment variables to be transmitted */
	int VariableCount;		/* environment variable count */

	const char *CipherList;
};

extern void msg(const char *str);
extern void msgx(const char *str);
extern void version(void);
extern void usagex(const char *msg, ...);
extern void usage(void);
extern void usage_full(void);

extern void options_default(struct options *options);
extern int  options_decode(struct options *options, const char *values);
#if defined(_DEBUG)
extern void options_decode_test(struct options *);
#endif
extern int  options_set(struct options *options, const char *name, const char *value);

extern int  opt_parse_boolean(const char *value, int *result);
extern int  opt_parse_numeric(int low, int high, const char *value, int *result);
extern int  opt_parse_authentication(const char *value, int *result);
extern int  opt_parse_port(const char *value, int *result);
extern int  opt_default_ssh_port(void);
extern int  opt_parse_escape(const char *value, int *result);
extern int  opt_getsuboptions(char **optionp, const char **namep, const char **valuep);

__END_DECLS

/*end*/
