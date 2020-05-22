#include <edidentifier.h>
__CIDENT_RCSID(NTServiceReg_cpp, "$Id: NTServiceReg.cpp,v 1.2 2020/05/22 12:49:41 cvsuser Exp $")

/* -*- mode: c; indent-width: 8; -*- */
/*
 * CNTService - Classic window services framework (tweaked).
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

#ifndef  _CRT_SECURE_NO_WARNINGS
#define  _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#include "NTServiceReg.h"                       // public interface
#include "NTServiceIO.h"                        // IDiagnostics


CNTServiceReg::CNTServiceReg(const char* szServiceName, NTService::IDiagnostics &diags, const char *szCompany /*= 0*/) :
                diags_(&diags), hRootKey_(0)
{
        memset(szServiceName_, 0, sizeof(szServiceName_));
        memset(szCompany_, 0, sizeof(szCompany_));

        assert(szServiceName);
        assert(strlen(szServiceName) < sizeof(szServiceName_));
        strncpy(szServiceName_, szServiceName, sizeof(szServiceName_)-1);
        szServiceName_[sizeof(szServiceName_) - 1] = 0;

        if (szCompany && *szCompany) {
                assert(strlen(szCompany) < sizeof(szCompany_));
                strncpy(szCompany_, szCompany, sizeof(szCompany_)-1);
                szCompany_[sizeof(szCompany_) - 1] = 0;
        }
}


CNTServiceReg::~CNTServiceReg()
{
        Close();
}


NTService::IDiagnostics &
CNTServiceReg::diags() const
{
        return *diags_;
}


void
CNTServiceReg::SetDiagnostics(NTService::IDiagnostics &diags)
{
        diags_ = &diags;
}


bool
CNTServiceReg::SetCompany(const char *szCompany, bool reopen /*=false*/)
{
        if (!szCompany) return false;
        if (is_open() && !reopen) {             // open?
                return false;
        }

        reopen = false;
        if (is_open()) {
                Close();
                reopen = true;
        }

        assert(strlen(szCompany) < sizeof(szCompany_));
        strncpy(szCompany_, szCompany, sizeof(szCompany_) - 1);
        szCompany_[sizeof(szCompany_) - 1] = 0;

        return (reopen ? Open() : true);
}


const char *
CNTServiceReg::GetCompany() const
{
        return szCompany_;
}


bool
CNTServiceReg::is_open() const
{
    return (0 != hRootKey_);
}


HKEY
CNTServiceReg::RootKey() const
{
        return hRootKey_;
}


bool
CNTServiceReg::Open(bool create)
{
        char  csKey[HKEY_LENGTH];

        if (hRootKey_)                          // open?
                return true;

        // Create root key

        if (szCompany_[0]) {                    // "Software\<company>\<service>"
                (void)snprintf(csKey, sizeof(csKey)-1, HKEY_APPLICATION_PATH "\\%s\\%s",
                        szCompany_, szServiceName_);
        } else {                                // "Software\<service>"
                (void)snprintf(csKey, sizeof(csKey)-1, HKEY_APPLICATION_PATH "\\%s",
                        szServiceName_);
        }
        csKey[sizeof(csKey) - 1] = 0;

        // Open and/or create

        if (! Open(hRootKey_, diags(), csKey, true, create)) {
                return false;
        }

        strncpy(csRootKey_, csKey, sizeof(csRootKey_) - 1);
        return true;
}


void
CNTServiceReg::Close()
{
        Close(hRootKey_), hRootKey_ = 0;
}


bool
CNTServiceReg::Set(const char *csKey, const char *szValue)
{
        assert(NULL == strchr(csKey, '\\'));
        return SetValue(hRootKey_, diags(), csKey, szValue);
}


bool
CNTServiceReg::Set(const char *csKey, DWORD dwValue)
{
        assert(NULL == strchr(csKey, '\\'));
        return SetValue(hRootKey_, diags(), csKey, dwValue);
}


bool
CNTServiceReg::Get(const char *csKey, char *szBuffer, size_t &dwSize, unsigned flags)
{
        assert(NULL == strchr(csKey, '\\'));
        return GetValue(hRootKey_, diags(), csKey, szBuffer, dwSize, flags);
}


