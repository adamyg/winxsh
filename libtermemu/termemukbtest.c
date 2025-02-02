#include <edidentifier.h>
__CIDENT_RCSID(termemukbtest_c,"$Id: termemukbtest.c,v 1.13 2025/02/02 13:58:14 cvsuser Exp $")

/* -*- mode: c; indent-width: 4; -*- */
/*
 * libtermemu console keyboard test application
 *
 * Copyright (c) 2015 - 2025, Adam Young.
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

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

#include <sys/mman.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <io.h>
#include <fcntl.h>
#include <getopt.h>
#include <assert.h>

#include "libtsm/libtsm.h"
#include "libtsm/libtsm_int.h"
#ifdef BUILD_HAVE_XKBCOMMON
#include <xkbcommon/xkbcommon-keysyms.h>
#else
#include "libtsm/external/xkbcommon-keysyms.h"
#endif

#include "termemu_keysym.h"			// key-symbol database.
#include "termemu_keymap.h"			// evt structure.
#include "termemu_cio.h"			// public interface

#ifndef XKB_KEY_NoSymbol
#define XKB_KEY_NoSymbol 0
#define XKB_VoidSymbol 0xffffff
#endif

struct iobuf {
	unsigned length;
	unsigned char text[128];
};

struct record {
	termemu_event_t evt;
	const char *str;
	int key;
};

#if !defined(ENABLE_VIRTUAL_TERMINAL_PROCESSING)
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
    // When writing with WriteFile or WriteConsole, characters are parsed for VT100 and similar control
    // character sequences that control cursor movement, color/font mode, and other operations that can
    // also be performed via the existing Console APIs.
#endif
#if !defined(DISABLE_NEWLINE_AUTO_RETURN)
#define DISABLE_NEWLINE_AUTO_RETURN 0x0008
    // When writing with WriteFile or WriteConsole, this adds an additional state to end-of-line wrapping
    // that can delay the cursor move and buffer scroll operations.
#endif

#define VKS_DONE	0x01			// VK key status
#define VKS_SHIFT	0x02
#define VKS_CTRL	0x04
#define VKS_ALT		0x08
#define VKS_APPS	0x10
#define VKS_PRESS	0x40
#define VKS_ON		0x80

static int  AutoNext(int automode, INPUT_RECORD *k);
static void Verify(const termemu_event_t *evt);
static void KeyboardExport(const char *outfile);
static void KeyboardPush(HANDLE console, BYTE *status, const termemu_event_t *evt);
static void KeyboardStatus(HANDLE console, BYTE *status);
static int  KeyboardKey(HANDLE console, int vk, const wchar_t *name, BYTE *status);
static void ConsoleClear(HANDLE console);
static void ConsoleClearEOL(HANDLE console);
static void Usage(const char *msg, ...);
static void Version(void);
static BOOL WINAPI HandlerRoutine(DWORD dwCtrlType);
static int  parse_keytrans(const char *keysyms);
static void printf_modifiers(const DWORD dwControlKeyState);
static void write_cb(struct tsm_vte *vte, const char *u8, size_t len, void *data);
static void translation(const termemu_event_t *evt, const unsigned char *esc);
static const char *latin1name(unsigned value);

static int ctrl_break = 0;			// TODO: atomic op
static void *keymap = NULL;			// keyboard translation table
static struct record events[5000];		// recorded events
static unsigned recorded;			// records

#define OPTIONS "ank:V"

static const struct option long_options[] = {
	{ "help",       no_argument,        NULL, 1000 },
	{ "app",        no_argument,        NULL, 1001 },
	{ "num",        no_argument,        NULL, 1002 },
	{ "keytrans",   required_argument,  NULL, 1003 },
	{ "export",     required_argument,  NULL, 1004 },
	{ "auto",       no_argument,        NULL, 1005 },
	{ "version",    no_argument,        NULL, 'V'  },
	{ NULL }
	};

int
main(int argc, char *argv[])
{
	struct tsm_screen *screen = NULL;
	struct tsm_vte *vte = NULL;
	struct iobuf iobuf = {0};
	DWORD consolemode = 0, oconsolemode = 0;
	BYTE vkstatus[256*3 /*vk,VK+,ascii*/] = {0};
	const char *keytrans[8] = {NULL}, *exportfile = NULL;
	int transnum = 0, keypadmode = 0, automode = -1;
	INPUT_RECORD ir;
	DWORD count;
	HANDLE console, oconsole;
	int esc = 0, i, ch;

	while ((ch = getopt_long(argc, argv, OPTIONS, long_options, NULL)) != -1)
		switch(ch) {
		case 1001:  // --app
		case 'a':   // -a
			keypadmode = 1;
			break;
		case 1002:  // --num
		case 'n':   // -n
			keypadmode = 0;
			break;
		case 1003:  // --keytrans <file>
		case 'k':   // -k <file>
			if (transnum >= (sizeof(keytrans)/sizeof(keytrans[0]))) {
				Usage("translation table limit exceeded (%d)", transnum);
			}
			keytrans[transnum++] = optarg;
			break;
		case 1004:  // --export <file>
			exportfile = optarg;
			break;
		case 1005:  // --auto
			automode = 0;
			break;
		case 'V':
			Version();
		case 1000:
		case '?':
			Usage(NULL);
		}
	argv += optind;
	if ((argc -= optind) > 0) {
		Usage("unexpected argument(s) <%s ...>", argv[0]);
	}

	(void) tsm_screen_new(&screen, NULL, NULL);
	(void) tsm_vte_new(&vte, screen, write_cb, &iobuf, NULL, NULL);
	(void) tsm_vte_keypad_application_mode(vte, keypadmode);
	for (i = 0; i < transnum; ++i) {	// push translation table(s)
		parse_keytrans(keytrans[i]);
	}

	console = GetStdHandle(STD_INPUT_HANDLE);
	oconsole = GetStdHandle(STD_OUTPUT_HANDLE);

	if (! GetConsoleMode(console, &consolemode) ||
		    ! GetConsoleMode(oconsole, &oconsolemode)) {
		Usage("console expected");
	}

	SetConsoleMode(console, ENABLE_WINDOW_INPUT);
	SetConsoleMode(oconsole, oconsolemode | \
		ENABLE_VIRTUAL_TERMINAL_PROCESSING | DISABLE_NEWLINE_AUTO_RETURN);
	SetConsoleCtrlHandler(HandlerRoutine, TRUE);

	ConsoleClear(oconsole);			// prime display
	KeyboardStatus(oconsole, vkstatus);
	if (automode < 0) printf("Press <ESC> consecutively 3 times to exit.\n");

	while (! ctrl_break && esc < 3) {	// foreach(key)
		const KEY_EVENT_RECORD *key = &ir.Event.KeyEvent;
		termemu_event_t evt = {0};
		int cio = 1;

		if (automode >= 0) {		// auto-generate key sequences
			if (-1 == (automode = termemu_cio_keyauto(automode, &ir, &evt))) {
				break;		// complete
			}
		} else {
			if (WAIT_OBJECT_0 != WaitForSingleObject(console, -1) || ctrl_break ||
				    0 == ReadConsoleInput(console, &ir, 1, &count) || ctrl_break) {
				break;		// eof or Ctrl-Break
			}

			if (WINDOW_BUFFER_SIZE_EVENT == ir.EventType) {
				ConsoleClear(oconsole);
				KeyboardStatus(oconsole, vkstatus);
				continue;
			} else if (!count || ir.EventType != KEY_EVENT || !key->bKeyDown) {
				continue;	// ignore non-key down events
			}

			cio = termemu_cio_keyevent(key, &evt);
		}

		KeyboardPush(oconsole, vkstatus, &evt);
		esc = (0x1b == key->uChar.AsciiChar ? esc + 1 : 0);

		// raw KEY_EVENT data
		if (automode >= 0) printf("AUTO:%d\n", automode);
		printf_modifiers(key->dwControlKeyState);
		if (key->uChar.AsciiChar >= 0x20 && key->uChar.AsciiChar <= 0x7f /*isprint*/) {
			printf("VK:%u/0x%x SCAN:0x%04x Ascii(0x%x/%c)",
			    key->wVirtualKeyCode, key->wVirtualKeyCode, key->wVirtualScanCode, key->uChar.AsciiChar, key->uChar.AsciiChar);
		} else {
			printf("VK:%u/0x%x SCAN:0x%04x Unicode(0x%x)",
			    key->wVirtualKeyCode, key->wVirtualKeyCode, key->wVirtualScanCode, key->uChar.UnicodeChar);
		}
		ConsoleClearEOL(oconsole);

		// decode KEY_EVENT
		if (cio) {
			printf("\n => VK(%u) XKB(%u,%s) ASCII(0x%x/%c)",
			    evt.vkkey, evt.xkbkey, (evt.xkbname ? evt.xkbname : "XKB_KEY_NoSymbol"),
				evt.ascii, (evt.ascii >= 0x20 && evt.ascii <= 0x7f ? evt.ascii : ' '));
			if (evt.unicode != TSM_VTE_INVALID)
				printf(" UNICODE(U+%0*u)", (evt.unicode & 0xff0000 ? 6 : 4), (unsigned)evt.unicode);
			ConsoleClearEOL(oconsole);
				iobuf.length = 0;
			if (tsm_vte_handle_keyboard(vte, evt.xkbkey, evt.ascii, evt.modifiers, evt.unicode)) {
				iobuf.text[iobuf.length] = 0;
				printf("\n => "); translation(&evt, iobuf.text);
			}
			Verify(&evt);
		} else {
			printf("\n => <dead>");
		}
		ConsoleClearEOL(oconsole);
		printf("\n\n");
	}

	SetConsoleMode(oconsole, oconsolemode);
	SetConsoleMode(console, consolemode);

	if (exportfile) {
		KeyboardExport(exportfile);
	}
	return 0;
}


