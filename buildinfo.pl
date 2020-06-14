#!/usr/bin/perl -w
# -*- mode: perl; -*-
# $Id: buildinfo.pl,v 1.2 2020/06/14 00:49:50 cvsuser Exp $
# buildinfo generation
#
# Copyright Adam Young 2018-2020
#

use strict;
use warnings 'all';
use Getopt::Long;
use POSIX qw(strftime asctime);

my $output  = "buildinfo.h";
my $prefix  = "";

my $package = undef;
my $packagename = undef;
my $version = "0.0.1";

my $builddate = undef;
my $buildnumber = "1";
my $buildtype = undef;
my $buildtoolchain = undef;

my $bindir  = undef;
my $sbindir = undef;
my $libdir  = undef;
my $libexecdir = undef;
my $datadir = undef;

my $help    = 0;

Usage() if (0 == GetOptions(
		'output=s'      => \$output,
		'prefix=s'      => \$prefix,
		'package:s'     => \$package,
		'name:s'        => \$packagename,
		'version=s'     => \$version,
		'date=i'        => \$builddate,
		'build=i'       => \$buildnumber,
		'toolchain=s'   => \$buildtoolchain,
		'type:s'        => \$buildtype,
		'bindir:s'      => \$bindir,
		'sbindir:s'     => \$sbindir,
		'libdir:s'      => \$libdir,
		'libexecdir:s'  => \$libexecdir,
		'datadir:s'     => \$datadir,
		'help'          => \$help)
			|| $help);

if (-f './makelib.in') {
	our $PACKAGE = undef;
	our $PACKAGE_NAME = undef;

	require "./makelib.in";
		die "makelib.in: PACKAGE not defined\n"
			if (! $PACKAGE);

	$package = $PACKAGE
		if (! $package);

	$packagename = $PACKAGE_NAME
		if (! $packagename && $PACKAGE_NAME);
}

die "buildinfo: PACKAGE not defined\n"
	if (! $package);

die "buildinfo: PACKAGE_NAME not defined\n"
	if (! $packagename);

$version = "0.0.1"
	if (! $version);

$builddate = strftime('%Y%m%d', localtime) 
	if (! $builddate);

Generate();

sub
Generate	#()
{
	open(FILE, ">${output}") or
		die "cannot create <${output}> : $!\n";

	my ($version1, $version2, $version3) =
		split(/\./, $version);

	my $timestamp = asctime(localtime);

	$version2 = 0 if (! $version2);
	$version3 = 0 if (! $version3);

	print FILE <<"EOT";
// Auto-generated by Makefile ${timestamp}
#define ${prefix}PACKAGE "${package}"
#define ${prefix}PACKAGE_NAME "${packagename}"
#define ${prefix}VERSION "${version}"
#define ${prefix}VERSION_1 ${version1}
#define ${prefix}VERSION_2 ${version2}
#define ${prefix}VERSION_3 ${version3}
#define ${prefix}BUILD_DATE "${builddate}"
#define ${prefix}BUILD_NUMBER "${buildnumber}"
EOT

	print FILE "#define BUILD_TOOLCHAIN \"${buildtoolchain}\"\n"
		if ($buildtoolchain);

	print FILE "#define BUILD_TYPE \"${buildtype}\"\n"
		if ($buildtype);

	print FILE "#define ${prefix}BUILD_BINDIR \"${bindir}\"\n"
		if ($bindir);

	print FILE "#define ${prefix}BUILD_SBINDIR \"${sbindir}\"\n"
		if ($sbindir);

	print FILE "#define ${prefix}BUILD_LIBDIR \"${libdir}\"\n"
		if ($libdir);

	print FILE "#define ${prefix}BUILD_LIBEXECDIR \"${libexecdir}\"\n"
		if ($libexecdir);

	close(FILE);
}


sub
Usage		# ([message])
{
	print "\nbuildinfo.h @_\n\n" if (@_);
	print <<EOU;

Usage: perl buildinfo.pl [options]

Options:
    --output <file>         Output file.
    --suffix <suffix>       Identifier suffix (optional).
    --package <package>     Package label.
    --name <name>           Package name.
    --version <version>     Package version.
    --date <date>           Build date.
    --build <number>        Build number.
    --toolchain <desc>      Toolchain.

    --bindir <path>         bindir path.
    --sbindir <path>        sbindir path.
    --libdir <path>         libdir path.
    --libexecdir<path>      libexecdir path.
    --datadir <path>        datadir path.

    --help                  Help.

EOU
	exit 3;
}

1;

#end

