//
// Service Control
//

#include <string>

#include "NTServiceIO.h"

class CNTServiceControl {
    CNTServiceControl(const class CNTServiceControl &) /*=delete*/;
    CNTServiceControl& operator=(const CNTServiceControl &) /*=delete*/;

public:
    CNTServiceControl(const char *svcname, NTService::IDiagnostics &diags = NTService::StdioDiagnosticsIO::Get());
    ~ CNTServiceControl();

    int  ExecuteCommand(int argc, const char * const *argv, unsigned filter = 0);
    void Start();
    void UpdateDacl();
    void Stop();

private:
    NTService::IDiagnostics &diags_;
    std::string svcName_;
};

//end
