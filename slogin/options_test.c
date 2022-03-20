#include <edidentifier.h>
__CIDENT_RCSID(options_test_c,"$Id: options_test.c,v 1.10 2022/03/20 13:25:21 cvsuser Exp $")

/* -*- mode: c; indent-width: 4; -*- */
/*
 * win slogin
 *
 * Copyright (c) 2015 - 2022, Adam Young.
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
#include "options.h"

#define WIN32_SOCKET_H_CLEAN
#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#include <libssh2.h>
#include "../libtermemu/compat.h"
#include "../libtermemu/termemu_tsm.h"
#include "../libtermemu/termemu_keymap.h"

#if defined(_DEBUG)
static void configuration(struct options *options);
static void keymap(void);
#endif	//_DEBUG

void
options_decode_test(struct options *options)
{
#if defined(_DEBUG)
	configuration(options);
	keymap();
#endif	//_DEBUG
}

#if defined(_DEBUG)
static void configuration(struct options *options)
{
	/*
	 *  variables
	 */
	int rc;

	// Environment variables
	rc = options_decode(options, "SetEnv A=1");
	assert(0 == rc);
	rc = options_decode(options, "SetEnv TEMP");
	assert(0 == rc);
	rc = options_decode(options, "SetEnv TMP");
	assert(0 == rc);
	rc = options_decode(options, "SetEnv B = 2");
	assert(0 == rc);
	rc = options_decode(options, "SetEnv  C = 3 ");
	assert(0 == rc);

	// subopt processing
	{	char buffer[1024], *cursor, *name, *value;
		unsigned i;

		strcpy(buffer, " \t");
		for (cursor = buffer, name = NULL, value = NULL, i = 0;
				0 == opt_getsuboptions(&cursor, &name, &value); ++i, name = NULL, value = NULL) {
			assert(0);
		}
		assert(i == 0);

		strcpy(buffer, " \t");
		for (cursor = buffer, name = NULL, value = NULL, i = 0;
				0 == opt_getsuboptions(&cursor, &name, &value); ++i, name = NULL, value = NULL) {
			assert(0);
		}
		assert(i == 0);

		strcpy(buffer, "name");
		for (cursor = buffer, name = NULL, value = NULL, i = 0;
				0 == opt_getsuboptions(&cursor, &name, &value); ++i, name = NULL, value = NULL) {
			switch(i) {
			case 0:
				assert(name && 0 == strcmp(name, "name"));
				assert(!value);
				break;
			default:
				assert(0);
				break;
			}
		}
		assert(i == 1);

		strcpy(buffer, "name=value");
		for (cursor = buffer, name = NULL, value = NULL, i = 0;
				0 == opt_getsuboptions(&cursor, &name, &value); ++i, name = NULL, value = NULL) {
			switch(i) {
			case 0:
				assert(name && 0 == strcmp(name, "name"));
				assert(value && 0 == strcmp(value, "value"));
				break;
			default:
				assert(0);
				break;
			}
		}
		assert(i == 1);

		strcpy(buffer, " name = value ");
		for (cursor = buffer, name = NULL, value = NULL, i = 0;
				0 == opt_getsuboptions(&cursor, &name, &value); ++i, name = NULL, value = NULL) {
			switch(i) {
			case 0:
				assert(name && 0 == strcmp(name, "name"));
				assert(value && 0 == strcmp(value, "value"));
				break;
			default:
				assert(0);
				break;
			}
		}
		assert(i == 1);

		strcpy(buffer, " name = value ,");
		for (cursor = buffer, name = NULL, value = NULL, i = 0;
				0 == opt_getsuboptions(&cursor, &name, &value); ++i, name = NULL, value = NULL) {
			switch(i) {
			case 0:
				assert(name && 0 == strcmp(name, "name"));
				assert(value && 0 == strcmp(value, "value"));
				break;
			default:
				assert(0);
				break;
			}
		}
		assert(i == 1);

		strcpy(buffer, " name = value , name 2 = value 2 , name3 = , = value 4 , , name5=value = 5 , , ");
		for (cursor = buffer, name = NULL, value = NULL, i = 0;
				0 == opt_getsuboptions(&cursor, &name, &value); ++i, name = NULL, value = NULL) {
			switch(i) {
			case 0:
				assert(name && 0 == strcmp(name, "name"));
				assert(value && 0 == strcmp(value, "value"));
				break;
			case 1:
				assert(name && 0 == strcmp(name, "name 2"));
				assert(value && 0 == strcmp(value, "value 2"));
				break;
			case 2:
				assert(name && 0 == strcmp(name, "name3"));
				assert(value && !*value);
				break;
			case 3:
				assert(name && !*name);
				assert(value && 0 == strcmp(value, "value 4"));
				break;
			case 4:
				assert(name && 0 == strcmp(name, "name5"));
				assert(value && 0 == strcmp(value, "value = 5"));
				break;
			default:
				assert(0);
				break;
			}
		}
		assert(i == 5);
	}

	// AddressFamily: inet,inet6,any
	options->AddressFamily = -1;
	rc = options_decode(options, "AddressFamily=inet");
	assert(0 == rc);
	assert(options->AddressFamily == AF_INET);

	options->AddressFamily = -1;
	rc = options_decode(options, "AddressFamily=inet4");
	assert(0 == rc);
	assert(options->AddressFamily == AF_INET);

	options->AddressFamily = -1;
	rc = options_decode(options, "AddressFamily=inet6");
	assert(0 == rc);
	assert(options->AddressFamily == AF_INET6);

	options->AddressFamily = -1;
	rc = options_decode(options, "AddressFamily=any");
	assert(options->AddressFamily == AF_UNSPEC);
	assert(0 == rc);

	options->AddressFamily = -1;
	options->AddressFamily = -1;
	rc = options_decode(options, "AddressFamily");
	assert(0 != rc);
	assert(options->AddressFamily == -1);

	options->AddressFamily = -1;
	rc = options_decode(options, "AddressFamily=");
	assert(0 != rc);
	assert(options->AddressFamily == -1);

	options->AddressFamily = -1;
	rc = options_decode(options, "AddressFamily=other");
	assert(0 != rc);
	assert(options->AddressFamily == -1);

	options->BindAddress = NULL;
	rc = options_decode(options, "BindAddress=1.2.3.4");
	assert(0 != rc);
	assert(options->BindAddress && 0 == strcmp(options->BindAddress, "1.2.3.4"));

	//Port: 0..65535
	options->Port = -1;
	rc = options_decode(options, "Port=22");
	assert(0 == rc);
	assert(options->Port == 22);

	options->Port = -1;
	rc = options_decode(options, "Port=0");
	assert(0 == rc);
	assert(options->Port == 0);

	options->Port = -1;
	rc = options_decode(options, "Port=65535");
	assert(0 == rc);
	assert(options->Port == 65535);

	options->Port = -1;
	rc = options_decode(options, "Port=-1");
	assert(0 != rc);
	assert(options->Port == -1);

	options->Port = -1;
	rc = options_decode(options, "Port=65536");
	assert(0 != rc);
	assert(options->Port == -1);

	//boolean: yes/no/true/false
	options->BatchMode = -1;
	rc = options_decode(options, "BatchMode=yes");
	assert(0 == rc);
	assert(options->BatchMode == 1);

	options->BatchMode = -1;
	rc = options_decode(options, "BatchMode=no");
	assert(0 == rc);
	assert(options->BatchMode == 0);

	options->BatchMode = -1;
	rc = options_decode(options, "BatchMode=true");
	assert(0 == rc);
	assert(options->BatchMode == 1);

	options->BatchMode = -1;
	rc = options_decode(options, "BatchMode=false");
	assert(0 == rc);
	assert(options->BatchMode == 0);

	options->BatchMode = -1;
	rc = options_decode(options, "BatchMode=1");
	assert(0 == rc);
	assert(options->BatchMode == 1);

	options->BatchMode = -1;
	rc = options_decode(options, "BatchMode=0");
	assert(0 == rc);
	assert(options->BatchMode == 0);

	options->BatchMode = -1;
	rc = options_decode(options, "BatchMode=-1");
	assert(0 != rc);
	assert(options->BatchMode == -1);

	options->BatchMode = -1;
	rc = options_decode(options, "BatchMode=xxx");
	assert(0 != rc);
	assert(options->BatchMode == -1);

	// authentication: password,keyboard[-interactive],publickey"
	options->Authentication = -1;
	rc = options_decode(options, "Authentication=");    //???
	assert(0 == rc);
	assert(options->Authentication == 0);

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=;");   //???
	assert(0 == rc);
	assert(options->Authentication == 0);

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=;;");  //???
	assert(0 == rc);
	assert(options->Authentication == 0);

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=password");
	assert(0 == rc);
	assert(options->Authentication == AUTH_PASSWORD);

	options->Authentication = -1;
	rc = options_decode(options, "Authentication= keyboard-interactive");
	assert(0 == rc);
	assert(options->Authentication == AUTH_INTERACTIVE);

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=keyboard ");
	assert(0 == rc);
	assert(options->Authentication == AUTH_INTERACTIVE);

	options->Authentication = -1;
	rc = options_decode(options, "Authentication= publickey ");
	assert(0 == rc);
	assert(options->Authentication == AUTH_PUBLICKEY);

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=password;publickey");
	assert(0 == rc);
	assert(options->Authentication == (AUTH_PASSWORD|AUTH_PUBLICKEY));

	options->Authentication = -1;
	rc = options_decode(options, "Authentication= password;publickey");
	assert(0 == rc);
	assert(options->Authentication == (AUTH_PASSWORD|AUTH_PUBLICKEY));

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=password ;publickey");
	assert(0 == rc);
	assert(options->Authentication == (AUTH_PASSWORD|AUTH_PUBLICKEY));

	options->Authentication = -1;
	rc = options_decode(options, "Authentication= password ;publickey");
	assert(0 == rc);
	assert(options->Authentication == (AUTH_PASSWORD|AUTH_PUBLICKEY));

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=password; publickey");
	assert(0 == rc);
	assert(options->Authentication == (AUTH_PASSWORD|AUTH_PUBLICKEY));

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=password;publickey ");
	assert(0 == rc);
	assert(options->Authentication == (AUTH_PASSWORD|AUTH_PUBLICKEY));

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=password; publickey ");
	assert(0 == rc);
	assert(options->Authentication == (AUTH_PASSWORD|AUTH_PUBLICKEY));

	options->Authentication = -1;
	rc = options_decode(options, "Authentication=password; publickey ;");
	assert(0 == rc);
	assert(options->Authentication == (AUTH_PASSWORD|AUTH_PUBLICKEY));

	{	const struct optionenv *var = options->VariableValues,
			*end = var + options->VariableCount;
		unsigned i;
		for (i = 0; var < end; ++var, ++i) {
			fprintf(stderr, "%2u] %s=%s\n", i, var->name, var->value);
		}
	}
}
#endif	//_DEBUG

