#pragma once
#if !defined(SERVICE_H_INCLUDED)
#define SERVICE_H_INCLUDED
/* -*- mode: c; indent-width: 8; -*- */
/*
 * rlogind serice adapter
 *
 * Copyright (c) 2020, Adam Young.
 * All rights reserved.
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

#if defined(_MSC_VER)
#include <msvc_system_error.hpp>
#endif
#include "../libNTService/NTService.h"
#include "SimpleIni/SimpleIni.h"

#include "Logger.h"

#include "rlogind.h"
#include "w32support.h"

class Service : public CNTService {
        BOOST_DELETED_FUNCTION(Service(const Service &))
        BOOST_DELETED_FUNCTION(Service& operator=(const Service &))

public:
        Service(const char *svcname, bool console_mode = true);
        ~Service();

        void Start(const struct Options &options);

protected:
        static  std::string ResolveRelative(const char *path);
        virtual bool CfgOpen(bool create = true);
        virtual void CfgClose();
        virtual bool CfgSetValue(HKEY key, const char *csKey, const char *szValue);
        virtual bool CfgSetValue(HKEY key, const char *csKey, DWORD dwValue);
        virtual bool CfgGetValue(HKEY key, const char *csKey, char *szBuffer, size_t &dwSize, unsigned flags = 0);
        virtual bool CfgGetValue(HKEY key, const char *csKey, DWORD &dwValue, unsigned flags = 0);

protected:
        void AttachLogger();
        bool ConfigLogger();
        virtual void ServiceRun();
        virtual void ServiceTrace(const char *fmt, ...);
        virtual bool OnInit();
        virtual void OnStop();

private:
        int Initialise();
        int Welcome(int);
        static DWORD WINAPI session_thread(LPVOID lpParam);

private:
        const struct Options *options_;
        CSimpleIniA *inifile_;
        Logger logger_;
};

#endif  //SERVICE_H_INCLUDED
//end
