#pragma once
#ifndef NTSERVICEIO_H_INCLUDED
#define NTSERVICEIO_H_INCLUDED

#include <cstdio>
#include <cstdarg>
#include <cassert>

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
