#pragma once
#ifndef NTSERVICE_H_INCLUDED
#define NTSERVICE_H_INCLUDED
//
//  CNTService - Classic window services framework (tweaked).
//

#include <Windows.h>
#include <Winsvc.h>

#include "NTServiceIO.h"
#include "NTServiceReg.h"

#define SERVICE_CONTROL_USER    128         // User control message base.

#define NTSERVICE_CMD_HELP      -1              // Help.
#define NTSERVICE_CMD_MISSING_ARG -2            // Missing argument.
#define NTSERVICE_CMD_UNEXPECTED_ARG -3         // Unexpected arguments.
#define NTSERVICE_CMD_MISSING_SERVICE -4        // Missing service name.
#define NTSERVICE_CMD_MISSING   -5              // Missing command.
#define NTSERVICE_CMD_UNKNOWN   -6              // Unknown command.
#define NTSERVICE_CMD_INVALID_ARGS -7           // Invalid installation arguments.

class CNTService {
    CNTService(const class CNTService &) /*=delete*/;
    CNTService& operator=(const CNTService &) /*=delete*/;

public:
    struct InstallArguments {
            const char *account;                // Name of the account under which the service should run.
            const char *password;               // Password to the account name specified by the 'ServiceStartName'
            const char *displayname;            // Optional, display name to be used by user interface programs to identify the service.
            const char *description;            // Optional, service desciption.
            bool auto_start;                    // Auto otherwise manual start.
            bool grant_control;                 // Optional grant start control.
            const char *additional;             // Additional, appended onto the service path.
            char buffer[1024];                  // Working buffer; for InstallArgumentsParse() implementation use.
    };

public:
    CNTService(const char* szServiceName, NTService::IDiagnostics &diags = NTService::StdioDiagnosticsIO::Get());
    virtual ~CNTService();

    NTService::IDiagnostics &diags() const;

    int             ExecuteCommand(int argc, const char * const *argv, unsigned filter = 0);
    virtual void    InstallArgumentsUsage();
    virtual int     InstallArgumentsParse(int, const char * const *, InstallArguments &arguments);
    static const char *ExecuteReturnDesc(int ret);

    bool            SetVersion(unsigned major, unsigned minor, unsigned release = 0);
    bool            SetDescription(const char *description);
    bool            SetCompany(const char *szCompany, bool reopen = false);
    const char *    GetCompany() const;

    bool            SetConsoleMode(bool state, bool trap = true);
    bool            GetConsoleMode() const;

    bool            Start();
    bool            SetStatus(DWORD dwState, DWORD dwWin32ExitCode = 0, DWORD dwWaitHint = 0);
    bool            Initialize();

    virtual void    ServiceRun();
    virtual bool    OnInit();
    virtual void    OnStop();
    virtual void    OnInterrogate();
    virtual void    OnPause();
    virtual void    OnContinue();
    virtual void    OnShutdown();
    virtual bool    OnUserControl(DWORD dwOpcode);

    bool            IsRunning() const;
    bool            IsAdmin() const;
    HANDLE          StopEvent() const;
    DWORD           GetWin32ExitCode() const;

    void            ShowVersion();
    bool            ShowUser();
    void            ShowModules(bool verbose = true);
    void            ShowStatistics();

    void            LogMessage(const char *fmt, ...);
    void            LogError(bool assystem, const char *fmt, ...);

    virtual bool    ConfigOpen(bool create = true);
    virtual void    ConfigClose();
    virtual bool    ConfigUpdateProfile();
    virtual bool    ConfigSet(const char *csKey, const char *szValue);
    virtual bool    ConfigSet(const char *csKey, DWORD dwValue);
    virtual int     ConfigGet(const char *csKey, char *szBuffer, size_t size, unsigned flags = 0);
    virtual bool    ConfigGet(const char *csKey, DWORD &dwValue, unsigned flags = 0);

    static const char *DefaultServiceName(const char *arg0, char *buf, size_t buflen);

public:
    void            __ModuleEnumImp(HMODULE hModule, bool loaded = true);

protected:
    void            SetDiagnostics(NTService::IDiagnostics &diags);
    bool            ConsoleStart();
    bool            ServiceStart();

    virtual void    ServiceTrace(const char *fmt, ...);

    void            LogEvent(WORD wType, DWORD dwID, const char* pszS1 = NULL,const char* pszS2 = NULL, const char* pszS3 = NULL);

    const char *    StrError(DWORD dwError);
    const char *    StrError();

private:
    // Support functions
    bool            IsInstalled() const;
    bool            Install(const InstallArguments &);
    bool            Uninstall();
    void            SystemError(const char *msg);

    // Static bindings
    static void WINAPI ServiceMain(DWORD dwArgc, LPTSTR* lpszArgv);
    static void WINAPI ControlHandler(DWORD dwOpcode);
    static BOOL WINAPI ConsoleHandler(DWORD dwCtrlType);

private:
    // Data members
    NTService::IDiagnostics *diags_;
    CNTServiceReg   registry_;                  // registry implementation; TODO: IRegistry_
    char            m_szServiceName[128];       // note: system limit is 256.
    char            m_szModule[256];            // binary path.
    char            m_szDescription[256];
    char            m_szStrError[256];          // last StrError() result.
    unsigned        m_iMajorVersion;
    unsigned        m_iMinorVersion;
    unsigned        m_iReleaseVersion;
    FILETIME        m_startTime;
    HANDLE          m_hStopEvent;               // service stop event.
    HANDLE          m_hEventSource;
    SERVICE_STATUS_HANDLE m_hServiceStatus;
    SERVICE_STATUS  m_Status;
    DWORD           m_dwControlsAccepted;
    DWORD           m_dwCheckPoint;
    bool            m_bIsRunning;
    bool            m_bRunAsConsole;
    bool            m_bConsoleTrap;
    bool            m_bDebugOutput;

    // static data
    static CNTService* __serviceInstance;       // service singleton
};

#endif //NTSERVICE_H_INCLUDED
