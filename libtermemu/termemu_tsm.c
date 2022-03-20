#include <edidentifier.h>
__CIDENT_RCSID(termemu_tsm_c,"$Id: termemu_tsm.c,v 1.12 2022/03/20 08:22:55 cvsuser Exp $")

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

#if defined(HAVE_CONFIG_H)
#include "config.h"
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

#include <sys/stat.h>
#include <sys/mman.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>

#include "libtsm/libtsm.h"
#include "libtsm/libtsm_int.h"

#include "shl_ring.h"

#include "termemu_keymap.h"
#include "termemu_cio.h"
#include "termemu_vio.h"
#include "termemu_tsm.h"

static struct term {				// terminal instance
	struct tsm_screen *screen;
	struct tsm_vte *vte;
	struct shl_ring pushback;
	termemu_keymap_t *keymap;
	int sb_size;
	int cursorx, cursory;
	int cols, rows;
	tsm_age_t age;
	HANDLE break_signal;
} *term;

static int xkb_key_get(int block, void (*sigwinch)(void));
static void cb_log(void *data, const char *file, int line, const char *fn,
		const char *subs, unsigned int sev, const char *format, va_list args);
static void cb_write(struct tsm_vte *vte, const char *u8, size_t len, void *data);
static int cb_renderer(struct tsm_screen *screen, uint32_t id,
		const uint32_t *ch, size_t len, unsigned int cwidth, unsigned int x, unsigned int y,
		const struct tsm_screen_attr *attr, tsm_age_t age, void *data);

int
termemu_init(void)
{
	int cols, rows;
	int ret;

	assert(0 == term);
	vio_save();
	vio_open(&rows, &cols);
	term = calloc(sizeof(struct term), 1);
	term->sb_size = vio_screenbuffersize(); // query console screen buffer size.
	term->cursorx = term->cursory = -1;
	if ((ret = tsm_screen_new(&term->screen, cb_log, (void *)term)) < 0)
		return -1;
	tsm_screen_set_max_sb(term->screen, (term->sb_size > 0 ? term->sb_size : 0));
	if ((ret = tsm_vte_new(&term->vte, term->screen, cb_write, (void *)term, cb_log, (void *)term)) < 0)
		return -1;
	tsm_screen_resize(term->screen, cols, rows);
	term->cols = cols, term->rows = rows;
        term->break_signal = CreateEventA(NULL, TRUE, FALSE, NULL);
	vio_cursor_show();
	return 0;
}


int
termemu_active(void)
{
	return (NULL != term);
}


void
termemu_signal_break(void)
{
	if (term) {
		SetEvent(term->break_signal);
	}
}


void
termemu_exit(void)
{
	struct term *t_term;

	if (NULL == (t_term = term))
		return;
	term = NULL;

	termemu_signal_break();
	vio_close();
	tsm_vte_unref(t_term->vte);
	tsm_screen_unref(t_term->screen);
	vio_restore();				// TODO: optional and/or export screen buffer.
	CloseHandle(t_term->break_signal);
	free(t_term);
}


int
termemu_size(int *rows, int *cols)
{
	int t_rows = -1, t_cols = -1;
	if (term) {
		t_rows = term->rows;
		t_cols = term->cols;
	} else {
		CONSOLE_SCREEN_BUFFER_INFO scr = {0};
		if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &scr)) {
			t_rows = (scr.srWindow.Bottom - scr.srWindow.Top) + 1;
			t_cols = (scr.srWindow.Right - scr.srWindow.Left) + 1;
		}
	}
	if (rows) *rows = t_rows;
	if (cols) *cols = t_cols;
	return 0;
}


int
termemu_winch(int *rows, int *cols)
{
	int t_rows = 0, t_cols = 0, ret = 0;

	if (!term) return -1;			// not initialised

	if (vio_winch(&t_rows, &t_cols)) { //change?
		tsm_screen_resize(term->screen, t_cols, t_rows); //resize terminal
		term->cols = t_cols, term->rows = t_rows;
		ret = 1;
	}
	if (rows) *rows = t_rows;
	if (cols) *cols = t_cols;
	return ret;
}


