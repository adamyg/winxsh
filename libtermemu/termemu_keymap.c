/* -*- mode: c; indent-width: 4; -*- */
/*
 * libtermemu console driver
 *
 * Copyright (c) 2015 - 2018, Adam Young.
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
#include "compat.h"

#ifdef BUILD_HAVE_XKBCOMMON
#include <xkbcommon/xkbcommon-keysyms.h>
#else
#include "tsm/external/xkbcommon-keysyms.h"
#endif

#include "termemu_keymap.h"			/* public interface */
#include "translation_table.h"			/* internal definitions */

#if defined(_MSC_VER)
#ifndef snprintf
#define snprintf		_snprintf
#endif
#ifndef strdup
#define strdup			_strdup
#endif
#endif	//MSC_VER

struct optionval {
#define OVALUE(__x)		__x, sizeof(__x)-1
	const char *key;
	int length;
	int value;
};

static const struct optionval modifiers[] = {
	{OVALUE("None"),	ModNone},
	{OVALUE("Any"), 	ModAny},
	{OVALUE("Shift"),	ModShift},
	{OVALUE("Lock"),	ModShiftLock},
	{OVALUE("Num"),	        ModNumLock},
	{OVALUE("Ctrl"),	ModControl},
	{OVALUE("Alt"), 	ModAlt},
	{OVALUE("Meta"),	ModMeta},
	{OVALUE("Logo"),	ModApps},
//	{OVALUE("Hyper"),	    ModNoop},   //XK_Hyper_L
//	{OVALUE("Super"),	    ModNoop},   //XK_Super_L
	{OVALUE("s"),		ModShift},
	{OVALUE("l"),		ModShiftLock},
	{OVALUE("n"),		ModNumLock},
	{OVALUE("c"),		ModControl},
	{OVALUE("a"),		ModAlt},
	{OVALUE("m"),		ModMeta},
	{OVALUE("@AppMode"),	ModApps},       //special; dynamic KeyPad Application-Mode status.
//	{OVALUE("h"),		    XK_Hyper_L},
//	{OVALUE("su"),		    XK_Super_L},
	{OVALUE("Button1"),	ModButton1},
	{OVALUE("Button2"),	ModButton2},
	{OVALUE("Button3"),	ModButton3},
	{OVALUE("AnyButton"),	ModAnyButton},

            // defacto Modx mappings
	{OVALUE("Mod1"), 	ModAlt},        //Alt
        {OVALUE("Mod2"), 	ModNumLock},    //Num
	{OVALUE("Mod3"), 	ModApps},       //Logo/App
//	{OVALUE("Mod4"), 	    ModNoop},
//	{OVALUE("Mod5"), 	    ModNoop},
	{NULL}
	};

static const struct optionval events[] = {
	{OVALUE("None"),	0},
	{OVALUE("Key"), 	KeyPressEvent},
	{OVALUE("KeyPress"),	KeyPressEvent},
	{OVALUE("KeyDown"),	KeyPressEvent},
	{OVALUE("KeyUp"),	KeyReleaseEvent},
	{OVALUE("KeyRelease"),	KeyReleaseEvent},
//	{OVALUE("FocusIn"),
//	{OVALUE("FocusOut"),
//	{OVALUE("EnterNotify"),
//	{OVALUE("LeaveNotify"),
	{NULL}
	};

#include "vk_table.h"		// windows VK_xxx

static size_t	iscontinuation(const char *text, size_t length, int *iscont);
static int	iscontext(const char *source, const char *cxt, const char *res);

static void	event_push(translation_table_t *ks, struct translation_event *evt, const char *source, size_t length);
static void	event_free(struct translation_event *evt);
static void	event_print(const struct translation_event *evt);

static int	km_line(struct translation_event *evt, const char *cursor, size_t len, char *err, size_t errlen);
static int	km_shortcut(struct translation_event *evt, const char *text, size_t textlen, char *err, size_t errlen);
static int	km_action(struct translation_event *evt, char **cursor, char *err, size_t errlen);
static char *	km_ident(char **cursor, char *delim);
static int	km_parameters(struct translation_event *evt, char **cursor, char *delim, char *err, size_t errlen);
static char *	km_string(char **cursor, char *err, size_t errlen);
static int	km_keysym(struct translation_event *evt, char **cursor, char *delim, char *err, size_t errlen);
static int	km_value(const struct optionval *values, const char *value, int *result);
static int	km_strtonum(const char *numstr, int base, int minval, int maxval, const char **errstrp);
static int	km_strchr(char **cursor, const char *delims);
static char *	km_strtok(char **cursor, const char *delims, char *opening, char *closing);
static char *	km_whitespace(char *cursor);