#if defined(_DEBUG)
static void keymap_test(const char *source)
{
	termemu_keymap_t *keymap = termemu_keymap_new("test");
	(void) termemu_keymap_parse(keymap, source, strlen(source), NULL);
	termemu_keymap_print(keymap);
	termemu_keymap_delete(keymap);
}

static void keymap_file(const char *source)
{
	termemu_keymap_t *keymap = termemu_keymap_new("test");
	(void) termemu_keymap_parse(keymap, source, strlen(source), "");
	termemu_keymap_print(keymap);
	termemu_keymap_delete(keymap);
}

static void keymap(void)
{
	const char *keytbl1 =
		"! comment\n"\
		"xterm*VT100.Translations: #override \\\n"\
		"   Ctrl<Key>osfLeft:   string(\\033[90~)  \\\r\n"\
		"   Ctrl<Key>osfRight:  string(\\033[91~)  \\\r\n"\
		"   Ctrl<Key>osfUp:     string(\\033[92~)  \\\n"\
		"   Ctrl<Key>osfDown:   string(\\033[93~)  \\\n"\
		"   <Key>osfBeginLine:  string(\\033[1~)   \\\n"\
		"   <Key>osfEndLine:    string(\\033[4~)   \\\n"\
		"   <Key>osfPageUp:     string(\\033[5~)   \\\n"\
		"   <Key>osfPageDown:   string(\\033[6~)   \\\n"\
		"   !Meta<Key>F1:	string(\\033[224A) \\\n"\
		"   !Meta<Key>F2:	string(\\033[225A) \\\n"\
		"   !Meta<Key>F3:	string(\\033[226A) \\\n"\
		"   !Meta<Key>F4:	string(\\033[227A) \\\n"\
		"   !Meta<Key>F5:	string(\\033[228A) \\\n"\
		"   !Meta<Key>F6:	string(\\033[229A) \\\n"\
		"   !Meta<Key>F7:	string(\\033[230A) \\\n"\
		"   !Meta<Key>F8:	string(\\033[231A) \\\n"\
		"   !Meta<Key>F9:	string(\\033[232A) \\\n"\
		"   !Meta<Key>F10:	string(\\033[233A) \\\n"\
		"   !Ctrl<Key>F1:	string(\\033[224C) \\\n"\
		"   !Ctrl<Key>F2:	string(\\033[225C) \\\n"\
		"   !Ctrl<Key>F3:	string(\\033[226C) \\\n"\
		"   !Ctrl<Key>F4:	string(\\033[227C) \\\n"\
		"   !Ctrl<Key>F5:	string(\\033[228C) \\\n"\
		"   !Ctrl<Key>F6:	string(\\033[229C) \\\n"\
		"   !Ctrl<Key>F7:	string(\\033[230C) \\\n"\
		"   !Ctrl<Key>F8:	string(\\033[231C) \\\n"\
		"   !Ctrl<Key>F9:	string(\\033[232C) \\\n"\
		"   !Ctrl<Key>F10:	string(\\033[233C) \\\n"\
		"\n"\
		"! additional element block\n"\
		"xterm*VT100.Translations: #override \\\n"\
		"   !Shift<Key>F1:	string(\\033[224S) \\\n"\
		"   !Shift<Key>F2:	string(\\033[225S) \\\n"\
		"   !Shift<Key>F3:	string(\\033[226S) \\\n"\
		"   !Shift<Key>F4:	string(\\033[227S) \\\n"\
		"   !Shift<Key>F5:	string(\\033[228S) \\\n"\
		"   !Shift<Key>F6:	string(\\033[229S) \\\n"\
		"   !Shift<Key>F7:	string(\\033[230S) \\\n"\
		"   !Shift<Key>F8:	string(\\033[231S) \\\n"\
		"   !Shift<Key>F9:	string(\\033[232S) \\\n"\
		"   !Shift<Key>F10:     string(\\033[233S) \\\n"\
		"\n"\
		"! additional element line\n"\
		"xterm*VT100.Translations: #override <Key>F1: string(\\033[11~)\n"\
		"\n"\
		"! single line definition\n"\
		"xterm*keysym.F2 : \\033OH \n"\
		"! comment, alternative table\n"\
		"rxvt*VT100.Other.Translations:  #override \\\n"\
		"   <Key>F1:	        string(\\033[11~)\n"\
		"\n"\
		"! comment, secondary table\n"\
		"xterm*VT100.Other.Translations: #override \\\n"\
		"   <Key>F1:	        string(\\033[11~)\n";

	const char *keytbl2 =
		"! comment\n"\
		"xterm*keysym.F2 : \033OH \n";

	keymap_test("None<Key>VK_UP : string(\"\")");
	keymap_test(" Any <Key> VK_UP : string(\"\")");
	keymap_test("\tAny\t<Key>\tVK_UP\t:\tstring(\"\")");
	keymap_test("Any<Key>xVK_UP:string(\"\")");

	keymap_test("<Key>VK_UP : string(\"\")");	//
	keymap_test("<Key>UP : string(\"1\")"); 	// 1
	keymap_test("<Key>A : string(\"12\",\"12\")");	// 12, 12
	keymap_test("<Key>a : string(\"123\")");	// 123
	keymap_test("<Key>a: string(\"\\\"1234\\\"\")");// "1234"
	keymap_test("<Key>: : string(\"a\\bc\")");	// a\bc
	keymap_test("<Key>! : string(\"a\\\"b\")");	// a"b
	keymap_test("<Key>> : string(\"ab\\\"\")");	// ab"
	keymap_test("<Key>< : string(\"\")");
	keymap_test("<Key>\\:: string(\"\")");
	keymap_test("<Key>\\!: string(\"\")");
	keymap_test("<Key>\\>: string(\"\")");
	keymap_test("<Key>\\<: string(\"\")");

	keymap_test("<Key>0x1b : string()");		//
	keymap_test("<Key>033 : string(a)");		// a
	keymap_test("<Key>27 : string(ab)");		// ab
	keymap_test("<Key>0 : string(a,c)");		// a,b
	keymap_test("<Key>9 : string(ab,cd)");		// ab,cd

	keymap_test("Shift<Key>VK_UP: string(\"\")");
	keymap_test("Ctrl<Key>VK_UP : string(\"\")");
	keymap_test("Alt<Key>VK_UP : string(\"\")");
	keymap_test("Meta<Key>VK_UP : string(\"\")");

	keymap_test("s<Key>VK_UP: string(\"\")");
	keymap_test("c<Key>VK_UP : string(\"\")");
	keymap_test("a<Key>VK_UP : string(\"\")");
	keymap_test("m<Key>VK_UP : string(\"\")");

	keymap_test("Ctrl Shift<Key>UP : string(\"\")"); // modifier delimiters
	keymap_test("Ctrl  Shift<Key>UP : string(\"\")");
	keymap_test("Ctrl, Shift<Key>UP : string(\"\")"); // only trailing whitespace after ','
	keymap_test("Ctrl-Shift<Key>UP : string(\"\")");

	keymap_test("Button1<Key>VK_UP : string(\"\")");
	keymap_test("Button2<Key>VK_UP : string(\"\")");
	keymap_test("Button3<Key>VK_UP : string(\"\")");
	keymap_test("AnyButton<Key>VK_UP : string(\"\")");
	keymap_test("Shift Ctrl<Key>VK_UP : string(\"\")");
	keymap_test("Shift,Ctrl<KeyPress>,<KeyRelease>VK_UP : string(\"\")");

	keymap_test(":<Key>a : string(\"\")");		// apply shift
	keymap_test(":Ctrl<Key>a : string(\"\")");
	keymap_test(":Ctrl<Key>A : string(\"\")");	// note: unless operation, cannot shift an upper-case character

	keymap_test("~Ctrl ~Shift<Key>A : string(\"\")"); // except
	keymap_test("~Ctrl,~Shift<Key>A: string(\"\")");
	keymap_test("Ctrl ~Shift<Key>A : string(\"\")");

	keymap_test("!Shift<Key>a : string(\"\")");	// exactly.

	keymap_test("None<Key>a : string(\"\")");	// no modifiers
	keymap_test("!<Key>a : string(\"\")");		// equiv to "None"

	keymap_file(keytbl1);
	keymap_file(keytbl2);

	// invalid
	keymap_test("");
	keymap_test("xxx<Key>VK_UP : string(\"\")");
	keymap_test("Any+xxx<Key>VK_UP : string(\"\")");
	keymap_test("Any<Key><Key>VK_UP : string(\"\")");
	keymap_test("Any<Key>,<Key>VK_UP : string(\"\")");
	keymap_test("Shift,Ctrl<Key>VK_UP,<Key>VK_UP : string(\"\")");
	keymap_test("Any<xxx>VK_UP : string(\"\")");
	keymap_test("Any<KeyVK_UP : string(\"\")");
	keymap_test("xxx<Key>VK_UP : string(\"\")");
	keymap_test("Any<Key>0xjj : string(\"\")");
	keymap_test("Any<Key>256 : string(\"\")");
	keymap_test("Any<Key>VK_JUNK : string(\"\")");
	keymap_test("Shift Ctrl<Any>VK_UP : string(\"\")");
	keymap_test("! ~Shift<Key>a : string(\"\")");	// exactly and except

	keymap_test("None Shift<Key>VK_UP : string(\"\")"); // exclusive
	keymap_test("!None Shift<Key>VK_UP : string(\"\")");
	keymap_test("!Shift None<Key>VK_UP : string(\"\")");
	keymap_test("~None Shift<Key>VK_UP : string(\"\")");
	keymap_test("Any Shift<Key>VK_UP : string(\"\")");
	keymap_test("!Any Shift<Key>VK_UP : string(\"\")");
	keymap_test("!Shift Any<Key>VK_UP : string(\"\")");
	keymap_test("~Any Shift<Key>VK_UP : string(\"\")");
	keymap_test("Any None<Key>VK_UP : string(\"\")");
	keymap_test("None Any<Key>VK_UP : string(\"\")");
}

#endif	//_DEBUG