int
termemu_palette(const char *name)
{
	assert(term);
	if (!term) return -1;			// not initialised

	if (name && 0 == strcmp(name, "default")) {
		name = NULL;
	}
	return tsm_vte_set_palette(term->vte, name);
}


int
termemu_read(void *buf, int len, void (*sigwinch)(void))
{
	size_t pulllen;

	assert(term);
	if (!term) return -1;			// not initialised

	while (1) {
		if ((pulllen = shl_ring_copy(&term->pushback, buf, len)) > 0) {
			shl_ring_pull(&term->pushback, pulllen);
			return (int)pulllen;
		}
		if (-1 == xkb_key_get(TRUE, sigwinch)) {
			break;
		}
	}
	return -1;
}


void
termemu_write(void *buf, int len)
{
	assert(term);
	if (term) tsm_vte_input(term->vte, buf, len);
}


void
termemu_flush()
{
	assert(term);
	if (!term) return;

	term->age = tsm_screen_draw(term->screen, cb_renderer, (void*)term);
	vio_goto(tsm_screen_get_cursor_y(term->screen), tsm_screen_get_cursor_x(term->screen));
	if (0 == (TSM_SCREEN_HIDE_CURSOR & tsm_screen_get_flags(term->screen))) {
		vio_cursor_show();
	} else {
		vio_cursor_hide();
	}
	vio_flush();
}


int
termemu_appname(const char *appname)
{
	assert(term);
	if (!term) return -1;			// not initialised, invalid argument
	if (NULL == term->keymap) {
		term->keymap = termemu_keymap_new("");
	}
	termemu_keymap_context(term->keymap, appname);
	return 0;
}


int
termemu_keysyms(const char *keysyms)
{
	struct stat sb = {0};
	int fd, ret = -1;

	assert(term);
	if (!term || !keysyms || !*keysyms)
		return -1;			// not initialised, invalid argument

	if (-1 == (fd = open(keysyms, O_RDONLY))) {
		printf("keysym: open failed <%s> : %s", keysyms, strerror(errno));

	} else {
		if (-1 == fstat(fd, &sb)) {	// size the file image.
			printf("keysym: stat <%s> failed : %s", keysyms, strerror(errno));

		} else if (sb.st_size) {	// import
			const char *source;

			if (MAP_FAILED == (source = mmap(0, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0))) {
				printf("keysym: mmap <%s> failed : %s", keysyms, strerror(errno));

			} else {		// root translation table.
				if (NULL == term->keymap) {
					term->keymap = termemu_keymap_new("");
				}
				ret = termemu_keymap_parse(term->keymap, source, sb.st_size, keysyms);
				munmap((void *)source, sb.st_size);
			}
		}
		close(fd);
	}
	return ret;
}


static int
xkb_key_handle(termemu_event_t *event)
{
//	if (term->sb_size > 0 && TSM_KEY_SHIFTS(mods) == TSM_SHIFT_MASK) {
//		if (keysym == XKB_KEY_Up) {
//			tsm_screen_sb_up(term->screen, 1); vio_flush();
//			return 0;
//
//		} else if (keysym == XKB_KEY_Down) {
//			tsm_screen_sb_down(term->screen, 1); vio_flush();
//			return 0;
//
//		} else if (keysym == XKB_KEY_Page_Up) {
//			tsm_screen_sb_page_up(term->screen, 1); vio_flush();
//			return 0;
//
//		} else if (keysym == XKB_KEY_Page_Down) {
//			tsm_screen_sb_page_down(term->screen, 1); vio_flush();
//			return 0;
//
//		} else if (keysym == XKB_KEY_Home) {
//			tsm_screen_sb_up(term->screen, term->sb_size); vio_flush();
//			return 0;
//
//		} else if (keysym == XKB_KEY_End) {
//			tsm_screen_sb_down(term->screen, term->sb_size); vio_flush();
//			return 0;
//		}
//	}

//	if (term->keymap &&
//		    0 == termemu_keymap_execute(term->keymap, event, term->vte)) {
//		return 0;
//	}

	return tsm_vte_handle_keyboard(term->vte, event->xkbkey, event->ascii, event->modifiers, event->unicode);
}


