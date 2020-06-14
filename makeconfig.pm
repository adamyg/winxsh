# $Id: makeconfig.pm,v 1.1 2020/06/14 00:49:50 cvsuser Exp $
# Makefile generation under Win32.
# -*- perl; tabs: 8; indent-width: 4; -*-
# Automake emulation for non-unix environments.
#
#
# Copyright (c) 2020, Adam Young.
# All rights reserved.
#
# This file is part of the WinRSH/WinSSH project.
#
# The WinRSH/WinSSH project is free software: you can redistribute it
# and/or modify it under the terms of the WinRSH/WinSSH project License.
#
# Redistributions of source code must retain the above copyright
# notice, and must be distributed with the license document above.
#
# Redistributions in binary form must reproduce the above copyright
# notice, and must include the license document above in
# the documentation and/or other materials provided with the
# distribution.
#
# The WinRSH/WinSSH project is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# License for more details.
# ==end==
#
#

use strict;
use warnings;

package MakeConfig;

my  $x_env = undef;
my  $x_tokens = undef;
my  $o_verbose = undef;

my  $CC = '';
my  $CXX = '';
my  $RTLIBRARY = '';

my  %DEFS = ();
my  %CDEFS = ();
my  %CXXDEFS = ();

my  %CFLAGS = ();
my  %CXXFLAGS = ();

my  @INCLUDE = ();
my  @XINCLUDE = ();
my  @CINCLUDE = ();
my  @CXXINCLUDE = ();

my  %LDFLAGS = ();

my  @LDFLAGS = ();
my  $LDMAPFILE = '';

my  @LDLIBS = ();
my  @LIBS = ();
my  @EXTRALIBS = ();

use constant {
        ALL     => 'ALL',
        RELEASE => 'RELEASE',
        DEBUG   => 'DEBUG'
        };

my  @__target_configurations = (ALL, RELEASE, DEBUG);

our $TOOLCHAIN = undef;


# Function:
#   Import the user defined configuration profile.
#
# Returns:
#   nothing
#
sub Import($$$$) {
    my ($type_, $env_, $tokens_, $verbose_) = @_;

    # Import default profile

    $x_env = $env_;
    $x_tokens = $tokens_;
    $o_verbose = $verbose_;

    __ReadTokens();

    print "loading <makeconfig.in> ...\n";
    require './makeconfig.in' or
        die "makeconfig.in: error processsing\n";

    __WriteTokens();
}