static char *	strxchr(const char *text, char ch, const char *end);
static char *	strxstr(const char *text, const char *needle, const char *end);
static char *	strxistr(const char *text, const char *needle, const char *end);
#if !defined(HAVE_STRNDUP)
static char *	strndup(const char *text, size_t length);
#endif	//HAVE_STRNDUP


/*
 *	termemu_keymap_new ---
 *		Allocate an empty new keysym translation table.
 **/
termemu_keymap_t*
termemu_keymap_new(const char *name)
{
	translation_table_t *ks = calloc(sizeof(translation_table_t), 1);
	if (ks) {
		ks->magic = TRANSTABLE_MAGIC;
		TAILQ_INIT(&ks->events);
		ks->name  = (name ? strdup(name) : NULL);
		ks->cxt   = strdup("xterm");
		ks->count = 0;
	}
	return (termemu_keymap_t)ks;
}


/*
 *	termemu_keymap_delete ---
 *		Delete a previoulsy allocated keysym translation table.
 **/
void
termemu_keymap_delete(termemu_keymap_t *keymap)
{
	translation_table_t *ks = (translation_table_t *)keymap;
	if (ks) {
		struct translation_event *evt, *next;

		assert(TRANSTABLE_MAGIC == ks->magic);
		for (evt = TAILQ_FIRST(&ks->events); evt; evt = next) {
			assert(TRANSEVENT_MAGIC == evt->magic);
			next = TAILQ_NEXT(evt, node);
			event_free(evt);
		}
		free(ks);
	}
}


/*
 *	termemu_keymap_context ---
 *		Set the resource context application name; default 'xterm'.
 **/
int
termemu_keymap_context(termemu_keymap_t *keymap, const char *cxt)
{
	translation_table_t *ks = (translation_table_t *)keymap;
	if (ks) {
		assert(TRANSTABLE_MAGIC == ks->magic);
		free((char *)ks->cxt);
		ks->cxt = (cxt ? strdup("xterm") : NULL);
	}
	return 0;
}


/*
 *	termemu_keymap_parse ---
 *		Parse a keymap definition.
 **/
int
termemu_keymap_parse(termemu_keymap_t *keymap, const char *source, size_t buflen, const char *label)
{
	translation_table_t *ks = (translation_table_t *)keymap;
	const char *end = source + buflen;	// buffer end; not assumed to the nul terminated.

	int istranslation = (label?0:1);	// no label; assume root table.
	unsigned line = 1;
	char err[1204];

	assert(TRANSTABLE_MAGIC == ks->magic);
	while (source && *source) {
		const char *nl = strxchr(source, '\n', end), *res;
		size_t length = (nl ? nl - source : (end - source));

		//  Resource:
		//	(appname[*.]|[*])VT100.[name.]translations: #override [\]
		//		translations ...
		//
		//  Note: Translation events for the "VT100" widget.
		//  ToDo: Support named resources.
		err[0] = 0;
		if (NULL != (res = strxistr(source, "vt100.translations:", source + length))) {
			if (iscontext(source, ks->cxt, res)) {
				const char *param = strchr(res, ':') + 1;

				while (param < end && (' ' == *param || '\t' == *param)) ++param;
				if ((param += 9) < end && 0 == strnicmp(param - 9, "#override", 9)) {
					if (iscontinuation(param, nl - param, &istranslation)) {
						istranslation = 1; //single-line translation.
						source = param; //trailing specification.
					} else {
						source = (nl ? nl + 1 : NULL);
						++line;
					}
					continue;
				}
				strcpy(err, "unrecognised resource");
			}

		//  Translation events:
		//     [modifier_list]<event>,<event>...][detail]: action([arguments])
		//
		} else if (istranslation) {
						// process and trim trailing line continuation
			if ((length = iscontinuation(source, length, &istranslation)) > 0) {
				struct translation_event *evt;
				int ret;

				evt = calloc(sizeof(struct translation_event), 1);
				ret = km_line(evt, source, length, err, sizeof(err));
				if (ret == -1 || *err) { // compilation error.
					event_free(evt);
					goto error;
				}
				event_push(ks, evt, source, length);
			}
			source = (nl ? nl + 1 : NULL);
			++line;
			continue;

		//  Keysyms short-cuts, for example
		//      xterm*keysym.F2 : \033OH
		//
		} else if (NULL != (res = strxistr(source, "keysym.", source + length))) {
			if (iscontext(source, ks->cxt, res)) {
				struct translation_event *evt;
				int ret;

				res += 7;	// consume "keysym."
				evt = calloc(sizeof(struct translation_event), 1);
				ret = km_shortcut(evt, res, length - (res - source), err, sizeof(err));
				if (ret == -1 || *err) { // compilation error.
					event_free(evt);
					goto error;
				}
				event_push(ks, evt, source, length);
				source = (nl ? nl + 1 : NULL);
				++line;
				continue;
			}
			strcpy(err, "unrecognised resource");

		//  Other resources
		//
		} else if (NULL != (res = strxchr(source, ':', source + length))) {
			//
			//  consume, TODO cache context specific.
			//

		//  empty or comments
		} else if (0 == length || source[0] == '!') {
			source = (nl ? nl + 1 : NULL);
			++line;
			continue;		// consume
		}

		//  other or error.
error:		if (!*err) strcpy(err, "syntax error");
		if (label) {
			fprintf(stderr, "%s (%u): \"%.*s\" : %s\n", label, line, length, source, err);
		} else {
			fprintf(stderr, "line: \"%.*s\" : %s\n", length, source, err);
		}
		return -1;
	}
	return 0;
}


