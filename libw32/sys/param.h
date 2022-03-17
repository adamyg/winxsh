#ifndef LIBW32_SYS_PARAM_H_INCLUDED
#define LIBW32_SYS_PARAM_H_INCLUDED
#include <edidentifier.h>
__CIDENT_RCSID(gr_libw32_sys_param_h,"$Id: param.h,v 1.5 2022/03/15 12:15:39 cvsuser Exp $")
__CPRAGMA_ONCE

/* -*- mode: c; indent-width: 4; -*- */
/*
 * win32 <sys/param.h>
 *
 * Copyright (c) 1998 - 2022, Adam Young.
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

#include <limits.h>				/*PATH_MAX*/
#include <stdio.h>				/*PATH_MAX*/
#include <stdlib.h>				/*_MAX_PATH*/

#define ALIGNBYTES		3		/*FIXME , 32/64 bit machines*/
#define ALIGN(p)		(((unsigned int)(p) + ALIGNBYTES) &~ ALIGNBYTES)

#if !defined(PATH_MAX)
#define PATH_MAX		_MAX_PATH
#define NAME_MAX		_MAX_PATH
#endif

/*limits.h*/
#define _POSIX2_LINE_MAX	2048
#define LINE_MAX		2048

#endif /*LIBW32_SYS_PARAM_H_INCLUDED*/