static void
Verify(const termemu_event_t *evt)
{
#if defined(_DEBUG)	// Verify KeySymbol support functions
	if (evt->xkbkey) {
		const char *str = termemu_keysym_tostr(evt->xkbkey);
		unsigned num = termemu_keysym_tonum(evt->xkbname);
		const char *strs[10] = {0};
		int cnt = 1;

		assert(str);
		assert(0 == strcmp(evt->xkbname, str + 4 /*KEY_*/));
			// KeySymbols are *not* unique, as such only the first symbol name is matched for example
			//	'Prior', 'Page_Up' abd 'SunPageUp'; yet currently cio events should reference the
			//	primary/first symbol and it this case 'Prior'.
		cnt += ((evt->xkbkey == XKB_KEY_Prior || evt->xkbkey == XKB_KEY_Page_Up) ? 2 : 0);
		assert(termemu_keysym_tostrs(evt->xkbkey, strs, sizeof(strs)/sizeof(strs[0])) >= cnt);
		assert(num);
		assert(num == evt->xkbkey);
	}

	if (evt->unicode != TSM_VTE_INVALID) {
		unsigned ks = termemu_keysym_fromuc(evt->unicode);
		assert(ks != XKB_KEY_NoSymbol);
	}
#endif	//_DEBUG
}