static size_t
iscontinuation(const char *text, size_t length, int *iscont)
{
	size_t textlength;
	int newline = 0;			// \n encountered

	*iscont = 0;
	for (textlength = length; textlength;) {
		const char ch = text[--textlength];

		if ('\\' == ch) 		// continuation
			*iscont = 1;
		else if (NULL == strchr(" \t\r", ch)) {
						// non-whitespace
			if ('n' == ch && !newline && textlength && '\\' == text[textlength - 1]) {
				--textlength; newline = 1;
				continue;	// newline "\n"
			}
			++textlength;
			break;			// non-terminator
		}
	}
	return textlength;
		//trimmed text length; trailing white-space and continuation removed.
}


static int
iscontext(const char *source, const char *cxt, const char *res)
{
	if ((source + 1) == res) {		// *<resource>
		return (source[0] == '*');

	} else if (cxt) {
		const size_t cxtlen = strlen(cxt);
		if ((source + cxtlen + 1) == res && (res[-1] == '.' || res[-1] == '*')) {
						// <context>{*.}<resource>
			return (0 == strnicmp(source, cxt, cxtlen));
		}
	}
	return 0;
}


/*
 *	termemu_keymap_print ---
 *		Print the keymap definitions.
 **/
void
termemu_keymap_print(const termemu_keymap_t *keymap)
{
	const translation_table_t *ks = (const translation_table_t *)keymap;
	if (ks) {
		const struct translation_event *evt;

		assert(TRANSTABLE_MAGIC == ks->magic);
		for (evt = TAILQ_FIRST(&ks->events); evt; evt = TAILQ_NEXT(evt, node)) {
			assert(TRANSEVENT_MAGIC == evt->magic);
			fprintf(stderr, "%s\n\t==> ", evt->source);
				event_print(evt); fprintf(stderr, "\n");
		}
	}
}


static void
event_push(translation_table_t *ks, struct translation_event *evt, const char *source, size_t length)
{
	if (ks) {				// result, otherwise discard; compile only.
		assert(0 == evt->magic);
		evt->magic = TRANSEVENT_MAGIC;
		evt->source = strndup(source, length);
		TAILQ_INSERT_TAIL(&ks->events, evt, node);
		++ks->count;
	} else {
		event_free(evt);
	}
}


static void
event_free(struct translation_event *evt)
{
	int argc;
	free((char *)evt->source);
	free((char *)evt->action);
	for (argc = 0; argc < evt->argc; ++argc) {
		free((char *)evt->argv[argc]);
	}
	free(evt);
}