sub __ReadTokens {
    $TOOLCHAIN = $$x_tokens{TOOLCHAIN};

    $CC = $$x_tokens{CC}                                            # Program for compiling C programs.
        if (defined $$x_tokens{CC});

    $CXX = $$x_tokens{CXX}                                          # Program for compiling C++ programs.
        if (defined $$x_tokens{CXX});

    $RTLIBRARY = $$x_tokens{RTLIBRARY}                              # Default Run-Time library.
        if (defined $$x_tokens{RTLIBRARY});

    push @{$DEFS{ALL}},         split(/ /, $$x_tokens{DEFS})        # Common definitions
        if (defined $$x_tokens{DEFS});

    push @{$CFLAGS{ALL}},       split(/ /, $$x_tokens{CFLAGS})      # Extra flags to give to the C++ compiler.
        if (defined $$x_tokens{CFLAGS});

    push @{$CFLAGS{RELEASE}},   split(/ /, $$x_tokens{CRELEASE})
        if (defined $$x_tokens{CRELEASE});

    push @{$CFLAGS{DEBUG}},     split(/ /, $$x_tokens{CDEBUG})
        if (defined $$x_tokens{CDEBUG});

    push @{$CXXFLAGS{ALL}},     split(/ /, $$x_tokens{CXXFLAGS})    # Extra flags to give to the C++ compiler.
        if (defined $$x_tokens{CXXFLAGS});

    push @{$CXXFLAGS{RELEASE}}, split(/ /, $$x_tokens{CXXDEBUG})
        if (defined $$x_tokens{CXXDEBUG});

    push @{$CXXFLAGS{DEBUG}},   split(/ /, $$x_tokens{CXXRELEASE})
        if (defined $$x_tokens{CXXRELEASE});

    push @INCLUDE,              split(/;/, $$x_tokens{INCLUDE})     # Compiler system includes; semicolon seperated.
        if (defined $$x_tokens{INCLUDE});

    push @XINCLUDE,             split(/;/, $$x_tokens{XINCLUDE})    # Extra compiler system includes; semicolon seperated.
        if (defined $$x_tokens{XINCLUDE});

    if (defined $$x_tokens{CINCLUDE}) {
        my @incs = split(/ /, $$x_tokens{CINCLUDE});

        for (my $i = 0; $i < scalar @incs; ++$i) {
            my $inc = $incs[$i];

            if ($inc =~ /^[-\/][Ii]=(.+)$/) {                       # -I=xxxx or -i=xxxx
                push @CINCLUDE, $1;

            } elsif ($inc =~ /^[-\/]I(.+)$/) {                      # -Ixxxx
                push @CINCLUDE, $1;

            } elsif ($inc =~ /^[-\/]I$/ && ++$i < scalar @incs) {   # -I xxxx
                push @CINCLUDE, $incs[$i];

            } else {
                die "makeconfig.in: illformed CINCLUDE <${inc}>\n";
            }
        }
    }

    if (defined $$x_tokens{CXXINCLUDE}) {
        my @incs = split(/ /, $$x_tokens{CXXINCLUDE});

        for (my $i = 0; $i < scalar @incs; ++$i) {
            my $inc = $incs[$i];

            if ($inc =~ /^[-\/][Ii]=(.+)$/) {                       # -I=xxxx or -i=xxxx
                push @CXXINCLUDE, $1;

            } elsif ($inc =~ /^[-\/]I(.+)$/) {                      # -Ixxxx
                push @CXXINCLUDE, $1;

            } elsif ($inc =~ /^[-\/]I$/ && ++$i < scalar @incs) {   # -I xxxx
                push @CXXINCLUDE, $incs[$i];

            } else {
                die "makeconfig.in: illformed CXXINCLUDE <${inc}>\n";
            }
        }
    }

    push @{$LDFLAGS{ALL}},      split(/ /, $$x_tokens{LDFLAGS})     # Extra flags to the linker.
        if (defined $$x_tokens{LDFLAGS});

    push @{$LDFLAGS{RELEASE}},  split(/ /, $$x_tokens{LDRELEASE})   # Extra flags to the linker; release builds.
        if (defined $$x_tokens{LDRELEASE});

    push @{$LDFLAGS{DEBUG}},    split(/ /, $$x_tokens{LDDEBUG})     # Extra flags to the linker; debug builds.
        if (defined $$x_tokens{LDDEBUG});

    $LDMAPFILE = $$x_tokens{LDMAPFILE}
        if (defined $$x_tokens{LDMAPFILE});

    push @LDLIBS,               split(/ /, $$x_tokens{LDLIBS})      # Library flags or names given when invoking the linker; this includes the -L path(s).
        if (defined $$x_tokens{LDLIBS});

    push @LIBS,                 split(/ /, $$x_tokens{LIBS})        # Application libraries
        if (defined $$x_tokens{LIBS});

    push @EXTRALIBS,            split(/ /, $$x_tokens{EXTRALIBS})   # Extra system libraries
        if (defined $$x_tokens{EXTRALIBS});
}