/*
 * KeyboardExport ---
 *	Export the recorded keyevents.
 **/
static int
sort_events(const void *a, const void *b)
{
	const termemu_event_t *ea = &(((const struct record *)a)->evt);
	const termemu_event_t *eb = &(((const struct record *)b)->evt);

	if (ea->modifiers != eb->modifiers) {
		if (ea->modifiers > eb->modifiers) return -1;
		return 1;
	}
	return (((const struct record *)a)->key - ((const struct record *)b)->key);
}


static void
KeyboardExport(const char *out)
{
	FILE *f;

	if (0 == recorded) return;

	qsort(events, recorded, sizeof(events[0]), sort_events);
	if (NULL == (f = fopen(out, "w"))) {
		printf("opening <%s> : %s (%d)", out, strerror(errno), errno);
	} else {
		unsigned r;

		fprintf(f, "! exported keymap\n");
		fprintf(f, "xterm.VT100.translations: #override \\n\\\n");
		for (r = 0; r < recorded; ++r) {
			if (r) {
				if (0 == strcmp(events[r].str, events[r-1].str))
					continue; //dup; ignore
				fprintf(f, " \\n\\\n");
			}
			fprintf(f, "%s", events[r].str);
		}
		fprintf(f, "\n");
		fclose(f);
	}
}


/*
 * KeyboardPush ---
 *	Push the event status into the keyboard-status buffer.
 **/
