#ifndef VK_TABLE_H_INCLUDED
#define VK_TABLE_H_INCLUDED

/*
 *	VK_xxx definitions
 */

struct vkdef {
	const char	*name;
	size_t		namelen;
	unsigned	value;
#define VK(__v) 			#__v, sizeof(#__v)-1, __v
#define VKASCII(__v,__c)		"VK_"#__v, 4, __c
#define VKOSF(__n)			__n, sizeof(__n)-1
	const char	*description;
};

static const struct vkdef vkdefs[] = {
    //	{ VK(VK_LBUTTON),		"Left mouse button" },
    //	{ VK(VK_RBUTTON),		"Right mouse button" },
	{ VK(VK_CANCEL),		"Control-break processing" },
    //	{ VK(VK_MBUTTON),		"Middle mouse button (three-button mouse)" },
    //	{ VK(VK_XBUTTON1),		"Windows 2000: X1 mouse button" },
    //	{ VK(VK_XBUTTON2),		"Windows 2000: X2 mouse button" },
	    // 0x07 : unassigned

	{ VK(VK_BACK),			"BACKSPACE key" },
	{ VK(VK_TAB),			"TAB key" },
	    // 0x0a - 0x0B : reserved

	{ VK(VK_CLEAR), 		"CLEAR key" },
	{ VK(VK_RETURN),		"ENTER key" },
	    // 0xe-0xf : undefined

	{ VK(VK_SHIFT), 		"SHIFT key" },
	{ VK(VK_CONTROL),		"CTRL key" },
	{ VK(VK_MENU),			"ALT key" },
	{ VK(VK_PAUSE), 		"PAUSE key" },
	{ VK(VK_CAPITAL),		"CAPS LOCK key" },
	    // 0x16 : undefined

	{ VK(VK_KANA),			"IME Kana mode" },
    //	{ VK(VK_HANGUEL),		"IME Hanguel mode (maintained for compatibility; use VK_HANGUL)" },
	{ VK(VK_HANGUL),		"IME Hangul mode" },
	{ VK(VK_JUNJA), 		"IME Junja mode" },
	{ VK(VK_FINAL), 		"IME final mode" },
	{ VK(VK_HANJA), 		"IME Hanja mode" },
	{ VK(VK_KANJI), 		"IME Kanji mode" },
	    // 0x1a : undefined

	{ VK(VK_ESCAPE),		"ESC key" },
	{ VK(VK_CONVERT),		"IME convert" },
	{ VK(VK_NONCONVERT),		"IME nonconvert" },
	{ VK(VK_ACCEPT),		"IME accept" },
	{ VK(VK_MODECHANGE),		"IME mode change request" },
	{ VK(VK_SPACE), 		"SPACEBAR" },
	{ VK(VK_PRIOR), 		"PAGE UP key" },
	{ VK(VK_NEXT),			"PAGE DOWN key" },
	{ VK(VK_END),			"END key" },
	{ VK(VK_HOME),			"HOME key" },
	{ VK(VK_LEFT),			"LEFT ARROW key" },
	{ VK(VK_UP),			"UP ARROW key" },
	{ VK(VK_RIGHT), 		"RIGHT ARROW key" },
	{ VK(VK_DOWN),			"DOWN ARROW key" },
	{ VK(VK_SELECT),		"SELECT key" },
	{ VK(VK_PRINT), 		"PRINT key" },
	{ VK(VK_EXECUTE),		"EXECUTE key" },
	{ VK(VK_SNAPSHOT),		"PRINT SCREEN key" },
	{ VK(VK_INSERT),		"INS key" },
	{ VK(VK_DELETE),		"DEL key" },
	{ VK(VK_HELP),			"HELP key" },

	    // VK_0 - VK_9 are the same as ASCII '0' - '9' (0x30 - 0x39)
	    // VK_A - VK_Z are the same as ASCII 'A' - 'Z' (0x41 - 0x5A)
	    //
	    // unshifted ASCII A .. Z
	    // Note: the Unicode code *shall* have the shift status applied.
#define VK_0	0x30
	{ VKASCII(0,'0'),		"0 key" },
	{ VKASCII(1,'1'),		"1 key" },
	{ VKASCII(2,'2'),		"2 key" },
	{ VKASCII(3,'3'),		"3 key" },
	{ VKASCII(4,'4'),		"4 key" },
	{ VKASCII(5,'5'),		"5 key" },
	{ VKASCII(6,'6'),		"6 key" },
	{ VKASCII(7,'7'),		"7 key" },
	{ VKASCII(8,'8'),		"8 key" },
	{ VKASCII(9,'9'),		"9 key" },
	    // 0x40 Undefined
#define VK_A	0x40
	{ VKASCII(A,'a'),		"A key" },
	{ VKASCII(B,'b'),		"B key" },
	{ VKASCII(C,'c'),		"C key" },
	{ VKASCII(D,'d'),		"D key" },
	{ VKASCII(E,'e'),		"E key" },
	{ VKASCII(F,'f'),		"F key" },
	{ VKASCII(G,'g'),		"G key" },
	{ VKASCII(H,'h'),		"H key" },
	{ VKASCII(I,'i'),		"I key" },
	{ VKASCII(J,'j'),		"J key" },
	{ VKASCII(K,'k'),		"K key" },
	{ VKASCII(L,'l'),		"L key" },
	{ VKASCII(M,'m'),		"M key" },
	{ VKASCII(N,'n'),		"N key" },
	{ VKASCII(O,'o'),		"O key" },
	{ VKASCII(P,'p'),		"P key" },
	{ VKASCII(Q,'q'),		"Q key" },
	{ VKASCII(R,'r'),		"R key" },
	{ VKASCII(S,'s'),		"S key" },
	{ VKASCII(T,'t'),		"T key" },
	{ VKASCII(U,'u'),		"U key" },
	{ VKASCII(V,'v'),		"V key" },
	{ VKASCII(W,'w'),		"W key" },
	{ VKASCII(X,'x'),		"X key" },
	{ VKASCII(Y,'y'),		"Y key" },
	{ VKASCII(Z,'z'),		"Z key" },

	{ VK(VK_LWIN),			"Left Windows key" },
	{ VK(VK_RWIN),			"Right Windows key" },
	{ VK(VK_APPS),			"Applications key" },
	    // 94  Reserved
	{ VK(VK_SLEEP), 		"Computer Sleep key" },
	{ VK(VK_NUMPAD0),		"Numeric keypad 0 key" },
	{ VK(VK_NUMPAD1),		"Numeric keypad 1 key" },
	{ VK(VK_NUMPAD2),		"Numeric keypad 2 key" },
	{ VK(VK_NUMPAD3),		"Numeric keypad 3 key" },
	{ VK(VK_NUMPAD4),		"Numeric keypad 4 key" },
	{ VK(VK_NUMPAD5),		"Numeric keypad 5 key" },
	{ VK(VK_NUMPAD6),		"Numeric keypad 6 key" },
	{ VK(VK_NUMPAD7),		"Numeric keypad 7 key" },
	{ VK(VK_NUMPAD8),		"Numeric keypad 8 key" },
	{ VK(VK_NUMPAD9),		"Numeric keypad 9 key" },
	{ VK(VK_MULTIPLY),		"Multiply key" },
	{ VK(VK_ADD),			"Add key" },
	{ VK(VK_SEPARATOR),		"Separator key" },
	{ VK(VK_SUBTRACT),		"Subtract key" },
	{ VK(VK_DECIMAL),		"Decimal key" },
	{ VK(VK_DIVIDE),		"Divide key" },
	{ VK(VK_F1),			"F1 key" },
	{ VK(VK_F2),			"F2 key" },
	{ VK(VK_F3),			"F3 key" },
	{ VK(VK_F4),			"F4 key" },
	{ VK(VK_F5),			"F5 key" },
	{ VK(VK_F6),			"F6 key" },
	{ VK(VK_F7),			"F7 key" },
	{ VK(VK_F8),			"F8 key" },
	{ VK(VK_F9),			"F9 key" },
	{ VK(VK_F10),			"F10 key" },
	{ VK(VK_F11),			"F11 key" },
	{ VK(VK_F12),			"F12 key" },
	{ VK(VK_F13),			"F13 key" },
	{ VK(VK_F14),			"F14 key" },
	{ VK(VK_F15),			"F15 key" },
	{ VK(VK_F16),			"F16 key" },
	{ VK(VK_F17),			"F17 key" },
	{ VK(VK_F18),			"F18 key" },
	{ VK(VK_F19),			"F19 key" },
	{ VK(VK_F20),			"F20 key" },
	{ VK(VK_F21),			"F21 key" },
	{ VK(VK_F22),			"F22 key" },
	{ VK(VK_F23),			"F23 key" },
	{ VK(VK_F24),			"F24 key" },
	    // 136-143	Unassigned
	{ VK(VK_NUMLOCK),		"NUM LOCK key" },
	{ VK(VK_SCROLL),		"SCROLL LOCK key" },
	    // 146-150	OEM specific
	    // 151-159	Unassigned
	{ VK(VK_LSHIFT),		"Left SHIFT key" },
	{ VK(VK_RSHIFT),		"Right SHIFT key" },
	{ VK(VK_LCONTROL),		"Left CONTROL key" },
	{ VK(VK_RCONTROL),		"Right CONTROL key" },
	{ VK(VK_LMENU), 		"Left MENU key" },
	{ VK(VK_RMENU), 		"Right MENU key" },
	{ VK(VK_BROWSER_BACK),		"Browser Back key" },
	{ VK(VK_BROWSER_FORWARD),	"Browser Forward key" },
	{ VK(VK_BROWSER_REFRESH),	"Browser Refresh key" },
	{ VK(VK_BROWSER_STOP),		"Browser Stop key" },
	{ VK(VK_BROWSER_SEARCH),	"Browser Search key" },
	{ VK(VK_BROWSER_FAVORITES),	"Browser Favorites key" },
	{ VK(VK_BROWSER_HOME),		"Browser Start and Home key" },
	{ VK(VK_VOLUME_MUTE),		"Volume Mute key" },
	{ VK(VK_VOLUME_DOWN),		"Volume Down key" },
	{ VK(VK_VOLUME_UP),		"Volume Up key" },
	{ VK(VK_MEDIA_NEXT_TRACK),	"Next Track key" },
	{ VK(VK_MEDIA_PREV_TRACK),	"Previous Track key" },
	{ VK(VK_MEDIA_STOP),		"Stop Media key" },
	{ VK(VK_MEDIA_PLAY_PAUSE),	"Play/Pause Media key" },
	{ VK(VK_LAUNCH_MAIL),		"Start Mail key" },
	{ VK(VK_LAUNCH_MEDIA_SELECT),	"Select Media key" },
	{ VK(VK_LAUNCH_APP1),		"Start Application 1 key" },
	{ VK(VK_LAUNCH_APP2),		"Start Application 2 key" },
	    //	184-185   Reserved
	    //	(*) OEM: Used for miscellaneous characters; it can vary by keyboard.
	{ VK(VK_OEM_1), 		"US standard keyboard, the ';:' key" },
	{ VK(VK_OEM_PLUS),		"Any country/region, the '+' key" },
	{ VK(VK_OEM_COMMA),		"Any country/region, the ',' key" },
	{ VK(VK_OEM_MINUS),		"Any country/region, the '-' key" },
	{ VK(VK_OEM_PERIOD),		"Any country/region, the '.' key" },
	{ VK(VK_OEM_2), 		"US standard keyboard, the '/?' key" },
	{ VK(VK_OEM_3), 		"US standard keyboard, the '`~' key" },
	    // 193-215	Reserved
	    // 216-218	Unassigned
	{ VK(VK_OEM_4), 		"US standard keyboard, the '[{' key" },
	{ VK(VK_OEM_5), 		"US standard keyboard, the '\\|' key" },
	{ VK(VK_OEM_6), 		"US standard keyboard, the ']}' key" },
	{ VK(VK_OEM_7), 		"US standard keyboard, the 'single-quote/double-quote' key" },
	{ VK(VK_OEM_8), 		"miscellaneous" },
	    // 224	Reserved
	{ VK(VK_OEM_AX),		"<AX> key on Japanese AX kbd" },
	{ VK(VK_OEM_102),		"Windows: Either the angle bracket key or the backslash key on the RT 102-key keyboard" },
	{ VK(VK_ICO_HELP),		"Help key on ICO" },
	{ VK(VK_ICO_00),		"00 key on ICO" },

	{ VK(VK_PROCESSKEY),		"Windows 95/98, Windows NT 4.0, Windows 2000: IME PROCESS key" },
	    // 230	OEM specific
	{ VK(VK_PACKET),		"Used to pass Unicode characters as if they were keystrokes" },
	    // 232	Unassigned
	    // 233-245	OEM specific
	{ VK(VK_ATTN),			"Attn key" },
	{ VK(VK_CRSEL), 		"CrSel key" },
	{ VK(VK_EXSEL), 		"ExSel key" },
	{ VK(VK_EREOF), 		"Erase EOF key" },
	{ VK(VK_PLAY),			"Play key" },
	{ VK(VK_ZOOM),			"Zoom key" },
	{ VK(VK_NONAME),		"Reserved for future use" },
	{ VK(VK_PA1),			"PA1 key" },
	{ VK(VK_OEM_CLEAR),		"Clear key" },
	};