sub __WriteTokens {
    if ($o_verbose >= 3) {
            print "Raw configuration:\n";

        foreach my $type (@__target_configurations) {
            print "\n";
            print "  $type:\n";

            print "          DEFS   ".__PrintArray($DEFS{$type})."\n";
            print "         CDEFS   ".__PrintArray($CDEFS{$type})."\n";
            print "       CXXDEFS   ".__PrintArray($CXXDEFS{$type})."\n";

            print "        CFLAGS   ".__PrintArray($CFLAGS{$type})."\n";
            print "      CXXFLAGS   ".__PrintArray($CXXFLAGS{$type})."\n";

            print "       LDFLAGS   ".__PrintArray($LDFLAGS{$type})."\n";
        }
    }

    $$x_tokens{CC}          = $CC;
    $$x_tokens{CXX}         = $CXX;
    $$x_tokens{RTLIBRARY}   = $RTLIBRARY;

    $$x_tokens{INCLUDE}     = __PrintArrayX('', ';', \@INCLUDE);
    $$x_tokens{XINCLUDE}    = __PrintArrayX('', ';', \@XINCLUDE);
    $$x_tokens{CINCLUDE}    = __PrintArrayX('-I', ' ', \@CINCLUDE);
    $$x_tokens{CXXINCLUDE}  = __PrintArrayX('-I', ' ', \@CXXINCLUDE);

    $$x_tokens{DEFS}        = __PrintArray($DEFS{ALL});
    $$x_tokens{CFLAGS}      = __PrintArray($CDEFS{ALL}, $CFLAGS{ALL});
    $$x_tokens{CRELEASE}    = __PrintArray($CDEFS{RELEASE}, $CFLAGS{RELEASE});
    $$x_tokens{CDEBUG}      = __PrintArray($CDEFS{DEBUG}, $CFLAGS{DEBUG});

    $$x_tokens{CXXFLAGS}    = __PrintArray($CXXDEFS{ALL}, $CXXFLAGS{ALL});
    $$x_tokens{CXXDEBUG}    = __PrintArray($CXXDEFS{RELEASE}, $CXXFLAGS{RELEASE});
    $$x_tokens{CXXRELEASE}  = __PrintArray($CXXDEFS{DEBUG}, $CXXFLAGS{DEBUG});

    $$x_tokens{LDFLAGS}     = __PrintArray($LDFLAGS{ALL});
    $$x_tokens{LDRELEASE}   = __PrintArray($LDFLAGS{RELEASE});
    $$x_tokens{LDDEBUG}     = __PrintArray($LDFLAGS{DEBUG});
    $$x_tokens{LDMAPFILE}   = $LDMAPFILE;
    
    $$x_tokens{LDLIBS}      = __PrintArray(\@LDLIBS);
    $$x_tokens{LIBS}        = __PrintArray(\@LIBS);
    $$x_tokens{EXTRALIBS}   = __PrintArray(\@EXTRALIBS);

    if ($o_verbose) {
            print "Configuration:\n";
            print "\n";
            print "            CC   ${CC}\n";
            print "           CXX   ${CXX}\n" if ($CXX);
            print "       INCLUDE   $$x_tokens{INCLUDE}\n";
            print "\n";
            print "      CINCLUDE   $$x_tokens{CINCLUDE}\n";
            print "    CXXINCLUDE   $$x_tokens{CXXINCLUDE}\n";
            print "\n";
            print "          DEFS   $$x_tokens{DEFS}\n";
            print "     RTLIBRARY   ${RTLIBRARY}\n" if ($RTLIBRARY);
            print "        CFLAGS   $$x_tokens{CFLAGS}\n";
            print "      CRELEASE   $$x_tokens{CRELEASE}\n";
            print "        CDEBUG   $$x_tokens{CDEBUG}\n";
            print "\n";
            print "      CXXFLAGS   $$x_tokens{CXXFLAGS}\n";
            print "    CXXRELEASE   $$x_tokens{CXXRELEASE}\n";
            print "      CXXDEBUG   $$x_tokens{CXXDEBUG}\n";
            print "\n";
            print "       LDFLAGS   $$x_tokens{LDFLAGS}\n";
            print "     LDRELEASE   $$x_tokens{LDRELEASE}\n";
            print "       LDDEBUG   $$x_tokens{LDDEBUG}\n";
            print "     LDMAPFILE   $$x_tokens{LDMAPFILE}\n";
            print "\n";
            print "        LDLIBS   $$x_tokens{LDLIBS}\n";
            print "          LIBS   $$x_tokens{LIBS}\n";
            print "     EXTRALIBS   $$x_tokens{EXTRALIBS}\n";
            print "\n";
    }
}


sub __PrintArray {
    my $s = '';
    for (my $i = 0; $i < scalar @_; ++$i) {
        my $value = $_[$i];
        if (defined $value && scalar @$value) {
            foreach my $val (@$value) {
                if ($val) {
                    $s .= ' ' if (length($s));
                    $s .= $val;
                }
            }
        }
    }
    return $s;
}


sub __PrintArrayX {
    my $prefix = shift || '';
    my $suffix = shift || '';
    my $s = '';
    for (my $i = 0; $i < scalar @_; ++$i) {
        my $value = $_[$i];
        if (defined $value && scalar @$value) {
            foreach my $val (@$value) {
                if ($val) {
                    $s .= $suffix if (length($s));
                    $s .= $prefix;
                    $s .= $val;
                }
            }
        }
    }
    return $s;
}


