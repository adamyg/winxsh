#ifndef TERMEMU_CIO_H_INCLUDED
#define TERMEMU_CIO_H_INCLUDED
#include <edidentifier.h>
__CIDENT_RCSID(termemu_cio_h,"$Id: termemu_cio.h,v 1.6 2025/02/02 13:58:14 cvsuser Exp $")
__CPRAGMA_ONCE

/* -*- mode: c; indent-width: 4; -*- */
/*
 * libtermemu console driver
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

#include <sys/cdefs.h>

__BEGIN_DECLS

extern int                  termemu_cio_keyevent(const KEY_EVENT_RECORD *key, termemu_event_t *evt);
extern unsigned             termemu_cio_modifiers(const DWORD dwControlKeyState, bool apps);
extern int                  termemu_cio_keyauto(int sequence, INPUT_RECORD *ir, termemu_event_t *evt);

__END_DECLS

#endif //TERMEMU_CIO_H_INCLUDED

