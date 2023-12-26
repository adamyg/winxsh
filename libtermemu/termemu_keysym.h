#ifndef TERMEMU_KEYSYM_H_INCLUDED
#define TERMEMU_KEYSYM_H_INCLUDED
#include <edidentifier.h>
__CIDENT_RCSID(termemu_keysym_h,"$Id: termemu_keysym.h,v 1.6 2023/12/22 17:07:44 cvsuser Exp $")
__CPRAGMA_ONCE

/* -*- mode: c; indent-width: 4; -*- */
/*
 * termemu keyboard symbol lookup.
 *
 * Copyright (c) 2015 - 2023, Adam Young.
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

extern const char *             termemu_keysym_tostr(unsigned ks);
extern const char *             termemu_keysym_tostruc(unsigned ks, unsigned *uc);
extern int                      termemu_keysym_tostrs(unsigned ks, const char **strs, unsigned count);
extern char *                   termemu_keysym_ucstr(unsigned ks, char *buf, size_t buflen);
extern const char *             termemu_keysym_asstr(unsigned ks, unsigned *unicode, char *buf, size_t buflen);

extern unsigned                 termemu_keysym_tonum(const char *name);
extern unsigned                 termemu_keysym_tonumuc(const char *name, unsigned *uc);

extern unsigned                 termemu_keysym_fromuc(unsigned uc);

__END_DECLS

#endif //TERMEMU_KEYSYM_H_INCLUDED
