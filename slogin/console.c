/* -*- mode: c; indent-width: 4; -*- */
/*
 * slogin console support.
 *
 * Copyright (c) 2015 - 2025, Adam Young.
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

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <alloca.h>

#include "console.h"

#if defined(__WATCOMC__)
#define _putch(__c)	putch(__c)
#endif

static HANDLE		hOutputConsole = INVALID_HANDLE_VALUE;
static HANDLE		hInputConsole = INVALID_HANDLE_VALUE;

static char		cmdbuffer[4 * 1024];
static DWORD		cmdlen;


HANDLE
console_stdout()
{
	SECURITY_ATTRIBUTES sa = {0};

	if (hOutputConsole != INVALID_HANDLE_VALUE)
		return hOutputConsole;

	sa.nLength = sizeof(SECURITY_ATTRIBUTES);
	sa.lpSecurityDescriptor = NULL;
	sa.bInheritHandle = TRUE;

	hOutputConsole = CreateFileA("CONOUT$", GENERIC_READ | GENERIC_WRITE,
			    FILE_SHARE_WRITE | FILE_SHARE_READ, &sa, OPEN_EXISTING, 0, NULL);
	return hOutputConsole;
}


HANDLE
console_stdin()
{
	SECURITY_ATTRIBUTES sa = {0};

	if (hInputConsole != INVALID_HANDLE_VALUE)
		return hInputConsole;

	sa.nLength = sizeof(SECURITY_ATTRIBUTES);
	sa.lpSecurityDescriptor = NULL;
	sa.bInheritHandle = TRUE;

	hInputConsole = CreateFileA("CONIN$", GENERIC_READ | GENERIC_WRITE,
			    FILE_SHARE_WRITE | FILE_SHARE_READ, &sa, OPEN_EXISTING, 0, NULL);
	return hInputConsole;
}


int
console_width(void)
{
	int width = 0;
	CONSOLE_SCREEN_BUFFER_INFO scr = {0};
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &scr);
	width = (scr.srWindow.Right - scr.srWindow.Left) + 1;
	return width;
}


BOOL
console_raw_input(HANDLE hConsole, DWORD *old_console_mode)
{
#define RAW_INPUT_MASK \
		ENABLE_ECHO_INPUT|ENABLE_LINE_INPUT|\
		ENABLE_MOUSE_INPUT|ENABLE_PROCESSED_INPUT|ENABLE_WINDOW_INPUT

	DWORD t_console_mode = 0;
	if (GetConsoleMode(hConsole, &t_console_mode) &&
	    SetConsoleMode(hConsole, (t_console_mode & ~(RAW_INPUT_MASK)))) {
		*old_console_mode = t_console_mode;
		return TRUE;
	}
	return FALSE;
}


int
console_printf(const char *fmt, ...)
{
	int buflen, ret;
        char *buffer;
	va_list ap;

        if (NULL == fmt)
                return -1;

	va_start(ap, fmt);
	buflen = vsnprintf(NULL, 0, fmt, ap);
	va_end(ap);

        if (NULL == (buffer = alloca(buflen + 1)))
                return -1;
	va_start(ap, fmt);
	ret = vsnprintf(buffer, buflen + 1, fmt, ap);
	ret = console_write(buffer, ret);
	va_end(ap);

        return ret;
}


BOOL
console_write(const char *buffer, unsigned buflen)
{
	HANDLE hStdOut = console_stdout();
        DWORD count = 0;

        if (INVALID_HANDLE_VALUE == hStdOut)
                return FALSE;

        while (buflen && WriteConsoleA(hStdOut, buffer, buflen, &count, NULL)) {
                buffer += count;
                buflen -= count;
        }
        return TRUE;
}


DWORD
console_prompt(BOOL echo, const char *msg, char *buffer, DWORD buffer_size)
{
	HANDLE hStdOut = console_stdout(), hStdIn = console_stdin();
	DWORD console_mode, count;

	char *cursor = buffer, *end = cursor + buffer_size;
	char ch;

	buffer[0] = 0;
	if (INVALID_HANDLE_VALUE == hStdOut || INVALID_HANDLE_VALUE == hStdIn) {
	    	WriteFile(GetStdHandle(STD_OUTPUT_HANDLE), msg, (DWORD)strlen(msg), &count, NULL);
		return 0;                       // console attached.
	}

	if (msg) {
		if (! WriteConsoleA(hStdOut, msg, (DWORD)strlen(msg), &count, NULL)) {
                        return 0;               // not a console?
                }
	}

	console_raw_input(hStdIn, &console_mode);
	for (;;) {
		if (! ReadConsoleA(hStdIn, &ch, 1, &count, NULL)) {
			break;
		}

		if (ch == 3) {                  // ctrl-c; abort
			WriteConsoleA(hStdOut, "\a", 1, &count, NULL);
			cursor = buffer;
			break;

		} else if (ch == '\b') {        // delete/backspace
			if (cursor > buffer) {
				if (echo) WriteConsoleA(hStdOut, "\b \b", 3, &count, NULL);
				cursor--;
			}

		} else if (ch == '\r') {        // carriage return; complete
			break;

		} else if (ch > 0x1b && ch < 255) {
			if (cursor < end) {     // ascii
				if (echo) WriteConsoleA(hStdOut, &ch, 1, &count, NULL);
				*cursor++ = (char)ch;
			} else {
				WriteConsoleA(hStdOut, "\a", 1, &count, NULL);
			}
		}
	}
	*cursor = 0;

	WriteConsoleA(hStdOut, "\r\n", 2, &count, NULL);
	SetConsoleMode(hStdIn, console_mode);
	return (DWORD)(cursor - buffer);
}


DWORD
console_getln(HANDLE hConsole, BOOL line_buffer, BOOL blocking, char *buffer, DWORD buffer_size)
{
	DWORD count, written = 0, input_events = 0;
	INPUT_RECORD k = {0};
	DWORD events = 0;

	if (! blocking) { // determine event count
		if (! GetNumberOfConsoleInputEvents(hConsole, &input_events)) {
			input_events = 0;
		}
	}

	while ((blocking || input_events--) &&
		    ReadConsoleInputA(hConsole, &k, 1, &events) && events) {
		const KEY_EVENT_RECORD *key = &k.Event.KeyEvent;
		int ch;

		events = 0;
		if (KEY_EVENT != k.EventType || !key->bKeyDown)
			continue;

		if (0 != (ch = key->uChar.AsciiChar)) {
			if (line_buffer) {
				if (3 == ch) { // ctrl-c; abort
					cmdlen = 0;
				} else if ('\b' == ch) { // delete/backspace
					if (cmdlen) {
						WriteConsoleA(hConsole, "\b \b", 3, &count, NULL);
						--cmdlen;
					}

				} else if (cmdlen < (sizeof(cmdbuffer)-2)) { // append
					WriteConsoleA(hConsole, &ch, 1, &count, NULL);
					cmdbuffer[cmdlen++] = ch;

				} else { // overflow
					WriteConsoleA(hConsole, "\a", 1, &count, NULL);
				}
				++written;

			} else {
				buffer[written] = ch;
				if (++written == buffer_size) {
					break;
				}
			}

			if (blocking) { // first key, consume remaining non-blocking
				if (! GetNumberOfConsoleInputEvents(hConsole, &input_events)) {
					input_events = 0;
				}
				blocking = FALSE;
			}
		}
	}

	if (written) {
		if (! line_buffer) {
			return written;
		}

		if (cmdlen && (cmdbuffer[cmdlen-1] == '\r' || cmdbuffer[cmdlen-1] == '\n')) {
			while (cmdlen && // trim trailing delimiters
				    (cmdbuffer[cmdlen-1] == '\r' || cmdbuffer[cmdlen-1] == '\n')) {
				--cmdlen;
			}

			cmdbuffer[cmdlen++] = '\r';
			cmdbuffer[cmdlen++] = '\n';
			cmdbuffer[cmdlen] = 0;

			written = (cmdlen <= buffer_size ? cmdlen : buffer_size);
			memcpy(buffer, cmdbuffer, cmdlen);
			cmdlen = 0;

			return written;
		}
	}
	return 0;
}

/*end*/
