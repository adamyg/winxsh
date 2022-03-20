/* -*- mode: c; indent-width: 4; -*- */
/*
 * libtermemu console driver
 *
 * Copyright (c) 2015 - 2022, Adam Young.
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

#if defined(HAVE_CONFIG_H)
#include "config.h"
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif
#include <windows.h>

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#ifdef BUILD_HAVE_XKBCOMMON
#include <xkbcommon/xkbcommon-keysyms.h>
#else
#include "libtsm/external/xkbcommon-keysyms.h"
#endif

#include "termemu_keysym.h"			/* public interface */

#define XKB_UNICODE	0x1000000

/*
 *  Object Structure:
 *
 *      [ sig1, sig2, val1 - val4, uc1 - uc3, name \0 ]
 *
 *  Notes:
 *      Record is unaligned, numeric values must be byte compared.
 *      UNICODE values are optional, denoted by 0xffffff.
 *      Description may be an empty string.
 */

#define NEEDKTABLE	// object table.
#define NEEDVTABLE	// key-value table.
#define NEEDDTABLE	// key-dup-value table.
#define NEEDUTABLE	// key-unicode table.
#include "keysymdb.h"				/* key symbol database */


/*
 *      termemu_keysym_tostr ---
 *              KeySymbol to string.
 **/
const char *
termemu_keysym_tostr(unsigned ks)
{
	return termemu_keysym_tostruc(ks, NULL);
}


/*
 *      termemu_keysym_tostruc ---
 *              KeySymbol to string and optional UNICODE value.
 **/
const char *
termemu_keysym_tostruc(unsigned ks, unsigned *unicode)
{
	if (!ks /*XKB_KEY_NoSymbol*/ || 	/* invalid arguments */
		    (ks & ((unsigned long) ~0x1fffffff)) != 0)
		return NULL;

	if (ks == XKB_KEY_VoidSymbol)		/* special */
		ks = 0;

      { const unsigned char			/* key */
		ks0 =  ks >> 24,
		ks1 = (ks >> 16) & 0xff,
		ks2 = (ks >> 8) & 0xff,
		ks3 =  ks & 0xff;

	unsigned n = VMAXHASH,
		i = ks % VTABLESIZE, s = i + 1, o;

	while (0 != (o = hashKeysym[i])) {
		const unsigned char *		/* probe key table */
			object = _XkeyTable + o;

		if (object[KTABLEKS+0] == ks0 && object[KTABLEKS+1] == ks1 &&
		    object[KTABLEKS+2] == ks2 && object[KTABLEKS+3] == ks3) {
						/* match */
			if (unicode) {
				*unicode =	/* optional unicode; otherwise 0 */
				    (object[KTABLEUC+0] << 16) |
				    (object[KTABLEUC+1] << 8) |
				     object[KTABLEUC+2];
			}
			return ((const char *)object + KTABLENM);
		}

		if (0 == --n) break;		/* probe limit */

		if ((i += s) >= VTABLESIZE)	/* next step */
			i -= VTABLESIZE;	/* wrap */
	}}
	return NULL;
}


/*
 *      termemu_keysym_ucstr ---
 *              UNICODE-KeySymbol to string.
 **/
char *
termemu_keysym_ucstr(unsigned ks, char *buf, size_t buflen)
{
	if ((ks & 0xff000000) & XKB_UNICODE) {	/* internal Unicode marker */
		const unsigned uc = ks & 0xffffff;

		if (uc > 0x10ffff ||		/* range checks */
			    uc < 0x20 || (uc > 0x7e && uc < 0xa0)) {
			return NULL;
		}

		if (buf && buflen) {
			_snprintf(buf, buflen, "U+%0*x", (uc & 0xff0000 ? 6 : 4), uc);
			buf[buflen-1] = 0;
		}
		return buf;
	}
	return NULL;
}


/*
 *      termemu_keysym_asstruc ---
 *              General KeySymbol to string and optional UNICODE value.
 **/
const char *
termemu_keysym_asstruc(unsigned ks, unsigned *unicode, char *buf, size_t buflen)
{
	const char *result = termemu_keysym_tostruc(ks, unicode);
	if (NULL == result) {
		if (NULL != (result = termemu_keysym_ucstr(ks, buf, buflen))) {
			if (unicode) *unicode = ks & 0xffffff;
		}
	}
	return result;
}


/*
 *      termemu_keysym_tostrs ---
 *              KeySymbol to string plus any secondary aliases; upto a maximum of the given count.
 **/
int
termemu_keysym_tostrs(unsigned ks, const char **strs, unsigned count)
{
	unsigned matched = 0;
	const char *primary;

	if (NULL != (primary = termemu_keysym_tostruc(ks, NULL))) {
		const unsigned char		/* key */
			ks0 =  ks >> 24,
			ks1 = (ks >> 16) & 0xff,
			ks2 = (ks >> 8) & 0xff,
			ks3 =  ks & 0xff;

		unsigned n = DMAXHASH,
		    i = ks % DTABLESIZE, s = i + 1, o;

		if (matched < count) {          /* push primary symbol */
			strs[matched] = primary;
		}
		++matched;

		while (0 != (o = hashDupsym[i])) {
			const unsigned char *	/* probe duplicate key table */
				object = _XkeyTable + o;

			if (object[KTABLEKS+0] == ks0 && object[KTABLEKS+1] == ks1 &&
			    object[KTABLEKS+2] == ks2 && object[KTABLEKS+3] == ks3) {
						/* match */
				if (matched < count) {
						/* push secondary matches */
					strs[ matched ] = ((const char *)object + KTABLENM);
				}

				if (++matched >= DMAXDUP)
					break;	/* match limit */
			}

			if (0 == --n) break;	/* probe limit */

			if ((i += s) >= DTABLESIZE) /* next step */
				i -= DTABLESIZE;/* wrap */
		}
	}

	return (int)matched;
}


