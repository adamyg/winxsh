#pragma once
#if !defined(RLOGIN_H_INCLUDED)
#define RLOGIN_H_INCLUDED
/* -*- mode: c; indent-width: 8; -*- */
/*
 * rlogin server
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

#ifdef __cplusplus
extern "C" {
#endif

struct Options {
        int keepalive;                          // enable connection keep alives.
        int check_all;                          // check all logins
        int log_success;                        // log succesful connections
        unsigned port;                          // port.
        int reverse_required;                   // reverse name lookup required.
        const char *ini_file;                   // alternative configuration source.
        bool delay_start;                       // service start-up-delay.
        bool no_stdout;                         // no stdout during console mode.
};

extern void rlogin(const struct Options *options, int clientfd);

#ifdef __cplusplus
}
#endif

#endif  //RLOGIN_H_INCLUDED

//end
