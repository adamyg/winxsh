#pragma once
#if !defined(SESSION_H_INCLUDED)
#define SESSION_H_INCLUDED
/* -*- mode: c; indent-width: 8; -*- */
/*
 * rlogind session
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

#include "winsize.h"
#include "w32support.h"

struct options;
class  ConPTY;

class Session {
        BOOST_DELETED_FUNCTION(Session(const Session &))
        BOOST_DELETED_FUNCTION(Session& operator=(const Session &))

public:
        Session(const struct Options *options);
        ~Session();

        int rlogin(int clientfd);

private:
        int  doit(struct sockaddr_storage *);
        void protocol();
        int  ptycontrol(const char *cp, int n);
        void cleanup();
        void remote_fatal(const char *msg, int syserr = 0);
        void remote_vfatal(const char *msg, ...);
        void fatal(const char *msg, int syserr);
        int  handshake(struct sockaddr *dest, const char *host);
        void getstr(char *buf, int cnt, const char *errmsg);
        static int local_domain(const char *h);
        static const char *topdomain(const char *h);

private:
        const struct Options &options_;         // options
        char oobdata_[1];                       // Out-Of-Bounds data
        int netf_;                              // client socket
        ConPTY *pty_;                           // ConPTY 

        int confirmed_;                         // connection confirmed; protocol state
        struct winsize win_;                    // pty window
        char message_[BUFSIZ];                  // working storage for exit

#define NMAX        30
        char lusername_[NMAX + 1];              // local user-name
        char rusername_[NMAX + 1];              // remote user-name
        const char *env_[2];                    // environment
        char term_[64];                         // terminal name
};

#endif  //SESSION_H_INCLUDED
//end
