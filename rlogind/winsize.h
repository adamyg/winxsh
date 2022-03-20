#pragma once
#if !defined(WINSIZE_H_INCLUDED)
#define WINSIZE_H_INCLUDED
/* -*- mode: c; indent-width: 8; -*- */
/*
 * Windows supplemental terminal definitions
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
 * License for more details.
 * ==end==
 */

#ifndef TIOCPKT_WINDOW
#define TIOCPKT_WINDOW		0x80
#endif

#ifndef TIOCPKT_DATA				/* Used for packet mode */
#define TIOCPKT_DATA		 0		/* 0x00 - data packet */
#define TIOCPKT_FLUSHREAD	 1		/* 0x01 - flush packet */
#define TIOCPKT_FLUSHWRITE	 2		/* 0x02 - flush packet */
#define TIOCPKT_STOP		 4		/* 0x04 - stop output */
#define TIOCPKT_START		 8		/* 0x08 - start output */
#define TIOCPKT_NOSTOP		16		/* 0x10 - no more ^S, ^Q */
#define TIOCPKT_DOSTOP		32		/* 0x20 - now do ^S ^Q */
#define TIOCPKT_IOCTL		64		/* 0x40 - state change of pty driver */
#endif

#ifndef WINSIZE_T
#define WINSIZE_T
struct winsize {
	unsigned short ws_row;			/* rows, in characters */
	unsigned short ws_col;			/* columns, in characters */
	unsigned short ws_xpixel;		/* horizontal size, pixels */
	unsigned short ws_ypixel;		/* vertical size, pixels */
};
#endif	//WINSIZE_T

#endif	//WINSIZE_H

//end
