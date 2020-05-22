#include <edidentifier.h>
__CIDENT_RCSID(NTServiceConfig_cpp, "$Id: NTServiceConfig.cpp,v 1.6 2020/05/22 12:49:41 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * CNTService - Classic window services framework.
 *
 * Copyright (c) 2020, Adam Young.
 * Based on the MSDN example service framework.
 *
 * This file is part of the WinRSH/WinSSH project.
 *
 * The WinRSH/WinSSH project is free software: you can redistribute it
 * and/or modify it under the terms of the WinRSH/WinSSH project License.
 *
 * Redistributions of source code must retain the above copyright
 * notice, and must be distributed with the license document above.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, and must include the license document above in
 * the documentation and/or other materials provided with the
 * distribution.
 *
 * The WinRSH/WinSSH project is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * ==end==
 */

#include <Windows.h>
#include <tchar.h>
#include <strsafe.h>

#pragma comment(lib, "advapi32.lib")

#include "NTServiceConfig.h"                    // public header
#include "NTServiceGetOpt.h"                    // argument parsing
#include "NTServiceReg.h"                       // registry
#include "NTService.h"                          // NTSERVICE_CMD_xxx


//
// Purpose:
//  Service attribute control.
//
CNTServiceConfig::CNTServiceConfig(const char *svcname, const char *coname, NTService::IDiagnostics &diags) :
        diags_(diags), svcName_(svcname), coName_(coname ? coname : "") {
}


CNTServiceConfig::~CNTServiceConfig() {
}


NTService::IDiagnostics &
CNTServiceConfig::diags() const
{
        return diags_;
}


//
// Purpose:
//  Execute service configuration verbs, 'qery', 'disable', 'enable',
//  'udpatedesc' and 'delete'.
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
int CNTServiceConfig::ExecuteCommand(int argc, const char * const *argv, unsigned filter)
{
        if (argc < 1) {
                return NTSERVICE_CMD_MISSING;

        } else if (svcName_.empty()) {
                return NTSERVICE_CMD_MISSING_SERVICE;
        }

        const char *cmd = argv[0];

        if (0 == (filter & 0x001) && 0 == _stricmp(cmd, "query")) {
                if (argc > 1) {
                    return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                Query();
                return 1;

        } else if (0 == (filter & 0x002) && 0 == _stricmp(cmd, "disable")) {
                if (argc > 1) {
                    return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                Disable();
                return 1;

        } else if (0 == (filter & 0x004) && 0 == _stricmp(cmd, "enable")) {
                if (argc > 1) {
                    return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                Enable();
                return 1;

        } else if (0 == (filter & 0x008) && 0 == _stricmp(cmd, "updatedesc")) {
                if (argc < 2) {
                    return NTSERVICE_CMD_MISSING_ARG;
                } else if (argc > 2) {
                    return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                UpdateDescription(argv[1]);
                return 2;

        } else if (0 == (filter & 0x010) && 0 == _stricmp(cmd, "delete")) {
                if (argc > 1) {                 // Note: uninstall perferred
                    return NTSERVICE_CMD_UNEXPECTED_ARG;
                }
                Delete();
                return 1;

        } else if (0 == (filter & 0x100) && 0 == _stricmp(cmd, "list")) {
                if (argc > 1) {
                    return NTSERVICE_CMD_UNEXPECTED_ARG;
                }

                CNTServiceReg registry(svcName_.c_str(), diags_, coName_.c_str());
                if (registry.Open()) {
                        registry.List();
                }
                return 1;

//      } else if (0 == (filter & 0x100) && 0 == _stricmp(cmd, "export")) {
                // Export configuration; to an ini.

        } else if (0 == (filter & 0x200) && 0 == _stricmp(cmd, "set")) {
                return SetAttribute(argc, argv);

//      } else if (0 == (filter & 0x400) && 0 == _stricmp(cmd, "clear")) {
                // Clear a variable

//      } else if (0 == (filter & 0x400) && 0 == _stricmp(cmd, "import")) {
                // Import configuration; from an ini.

        } else if (0 == (filter & 0x100) && 0 == _stricmp(cmd, "help")) {
                if (argc > 1) {                 // Note: uninstall perferred
                    return NTSERVICE_CMD_UNEXPECTED_ARG;
                }

                        diags_.info("\nService config commands:");
                if (0 == (filter & 0x001))
                        diags_.finfo("  query               - Retrieves and displays the current service configuration.");
                if (0 == (filter & 0x002))
                        diags_.finfo("  disable             - Disables the service.");
                if (0 == (filter & 0x004))
                        diags_.finfo("  enable              - Enables the service.");
                if (0 == (filter & 0x008))
                        diags_.finfo("  updatedesc <desc>   - Updates the service description to 'desc'.");
                if (0 == (filter & 0x010))
                        diags_.finfo("  delete              - Deletes the service from the SCM database (uninstall advised).");
                if (0 == (filter & 0x100))
                        diags_.finfo("  list                - Displays a list of current configuration attributes.");
//              if (0 == (filter & 0x100))
//                      diags_.finfo("  export              - Export the current configuration.");
                if (0 == (filter & 0x200))
                        diags_.finfo("  set                 - Set a configuration attribute value.");
                if (0 == (filter & 0x400))
                        diags_.finfo("  clear               - Delete an existing configuration attribute.");
//              if (0 == (filter & 0x400))
//                      diags_.finfo("  import              - Import an attribute set.");

                return NTSERVICE_CMD_HELP;
        }

        return NTSERVICE_CMD_UNKNOWN;
}


namespace {
        const char *ServiceTypeDesc(DWORD st) {
                switch (st) {
                case SERVICE_FILE_SYSTEM_DRIVER:
                        return "File system driver service";
                case SERVICE_KERNEL_DRIVER:
                        return "Driver service";
                case SERVICE_WIN32_OWN_PROCESS:
                        return "Service that runs in its own process";
                case SERVICE_WIN32_OWN_PROCESS | SERVICE_INTERACTIVE_PROCESS:
                        return "Service that runs in its own process, interactive";
                case SERVICE_WIN32_SHARE_PROCESS:
                        return "Service that shares a process with other services";
                case SERVICE_WIN32_SHARE_PROCESS | SERVICE_INTERACTIVE_PROCESS:
                        return "Service that shares a process with other services, interactive";
                }
                return "Unknown service type";
        }

        const char *StartTypeDesc(DWORD st) {
                switch (st) {
                case SERVICE_AUTO_START:
                        return "A service started automatically by the service control manager during system startup";
                case SERVICE_BOOT_START:
                        return "A device driver started by the system loader. This value is valid only for driver services";
                case SERVICE_DEMAND_START:
                        return "A service started by the service control manager when a process calls the StartService function";
                case SERVICE_DISABLED:
                        return "A service that cannot be started. Attempts to start the service result in the error code ERROR_SERVICE_DISABLED";
                case SERVICE_SYSTEM_START:
                        return "A device driver started by the IoInitSystem function. This value is valid only for driver services";
                }
                return "Unknown start type";
        }

        const char *ErrorControlDesc(DWORD ec) {
                switch (ec) {
                case SERVICE_ERROR_CRITICAL:
                        return "The startup program logs the error in the event log, if possible. If the last-known good configuration is being started, the startup operation fails. Otherwise, the system is restarted with the last-known good configuration";
                case SERVICE_ERROR_IGNORE:
                        return "The startup program ignores the error and continues the startup operation";
                case SERVICE_ERROR_NORMAL:
                        return "The startup program logs the error in the event log and continues the startup operation";
                case SERVICE_ERROR_SEVERE:
                        return "The startup program logs the error in the event log. If the last-known good configuration is being started, the startup operation continues. Otherwise, the system is restarted with the last-known-good configuration";
                }
                return "Unknown error control";
        }
}


//
// Purpose:
//   Retrieves and displays the current service configuration.
//
// Parameters:
//   None
//
// Return value:
//   None
//
void CNTServiceConfig::Query()
{
        SC_HANDLE schSCManager;
        SC_HANDLE schService;
        LPQUERY_SERVICE_CONFIG lpsc;
        LPSERVICE_DESCRIPTION lpsd;
        DWORD dwBytesNeeded, cbBufSize, dwError;

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
                SERVICE_QUERY_CONFIG);          // need query config access

        if (NULL == schService)
        {
                diags_.ferror("OpenService failed (%d)", ::GetLastError());
                CloseServiceHandle(schSCManager);
                return;
        }

        // Get the configuration information.

        if( !::QueryServiceConfig(schService, NULL, 0, &dwBytesNeeded))
        {
                dwError = ::GetLastError();
                if( ERROR_INSUFFICIENT_BUFFER == dwError )
                {
                        cbBufSize = dwBytesNeeded;
                        lpsc = (LPQUERY_SERVICE_CONFIG) ::LocalAlloc(LMEM_FIXED, cbBufSize);
                }
                else
                {
                        diags_.ferror("QueryCNTServiceConfig failed (%d)", dwError);
                        goto cleanup;
                }
        }

        if( !::QueryServiceConfig(schService, lpsc, cbBufSize, &dwBytesNeeded) )
        {
                diags_.ferror("QueryCNTServiceConfig failed (%d)", ::GetLastError());
                goto cleanup;
        }

        if( !::QueryServiceConfig2(schService, SERVICE_CONFIG_DESCRIPTION, NULL,  0, &dwBytesNeeded))
        {
                dwError = ::GetLastError();
                if( ERROR_INSUFFICIENT_BUFFER == dwError )
                {
                        cbBufSize = dwBytesNeeded;
                        lpsd = (LPSERVICE_DESCRIPTION) ::LocalAlloc(LMEM_FIXED, cbBufSize);
                }
                else
                {
                        diags_.ferror("QueryCNTServiceConfig2 failed (%d)", dwError);
                        goto cleanup;
                }
        }

        if (! ::QueryServiceConfig2(schService, SERVICE_CONFIG_DESCRIPTION, (LPBYTE) lpsd, cbBufSize, &dwBytesNeeded) )
        {
                diags_.ferror("QueryCNTServiceConfig2 failed (%d)", ::GetLastError());
                goto cleanup;
        }

        // Print the configuration information.
                diags_.finfo("%s configuration:", svcName_.c_str());
                diags_.finfo("  Type:          0x%x (%s)", lpsc->dwServiceType, ServiceTypeDesc(lpsc->dwServiceType));
                diags_.finfo("  Start Type:    0x%x (%s)", lpsc->dwStartType, StartTypeDesc(lpsc->dwStartType));
                diags_.finfo("  Error Control: 0x%x (%s)", lpsc->dwErrorControl, ErrorControlDesc(lpsc->dwErrorControl));
                diags_.finfo("  Binary path:   %s", lpsc->lpBinaryPathName);
                diags_.finfo("  Account:       %s", lpsc->lpServiceStartName);

        if (lpsd->lpDescription != NULL && lstrcmp(lpsd->lpDescription, "") != 0)
                diags_.finfo("  Description:   %s", lpsd->lpDescription);

        if (lpsc->lpLoadOrderGroup != NULL && lstrcmp(lpsc->lpLoadOrderGroup, "") != 0)
                diags_.finfo("  Load group:    %s", lpsc->lpLoadOrderGroup);

        if (lpsc->dwTagId != 0)
                diags_.finfo("  Tag ID:        %d", lpsc->dwTagId);

        if (lpsc->lpDependencies != NULL && lstrcmp(lpsc->lpDependencies, "") != 0)
                diags_.finfo("  Dependencies:  %s", lpsc->lpDependencies);

        ::LocalFree(lpsc);
        ::LocalFree(lpsd);

cleanup:
        ::CloseServiceHandle(schService);
        ::CloseServiceHandle(schSCManager);
}


//
// Purpose:
//   Disables the service.
//
// Parameters:
//   None
//
// Return value:
//   None
//
void CNTServiceConfig::Disable()
{
        SC_HANDLE schSCManager;
        SC_HANDLE schService;

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
                SERVICE_CHANGE_CONFIG);         // need change config access

        if (NULL == schService)
        {
                diags_.ferror("OpenService failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Change the service start type.

        if (! ::ChangeServiceConfig(
                schService,                     // handle of service
                SERVICE_NO_CHANGE,              // service type: no change
                SERVICE_DISABLED,               // service start type
                SERVICE_NO_CHANGE,              // error control: no change
                NULL,                           // binary path: no change
                NULL,                           // load order group: no change
                NULL,                           // tag ID: no change
                NULL,                           // dependencies: no change
                NULL,                           // account name: no change
                NULL,                           // password: no change
                NULL) )                         // display name: no change
        {
                diags_.ferror("ChangeCNTServiceConfig failed (%d)", ::GetLastError());
        }
        else
        {
                diags_.info("Service disabled successfully.");
        }

        ::CloseServiceHandle(schService);
        ::CloseServiceHandle(schSCManager);
}


//
// Purpose:
//   Enables the service.
//
// Parameters:
//   None
//
// Return value:
//   None
//
void CNTServiceConfig::Enable()
{
        SC_HANDLE schSCManager;
        SC_HANDLE schService;

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
                SERVICE_CHANGE_CONFIG);         // need change config access

        if (NULL == schService)
        {
                diags_.ferror("OpenService failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Change the service start type.

        if (! ::ChangeServiceConfig(
                schService,                     // handle of service
                SERVICE_NO_CHANGE,              // service type: no change
                SERVICE_DEMAND_START,           // service start type
                SERVICE_NO_CHANGE,              // error control: no change
                NULL,                           // binary path: no change
                NULL,                           // load order group: no change
                NULL,                           // tag ID: no change
                NULL,                           // dependencies: no change
                NULL,                           // account name: no change
                NULL,                           // password: no change
                NULL) )                         // display name: no change
        {
                diags_.ferror("ChangeCNTServiceConfig failed (%d)", ::GetLastError());
        }
        else
        {
                diags_.info("Service enabled successfully.");
        }

        ::CloseServiceHandle(schService);
        ::CloseServiceHandle(schSCManager);
}


//
// Purpose:
//   Updates the service description to 'desc'.
//
// Parameters:
//   None
//
// Return value:
//   None
//
void CNTServiceConfig::UpdateDescription(const char *desc)
{
        SC_HANDLE schSCManager;
        SC_HANDLE schService;
        SERVICE_DESCRIPTION sd;

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
                SERVICE_CHANGE_CONFIG);         // need change config access

        if (NULL == schService)
        {
                diags_.ferror("OpenService failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Change the service description.

        sd.lpDescription = const_cast<LPSTR>(desc);

        if( !ChangeServiceConfig2(
                schService,                     // handle to service
                SERVICE_CONFIG_DESCRIPTION,     // change: description
                &sd) )                          // new description
        {
                diags_.ferror("ChangeCNTServiceConfig2 failed");
        }
        else
        {
                diags_.info("Service description updated successfully.");
        }

        ::CloseServiceHandle(schService);
        ::CloseServiceHandle(schSCManager);
}


//
// Purpose:
//   Deletes a service from the SCM database
//
// Parameters:
//   None
//
// Return value:
//   None
//
void CNTServiceConfig::Delete()
{
        SC_HANDLE schSCManager;
        SC_HANDLE schService;

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
                DELETE);                        // need delete access

        if (NULL == schService)
        {
                diags_.ferror("OpenService failed (%d)", ::GetLastError());
                ::CloseServiceHandle(schSCManager);
                return;
        }

        // Delete the service.

        if (! ::DeleteService(schService) )
        {
                diags_.ferror("DeleteService failed (%d)\n", ::GetLastError());
        }
        else
        {
                diags_.info("Service deleted successfully");
        }

        ::CloseServiceHandle(schService);
        ::CloseServiceHandle(schSCManager);
}


//
// Purpose:
//   Set a configuration attribute
//
// Parameters:
//   None
//
// Return value:
//   None
//

int CNTServiceConfig::SetAttribute(int argc, const char * const *argv)
{
        using namespace NTService;

#define SETOPTIONS "SDH"

        static struct Getopt::Option long_options[] = {
                { "string",         Getopt::argument_none,      NULL, 'S' }, //-S,--string
                { "dword",          Getopt::argument_none,      NULL, 'D' }, //-D,--dword
                { "help",           Getopt::argument_none,      NULL, 'H' }, //-H,--help
                { NULL }
                };

        Getopt options(diags(), SETOPTIONS, long_options, argv[0]);
        DWORD dwType = REG_NONE;
        int base = 0;

        while (EOF != options.shift(argc, argv)) {
                switch (options.optret()) {
                case 'S':   //-S
                        dwType = REG_SZ;
                        break;
                case 'D':   //-D
                        dwType = REG_DWORD;
                        break;
                case 'H':   //-H,--help
                        goto set_help;
                default:
                        return NTSERVICE_CMD_INVALID_ARGS;
                }
        }

        argv += options.optind();
        argc -= options.optind();

        if (1 == argc && 0 == _stricmp("help", argv[0])) {
    set_help:;
                diags().finfo("  config set [arguments] <key> <value>.");
                diags().finfo("      -S,--string                     String element");
                diags().finfo("      -D,--dword                      DWORD element");
                diags().finfo("      -H,--help                       Command line help");
                return NTSERVICE_CMD_HELP;
        } else if (argc < 2) {
                return NTSERVICE_CMD_MISSING_ARG;
        } else if (argc > 2) {
                return NTSERVICE_CMD_UNEXPECTED_ARG;
        }

        // Parse key and value

        const char *key = argv[0], *value = argv[1];

        if (REG_NONE == dwType) {               // dword:000000001
                if (0 == _strnicmp("dword:", value, 6)) {
                        dwType = REG_DWORD;
                        value += 6;
                        base = 16;
                }
        }

        // Assign

        if (REG_DWORD == dwType) {              // DWORD
                char *end = 0;
                unsigned long dwValue = strtoul(value, &end, base);
                if (!end || *end) {
                        return NTSERVICE_CMD_INVALID_ARGS;
                }

                CNTServiceReg registry(svcName_.c_str(), diags_, coName_.c_str());
                if (registry.Open() && registry.Set(key, dwValue)) {
                        return 2;
                }

        } else {                                // otherwise SZ
                CNTServiceReg registry(svcName_.c_str(), diags_, coName_.c_str());
                if (registry.Open() && registry.Set(key, value)) {
                        return 2;
                }
        }

        return 0;       //error
}

//end