# Function:
#   set_msvc_runtime - Set the default MSVC run-time library.
# Parameters:
#   type - either dynamic or static.
# Returns:
#   nothing
# Notes:
#   MD      Causes the application to use the multithread-specific and DLL-specific version of the run-time library.
#           Defines _MT and _DLL and causes the compiler to place the library name MSVCRT.lib into the .obj file.
#
#           Applications compiled with this option are statically linked to MSVCRT.lib.
#           This library provides a layer of code that enables the linker to resolve external references.
#           The actual working code is contained in MSVCRversionnumber.DLL, which must be available at run time
#           to applications linked with MSVCRT.lib.
#
#   /MDd    Defines _DEBUG, _MT, and _DLL and causes the application to use the debug multithread-specific and
#           DLL-specific version of the run-time library.
#
#           It also causes the compiler to place the library name MSVCRTD.lib into the .obj file.
#
#   /MT     Causes the application to use the multithread, static version of the run-time library.
#
#           Defines _MT and causes the compiler to place the library name LIBCMT.lib
#           into the .obj file so that the linker will use LIBCMT.lib to resolve external symbols.
#
#   /MTd    Defines _DEBUG and _MT. This option also causes the compiler to place the library name LIBCMTD.lib
#           into the .obj file so that the linker will use LIBCMTD.lib to resolve external symbols.
#
sub
set_msvc_runtime($;$) {
    my ($type, $suffix) = @_;

    $suffix = '$(BUILD_TYPE)'
        if (! defined $suffix);

    die "set_msvc_runtime: invalid toolchain <$TOOLCHAIN>\n"
        if ($TOOLCHAIN !~ /^vs/);

    # Select
    if ($type eq 'dynamic') {
        $RTLIBRARY = "-MD${suffix}";

    } elsif ($type eq 'static') {
        $RTLIBRARY = "-MT${suffix}";

    } else {
        die "set_msvc_runtime: invalid type <${type}>\n";
    }

    # CFLAGS
    if (defined $CFLAGS{ALL}) {
        my $defs = $CFLAGS{ALL};
        for (my $i = 0; $i < scalar @$defs; ++$i) {
            if ($$defs[$i] =~ /[-\/](MT|MD)/) {
                $$defs[$i] = '@RTLIBRARY@';
                last;
            }
        }
    }

    # CXXFLAGS
    if (defined $CXXFLAGS{ALL}) {
        my $defs = $CXXFLAGS{ALL};
        for (my $i = 0; $i < scalar @$defs; ++$i) {
            if ($$defs[$i] =~ /[-\/](MT|MD)/) {
                $$defs[$i] = '@RTLIBRARY@';
                last;
            }
        }
    }

    # LDFLAGS
    if (defined $LDFLAGS{ALL}) {
        my $defs = $LDFLAGS{ALL};
        for (my $i = 0; $i < scalar @$defs; ++$i) {
            if ($$defs[$i] =~ /[-\/](MT|MD)/) {
                $$defs[$i] = '@RTLIBRARY@';
                last;
            }
        }
    }

    verbose("set_msvc_runtime: <${RTLIBRARY}>");
}


# Function:
#   remove_define - Remove the matching definition.
# Parameters:
#   def - Definition.
# Returns:
#   1 if matched, otherwise 0.
#
sub
remove_define($;$) {
    my ($def, $type) = @_;
    my ($var, $val) = split(/=/, $def);

    $type = ALL if (! $type);

    if (defined $DEFS{$type}) {
        my $defs = $DEFS{$type};
        for (my $i = 0; $i < scalar @$defs; ++$i) {
            if ($$defs[$i] =~ /^[-\/]D${var}=/) {
                verbose("remove_define:\t removed <$$defs[$i]>");
                $$defs[$i] = '';
                return 1;
            }
        }
    }
    return 0;
}


# Function:
#   add_define - Add or replace a definition.
# Parameters:
#   def - Definition.
# Returns:
#   nothing
#
sub
add_define($;$) {
    my ($def, $type) = @_;
    my ($var, $val) = split(/=/, $def);

    $type = ALL if (! $type);
    $val = '1' if (! $val);
    $def = "-D${var}=${val}";

    if (defined $DEFS{$type}) {
        my $defs = $DEFS{$type};
        for (my $i = 0; $i < scalar @$defs; ++$i) {
            if ($$defs[$i] =~ /^[-\/]D${var}(=|$)/) {
                verbose("add_define:\t <${def}> replaced <$$defs[$i]>");
                $$defs[$i] = $def;
                return;
            }
        }
    }

    verbose("add_define:\t <${def}>");
    push @{$DEFS{$type}}, $def;
}


