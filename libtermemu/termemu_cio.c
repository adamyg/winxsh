#include <edidentifier.h>
__CIDENT_RCSID(termemu_cio_c,"$Id: termemu_cio.c,v 1.6 2020/05/09 15:08:06 cvsuser Exp $")

/* -*- mode: c; indent-width: 4; -*- */
/*
 * libtermemu console driver
 *
 * Copyright (c) 2015 - 2020, Adam Young.
 * All rights reserved.
 *
 * This file is part of the WinRSH/WinSSH project.
 *
 * The WinRSH/WinSSH project is free software: you can redistribute it
 * and/or modify it under the terms of the WinRSH/WinSSH project License.
 *
 * Redistributions of source code must retain the above copyright
 * notice, and must be distributed with the license document above.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, and must include the license document above in
 * the documentation and/or other materials provided with the
 * distribution.
 *
 * The WinRSH/WinSSH project is distributed in the hope that it will be useful,
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
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <assert.h>

#include "libtsm/libtsm.h" 			// libtsm interfaces
#include "libtsm/libtsm_int.h"
#ifdef BUILD_HAVE_XKBCOMMON
#include <xkbcommon/xkbcommon-keysyms.h>
#else
#include "libtsm/external/xkbcommon-keysyms.h"
#endif

#include "termemu_keymap.h"			// evt structure.
#include "termemu_cio.h"			// public interface

struct w2xkb {
#define __VKVALUE(__v)		__v
#define VK(__v) 		__VKVALUE(VK_ ## __v), 0xffff, #__v
#define VKSCAN(__v,__s)		__VKVALUE(VK_ ## __v), __s, #__v
	WORD wVirtualKeyCode;			// virtual key code
	WORD wVirtualScanCode;			// optional scan-code
	const char *vkname;

#define __XKBVALUE(__v) 	__v
#define XKB(__v)		__XKBVALUE(XKB_KEY_ ## __v), #__v
	unsigned xkbkey;
	const char *xkbname;
};

#define DO_CONTROL_KEYS

static const struct w2xkb	w2xkbs_standard[] = {
    //	{ VK(LBUTTON),			XKB() },
    //	{ VK(RBUTTON),			XKB() },
    //	{ VK(CANCEL),			XKB(Break) },	//Ctrl-C
    //	{ VK(MBUTTON),			XKB() },
    //	{ VK(XBUTTON1), 		XKB() },
    //	{ VK(XBUTTON2), 		XKB() },
	    // 0x07 : unassigned

	{ VK(BACK),			XKB(BackSpace) },
	{ VK(TAB),			XKB(Tab) },
	    // 0x0a - 0x0B : reserved

	{ VK(CLEAR),			XKB(Clear) },
	{ VK(RETURN),			XKB(Return) },
	    // 0xe-0xf : undefined

#if defined(DO_CONTROL_KEYS)
    	{ VKSCAN(SHIFT, 0x002a),	XKB(Shift_L) },
    	{ VKSCAN(SHIFT, 0x0036),	XKB(Shift_R) },
    	{ VK(SHIFT),	                XKB(Shift_L) }, //catch ScanCode issues
    	{ VK(CONTROL),			XKB(Control_L) },
	{ VK(MENU),			XKB(Alt_L) },
#endif
        { VK(PAUSE),			XKB(Pause) },   //also Ctrl-NumLock
	{ VK(CAPITAL),			XKB(Caps_Lock) },
	    // 0x16 : undefined

    //	{ VK(KANA),			},		//IME Kana mode
    //	{ VK(HANGUEL),			},		//IME Hanguel mode (maintained for compatibility; use VK(HANGUL)
    //	{ VK(HANGUL),			},		//IME Hangul mode
    //	{ VK(JUNJA),			},		//IME Junja mode
    //	{ VK(FINAL),			},		//IME final mode
    //	{ VK(HANJA),			},		//IME Hanja mode
    //	{ VK(KANJI,			},		//IME Kanji mode
	    // 0x1a : undefined

	{ VK(ESCAPE),			XKB(Escape) },
    //	{ VK(CONVERT),			},		//IME convert
    //	{ VK(NONCONVERT)		},		//IME nonconvert
    //	{ VK(ACCEPT)			},		//IME accept
    //	{ VK(MODECHANGE)		},		//IME mode change request
    //	{ VK(SPACE),			XKB(Space) },	//SPACE key
	{ VK(PRIOR),			XKB(KP_Prior) },//also KP_Page_Up
	{ VK(NEXT),			XKB(KP_Next) }, //also KP_Page_Down
	{ VK(HOME),			XKB(KP_Home) },
	{ VK(END),			XKB(KP_End) },
	{ VK(LEFT),			XKB(KP_Left) },
	{ VK(RIGHT),			XKB(KP_Right) },
	{ VK(UP),			XKB(KP_Up) },
	{ VK(DOWN),			XKB(KP_Down) },
	{ VK(SELECT),			XKB(Select) },
	{ VK(PRINT),			XKB(Print) },
	{ VK(EXECUTE),			XKB(Execute) },
        { VK(SNAPSHOT), 		XKB(Print) },   //Print-Screen
	{ VK(INSERT),			XKB(KP_Insert) },
	{ VK(DELETE),			XKB(KP_Delete) },
	{ VK(HELP),			XKB(Help) },

		// VK(0 - VK(9 are the same as ASCII '0' - '9' (0x30 - 0x39)
		// VK(A - VK(Z are the same as ASCII 'A' - 'Z' (0x41 - 0x5A)
		//
		// unshifted ASCII A .. Z
		// Note: the Unicode code *shall* have the shift status applied.

    //	{ VK(LWIN),			},		//Left Windows key
    //	{ VK(RWIN).			},		//Right Windows key
        { VK(APPS),			XKB(osfMenu) },	//Applications key
	    // 94  Reserved

    //	{ VK(SLEEP),			XKB(XF86Sleep) },
	{ VK(NUMPAD0),			XKB(KP_0) },
	{ VK(NUMPAD1),			XKB(KP_1) },
	{ VK(NUMPAD2),			XKB(KP_2) },
	{ VK(NUMPAD3),			XKB(KP_3) },
	{ VK(NUMPAD4),			XKB(KP_4) },
	{ VK(NUMPAD5),			XKB(KP_5) },
	{ VK(NUMPAD6),			XKB(KP_6) },
	{ VK(NUMPAD7),			XKB(KP_7) },
	{ VK(NUMPAD8),			XKB(KP_8) },
	{ VK(NUMPAD9),			XKB(KP_9) },
	{ VK(MULTIPLY), 		XKB(KP_Multiply) },
	{ VK(ADD),			XKB(KP_Add) },
	{ VK(SEPARATOR),		XKB(KP_Separator) },
	{ VK(SUBTRACT), 		XKB(KP_Subtract) },
	{ VK(DECIMAL),			XKB(KP_Decimal) },
	{ VK(DIVIDE),			XKB(KP_Divide) },

	{ VK(F1),			XKB(F1) },
	{ VK(F2),			XKB(F2) },
	{ VK(F3),			XKB(F3) },
	{ VK(F4),			XKB(F4) },
	{ VK(F5),			XKB(F5) },
	{ VK(F6),			XKB(F6) },
	{ VK(F7),			XKB(F7) },
	{ VK(F8),			XKB(F8) },
	{ VK(F9),			XKB(F9) },
	{ VK(F10),			XKB(F10) },
	{ VK(F11),			XKB(F11) },
	{ VK(F12),			XKB(F12) },
	{ VK(F13),			XKB(F13) },
	{ VK(F14),			XKB(F14) },
	{ VK(F15),			XKB(F15) },
	{ VK(F16),			XKB(F16) },
	{ VK(F17),			XKB(F17) },
	{ VK(F18),			XKB(F18) },
	{ VK(F19),			XKB(F19) },
	{ VK(F20),			XKB(F20) },
	{ VK(F21),			XKB(F21) },
	{ VK(F22),			XKB(F22) },
	{ VK(F23),			XKB(F23) },
	{ VK(F24),			XKB(F24) },
	    // 136-143	Unassigned

#if defined(DO_CONTROL_KEYS)
	{ VK(NUMLOCK),			XKB(Num_Lock) },//Enhanced key
	{ VK(SCROLL),			XKB(Scroll_Lock) },
#endif
	    // 146-150	OEM specific
	    // 151-159	Unassigned

    //	{ VK(LSHIFT),			XKB() },
    //	{ VK(RSHIFT),			XKB() },
    //	{ VK(LCONTROL), 		XKB() },
    //	{ VK(RCONTROL), 		XKB() },
    //	{ VK(LMENU),			XKB() },
    //	{ VK(RMENU),			XKB() },
	{ VK(BROWSER_BACK),		XKB(XF86Back) },
	{ VK(BROWSER_FORWARD),		XKB(XF86Forward) },
	{ VK(BROWSER_REFRESH),		XKB(XF86Refresh) },
	{ VK(BROWSER_STOP),		XKB(XF86Stop) },
	{ VK(BROWSER_SEARCH),		XKB(XF86Search) },
	{ VK(BROWSER_FAVORITES),	XKB(XF86Favorites) },
	{ VK(BROWSER_HOME),		XKB(XF86HomePage) },
	{ VK(VOLUME_MUTE),		XKB(XF86AudioMute) },
	{ VK(VOLUME_DOWN),		XKB(XF86AudioLowerVolume) },
	{ VK(VOLUME_UP),		XKB(XF86AudioRaiseVolume) },
	{ VK(MEDIA_NEXT_TRACK), 	XKB(XF86AudioNext) },
	{ VK(MEDIA_PREV_TRACK), 	XKB(XF86AudioPrev) },
	{ VK(MEDIA_STOP),		XKB(XF86AudioStop) },
	{ VK(MEDIA_PLAY_PAUSE), 	XKB(XF86AudioPlay) },
	{ VK(LAUNCH_MAIL),		XKB(XF86Mail) },
	{ VK(LAUNCH_MEDIA_SELECT),	XKB(XF86Select) },
	{ VK(LAUNCH_APP1),		XKB(XF86Launch0) },
	{ VK(LAUNCH_APP2),		XKB(XF86Launch1) },
	    //	184-185 Reserved
	    //	(*) OEM: Used for miscellaneous characters; it can vary by keyboard.
	    //	Note: OEM VK's are ignored, we the code relies on IsAscii().
    //	{ VK(OEM_1),			XKB() },	// For the US standard keyboard, the ';:' key.
    //	{ VK(OEM_PLUS), 		XKB() },	// For any country/region, the '+' key.
    //	{ VK(OEM_COMMA),		XKB() },	// For any country/region, the ',' key.
    //	{ VK(OEM_MINUS),		XKB() },	// For any country/region, the '-' key.
    //	{ VK(OEM_PERIOD),		XKB() },	// For any country/region, the '.' key.
    //	{ VK(OEM_2),			XKB() },	// For the US standard keyboard, the '/?' key.
    //	{ VK(OEM_3),			XKB() },	// For the US standard keyboard, the '`~' key.
	    // 193-215	Reserved
	    // 216-218	Unassigned
    //	{ VK(OEM_4),			XKB() },	// For the US standard keyboard, the '[{' key.
    //	{ VK(OEM_5),			XKB() },	// For the US standard keyboard, the '\\|' key.
    //	{ VK(OEM_6),			XKB() },	// For the US standard keyboard, the ']}' key.
    //	{ VK(OEM_7),			XKB() },	// For the US standard keyboard, the 'single-quote/double-quote' key.
    //	{ VK(OEM_8),			XKB() },	// miscellaneous
	    // 224	Reserved
    //	{ VK(OEM_AX),			XKB() },	// <AX> key on Japanese AX kbd.
    //	{ VK(OEM_102),			XKB() },	// Either the angle bracket key or the backslash key on the RT 102-key keyboard.
	{ VK(ICO_HELP), 		XKB(Help) },
    //	{ VK(ICO_00),			XKB() },	// 00 key on ICO

    //	{ VK(PROCESSKEY),		XKB() },
	    // 230	OEM specific
    //	{ VK(PACKET),			XKB() },
	    // 232	Unassigned
	    // 233-245	OEM specific
    //	{ VK(ATTN),			XKB() },	// 3270 key; Finish/Attn (Attention)
    //	{ VK(CRSEL), 			XKB() },	// 3270 key; ChgSc/Jump/CrSel
    //	{ VK(EXSEL), 			XKB() },	// 3270 key; WS/Ctrl/ExSel
    //	{ VK(EREOF), 			XKB() },	// 3270 key; Erase EOF/ErInp (Erase end-of-field/Erase Input)
	{ VK(PLAY),			XKB(XF86AudioPlay) },
	{ VK(ZOOM),			XKB(XF86ZoomIn) },
    //	{ VK(NONAME),			XKB() },	// reserved
    //	{ VK(PA1),			XKB() },	// 3270 key; DUP/PA1 (Program Aid/Attention)
	{ VK(OEM_CLEAR),		XKB(XF86Clear) } // Ctrl-NumLock
	};

	//  Enhanced keys for the IBM-101, IBM-102 (plus MS-104 key keyboards are the
	//      INS, DEL, HOME, END, PAGE UP, PAGE DOWN,
	//
	//  and direction keys in the clusters to the left of the keypad;
	//  and the divide (/) and ENTER keys in the keypad.
	//
static const struct w2xkb	w2xkbs_enhanced[] = {
	{ VK(PRIOR),			XKB(Prior) },	// also Page_Up and osfPrior
	{ VK(NEXT),			XKB(Next) },	// also Page_Down and osfNext
	{ VK(HOME),			XKB(Home) },
	{ VK(END),			XKB(End) },
	{ VK(LEFT),			XKB(Left) },
	{ VK(RIGHT),			XKB(Right) },
	{ VK(UP),			XKB(Up) },
	{ VK(DOWN),			XKB(Down) },
	{ VK(INSERT),			XKB(Insert) },
	{ VK(DELETE),			XKB(Delete) },
	{ VK(DIVIDE),			XKB(KP_Divide) },
	{ VK(RETURN),			XKB(KP_Enter) },
#if defined(DO_CONTROL_KEYS)
    	{ VK(CONTROL),			XKB(Control_R) },
	{ VK(MENU),			XKB(Alt_R) },
#endif
	};

#undef __VKVALUE
#undef VK
#undef __XKBVALUE
#undef XKB

/*
 *	termemu_cio_keyevent ---
 *		Console key event parser.
 **/
