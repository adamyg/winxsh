#include <edidentifier.h>
__CIDENT_RCSID(options_c,"$Id: options.c,v 1.15 2022/03/20 13:25:21 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * win slogin
 *
 * Copyright (c) 2015 - 2022, Adam Young.
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

#if defined(HAVE_CONFIG_H)
#include "config.h"
#endif

#define WIN32_SOCKET_H_CLEAN
#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif
#include <errno.h>
#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifndef HAVE_LIBMBEDTLS //FIXME
#define HAVE_LIBMBEDTLS
#endif

#include <libw32_version.h>

#include <libssh2.h>
#include <libssh2_helper.h>

#if defined(HAVE_LIBMBEDTLS)
#include <mbedtls/version.h>
#endif

#include <zlib.h>

#include "options.h"
#include "console.h"

#include "../libtermemu/compat.h"
#include "../libtermemu/termemu_tsm.h"

static const char *usage_text[] = {
        "The slogin utility starts a terminal session on a remote host using SSH2 as its transport and authorization mechanisms. "\
        "It is intended to provide secure encrypted communications between two untrusted hosts over an insecure network."\
            "",
        "slogin connects and logs into the specified hostname (with optional user name). "\
        "The user must prove his/her identity to the remote machine using one of several methods (see below). "\
            "",
        "Once a connection has been establised, 'slogin' provides a vt220/xterm terminal emulation allowing advanced console applications to be executed. "\
        "The window size changes is also copied to the remote system if the server supports the option. "\
            "",
        "Available command line options:",
            "\1-4",                     "\2Forces use of IPv4 addresses only.",

            "\1-6",                     "\2Forces use of IPv6 addresses only.",

            "\1-A",                     "\2Enables forwarding of the authentication agent connection; "\
                                            "Note that Pageant is the only supported ssh-agent interface.",

            "\1-a",                     "\2Disables forwarding of the authentication agent connection.",

            "\1-b bind_address",        "\2Use bind_address on the local machine as the source address of the connection. "\
                                            "Only useful on systems with more than one network interface.",

            "\1-C",                     "\2Enables data compression.",

            "\1-c <cipher-list>",       "\2Selects the cipher specification, as a comma seperated list of ciphers listed in order of preference.",

            "\1-d",                     "\2Enable socket debug.",

            "\1-n",                     "\2Enable socket non-delay.",

            "\1-e escape_char",         "\2Sets the escape character for sessions with a pty (default:`~'). "\
                                            "The escape character is only recognized at the beginning of a line. "\
                                            "This specification may be as a literal character, or as an octal value in the form \\nnn. "\
                                            "Stating the character as 'none' disables any escape processing; as same -E.",

            "\1-k key_translation",     "\2Load the specified key translation table. "\
                                            "Key translation tables define additional key mapping events to apply during keyboard event processing. "\
                                            "The events are describing using the syntax based on the 'XTerm*translations #override' table, as follows: \n"\
                                            "\n" \
                                            "   [modifier_list]<event>,<event>...][detail]: action([arguments])\n" \
                                            "\n",

            "\1-N application_name",    "\2Specify the application name under which resources are to be obtained, "\
                                        "when processing translation tables, rather than the default resource name 'xterm'. \n"\
                                            "Name should not contain '.' or '*' characters.\n",

            "\1-E logfile",             "\2Append debug logs to <logfile> instead of standard error\n",

            "\1-l username",            "\2Specifies the user name to log in as on the remote machine.",

            "\1-o option[=value],...",  "\2General option configuration. "\
                                            "Options are specified with an -o flag followed by a comma separated string of options "\
                                            "with an associated optional value of the form 'option=value'. "\
                                            "The option is used for specifying options for which there is no separate command-line flag.\n"\
                                            "\n"\
                                            "One or more '-o' arguments may be stated with the results accumulating, for example:\n" \
                                            "\n"\
                                            "   -o SetVarRC=1 -o Port=22,User=admin -o KeepAliveInterval=30 -o SetVarX=2\n"\
                                            "\n" \
                                            "Note that 'SetVar' is an exception permitting only a single option per '-o' switch "\
                                            "to allow embedded spaces and commas. "\
                                            "For available options and their possible values, see below.",

            "\1-p port",                "\2Port to connect to on the remote host (default: 22).",

            "\1-Q <what>",              "\2Query the supported algorithms.",

            "\1-q",                     "\2Quiet mode; minimal diagnostics.",

            "\1-T",                     "\2Disable pseudo-terminal allocation.",

            "\1-t terminal_name",       "\2Force pseudo-terminal allocation. "\
                                                "This can be used to execute arbitrary screen-based programs on a remote machine.",

            "\1-V",                     "\2Display the version details and exit.",

            "\1-v",                     "\2Verbose mode. Causes slogin to print debugging messages about its progress.\n" \
                                            "This is helpful in debugging connection, authentication, and configuration problems.\n" \
                                            "Multiple -v options increase the verbosity. The maximum is 3\n"

        "Available configuration options:",
        NULL
        };

enum optionid {
	OptUnknown = 0,
	OptAddressFamily,
	OptAuthentication,
	OptBatchMode,
	OptBindAddress,
	OptColorMax,
	OptColorPalette,
	OptCompression,
	OptEscapeCharacter,
	OptKeepAliveInterval,
	OptPort,
	OptPseudoTerminal,
	OptQuiet,
	OptSetEnv,
	OptStrictHostKeyChecking,
	OptTerminalName,
	UsePrivilegedPort,
	OptUser,
	};

static struct configdef {
        const char *name;
        size_t namelen;
#define ONAME(__x) __x, sizeof(__x)-1
        enum optionid identifier;
        const char *description;

} configdefs[] = {
        { ONAME("AddressFamily"),       OptAddressFamily,
                        "Address family selection. "\
                        "Specifies which address family to use when connecting. "\
                        "Valid arguments are 'any', `inet' (IPv4 only), or `inet6' (IPv6 only). "\
                        "The default is 'any'." },

        { ONAME("Authentication"),      OptAuthentication,
                        "Authentication type selection. "\
                        "Specifies the sema-colon seperated list of authentication types, "\
                            "if available to be utilised during session creation.\n"\
                        "Available authentication methods:\n"\
                            "     o 'password'\n"\
                            "     o 'keyboard[-interactive]'\n" \
                            "     o 'publickey'\n"},

        { ONAME("BatchMode"),           OptBatchMode,
                        "Terminal interactive mode selection. "\
                        "If set to 'yes', both passphrase/password querying will be disabled. "\
                        "This option is useful in scripts and other batch jobs where no user is available to supply the password. "\
                        "Valid arguments are 'yes' or 'no'. "\
                        "The default is 'no'. "},

        { ONAME("BindAddress"),         OptBindAddress,
                        "Explicit local bind address." \
                        "Use the specified address on the local machine as the source address of the connection. "\
                        "Only useful on systems with more than one interface."},

/*
//      { ONAME("CanonicalizeHostname"), OptCanonicalizeHostname,
//                     "Controls whether explicit hostname canonicalization is performed. "\
//                     "The default, 'no', is not to perform any name rewriting and let the system resolver handle all hostname lookups. "},
*/

/*
//      { ONAME("Ciphers"),             OptCiphers,
//                      "Specifies the ciphers allowed for protocol version 2 in order of preference. "\
//                      "Multiple ciphers must be comma-separated. "\
//                      "If the specified value begins with a `+' character, then the specified ciphers "\
//                          "will be appended to the default set instead of replacing them. \n"\
//                      "\n"\
//                      "The supported ciphers are:\n"\
//                      "   aes256-ctr, aes192-ctr, aes128-ctr, aes256-cbc\n"\
//                      "   rijndael-cbc@lysator.liu.se2\n"\
//                      "   aes192-cbc, aes128-cbc,\n"\
//                      "   3des-cbc,\n"\
//                      "   blowfish-cbc,\n"\
//                      "   cast128-cbc,\n"\
//                      "   arcfour,\n"\
//                      "   arcfour128,\n"\
//                      "   none\n"\
//                      "\n"\
//                      "A nice comparsion is available at "
//                          "http://ssh-comparison.quendi.de/comparison/cipher.html "\
//                      "The list of available ciphers may also be obtained using the -V option."},
*/

        { ONAME("ColorMax"),            OptColorMax,                    "Max terminal colors 8, 16, 88 or 256" },

        { ONAME("ColorPalette"),        OptColorPalette,
                        "Color palette name from one of following:\n"\
                            "     o default\n"\
                            "     o solarized, solarized_black, solarized_white\n"\
                            "     o soft_black'\n"},

        { ONAME("Compression"),         OptCompression,
                        "Data compression state. "\
                        "Specifies whether to use data compression. "\
                        "The argument must be 'yes' or 'no'. The default is 'no'. "\
                        "libssh2 supports zlib based compression, which must also be enabled on the server."},

        { ONAME("EscapeCharacter"),     OptEscapeCharacter,
                        "Terminal escape character. "\
                        "Sets the escape character for sessions with a pty (default:`~'). "\
                        "The escape character marks the introduction of control commands to the local "\
                        "terminal driver, for example '~.' terminates the session. "\
                        "The escape character is only recognized at the beginning of a line. "\
                        "This specification may be as a literal character, or as an octal value in the form \\nnn. "\
                        "Stating the character as 'none' disables any escape processing."},

        { ONAME("KeepAliveInterval"),   OptKeepAliveInterval,
                        "Keepalive timeout interval. " \
                        "Sets a timeout interval in seconds after which if no data transmitted, " \
                        "slogin shall send a keep-alive message request. "\
                        "The default is 0, indicating that keep-alives shall not be sent to the server." },

        { ONAME("Port"),                OptPort,                        "Server port: default 22" },

        { ONAME("PseudoTerminal"),      OptPseudoTerminal,              "Enable pseudo terminal eumlation." },

        { ONAME("Quiet"),               OptQuiet,                       "Quiet mode." },

        { ONAME("SetEnv"),              OptSetEnv,
                        "Set server environment variable. "\
                        "Specifies the value an environment variable which is sent to the server. "\
                        "The server must also support it, and the server must be configured to accept these environment variables. "\
                        "Up to a maximum of 128 variables may be stated using the form 'SetEnv NAME[=VALUE]'. "\
                        "If variable is stated without a value the local environment variable of the same name is imported. "\
                        "Note that the TERM environment variable is always sent whenever a pseudo-terminal is requested as it is required by the protocol." },

        { ONAME("StricthostKeyChecking"), OptStrictHostKeyChecking,
                        "Enable strict known host file checks. " \
                        "If set to `yes', slogin will never automatically add host keys to the known_hosts file, "\
                        "and shall refuse to connect to hosts whose host key has changed." },

        { ONAME("TerminalName"),        OptTerminalName,
                        "Terminal name. "\
                        "Specifies the name of the pseudo-terminal that is requested during pty creation. "\
                        "The interval terminal emumations is reasonability generic and should behave "\
                        "under either a vt220 or xterm flavoured termcap/terminfo specification. " },

/*
//      { ONAME("UsePrivilegedPort"),   OptUsePrivilegedPort,
//                      "Specifies whether to use a privileged port for outgoing connections. "\
//                      "The argument must be 'yes' or 'no'.  The default is 'no'." },
*/

        { ONAME("User"),                OptUser,
                        "Specifies the user to log in as on the remote machine. "\
                        "Useful when a alternative user name(s) are used on different machines." },
        };

struct optionval {
	const char *key;
	int value;
};

static const struct optionval optvalues_boolean[] = {
	{ "true",	1 },
	{ "false",	0 },
	{ "yes",	1 },
	{ "no", 	0 },
	{ "1",		1 },
	{ "0",		0 },
	{ NULL, -1 }
	};

static const struct optionval optvalues_address_family[] = {
	{ "inet",	AF_INET },
	{ "inet4",	AF_INET },
	{ "inet6",	AF_INET6 },
	{ "any",	AF_UNSPEC },
	{ NULL, -1 }
	};

static const struct optionval optvalues_authentication[] = {
	{ "password",	AUTH_PASSWORD },
	{ "keyboard-interactive", AUTH_INTERACTIVE },
	{ "keyboard",	AUTH_INTERACTIVE },
	{ "publickey",	AUTH_PUBLICKEY },
	{ NULL, -1 }
	};

static int  parse_values(const struct optionval *values, const char *value, int *result);
static char *Strndup(size_t len, const char *value);
static char *Strdup(const char *value);


void
options_default(struct options *options)
{
	memset(options, 0, sizeof(options));

	options->publickey_path = SLOGIN_DEFAULT_PUBLICKEY_PATH;
	options->privatekey_path = SLOGIN_DEFAULT_PRIVATEKEY_PATH;
	options->knownhosts_path = SLOGIN_DEFAULT_KNOWNHOSTS_PATH;
	options->EscapeCharacter = '~';
	options->ColorMax = 256; //xterm
	options->Port = opt_default_ssh_port();
	options->StdErrMode = LIBSSH2_CHANNEL_EXTENDED_DATA_NORMAL;
	options->StrictHostKeyChecking = 1;
	options->TerminalName = "xterm-color";
}


int
options_decode(struct options *options, const char *values)
{
	int rc = 0;

	if (0 == strnicmp(values, "setenv", 6)) { //special
		values += 6; if (*values == ' ') ++values;
		rc = options_set(options, "SetEnv", values);

	} else { //one or more sub-options
		char *t_values = (char *)Strdup(values), *cursor = t_values;
		const char *name, *value;

		while (0 == opt_getsuboptions(&cursor, &name, &value)) {
			if (! name || options_set(options, name, value?value:"") < 0) {;
				rc = -1;
				break;
			}
		}
		free(t_values);
	}
	return rc;
}


int
options_set(struct options *options, const char *name, const char *value)
{
	const static struct configdef *def = NULL;
	enum optionid opt = OptUnknown;
	int rc = -1, result;

	if (name && *name) { //search option definitions
		const size_t namelen = strlen(name);
		unsigned i;

		for (i = 0; i < (sizeof(configdefs)/sizeof(configdefs[0])); ++i) {
			if (configdefs[i].namelen == namelen &&
					0 == _stricmp(configdefs[i].name, name)) {
				def = configdefs + i;
				opt = def->identifier;
				break;
			}
		}
	}

	switch(opt) { //execute
	case OptAddressFamily:
		if ((rc = parse_values(optvalues_address_family, value, &result)) >= 0) {
			options->AddressFamily = result;
		}
		break;
	case OptAuthentication:
		if ((rc = opt_parse_authentication(value, &result)) >= 0) {
			options->Authentication = result;
		}
		break;
	case OptBatchMode:
		if ((rc = opt_parse_boolean(value, &result)) >= 0) {
			options->BatchMode = result;
		}
		break;
	case OptBindAddress:
		options->BindAddress = Strdup(value);
		break;
	case OptCompression:
		if ((rc = opt_parse_boolean(value, &result)) >= 0) {
			options->Compression = result;
		}
		break;
	case OptEscapeCharacter:
		if ((rc = opt_parse_escape(value, &result)) >= 0) {
			options->EscapeCharacter = result;
		}
		break;
	case OptKeepAliveInterval:
		if ((rc = opt_parse_numeric(0, 9999, value, &result)) >= 0) {
			options->KeepAliveInterval = result;
		}
		break;
	case OptColorMax:
		if ((rc = opt_parse_numeric(8, 256, value, &result)) >= 0) {
			options->ColorMax = result;
		}
	case OptColorPalette:
		options->ColorPalette = Strdup(value);
		break;
	case OptPort:
		if ((rc = opt_parse_port(value, &result)) >= 0) {
			options->Port = result;
		}
		break;
	case OptPseudoTerminal:
		if ((rc = opt_parse_boolean(value, &result)) >= 0) {
			options->PseudoTerminal = result;
		}
		break;
	case OptQuiet:
		if ((rc = opt_parse_boolean(value, &result)) >= 0) {
			options->Quiet = result;
		}
		break;
	case OptSetEnv:
		if (options->VariableCount < (sizeof(options->VariableValues)/sizeof(options->VariableValues[0]))) {
			if (*value && *value != '=') {
				struct optionenv *var = options->VariableValues + options->VariableCount++;
				const char *eq = strchr(value, '=');
				if (eq) { //explicit value
					var->name = Strndup(eq - value, value);
					var->value = Strdup(eq + 1);
				} else {  //implicit value; import
					var->name = Strdup(value);
					var->value = Strdup(getenv(value));
				}
				rc = 0;
			}
		}
		break;
	case OptStrictHostKeyChecking:
		if ((rc = opt_parse_boolean(value, &result)) >= 0) {
			options->StrictHostKeyChecking = result;
		}
		break;
	case OptTerminalName:
		options->TerminalName = Strdup(value);
		break;
	case UsePrivilegedPort:
		if ((rc = opt_parse_boolean(value, &result)) >= 0) {
			options->UsePrivilegedPort = result;
		}
		break;
	case OptUser:
		options->User = Strdup(value);
		break;
	case OptUnknown:
	default:
		break;
	}
	return rc;
}


void
msg(const char *str)
{
	(void)fprintf(stderr, "\nslogin: %s\r\n", str);
}


void
msgx(const char *str)
{
	(void)fprintf(stderr, "\nslogin: %s : %s\r\n", str, w32_strerror(errno));
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


void
version(void)
{
	fprintf(stderr,
	    "\n"\
	    "winssh - lean console ssh client (%s)\n", libssh2_helper_engine());

#if defined(MBEDTLS_VERSION_STRING)
	fprintf(stderr, "%s: %s Build %s (%s), libssh2 %s, libmbedtls %s, libz %s, libtsm %s, libw32 %s\n\n",
	    getprogname(), SLOGIN_VERSION, SLOGIN_BUILD_NUMBER, SLOGIN_BUILD_DATE,
	    LIBSSH2_VERSION, MBEDTLS_VERSION_STRING, ZLIB_VERSION, LIBTSM_VERSION, LIBW32_VERSION);
#else
	fprintf(stderr, "%s: %s Build %s (%s), libssh2 %s, libz %s, libtsm %s, libw32 %s\n\n",
	    getprogname(), SLOGIN_VERSION, SLOGIN_BUILD_NUMBER, SLOGIN_BUILD_DATE,
	    LIBSSH2_VERSION, ZLIB_VERSION, LIBTSM_VERSION, LIBW32_VERSION);
#endif

	fprintf(stderr,
	    "Copyright (C) 2015-2020 Adam Young\n"
	    "libssh2    - Copyright (C) 2004-2019 (https://www.libssh2.org/license.html)\n"
#if defined(MBEDTLS_VERSION_STRING)
	    "libmbedtls - Apache 2.0 license (https://tls.mbed.org/)\n"
#endif
	    "zlib       - Copyright (C) 1995-2017 Jean-loup Gailly and Mark Adler (http://www.zlib.net/zlib_license.html)\n"
	    "libtsm     - Copyright (C) 2011-2013 David Herrmann (https://www.freedesktop.org/wiki/Software/kmscon/libtsm/)\n"
	    "All rights reserved\n\n");

	fprintf(stderr,
	    "Please send any bug reports (including the output of '%s -V') as tickets\n"
	    "at https://sourceforge.net/projects/winssh\n", getprogname());
	exit(0);
}


static void
use_short(void)
{
	fprintf(stderr,
	    "\n"\
	    "Usage: %s [-46CdnqTtV] [-e escape_char|-E] [-o option[,option]...]\n"
	    "            [-b bind_address] [-l <user-name> [-p <port>] [-KPI] [user[:password]@]host\n"
	    "Usage: %s --usage | --version\n\n",
		getprogname(), getprogname());
}


static void
use_common(void)
{
	fprintf(stderr,
	    "Please send any bug reports (including the output of '%s -V') as tickets\n"\
	    "at https://sourceforge.net/projects/winssh\n", getprogname());
	exit(1);
	/*NOTREACHED*/
}


static void
use_detailed(void)
{
	const size_t rmargin =
		(console_width() < 80  ? 80 :
		(console_width() < 120 ? console_width() - 4 : 116));

	const struct configdef *def = configdefs,
		*defend = def + (sizeof(configdefs)/sizeof(configdefs[0]));
	const char **opttext, *text;
	size_t optlen, col;

	for (optlen = 0, opttext = usage_text; (text = *opttext) != NULL; ++opttext) {
		if (text[0] == '\1') {
			const size_t t_optlen = strlen(text+1);
			if (t_optlen > optlen) optlen = t_optlen;
		}
	}
	optlen = (optlen+4)|4;

	for (col = 0, opttext = usage_text; (text = *opttext) != NULL; ++opttext) {
		if (text[0] == '\1') {          //argument, left aligment.
			fprintf(stderr, "    %-*.*s", optlen, optlen, text + 1);
			col = 4 + optlen;

		} else if (text[0] == '\2') {   //description, right alignment.
                        usage_format(4 + optlen, rmargin, col, text + 1);
			fprintf(stderr, "\n");
			col = 0;

		} else { //normal text
			if (col) fprintf(stderr, "\n");
			if (*text) usage_format(2, rmargin, 0, text);
			fprintf(stderr, "\n");
			col = 0;
		}
		fflush(stderr);
	}

	for (; def < defend; ++def) {
		optlen = fprintf(stderr, "    %s\n", def->name);
		usage_format(12, rmargin, 0, def->description);
		fprintf(stderr, "\n");
	}
}


void
usage(void)
{
	use_short();
	use_common();
}


void
usagex(const char *msg, ...)
{
	if (msg && *msg) {
		va_list ap;
		va_start(ap, msg);
		fprintf(stderr, "%s: ", getprogname());
		vfprintf(stderr, msg, ap);
		fprintf(stderr, "\n\n");
	}
	usage();
	/*NOTREACHED*/
}


void
usage_full(void)
{
	use_short();
	use_detailed();
	use_common();
}


static int
parse_values(const struct optionval *values, const char *value, int *result)
{
	int i;
	while (' ' == *value) ++value;
	for (i = 0; values[i].key; ++i) {
		if (0 == _stricmp(values[i].key, value)) {
			*result = values[i].value;
			return i;
		}
	}
	return -1;
}


int
opt_parse_boolean(const char *value, int *result)
{
	return parse_values(optvalues_boolean, value, result);
}


int
opt_parse_numeric(int low, int high, const char *value, int *result)
{
	const char *errstr = NULL;
	long long t_result;

	t_result = strtonum(value, low, high, &errstr);
	if (errstr != NULL)
		return -1;
	*result = (int)t_result;
	return 0;
}


int
opt_parse_authentication(const char *value, int *result)
{
	char *t_value = Strdup(value), *cursor = t_value, *word, *back;
	int t_result, authentication = 0;

	do {
		while (' ' == *cursor)
			++cursor; //leading whitespace.

		word = cursor;
		while (*cursor) { //find end
			if (';' == *cursor) { //delimiter
				for (back = cursor; --back > word && ' ' == *back;) {
					*back = '\0'; //remove trailing ws
				}
				*cursor++ = '\0'; //terminate word.
				break;
			}
			++cursor;
		}

		if (*word) {
			if (parse_values(optvalues_authentication, word, &t_result) < 0) {
				free(t_value);
				return -1;
			}
			authentication |= t_result; //accumulate result.
		}
	} while (*cursor);
	*result = authentication;
	free(t_value);
	return 0;
}


int
opt_parse_port(const char *s, int *result)
{
	const char *errstr = NULL;
	long long port;

	port = strtonum(s, 0, 65535, &errstr);
	if (errstr != NULL)
		return -1;
	*result = (int)port;
	return *result;
}


int
opt_default_ssh_port(void)
{
	static int port;
	struct servent *sp;

	if (0 == port) {
		sp = getservbyname(SSH_SERVICE_NAME, "tcp");
		port = sp ? ntohs(sp->s_port) : SSH_DEFAULT_PORT;
	}
	return port;
}


int
opt_parse_escape(const char *p, int *result)
{
	long val;
	int len;

	if (0 == _stricmp(p, "none")) {
		*result = -1;			/* disabled */
		return 0;
	}

	if ((len = (int)strlen(p)) == 1) {	/* use any single char, including '\' */
		*result = (int)(*(unsigned char *)p);
		return *result;
	}

	if (*p == '\\' && len >= 2 && len <= 4) {
		val = strtol(++p, NULL, 8);	/* otherwise, \nnn */
		for (;;) {
			if (!*++p) {
				*result = (int)val;
				return *result;
			}
			if (*p < '0' || *p > '8')
				break;
		}
	}
	return -1;
}


int
opt_getsuboptions(char **optionp, const char **namep, const char **valuep)
{
	char *name = NULL, *value = NULL;
	char *p, *b;

	*namep = *valuep = NULL;
	if (!optionp || !*optionp)
		return -1;

	/* skip leading white-space, commas */
	for (p = *optionp; *p && (*p == ',' || *p == ' ' || *p == '\t'); ++p);
	if (!*p) {
		*optionp = p;
		return -1;
	}

	/* save the start of the token, and skip the rest of the token. */
	name = p;

	if (*p != '=') {                        // non-null name
		while (*++p && *p != ',' && *p != '=');
	}

	if (*p) {
		/*
		 * If there's an equals sign, set the value pointer,
                 * and skip over the value part of the token and terminate the token.
		 */
		for (b = p; --b > name && (*b == ' ' || *b == '\t');)
			*b = '\0';              // trailing ws from name.

		if (*p == '=') {
			*p = '\0';
			for (value = ++p; *p && *p != ','; ++p);
			for (b = p; --b > value && (*b == ' ' || *b == '\t');)
				*b = '\0';      // trailing ws from value.
			while (*value == ' ' || *value == '\t')
				++value;        // leading ws from value.
			if (*p) *p++ = '\0';    // terminate value

		} else {
			assert(',' == *p);
			*p++ = '\0';            // comma, remove
		}

		/* Skip any whitespace or commas after this token. */
		for (; *p && (*p == ',' || *p == ' ' || *p == '\t'); ++p);
	}
	*namep = name, *valuep = value;

	/* set optionp for next round. */
	*optionp = p;

	return 0;
}


static char *
Strndup(size_t len, const char *value)
{
	char *t_value = malloc(len + 1);
	if (t_value) {
		if (len) memcpy(t_value, value, len);
		t_value[len] = 0;
	}
	return t_value;
}


static char *
Strdup(const char *value)
{
	return Strndup(value ? strlen(value) : 0, value);
}

/*end*/