static int
mouseevt(const DWORD dwEventFlags, const DWORD dwButtonState)
{
	const int move = (dwEventFlags & MOUSE_MOVED  ? 1 : 0);
	const int mult = (dwEventFlags & DOUBLE_CLICK ? 1 : 0);

	if (dwButtonState & FROM_LEFT_1ST_BUTTON_PRESSED) {
		if (move) {                     // left
			return TSM_BUTTON1_MOTION;
		}
		return (mult ? TSM_BUTTON1_DOUBLE : TSM_BUTTON1_DOWN);

	} else if (dwButtonState & RIGHTMOST_BUTTON_PRESSED) {
		if (move) {                     // right
			return TSM_BUTTON2_MOTION;
		}
		return (mult ? TSM_BUTTON2_DOUBLE : TSM_BUTTON2_DOWN);

	} else if ((dwButtonState & FROM_LEFT_2ND_BUTTON_PRESSED) ||
		   (dwButtonState & FROM_LEFT_3RD_BUTTON_PRESSED) ||
		   (dwButtonState & FROM_LEFT_4TH_BUTTON_PRESSED)) {
		if (move) {                     // middle
			return TSM_BUTTON3_MOTION;
		}
		return (mult ? TSM_BUTTON3_DOUBLE : TSM_BUTTON3_DOWN);
	}
	return TSM_MOUSE_MOTION;
}


static int
xkb_key_get(int block, void (*sigwinch)(void))
{
	HANDLE console = GetStdHandle(STD_INPUT_HANDLE); //XXX: cache
	INPUT_RECORD k = {0};
	DWORD count;

	while (1) {
		HANDLE handles[2] = {console, term->break_signal};
		int rc;

		if (WAIT_OBJECT_0 != (rc = WaitForMultipleObjects(2, handles, FALSE, block ? INFINITE : 0)) ||
				0 == ReadConsoleInput(console, &k, 1, &count)) {
			if ((WAIT_OBJECT_0 + 1) == rc) {
				ResetEvent(term->break_signal);
			}
			return -1;	/* break, error, return EOF */
		}

		if (k.EventType == KEY_EVENT) {
			if (count) {
				termemu_event_t evt;
				if (termemu_cio_keyevent(&k.Event.KeyEvent, &evt)) { //cook event
					return xkb_key_handle(&evt); //process result
				} else {
					sigwinch();
				}
			}

		} else if (k.EventType == MOUSE_EVENT) {
#ifndef MOUSE_WHEELED
#define MOUSE_WHEELED	4	// Vista+
#endif
			const MOUSE_EVENT_RECORD *me = &k.Event.MouseEvent;
			const unsigned modifiers = termemu_cio_modifiers(me->dwControlKeyState, 1);

			if (MOUSE_WHEELED & me->dwEventFlags) {
				const int down = (0xFF000000 & me->dwButtonState ? TRUE : FALSE);
				if (modifiers == TSM_SHIFT_MASK) {
					termemu_event_t evt;
					k.Event.KeyEvent.bKeyDown = 1;
					k.Event.KeyEvent.wRepeatCount = 1;
					k.Event.KeyEvent.wVirtualKeyCode = (down ? VK_NEXT : VK_PRIOR);
					k.Event.KeyEvent.uChar.UnicodeChar = 0;
					k.Event.KeyEvent.dwControlKeyState = 0;
					if (termemu_cio_keyevent(&k.Event.KeyEvent, &evt)) {
						return xkb_key_handle(&evt);
					}
				} else {
					return tsm_vte_handle_mouse(term->vte, (down ? TSM_WHEEL_DOWN : TSM_WHEEL_UP),
						me->dwMousePosition.X + 1, me->dwMousePosition.Y + 1, modifiers);
				}

			} else if (0 == me->dwEventFlags /*move*/ ||
				    ((me->dwEventFlags & (MOUSE_MOVED|DOUBLE_CLICK)) && me->dwButtonState /*press*/)) {
				return tsm_vte_handle_mouse(term->vte, mouseevt(me->dwEventFlags, me->dwButtonState),
					me->dwMousePosition.X + 1, me->dwMousePosition.Y + 1, modifiers);
			}

		} else if (k.EventType == FOCUS_EVENT ||
				k.EventType == WINDOW_BUFFER_SIZE_EVENT) {
			sigwinch();
		}
	}

	return -1;
}