bool
CNTServiceReg::Get(const char *csKey, DWORD &dwValue, unsigned flags)
{
        assert(NULL == strchr(csKey, '\\'));
        return GetValue(hRootKey_, diags(), csKey, dwValue, flags);
}


bool
CNTServiceReg::List()
{
        return List(hRootKey_, csRootKey_, diags());
}


/////////////////////////////////////////////////////////////////////////////////////////
//      Register primitives


//static
bool
CNTServiceReg::Open(HKEY &hKey, NTService::IDiagnostics &diags, const char *csKey, bool writable, bool create)
{
        return Open(HKEY_LOCAL_MACHINE, hKey, diags, csKey, writable, create);
}


//static
bool
CNTServiceReg::Open(HKEY hParent, HKEY &hKey, NTService::IDiagnostics &diags, const char *csKey, bool writable, bool create)
{
        HKEY  subKey = 0;
        DWORD dwRet = 0;

        if ((dwRet = ::RegOpenKeyEx(hParent, csKey, 0,
                            KEY_READ | (writable ? KEY_WRITE : 0), &subKey)) == ERROR_SUCCESS) {
                hKey = subKey;
                return true;
        }

        if (create) {                           // optional creation
                if ((dwRet = ::RegCreateKeyEx(hParent, csKey, 0, "", 0,
                                    KEY_READ | (writable ? KEY_WRITE : 0), NULL, &subKey, &dwRet)) == ERROR_SUCCESS) {
                        hKey = subKey;
                        return true;
                }
        }

        char errmsg[256];
        diags.ferror("Unable to open <%s> registry, error %u (%s)", csKey,
                (unsigned)dwRet, StrError(dwRet, errmsg, sizeof(errmsg)));
        return false;
}


//static
void
CNTServiceReg::Close(HKEY hKey)
{
        if (hKey) ::RegCloseKey(hKey);
}


//static
bool
CNTServiceReg::GetValue(HKEY key, NTService::IDiagnostics &diags,
        const char *csKey, char *szBuffer, size_t &dwSize, unsigned flags)
{
        if (!key) return false;

        assert(csKey);
        if (!csKey) return false;
        assert(NULL == strchr(csKey, '\\'));

        assert(szBuffer && dwSize);
        if (!szBuffer || !dwSize) return false;

        DWORD t_dwSize, dwType, t_dwResult = 0;
        LSTATUS status;

        t_dwSize = dwSize, dwType = 0;
        if ((status = ::RegQueryValueEx(key, csKey, NULL,
                            &dwType, (BYTE *) szBuffer, &t_dwSize)) == ERROR_SUCCESS && REG_DWORD == dwType) {
                if (t_dwSize >= dwSize) t_dwSize = dwSize - 1;
                szBuffer[t_dwSize] = 0;
                dwSize = t_dwSize;
                return true;
        }

        if (ERROR_MORE_DATA == status) {        // overflow
                diags.fwarning("parameter <%s> too large", csKey);

        } else if (ERROR_FILE_NOT_FOUND == status || ERROR_PATH_NOT_FOUND == status) {
                if (CFG_WARN & flags) {         // missing
                        diags.fwarning("parameter <%s> does not exist", csKey);
                }

        } else if (/*ERROR_SUCCESS == status &&*/ dwType && REG_SZ != dwType) {
                if (CFG_CONVERT & flags) {      // attempt conversion
                        if (REG_DWORD == dwType) {
                                t_dwSize = sizeof(t_dwResult);
                                if ((status = ::RegQueryValueEx(key, csKey, NULL,
                                                    &dwType, (BYTE *) &t_dwResult, &t_dwSize)) == ERROR_SUCCESS && REG_DWORD == dwType) {
                                        const int ret = snprintf(szBuffer, dwSize, "%lu", (unsigned long)t_dwResult);
                                        if (ret > 0 && (size_t)ret < dwSize) {
                                                dwSize = (size_t)ret;
                                                return true;
                                        }
                                }
                        }
                }
                diags.fwarning("parameter <%s> should be a string", csKey);

        } else {
                char errmsg[256];
                diags.ferror("unable to retrieve parameter <%s>: %u (%s)", csKey,
                        (unsigned)status, StrError(status, errmsg, sizeof(errmsg)));
        }

        dwSize = 0;
        return false;
}


