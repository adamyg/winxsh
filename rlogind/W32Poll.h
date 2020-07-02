/* -*- mode: c; indent-width: 8; -*- */
/*
 * poll() emulation
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

#include <cassert>

#ifndef WINDOWS_MEAN_AND_LEAN
#include <Windows.h>
#include <WinSock2.h>
#endif

class W32Poll {
        struct SOCKETINST {
                SOCKETINST(SOCKET handle);
                ~SOCKETINST();

                SOCKET   hSocket;
                WSAEVENT hEvent;
                bool     fWriteable;
        };

        struct PROCESSINST {
                PROCESSINST(HANDLE handle);
                ~PROCESSINST();

                HANDLE   hEvent;
        };

        struct PIPEINST {
                PIPEINST(bool reader, HANDLE handle);
                ~PIPEINST();

                HANDLE  hPipe;
                HANDLE  hEvent;
                OVERLAPPED oOverlap;
                DWORD   dwToRead;               // amount available to be read. 
                DWORD   dwReadCursor;           // ReadPipe() cursor. 
                DWORD   dwToWrite;
                bool    fReader;
                bool    fPendingIO;
                char    cbBuffer[4 * 1024];     // read buffer; TODO dynamic.
        };
 
public:
        static const unsigned FDMAX = 64;       // wait limit.
        struct FDS {
                unsigned events;
                unsigned revents;
        };

public:
        W32Poll(SOCKET hSocket, HANDLE hProcess, HANDLE hPipeIn, HANDLE hPipeOut);
        ~W32Poll();

//      void PushSocket(SOCKET HSocket)
//      void PushProcess(HANDLE hProcess, DWORD dwProcessId = 0);
//      void PushPipe(HANDLE hPipeIn, bool reader);

        int Poll(unsigned timeoutms);
        int SocketWrite(SOCKET hSocket, const char *buf, size_t cnt);
//      int SocketRead(SOCKET hSSocket, char *buf, size_t cnt);
        int ReadPipe(HANDLE hPipe, char *buf, int buflen);
        int WritePipe(HANDLE hPipe, const char *buf, int buflen);

        inline const FDS& operator[](int index) const {
                assert(index >= 0 && index < _countof(fds_));
                return fds_[index];
        }

        inline FDS& operator[](int index) {
                assert(index >= 0 && index < _countof(fds_));
                return fds_[index];
        }

private:
        static unsigned StartIO(PIPEINST &pipe, unsigned events);
        static unsigned CheckEvent(PIPEINST &pipe, unsigned events);
        static unsigned EndIO(PIPEINST &pipe, unsigned events);

        static unsigned StartIO(PROCESSINST &pipe, unsigned events);
        static unsigned CheckEvent(PROCESSINST &pipe, unsigned events);
        static unsigned EndIO(PROCESSINST &pipe, unsigned events);

        static unsigned StartIO(SOCKETINST &sock, unsigned events);
        static unsigned CheckEvent(SOCKETINST &sock, unsigned events);
        static unsigned EndIO(SOCKETINST &sock, unsigned events);

private:
        SOCKETINST hSocket_;
        PROCESSINST hProcess_;
        PIPEINST hPipeIn_;
        PIPEINST hPipeOut_;
        unsigned nfds_;
        FDS fds_[FDMAX];
};

//end