static void
event_print(const struct translation_event *evt)
{
	if (evt->flags & FLAG_APPLY_SHIFT) fprintf(stderr, ":");
	if (evt->flags & FLAG_EXACT_MATCH) fprintf(stderr, "!");

	if (0 == evt->modifiers && 0 == evt->negate_modifiers) {
		fprintf(stderr, "None");
	} else {
		int i, cnt, bits = 0;
		for (i = 0, cnt = 0, bits = 0; i < (sizeof(modifiers)/sizeof(modifiers[0])); ++i) {
			if (0 == (bits & modifiers[i].value) &&
					(evt->modifiers & modifiers[i].value)) {
				fprintf(stderr, "%s%s", (cnt++ ? " ": ""), modifiers[i].key);
				bits |= modifiers[i].value;
			}
		}
		for (i = 0, cnt = 0, bits = 0; i < (sizeof(modifiers)/sizeof(modifiers[0])); ++i) {
			if (0 == (bits & modifiers[i].value) &&
					(evt->negate_modifiers & modifiers[i].value)) {
				fprintf(stderr, "%s~%s", (cnt++ ? " ": ""), modifiers[i].key);
				bits |= modifiers[i].value;
			}
		}
	}

	if (0 == evt->events) {
		fprintf(stderr, "<None>");
	} else {
		int i, cnt, bits = 0;
		for (i = 0, cnt = 0; i < (sizeof(events)/sizeof(events[0])); ++i) {
			if (0 == (bits & events[i].value) &&
					(evt->events & events[i].value)) {
				fprintf(stderr, "%s<%s>", (cnt++ ? ",": ""), events[i].key);
				bits |= events[i].value;
			}
		}
	}

	if (evt->virtualKey) {
		fprintf(stderr, "%s", evt->virtualName);
	} else if (evt->asciiKey) {
		if (evt->asciiKey >= ' ' && evt->asciiKey < '~') {
			fprintf(stderr, "%c", evt->asciiKey);
		} else {
			fprintf(stderr, "0x%x", evt->asciiKey);
		}
	}

	fprintf(stderr, " : ");
	if (evt->action) {
		int argc;
		fprintf(stderr, "%s(", evt->action);
		for (argc = 0; argc < evt->argc; ++argc) {
			fprintf(stderr, "%s'%s'", (argc ? ", " : ""), evt->argv[argc]);
		}
		fprintf(stderr, ")");
	}
}


static const char *
tokendesc(const char *token, int prefix, int delim)
{
	static char text[1024];
	char *cursor = text;

	if (prefix > 0) *cursor++ = prefix;
	if (token && *token) {
		int len = snprintf(cursor, sizeof(text) - 2, (delim > 0 ? "%s%c" : "%s"), token, delim);
		if (len <= 0 || len > (sizeof(text) - 10)) { //overflow
			len = sizeof(cursor) - 10;
			strcpy(cursor + len, "...");
		}
		cursor += len;
	} else {
		*cursor++ = delim;
	}
	*cursor = 0; //terminate
	return text;
}


/*
 * km_line - Parse a key translation specification.
 *
 *   Generalised Syntax:
 *      [modifier_list]<event>,<event>...][detail]: action([arguments])
 **/