/*
 *      termemu_keysym_asstruc ---
 *              KeySymbol name/numeric to KeySymbol.
 **/
unsigned
termemu_keysym_tonum(const char *name)
{
	return termemu_keysym_tonumuc(name, NULL);
}


/*
 *      termemu_keysym_asstruc ---
 *              KeySymbol name/numeric to KeySymbol and optional UNICODE value.
 **/
unsigned
termemu_keysym_tonumuc(const char *name, unsigned *unicode)
{
	const unsigned char *cursor;
	unsigned nameoffset = KTABLENM,
	    i, s, n, sig = 0, o;
	unsigned char sig0, sig1, c;

	if (!name || !*name)			/* invalid arguments */
		return XKB_KEY_NoSymbol;

	if (name[0] == 'X') {			/* remove prefix */
		if (0 == strncmp(name, "XKB_", 4)) name += 4;
		else if (0 == strncmp(name, "XK_", 3)) name += 3;
	}

again:	for (cursor = (const unsigned char *)name; 0 != (c = *cursor++);)
		sig = (sig << 1) + c;		/* signature */
	i = sig % KTABLESIZE;
	s = i + 1;
	n = KMAXHASH;

	sig0 = (sig >> 8) & 0xff;
	sig1 =  sig & 0xff;

	while ((o = hashString[i])) {
		const unsigned char *           /* probe string table */
			object = _XkeyTable + o;

		if (object[KTABLESG+0] == sig0 && object[KTABLESG+1] == sig1 &&
			    0 == strcmp(name, (const char *)object + nameoffset)) {
						/* match */
			const unsigned val =
				(object[KTABLEKS+0] << 24) |
				(object[KTABLEKS+1] << 16) |
                                (object[KTABLEKS+2] << 8) |
				 object[KTABLEKS+3];
			if (unicode) {
				*unicode =      /* optional unicode; otherwise 0 */
				    (object[KTABLEUC+0] << 16) |
				    (object[KTABLEUC+1] << 8) |
				     object[KTABLEUC+2];
			}
			return (val ? val : XKB_KEY_VoidSymbol);
		}

		if (0 == --n) break;		/* probe limit */

		if ((i += s) >= KTABLESIZE)	/* next step */
			i -= KTABLESIZE;	/* wrap */
	}

	// KEY_ prefix
	if (KTABLENM == nameoffset && 0 != strncmp(name, "KEY_", 4)) {
	        cursor = (const unsigned char *)"KEY_";
	        for (sig = 0; 0 != (c = *cursor++);)
			sig = (sig << 1) + c; // add KEY_ prefix to signature
		nameoffset += 4; // skip KEY_ during compares
		goto again;
	}

	// Unicode U[+]XXXX[XX]
	if (name[0] == 'U') {
		char *end = NULL;
		unsigned long val = strtoul((name[1] == '+' ? name + 2 : name + 1), &end, 16);
		int ret = XKB_KEY_NoSymbol;

		if (val != ULONG_MAX && end && *end == '\0') {
			if (XKB_KEY_NoSymbol != (ret = termemu_keysym_fromuc(val))) {
				if (unicode) *unicode = val;
			}
		}
		return ret;
	}

	// HEX conversion
	if (name[0] == '0' && name[1] == 'x') {
		char *end = NULL;
		unsigned long val = strtoul(name, &end, 16);
		if (val != ULONG_MAX && end && *end == '\0') {
			return val;
		}
	        return XKB_KEY_NoSymbol;
	}

	// OCT conversion
	if (name[0] == '0') {
	        char *end = NULL;
		unsigned long val = strtoul(name, &end, 8);
		if (val != ULONG_MAX && end && *end == '\0') {
			return val;
		}
	        return XKB_KEY_NoSymbol;
	}

	return XKB_KEY_NoSymbol;
}


unsigned
termemu_keysym_fromuc(unsigned uc)
{
	if (uc > 0x10ffff ||			/* range checks */
		    (uc < 0x20 || (uc > 0x7e && uc < 0xa0)))
		return XKB_KEY_NoSymbol;

	{
	const unsigned char			/* key */
		uc0 = (uc >> 16) & 0xff,
		uc1 = (uc >> 8) & 0xff,
		uc2 =  uc & 0xff;

	unsigned n = UMAXHASH,
	    i = uc % UTABLESIZE, s = i + 1, o;

	while (0 != (o = hashKeyuc[i])) {	/* probe unicode table */
		const unsigned char *
			object = _XkeyTable + o;

						/* key value match ? */
		if (object[KTABLEUC+0] == uc0 &&
		    object[KTABLEUC+1] == uc1 &&
		    object[KTABLEUC+2] == uc2) {
						/* match */
			const unsigned val =
				(object[KTABLEKS+0] << 24) |
				(object[KTABLEKS+1] << 16) |
                                (object[KTABLEKS+2] << 8) |
				 object[KTABLEKS+3];
			return val;
		}

		if (0 == --n) break;		/* probe limit */

		if ((i += s) >= UTABLESIZE)	/* next step */
			i -= UTABLESIZE;	/* wrap */
	}}

	if (uc < 0x100) 			/* Latin1 */
		return uc;

	return XKB_UNICODE|uc;			/* set Unicode marker */
}
/*end*/
