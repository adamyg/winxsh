#pragma once
#ifndef NTSERVICEREG_H_INCLUDED
#define NTSERVICEREG_H_INCLUDED
//
//  CNTService - Registry interface.
//

#include <Windows.h>

#define HKEY_LENGTH             1024

#define HKEY_NT_SERVICE         "SYSTEM\\CurrentControlSet\\Services"
#define HKEY_NT_LOG_EVENT       "SYSTEM\\CurrentControlSet\\Services\\EventLog\\Application"

#define HKEY_APPLICATION_PATH   "SYSTEM\\Software"
    /*
     *  "<HKEY_LOCAL_MACHINE\\SYSTEM\\Software\\[<company\\]<service>"
     *  "<HKEY_LOCAL_MACHINE\\Software\\[<company\\]<service>"
     *
     *  Alternative ''legacy'' location is:
     *      "SYSTEM\\CurrentControlSet\\Services\\<service>\\Parameters"
     */

namespace NTService {
    struct IDiagnostics;                        // Diagnostics interface.
};

class CNTServiceReg {
    CNTServiceReg(const class CNTServiceReg &) /*=delete*/;
    CNTServiceReg& operator=(const CNTServiceReg &) /*=delete*/;

public:
    CNTServiceReg(const char* szServiceName, NTService::IDiagnostics &diags, const char *szCompany = 0);
    virtual ~CNTServiceReg();

    void            SetDiagnostics(NTService::IDiagnostics &diags);
    NTService::IDiagnostics &diags() const;

    bool            SetCompany(const char *szCompany, bool reopen = false) /*noexcept*/;
    const char *    GetCompany() const /*noexcept*/;

    bool            Open(bool create = true) /*noexcept*/;
    bool            is_open() const /*noexcept*/;
//  operator bool() const /*noexcept*/;

    HKEY            RootKey() const /*noexcept*/;
    void            Close() /*noexcept*/;

    bool            List() /*noexcept*/;

#define CFG_WARN                0x0001          // Generate warning if omitted.
#define CFG_CONVERT             0x0002          // Convert string to numeric and numeric to string.

    bool            Set(const char *csKey, const char *szValue) /*noexcept*/;
    bool            Set(const char *csKey, DWORD dwValue) /*noexcept*/;
    bool            Get(const char *csKey, char *szBuffer, size_t &dwSize, unsigned flags = 0) /*noexcept*/;
    bool            Get(const char *csKey, DWORD &dwValue, unsigned flags = 0) /*noexcept*/;

public:
    static bool     Open(HKEY &hKey, NTService::IDiagnostics &diags, const char *csKey, bool writable = false, bool create = false);
    static bool     Open(HKEY hParent, HKEY &hKey, NTService::IDiagnostics &diags, const char *csKey, bool readonly, bool create = false);
    static void     Close(HKEY hKey);

    static bool     SetValue(HKEY hKey, NTService::IDiagnostics &diags, const char *csKey, const char *szValue);
    static bool     SetValue(HKEY hKey, NTService::IDiagnostics &diags, const char *csKey, DWORD dwValue);
    static bool     GetValue(HKEY hKey, NTService::IDiagnostics &diags, const char *csKey, char *szBuffer, size_t &dwSize, unsigned flags = 0);
    static bool     GetValue(HKEY hKey, NTService::IDiagnostics &diags, const char *csKey, DWORD &dwValue, unsigned flags = 0);

    static bool     List(HKEY hKey, const char *szKey, NTService::IDiagnostics &diags);

    static const char *StrError(DWORD dwError, char *buffer, size_t buflen);
    static void     SystemError(NTService::IDiagnostics &diags, const char *msg);

private:
    NTService::IDiagnostics *diags_;            // IDiagnostics reference.
    char szServiceName_[128];                   // Service name.
    char szCompany_[128];                       // Optional company name.
    char csRootKey_[HKEY_LENGTH];               // Derived root key.
    HKEY hRootKey_;                             // Root key.
};

#endif  //NTSERVICEREG_H_INCLUDED