static void cb_log(void *data, const char *file, int line, const char *fn,
		const char *subs, unsigned int sev, const char *format, va_list args)
{
#if defined(_DEBUG)
	char debug[1024];
	int len1, len2, len;
	len1 = _snprintf(debug, sizeof(debug), "%lu: log: %s", (unsigned long)GetTickCount(), subs);
	len2 = _vsnprintf(debug + len1, (sizeof(debug) - 2) - len1, format, args);
	if (len2 < 0 /*msvc overflow*/ || (len = len1 + len2) >= sizeof(debug) - 2)
		len = sizeof(debug)-2;
	debug[len]='\n', debug[len+1]=0;
	OutputDebugStringA(debug);
	return;
#endif	//_DEBUG
	fprintf(stderr, "term: %s", subs);
	vfprintf(stderr, format, args);
	fprintf(stderr, "\n");
}

static void cb_write(struct tsm_vte *vte, const char *u8, size_t len, void *data)
{
	struct term *term = data;
	shl_ring_push(&term->pushback, u8, len);
}

static int __inline
tsmcolor(const int color, const int normal)
{
#ifndef TSM_COLOR_FOREGROUND
#define TSM_COLOR_FOREGROUND 16
#define TSM_COLOR_BACKGROUND 17
#define TSM_COLOR_NUM 18
#endif

	if (color >= TSM_COLOR_NUM) return normal;
	if (color == TSM_COLOR_FOREGROUND) return VT_COLOR_FOREGROUND;
	if (color == TSM_COLOR_BACKGROUND) return VT_COLOR_BACKGROUND;
	return color;
}

static int cb_renderer(struct tsm_screen *screen, uint32_t id,
	const uint32_t *ch, size_t len, unsigned int cwidth, unsigned int x, unsigned int y, const struct tsm_screen_attr *attr, tsm_age_t age, void *data)
{
	struct term *term = data;
	unsigned attributes = 0;

	/*
	 *  If the cell age is non-zero *and* the cell-age is smaller than our age,
	 *  then skip drawing as it's already on-screen.
	 */
	if (age && term->age && age <= term->age)
		return 0;

	/* build attributes */
	if (attr->bold) 				/* bold character */
		attributes |= VIO_BOLD;
	if (attr->faint)				/* faint character */
		attributes |= VIO_FAINT;
	if (attr->underline)				/* underlined character */
		attributes |= VIO_UNDERLINE;
	if (attr->inverse)				/* inverse colors */
		attributes |= VIO_INVERSE;
//	if (attr->protect)				/* cannot be erased -- not implemented */
//		attributes |= VIO_PROTECT;
	if (attr->blink)				/* blinking character */
		attributes |= VIO_BLINK;
	if (attr->italic)				/* italic character */
		attributes |= VIO_ITALIC;
	if (attr->strike)				/* over-strike character */
		attributes |= VIO_STRIKE;

	/* vt or rgb colors */
	if (attr->fr != (uint32_t)-1) { 		/* RGB/256 or 16 */
		vio_set_rgbcolor(RGB(attr->fr, attr->fg, attr->fb), RGB(attr->br, attr->bg, attr->bb), attributes);

	} else {
		int fg = attr->fccode, bg = attr->bccode;

		if ((attributes & VIO_BOLD) && fg > 0 && fg < 8) {
			attributes &= ~VIO_BOLD;
			fg += 8;			/* apply bold, implies lighter color */
		}
		fg = tsmcolor(fg, VT_COLOR_FOREGROUND);
		bg = tsmcolor(bg, VT_COLOR_BACKGROUND);
		vio_set_vtcolor(fg, bg, attributes);
	}
	vio_atputc(y, x, *ch ? *ch : ' ', 1);
	return 0;
}

/*end*/
