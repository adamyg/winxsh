/* -*- mode: c; indent-width: 4; -*-
 * $Id: pack1.h,v 1.6 2023/12/26 17:01:06 cvsuser Exp $
 * ==noguard==
 *
 * win32 declaration helpers
 *
 * Copyright (c) 1998 - 2023, Adam Young.
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
 *
 * Usage:
 *
 *      #include <sys/cdefs.h>
 *
 *      #include <sys/pack1.h>
 *      struct __packed_pre__ mypackedstruct {
 *              :
 *      } __packed_post__;
 *      #include <sys/pack0.h>
 *
 */

#include <sys/cdefs.h>                          /* __packed_pre__ and __packed_post__ */

#if !(defined(lint) || defined(_lint))
#   if defined(_MSC_VER) && (_MSC_VER >= 800)
#       ifndef __SYS_PACK1_H_INCLUDED__
#           pragma warning(disable:4103)
#       endif
#       pragma pack(1)
#   elif defined(__WATCOMC__) || defined(__BORLANDC__) || defined(__PARADIGM__)
#       pragma pack(1)
#   endif
#endif
#define __SYS_PACK1_H_INCLUDED__
