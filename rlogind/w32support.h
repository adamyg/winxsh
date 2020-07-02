#pragma once
#if !defined(WSSUPPORT_H_INCLUDED)
#define WSSUPPORT_H_INCLUDED
/* -*- mode: c; indent-width: 8; -*- */
/*
 * Windows supplemental definitions / work arounds.
 *
 * Copyright (c) 2020, Adam Young.
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

#if _WIN32_WINNT < 0x0600
#error _WIN32_WINNT < 0x0600                    /* general requirement */
#endif

#ifndef MAXHOSTNAMELEN
#define MAXHOSTNAMELEN 64
#endif

#ifndef strcasecmp
#define strcasecmp(a,b) _stricmp(a,b)
#endif

#if !defined(ENABLE_VIRTUAL_TERMINAL_PROCESSING)
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
    // When writing with WriteFile or WriteConsole, characters are parsed for VT100 and similar control
    // character sequences that control cursor movement, color/font mode, and other operations that can
    // also be performed via the existing Console APIs.
#endif
#if !defined(DISABLE_NEWLINE_AUTO_RETURN)
#define DISABLE_NEWLINE_AUTO_RETURN 0x0008
    // When writing with WriteFile or WriteConsole, this adds an additional state to end-of-line wrapping
    // that can delay the cursor move and buffer scroll operations.
#endif

#if defined(__WATCOMC__)
#if !defined(POLLRDNORM)                        /* Event flag definitions for WSAPoll(). */
#define POLLRDNORM  0x0100
#define POLLRDBAND  0x0200
#define POLLIN      (POLLRDNORM | POLLRDBAND)
#define POLLPRI     0x0400
#define POLLWRNORM  0x0010
#define POLLOUT     (POLLWRNORM)
#define POLLWRBAND  0x0020
#define POLLERR     0x0001
#define POLLHUP     0x0002
#define POLLNVAL    0x0004
#endif  //POLLRDNORM
#endif  //__WATCOMC__
#ifndef INFTIM
#define INFTIM      -1
#endif

#ifndef BOOST_DELETED_FUNCTION                  /* toolchain C+11 tweaks; emulate Boost */
#if defined(__WATCOMC__)
#define BOOST_DELETED_FUNCTION(_f) _f;
#define BOOST_NOEXCEPT
#define BOOST_NOEXCEPT_OR_NOTHROW throw()
#define BOOST_NOEXCEPT_IF(Predicate)
#define BOOST_NOEXCEPT_EXPR(Expression) false
#define BOOST_OUTCOME_NODISCARD
#else
#define BOOST_DELETED_FUNCTION(_f) _f = delete;
#define BOOST_NOEXCEPT noexcept
#define BOOST_NOEXCEPT_OR_NOTHROW noexcept
#define BOOST_NOEXCEPT_IF(Predicate) noexcept((Predicate))
#define BOOST_NOEXCEPT_EXPR(Expression) noexcept((Expression))
#define BOOST_OUTCOME_NODISCARD [[nodiscard]]   /* alt SAL _Must_inspect_result_ */
#endif
#endif  //BOOST_DELETED_FUNCTION

#if defined(__WATCOMC__) && (__WATCOMC__ <= 1300)
#if defined(__cplusplus)                        /* std::nothrow() emulation */
    #include <cstddef>
    #include <cstdlib>
#pragma warning (push)
#pragma warning 14 9  // no reference to symbol 'operator new'
    namespace std {
        struct nothrow_t { };
        static nothrow_t const nothrow;
    }
    static void* operator new (size_t _Size, std::nothrow_t const&) {
        return malloc(_Size);                  /* see: opnew.cpp/rtlibrary */
            // Note: OpenWatcom (1.9 or 2.0) wont throw std::bad_alloc.
    }
    static void* operator new [] (size_t _Size, std::nothrow_t const&) {
        return malloc(_Size);
    }
#pragma warning (pop)
#endif
#endif  //__WATCOMC__

#endif  //WSSUPPORT_H_INCLUDED

//end