//static
bool
CNTServiceReg::GetValue(HKEY key, NTService::IDiagnostics &diags,
        const char *csKey, DWORD &dwValue, unsigned flags)
{
        if (!key) return false;

        assert(csKey);
        if (!csKey) return false;
        assert(NULL == strchr(csKey, '\\'));

        char t_szResult[64];
        DWORD dwSize, dwType, t_dwResult = 0;
        LSTATUS status;

        dwSize = sizeof(DWORD), dwType = 0;
        if ((status = ::RegQueryValueEx(key, csKey, NULL,
                            &dwType, (BYTE *) &t_dwResult, &dwSize)) == ERROR_SUCCESS && REG_DWORD == dwType) {
                dwValue = t_dwResult;
                return true;
        }

        if (ERROR_FILE_NOT_FOUND == status || ERROR_PATH_NOT_FOUND == status) {
                if (CFG_WARN & flags) {         // missing
                        diags.fwarning("parameter <%s> does not exist", csKey);
                }

        } else if (/*(ERROR_SUCCESS == status || ERROR_MORE_DATA == status) &&*/ dwType && REG_DWORD != dwType) {
                if (CFG_CONVERT & flags) {      // attempt conversion
                        if (REG_SZ == dwType) {
                                dwSize = sizeof(t_szResult);
                                if ((status = ::RegQueryValueEx(key, csKey, NULL,
                                                    &dwType, (BYTE *) t_szResult, &dwSize)) == ERROR_SUCCESS && REG_SZ == dwType) {
                                        char *end = 0;
                                        unsigned long ret = strtoul(t_szResult, &end, 10);
                                        if (end && 0 == *end) {
                                                dwValue = (DWORD)ret;
                                                return true;
                                        }
                                }
                        }
                }
                diags.fwarning("parameter <%s> should be a numeric", csKey);

        } else {
                char errmsg[256];
                diags.ferror("unable to retrieve parameter <%s>: %u (%s)", csKey,
                        (unsigned)status, StrError(status, errmsg, sizeof(errmsg)));
        }

        return true;
}


//static
bool
CNTServiceReg::SetValue(HKEY key, NTService::IDiagnostics &diags,
        const char *csKey, const char *szValue)
{
        DWORD dwSize, dwRet;

        assert(szValue);
        if (!key || !szValue) return false;

        assert(csKey);
        if (!csKey) return false;
        assert(NULL == strchr(csKey, '\\'));

        //  Note: If szKey is NULL or an empty string, "",
        //  the function sets the type and data for the key's unnamed or default value.
        //
        dwSize = strlen(szValue) + 1 /*nul*/;
        if ((dwRet = ::RegSetValueExA(key, csKey, NULL,
                            REG_SZ, (const BYTE *)szValue, dwSize)) != ERROR_SUCCESS) {
                char errmsg[256];
                diags.ferror("Unable to update <%s>, error %u (%s)", csKey,
                        (unsigned)dwRet, StrError(dwRet, errmsg, sizeof(errmsg)));
                return false;
        }
        return true;
}


//static
bool
CNTServiceReg::SetValue(HKEY key, NTService::IDiagnostics &diags,
        const char *csKey, DWORD dwValue)
{
        DWORD dwSize, dwRet;

        if (!key) return false;

        assert(csKey);
        if (!csKey) return false;
        assert(NULL == strchr(csKey, '\\'));

        dwSize = sizeof(dwValue);
        if ((dwRet = ::RegSetValueExA(key, csKey, NULL,
                            REG_DWORD, (const BYTE *)dwValue, dwSize)) != ERROR_SUCCESS) {
                char errmsg[256];
                diags.ferror("Unable to update <%s>, error %u (%s)", csKey,
                        (unsigned)dwRet, StrError(dwRet, errmsg, sizeof(errmsg)));
                return false;
        }
        return true;
}