int
termemu_cio_keyevent(const KEY_EVENT_RECORD *key, termemu_event_t *evt)
{
	const WORD wVirtualKeyCode = key->wVirtualKeyCode;
	const WORD wVirtualScanCode = key->wVirtualScanCode;
	const WCHAR uc = key->uChar.UnicodeChar;

	if (! key->bKeyDown) {
		return 0;		        // generally ignore key down events
        }

	//  Base evt.
	//
	evt->modifiers  = termemu_cio_modifiers(key->dwControlKeyState, 1);
	evt->vkkey      = wVirtualKeyCode;
	evt->vkname     = NULL;
	evt->vkenhanced = 0;
	evt->xkbkey     = XKB_KEY_NoSymbol;
	evt->xkbname    = NULL;
	evt->ascii      = 0;
	evt->unicode	= TSM_VTE_INVALID;

	//  Virtual keys.
	//
	if (key->dwControlKeyState & ENHANCED_KEY) {
		const struct w2xkb *vkkey = w2xkbs_enhanced,
			*vkend = vkkey + (sizeof(w2xkbs_enhanced)/sizeof(w2xkbs_enhanced[0]));
		for (;vkkey < vkend; ++vkkey) { // Specialised enhanced keys.
			if (vkkey->wVirtualKeyCode == wVirtualKeyCode &&
				    (vkkey->wVirtualScanCode == 0xffff || vkkey->wVirtualScanCode == wVirtualScanCode)) {
				evt->vkname  = vkkey->vkname;
				evt->xkbkey  = vkkey->xkbkey;
				evt->xkbname = vkkey->xkbname;
				evt->vkenhanced = 1;
				return 1;
			}
		}
	}

	{	const struct w2xkb *vkkey = w2xkbs_standard,
			*vkend = vkkey + (sizeof(w2xkbs_standard)/sizeof(w2xkbs_standard[0]));
		for (;vkkey < vkend; ++vkkey) { // General or non-specialised enhanced keys.
			if (vkkey->wVirtualKeyCode == wVirtualKeyCode &&
				    (vkkey->wVirtualScanCode == 0xffff || vkkey->wVirtualScanCode == wVirtualScanCode)) {
				evt->vkname  = vkkey->vkname;
				evt->xkbkey  = vkkey->xkbkey;
				evt->xkbname = vkkey->xkbname;
				return 2;
			}
		}
	}

	//  Unicode keys.
	//	Printable/non-printable unicode characters
	//
	if (uc) {
		if (uc <= 0x1f && (evt->modifiers & (TSM_CONTROL_MASK|TSM_ALT_MASK))) {
			evt->ascii = '@' + uc;	// Control, convert to source key; Ctrl-A ..
				// no equiv unicode character.
		} else {
			assert((uc >= 0x20 && uc <= 0x7f) || (uc >= 0xa0 && uc < 0x10ffff));
			if (uc <= 0x7f) {	// Unshifted ASCII character
				evt->ascii = ((evt->modifiers & TSM_SHIFT_MASK) ? tolower(uc) : uc);
			}
			evt->unicode = uc;	// Shifted character value.
		}
		return 3;
	}

	//  Specials.
	//
	if (evt->modifiers & (TSM_CONTROL_MASK|TSM_ALT_MASK)) {
		//
		//  Not all keys are visible when control and/or alt are active
		//	lookup the ASCII key against only the scancode possiblity shifted.
		//	Examples include ',' and '.'
		//
		//  These can be/are reportd via VK_OEM_xxx definitions, yet many are locale specific
		//  as such not portable beyond US keyboards; the follow method (so far) seems the cleanise.
		//
		//  References:
		//	https://msdn.microsoft.com/en-us/library/ms892480.aspx,
		//	scan-code to vk-code, by locale/keyboard.
		//
		BYTE keystate[256] = {0};	// VK key states.
		WORD keys[8] = {0};

		if (key->dwControlKeyState & SHIFT_PRESSED)
			keystate[VK_SHIFT] = 0x80;	//down; high bit

		if (key->dwControlKeyState & CAPSLOCK_ON)
			keystate[VK_CAPITAL] = 0x01;	//on; low bit

		if (1 == ToAscii(wVirtualKeyCode, key->wVirtualScanCode, keystate, keys, 0)) {
			if (keys[0] >= 0x20 && keys[0] <= 0x7f) {
				evt->modifiers &= ~TSM_SHIFT_MASK;
				evt->ascii = keys[0];
				return 4;
			}
		}
	}

	return 0;
}


