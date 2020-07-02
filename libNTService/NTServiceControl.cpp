#include <edidentifier.h>
__CIDENT_RCSID(NTServiceControl_cpp, "$Id: NTServiceControl.cpp,v 1.5 2020/07/02 21:25:09 cvsuser Exp $")
/* -*- mode: c; indent-width: 8; -*- */
/*
 * CNTService - Classic window services framework.
 *
 * Copyright (c) 2020, Adam Young.
 * Based on the MSDN example service framework.
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

#include <Windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <aclapi.h>

#pragma	comment(lib, "advapi32.lib")

#include "NTServiceControl.h"                   // public interface
#include "NTService.h"

static bool StopDependentServices(SC_HANDLE schSCManager, SC_HANDLE schService);


//
// Purpose:
//  Service attribute control.
//
CNTServiceControl::CNTServiceControl(const char *svcname, NTService::IDiagnostics &diags) :
        diags_(diags), svcName_(svcname) {
}


CNTServiceControl::~CNTServiceControl() {
}


//
// Purpose:
//  Execute service configuration verbs, 'start', 'stop', 'updatedacl'.
//
// Return value:
//  Function return, otherwise a negative error condition;
//
//  NTSERVICE_CMD_HELP              Help.
//  NTSERVICE_CMD_MISSING_ARG       Missing argument.
//  NTSERVICE_CMD_UNEXPECTED_ARG    Unexpected arguments.
//  NTSERVICE_CMD_MISSING   Missing command.
//  NTSERVICE_CMD_MISSING_SERVICE   Missing service name.
//  NTSERVICE_CMD_UNKNOWN           Unknown command.
//
int CNTServiceControl::ExecuteCommand(int argc, const char * const *argv, unsigned filter)
{
        if (argc < 1) {
                return NTSERVICE_CMD_MISSING;

        } else if (svcName_.empty()) {
                return NTSERVICE_CMD_MISSING_SERVICE;
        }

        const char *cmd = argv[0];

        if (0 == (filter & 0x001) && 0 == _stricmp(cmd, "start")) {
                if (argc > 1) {
                        return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                Start();
            return 1;

        } else if (0 == (filter & 0x002) && 0 == _stricmp(cmd, "stop")) {
                if (argc > 1) {
                        return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                Stop();
                return 1;

        } else if (0 == (filter & 0x004) && 0 == _stricmp(cmd, "updatedacl")) {
                if (argc > 1) {
                        return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                UpdateDacl();
                return 1;

        } else if (0 == (filter & 0x100) && 0 == _stricmp(cmd, "help")) {
                if (argc > 1) {
                        return NTSERVICE_CMD_UNEXPECTED_ARG;
                }

                        diags_.info("\nService control commands:");
                if (0 == (filter & 0x001))
                        diags_.finfo("  start               - Starts the service if possible.");
                if (0 == (filter & 0x002))
                        diags_.finfo("  stop                - Stops the service.");
                if (0 == (filter & 0x004))
                        diags_.finfo("  updatedacl          - Updates the DACL to grant start, stop, delete, and read access to the Guest account.");

                return NTSERVICE_CMD_HELP;
        }

        return NTSERVICE_CMD_UNKNOWN;
}


//
// Purpose:
//   Starts the service if possible.
//
// Parameters:
//   None
//
// Return value:
//   None
//
void CNTServiceControl::Start()
{
        SC_HANDLE schSCManager;
        SC_HANDLE schService;
        SERVICE_STATUS_PROCESS ssStatus;
#if defined(__WATCOMC__)
#define dwOldCheckPoint dwOldCheckpoint         // otype witin SDK
#define dwCheckPoint dwCheckpoint
#endif
        DWORD dwOldCheckPoint;
        DWORD dwStartTickCount;
        DWORD dwWaitTime;
        DWORD dwBytesNeeded;

        // Get a handle to the SCM database.

        schSCManager = ::OpenSCManager(
                NULL,                           // local computer
                NULL,                           // servicesActive database
                SC_MANAGER_ALL_ACCESS);         // full access rights

        if (NULL == schSCManager)
        {
                diags_.ferror("OpenSCManager failed (%d)", ::GetLastError());
                return;
        }

        // Get a handle to the service.

        schService = ::OpenService(
                schSCManager,                   // SCM database
                svcName_.c_str(),               // name of service
                SERVICE_ALL_ACCESS);            // full access

        if (NULL == schService)
        {
                diags_.ferror("OpenService failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Check the status in case the service is not stopped.

        if (! ::QueryServiceStatusEx(
                schService,                     // handle to service
                SC_STATUS_PROCESS_INFO,         // information level
                (LPBYTE) &ssStatus,             // address of structure
                sizeof(SERVICE_STATUS_PROCESS), // size of structure
                &dwBytesNeeded ) )              // size needed if buffer is too small
        {
                diags_.ferror("QueryServiceStatusEx failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schService);
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Check if the service is already running. It would be possible
        // to stop the service here, but for simplicity this example just returns.

        if(ssStatus.dwCurrentState != SERVICE_STOPPED && ssStatus.dwCurrentState != SERVICE_STOP_PENDING)
        {
                diags_.ferror("Cannot start the service because it is already running");
                ::CloseServiceHandle(schService);
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Save the tick count and initial checkpoint.

        dwStartTickCount = GetTickCount();
        dwOldCheckPoint  = ssStatus.dwCheckPoint;

        // Wait for the service to stop before attempting to start it.

        while (ssStatus.dwCurrentState == SERVICE_STOP_PENDING)
        {
                // Do not wait longer than the wait hint. A good interval is
                // one-tenth of the wait hint but not less than 1 second
                // and not more than 10 seconds.

                dwWaitTime = ssStatus.dwWaitHint / 10;

                if( dwWaitTime < 1000 )
                    dwWaitTime = 1000;
                else if ( dwWaitTime > 10000 )
                    dwWaitTime = 10000;

                ::Sleep( dwWaitTime );

                // Check the status until the service is no longer stop pending.

                if (!::QueryServiceStatusEx(
                        schService,             // handle to service
                        SC_STATUS_PROCESS_INFO, // information level
                        (LPBYTE) &ssStatus,     // address of structure
                        sizeof(SERVICE_STATUS_PROCESS), // size of structure
                        &dwBytesNeeded ) )      // size needed if buffer is too small
                {
                        diags_.ferror("QueryServiceStatusEx failed (%d)", ::GetLastError());
                        ::CloseServiceHandle(schService);
                        ::CloseServiceHandle(schSCManager);
                        return;
                }

                if (ssStatus.dwCheckPoint > dwOldCheckPoint)
                {
                        // Continue to wait and check.

                        dwStartTickCount = GetTickCount();
                        dwOldCheckPoint = ssStatus.dwCheckPoint;
                }
                else
                {
                        if(::GetTickCount()-dwStartTickCount > ssStatus.dwWaitHint)
                        {
                            diags_.ferror("Timeout waiting for service to stop");
                            ::CloseServiceHandle(schService);
                            ::CloseServiceHandle(schSCManager);
                            return;
                        }
                }
        }

        // Attempt to start the service.

        if (!::StartService(
                schService,                     // handle to service
                0,                              // number of arguments
                NULL) )                         // no arguments
        {
                diags_.ferror("StartService failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schService);
                ::CloseServiceHandle(schSCManager);
                return;
        }
        else
        {
                diags_.finfo("Service start pending...");
        }

        // Check the status until the service is no longer start pending.

        if (!::QueryServiceStatusEx(
                schService,                     // handle to service
                SC_STATUS_PROCESS_INFO,         // info level
                (LPBYTE) &ssStatus,             // address of structure
                sizeof(SERVICE_STATUS_PROCESS), // size of structure
                &dwBytesNeeded ) )              // if buffer too small
        {
                diags_.ferror("QueryServiceStatusEx failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schService);
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Save the tick count and initial checkpoint.

        dwStartTickCount = GetTickCount();
        dwOldCheckPoint = ssStatus.dwCheckPoint;

        while (ssStatus.dwCurrentState == SERVICE_START_PENDING)
        {
            // Do not wait longer than the wait hint. A good interval is
            // one-tenth the wait hint, but no less than 1 second and no
            // more than 10 seconds.

            dwWaitTime = ssStatus.dwWaitHint / 10;

            if( dwWaitTime < 1000 )
                dwWaitTime = 1000;
            else if ( dwWaitTime > 10000 )
                dwWaitTime = 10000;

            Sleep( dwWaitTime );

            // Check the status again.

            if (!QueryServiceStatusEx(
                schService,                         // handle to service
                SC_STATUS_PROCESS_INFO,             // info level
                (LPBYTE) &ssStatus,                 // address of structure
                sizeof(SERVICE_STATUS_PROCESS),     // size of structure
                &dwBytesNeeded ) )                  // if buffer too small
            {
                diags_.ferror("QueryServiceStatusEx failed (%d)", ::GetLastError());
                break;
            }

            if ( ssStatus.dwCheckPoint > dwOldCheckPoint )
            {
                // Continue to wait and check.

                dwStartTickCount = GetTickCount();
                dwOldCheckPoint = ssStatus.dwCheckPoint;
            }
            else
            {
                if (::GetTickCount()-dwStartTickCount > ssStatus.dwWaitHint)
                {
                    // No progress made within the wait hint.
                    break;
                }
            }
        }

        // Determine whether the service is running.

        if (ssStatus.dwCurrentState == SERVICE_RUNNING)
        {
            diags_.info("Service started successfully.");
        }
        else
        {
            diags_.info("Service not started.");
            diags_.finfo("  Current State: %d", ssStatus.dwCurrentState);
            diags_.finfo("  Exit Code: %d",     ssStatus.dwWin32ExitCode);
            diags_.finfo("  Check Point: %d",   ssStatus.dwCheckPoint);
            diags_.finfo("  Wait Hint: %d",     ssStatus.dwWaitHint);
        }

        ::CloseServiceHandle(schService);
        ::CloseServiceHandle(schSCManager);
}


//
// Purpose:
//   Updates the service DACL to grant start, stop, delete, and read control access to the Guest account.
//
// Parameters:
//   None
//
// Return value:
//   None
//
void CNTServiceControl::UpdateDacl()
{
        SC_HANDLE            schSCManager;
        SC_HANDLE            schService;
        EXPLICIT_ACCESS      ea;
        SECURITY_DESCRIPTOR  sd;
        PSECURITY_DESCRIPTOR psd            = NULL;
        PACL                 pacl           = NULL;
        PACL                 pNewAcl        = NULL;
        BOOL                 bDaclPresent   = FALSE;
        BOOL                 bDaclDefaulted = FALSE;
        DWORD                dwError        = 0;
        DWORD                dwSize         = 0;
        DWORD                dwBytesNeeded  = 0;

        // Get a handle to the SCM database.

        schSCManager = ::OpenSCManager(
                NULL,                           // local computer
                NULL,                           // ServicesActive database
                SC_MANAGER_ALL_ACCESS);         // full access rights

        if (NULL == schSCManager)
        {
                diags_.ferror("OpenSCManager failed (%d)", ::GetLastError());
                return;
        }

        // Get a handle to the service

        schService = ::OpenService(
                schSCManager,                   // SCManager database
                svcName_.c_str(),               // name of service
                READ_CONTROL | WRITE_DAC);      // access

        if (NULL == schService)
        {
                diags_.ferror("OpenService failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Get the current security descriptor.

        if (!::QueryServiceObjectSecurity(schService, DACL_SECURITY_INFORMATION,
                        &psd,                   // using NULL does not work on all versions
                        0, &dwBytesNeeded))
        {
                if (::GetLastError() == ERROR_INSUFFICIENT_BUFFER)
                {
                        dwSize = dwBytesNeeded;
                        psd = (PSECURITY_DESCRIPTOR)::HeapAlloc(::GetProcessHeap(), HEAP_ZERO_MEMORY, dwSize);
                        if (psd == NULL)
                        {
                                // Note: HeapAlloc does not support GetLastError.
                                diags_.error("HeapAlloc failed");
                                goto dacl_cleanup;
                        }

                        if (!::QueryServiceObjectSecurity(schService,
                                    DACL_SECURITY_INFORMATION, psd, dwSize, &dwBytesNeeded))
                        {
                                diags_.ferror("QueryServiceObjectSecurity failed (%d)", ::GetLastError());
                                goto dacl_cleanup;
                        }
                }
                else
                {
                        diags_.ferror("QueryServiceObjectSecurity failed (%d)", ::GetLastError());
                        goto dacl_cleanup;
                }
        }

        // Get the DACL.

        if (!::GetSecurityDescriptorDacl(psd, &bDaclPresent, &pacl, &bDaclDefaulted))
        {
                diags_.ferror("GetSecurityDescriptorDacl failed(%d)", ::GetLastError());
                goto dacl_cleanup;
        }

        // Build the ACE.

        ::BuildExplicitAccessWithName(&ea, TEXT("GUEST"),
                    SERVICE_START | SERVICE_STOP | READ_CONTROL | DELETE, SET_ACCESS, NO_INHERITANCE);

        dwError = ::SetEntriesInAcl(1, &ea, pacl, &pNewAcl);
        if (dwError != ERROR_SUCCESS)
        {
                diags_.ferror("SetEntriesInAcl failed(%d)", dwError);
                goto dacl_cleanup;
        }

        // Initialize a new security descriptor.

        if (!::InitializeSecurityDescriptor(&sd, SECURITY_DESCRIPTOR_REVISION))
        {
                diags_.ferror("InitializeSecurityDescriptor failed(%d)", ::GetLastError());
                goto dacl_cleanup;
        }

        // Set the new DACL in the security descriptor.

        if (!::SetSecurityDescriptorDacl(&sd, TRUE, pNewAcl, FALSE))
        {
                diags_.ferror("SetSecurityDescriptorDacl failed(%d)", ::GetLastError());
                goto dacl_cleanup;
        }

        // Set the new DACL for the service object.

        if (!::SetServiceObjectSecurity(schService, DACL_SECURITY_INFORMATION, &sd))
        {
                diags_.ferror("SetServiceObjectSecurity failed(%d)n", ::GetLastError());
                goto dacl_cleanup;
        }
        else
        {
                diags_.info("Service DACL updated successfully");
        }

dacl_cleanup:
        ::CloseServiceHandle(schSCManager);
        ::CloseServiceHandle(schService);

        if(NULL != pNewAcl)
                ::LocalFree((HLOCAL)pNewAcl);
        if(NULL != psd)
                ::HeapFree(GetProcessHeap(), 0, (LPVOID)psd);
}


//
// Purpose:
//   Stops the service.
//
// Parameters:
//   None
//
// Return value:
//   None
//
void CNTServiceControl::Stop()
{
        SC_HANDLE schSCManager;
        SC_HANDLE schService;
        SERVICE_STATUS_PROCESS ssp;
        DWORD dwStartTime = ::GetTickCount();
        DWORD dwBytesNeeded;
        DWORD dwTimeout = 30000;                // 30-second time-out
        DWORD dwWaitTime;

        // Get a handle to the SCM database.

        schSCManager = ::OpenSCManager(
                NULL,                           // local computer
                NULL,                           // ServicesActive database
                SC_MANAGER_ALL_ACCESS);         // full access rights

        if (NULL == schSCManager)
        {
                diags_.ferror("OpenSCManager failed (%d)", ::GetLastError());
                return;
        }

        // Get a handle to the service.

        schService = ::OpenService(
                schSCManager,                   // SCM database
                svcName_.c_str(),               // name of service
                SERVICE_STOP |
                SERVICE_QUERY_STATUS |
                SERVICE_ENUMERATE_DEPENDENTS);

        if (NULL == schService)
        {
                diags_.ferror("OpenService failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Make sure the service is not already stopped.

        if ( !::QueryServiceStatusEx(schService, SC_STATUS_PROCESS_INFO, (LPBYTE)&ssp,
                        sizeof(SERVICE_STATUS_PROCESS), &dwBytesNeeded ) )
        {
                diags_.ferror("QueryServiceStatusEx failed (%d)", ::GetLastError());
                goto stop_cleanup;
        }

        if ( ssp.dwCurrentState == SERVICE_STOPPED )
        {
                diags_.info("Service is already stopped.");
                goto stop_cleanup;
        }

        // If a stop is pending, wait for it.

        while ( ssp.dwCurrentState == SERVICE_STOP_PENDING )
        {
                diags_.info("Service stop pending...");

                // Do not wait longer than the wait hint. A good interval is
                // one-tenth of the wait hint but not less than 1 second
                // and not more than 10 seconds.

                dwWaitTime = ssp.dwWaitHint / 10;
                if( dwWaitTime < 1000 )
                        dwWaitTime = 1000;
                else if ( dwWaitTime > 10000 )
                        dwWaitTime = 10000;

                ::Sleep( dwWaitTime );

                if ( !::QueryServiceStatusEx(schService, SC_STATUS_PROCESS_INFO, (LPBYTE)&ssp,
                                sizeof(SERVICE_STATUS_PROCESS), &dwBytesNeeded ) )
                {
                        diags_.ferror("QueryServiceStatusEx failed (%d)", ::GetLastError());
                        goto stop_cleanup;
                }

                if ( ssp.dwCurrentState == SERVICE_STOPPED )
                {
                        diags_.info("Service stopped successfully.");
                        goto stop_cleanup;
                }

                if ( ::GetTickCount() - dwStartTime > dwTimeout )
                {
                        diags_.info("Service stop timed out.\n");
                        goto stop_cleanup;
                }
        }

        // If the service is running, dependencies must be stopped first.

        ::StopDependentServices(schSCManager, schService);

        // Send a stop code to the service.

        if ( !::ControlService(
                schService,
                SERVICE_CONTROL_STOP,
                (LPSERVICE_STATUS) &ssp ) )
        {
                diags_.ferror("ControlService failed (%d)", ::GetLastError());
                goto stop_cleanup;
        }

        // Wait for the service to stop.

        while ( ssp.dwCurrentState != SERVICE_STOPPED )
        {
                ::Sleep( ssp.dwWaitHint );

                if ( !::QueryServiceStatusEx(
                        schService,
                        SC_STATUS_PROCESS_INFO,
                        (LPBYTE)&ssp,
                        sizeof(SERVICE_STATUS_PROCESS),
                        &dwBytesNeeded ) )
                {
                        diags_.ferror("QueryServiceStatusEx failed (%d)", ::GetLastError());
                        goto stop_cleanup;
                }

                if ( ssp.dwCurrentState == SERVICE_STOPPED )
                        break;

                if ( ::GetTickCount() - dwStartTime > dwTimeout )
                {
                        diags_.info("Wait timed out");
                        goto stop_cleanup;
                }
        }
        diags_.finfo("Service stopped successfully");

stop_cleanup:
        ::CloseServiceHandle(schService);
        ::CloseServiceHandle(schSCManager);
}


static bool StopDependentServices(SC_HANDLE schSCManager, SC_HANDLE schService)
{
        DWORD i;
        DWORD dwBytesNeeded;
        DWORD dwCount;

        LPENUM_SERVICE_STATUS lpDependencies = NULL;
        ENUM_SERVICE_STATUS ess = {0};
        SC_HANDLE hDepService = 0;
        SERVICE_STATUS_PROCESS ssp = {0};

        DWORD dwStartTime = GetTickCount();
        DWORD dwTimeout = 30000; // 30-second time-out

        // Pass a zero-length buffer to get the required buffer size.
        if ( EnumDependentServices( schService, SERVICE_ACTIVE, lpDependencies, 0, &dwBytesNeeded, &dwCount ) )
        {
                 // If the Enum call succeeds, then there are no dependent
                 // services, so do nothing.
                 return true;
        }

        if ( ::GetLastError() != ERROR_MORE_DATA )
                return false;                   // Unexpected error

        // Allocate a buffer for the dependencies.
        lpDependencies = (LPENUM_SERVICE_STATUS) ::HeapAlloc( ::GetProcessHeap(), HEAP_ZERO_MEMORY, dwBytesNeeded );
        if ( !lpDependencies )
                return false;

        // Enumerate the dependencies.
        if ( !::EnumDependentServices( schService, SERVICE_ACTIVE, lpDependencies, dwBytesNeeded, &dwBytesNeeded, &dwCount ) )
                goto error;

        for ( i = 0; i < dwCount; i++ )
        {
                ess = *(lpDependencies + i);

                // Open the service.
                hDepService = ::OpenService( schSCManager, ess.lpServiceName, SERVICE_STOP | SERVICE_QUERY_STATUS );
                if (! hDepService)
                        goto error;

                // Send a stop code.
                if ( !::ControlService( hDepService, SERVICE_CONTROL_STOP, (LPSERVICE_STATUS) &ssp ) )
                        goto error;

                // Wait for the service to stop.
                while ( ssp.dwCurrentState != SERVICE_STOPPED )
                {
                    ::Sleep( ssp.dwWaitHint );

                    if ( !::QueryServiceStatusEx( hDepService, SC_STATUS_PROCESS_INFO,
                                    (LPBYTE)&ssp, sizeof(SERVICE_STATUS_PROCESS), &dwBytesNeeded ) )
                            goto error;

                    if ( ssp.dwCurrentState == SERVICE_STOPPED )
                            break;

                    if ( ::GetTickCount() - dwStartTime > dwTimeout)
                            goto error;
                }

                ::CloseServiceHandle( hDepService );
        }

        ::HeapFree( ::GetProcessHeap(), 0, lpDependencies );
        return true;

error:;
        if ( hDepService )
                ::CloseServiceHandle( hDepService );

        ::HeapFree( ::GetProcessHeap(), 0, lpDependencies );
        return false;
}

//end
