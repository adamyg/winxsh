#ifndef TERMEMU_TSM_H_INCLUDED
#define TERMEMU_TSM_H_INCLUDED
#include <edidentifier.h>
__CIDENT_RCSID(termemu_tsm_h,"$Id: termemu_tsm.h,v 1.7 2020/04/29 11:54:23 cvsuser Exp $")
__CPRAGMA_ONCE

/* -*- mode: c; indent-width: 4; -*- */
/*
 * libtermemu terminal driver
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

__BEGIN_DECLS

#define LIBTSM_VERSION      "1.3.0b"

extern int                  termemu_init(void);
extern int                  termemu_palette(const char *name);
extern int		    termemu_appname(const char *appname);
extern int                  termemu_keysyms(const char *keysyms);
extern void                 termemu_exit(void);
extern int                  termemu_size(int *rows, int *cols);
extern int                  termemu_winch(int *rows, int *cols);
extern int                  termemu_read(void *buf, int buflen, void (*sigwinch)(void));
extern void                 termemu_write(void *buf, int len);
extern void                 termemu_flush(void);

__END_DECLS

#endif /*TERMEMU_TSM_H_INCLUDED*/
