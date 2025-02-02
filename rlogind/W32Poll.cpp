#include <edidentifier.h>
__CIDENT_RCSID(W32Poll_cpp,"$Id: W32Poll.cpp,v 1.8 2025/02/02 14:10:46 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * poll() emulation
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
 * License for more details.
 * ==end==
 */

#include "config.h"

#include <sys/cdefs.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

#include "W32Poll.h"                            // public interface

#if defined(_MSC_VER)
#include <msvc_system_error.hpp>
#endif
#include <iostream>
#include <string>
#include <cassert>


///////////////////////////////////////////////////////////////////////////////
//  

W32Poll::SOCKETINST::SOCKETINST(SOCKET handle) :
                hSocket(handle), hEvent(INVALID_HANDLE_VALUE), fWriteable(true) {
        hEvent = WSACreateEvent();
        WSAEventSelect(hSocket, hEvent, FD_ACCEPT | FD_CONNECT | FD_READ | FD_WRITE | FD_OOB | FD_CLOSE);
}


W32Poll::SOCKETINST::~SOCKETINST() {
        if (INVALID_HANDLE_VALUE != hEvent) {
                CloseHandle(hEvent);
        }
}


W32Poll::PROCESSINST::PROCESSINST(HANDLE handle) : hEvent(handle) {
}


W32Poll::PROCESSINST::~PROCESSINST() {
}


W32Poll::PIPEINST::PIPEINST(bool reader, HANDLE handle) : hPipe(handle), hEvent(INVALID_HANDLE_VALUE),
                dwToRead(0), dwReadCursor(0), dwToWrite(0), fReader(reader), fPendingIO(false) {
        (void) memset(&oOverlap, 0, sizeof(oOverlap));
        hEvent = CreateEvent(NULL, TRUE /*manual-reset*/, TRUE, NULL);
        oOverlap.hEvent = hEvent;
}


W32Poll::PIPEINST::~PIPEINST() {
        if (INVALID_HANDLE_VALUE != hEvent) {
                CloseHandle(hEvent);
        }
};


///////////////////////////////////////////////////////////////////////////////
//

W32Poll::W32Poll(SOCKET hSocket, HANDLE hProcess, HANDLE hPipeIn, HANDLE hPipeOut) :
                hSocket_(hSocket),
                hProcess_(hProcess),
                hPipeIn_(true, hPipeIn),
                hPipeOut_(false, hPipeOut),
                nfds_(0) {
        (void) memset(fds_, 0, sizeof(fds_));
        nfds_ = 4;                              // fixed configuration
}


W32Poll::~W32Poll() {
}


int W32Poll::Poll(unsigned timeoutms) {
        HANDLE waitfor[4] = { hSocket_.hEvent, hProcess_.hEvent, hPipeIn_.hEvent, hPipeOut_.hEvent };
        unsigned i;
        int ret = 0;

        // TODO:
        //   o Dynamic binding of FD list, upto FDMAX elements.
        //   o Round robin event list
        for (i = 0; i < nfds_; ++i) {           // clear report events.
                fds_[i].revents = 0;
        }

        if (0 != (fds_[0].revents |= StartIO(hSocket_, fds_[0].events))) {
                timeoutms = 0;                  // POLLOUT, checks for additional.
        }

        if (0 != (fds_[2].revents |= StartIO(hPipeIn_, fds_[1].events))) {
                timeoutms = 0;                  // POLLIN or error.
        }

        const unsigned count = (fds_[3].events ? 4 : 3);
        const DWORD dwWait =                    // NOTE: Count=3 or 4, optional reduction in false reports if no POLLOUT required.
                WaitForMultipleObjects(count, waitfor, FALSE, timeoutms);

        if (0 == dwWait) {
                fds_[0].revents |= CheckEvent(hSocket_,  fds_[0].events), ++ret;
        } else if (1 == dwWait) {
                fds_[1].revents |= CheckEvent(hProcess_, fds_[1].events), ++ret;
        } else if (2 == dwWait) {
                fds_[2].revents |= CheckEvent(hPipeIn_,  fds_[2].events), ++ret;
        } else if (3 == dwWait) {
                fds_[3].revents |= CheckEvent(hPipeOut_, fds_[3].events), ++ret;
        } else {                                // WAIT_FAILED etc
                                                // timeout otherwise error
                if (WAIT_TIMEOUT != dwWait) {
                        DWORD dwFlags;
                        for (i = 0; i < _countof(fds_); ++i) {
                                if (! GetHandleInformation(waitfor[i], &dwFlags)) {
                                        fds_[i].revents = POLLNVAL;
                                }
                        }
                }
        }
                                                // completion processing
        fds_[0].revents |= EndIO(hSocket_,  fds_[0].events);
        fds_[1].revents |= EndIO(hProcess_, fds_[1].events);
        fds_[2].revents |= EndIO(hPipeIn_,  fds_[2].events);
        fds_[3].revents |= EndIO(hPipeOut_, fds_[3].events);

        for (i = 0; i < nfds_; ++i) {           // revent count.
                if (fds_[i].revents) {
                        ++ret;
                }
        }
        return ret;
}


///////////////////////////////////////////////////////////////////////////////
//      Socket adpters

int W32Poll::SocketWrite(SOCKET hSocket, const char *buf, size_t cnt) {
        SOCKETINST &sock = hSocket_;
        int ret = 0;

        assert(hSocket == sock.hSocket);
        if (buf && cnt > 0) {
                if (/*SOCKET_ERROR*/ -1 == (ret = sockwrite(sock.hSocket, buf, cnt))) {
                        // Clear FD_WRITE status ...
                        if (EWOULDBLOCK == errno) {
                                sock.fWriteable = false;
                        }
                }
        }
        return ret;
}


//static
unsigned
W32Poll::StartIO(SOCKETINST &sock, unsigned events) {
        return EndIO(sock, events);
}


//static
unsigned
W32Poll::CheckEvent(SOCKETINST &sock, unsigned events) {
        WSANETWORKEVENTS nevents = {0};
        unsigned revents = 0;

        if (0 == WSAEnumNetworkEvents(sock.hSocket, sock.hEvent, &nevents)) {
                if ((nevents.lNetworkEvents & (FD_READ|FD_ACCEPT|FD_CONNECT)) && (events & POLLIN)) {
STDOUT_TRACE(std::cout << "pollx: socket : POLLIN\n";)
                        revents |= POLLIN;          // data to read.
                }

                if (nevents.lNetworkEvents & FD_WRITE) {
                        sock.fWriteable = true; // writeable again
                                //Note: ONLY set after a EWOULDBLOCK return.
                }

                if ((nevents.lNetworkEvents & FD_OOB) && (events & POLLPRI)) {
STDOUT_TRACE(std::cout << "pollx: socket : POLLPRI\n";)
                        revents |= POLLPRI;         // exceptional condition.
                }

                if (nevents.lNetworkEvents & FD_CLOSE) {
STDOUT_TRACE(std::cout << "pollx: socket : POLLHUP\n";)
                        revents |= POLLHUP;         // hangup; unconditional.
                }

        } else {
STDOUT_TRACE(std::cout << "pollx: socket : POLLERR\n";)
                revents = (WSAENETDOWN == WSAGetLastError() ? POLLHUP : POLLERR);
        }
        return revents;
}


//static
unsigned
W32Poll::EndIO(SOCKETINST &sock, unsigned events) {
        unsigned revents = 0;

        if (sock.fWriteable && (events & POLLOUT)) {
STDOUT_TRACE(std::cout << "pollx: socket : POLLOUT\n";)
                revents |= POLLOUT;                 // writing is possible.
        }
        return revents;
}


///////////////////////////////////////////////////////////////////////////////
//      Processadpters

//static 
unsigned 
W32Poll::StartIO(PROCESSINST &, unsigned)
{
        return 0;
}


//static
unsigned 
W32Poll::CheckEvent(PROCESSINST &, unsigned)
{
        return POLLHUP;                         // hangup; unconditional.
}


//static
unsigned W32Poll::EndIO(PROCESSINST &, unsigned)
{
        return 0;
}


///////////////////////////////////////////////////////////////////////////////
//      Pipe adpters

int W32Poll::ReadPipe(HANDLE hPipeIn, char *buf, int buflen) {
        PIPEINST &pipe = hPipeIn_;
        assert(hPipeIn == pipe.hPipe);
        assert(! pipe.fPendingIO);
        if (pipe.dwToRead && buflen > 0) {      // pull from read buffer
                const int ret = ((int)pipe.dwToRead > buflen ? buflen : (int)pipe.dwToRead);
                memcpy(buf, pipe.cbBuffer + pipe.dwReadCursor, ret);
                pipe.dwReadCursor += ret;
                pipe.dwToRead -= ret;
STDOUT_TRACE(std::cout << "pollr: read_pipe : " << ret << "\n";)
                return ret;
        }
STDOUT_TRACE(std::cout << "pollr: read_pipe : empty\n";)
        return 0;
}


int W32Poll::WritePipe(HANDLE hPipeOut, const char *buf, int buflen) {
        PIPEINST &pipe = hPipeOut_;
        assert(hPipeOut == pipe.hPipe);
        assert(! pipe.fPendingIO);
        if (0 == hPipeIn_.dwToWrite && buflen > 0) {
                DWORD cbWritten = 0;
                BOOL  fSuccess = WriteFile(
                        pipe.hPipe, buf, buflen, &cbWritten, &pipe.oOverlap);
                int ret = 0;

                if (fSuccess) {
STDOUT_TRACE(std::cout << "pollw: write_pipe : immediate\n";)
                        ret = (int)cbWritten;
                        if (! FlushFileBuffers(pipe.hPipe)) {
STDOUT_TRACE(std::cout << "pollw: write_pipe : flush error\n";)
                                if (0 == ret) ret = -1;
                        }
                } else {
                        const DWORD dwErr = GetLastError();
                        if (ERROR_IO_PENDING == dwErr) {
STDOUT_TRACE(std::cout << "pollw: write_pipe : pending\n";)
                                pipe.fPendingIO = true;
                                pipe.dwToWrite = cbWritten;
                        } else {
STDOUT_TRACE(std::cout << "pollw: write_pipe : error\n";)
                                ret = -1;
                        }
                }
STDOUT_TRACE(std::cout << "pollw: write_pipe : " << ret << "\n";)
                return ret;
        }
STDOUT_TRACE(std::cout << "pollw: write_pipe : BUSY\n";)
        return 0;
}


//static
unsigned
W32Poll::StartIO(PIPEINST &pipe, unsigned events) {
        unsigned revents = 0;

        if (!pipe.fPendingIO) {                 // check current status
                if (pipe.fReader && 0 == pipe.dwToRead) {
                        DWORD cbRet = 0;
STDOUT_TRACE(std::cout << "polls: read_pipe : start\n";)
                        BOOL  fSuccess = ReadFile(
                                pipe.hPipe, pipe.cbBuffer, sizeof(pipe.cbBuffer), &cbRet, &pipe.oOverlap);

                        if (fSuccess) {
STDOUT_TRACE(std::cout << "polls: read_pipe : completion (" << cbRet << ")\n";)
                                pipe.dwToRead = cbRet;
                                pipe.dwReadCursor = 0;

                        } else {
                                const DWORD dwErr = GetLastError();
                                if (ERROR_IO_PENDING == dwErr) {
STDOUT_TRACE(std::cout << "polls: read_pipe : pending\n";)
                                        pipe.fPendingIO = true;
                                } else if (ERROR_MORE_DATA == dwErr) {
STDOUT_TRACE(std::cout << "polls: read_pipe : MOREDATA\n";)
                                        pipe.dwToRead = sizeof(pipe.cbBuffer);
                                        pipe.dwReadCursor = 0;
                                } else if (ERROR_NO_DATA == dwErr) {
STDOUT_TRACE(std::cout << "polls: read_pipe : NODATA\n";)
                                } else if (ERROR_BROKEN_PIPE == dwErr) {
STDOUT_TRACE(std::cout << "polls: read_pipe : HUP\n";)
                                        revents |= POLLHUP;
                                } else {
STDOUT_TRACE(std::cout << "polls: read_pipe : error (" << dwErr << "\n";)
                                        revents |= POLLERR;
                                }
                        }
                }
        }
        return revents;
}


//static
unsigned
W32Poll::CheckEvent(PIPEINST &pipe, unsigned events) {
        unsigned revents = 0;
        DWORD cbRet;

        if (pipe.fPendingIO) {                  // check current status
                const BOOL fSuccess = GetOverlappedResult(
                        pipe.hPipe, &pipe.oOverlap, &cbRet, FALSE);

                if (pipe.fReader) {
                        assert(0 == pipe.dwToRead);
                        if (! fSuccess) {
                                const DWORD dwErr = GetLastError();
                                if (ERROR_MORE_DATA == dwErr) {
STDOUT_TRACE(std::cout << "pollc: read_pipe : MOREDATA\n";)
                                        assert(cbRet == sizeof(pipe.cbBuffer));
                                        pipe.dwToRead = cbRet;
                                        pipe.dwReadCursor = 0;
                                } else {
STDOUT_TRACE(std::cout << "pollc: read_pipe : error (" << dwErr << ")\n";)
                                        revents |= POLLERR;
                                }
                        } else {
STDOUT_TRACE(std::cout << "pollc: read_pipe : completion (" << cbRet << ")\n";)
                                pipe.dwToRead = cbRet;
                                pipe.dwReadCursor = 0;
                        }
                } else {
                        assert(pipe.dwToWrite);
                        if (! fSuccess || cbRet != pipe.dwToWrite) {
STDOUT_TRACE(std::cout << "pollc: write_pipe : error\n";)
                                revents |= POLLERR;
                        } else {
STDOUT_TRACE(std::cout << "pollc: write_pipe : completion (" << cbRet << ")\n";)
                                pipe.dwToWrite = 0;
                        }
                }
                pipe.fPendingIO = false;
        }
        return revents;
}


//static
unsigned
W32Poll::EndIO(PIPEINST &pipe, unsigned events) {
        unsigned revents = 0;
        if (!pipe.fPendingIO) {                     // report completion status
                if (pipe.fReader) {   
                        assert(0 == pipe.dwToWrite);
                        if (pipe.dwToRead && (events & (POLLIN|POLLPRI))) {
STDOUT_TRACE(std::cout << "pollx: reader : POLLIN\n";)
                                revents |= POLLIN;
                        }
                } else {
                        assert(0 == pipe.dwToRead);
                        if (0 == pipe.dwToWrite && (events & POLLOUT)) {
STDOUT_TRACE(std::cout << "pollx: writer : POLLOUT\n";)
                                revents |= POLLOUT;
                        }
                }
        }
        return revents;
}

//end
