#pragma once
#ifndef NTSERVICEIO_H_INCLUDED
#define NTSERVICEIO_H_INCLUDED
/*
 * CNTService - Classic window services framework (tweaked).
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
 * license for more details.
 * ==end==
 */

#include <stdio.h>
#include <stdarg.h>

#include "NTServiceIIO.h"

namespace NTService {

    // Default diagnostics implementation.
    class StdioDiagnosticsIO {
    public:
        static IDiagnostics& Get() {
            static struct StdioDiagnosticsIOImpl : public IDiagnostics {
                virtual void ferror(const char *fmt, ...) {
                        va_list ap;
                        va_start(ap, fmt);
                        verror(fmt, ap);
                        va_end(ap);
                }

                virtual void fwarning(const char *fmt, ...) {
                        va_list ap;
                        va_start(ap, fmt);
                        vwarning(fmt, ap);
                        va_end(ap);
                }

                virtual void finfo(const char *fmt, ...) {
                        va_list ap;
                        va_start(ap, fmt);
                        vinfo(fmt, ap);
                        va_end(ap);
                }

                virtual void fdebug(const char *fmt, ...) {
                        va_list ap;
                        va_start(ap, fmt);
                        vdebug(fmt, ap);
                        va_end(ap);
                }

                ///////////////////////////////////////////////////////////////////

                virtual void verror(const char *fmt, va_list ap) {
                        const size_t len = strlen(fmt);
                        vfprintf(stderr, fmt, ap);
                        if (!len || fmt[len-1] != '\n') fputc('\n', stderr);
                }

                virtual void vwarning(const char *fmt, va_list ap) {
                        const size_t len = strlen(fmt);
                        vfprintf(stdout, fmt, ap);
                        if (!len || fmt[len-1] != '\n') fputc('\n', stdout);
                }

                virtual void vinfo(const char *fmt, va_list ap) {
                        const size_t len = strlen(fmt);
                        vfprintf(stdout, fmt, ap);
                        if (!len || fmt[len-1] != '\n') fputc('\n', stdout);
                }

                virtual void vdebug(const char *fmt, va_list ap) {
                        const size_t len = strlen(fmt);
                        vfprintf(stdout, fmt, ap);
                        if (!len || fmt[len-1] != '\n') fputc('\n', stdout);
                }

                ///////////////////////////////////////////////////////////////////

                virtual void error(const char *msg) {
                        const size_t len = strlen(msg);
                        fputs(msg, stderr);
                        if (!len || msg[len-1] != '\n') fputc('\n', stderr);
                }

                virtual void warning(const char *msg) {
                        const size_t len = strlen(msg);
                        fputs(msg, stdout);
                        if (!len || msg[len-1] != '\n') fputc('\n', stdout);
                }

                virtual void info(const char *msg) {
                        const size_t len = strlen(msg);
                        fputs(msg, stdout);
                        if (!len || msg[len-1] != '\n') fputc('\n', stdout);
                }

                virtual void debug(const char *msg) {
                        const size_t len = strlen(msg);
                        fputs(msg, stdout);
                        if (!len || msg[len-1] != '\n') fputc('\n', stdout);
                }

            } diag_;

            return diag_;
        }
    };

};  //namespace NTService

#endif  //NTSERVICEIO_H_INCLUDED