/*
 *	osfXXX definitions to VK_xxx
 *
 *	    XKB_KEY_osfCopy		0x1004FF02
 *	    XKB_KEY_osfCut		0x1004FF03
 *	    XKB_KEY_osfPaste		0x1004FF04
 *	    XKB_KEY_osfBackTab		0x1004FF07
 *	    XKB_KEY_osfBackSpace	0x1004FF08
 *	    XKB_KEY_osfClear		0x1004FF0B
 *	    XKB_KEY_osfEscape		0x1004FF1B
 *	    XKB_KEY_osfAddMode		0x1004FF31
 *	    XKB_KEY_osfPrimaryPaste	0x1004FF32
 *	    XKB_KEY_osfQuickPaste	0x1004FF33
 *	    XKB_KEY_osfPageLeft 	0x1004FF40
 *	    XKB_KEY_osfPageUp		0x1004FF41
 *	    XKB_KEY_osfPageDown 	0x1004FF42
 *	    XKB_KEY_osfPageRight	0x1004FF43
 *	    XKB_KEY_osfActivate 	0x1004FF44
 *	    XKB_KEY_osfMenuBar		0x1004FF45
 *	    XKB_KEY_osfLeft		0x1004FF51
 *	    XKB_KEY_osfUp		0x1004FF52
 *	    XKB_KEY_osfRight		0x1004FF53
 *	    XKB_KEY_osfDown		0x1004FF54
 *	    XKB_KEY_osfEndLine		0x1004FF57
 *	    XKB_KEY_osfBeginLine	0x1004FF58
 *	    XKB_KEY_osfEndData		0x1004FF59
 *	    XKB_KEY_osfBeginData	0x1004FF5A
 *	    XKB_KEY_osfPrevMenu 	0x1004FF5B
 *	    XKB_KEY_osfNextMenu 	0x1004FF5C
 *	    XKB_KEY_osfPrevField	0x1004FF5D
 *	    XKB_KEY_osfNextField	0x1004FF5E
 *	    XKB_KEY_osfSelect		0x1004FF60
 *	    XKB_KEY_osfInsert		0x1004FF63
 *	    XKB_KEY_osfUndo		0x1004FF65
 *	    XKB_KEY_osfMenu		0x1004FF67
 *	    XKB_KEY_osfCancel		0x1004FF69
 *	    XKB_KEY_osfHelp		0x1004FF6A
 *	    XKB_KEY_osfSelectAll	0x1004FF71
 *	    XKB_KEY_osfDeselectAll	0x1004FF72
 *	    XKB_KEY_osfReselect 	0x1004FF73
 *	    XKB_KEY_osfExtend		0x1004FF74
 *	    XKB_KEY_osfRestore		0x1004FF78
 *	    XKB_KEY_osfDelete		0x1004FFFF
 *
 */