static void
KeyboardPush(HANDLE console, BYTE *status, const termemu_event_t *evt)
{
	const unsigned vkkey =
		(evt->ascii ? (evt->ascii < 0x7f ? tolower(evt->ascii) : evt->ascii)
			: ((evt->vkkeyalt ? evt->vkkeyalt : evt->vkkey) + (evt->vkenhanced ? 0x1ff : 0xff)));
	const unsigned modifiers = evt->modifiers;

	if (vkkey) {
		status[vkkey] |= VKS_PRESS|VKS_DONE;

		status[VK_CAPITAL+0xff]  = GetKeyState(VK_CAPITAL)?VKS_ON:0;
		status[VK_SCROLL+0xff]   = GetKeyState(VK_SCROLL) ?VKS_ON:0;
		status[VK_NUMLOCK+0xff]  = GetKeyState(VK_NUMLOCK)?VKS_ON:0;
		status[VK_APPS+0xff]     = GetKeyState(VK_APPS)   ?VKS_ON:0;
		status[VK_LSHIFT+0xff]   = 0;
		status[VK_RSHIFT+0xff]   = 0;
		status[VK_LCONTROL+0xff] = 0;
		status[VK_RCONTROL+0xff] = 0;
		status[VK_MENU+0xff]     = 0;
		status[VK_MENU+0x1ff]    = 0;

		switch(vkkey) {
		case VK_CAPITAL	+0x0ff:
		case VK_SCROLL	+0x0ff:
		case VK_NUMLOCK	+0x0ff:
		case VK_APPS	+0x0ff:
		case VK_LSHIFT	+0x0ff:
		case VK_RSHIFT	+0x0ff:
		case VK_LCONTROL+0x0ff:
		case VK_RCONTROL+0x0ff:
		case VK_MENU	+0x0ff:
		case VK_MENU	+0x1ff:
			status[vkkey] = VKS_PRESS;
			break;
		default:
			if (modifiers & TSM_SHIFT_MASK) {
				status[VK_SHIFT+0xff] = VKS_ON;
				status[vkkey] |= VKS_SHIFT;
			}
			if (modifiers & TSM_CONTROL_MASK) {
				status[VK_CONTROL+0xff] = VKS_ON;
				status[vkkey] |= VKS_CTRL;
			}
			if (modifiers & TSM_ALT_MASK) {
				status[VK_MENU+0xff] = VKS_ON;
				status[vkkey] |= VKS_ALT;
			}
			if (modifiers & TSM_LOGO_MASK) {
				status[VK_APPS+0xff] = VKS_ON;
				status[vkkey] |= VKS_APPS;
			}
			break;
		}
	}
	KeyboardStatus(console, status);
}


/*
 * KeyboardStatus ---
 *	Echo the current keyboard status.
 **/
static void
KeyboardStatus(HANDLE console, BYTE *status)
{
	struct row {
		int vk;
		const wchar_t *name;
	};

#define __V(__v)    __v			    // Concat helper
#define VK(__k)	    (__V(VK_ ## __k)+0xff)  // VK_xxx
#define EK(__k)	    (__V(VK_ ## __k)+0x1ff) // Enhanced VK_xxx
#define NK()	    (0xfff)		    // NUL key
#define AS(__c)	    (__c)		    // ASCII

	static const struct row row1[] = {
		{VK(ESCAPE),L"ESC"},{VK(F1),L"F1"}, {VK(F2),L"F2"},{VK(F3),L"F3"},{VK(F4),L"F4"},{VK(F5),L"F5"},{VK(F6),L"F6"},{VK(F7),L"F7"},
		    {VK(F8),L"F8"},{VK(F9),L"F9"},{VK(F10),L"F10"},{VK(F11),L"F11"},{VK(F11),L"F12"},{VK(PRINT),L"PRT"},{VK(SCROLL),L"SLk"},{0}};
	static const struct row row2[] = {
		{223,L"¬"},{'1'},{'2'},{'3'},{'4'},{'5'},{'6'},{'7'},{'8'},
		    {'9'},{'-'},{'='},{VK(BACK),L"Bck"},{EK(HOME),L"Hom"},{EK(PRIOR),L"PgU"},
		    {VK(NUMLOCK),L"Num"},{EK(DIVIDE),L"/"},{VK(MULTIPLY),L"*"},{VK(SUBTRACT),L"-"},
		    {0}};
	static const struct row row3[] = {
		{VK(TAB),L"Tab"},{'q'},{'w'},{'e'},{'t'},{'y'},{'u'},{'i'},{'o'},
		    {'p'},{'['},{']'},{VK(RETURN),L"CR"},{EK(END),L"End"},{EK(NEXT),L"PgD"},
		    {VK(NUMPAD7),L"7"},{VK(NUMPAD8),L"8"},{VK(NUMPAD9),L"9"},{VK(ADD),L"+"},
		    {0}};
	static const struct row row4[] = {
		{VK(CAPITAL),L"Cap"},{'a'},{'s'},{'d'},{'f'},{'g'},{'h'},{'j'},{'k'},
		    {'l'},{';'},{'\''},{-1},{EK(INSERT),L"Ins"},{EK(PAUSE),L"Brk"},
		    {VK(NUMPAD4),L"4"},{VK(NUMPAD5),L"5"},{VK(NUMPAD6),L"6"},{-1},
		    {0}};
	static const struct row row5[] = {
		{VK(LSHIFT),L"LSH"},{'\\'},{'z'},{'x'},{'c'},{'v'},{'b'},{'n'},{'m'},
		    {','},{'.'},{'/'},{VK(RSHIFT),L"RSH"},{EK(UP),L"\u25B2"},{EK(DELETE),L"Del"},
		    {VK(NUMPAD1),L"1"},{VK(NUMPAD2),L"2"},{VK(NUMPAD3),L"3"},{EK(RETURN),L"CR"},
		    {0}};
	static const struct row row6[] = {
		{VK(CONTROL),L"LC"},{NK()},{VK(MENU),L"Alt"},{' ',L"               <SPACE>                "},
		    {EK(MENU),L"AGr"},{VK(APPS),L"\u2261"},{EK(CONTROL),L"RC"},{EK(LEFT),L"\u25C4"},{EK(DOWN),L"\u25BC"},{EK(RIGHT),L"\u25BA"},
		    {VK(NUMPAD0),L" 0  <INS> "},{VK(DECIMAL),L"."},
		    {0}};
	static const struct row *rows[] =
		{ row1, row2, row3, row4, row5, row6, NULL };

	unsigned r, c;
	COORD coord = {0, 1};

	for (r = 0; rows[r]; ++r) {
		const struct row *row = rows[r];
		for (c = 0; row->vk; ++row) {
			coord.X = c + 1; SetConsoleCursorPosition(console, coord);
			c += KeyboardKey(console, row->vk, row->name, status);
		}
		coord.Y += 2;
	}
	coord.X = 0;
	SetConsoleCursorPosition(console, coord);
}