static int
km_line(struct translation_event *evt, const char *text, size_t textlen, char *err, size_t errlen)
{
	char *t_text = strndup(text, textlen), *cursor = t_text, delim, prefix;
	const char *token;
	int lookup;

#define DELIMS  ",<>:"
	*err = 0;

	//  Prefixes:
	//	!   Requiring an exact match.
	//	:   Apply shift (and lock) modifier to key event before comparing.
	//
	while ((delim = km_strchr(&cursor, "!:<\\")) != 0 && '<' != delim) {
		if ('\\' == delim) {		// continuation
			(void)snprintf(err, errlen, "unexpected '\\', possible missing newline");
			return -1;
		}
		evt->flags |= ('!' == delim ?
			FLAG_EXACT_MATCH : FLAG_APPLY_SHIFT);
		++cursor;
	}

	//  Modifier(s)
	if ('<' != delim) {
		for (;;) {			// modifier(s); plus allow '-' and space delimiters.
			if (NULL != (token = km_strtok(&cursor, DELIMS "- ", &prefix, &delim)) &&
					prefix == 0 && (delim == '-' || delim == ' ' || delim == ',' || delim == '<')) {
				if (token && *token) {
					const int negate = (*token == '~' ? 1 : 0);
						// tilde (~) is used to negate a modifier.

					if (-1 == km_value(modifiers, token + negate, &lookup)) {
						(void)snprintf(err, errlen, "unknown modifier '%s'", token);

					} else if (negate && ((evt->flags & FLAG_EXACT_MATCH) || ModNone == lookup || ModAny == lookup)) {
						// Negation on exact-match, 'None' or 'Any'.
						(void)snprintf(err, errlen, "exact match '%s' can not be '~' decorated", token + 1);

					} else if ((ModNone == lookup && (evt->flags || evt->modifiers || evt->negate_modifiers)) ||
							(ModNone != lookup && (evt->flags & FLAG_NONE_MATCH))) {
						// 'None' is exclusive.
						(void)snprintf(err, errlen, "modifier 'None' is exclusive and must be undecorated");

					} else if ((ModAny  == lookup && (evt->flags || evt->modifiers || evt->negate_modifiers)) ||
							(ModAny != lookup && (evt->flags & FLAG_ANY_MATCH))) {
						// 'Any' is exclusive.
						(void)snprintf(err, errlen, "modifier 'Any' is exclusive and must be undecorated");

					} else if ((lookup & evt->modifiers) || (lookup & evt->negate_modifiers)) {
						// Non-unique modifier.
						(void)snprintf(err, errlen, "duplicate modifier '%s'", token);

					} else {
						// otherwise, apply result.
						if (ModNone == lookup) evt->flags |= FLAG_NONE_MATCH;
						else if (ModAny == lookup) evt->flags |= FLAG_ANY_MATCH;
						else if (negate) evt->negate_modifiers |= lookup;
						else evt->modifiers |= lookup;
					}
				}

				if (delim == '<' || (delim == ' ' &&
					    '<' == (delim = km_strchr(&cursor, DELIMS)))) {
					break;	// event
				}
				continue;	// next modifier

			} else if (token || prefix || delim) {
				(void) snprintf(err, errlen, "unexpected token '%s', expected a <modifier-list> or an <event>",
					    tokendesc(token, prefix, delim));
				delim = 0;

			} else {
				snprintf(err, errlen, "expected a <modifier-list> or an <event>");
				delim = 0;
			}
			break;
		}
	}

	// Event(s)
	if (!*err) {
		if ((evt->flags & FLAG_EXACT_MATCH) &&
			    0 == evt->modifiers && 0 == evt->negate_modifiers) {
						// !<Event>, becomes None<Event>
			evt->flags &= ~FLAG_EXACT_MATCH;
			evt->flags |= FLAG_NONE_MATCH;
		}

		for (;;) {			// events(s)
			if (NULL != (token = km_strtok(&cursor, DELIMS, &prefix, &delim)) &&
					(prefix == '<' || !prefix) && delim == '>') {

				if (-1 == km_value(events, token, &lookup)) {
					(void) snprintf(err, errlen, "unknown event <%s>", token);

				} else if (lookup & evt->events) {
					(void) snprintf(err, errlen, "duplicate event <%s>", token);

				} else {	// details: [optional]
					int ret = 0;

						// event type specific 'details'
					evt->events |= lookup;
					switch(lookup) {
					case KeyPressEvent:
					case KeyReleaseEvent: {
							const int keysym = (evt->virtualKey || evt->asciiKey);
							if ((ret = km_keysym(evt, &cursor, &delim, err, errlen)) > 0) {
								ret = 0; //no symbol; ignore, checked as exit condition
							} else if (0 == ret && keysym) {
								(void) snprintf(err, errlen, "multiple keysym's encountered");
							}
						}
						break;
					default:
						delim = 0;
						break;
					}

						// termination
					if (0 == ret) {
						if (!delim && 0 != (delim = km_strchr(&cursor, DELIMS))) {
							++cursor;
						}
						if (',' == delim)
							continue;
						if (':' != delim) {
							(void) snprintf(err, errlen, "unexpected token '%c', expected a ',' or ':'", delim);
						}
					}
				}

			} else if (token || prefix || delim) {
				(void) snprintf(err, errlen, "unexpected token '%s', expected an <event>",
					    tokendesc(token, prefix, delim));

			} else {
				(void) snprintf(err, errlen, "expected an <event>");
			}
			break;
		}
	}

	if (!*err) {				// verify exit condition
		if ((evt->events & (KeyPressEvent|KeyReleaseEvent)) &&
				!evt->virtualKey && !evt->asciiKey) {
			(void) snprintf(err, errlen, "unexpected token '%s', expected a keysym",
					    tokendesc(token, prefix, delim));
		}
	}

	//  Action
	if (!*err && delim == ':') {		// action(s)
		km_action(evt, &cursor, err, errlen);
	}

	free(t_text);
	return (*err ? -1 : 0);
}


/*
 *  Parse a keysym translation short-cut.
 **/
static int
km_shortcut(struct translation_event *evt, const char *text, size_t textlen, char *err, size_t errlen)
{
	char *t_text = strndup(text, textlen), *cursor = t_text, delim;

	*err = 0;
	if (0 == km_keysym(evt, &cursor, &delim, err, errlen) && delim == ':') {
		if (NULL != (evt->argv[0] = km_string(&cursor, err, errlen))) {
			if (NULL != (cursor = km_whitespace(cursor)) && *cursor) {
				(void) snprintf(err, errlen, "unexpected token '%s'", cursor);
			}
			evt->argc = 1;
		} else {
			(void) snprintf(err, errlen, "unexpected an escape sequence");
		}
	} else if (delim) {
		(void) snprintf(err, errlen, "unexpected token '%c', expected an <event>", delim);
	} else {
		(void) snprintf(err, errlen, "expected a <event>");
	}

	free(t_text);
	return (*err ? -1 : 0);
}


/*
 *  Parse an action declaration.
 **/
