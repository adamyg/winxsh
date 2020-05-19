#include <edidentifier.h>
__CIDENT_RCSID(termemu_keyexec_c,"$Id: termemu_keyexec.c,v 1.4 2020/05/09 15:08:06 cvsuser Exp $")

/* -*- mode: c; indent-width: 4; -*- */
/*
 * libtermemu console driver
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

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif
#include <windows.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <assert.h>
#include <unistd.h>

#include "termemu_keymap.h"			/* public interface */
#include "compat.h"

static void InsertNewLine(void *cxt, int argc, const char *argv);
static void InsertString(void *cxt, int argc, const char *argv);
static void NoOp(void *cxt, int argc, const char *argv);

static termemu_action_t actions[] = {
//	{"forward-character",	        MoveForwardChar},
//	{"backward-character",		MoveBackwardChar},
//	{"forward-word",		MoveForwardWord},
//	{"backward-word",		MoveBackwardWord},
//	{"forward-paragraph",		MoveForwardParagraph},
//	{"backward-paragraph",		MoveBackwardParagraph},
//	{"beginning-of-line",		MoveToLineStart},
//	{"end-of-line", 		MoveToLineEnd},
//	{"next-line",			MoveNextLine},
//	{"previous-line",		MovePreviousLine},
//	{"next-page",			MoveNextPage},
//	{"previous-page",		MovePreviousPage},
//	{"beginning-of-file",		MoveBeginningOfFile},
//	{"end-of-file", 		MoveEndOfFile},
//	{"scroll-one-line-up",		ScrollOneLineUp},
//	{"scroll-one-line-down",	ScrollOneLineDown},
//	{"delete-next-character",	DeleteForwardChar},
//	{"delete-previous-character",	DeleteBackwardChar},
//	{"delete-next-word",		DeleteForwardWord},
//	{"delete-previous-word",	DeleteBackwardWord},
//	{"delete-selection",		DeleteCurrentSelection},
//	{"delete",			Delete},
	{"newline",			InsertNewLine},
	{"string",			InsertString},
	{"no-op",			NoOp},
	};


int
termemu_keymap_execute(termemu_keymap_t *keymap, const termemu_event_t *event, struct tsm_vte *vte)
{
        return -1;
}


static void
InsertNewLine(void *ctx, int argc, const char *argv)
{
//      out(term, "\n", 1);
}


static void
InsertString(void *ctx, int argc, const char *argv)
{
//      int argi;
//      for (argi = 0; argc < argc; ++argi) {
//              const char *arg = argv[argi];
//              if (arg && *arg) out(term, arg, strlen(arg);
//      }
}


static void
NoOp(void *cxt, int argc, const char *argv)
{
	/*nothing*/
}

/*end*/
