/* -*- mode: c; indent-width: 8; -*- */
/*
 * Windows 10 ConPTY interface
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

#if !defined(PSEUDOCONSOLE_INHERIT_CURSOR)      /* Windows SDK 10.0.18346.0 (ConsoleApi.h) */
#define PSEUDOCONSOLE_INHERIT_CURSOR (0x1)
typedef VOID *HPCON;
#endif

#include "w32support.h"

struct winsize;

class ConPTY {
        BOOST_DELETED_FUNCTION(ConPTY(const ConPTY &))
        BOOST_DELETED_FUNCTION(ConPTY& operator=(const ConPTY &))

public:
        ConPTY();
        virtual ~ConPTY();

        static bool initialise_conpty();
        static bool get_default_size(COORD &size);
//      static bool get_default_shell(char *name, size_t namelen);

        bool    set_pipe_mode(DWORD dwMode);
        bool    set_pipe_size(DWORD dwSize);
        bool    set_read_mode(DWORD dwMode);
        bool    set_write_mode(DWORD dwMode);
        bool    create_pty(COORD size);
        bool    create_pty(const struct winsize *win = 0);
        bool    attach_shell( /*const char *shell = 0, bool suspended = false*/ );
        bool    attach_shell_as( /*user*/ /*shell*/ /*suspended*/ );
        bool    start_shell();
        bool    get_process_exit(DWORD &dwExit, DWORD dwTimeoutMs = 0);
        bool    winch(COORD size);
        bool    winch(const struct winsize *win);
        bool    ctrlbreak();
        HANDLE  stdout_pipe() const;
        HANDLE  stdin_pipe() const;
        HANDLE  process_handle() const;
        DWORD   process_identifier() const;
        bool    is_open() const;
        bool    is_attached() const;
        bool    terminate(int exit_code, bool wait = false);
        void    close();
        void    disconnect();

private:
        void    cleanup_attributes();

private:
        DWORD   dwPipeMode_;
        DWORD   dwPipeSize_;
        DWORD   dwReadMode_;
        DWORD   dwWriteMode_;

        HPCON   hPC_;
        HANDLE  hPipeIn_;
        HANDLE  hPipeOut_;

        void *  pThreadhreadAttributeList_;
        DWORD   dwProcessId_;
        HANDLE  hProcess_;
        HANDLE  hThread_;
        bool    attached_;
};

//end