static int
km_action(struct translation_event *evt, char **cursor, char *err, size_t errlen)
{
	char *token, delim = 0;

	if (NULL == (token = km_ident(cursor, &delim))) {
		(void) snprintf(err, errlen, "missing identifier while parsing action sequence");

	} else if (delim != '(') {
		(void) snprintf(err, errlen, "missing '(' while parsing action sequence");

	} else {
		evt->action = strdup(token);
		if (0 == km_parameters(evt, cursor, &delim, err, errlen) && delim != ')') {
			(void) snprintf(err, errlen, "missing ')' while parsing action sequence");
		}
	}
	return (*err ? -1 : 0);
}


/*
 *  Action identifier.
 **/
static char *
km_ident(char **cursor, char *delim)
{
	char *text = *cursor, *token = NULL, *end, ch;

	*delim = 0;
	text = km_whitespace(text);		// leading whitespace.
	if (*text) {
		token = text;
		while ((ch = *text) != 0 &&	// [A-Za-z0-9-_$]
			((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
			 (ch >= '0' && ch <= '9') ||
				('-' == ch) || ('_' == ch) || ('$' == ch))) {
			++text; 		// next charcater.
		}

		if ((end = text) == token) {
			token = NULL;		// empty.
		} else {
			text = km_whitespace(text); // trailing whitespace.
			if (*text) *delim = *text++;
			*end = 0;		// nul terminate ident.
		}
	}
	*cursor = text;
	return token;
}


/*
 *  Acton parameter(s).
 **/
static int
km_parameters(struct translation_event *evt, char **cursor, char *delim, char *err, size_t errlen)
{
	char *text = *cursor, *str, ch;
	int argc;

	text = km_whitespace(text);		// leading whitespace.
	for (argc = 0; 0 != (ch = *text);) {
		if (')' == ch) {		// complete
			++text;
			break;	//consume delimiter
		}

		if (argc) {
			if (ch != ',') {	// missing comma
			    (void) snprintf(err, errlen, "excepted a ','");
			    break;
			}
			++text; //consume comma
		}

		if (NULL == (str = km_string(&text, err, errlen))) {
			break;			// error
		}

		if (argc > ((sizeof(evt->argv)/sizeof(evt->argv[0])) - 1) /*nul*/) {
			(void) snprintf(err, errlen, "parameter limit %d exceeded", argc);
			free(str);
			break;			// overflow
		}
		evt->argv[ argc++ ] = str;
		text = km_whitespace(text);
	}

	evt->argc = argc;
	*cursor = text;
	*delim = ch;
	return (*err ? -1 : 0);
}


/*
 *  Action parameter(s).
 **/
static char *
km_string(char **cursor, char *err, size_t errlen)
{
	char *text = *cursor, *start = NULL, *end, ch;
	size_t len = 0;

	text = km_whitespace(text);		// leading whitespace
	if (*text == '"') {			// quoted text.
		start = end = ++text;
		while (*end && (ch = *end++) != '"') {
			/*
			 *  \"	produces double quote embedded in a quoted parameter.
			 *  \\" produces backslash as last character of a quoted parameter.
			 *
			 *  This simple escaping mechanism removes the need to double
			 *  escape terminal escape-sequences.
			 */
			if (ch == '\\' && (end[0] == '"' || (end[0] == '\\' && end[1] == '"'))) {
				// escaped; remove escape
				memmove(start + 1, start, len);
				++start;
				++end;
			}
			++len;
		}

		if (ch != '"') {		// exit condition
			(void) snprintf(err, errlen, "missing closing '\"'");
		}

	} else {				// non-quoted word
		start = end = text;
		while (0 != (ch = *end) &&	// break on white/delimiter
		    ch != ' ' && ch != '\t' && ch != ',' && ch != ')') {
			++end;
		}
		len = end - start;
	}

	*cursor = km_whitespace(end);		// trailing whitespace
	if (start) {				// clone result
		return strndup(start, len);
	}
	return NULL;
}


static const char*
virtual_name(int value)
{
	const struct vkdef *def = vkdefs,
		*end = def + (sizeof(vkdefs)/sizeof(vkdefs[0]));
	for (; def < end; ++def) {
		if (def->value == value) {
			return def->name;
		}
	}
	return NULL;
}


static const struct vkdef *
virtual_match(const char *token)
{
	const int isosf = (0 == strnicmp(token, "osf", 3));
	if (isosf) {
		const struct vkdef *def = osfdefs,
			*end = def + (sizeof(osfdefs)/sizeof(osfdefs[0]));
		for (; def < end; ++def) {
			if (0 == stricmp(token, def->name)) {
				return def;
			}
		}
		return NULL;

	} else {
		const int isvk = (0 == strnicmp(token, "VK_", 3));
		const struct vkdef *def = vkdefs,
			*end = def + (sizeof(vkdefs)/sizeof(vkdefs[0]));
		for (; def < end; ++def) {
			if (0 == stricmp(token, def->name) || // VK_Space
				    (!isvk && 0 == stricmp(token, def->name+3))) { // Space
				return def;
			}
		}
	}
	return NULL;
}


/*
 *  Decode a key symbol
 *
 *	A keysym can be specified as any of the standard KeySym names,
 *	An escaped single character.
 *	A hexadecimal number prefixed with "0x" or "0X",
 *	An octal number prefixed with "0" or a decimal number.
 *	An escaped single character.
 *	A KeySym expressed as a single digit are interpreted as the corresponding VK_ KeySym, for example, "0" is the KeySym VK_0.
 *	Other single character KeySyms are treated as literal constants from Latin 1, for example, "!" is treated as 021.
 *	Standard KeySym names are as defined by a "Windows Virtual-Key Codes" constant with the "VK_" prefix removed.
 **/
static int
km_keysym(struct translation_event *evt, char **source_cursor, char *delim, char *err, size_t errlen)
{
	char *cursor = *source_cursor, ch;

	*delim = 0;
	cursor = km_whitespace(cursor);

	if (0 != (ch = *cursor)) {
		const char *token;
		char prefix = 0;

		if (ch == ',' && cursor[1] == '<') {
			*delim = ','; ++cursor;
			return 1;		// no symbol; next event
		}

		if (ch == '\\' && cursor[1]) {	// quoted character.
			++cursor;
			evt->asciiKey = *cursor++;
			goto success;
		}

		if (ch > ' ' && ch <= '~' &&	// single character.
			    cursor[1] && strchr(",: \t", cursor[1])) {
			if (ch >= '0' && ch <= '9') {
				// encode as virtual key
				evt->virtualName = virtual_name(ch);
				evt->virtualKey = ch;
			} else {
				evt->asciiKey = ch;
			}
			++cursor;
			goto success;

		} else if (NULL != (token = km_strtok(&cursor, DELIMS, &prefix, delim)) && prefix == 0) {
			if (token[0] == '0' ||	//  numeric, hex, oct or decimal.
				    (token[0] > '0' && token[0] <= '9' && token[1] >= '0' && token[1] <= '9')) {
				const char *errp = NULL;
				int value;

				if ((value = km_strtonum(token, 0, 0x1, 0xff, &errp)) && NULL == errp) {
					evt->asciiKey = value;
					goto success;
				}
				(void) snprintf(err, errlen, "invalid keysym constant '%s' : %s", token, errp);

			} else {		// otherwise name/symbol assumed.
				const struct vkdef *def = virtual_match(token);
				if (def) {
					evt->virtualName = def->name;
					evt->virtualKey = def->value;
					goto success;
				}
				(void) snprintf(err, errlen, "invalid keysym name '%s'", token);
			}

		} else {
			(void) snprintf(err, errlen, "unexpected token '%s', expected an keysym",
				tokendesc(token, prefix, *delim));
		}

	} else {
		(void) snprintf(err, errlen, "expected a keysym of the form Name, 0x. or 0..");
	}
	return -1;

success:
	*source_cursor = cursor;
	return 0;
}


/*
 *  Option value table match.
 **/
static int
km_value(const struct optionval *values, const char *value, int *result)
{
	int i, length;

	if (!value) return -1;

	while (' ' == *value || '\t' == *value)
		++value;			// leading whitespace.
	for (length = (int)strlen(value);
			length && (' ' == value[length-1] || '\t' == value[length-1]); ) {
		--length;			// trailing whitespace.
	}

	if (length) {				// token match.
		for (i = 0; values[i].key; ++i) {
			if (length == values[i].length &&
					0 == strnicmp(values[i].key, value, length)) {
				*result = values[i].value;
				return i;
			}
		}
	}
	return -1;
}


/*
 *  String to number.
 **/
static int
km_strtonum(const char *numstr, int base, int minval, int maxval, const char **errstrp)
{
	static const struct errval {
		const char *errstr;
		int err;
	} ev[4] = {
		{ NULL, 0 },
		{ "invalid numeric value", EINVAL },
		{ "value too small", ERANGE },
		{ "value too large", ERANGE },
		};
	long long ll = 0;
	int oerrno = errno, error = 0;
	char *ep;

	if (minval > maxval) {
		error = 1;
	} else {
#if defined(_MSC_VER)
#define strtoll 	_strtoi64
#endif
		errno = 0;
		ll = strtoll(numstr, &ep, base);
		if (numstr == ep || *ep != '\0')
			error = 1;
		else if ((ll == LLONG_MIN && errno == ERANGE) || ll < minval)
			error = 2;
		else if ((ll == LLONG_MAX && errno == ERANGE) || ll > maxval)
			error = 3;
	}
	if (errstrp != NULL) *errstrp = ev[error].errstr;
	errno = (error ? ev[error].err : oerrno /*restore*/);
	if (error) return 0;
	return (int)ll;
}


/*
 *  Match the next non-whitespace character.
 **/
static int
km_strchr(char **cursor, const char *delims)
{
	char *s;

	if (cursor == NULL || (s = *cursor) == NULL) {
		return -1;			// error
	}
	s = km_whitespace(s);			// leading whitespace
	if (*s && delims) {
		int c = *s, sc;
		while ((sc = *delims++) != 0) {
			if (c == sc) {		// matched delimiter
				*cursor = s;
				return c;
			}
		}
	}
	*cursor = s;
	return 0;
}


/*
 *  Retrieve next delimitered token.
 **/
static char *
km_strtok(char **cursor, const char *delims, char *prefix, char *delim)
{
	const char *d, *token;
	char *s;
	int c, sc, oc = 0;

	assert(cursor);
	assert(delims);

	if (cursor == NULL || (s = *cursor) == NULL) {
		if (prefix) *prefix = 0;
		if (delim) *delim = 0;
		return NULL;
	}

	/*
	 *  Skip (span) leading delimiters
	 *  Note, results in empty elments being consumed!
	 */
	s = km_whitespace(s);			// leading whitespace
cont:	c = *s++;
	for (d = delims; (sc = *d++) != 0;) {
		if (c == sc) {			// opening delimiter
			if (oc && prefix) {	// only one allowed
				if (delim) *delim = sc;
				*prefix = oc;
				*cursor = s;
				s[-1] = 0;
				return s - 1;	// empty token
			}
			oc = sc;
			goto cont;
		}
	}

	if (c == 0) {				// no non-delimiter characters
		if (delim) *delim = 0;
		*cursor = NULL;
		return NULL;
	}

	if (prefix) *prefix = oc;
	token = s - 1;

	/*
	 *  Scan for token end
	 */
	for (;;) {
		c = *s++;
		d = delims;			// assume NUL terminated
		do {
			if (c == (sc = *d++)) {
				if (delim)	// matched delimiter
					*delim = c;
				if (0 == c) {	// eos
					*cursor = NULL;
				} else {	// nul terminate token
					*cursor = s;
					s[-1] = 0;
				}
				for (s -= 2; s > token && (*s == ' ' || *s == '\t'); --s)
					*s = 0; // consume trailing whitespace
				return ((char *)token);
			}
		} while (sc != 0);
	}
	/*NOTREACHED*/
}


/*
 * Consume leading white-space.
 **/
static char *
km_whitespace(char *cursor)
{
	if (cursor) {
		while (*cursor && (*cursor == ' ' || *cursor == '\t')) {
			++cursor;
		}
	}
	return (cursor);
}


static char *
strxchr(const char *text, char c, const char *end)
{
	if (text) {
		while (text < end) {
			if (*text == c) return ((char *)text);
			++text;
		}
	}
	return 0;
}


static char *
strxstr(const char *text, const char *needle, const char *end)
{
	char first;

	if (text) {
		if (needle && 0 != (first = *needle++)) {
			const size_t needlelen = strlen(needle);
			do {
				char c;
				do {
					if ((text + needlelen) >= end || 0 == (c = *text++)) {
						return NULL;
					}
				} while (c != first);
			} while (0 != strncmp(text, needle, needlelen));
			--text; //leading character
		}
	}
	return ((char *)text);
}


static char *
strxistr(const char *text, const char *needle, const char *end)
{
	char first;

	if (text) {
		if (needle && 0 != (first = *needle++)) {
			const size_t needlelen = strlen(needle);
			first = toupper((unsigned char)first);
			do {
				char c;
				do {
					if ((text + needlelen) >= end || 0 == (c = *text++)) {
						return NULL;
					}
				} while (toupper((unsigned char)c) != first);
			} while (0 != strnicmp(text, needle, needlelen));
			--text; //leading character
		}
	}
	return ((char *)text);
}


#if !defined(HAVE_STRNDUP)
static char *
strndup(const char *text, size_t length)
{
	char *ntext = malloc(length + 1);
	(void) memcpy(ntext, text, length);
	ntext[length] = 0;
	return ntext;
}
#endif	//HAVE_STRNDUP

/*end*/