/*
 * KeyboardKey ---
 *	Echo the specified key status.
 **/
static int
KeyboardKey(HANDLE console, int vk, const wchar_t *name, BYTE *status)
{
	WCHAR wbuf[128];
	DWORD written;

	if (vk > 0 && vk < 0x2ff) {
		const wchar_t t_name[4] = {' ',(wchar_t)vk, ' ',0};
		const WORD vkstatus = status[vk];
		DWORD len1, len2;

		SetConsoleTextAttribute(console, FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY|
			((vkstatus & VKS_PRESS)  ? BACKGROUND_GREEN :
			  ((vkstatus & VKS_DONE) ? BACKGROUND_RED   :
			   ((vkstatus & VKS_ON)  ? BACKGROUND_BLUE  : BACKGROUND_INTENSITY))));
		if (vkstatus & VKS_PRESS) status[vk] &= ~VKS_PRESS;
		len1 = wsprintfW(wbuf, L"%3s", (name ? name : t_name));
		WriteConsoleW(console, wbuf, len1, &written, NULL);

		len2 = wsprintfW(wbuf, L"%c%c%c",
		    (vkstatus & VKS_SHIFT) ? 'S' : ' ', (vkstatus & VKS_CTRL) ? 'C' : ' ',  (vkstatus & VKS_ALT) ? 'A' : ' ');
		SetConsoleTextAttribute(console,
		    FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
		WriteConsoleW(console, wbuf, len2, &written, NULL);
		return len1 + len2 + 1;
	}
	return 7;
}


/*
 * ConsoleClear ---
 *	Clear the console.
 **/
static void
ConsoleClear(HANDLE console)
{
	COORD coord = {0,0};
	CONSOLE_SCREEN_BUFFER_INFO csbi = {0,0};
	DWORD dwConSize;
	DWORD cCharsWritten;

	GetConsoleScreenBufferInfo(console, &csbi);
	dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
	FillConsoleOutputCharacterA(console, ' ', dwConSize, coord, &cCharsWritten);
	FillConsoleOutputAttribute(console, csbi.wAttributes, dwConSize, coord, &cCharsWritten);
	SetConsoleCursorPosition(console, coord);
}


/*
 * ConsoleClearEOL ---
 *	Clear to End-Of-Line.
 **/
static void
ConsoleClearEOL(HANDLE console)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi = {0,0};
	DWORD dwConSize;
	DWORD cCharsWritten;

	GetConsoleScreenBufferInfo(console, &csbi);
	dwConSize = csbi.dwSize.X - csbi.dwCursorPosition.X;
	FillConsoleOutputCharacterA(console, ' ', dwConSize, csbi.dwCursorPosition, &cCharsWritten);
	FillConsoleOutputAttribute(console, csbi.wAttributes, dwConSize, csbi.dwCursorPosition, &cCharsWritten);
}


/*
 * Usage ---
 *      Command line usage.
 **/
