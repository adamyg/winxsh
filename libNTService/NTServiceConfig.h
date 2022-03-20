/*
 * CNTService - Classic window services framework (tweaked).
 * Service config.
 *
 * Copyright (c) 2020 - 2022, Adam Young.
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
 * license for more details.
 * ==end==
 */

#include "NTServiceIO.h"
#include "NTString.h"

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
    NTService::CString svcName_;
    NTService::CString coName_;
};

//end
