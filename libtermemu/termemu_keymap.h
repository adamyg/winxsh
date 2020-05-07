#ifndef TERMEMU_KEYMAP_H_INCLUDED
#define TERMEMU_KEYMAP_H_INCLUDED
#include <edidentifier.h>
__CIDENT_RCSID(termemu_keymap_h,"$Id: termemu_keymap.h,v 1.6 2020/05/07 11:51:04 cvsuser Exp $")
__CPRAGMA_ONCE

/* -*- mode: c; indent-width: 4; -*- */
/*
 * termemu keyboard mapping
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

typedef void * termemu_keymap_t;

typedef void (*termemu_method_t)(void *cxt, int argc, const char *argv);

typedef struct action {
	const char *name;       
	termemu_method_t method;
} termemu_action_t;

typedef struct event {
	unsigned modifiers;	// TSM_XXX_MASK(s)
	unsigned vkkey;		// VK_xxxx key code; otherwise 0.
        const char *vkname;     // VK symbol name; otherwise NULL.
	int vkenhanced;		// Whether an enhanced VK, 1 otherwise 0.
	int xkbkey;		// XKB_XXX key symbol; otherwise -1.
        const char *xkbname;    // XKB symbol name; otherwise NULL.
	int ascii;	        // ASCII character value; otherwise -1
	int unicode;		// Unicode character value; otherwise -1
} termemu_event_t;

struct tsm_vte;

extern termemu_keymap_t*	termemu_keymap_new(const char *name);
extern void			termemu_keymap_delete(termemu_keymap_t *keymap);
extern int                      termemu_keymap_context(termemu_keymap_t *keymap, const char *cxt);
extern int                      termemu_keymap_parse(termemu_keymap_t *keymap, const char *source, size_t buflen, const char *label);
extern void			termemu_keymap_print(const termemu_keymap_t *keymap);
extern int			termemu_keymap_execute(termemu_keymap_t *keymap, const termemu_event_t *event, struct tsm_vte *vte);

__END_DECLS

#endif //TERMEMU_KEYMAP_H_INCLUDED

