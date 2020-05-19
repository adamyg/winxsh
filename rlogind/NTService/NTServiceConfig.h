//
// Service Config
//

#include <string>

#include "NTServiceIO.h"

class CNTServiceConfig {
    CNTServiceConfig(const class CNTServiceConfig &) /*=delete*/;
    CNTServiceConfig& operator=(const CNTServiceConfig &) /*=delete*/;

public:
    CNTServiceConfig(const char *svcname, NTService::IDiagnostics &diags = NTService::StdioDiagnosticsIO::Get());
    ~ CNTServiceConfig();

    int  ExecuteCommand(int argc, const char * const *argv, unsigned filter = 0);
    void Query();
    void Disable();
    void Enable();
    void UpdateDescription(const char *desc);
    void Delete();

private:
    NTService::IDiagnostics &diags_;
    std::string svcName_;
};

//end
