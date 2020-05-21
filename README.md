
[![Website](https://img.shields.io/badge/View-Website-blue)](https://sourceforge.net/projects/winssh/)


# WinRSH/WinSSH project

Lean Win32 native console clients with a built-in VT220/xterm-color256 terminal emulator.

   * slogin is a Windows console based SSH2 client, using LIBSSH2.

   * rlogin is a RSH/RLOGIN client.


Plus a native Win32 'rlogind' service.

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

Latest builds can be found at the links:

   * https://sourceforge.net/projects/winssh

   * https://sourceforge.net/projects/winrsh

Source:

   * https://github.com/adamyg/winxsh

Last Updated: 21/05/2020

-end-