//static
//
// Purpose:
//   List application atttributes.
//
// Parameters:
//   None
//
// Return value:
//   None
//
bool
CNTServiceReg::List(HKEY hKey, const char *szKey, NTService::IDiagnostics &diags)
{
#define MAX_KEY_LENGTH 255
#define MAX_VALUE_NAME 16383

        TCHAR    achKey[MAX_KEY_LENGTH];        // buffer for subkey name
        DWORD    cbName;                        // size of name string
        TCHAR    achClass[MAX_PATH] = TEXT(""); // buffer for class name
        DWORD    cchClassName = MAX_PATH;       // size of class string
        DWORD    cSubKeys=0;                    // number of subkeys
        DWORD    cbMaxSubKey;                   // longest subkey size
        DWORD    cchMaxClass;                   // longest class string
        DWORD    cValues;                       // number of values for key
        DWORD    cchMaxValue;                   // longest value name
        DWORD    cbMaxValueData;                // longest value data
        DWORD    cbSecurityDescriptor;          // size of security descriptor
        FILETIME ftLastWriteTime;               // last write time
        char *pData;

        DWORD retCode = ::RegQueryInfoKey(
                hKey,                           // key handle
                achClass,                       // buffer for class name
                &cchClassName,                  // size of class string
                NULL,                           // reserved
                &cSubKeys,                      // number of subkeys
                &cbMaxSubKey,                   // longest subkey size
                &cchMaxClass,                   // longest class string
                &cValues,                       // number of values for this key
                &cchMaxValue,                   // longest value name
                &cbMaxValueData,                // longest value data
                &cbSecurityDescriptor,          // security descriptor
                &ftLastWriteTime);              // last write time

	if (ERROR_SUCCESS != retCode ||
                        (NULL == (pData = (char *)malloc(MAX_VALUE_NAME)))) {
                diags.finfo("Parameters <%s> : <error: %u>", szKey,
                    (ERROR_SUCCESS != retCode ? retCode : ERROR_NOT_ENOUGH_MEMORY));
		return false;
        }

        diags.finfo("Parameters <%s> : %u / %u", szKey, cSubKeys, cValues);

        if (cSubKeys) {

                HKEY  hSubKey = 0;
                DWORD i;

                // Enumerate keys

                for (i = 0; i < cSubKeys; ++i) {

                        cbName = MAX_KEY_LENGTH;
                        retCode = ::RegEnumKeyEx(hKey, i,
                                        achKey, &cbName, NULL,  NULL, NULL, &ftLastWriteTime);
                        if (ERROR_SUCCESS == retCode) {
                        } else if (ERROR_NO_MORE_ITEMS == retCode) {
                                break;
                        }

                        char szSubKey[HKEY_LENGTH];
                        (void) snprintf(szSubKey, sizeof(szSubKey) - 1, "%s\\%s", szKey, achKey);

                                                // recurse into child.
                        if (! ::RegOpenKeyEx(hKey, achKey, 0, KEY_READ, &hSubKey) == ERROR_SUCCESS) {
                                diags.finfo("Parameters <%s> : <error: %u>", szSubKey, retCode);
                                continue;
                        }

                        CNTServiceReg::List(hSubKey, szSubKey, diags);
                        ::RegCloseKey(hSubKey);
                }

                // Enumerate Values

                DWORD cbValue, dwType;
                unsigned long dwValue = 0;
                unsigned long long qwValue = 0;

#define FFORMAT "%32.32s"

                for (i = 0; i < cValues; ++i) {

                        // Retrieve value

                        cbName = MAX_KEY_LENGTH;
                        retCode = ::RegEnumValue(hKey, i, achKey, &cbName, NULL, &dwType, NULL, &cbValue);
                        if (ERROR_SUCCESS != retCode) {
                                diags.finfo(FFORMAT " (%d) : <type : %u, error: %u>", achKey, i + 1, dwType, retCode);
                                continue;
                        }

                        // Display

                        switch(dwType) {
                        case REG_NONE:          // ( 0 )  No value type
                                diags.finfo(FFORMAT " (%d) : <>", achKey, i + 1);
                                break;

                        case REG_SZ:            // ( 1 )  Unicode nul terminated string
                        case REG_EXPAND_SZ:     // ( 2 )  Unicode nul terminated string (with environment variable references)
                                cbValue = MAX_VALUE_NAME - 2;
	                        retCode = ::RegQueryValueEx(hKey, achKey, NULL, NULL, (LPBYTE) pData, &cbValue);
	                        if (ERROR_SUCCESS == retCode) {
                                        diags.finfo(FFORMAT "(%d) : <%s>", achKey, i + 1, pData);
                                }
                                break;

                        case REG_BINARY:        // ( 3 )  Free form binary
                                diags.finfo(FFORMAT " (%d) : <binary : %u>", achKey, i + 1, cbValue);
                                break;

                        case REG_DWORD:         // ( 4 )  32-bit number
	                        cbValue = sizeof(dwValue);
	                        retCode = ::RegQueryValueEx(hKey, achKey, NULL, NULL, (LPBYTE) &dwValue, &cbValue);
	                        if (ERROR_SUCCESS == retCode && cbValue == sizeof(dwValue)) {
                                        diags.finfo(FFORMAT " (%d) : <%lu>", achKey, i + 1, dwValue);
                                }
                                break;

                        case REG_MULTI_SZ:      // ( 7 )  Multiple Unicode strings
                                break;

                        case REG_QWORD:         // ( 11 ) 64-bit number
	                        cbValue = sizeof(qwValue);
	                        retCode = ::RegQueryValueEx(hKey, achKey, NULL, NULL, (LPBYTE) &qwValue, &cbValue);
	                        if (ERROR_SUCCESS == retCode && cbValue == sizeof(qwValue)) {
                                        diags.finfo(FFORMAT " (%d) : <%llu>", achKey, i + 1, qwValue);
                                }
                                break;

                      //case REG_DWORD_BIG_ENDIAN: // ( 5 )  32-bit number
                      //case REG_LINK:          // ( 6 )  Symbolic Link (unicode)
                      //case REG_RESOURCE_LIST: // ( 8 )  Resource list in the resource map
                      //case REG_FULL_RESOURCE_DESCRIPTOR: // ( 9 )  Resource list in the hardware description
                      //case REG_RESOURCE_REQUIREMENTS_LIST: // ( 10 )
                        default:
                                diags.finfo(FFORMAT " (%d) : <type : %u>", achKey, i + 1, dwType);
                                break;
                        }

                        if (ERROR_SUCCESS != retCode) {
                                diags.finfo(FFORMAT " (%d) : <type : %u, error: %u>", achKey, i + 1, dwType, retCode);
                        }
                }
        }

        ::free((void *)pData);
        return true;
}


