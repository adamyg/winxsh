/*
 * Copyright (c) 1988, 1989, 1993, 1994
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	$NetBSD: termios.h,v 1.33 2016/07/31 21:34:53 dholland Exp $
 *	@(#)termios.h	8.3 (Berkeley) 3/28/94
 */

#ifndef _SYS_TERMIOS_H_
#define _SYS_TERMIOS_H_

/*
 * Special Control Characters
 *
 * Index into c_cc[] character array.
 *
 *	Name		Subscript	Enabled by
 */
#define	VEOF		0		/* ICANON */
#define	VEOL		1		/* ICANON */
#if defined(_NETBSD_SOURCE)
#define	VEOL2		2		/* ICANON */
#endif
#define VERASE		3		/* ICANON */
#if defined(_NETBSD_SOURCE)
#define VWERASE 	4		/* ICANON */
#endif
#define VKILL		5		/* ICANON */
#if defined(_NETBSD_SOURCE)
#define VREPRINT 	6		/* ICANON */
#endif
/*			7		spare 1 */
#define VINTR		8		/* ISIG */
#define VQUIT		9		/* ISIG */
#define VSUSP		10		/* ISIG */
#if defined(_NETBSD_SOURCE)
#define VDSUSP		11		/* ISIG */
#endif
#define VSTART		12		/* IXON, IXOFF */
#define VSTOP		13		/* IXON, IXOFF */
#if defined(_NETBSD_SOURCE)
#define VLNEXT		14		/* IEXTEN */
#define VDISCARD	15		/* IEXTEN */
#endif
#define VMIN		16		/* !ICANON */
#define VTIME		17		/* !ICANON */
#if defined(_NETBSD_SOURCE)
#define VSTATUS		18		/* ICANON */
/*			19		spare 2 */
#endif
#define NCCS		20

#ifndef __CAST
#define __CAST(__type, __value)	((__type)__value)
#endif
#define _POSIX_VDISABLE	__CAST(unsigned char, '\377')

#if defined(_NETBSD_SOURCE)
#define CCEQ(val, c)	(c == val ? val != _POSIX_VDISABLE : 0)
#endif

/*
 * Input flags - software input processing
 */
#define IGNBRK		0x00000001U	/* ignore BREAK condition */
#define BRKINT		0x00000002U	/* map BREAK to SIGINT */
#define IGNPAR		0x00000004U	/* ignore (discard) parity errors */
#define PARMRK		0x00000008U	/* mark parity and framing errors */
#define INPCK		0x00000010U	/* enable checking of parity errors */
#define ISTRIP		0x00000020U	/* strip 8th bit off chars */
#define INLCR		0x00000040U	/* map NL into CR */
#define IGNCR		0x00000080U	/* ignore CR */
#define ICRNL		0x00000100U	/* map CR to NL (ala CRMOD) */
#define IXON		0x00000200U	/* enable output flow control */
#define IXOFF		0x00000400U	/* enable input flow control */
#if defined(_XOPEN_SOURCE) || defined(_NETBSD_SOURCE)
#define IXANY		0x00000800U	/* any char will restart after stop */
#endif
#if defined(_NETBSD_SOURCE)
#define IMAXBEL		0x00002000U	/* ring bell on input queue full */
#endif

/*
 * Output flags - software output processing
 */
#define OPOST		0x00000001U	/* enable following output processing */
#if defined(_XOPEN_SOURCE) || defined(_NETBSD_SOURCE)
#define ONLCR		0x00000002U	/* map NL to CR-NL (ala CRMOD) */
#endif
#if defined(_NETBSD_SOURCE)
#define OXTABS		0x00000004U	/* expand tabs to spaces */
#define ONOEOT		0x00000008U	/* discard EOT's (^D) on output */
#endif
#if defined(_XOPEN_SOURCE) || defined(_NETBSD_SOURCE)
#define OCRNL		0x00000010U	/* map CR to NL */
#define ONOCR		0x00000020U	/* discard CR's when on column 0 */
#define ONLRET		0x00000040U	/* move to column 0 on CR */
#endif  /* defined(_XOPEN_SOURCE) || defined(_NETBSD_SOURCE) */

/*
 * Control flags - hardware control of terminal
 */
#if defined(_NETBSD_SOURCE)
#define	CIGNORE		0x00000001U	/* ignore control flags */
#endif
#define CSIZE		0x00000300U	/* character size mask */
#define     CS5		    0x00000000U	    /* 5 bits (pseudo) */
#define     CS6		    0x00000100U	    /* 6 bits */
#define     CS7		    0x00000200U	    /* 7 bits */
#define     CS8		    0x00000300U	    /* 8 bits */
#define CSTOPB		0x00000400U	/* send 2 stop bits */
#define CREAD		0x00000800U	/* enable receiver */
#define PARENB		0x00001000U	/* parity enable */
#define PARODD		0x00002000U	/* odd parity, else even */
#define HUPCL		0x00004000U	/* hang up on last close */
#define CLOCAL		0x00008000U	/* ignore modem status lines */
#if defined(_NETBSD_SOURCE)
#define	CRTSCTS		0x00010000U	/* RTS/CTS full-duplex flow control */
#define	CRTS_IFLOW	CRTSCTS		/* XXX compat */
#define	CCTS_OFLOW	CRTSCTS		/* XXX compat */
#define	CDTRCTS		0x00020000U	/* DTR/CTS full-duplex flow control */
#define	MDMBUF		0x00100000U	/* DTR/DCD hardware flow control */
#define	CHWFLOW		(MDMBUF|CRTSCTS|CDTRCTS) /* all types of hw flow control */
#endif

typedef unsigned int	tcflag_t;
typedef unsigned char	cc_t;
typedef unsigned int	speed_t;

struct termios {
	tcflag_t	c_iflag;	/* input flags */
	tcflag_t	c_oflag;	/* output flags */
	tcflag_t	c_cflag;	/* control flags */
	tcflag_t	c_lflag;	/* local flags */
	cc_t		c_cc[NCCS];	/* control chars */
	int		c_ispeed;	/* input speed */
	int		c_ospeed;	/* output speed */
};

/*
 * Commands passed to tcsetattr() for setting the termios structure.
 */

/*
 * Standard speeds
 */
#define B0	0U
#define B50	50U
#define B75	75U
#define B110	110U
#define B134	134U
#define B150	150U
#define B200	200U
#define B300	300U
#define B600	600U
#define B1200	1200U
#define B1800	1800U
#define B2400	2400U
#define B4800	4800U
#define B9600	9600U
#define B19200	19200U
#define B38400	38400U
#if defined(_NETBSD_SOURCE)
#define B7200	7200U
#define B14400	14400U
#define B28800	28800U
#define B57600	57600U
#define B76800	76800U
#define B115200	115200U
#define B230400	230400U
#define B460800	460800U
#define B921600	921600U
#define EXTA	19200U
#define EXTB	38400U
#endif  /* defined(_NETBSD_SOURCE) */

#endif /* !_SYS_TERMIOS_H_ */