/*
 *	termemu_cio_modifiers ---
 *		Console event modifier parser.
 **/
unsigned
termemu_cio_modifiers(const DWORD dwControlKeyState, bool apps)
{
	unsigned modifiers = 0;
	if (dwControlKeyState & (SHIFT_PRESSED)) {
		modifiers |= TSM_SHIFT_MASK;
	}
	if (dwControlKeyState & (NUMLOCK_ON)) {
		modifiers |= TSM_LOCK_MASK;
	}
	if (dwControlKeyState & (LEFT_CTRL_PRESSED | RIGHT_CTRL_PRESSED)) {
		modifiers |= TSM_CONTROL_MASK;
	}
	if (dwControlKeyState & (LEFT_ALT_PRESSED | RIGHT_ALT_PRESSED)) {
		modifiers |= TSM_ALT_MASK;
	}
	if (apps && GetKeyState(VK_APPS)) {
		modifiers |= TSM_LOGO_MASK;	// Hamburger Button, not windows key
			// beware: Key toggles like CapsLock, ie: press on, when press off
	}
	return modifiers;
}


/*
 *	termemu_cio_keyauto ---
 *		Generate a key sequence, for auto-testing.
 **/
int
termemu_cio_keyauto(int sequence, INPUT_RECORD *ir, termemu_event_t *evt)
{
	const static unsigned standard =
		(sizeof(w2xkbs_standard)/sizeof(w2xkbs_standard[0]));
	const static unsigned enhanced =
		(sizeof(w2xkbs_enhanced)/sizeof(w2xkbs_enhanced[0]));
	const static unsigned modifiers[] = {
		{ LEFT_ALT_PRESSED|LEFT_CTRL_PRESSED|SHIFT_PRESSED },
		{ LEFT_ALT_PRESSED|LEFT_CTRL_PRESSED },
		{ LEFT_ALT_PRESSED|SHIFT_PRESSED },
		{ LEFT_CTRL_PRESSED|SHIFT_PRESSED },
		{ LEFT_CTRL_PRESSED },
		{ SHIFT_PRESSED },
		{ 0 },
		};

	unsigned state = ((unsigned)sequence & 0xff0000) >> 16,
	    idx = ((unsigned)sequence & 0xfff);

	memset(ir, 0, sizeof(*ir));
	memset(evt, 0, sizeof(*evt));

	if (state < sizeof(modifiers)) {
		KEY_EVENT_RECORD *key = &ir->Event.KeyEvent;
		int nidx = idx + 1;		// next index

		ir->EventType = KEY_EVENT;

		key->dwControlKeyState = modifiers[state];
		key->bKeyDown = 1;
		key->wRepeatCount = 1;

		evt->modifiers = termemu_cio_modifiers(modifiers[state], 0);
		evt->unicode = TSM_VTE_INVALID;
		if (idx < standard) {
			const struct w2xkb *vkkey = w2xkbs_standard + idx;

			key->wVirtualKeyCode = vkkey->wVirtualKeyCode;
			evt->vkkey   = vkkey->wVirtualKeyCode;
			evt->vkname  = vkkey->vkname;
			evt->xkbkey  = vkkey->xkbkey;
			evt->xkbname = vkkey->xkbname;
			evt->vkenhanced = 0;

		} else if (idx < (standard + enhanced)) {
			const struct w2xkb *vkkey = w2xkbs_enhanced + (idx - standard);

			key->dwControlKeyState |= ENHANCED_KEY;
			key->wVirtualKeyCode = vkkey->wVirtualKeyCode;
			evt->vkkey   = vkkey->wVirtualKeyCode;
			evt->vkname  = vkkey->vkname;
			evt->xkbkey  = vkkey->xkbkey;
			evt->xkbname = vkkey->xkbname;
			evt->vkenhanced = 1;

		} else if (idx <= (standard + enhanced + 0x7e)) {
			while (1) {
				const int ch = idx - (standard + enhanced);

				key->uChar.UnicodeChar = ch;
				if (ch <= 0x1f) { //control
					if (0 == (evt->modifiers & (TSM_CONTROL_MASK|TSM_ALT_MASK))) {
						idx += 0x1f; //skip
						continue;
					}
					evt->ascii = '@' + ch;
				} else { //printable
					evt->ascii = ((evt->modifiers & TSM_SHIFT_MASK) ? tolower(ch) : ch);
					evt->unicode = ch;
				}

				if (0x7e == evt->unicode) {
					nidx = 0;
					++state;
				}
				break;
			}

		} else { //unexpected state
			assert(false);
			return -1;
		}

		return (int)((state << 16) + nidx);
	}
	ir->EventType = 0;
	return -1;  //complete
}

/*end*/