sub
add_cdefine($;$) {
    my ($def, $type) = @_;
    my ($var, $val) = split(/=/, $def);

    $type = ALL if (! $type);
    $val = '1' if (! $val);
    $def = "-D${var}=${val}";

    if (defined $CDEFS{$type}) {
        my $defs = $CDEFS{$type};
        for (my $i = 0; $i < scalar @$defs; ++$i) {
            if ($$defs[$i] =~ /^[-\/]D${var}(=|$)/) {
                verbose("add_cdefine:\t <${def}> replaced <$$defs[$i]>");
                $$defs[$i] = $def;
                return;
            }
        }
    }
    verbose("add_cdefine:\t <${def}>");
    push @{$CDEFS{$type}}, $def;
}


sub
add_cxxdefine($;$) {
    my ($def, $type) = @_;
    my ($var, $val) = split(/=/, $def);

    $type = ALL if (! $type);
    $val = '1' if (! $val);
    $def = "-D${var}=${val}";

    if (defined $CXXDEFS{$type}) {
        my $defs = $CXXDEFS{$type};
        for (my $i = 0; $i < scalar @$defs; ++$i) {
            if ($$defs[$i] =~ /^[-\/]D${var}(=|$)/) {
                verbose("add_cxxdefine:\t <${def}> replaced <$$defs[$i]>");
                $$defs[$i] = $def;
                return;
            }
        }
    }
    verbose("add_cxxdefine:\t <${def}>");
    push @{$CXXDEFS{$type}}, $def;
}


# Function:
#   add_cflag - C compiler flag.
# Parameters:
#   flag - Definition.
#   type - release/debug/all (default).
# Returns:
#   nothing
#
sub
add_cflag($;$) {
    my ($flag,$type) = @_;
    $type = ALL if (! $type);
    verbose("add_cflag:\t <${flag},${type}>");
    push @{$CFLAGS{$type}}, $flag;
}


# Function:
#   add_cxxflag - C++ compiler flag.
# Parameters:
#   flag - Definition.
#   type - release/debug/all (default).
# Returns:
#   nothing
#
sub
add_cxxflag($;$) {
    my ($flag,$type) = @_;
    $type = ALL if (! $type);
    verbose("add_cxxflag:\t <${flag},${type}>");
    push @{$CXXFLAGS{$type}}, $flag;
}


# Function:
#   add_ldflag - Linker flag.
# Parameters:
#   flag - Definition.
#   type - release/debug/all (default).
# Returns:
#   nothing
#
sub
add_ldflag($;$) {
    my ($flag,$type) = @_;
    $type = ALL if (! $type);
    verbose("add_ldflag:\t <${flag},${type}>");
    push @{$LDFLAGS{$type}}, $flag;
}


# Function:
#   add_define - Add a include path
# Parameters:
#   flag - Definition.
# Returns:
#   nothing
#
sub
add_include($) {
    my ($inc) = shift;

    verbose("add_include:\t <${inc}>");
    push @INCLUDE, $inc;
}


sub
add_cinclude($) {
    my ($inc) = shift;

    verbose("add_cinclude:\t <${inc}>");
    push @CINCLUDE, $inc;
}


sub
add_xinclude($) {
    my ($inc) = shift;

    verbose("add_xinclude:\t <${inc}>");
    push @CINCLUDE, $inc;
    push @XINCLUDE, $inc;
}


sub
add_cxxinclude($) {
    my ($inc) = shift;

    verbose("add_cxxinclude:\t <${inc}>");
    push @CXXINCLUDE, $inc;
}


# Function:
#   add_application_library - Add an application library
# Parameters:
#   flag - Definition.
# Returns:
#   nothing
#
sub
add_application_library($) {
    my ($lib) = shift;

    verbose("add_application_library:\t <${lib}>");
    push @LIBS, $lib;
}


# Function:
#   add_system_library - Add an extra system library
# Parameters:
#   flag - Definition.
# Returns:
#   nothing
#
sub
add_system_library($) {
    my ($lib) = shift;

    verbose("add_system_library:\t <${lib}>");
    push @EXTRALIBS, $lib;
}


sub
verbose {
    return
        if ($o_verbose < 2);
    print @_;
    print "\n";
}

1;
