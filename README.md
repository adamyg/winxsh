
[![Website](https://img.shields.io/badge/View-Website-blue)](https://sourceforge.net/projects/winssh/) [![Build status](https://ci.appveyor.com/api/projects/status/6fq5on94pp3i87kj?svg=true&passingText=MSVC%20Passing&failingText=MSVC%20Failing&pendingText=MSVC%20Pending)](https://ci.appveyor.com/project/adamyg/winxsh-msvc/)

# WinRSH/WinSSH project

Lean Win32 native console clients with a built-in VT220/xterm-color256 terminal emulator.

   * slogin is a Windows console based SSH2 client, using LIBSSH2; with builtin terminal emulation.

   * rlogin is a RLOGIN(1) client; with builtin terminal emulation.

   * rsh is a RSH(1) client.


Plus a native win32 'rlogind' service.

   * rlogind is a RSH/RLOGIN service utilising ConPTY's

       This service is an investigation into the recently released Window's 10 Pseudo Console (ConPTY)
       infrustructure and API, in addition to enhanced console UTF-8 and VT functionality.

       Note: Limited login validation occurs, pty's shall be created under the service identity.
       Hence if running under the default Service account, shall have system rights.

       See for [Introducing the windows pseudo console ConPTY](https://devblogs.microsoft.com/commandline/windows-command-line-introducing-the-windows-pseudo-console-conpty)
       series of articles detailing recent developments.


### Project Samples

![256 color](https://github.com/adamyg/winxsh/blob/master/docs/ssh_colors256.png?raw=true)

![Midnight Commander](https://github.com/adamyg/winxsh/blob/master/docs/ssh_mc.png?raw=true)


### Distributions

Latest builds:

   * https://sourceforge.net/projects/winssh

   * https://sourceforge.net/projects/winrsh

Source:

   * https://github.com/adamyg/winxsh

Last Updated: 21/05/2020

-end-


