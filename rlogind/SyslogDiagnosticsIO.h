#pragma once
#ifndef SYSLOGDIAGNOSTICSIO_H_INCLUDED
#define SYSLOGDIAGNOSTICSIO_H_INCLUDED

/* -*- mode: c; indent-width: 8; -*- */
/*
 * Syslog NTService::IDiagnostics Adapter
 *
 * Copyright (c) 2020 - 2022, Adam Young.
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

#include "../libNTService/NTServiceIO.h"        // NTService::IDiagnostics

#include "syslog.h"

class SyslogDiagnosticsIO {
public:
    static NTService::IDiagnostics& Get() {
        static struct SyslogDiagnosticsIOImpl : public NTService::IDiagnostics {
            virtual void ferror(const char *fmt, ...) {
                va_list ap;
                va_start(ap, fmt);
                vsyslog(LOG_ERR, fmt, ap);
                va_end(ap);
            }

            virtual void fwarning(const char *fmt, ...) {
                va_list ap;
                va_start(ap, fmt);
                vsyslog(LOG_WARNING, fmt, ap);
                va_end(ap);
            }

            virtual void finfo(const char *fmt, ...) {
                va_list ap;
                va_start(ap, fmt);
                vsyslog(LOG_INFO, fmt, ap);
                va_end(ap);
            }

            virtual void fdebug(const char *fmt, ...) {
                va_list ap;
                va_start(ap, fmt);
                vsyslog(LOG_DEBUG, fmt, ap);
                va_end(ap);
            }

            ///////////////////////////////////////////////////////////////////

            virtual void verror(const char *fmt, va_list ap) {
                vsyslog(LOG_ERR, fmt, ap);
            }

            virtual void vwarning(const char *fmt, va_list ap) {
                vsyslog(LOG_WARNING, fmt, ap);
            }

            virtual void vinfo(const char *fmt, va_list ap) {
                vsyslog(LOG_INFO, fmt, ap);
            }

            virtual void vdebug(const char *fmt, va_list ap) {
                vsyslog(LOG_DEBUG, fmt, ap);
            }

            ///////////////////////////////////////////////////////////////////

            virtual void error(const char *msg) {
                syslog(LOG_ERR, "%s", msg);
            }

            virtual void warning(const char *msg) {
                syslog(LOG_WARNING, "%s", msg);
            }

            virtual void info(const char *msg) {
                syslog(LOG_INFO, "%s", msg);
            }

            virtual void debug(const char *msg) {
                syslog(LOG_DEBUG, "%s", msg);
            }

        } diag_;

        return diag_;
    }
};

#endif  //SYSLOGDIAGNOSTICSIO_H_INCLUDED