static const struct vkdef osfdefs[] = {
    //	{ VKOSF("osfBackTab"),		??? },
	{ VKOSF("osfBackSpace"),	VK_BACK },
	{ VKOSF("osfClear"),		VK_CLEAR },
	{ VKOSF("osfPageUp"),		VK_PRIOR },
	{ VKOSF("osfPageDown"), 	VK_NEXT },
	{ VKOSF("osfMenuBar"),		VK_F10 },
	{ VKOSF("osfUp"),		VK_UP },
	{ VKOSF("osfRight"),		VK_RIGHT },
	{ VKOSF("osfDown"),		VK_DOWN },
	{ VKOSF("osfDown"),		VK_DOWN },
	{ VKOSF("osfEndLine"),		VK_END },
	{ VKOSF("osfBeginLine"),	VK_HOME },
	{ VKOSF("osfLeft"),		VK_LEFT },
	{ VKOSF("osfMenu"),		VK_F4 },
	{ VKOSF("osfSelect"),		VK_SELECT },
	{ VKOSF("osfInsert"),		VK_INSERT },
	{ VKOSF("osfCancel"),		VK_ESCAPE },
	{ VKOSF("osfHelp"),		VK_F1 },
	{ VKOSF("osfDelete"),		VK_DELETE },
	};

#undef	VK
#undef	VKASCII
#undef	VKOSF

#endif	//VK_TABLE_H_INCLUDED


