#ifndef COMPAT_STDBOOL_H_INCLUDED
#define COMPAT_STDBOOL_H_INCLUDED
/*
 * compat stdbool.h
 *
 * Copyright (c) 2015 - 2020, Adam Young.
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

#if defined(HAVE_STDBOOL_H)
#include <stdbool.h>

#elif defined(HAVE_SYS_BOOL_H)
#include <sys/bool.h>

#else
    #if defined(_MSC_VER)
        #if defined(__cpluplus)
            #if defined(__BOOL_DEFINED) //Visual C++ 5.0 and later
typedef _Bool bool;
            #else
                #error unsupported MSVC C++ version ...
            #endif
        #elif !defined(bool)
typedef char bool;
#define true 1
#define false 0
        #endif

    #else
#eror bool not supported  ....
    #endif
#endif

#endif  //COMPAT_STDBOOL_H_INCLUDED