static void
Usage(const char *msg, ...)
{
	if (msg) {
		va_list ap;
		va_start(ap, msg);
		printf("emukb: "); vprintf(msg, ap); printf("\n\n");
		va_end(ap);
	}

	printf("emukb - keyboard encode test application\n" \
	    "\n" \
	    "usage: termemukb [--app|--num] [-k keytrans ...]\n" \
	    "\n" \
	    " options:\n" \
	    "    -a,--app    Keypad in application mode.\n" \
	    "    -n,--num    Keypad in numeric mode (default).\n" \
	    "    -k <trans>  Key translation resources.\n" \
	    "\n");
	exit(3);
	/*NOTREACHED*/
}


/*
 * version ---
 *      Application build information.
 **/
static void
Version(void)
{
	printf("emukb - keyboard encode test application\n");
	exit(3);
	/*NOTREACHED*/
}


/*
 * HandlerRoutine ---
 *      Console event/signal handler.
 **/
static BOOL WINAPI
HandlerRoutine(DWORD dwCtrlType)
{
	switch(dwCtrlType) {
        case 3: // 3 is reserved!
        case 4: // 4 is reserved!
		assert(false);
		break;
	case CTRL_BREAK_EVENT: // Ctrl-Break
		++ctrl_break;			// exit main-loop
		SetEvent(GetStdHandle(STD_INPUT_HANDLE));
		return TRUE;
	}
	return FALSE;
}


/*
 * parse_keytrans ---
 *      Parse the stated <keysymb> translation table.
 **/
static int
parse_keytrans(const char *keysyms)
{
	struct stat sb = {0};
	int fd, ret = -1;

	if (!keysyms || !*keysyms)
		return -1;			// invalid argument

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
				if (NULL == keymap) keymap = termemu_keymap_new("");
				ret = termemu_keymap_parse(keymap, source, sb.st_size, keysyms);
				munmap((void *)source, sb.st_size);
			}
		}
		close(fd);
	}
	return ret;
}


static void
printf_modifiers(const DWORD dwControlKeyState)
{
	unsigned modifiers = 0;
	if (GetKeyState(VK_APPS)) {		// hamburger key
		printf("%sApps", (modifiers++ ? "-" : ""));
	}
	if (dwControlKeyState & (ENHANCED_KEY)) {
		printf("%sEnhanced", (modifiers++ ? "-" : ""));
	}
	if (dwControlKeyState & (NUMLOCK_ON)) {
		printf("%sLock", (modifiers++ ? "-" : ""));
	}
	if (dwControlKeyState & (SHIFT_PRESSED)) {
		printf("%sShift", (modifiers++ ? "-" : ""));
	}
	if (dwControlKeyState & (LEFT_CTRL_PRESSED | RIGHT_CTRL_PRESSED)) {
		printf("%sCtrl", (modifiers++ ? "-" : ""));
	}
	if (dwControlKeyState & (LEFT_ALT_PRESSED | RIGHT_ALT_PRESSED)) {
		printf("%sAlt", (modifiers++ ? "-" : ""));
	}
	printf("%s", (modifiers ? "-" : ""));
}


static void
write_cb(struct tsm_vte *vte, const char *u8, size_t len, void *data)
{
	struct iobuf *iobuf = (struct iobuf *)data;
	memcpy(iobuf->text + iobuf->length, u8, len);
	iobuf->length += len;
}


static void
translation(const termemu_event_t *evt, const unsigned char *esc)
{
	char text[80], *cursor = text;
	const char *name;
	int key = 0;

	// modifiers
	if (evt->modifiers) {
		unsigned modifiers = 0;

		//cursor += sprintf(cursor, "!");
		if (evt->modifiers & TSM_LOGO_MASK   ) cursor += sprintf(cursor, "%sLogo",  (modifiers++ ? " " : ""));
		if (evt->modifiers & TSM_SHIFT_MASK  ) cursor += sprintf(cursor, "%sShift", (modifiers++ ? " " : ""));
		if (evt->modifiers & TSM_ALT_MASK    ) cursor += sprintf(cursor, "%sAlt",   (modifiers++ ? " " : ""));
		if (evt->modifiers & TSM_CONTROL_MASK) cursor += sprintf(cursor, "%sCtrl",  (modifiers++ ? " " : ""));
	} else {
		//cursor += sprintf(cursor, "None");
	}

	// event
	cursor += sprintf(cursor, "<Key>");
	if (evt->xkbname) {		    // resolved key-symbol.
		cursor += sprintf(cursor, "%s", evt->xkbname);
		key = 0x01000000 | evt->vkkey;

	} else if (evt->ascii && NULL != (name = latin1name(evt->ascii))) {
		cursor += sprintf(cursor, "%s", name); // latin1 key-symbol.
		key = 0x02000000 | evt->ascii;

	} else if (evt->ascii >= 0x20 && evt->ascii <= 0x7f /*isprint*/) {
		cursor += sprintf(cursor, "%c", evt->ascii); // value; unshifted see cio decoder.
		key = 0x04000000 | evt->ascii;

	} else if (evt->unicode != TSM_VTE_INVALID) {
		cursor += sprintf(cursor, "0x%u", evt->unicode); // unicode.
		key = 0x08000000 | evt->unicode;
	}

	// action
	cursor += sprintf(cursor, " : string(\"");
	while (*esc) {
		const unsigned ch = *esc++;
		if (ch < ' ') cursor += sprintf(cursor, "\\%03o", ch);
		else if (ch == '"')  cursor += sprintf(cursor, "\\\"");
		else if (ch == '\\') cursor += sprintf(cursor, "%s", *esc ? "\\" : "\\\\");
		else cursor += sprintf(cursor, "%c", ch);
	}
	cursor += sprintf(cursor, "\")");
	assert(cursor < (text + sizeof(text)));
	printf("%s", text);

	// record event
	if (key && recorded < (sizeof(events)/sizeof(events[0]))) {
		events[recorded].evt = *evt;
		events[recorded].str = strdup(text);
		events[recorded].key = key; // psuedo key identifer.
		++recorded;
	}
}


