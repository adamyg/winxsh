#pragma once
#ifndef NTSERVICEIIO_H_INCLUDED
#define NTSERVICEIIO_H_INCLUDED
/*
 * CNTService - Classic window services framework (tweaked).
 *
 * Copyright (c) 2020 - 2025, Adam Young.
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
 * license for more details.
 * ==end==
 */
 
#include <stdarg.h>

namespace NTService {

        // Diagnostics interface.
        struct IDiagnostics {
                virtual void ferror(const char *fmt, ...) = 0;
                virtual void fwarning(const char *fmt, ...) = 0;
                virtual void finfo(const char *fmt, ...) = 0;
                virtual void fdebug(const char *fmt, ...) = 0;

                virtual void verror(const char *fmt, va_list) = 0;
                virtual void vwarning(const char *fmt, va_list) = 0;
                virtual void vinfo(const char *fmt, va_list) = 0;
                virtual void vdebug(const char *fmt, va_list) = 0;

                virtual void error(const char *msg) = 0;
                virtual void warning(const char *msg) = 0;
                virtual void info(const char *msg) = 0;
                virtual void debug(const char *msg) = 0;
        };

};  //namespace NTService

#endif  //NTSERVICEIIO_H_INCLUDED
