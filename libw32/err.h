#ifndef WIN32_ERR_H_INCLUDED
#define WIN32_ERR_H_INCLUDED
#include <edidentifier.h>
__CIDENT_RCSID(gr_libw32_err_h,"$Id: err.h,v 1.4 2017/03/22 17:21:08 cvsuser Exp $")
__CPRAGMA_ONCE

/* -*- mode: c; indent-width: 4; -*- */
/*
 * win <errt.h>
 *
 * Copyright (c) 1998 - 2017, Adam Young.
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
 
extern void                     err(int eval, const char *fmt, ...);
extern void                     errx(int eval, const char *fmt, ...);
extern void                     warn(const char *fmt, ...);
extern void                     warnx(const char *fmt, ...);

__END_DECLS

#endif /*WIN32_ERR_H_INCLUDED*/
