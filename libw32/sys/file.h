#ifndef LIBW32_SYS_FILE_H_INCLUDED
#define LIBW32_SYS_FILE_H_INCLUDED
#include <edidentifier.h>
__CIDENT_RCSID(gr_libw32_sys_file_h,"$Id: file.h,v 1.2 2022/02/24 15:33:51 cvsuser Exp $")
__CPRAGMA_ONCE

/* -*- mode: c; indent-width: 4; -*- */
/*
 * win32 sys/file.h
 *
 * Copyright (c) 2020 - 2023, Adam Young.
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

#include <sys/cdefs.h>

#define LOCK_SH             0x01
#define LOCK_EX             0x02
#define LOCK_NB             0x04
#define LOCK_UN             0x08

__BEGIN_DECLS

LIBW32_API int              w32_flock(int fd, int operation);

__END_DECLS

#endif /*LIBW32_SYS_FILE_H_INCLUDED*/
