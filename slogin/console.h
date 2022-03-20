/* -*- mode: c; indent-width: 4; -*- */
/*
  * slogin console support.
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

#include <sys/cdefs.h>
#include <stdarg.h>

#include <Windows.h>

__BEGIN_DECLS

HANDLE      console_stdout(void);
HANDLE      console_stdin(void);

int         console_width(void);
BOOL        console_raw_input(HANDLE hConsole, DWORD *old_console_mode);

int         console_printf(const char *fmt, ...);
BOOL        console_write(const char *buffer, unsigned buflen);

DWORD       console_prompt(BOOL echo, const char *msg, char *buffer, DWORD buffer_size);
DWORD       console_getln(HANDLE hConsole, BOOL line_buffer, BOOL blocking, char *buffer, DWORD buffer_size);

__END_DECLS