static const char *
latin1name(unsigned value)
{
	switch (value) {
	    // controls

	case 0x20: return "space";		// !   !
	case 0x21: return "exclam";		// ! ! !
	case 0x22: return "quotedbl";		// ! " !
	case 0x23: return "numbersign"; 	// ! # !
	case 0x24: return "dollar";		// ! $ !
	case 0x25: return "percent";		// ! % !
	case 0x26: return "ampersand";		// ! & !
	case 0x27: return "apostrophe"; 	// ! \ !
	case 0x28: return "parenleft";		// ! ( !
	case 0x29: return "parenright"; 	// ! ) !
	case 0x2a: return "asterisk";		// ! * !
	case 0x2b: return "plus";		// ! + !
	case 0x2c: return "comma";		// ! , !
	case 0x2d: return "minus";		// ! - !
	case 0x2e: return "period";		// ! . !
	case 0x2f: return "slash";		// ! / !
	    // 0 .. 9
	case 0x3a: return "colon";		// ! : !
	case 0x3b: return "semicolon";		// ! ; !
	case 0x3c: return "less ";		// ! < !
	case 0x3d: return "equal";		// ! = !
	case 0x3e: return "greater";		// ! > !
	case 0x3f: return "question";		// ! ? !
	case 0x40: return "at"; 		// ! @ !
	    // A .. Z
	case 0x5b: return "bracketleft";	// ! [ !
	case 0x5c: return "backslash";		// ! \ !
	case 0x5d: return "bracketright";	// ! ] !
	case 0x5e: return "asciicircum";	// ! ^ !
	case 0x5f: return "underscore"; 	// ! _ !
	    // a .. z
	case 0x60: return "grave";		// ! ` !
	case 0x7b: return "braceleft";		// ! { !
	case 0x7c: return "bar";		// ! | !
	case 0x7d: return "braceright"; 	// ! } !
	case 0x7e: return "asciitilde"; 	// ! ~ !
	    // controls

	    // Latin1
	case 0xa0: return "nobreakspace";	// !   !
	case 0xa1: return "exclamdown"; 	// ! ¡ !
	case 0xa2: return "cent";		// ! ¢ !
	case 0xa3: return "sterling";		// ! £ !
	case 0xa4: return "currency";		// ! ¤ !
	case 0xa5: return "yen";		// ! ¥ !
	case 0xa6: return "brokenbar";		// ! ¦ !
	case 0xa7: return "section";		// ! § !
	case 0xa8: return "diaeresis";		// ! ¨ !
	case 0xa9: return "copyright";		// ! © !
	case 0xaa: return "ordfeminine";	// ! ª !
	case 0xab: return "guillemotleft";	// ! « !
	case 0xac: return "notsign";		// ! ¬ !
	case 0xad: return "hyphen";		// ! ­ !
	case 0xae: return "registered"; 	// ! ® !
	case 0xaf: return "macron";		// ! ¯ !
	case 0xb0: return "degree";		// ! ° !
	case 0xb1: return "plusminus";		// ! ± !
	case 0xb2: return "twosuperior";	// ! ² !
	case 0xb3: return "threesuperior";	// ! ³ !
	case 0xb4: return "acute";		// ! ´ !
	case 0xb5: return "mu"; 		// ! µ !
	case 0xb6: return "paragraph";		// ! ¶ !
	case 0xb7: return "periodcentere";	// ! · !
	case 0xb8: return "cedilla";		// ! ç !
	case 0xb9: return "onesuperior";	// ! ¹ !
	case 0xba: return "masculine";		// ! º !
	case 0xbb: return "guillemotrigh";	// ! » !
	case 0xbc: return "onequarter"; 	// ! ¼ !
	case 0xbd: return "onehalf";		// ! ½ !
	case 0xbe: return "threequarters";	// ! ¾ !
	case 0xbf: return "questiondown";	// ! ¿ !
	case 0xc0: return "Agrave";		// ! À !
	case 0xc1: return "Aacute";		// ! Á !
	case 0xc2: return "Acircumflex";	// ! Â !
	case 0xc3: return "Atilde";		// ! Ã !
	case 0xc4: return "Adiaeresis"; 	// ! Ä !
	case 0xc5: return "Aring";		// ! Å !
	case 0xc6: return "AE"; 		// ! Æ !
	case 0xc7: return "Ccedilla";		// ! Ç !
	case 0xc8: return "Egrave";		// ! È !
	case 0xc9: return "Eacute";		// ! É !
	case 0xca: return "Ecircumflex";	// ! Ê !
	case 0xcb: return "Ediaeresis"; 	// ! Ë !
	case 0xcc: return "Igrave";		// ! Ì !
	case 0xcd: return "Iacute";		// ! Í !
	case 0xce: return "Icircumflex";	// ! Î !
	case 0xcf: return "Idiaeresis"; 	// ! Ï !
	case 0xd0: return "ETH";		// ! Ð !
	case 0xd1: return "Ntilde";		// ! Ñ !
	case 0xd2: return "Ograve";		// ! Ò !
	case 0xd3: return "Oacute";		// ! Ó !
	case 0xd4: return "Ocircumflex";	// ! Ô !
	case 0xd5: return "Otilde";		// ! Õ !
	case 0xd6: return "Odiaeresis"; 	// ! Ö !
	case 0xd7: return "multiply";		// ! × !
	case 0xd8: return "Ooblique";		// ! Ø !
	case 0xd9: return "Ugrave";		// ! Ù !
	case 0xda: return "Uacute";		// ! Ú !
	case 0xdb: return "Ucircumflex";	// ! Û !
	case 0xdc: return "Udiaeresis"; 	// ! Ü !
	case 0xdd: return "Yacute";		// ! Ý !
	case 0xde: return "THORN";		// ! Þ !
	case 0xdf: return "ssharp";		// ! ß !
	case 0xe0: return "agrave";		// ! à !
	case 0xe1: return "aacute";		// ! á !
	case 0xe2: return "acircumflex";	// ! â !
	case 0xe3: return "atilde";		// ! ã !
	case 0xe4: return "adiaeresis"; 	// ! ä !
	case 0xe5: return "aring";		// ! å !
	case 0xe6: return "ae"; 		// ! æ !
	case 0xe7: return "ccedilla";		// ! ç !
	case 0xe8: return "egrave";		// ! è !
	case 0xe9: return "eacute";		// ! é !
	case 0xea: return "ecircumflex";	// ! ê !
	case 0xeb: return "ediaeresis"; 	// ! ë !
	case 0xec: return "igrave";		// ! ì !
	case 0xed: return "iacute";		// ! í !
	case 0xee: return "icircumflex";	// ! î !
	case 0xef: return "idiaeresis"; 	// ! ï !
	case 0xf0: return "eth";		// ! ð !
	case 0xf1: return "ntilde";		// ! ñ !
	case 0xf2: return "ograve";		// ! ò !
	case 0xf3: return "oacute";		// ! ó !
	case 0xf4: return "ocircumflex";	// ! ô !
	case 0xf5: return "otilde";		// ! õ !
	case 0xf6: return "odiaeresis"; 	// ! ö !
	case 0xf7: return "division";		// ! ÷ !
	case 0xf8: return "oslash";		// ! ø !
	case 0xf9: return "ugrave";		// ! ù !
	case 0xfa: return "uacute";		// ! ú !
	case 0xfb: return "ucircumflex";	// ! û !
	case 0xfc: return "udiaeresis"; 	// ! ü !
	case 0xfd: return "yacute";		// ! ý !
	case 0xfe: return "thorn";		// ! þ !
	case 0xff: return "ydiaeresis"; 	// !   !
	}
	return NULL;
}

/*end*/
