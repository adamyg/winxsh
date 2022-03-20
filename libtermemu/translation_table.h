#ifndef TERMEMU_TRANSLATION_TABLE_H_INCLUDED
#define TERMEMU_TRANSLATION_TABLE_H_INCLUDED
/* -*- mode: c; indent-width: 4; -*- */
/*
 * libtermemu console driver
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

#include "tailqueue.h"

#ifndef MKMAGIC
#define MKMAGIC(__a, __b, __c, __d) \
              (((unsigned)(__a))<<24 | ((unsigned)(__b))<<16 | (__c)<<8 | (__d))
#endif

#define ModNone 		0x0000
#define ModAny			0x0100
#define ModShift		0x0200
#define ModControl		0x0400
#define ModAlt			0x0800
#define ModMeta 		ModAlt          // alias
#define ModApps	                0x1000          // application key: enhanced keyboard
#define ModAllModifiers		(ModShift|ModControl|ModAlt|ModMeta|ModApps)
#define ModShiftLock 	        0x2000          // shift-lock; capitals
#define ModNumLock 	        0x4000          // num-lock
#define ModAppMode              0x8000          // special: terminate numpad application-mode.

#define ModButton1		0x0010
#define ModButton2		0x0020
#define ModButton3		0x0040
#define ModAnyButton		0x0080
#define ModAllButtons		(ModButton1|ModButton2|ModButton3)

enum translation_events {
	KeyPressEvent		= 0x0001,
	KeyReleaseEvent		= 0x0002
};

struct translation_event {
	unsigned	magic;			// structure magic
#define TRANSEVENT_MAGIC	MKMAGIC('K', 's', 'E', 'v')
	TAILQ_ENTRY(translation_event) node;	// event list node
	const char *	source;			// source line
	unsigned	flags;
#define FLAG_APPLY_SHIFT	0x0001
#define FLAG_EXACT_MATCH	0x0002
#define FLAG_NONE_MATCH         0x0004
#define FLAG_ANY_MATCH		0x0008
	unsigned	modifiers;		// none or more modifiers.
	unsigned	negate_modifiers;       // none or more negative modifiers.
	int		events;
	unsigned	asciiKey;
	unsigned	virtualKey;
	const char *	virtualName;
	const char *	action;
	int		argc;			// argument count
	const char *	argv[8+1];		// argument vector; NULL terminated
};

typedef TAILQ_HEAD(eventq, translation_event) eventq_t;

typedef struct translation_table {
	unsigned magic;				// structure magic.
#define TRANSTABLE_MAGIC	MKMAGIC('K', 's', 'T', 'b')
	TAILQ_ENTRY(translation_table) node;	// table list node.
        const char *name;                       // name.
        const char *cxt;                        // application context.
	unsigned count;				// event count.
	eventq_t events;			// event queue.
} translation_table_t;

typedef TAILQ_HEAD(tableq, translation_table_t) translationq_t;

typedef struct translation_tables {
	unsigned magic;				// structure magic.
#define TRANSTABLES_MAGIC	MKMAGIC('K', 's', 'T', 's')
	unsigned count;				// table count.
        translationq_t tables;		        // table queue.
        translation_table_t root;               // root table.
} translation_tables_t;

#endif  //TERMEMU_TRANSLATION_TABLE_H_INCLUDED

/*end*/
