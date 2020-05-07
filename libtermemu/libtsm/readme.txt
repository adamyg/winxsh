
	Source: https://www.freedesktop.org/wiki/Software/kmscon/libtsm/

	libtsm - Terminal-emulator State Machine

		TSM is a state machine for DEC VT100-VT520 compatible terminal emulators. It
		tries to support all common standards while keeping compatibility to
		existing emulators like xterm, gnome-terminal, konsole, ..

		TSM itself does not provide any rendering nor window management. It is a
		simple plain state machine without any external dependencies. It can be used
		to implement terminal emulators, but also to implement other applications
		that need to interpret terminal escape sequences.

		This library is very similar to libvte of the gnome project. However, libvte
		is highly bound to GTK+, which makes it unsuitable for non-graphics projects
		that need to parse escape sequences. Instead, TSM tries to restrict its API
		to terminal emulation only. Furthermore, TSM does not try to establish a new
		terminal emulation standard, but instead keeps compatibility as close to
		xterm as possible. This is why the TERM variable can be set to
		xterm-color256 with any TSM based terminal emulator.

	Notes:

		Local modifications,

			o Non c11 build support.

			o Mouse encoding. (DO_MOUSE_TRACKING)

			o True color color encoding. (DO_TRUE_COLOR)

				plus COLOR_BACKRGOUND/FOREGROUND redefinition
				and sfccode and sbccode, source fg/bg for 88/256 colors.

			o Italic attribute (DO_ITALIC_ATTRIBUTE).

			o Strike attribute (DO_STRIKE_ATTRIBUTE).

			o Ctrl + Arrow keys.

			o CSI save/restore.

	Currently, libtsm is used by:

		wlterm: An example terminal-emulator for libtsm developers
		kmscon: A DRM/KMS based system console

	Releases:

		libtsm-3 released on Oct 29th 2013

	Git-Repository:

		gitweb: cgit.freedesktop.org
		git: git://people.freedesktop.org/~dvdhrm/libtsm

	Downloads:
		Source tarballs are available at http://freedesktop.org/software/kmscon/releases/

	Development:
		Please submit patches to kmscon-devel@lists.freedesktop.org mailing list.

	Reporting Bugs:
		libtsm has a bugzilla component in the freedesktop.org Bugzilla

	License:
		Copyright (c) 2011-2013 David Herrmann <dh.herrmann@gmail.com>

		Permission is hereby granted, free of charge, to any person obtaining a copy
		of this software and associated documentation files (the "Software"), to
		deal in the Software without restriction, including without limitation the
		rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
		sell copies of the Software, and to permit persons to whom the Software is
		furnished to do so, subject to the following conditions:

		The above copyright notice and this permission notice shall be included in
		all copies or substantial portions of the Software.

		THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
		IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
		FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
		AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
		LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
		OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
		THE SOFTWARE.

	Third-Party Source:

		The hash-table implementation in external/htable.* is copied from ccan
		and licensed under the conditions of the LGPL-2.1 or later as published
		by the FSF:

		Author: Rusty Russel <rusty@rustcorp.com.au>

	  o The wcwidth() implementation in ./external/wcwidth.c is from:

		Markus Kuhn -- 2007-05-26 (Unicode 5.0)

		Permission to use, copy, modify, and distribute this software for any
		purpose and without fee is hereby granted. The author disclaims all
		warranties with regard to this software.

		Latest version: http://www.cl.cam.ac.uk/~mgk25/ucs/wcwidth.c

	  o UCS-4 to UTF-8 encoding is copied from "terminology":

		Copyright (C) 2012-2012 Carsten Haitzler and various contributors

		All rights reserved.

		Redistribution and use in source and binary forms, with or without
		modification, are permitted provided that the following conditions are
		met:

		1. Redistributions of source code must retain the above copyright notice, 
		this list of conditions and the following disclaimer.

		2. Redistributions in binary form must reproduce the above copyright notice, 
		this list of conditions and the following disclaimer in the documentation
		and/or other materials provided with the distribution.

		THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, 
		INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
		FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
		COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
		INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
		LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
		OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
		LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
		NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
		EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

	  o The "solarized" color palettes in tsm_vte.c are from:

		Copyright (c) 2011 Ethan Schoonover

		Permission is hereby granted, free of charge, to any person obtaining a copy
		of this software and associated documentation files (the "Software"), to
		deal in the Software without restriction, including without limitation the
		rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
		sell copies of the Software, and to permit persons to whom the Software is
		furnished to do so, subject to the following conditions:

		The above copyright notice and this permission notice shall be included in
		all copies or substantial portions of the Software.

		THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
		IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
		FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
		AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
		LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
		OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
		THE SOFTWARE.

					=== end ===

