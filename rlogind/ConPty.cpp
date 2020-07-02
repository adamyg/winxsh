#include <edidentifier.h>
__CIDENT_RCSID(ConPty_cpp,"$Id: ConPty.cpp,v 1.10 2020/07/02 21:27:02 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * Windows 10 ConPTY interface
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

 /*
  * See Also:
  * https://devblogs.microsoft.com/commandline/windows-command-line-introducing-the-windows-pseudo-console-conpty
  * https://github.com/microsoft/terminal/tree/master/src/winconpty
  *     Example; https://github.com/microsoft/terminal/tree/ae71dce2ca32c62399652ed19ccd9a32c167338d/src/winconpty
  */

#include "config.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>

#define  WINDOWS_MEAN_AND_LEAN
#include <Windows.h>

#include "conpty.h"                             // public header

#include "w32support.h"
#include "winsize.h"


#if !defined(PROC_THREAD_ATTRIBUTE_PSEUDOCONSOLE)
#define ProcThreadAttributePseudoConsole    22  /* WinBase.h */
    //#define PROC_THREAD_ATTRIBUTE_PSEUDOCONSOLE 0x00020016
#define PROC_THREAD_ATTRIBUTE_PSEUDOCONSOLE \
            ProcThreadAttributeValue (ProcThreadAttributePseudoConsole, FALSE, TRUE, FALSE)
#endif

typedef HRESULT (WINAPI *CreatePseudoConsole_t)(COORD size, HANDLE hInput, HANDLE hOutput, DWORD dwFlags, HPCON* phPC);
typedef HRESULT (WINAPI *ResizePseudoConsole_t)(HPCON hPC, COORD size);
typedef VOID    (WINAPI *ClosePseudoConsole_t)(HPCON hPC);

typedef BOOL    (WINAPI *InitializeProcThreadAttributeList_t)(LPPROC_THREAD_ATTRIBUTE_LIST, DWORD, DWORD, PSIZE_T);
typedef BOOL    (WINAPI *UpdateProcThreadAttribute_t)(LPPROC_THREAD_ATTRIBUTE_LIST, DWORD, DWORD_PTR, PVOID, SIZE_T, PVOID, PSIZE_T);
typedef void    (WINAPI *DeleteProcThreadAttributeList_t)(LPPROC_THREAD_ATTRIBUTE_LIST);

#pragma comment(lib, "Kernel32.lib")     
#pragma comment(lib, "rpcrt4.lib")              // UuidCreate - Minimum supported OS Win 2000

static CreatePseudoConsole_t    fnCreatePseudoConsole;
static ResizePseudoConsole_t    fnResizePseudoConsole;
static ClosePseudoConsole_t     fnClosePseudoConsole;

///////////////////////////////////////////////////////////////////////////////
//      runtime iniialisation
//

bool
ConPTY::initialise_conpty()
{
        static HMODULE hMod;

        assert(sizeof(int) == sizeof(HPCON));
        assert(sizeof(int) == sizeof(SOCKET));

        if (0 == hMod) {                        /* one-shot */
                if (0 == (hMod = ::GetModuleHandleA("Kernel32.dll"))) {
                        hMod = (HMODULE)-1;
                } else {
                        //  ConPty part works only on Windows 10 >= 1903 (build > 18309) 
                        //  and can be built only with Windows SDK >= 10.0.18346.0 (maybe >= 17134).

                        fnCreatePseudoConsole = 
                                (CreatePseudoConsole_t) GetProcAddress(hMod, "CreatePseudoConsole");
                        fnResizePseudoConsole =
                                (ResizePseudoConsole_t) GetProcAddress(hMod, "ResizePseudoConsole");
                        fnClosePseudoConsole  =
                                (ClosePseudoConsole_t)  GetProcAddress(hMod, "ClosePseudoConsole");

//                      fnInitializeProcThreadAttributeList =
//                              (InitializeProcThreadAttributeList_t) GetProcAddress(hMod, "InitializeProcThreadAttributeList");
//                      fnUpdateProcThreadAttribute =
//                              (UpdateProcThreadAttribute_t) GetProcAddress(hMod, "UpdateProcThreadAttribute");
//                      fnDeleteProcThreadAttributeList =
//                              (DeleteProcThreadAttributeList_t) GetProcAddress(hMod, "DeleteProcThreadAttributeList");

                        if (! fnCreatePseudoConsole || !fnResizePseudoConsole || !fnClosePseudoConsole) {
//                              error("ConPTY is not available");
                                ::FreeLibrary(hMod);
                                hMod = (HMODULE)-1;
                        }
                }
        }
        return (hMod != (HMODULE)-1);           /* ConPTY available */
}


///////////////////////////////////////////////////////////////////////////////
//      support
//

namespace {
        // Generate a unique pipe name for a ConPTY pipe.
        bool
        GeneratePipeName(char *buf, size_t buflen)
        {
                UUID uuid;
                char *str;

                (void) UuidCreate(&uuid);
                (void) UuidToStringA(&uuid, (RPC_CSTR*)&str);
                _snprintf(buf, buflen, "\\\\.\\pipe\\ConPTY_%08x_%s", (unsigned)GetCurrentProcessId(), str);
                RpcStringFreeA((RPC_CSTR *)&str);
                return true;
        }

        // Similar to CreatePipe, excepts permits explict mode selection.
        bool
        CreatePipeExplicit(PHANDLE hReadPipe, PHANDLE hWritePipe,
                LPSECURITY_ATTRIBUTES lpPipeAttributes, DWORD dwSize, DWORD dwReadMode, DWORD dwWriteMode, DWORD dwPipeMode)
        {
                char name[256];

                if (0 == hReadPipe || 0 == hWritePipe) {
                        SetLastError(ERROR_INVALID_PARAMETER);
                        return false;
                }

                if (0 == dwSize) {
                        dwSize = 16 * 1204;         // 16k default
                }

                dwReadMode  &= FILE_FLAG_OVERLAPPED;
                dwWriteMode &= FILE_FLAG_OVERLAPPED;

                if (0 == dwReadMode && 0 == dwWriteMode) {
                        return (0 != ::CreatePipe(hReadPipe, hWritePipe, lpPipeAttributes, dwSize));
                }

                if (! ::GeneratePipeName(name, sizeof(name))) {
                        return false;               // invalid arguments
                }

                HANDLE readPipe = ::CreateNamedPipeA(name,
                        PIPE_ACCESS_INBOUND | FILE_FLAG_FIRST_PIPE_INSTANCE | dwReadMode,
                            dwPipeMode | PIPE_REJECT_REMOTE_CLIENTS,
                                1, dwSize, dwSize, 0 /*default*/, lpPipeAttributes);

                if (INVALID_HANDLE_VALUE == readPipe) {
                        return false;
                }

                HANDLE writePipe = ::CreateFileA(name, GENERIC_WRITE,
                        0, lpPipeAttributes, OPEN_EXISTING,
                            FILE_ATTRIBUTE_NORMAL | dwWriteMode, NULL);
                                // Note:
                                // The client side of a named pipe starts out in byte mode, even if the server side is in message mode.
                                // To avoid problems receiving data, set the client side to message mode as well.
                                //
                                // To change the mode of the pipe, the pipe client must open a read-only pipe
                                // with GENERIC_READ and FILE_WRITE_ATTRIBUTES access.

                if (INVALID_HANDLE_VALUE == writePipe) {
                        const DWORD dwLastError = ::GetLastError();
                        (void) ::CloseHandle(readPipe);
                        ::SetLastError(dwLastError);
                        return false;
                }

                *hReadPipe = readPipe, *hWritePipe = writePipe;
                return true;
        }

        // Initializes the specified startup info struct with the required properties and
        // updates its thread attribute list with the specified ConPTY handle.
        bool
        InitializeStartupInfoAttachedToPseudoConsole(STARTUPINFOEX &sie, HPCON hPC)
        {
                //HRESULT hr = E_UNEXPECTED;
                SIZE_T attrListSize = 0;
                bool ret = false;

                (void) memset(&sie, 0, sizeof(sie));
                sie.StartupInfo.cb = sizeof(STARTUPINFOEX);

                // Get the size of the thread attribute list.
                ::InitializeProcThreadAttributeList(NULL, 1, 0, &attrListSize);

                // Allocate a thread attribute list of the correct size
                if (NULL != (sie.lpAttributeList =
                                reinterpret_cast<LPPROC_THREAD_ATTRIBUTE_LIST>(calloc(attrListSize, 1)))) {

                        // Initialize thread attribute list
                        if (::InitializeProcThreadAttributeList(sie.lpAttributeList, 1, 0, &attrListSize)) {

                                // Set Pseudo Console attribute
                                if (::UpdateProcThreadAttribute(sie.lpAttributeList, 0,
                                                PROC_THREAD_ATTRIBUTE_PSEUDOCONSOLE, hPC, sizeof(HPCON), NULL, NULL)) {
                                        ret = true;
                                } else {
                                        //hr = HRESULT_FROM_WIN32(GetLastError());
                                        free((void *)sie.lpAttributeList);
                                }
                        } else {
                                //hr = HRESULT_FROM_WIN32(GetLastError());
                                free((void *)sie.lpAttributeList);
                        }
                }
                return ret;
        }
};      //anon namespace


///////////////////////////////////////////////////////////////////////////////
//      pty implementation
//

ConPTY::ConPTY() :
        dwPipeSize_(0), dwReadMode_(0), dwWriteMode_(0),
            hPC_(INVALID_HANDLE_VALUE), hPipeIn_(INVALID_HANDLE_VALUE), hPipeOut_(INVALID_HANDLE_VALUE),
            pThreadhreadAttributeList_(0), dwProcessId_(0), hProcess_(INVALID_HANDLE_VALUE), hThread_(INVALID_HANDLE_VALUE),
            attached_(false)
{
        dwPipeMode_ = PIPE_TYPE_BYTE;           // default
                // PIPE_TYPE_BYTE or PIPE_TYPE_MESSAGE, plus
                //      PIPE_READMODE_BYTE (default).
                //          Data is read from the pipe as a stream of bytes.
                //          This mode can be used with either PIPE_TYPE_MESSAGE or PIPE_TYPE_BYTE.
                //      PIPE_READMODE_MESSAGE
                //          Data is read from the pipe as a stream of messages.
                //          This mode can be only used if PIPE_TYPE_MESSAGE is also specified.
                //  and
                //      PIPE_WAIT
                //          Blocking mode (default).
                //      PIPE_NOWAIT       
                //          Nonblocking mode is enabled (use is not advised).
}


ConPTY::~ConPTY()
{
        close();
}


bool
ConPTY::set_pipe_mode(DWORD dwMode)
{
        if (is_open()) return false;
        dwPipeMode_ = dwMode;
        return true;
}



bool
ConPTY::set_pipe_size(DWORD dwSize)
{
        if (is_open()) return false;
        dwPipeSize_ = dwSize;
        return true;
}


bool 
ConPTY::set_read_mode(DWORD dwMode)
{
        if (dwMode & (~FILE_FLAG_OVERLAPPED)) return false;
            // Note: Only FILE_FLAG_OVERLAPPED is allowed.
        if (is_open()) return false;
        dwReadMode_ = dwMode;
        return true;
}


bool
ConPTY::set_write_mode(DWORD dwMode)
{
        if (dwMode & (~FILE_FLAG_OVERLAPPED)) return false;
            // Note: Only FILE_FLAG_OVERLAPPED is allowed.
        if (is_open()) return false;
        dwWriteMode_ = dwMode;
        return true;
}


bool
ConPTY::create_pty(COORD size /*bool suspended = false*/)
{
        if (is_open()) return false;
        if (!fnCreatePseudoConsole || !initialise_conpty()) return false;

        SECURITY_ATTRIBUTES sa = {0};
        HANDLE hPipePTYIn = INVALID_HANDLE_VALUE;
        HANDLE hPipePTYOut = INVALID_HANDLE_VALUE;
        HRESULT hr = E_UNEXPECTED;

        sa.nLength = sizeof(SECURITY_ATTRIBUTES);
        sa.bInheritHandle = TRUE;
        sa.lpSecurityDescriptor = NULL;

        // Create interprocess pipes
        if (! ::CreatePipeExplicit(&hPipePTYIn, &hPipeOut_, &sa, dwPipeSize_, 0, dwWriteMode_, dwPipeMode_) ||
                    ! ::CreatePipeExplicit(&hPipeIn_, &hPipePTYOut, &sa, dwPipeSize_, dwReadMode_, 0, dwPipeMode_)) {
                if (INVALID_HANDLE_VALUE != hPipePTYIn) {
                        ::CloseHandle(hPipePTYIn);
                }
                if (INVALID_HANDLE_VALUE != hPipePTYIn) {
                        ::CloseHandle(hPipePTYIn);
                }
                disconnect();
                return false;
        }

        // Create the Pseudo Console of the required size, attached to the PTY-end of the pipes
        hr = fnCreatePseudoConsole(size, hPipePTYIn, hPipePTYOut, 0, &hPC_);

        // Close the client size handles
        if (INVALID_HANDLE_VALUE != hPipePTYOut) {
                ::CloseHandle(hPipePTYOut);
        }
        if (INVALID_HANDLE_VALUE != hPipePTYIn) {
                ::CloseHandle(hPipePTYIn);
        }

        if (S_OK != hr) {
                close();
                return false;
        }
        return true;
}


bool
ConPTY::create_pty(const struct winsize *win /*= 0*/)  
{
        COORD size = {80, 32};                      // default size
        if (win) {
                if (win->ws_col && win->ws_row) {
                        size.X = win->ws_col;
                        size.Y = win->ws_row;
                }
        }
        return create_pty(size);
}


bool
ConPTY::attach_shell( /*shell*/ )
{
        if (!is_open() || is_attached()) return false;

        const char *shell = "C:\\Windows\\System32\\cmd.exe";
//      const char *env[];                      // FIXME: shell and env options.
//      const char *cwd[];

        STARTUPINFOEX sie = {0};
        if (! ::InitializeStartupInfoAttachedToPseudoConsole(sie, hPC_)) {
                return false;
        }
        pThreadhreadAttributeList_ = (void *)sie.lpAttributeList;
                // save for completion cleanup (see: cleanup_attributes)

        PROCESS_INFORMATION pi = {0};
        if (0 == ::CreateProcessA(
                    NULL,                       // No module name - use Command Line
                    (LPSTR) shell,              // Command Line
                    NULL,                       // Process handle not inheritable
                    NULL,                       // Thread handle not inheritable
                    FALSE,                      // Inherit handles
                    EXTENDED_STARTUPINFO_PRESENT|       // Creation flags
                        CREATE_UNICODE_ENVIRONMENT|
                        CREATE_DEFAULT_ERROR_MODE|
                        CREATE_NEW_PROCESS_GROUP,
                     // CREATE_SUSPENDED
                    NULL,                       // Use parent's environment block
                    NULL,                       // Use parent's starting directory 
                    &sie.StartupInfo,           // Pointer to STARTUPINFO
                    &pi)) {                     // Pointer to PROCESS_INFORMATION
                cleanup_attributes();
                return false;
        }

        dwProcessId_ = pi.dwProcessId;
        hProcess_ = pi.hProcess;
//      hThread_ = pi.hThread;
        ::CloseHandle(pi.hThread);              // Close any unnecessary handles.
        attached_ = true;

        return true;
}


bool
ConPTY::attach_shell_as( /*user*/ /*shell*/ )
{
        return false;
}


bool
ConPTY::start_shell()
{
        if (! hThread_) return false;
//      ResumeThread(hThread_);                 // option; attach_shell()}
        return true;
}


bool
ConPTY::get_process_exit(DWORD &dwExit, DWORD dwTimeoutMs /*=0*/)
{
        BOOL ret = ::GetExitCodeProcess(hProcess_, &dwExit);
                    //  STILL_ACTIVE                = 0x00000103    Still running.
                    //  ProcessKilledExitCode       = 0x00000001    By Task Manager.
                    //  DebuggerInactiveExitCode    = 0xC0000354    STATUS_DEBUGGER_INACTIVE.
                    //  KeyboardInterruptExitCode   = 0xC000013A    Control-C/end session.
                    //  kDebuggerTerminatedExitCode = 0x40010004    Debugger terminated process.

        if (ret) {
                if (dwTimeoutMs && STILL_ACTIVE == dwExit) {
                        if (WAIT_TIMEOUT == ::WaitForSingleObject(hProcess_, dwTimeoutMs)) {
                                dwExit = WAIT_TIMEOUT;
                        } else {
                                ret = ::GetExitCodeProcess(hProcess_, &dwExit);
                        }
                }
        } else {
                dwExit = (DWORD)-1;             // undefined
        }
        return (ret ? true : false);
}


bool
ConPTY::winch(COORD size)
{
        return (is_open() && fnResizePseudoConsole(hPC_, size));
}


bool
ConPTY::winch(const struct winsize *win)
{
        if (win && win->ws_col && win->ws_row) {
                COORD size;
                size.X = win->ws_col;
                size.Y = win->ws_row;
                return winch(size);
        }
        return false;
}


bool
ConPTY::ctrlbreak()
{
        if (is_open()) {
                return (0 != ::GenerateConsoleCtrlEvent(CTRL_BREAK_EVENT, dwProcessId_));
                    // Note: The identifier of the process group to receive the signal. 
                    //  A process group is created when the CREATE_NEW_PROCESS_GROUP flag is specified in a call to the CreateProcess function. 
                    //  The process identifier of the new process is also the process group identifier of a new process group.
        }
        return false;
}


HANDLE
ConPTY::stdout_pipe() const
{
        return hPipeIn_;
}


HANDLE
ConPTY::stdin_pipe() const
{
        return hPipeOut_;
}


HANDLE
ConPTY::process_handle() const
{
        return hProcess_;
}


DWORD
ConPTY::process_identifier() const
{
        return dwProcessId_;
}


//static
bool
ConPTY::get_default_size(COORD &size)
{
        HANDLE hConsole = ::GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO csbi = {0};

        if (INVALID_HANDLE_VALUE != hConsole && ::GetConsoleScreenBufferInfo(hConsole, &csbi)) {
                size.X = (csbi.srWindow.Right - csbi.srWindow.Left) + 1;
                size.Y = (csbi.srWindow.Bottom - csbi.srWindow.Top)  + 1;
                return true;
        }
        size.X = 32, size.Y = 80;               // system (our) default.
        return false;
}


bool
ConPTY::is_open() const
{
        return (INVALID_HANDLE_VALUE != hPC_);
}


bool
ConPTY::is_attached() const
{
        return attached_;
}


bool
ConPTY::terminate(int exit_code, bool wait /*=false*/)
{      
        if (! is_open()) return false;

        const bool result = (::TerminateProcess(hProcess_, exit_code) != FALSE);
        if (result) {
                if (wait) {                     // WARNING: may deadlock if pending i/o required.
                        if (WAIT_OBJECT_0 != ::WaitForSingleObject(hProcess_, 60 * 1000)) {
//                              error("Error waiting for process exit")
                        }
                }
                close();

        } else if (! result) {
//              error("Unable to terminate process");
        }
        return result;
}


//static
void
ConPTY::cleanup_attributes()
{
        if (pThreadhreadAttributeList_) {
                ::DeleteProcThreadAttributeList(reinterpret_cast<LPPROC_THREAD_ATTRIBUTE_LIST>(pThreadhreadAttributeList_));
                free(pThreadhreadAttributeList_);
                pThreadhreadAttributeList_ = 0;
        }
}


void
ConPTY::close()
{
        disconnect();
        if (INVALID_HANDLE_VALUE != hPC_) {
                fnClosePseudoConsole(hPC_), hPC_ = INVALID_HANDLE_VALUE;
        }
        cleanup_attributes();
}


void
ConPTY::disconnect()
{
        if (INVALID_HANDLE_VALUE != hProcess_) {
                ::CloseHandle(hProcess_), hProcess_ = INVALID_HANDLE_VALUE;
        }
        if (INVALID_HANDLE_VALUE != hPipeIn_) {
                ::CloseHandle(hPipeIn_), hPipeIn_ = INVALID_HANDLE_VALUE;
        }
        if (INVALID_HANDLE_VALUE != hPipeOut_) {
                ::CloseHandle(hPipeOut_), hPipeOut_ = INVALID_HANDLE_VALUE;
        }
}

//end
