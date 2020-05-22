//
// Service Config
//

#include <string>

#include "NTServiceIO.h"

class CNTServiceReg;

class CNTServiceConfig {
    CNTServiceConfig(const class CNTServiceConfig &) /*=delete*/;
    CNTServiceConfig& operator=(const CNTServiceConfig &) /*=delete*/;

public:
    CNTServiceConfig(const char *svcname, const char *coname,
            NTService::IDiagnostics &diags = NTService::StdioDiagnosticsIO::Get());
    ~CNTServiceConfig();

    NTService::IDiagnostics &diags() const;
    int     ExecuteCommand(int argc, const char * const *argv, unsigned filter = 0);
    void    Query();
    void    Disable();
    void    Enable();
    void    UpdateDescription(const char *desc);
    void    Delete();
    int     SetAttribute(int argc, const char * const *argv);

private:
    NTService::IDiagnostics &diags_;
    std::string svcName_;
    std::string coName_;
};

//end
