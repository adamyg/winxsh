;
; WinXSH - Inno Setup
;
; Adam Young, 2020 - 2025
;
; This file is part of the WinRSH/WinSSH project.
;
; The applications are free software: you can redistribute it
; and/or modify it under the terms of the GNU General Public License as
; published by the Free Software Foundation, either version 3.
;
; Redistributions of source code must retain the above copyright
; notice, and must be distributed with the license document above.
;
; Redistributions in binary form must reproduce the above copyright
; notice, and must include the license document above in
; the documentation and/or other materials provided with the
; distribution.
;
; The applications are distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.
;
; You should have received a copy of the GNU General Public License
; along with this program.  If not, see <http://www.gnu.org/licenses/>.
;

#if defined(BUILD_INFO)
#include "../include/buildinfo.h"
#else
#include "../packageinfo.h"
#endif

#if defined(BUILD_TOOLCHAIN)
#if defined(BUILD_TYPE)
#define BinDir "bin" + BUILD_TOOLCHAIN + "\\" + BUILD_TYPE
#else
#define BinDir "bin" + BUILD_TOOLCHAIN
#endif
#else
#define BinDir "bin"
#endif

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
;
AppId={{CBB4464D-4F2D-86AB-AF6D-4A9B82F5288A}
AppName=WinXSH
AppVersion={#WINSH_VERSION} (build: {#WINSH_BUILD_DATE}-{#WINSH_BUILD_NUMBER})
AppPublisherURL=https://github.com/adamyg/winxsh
AppSupportURL=https://github.com/adamyg/winxsh
AppUpdatesURL=https://github.com/adamyg/winxsh

DefaultDirName={pf}\WinXSH
DefaultGroupName=WinXSH
LicenseFile=..\COPYING

OutputDir=.
OutputBaseFilename=xsh-build{#WINSH_BUILD_NUMBER}-setup
Compression=lzma
SolidCompression=yes
ChangesEnvironment=true

UninstallDisplayIcon={app}\slogin.exe

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: modifypath; Description: Add application directory to your environmental path; Flags: unchecked
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked; OnlyBelowVersion: 0,6.1

[Registry]
Root: HKLM; Subkey: "Software\WinXSH"; ValueType: string; ValueName: ""; ValueData: {app}; Flags: uninsdeletevalue uninsdeletekeyifempty
Root: HKLM; Subkey: "Software\WinXSH"; ValueType: string; ValueName: "Path"; ValueData: "{app}"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\WinXSH"; ValueType: string; ValueName: "UninstallString"; ValueData: {uninstallexe}; Flags: uninsdeletevalue

Root: HKLM; Subkey: "Software\WinXSH"; ValueType: dword;  ValueName: "MajorVersion";  ValueData: "{#WINSH_VERSION_1}"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\WinXSH"; ValueType: dword;  ValueName: "MinorVersion";  ValueData: "{#WINSH_VERSION_2}"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\WinXSH"; ValueType: dword;  ValueName: "PatchVersion";  ValueData: "{#WINSH_VERSION_3}"; Flags: uninsdeletevalue
Root: HKLM; Subkey: "Software\WinXSH"; ValueType: dword;  ValueName: "BuildVersion";  ValueData: "{#WINSH_VERSION_4}"; Flags: uninsdeletevalue

[Files]
Source: "..\ChangeLog.txt";             DestDir: "{app}"; Flags: ignoreversion
Source: "..\{#BinDir}\rcmd.exe";        DestDir: "{app}"; Flags: ignoreversion
Source: "..\{#BinDir}\rlogin.exe";      DestDir: "{app}"; Flags: ignoreversion
Source: "..\{#BinDir}\rlogind.exe";     DestDir: "{app}"; Flags: ignoreversion
Source: "..\{#BinDir}\rsh.exe";         DestDir: "{app}"; Flags: ignoreversion
Source: "..\{#BinDir}\slogin.exe";      DestDir: "{app}"; Flags: ignoreversion
Source: "..\{#BinDir}\*.dll";           DestDir: "{app}"; Flags: ignoreversion
; NOTE: Dont use "Flags: ignoreversion" on any shared system files

[Run]
Filename: "{app}\slogin.exe"; Description: "{cm:LaunchProgram,WinXSH}"; Flags: nowait postinstall skipifsilent

[Code]
function WinXSHInstalled(var version, uninstallcmd:string):boolean;
var major,minor,patch,build:Cardinal;
begin
        Result := RegQueryDWordValue(HKLM, 'Software\WinXSH', 'MajorVersion', major)
                  and RegQueryDWordValue(HKLM, 'Software\WinXSH', 'MinorVersion', minor)
                  and RegQueryDWordValue(HKLM, 'Software\WinXSH', 'PatchVersion', patch)
                  and RegQueryDWordValue(HKLM, 'Software\WinXSH', 'BuildVersion', build);

        if not RegQueryStringValue(HKLM, 'Software\WinXSH', 'UninstallString', uninstallcmd)
        then if not RegQueryStringValue(HKLM, 'Software\WinXSH', 'Uninstall', uninstallcmd)
        then RegQueryStringValue(HKLM, 'Software\Microsoft\Windows\CurrentVersion\Uninstall\WinXSH', 'UninstallString', uninstallcmd);
        version := IntToStr(major)+'.'+IntToStr(minor)+'.'+IntToStr(patch)+'-'+IntToStr(build);
end;

function InitializeSetup(): Boolean;
        var version, uninst :string;
            msgres, execres :integer;
begin
        Result:=true;
        if WinXSHInstalled(version,uninst)
        then
                begin
                msgres:= MsgBox('winxsh-'+version+' is currently installed.'+#13#13 +'Do you want to uninstall it first?.', mbError, MB_YESNOCANCEL);
                case msgres of
                IdYes: begin
                        Exec(uninst, '', '', SW_SHOWNORMAL, true, execres);
                        Result:=InitializeSetup();
                        end;
                IdCancel:
                         Result:=false;
                IdNo: ;
                end;
        end;
end;

[Code]
const   ModPathName = 'modifypath';
        ModPathType = 'user';

function ModPathDir(): TArrayOfString;
begin
        setArrayLength(Result, 1)
        Result[0] := ExpandConstant('{app}');
end;

procedure DosToUnix();
var
        path : String;
        data : String;
        ANSIdata : AnsiString;
begin
        path := ExpandConstant(CurrentFileName);
        LoadStringFromFile(path, ANSIdata);
        data := String(ANSIData);
        StringChangeEx(data, #13#10, #10, True);
        SaveStringToFile(path, AnsiString(data), False);
end;

#include "modpath.iss"

