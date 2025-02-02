@echo off
rem
rem Microsoft Visual Studio C/C++ 2019/x64
rem
echo Configure: Microsoft Visual Studio C/C++ 2019/x64

if not defined GNUWIN32 (
        set GNUWIN32=\devl\gnuwin32
)

if not defined PERL (
        set PERL=perl
)

if not defined INNO (
        set INNO="C:/Program Files (x86)/Inno Setup 5/iscc"
)

%PERL% ./support/config_windows.pl makelib.pl --inno=%INNO% %* vc2019-x64