/////////////////////////////////////////////////////////////////////////////////////////
//      Utilities

//static
//TODO: move to CNTServiceUtil
const char *
CNTServiceReg::StrError(DWORD dwError, char *buffer, size_t buflen)
{
        assert(buffer && buflen >= 32);

        DWORD   len = ::FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS |
                            FORMAT_MESSAGE_MAX_WIDTH_MASK, NULL,
                            dwError, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                                buffer, buflen - 1 /*nul*/, NULL);

        if (0 == len) {
                if ( !buffer || buflen < 32) {
                        return "Unknown error";
                }
                (void) memcpy(buffer, "Unknown error", sizeof("Unknown error"));
        } else {
                while (--len) {                 // remove trailing whitespace
                        const char ch = buffer[len];
                        if (ch == ' ' || ch == '.' || ch == '\n' || ch == '\r') {
                                continue;       // consume
                        }
                        break;  //done
                }
                buffer[len+1] = 0;
        }
        return buffer;
}


//static
//TODO: move to CNTServiceUtil
void
CNTServiceReg::SystemError(NTService::IDiagnostics &diags, const char *msg)
{
        DWORD   dwError = GetLastError();
        LPVOID  buf = NULL;

        ::FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS |
                FORMAT_MESSAGE_MAX_WIDTH_MASK | FORMAT_MESSAGE_ALLOCATE_BUFFER, NULL,
                dwError, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                    (LPTSTR) &buf, 0, NULL);

        diags.ferror("%s: System error 0x%x/%u (%s)\n", msg,
                (unsigned)dwError, (unsigned)dwError, (buf ? buf : "Unknown error"));

        ::LocalFree(buf);
}

//end
