/* This file is generated from <mkkeys> on Sat Mar 25 00:00:21 2017 */
/* termemumkkeys: termemumkkeys.c,v 1.1 2017/03/24 23:53:49 cvsuser Exp  */
/* $Id: keysymdb.h,v 1.2 2017/03/25 00:00:56 cvsuser Exp $ */
/* ------------------------ do not edit ------------------------ */

/*
 *  Object Structure:
 * 
 *     struct ktableobject {
 *         unsigned char sg[2];     // signature: 0 .. 1
 *         unsigned char ks[4];     // keysymbol: 2 .. 5
 *         unsigned char uc[3];     // unicode:   6 .. 8 (1 - 0x10ffff)
 *         unsigned char nm[1];     // name:      9 .. #<nul>
 *     };
 * 
 */
#define KTABLESG 0
#define KTABLEKS 2
#define KTABLEUC 6
#define KTABLENM 9

#ifdef NEEDKTABLE
static const unsigned char _XkeyTable[] = {
0,
0x74, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 'K','E','Y','_','V','o','i','d','S','y','m','b','o','l',0, /*   25, 0x0, KEY_VoidSymbol, Void symbol */
0x9d, 0xff, 0x00, 0x00, 0xff, 0x08, 0x00, 0x00, 0x00, 'K','E','Y','_','B','a','c','k','S','p','a','c','e',0, /*   48, 0xff08, KEY_BackSpace, Back space, back char */
0x26, 0x5c, 0x00, 0x00, 0xff, 0x09, 0x00, 0x00, 0x00, 'K','E','Y','_','T','a','b',0, /*   65, 0xff09, KEY_Tab */
0xd7, 0x42, 0x00, 0x00, 0xff, 0x0a, 0x00, 0x00, 0x00, 'K','E','Y','_','L','i','n','e','f','e','e','d',0, /*   87, 0xff0a, KEY_Linefeed, Linefeed, LF */
0x99, 0xf8, 0x00, 0x00, 0xff, 0x0b, 0x00, 0x00, 0x00, 'K','E','Y','_','C','l','e','a','r',0, /*  106, 0xff0b, KEY_Clear */
0x36, 0x96, 0x00, 0x00, 0xff, 0x0d, 0x00, 0x00, 0x00, 'K','E','Y','_','R','e','t','u','r','n',0, /*  126, 0xff0d, KEY_Return, Return, enter */
0x9a, 0xc7, 0x00, 0x00, 0xff, 0x13, 0x00, 0x00, 0x00, 'K','E','Y','_','P','a','u','s','e',0, /*  145, 0xff13, KEY_Pause, Pause, hold */
0xd7, 0x3d, 0x00, 0x00, 0xff, 0x14, 0x00, 0x00, 0x00, 'K','E','Y','_','S','c','r','o','l','l','_','L','o','c','k',0, /*  170, 0xff14, KEY_Scroll_Lock */
0x6f, 0x0b, 0x00, 0x00, 0xff, 0x15, 0x00, 0x00, 0x00, 'K','E','Y','_','S','y','s','_','R','e','q',0, /*  191, 0xff15, KEY_Sys_Req */
0x34, 0xf1, 0x00, 0x00, 0xff, 0x1b, 0x00, 0x00, 0x00, 'K','E','Y','_','E','s','c','a','p','e',0, /*  211, 0xff1b, KEY_Escape */
0x34, 0x51, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 'K','E','Y','_','D','e','l','e','t','e',0, /*  231, 0xffff, KEY_Delete, Delete, rubout */
0xb7, 0x77, 0x00, 0x00, 0xff, 0x20, 0x00, 0x00, 0x00, 'K','E','Y','_','M','u','l','t','i','_','k','e','y',0, /*  254, 0xff20, KEY_Multi_key, Multi-key character compose */
0xa7, 0x3e, 0x00, 0x00, 0xff, 0x37, 0x00, 0x00, 0x00, 'K','E','Y','_','C','o','d','e','i','n','p','u','t',0, /*  277, 0xff37, KEY_Codeinput */
0x9a, 0x01, 0x00, 0x00, 0xff, 0x3c, 0x00, 0x00, 0x00, 'K','E','Y','_','S','i','n','g','l','e','C','a','n','d','i','d','a','t','e',0, /*  306, 0xff3c, KEY_SingleCandidate */
0x32, 0x01, 0x00, 0x00, 0xff, 0x3d, 0x00, 0x00, 0x00, 'K','E','Y','_','M','u','l','t','i','p','l','e','C','a','n','d','i','d','a','t','e',0, /*  337, 0xff3d, KEY_MultipleCandidate */
0x6a, 0x01, 0x00, 0x00, 0xff, 0x3e, 0x00, 0x00, 0x00, 'K','E','Y','_','P','r','e','v','i','o','u','s','C','a','n','d','i','d','a','t','e',0, /*  368, 0xff3e, KEY_PreviousCandidate */
0x9a, 0x4d, 0x00, 0x00, 0xff, 0x21, 0x00, 0x00, 0x00, 'K','E','Y','_','K','a','n','j','i',0, /*  387, 0xff21, KEY_Kanji, Kanji, Kanji convert */
0xda, 0x5c, 0x00, 0x00, 0xff, 0x22, 0x00, 0x00, 0x00, 'K','E','Y','_','M','u','h','e','n','k','a','n',0, /*  409, 0xff22, KEY_Muhenkan, Cancel Conversion */
0xa6, 0xc1, 0x00, 0x00, 0xff, 0x23, 0x00, 0x00, 0x00, 'K','E','Y','_','H','e','n','k','a','n','_','M','o','d','e',0, /*  434, 0xff23, KEY_Henkan_Mode, Start/Stop Conversion */
0x34, 0xdc, 0x00, 0x00, 0xff, 0x23, 0x00, 0x00, 0x00, 'K','E','Y','_','H','e','n','k','a','n',0, /*  454, 0xff23, KEY_Henkan, Alias for Henkan_Mode */
0x36, 0x99, 0x00, 0x00, 0xff, 0x24, 0x00, 0x00, 0x00, 'K','E','Y','_','R','o','m','a','j','i',0, /*  474, 0xff24, KEY_Romaji, to Romaji */
0xd5, 0x89, 0x00, 0x00, 0xff, 0x25, 0x00, 0x00, 0x00, 'K','E','Y','_','H','i','r','a','g','a','n','a',0, /*  496, 0xff25, KEY_Hiragana, to Hiragana */
0xd5, 0x69, 0x00, 0x00, 0xff, 0x26, 0x00, 0x00, 0x00, 'K','E','Y','_','K','a','t','a','k','a','n','a',0, /*  518, 0xff26, KEY_Katakana, to Katakana */
0xc9, 0x69, 0x00, 0x00, 0xff, 0x27, 0x00, 0x00, 0x00, 'K','E','Y','_','H','i','r','a','g','a','n','a','_','K','a','t','a','k','a','n','a',0, /*  549, 0xff27, KEY_Hiragana_Katakana, Hiragana/Katakana toggle */
0x6e, 0xa7, 0x00, 0x00, 0xff, 0x28, 0x00, 0x00, 0x00, 'K','E','Y','_','Z','e','n','k','a','k','u',0, /*  570, 0xff28, KEY_Zenkaku, to Zenkaku */
0x69, 0xa7, 0x00, 0x00, 0xff, 0x29, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','k','a','k','u',0, /*  591, 0xff29, KEY_Hankaku, to Hankaku */
0x01, 0xa7, 0x00, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 'K','E','Y','_','Z','e','n','k','a','k','u','_','H','a','n','k','a','k','u',0, /*  620, 0xff2a, KEY_Zenkaku_Hankaku, Zenkaku/Hankaku toggle */
0x6f, 0x47, 0x00, 0x00, 0xff, 0x2b, 0x00, 0x00, 0x00, 'K','E','Y','_','T','o','u','r','o','k','u',0, /*  641, 0xff2b, KEY_Touroku, Add to Dictionary */
0x35, 0xb5, 0x00, 0x00, 0xff, 0x2c, 0x00, 0x00, 0x00, 'K','E','Y','_','M','a','s','s','y','o',0, /*  661, 0xff2c, KEY_Massyo, Delete from Dictionary */
0xa8, 0x5d, 0x00, 0x00, 0xff, 0x2d, 0x00, 0x00, 0x00, 'K','E','Y','_','K','a','n','a','_','L','o','c','k',0, /*  684, 0xff2d, KEY_Kana_Lock, Kana Lock */
0x51, 0x74, 0x00, 0x00, 0xff, 0x2e, 0x00, 0x00, 0x00, 'K','E','Y','_','K','a','n','a','_','S','h','i','f','t',0, /*  708, 0xff2e, KEY_Kana_Shift, Kana Shift */
0x54, 0xf4, 0x00, 0x00, 0xff, 0x2f, 0x00, 0x00, 0x00, 'K','E','Y','_','E','i','s','u','_','S','h','i','f','t',0, /*  732, 0xff2f, KEY_Eisu_Shift, Alphanumeric Shift */
0xae, 0xc1, 0x00, 0x00, 0xff, 0x30, 0x00, 0x00, 0x00, 'K','E','Y','_','E','i','s','u','_','t','o','g','g','l','e',0, /*  757, 0xff30, KEY_Eisu_toggle, Alphanumeric toggle */
0x52, 0xef, 0x00, 0x00, 0xff, 0x37, 0x00, 0x00, 0x00, 'K','E','Y','_','K','a','n','j','i','_','B','a','n','g','o','u',0, /*  783, 0xff37, KEY_Kanji_Bangou, Codeinput */
0xdc, 0x43, 0x00, 0x00, 0xff, 0x3d, 0x00, 0x00, 0x00, 'K','E','Y','_','Z','e','n','_','K','o','h','o',0, /*  805, 0xff3d, KEY_Zen_Koho, Multiple/All Candidate(s) */
0xd3, 0xa3, 0x00, 0x00, 0xff, 0x3e, 0x00, 0x00, 0x00, 'K','E','Y','_','M','a','e','_','K','o','h','o',0, /*  827, 0xff3e, KEY_Mae_Koho, Previous Candidate */
0x4d, 0x0b, 0x00, 0x00, 0xff, 0x50, 0x00, 0x00, 0x00, 'K','E','Y','_','H','o','m','e',0, /*  845, 0xff50, KEY_Home */
0x4d, 0x04, 0x00, 0x00, 0xff, 0x51, 0x00, 0x00, 0x00, 'K','E','Y','_','L','e','f','t',0, /*  863, 0xff51, KEY_Left, Move left, left arrow */
0x13, 0x0e, 0x00, 0x00, 0xff, 0x52, 0x00, 0x00, 0x00, 'K','E','Y','_','U','p',0, /*  879, 0xff52, KEY_Up, Move up, up arrow */
0x9a, 0xe8, 0x00, 0x00, 0xff, 0x53, 0x00, 0x00, 0x00, 'K','E','Y','_','R','i','g','h','t',0, /*  898, 0xff53, KEY_Right, Move right, right arrow */
0x4d, 0x08, 0x00, 0x00, 0xff, 0x54, 0x00, 0x00, 0x00, 'K','E','Y','_','D','o','w','n',0, /*  916, 0xff54, KEY_Down, Move down, down arrow */
0x9b, 0x24, 0x00, 0x00, 0xff, 0x55, 0x00, 0x00, 0x00, 'K','E','Y','_','P','r','i','o','r',0, /*  935, 0xff55, KEY_Prior, Prior, previous */
0x6a, 0xce, 0x00, 0x00, 0xff, 0x55, 0x00, 0x00, 0x00, 'K','E','Y','_','P','a','g','e','_','U','p',0, /*  956, 0xff55, KEY_Page_Up */
0x4d, 0x38, 0x00, 0x00, 0xff, 0x56, 0x00, 0x00, 0x00, 'K','E','Y','_','N','e','x','t',0, /*  974, 0xff56, KEY_Next, Next */
0xac, 0x08, 0x00, 0x00, 0xff, 0x56, 0x00, 0x00, 0x00, 'K','E','Y','_','P','a','g','e','_','D','o','w','n',0, /*  997, 0xff56, KEY_Page_Down */
0x26, 0x3c, 0x00, 0x00, 0xff, 0x57, 0x00, 0x00, 0x00, 'K','E','Y','_','E','n','d',0, /* 1014, 0xff57, KEY_End, EOL */
0x99, 0xc4, 0x00, 0x00, 0xff, 0x58, 0x00, 0x00, 0x00, 'K','E','Y','_','B','e','g','i','n',0, /* 1033, 0xff58, KEY_Begin, BOL */
0x36, 0x1e, 0x00, 0x00, 0xff, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','l','e','c','t',0, /* 1053, 0xff60, KEY_Select, Select, mark */
0x9b, 0x24, 0x00, 0x00, 0xff, 0x61, 0x00, 0x00, 0x00, 'K','E','Y','_','P','r','i','n','t',0, /* 1072, 0xff61, KEY_Print */
0x6b, 0x49, 0x00, 0x00, 0xff, 0x62, 0x00, 0x00, 0x00, 'K','E','Y','_','E','x','e','c','u','t','e',0, /* 1093, 0xff62, KEY_Execute, Execute, run, do */
0x35, 0xc4, 0x00, 0x00, 0xff, 0x63, 0x00, 0x00, 0x00, 'K','E','Y','_','I','n','s','e','r','t',0, /* 1113, 0xff63, KEY_Insert, Insert, insert here */
0x4d, 0x67, 0x00, 0x00, 0xff, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','U','n','d','o',0, /* 1131, 0xff65, KEY_Undo */
0x4d, 0x2b, 0x00, 0x00, 0xff, 0x66, 0x00, 0x00, 0x00, 'K','E','Y','_','R','e','d','o',0, /* 1149, 0xff66, KEY_Redo, Redo, again */
0x4d, 0x1d, 0x00, 0x00, 0xff, 0x67, 0x00, 0x00, 0x00, 'K','E','Y','_','M','e','n','u',0, /* 1167, 0xff67, KEY_Menu */
0x4c, 0xe4, 0x00, 0x00, 0xff, 0x68, 0x00, 0x00, 0x00, 'K','E','Y','_','F','i','n','d',0, /* 1185, 0xff68, KEY_Find, Find, search */
0x33, 0xe2, 0x00, 0x00, 0xff, 0x69, 0x00, 0x00, 0x00, 'K','E','Y','_','C','a','n','c','e','l',0, /* 1205, 0xff69, KEY_Cancel, Cancel, stop, abort, exit */
0x4c, 0xec, 0x00, 0x00, 0xff, 0x6a, 0x00, 0x00, 0x00, 'K','E','Y','_','H','e','l','p',0, /* 1223, 0xff6a, KEY_Help, Help */
0x9a, 0x11, 0x00, 0x00, 0xff, 0x6b, 0x00, 0x00, 0x00, 'K','E','Y','_','B','r','e','a','k',0, /* 1242, 0xff6b, KEY_Break */
0xc4, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','M','o','d','e','_','s','w','i','t','c','h',0, /* 1267, 0xff7e, KEY_Mode_switch, Character set switch */
0x5f, 0xd6, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','s','c','r','i','p','t','_','s','w','i','t','c','h',0, /* 1294, 0xff7e, KEY_script_switch, Alias for mode_switch */
0xda, 0x1d, 0x00, 0x00, 0xff, 0x7f, 0x00, 0x00, 0x00, 'K','E','Y','_','N','u','m','_','L','o','c','k',0, /* 1316, 0xff7f, KEY_Num_Lock */
0xcd, 0xbf, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','S','p','a','c','e',0, /* 1338, 0xff80, KEY_KP_Space, Space */
0x33, 0x0c, 0x00, 0x00, 0xff, 0x89, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','T','a','b',0, /* 1358, 0xff89, KEY_KP_Tab */
0xcd, 0x2c, 0x00, 0x00, 0xff, 0x8d, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','E','n','t','e','r',0, /* 1380, 0xff8d, KEY_KP_Enter, Enter */
0x99, 0x09, 0x00, 0x00, 0xff, 0x91, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','F','1',0, /* 1399, 0xff91, KEY_KP_F1, PF1, KP_A, ... */
0x99, 0x0a, 0x00, 0x00, 0xff, 0x92, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','F','2',0, /* 1418, 0xff92, KEY_KP_F2 */
0x99, 0x0b, 0x00, 0x00, 0xff, 0x93, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','F','3',0, /* 1437, 0xff93, KEY_KP_F3 */
0x99, 0x0c, 0x00, 0x00, 0xff, 0x94, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','F','4',0, /* 1456, 0xff94, KEY_KP_F4 */
0x66, 0x6b, 0x00, 0x00, 0xff, 0x95, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','H','o','m','e',0, /* 1477, 0xff95, KEY_KP_Home */
0x66, 0x64, 0x00, 0x00, 0xff, 0x96, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','L','e','f','t',0, /* 1498, 0xff96, KEY_KP_Left */
0x99, 0x66, 0x00, 0x00, 0xff, 0x97, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','U','p',0, /* 1517, 0xff97, KEY_KP_Up */
0xcd, 0xa8, 0x00, 0x00, 0xff, 0x98, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','R','i','g','h','t',0, /* 1539, 0xff98, KEY_KP_Right */
0x66, 0x68, 0x00, 0x00, 0xff, 0x99, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','D','o','w','n',0, /* 1560, 0xff99, KEY_KP_Down */
0xcd, 0xe4, 0x00, 0x00, 0xff, 0x9a, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','P','r','i','o','r',0, /* 1582, 0xff9a, KEY_KP_Prior */
0x35, 0xce, 0x00, 0x00, 0xff, 0x9a, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','P','a','g','e','_','U','p',0, /* 1606, 0xff9a, KEY_KP_Page_Up */
0x66, 0x98, 0x00, 0x00, 0xff, 0x9b, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','N','e','x','t',0, /* 1627, 0xff9b, KEY_KP_Next */
0xd8, 0x08, 0x00, 0x00, 0xff, 0x9b, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','P','a','g','e','_','D','o','w','n',0, /* 1653, 0xff9b, KEY_KP_Page_Down */
0x32, 0xec, 0x00, 0x00, 0xff, 0x9c, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','E','n','d',0, /* 1673, 0xff9c, KEY_KP_End */
0xcc, 0x84, 0x00, 0x00, 0xff, 0x9d, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','B','e','g','i','n',0, /* 1695, 0xff9d, KEY_KP_Begin */
0x9b, 0x44, 0x00, 0x00, 0xff, 0x9e, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','I','n','s','e','r','t',0, /* 1718, 0xff9e, KEY_KP_Insert */
0x99, 0xd1, 0x00, 0x00, 0xff, 0x9f, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','D','e','l','e','t','e',0, /* 1741, 0xff9f, KEY_KP_Delete */
0xcd, 0x3a, 0x00, 0x00, 0xff, 0xbd, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','E','q','u','a','l',0, /* 1763, 0xffbd, KEY_KP_Equal, Equals */
0x71, 0xd9, 0x00, 0x00, 0xff, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','M','u','l','t','i','p','l','y',0, /* 1788, 0xffaa, KEY_KP_Multiply */
0x32, 0xc8, 0x00, 0x00, 0xff, 0xab, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','A','d','d',0, /* 1808, 0xffab, KEY_KP_Add */
0xe0, 0xe8, 0x00, 0x00, 0xff, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','S','e','p','a','r','a','t','o','r',0, /* 1834, 0xffac, KEY_KP_Separator, Separator, often comma */
0x73, 0x8e, 0x00, 0x00, 0xff, 0xad, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','S','u','b','t','r','a','c','t',0, /* 1859, 0xffad, KEY_KP_Subtract */
0x33, 0x7a, 0x00, 0x00, 0xff, 0xae, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','D','e','c','i','m','a','l',0, /* 1883, 0xffae, KEY_KP_Decimal */
0x9a, 0x51, 0x00, 0x00, 0xff, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','D','i','v','i','d','e',0, /* 1906, 0xffaf, KEY_KP_Divide */
0x4c, 0x56, 0x00, 0x00, 0xff, 0xb0, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','0',0, /* 1924, 0xffb0, KEY_KP_0 */
0x4c, 0x57, 0x00, 0x00, 0xff, 0xb1, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','1',0, /* 1942, 0xffb1, KEY_KP_1 */
0x4c, 0x58, 0x00, 0x00, 0xff, 0xb2, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','2',0, /* 1960, 0xffb2, KEY_KP_2 */
0x4c, 0x59, 0x00, 0x00, 0xff, 0xb3, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','3',0, /* 1978, 0xffb3, KEY_KP_3 */
0x4c, 0x5a, 0x00, 0x00, 0xff, 0xb4, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','4',0, /* 1996, 0xffb4, KEY_KP_4 */
0x4c, 0x5b, 0x00, 0x00, 0xff, 0xb5, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','5',0, /* 2014, 0xffb5, KEY_KP_5 */
0x4c, 0x5c, 0x00, 0x00, 0xff, 0xb6, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','6',0, /* 2032, 0xffb6, KEY_KP_6 */
0x4c, 0x5d, 0x00, 0x00, 0xff, 0xb7, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','7',0, /* 2050, 0xffb7, KEY_KP_7 */
0x4c, 0x5e, 0x00, 0x00, 0xff, 0xb8, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','8',0, /* 2068, 0xffb8, KEY_KP_8 */
0x4c, 0x5f, 0x00, 0x00, 0xff, 0xb9, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','9',0, /* 2086, 0xffb9, KEY_KP_9 */
0x12, 0xb1, 0x00, 0x00, 0xff, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1',0, /* 2102, 0xffbe, KEY_F1 */
0x12, 0xb2, 0x00, 0x00, 0xff, 0xbf, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2',0, /* 2118, 0xffbf, KEY_F2 */
0x12, 0xb3, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 'K','E','Y','_','F','3',0, /* 2134, 0xffc0, KEY_F3 */
0x12, 0xb4, 0x00, 0x00, 0xff, 0xc1, 0x00, 0x00, 0x00, 'K','E','Y','_','F','4',0, /* 2150, 0xffc1, KEY_F4 */
0x12, 0xb5, 0x00, 0x00, 0xff, 0xc2, 0x00, 0x00, 0x00, 'K','E','Y','_','F','5',0, /* 2166, 0xffc2, KEY_F5 */
0x12, 0xb6, 0x00, 0x00, 0xff, 0xc3, 0x00, 0x00, 0x00, 'K','E','Y','_','F','6',0, /* 2182, 0xffc3, KEY_F6 */
0x12, 0xb7, 0x00, 0x00, 0xff, 0xc4, 0x00, 0x00, 0x00, 'K','E','Y','_','F','7',0, /* 2198, 0xffc4, KEY_F7 */
0x12, 0xb8, 0x00, 0x00, 0xff, 0xc5, 0x00, 0x00, 0x00, 'K','E','Y','_','F','8',0, /* 2214, 0xffc5, KEY_F8 */
0x12, 0xb9, 0x00, 0x00, 0xff, 0xc6, 0x00, 0x00, 0x00, 'K','E','Y','_','F','9',0, /* 2230, 0xffc6, KEY_F9 */
0x25, 0x92, 0x00, 0x00, 0xff, 0xc7, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','0',0, /* 2247, 0xffc7, KEY_F10 */
0x25, 0x93, 0x00, 0x00, 0xff, 0xc8, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','1',0, /* 2264, 0xffc8, KEY_F11 */
0x12, 0xbd, 0x00, 0x00, 0xff, 0xc8, 0x00, 0x00, 0x00, 'K','E','Y','_','L','1',0, /* 2280, 0xffc8, KEY_L1 */
0x25, 0x94, 0x00, 0x00, 0xff, 0xc9, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','2',0, /* 2297, 0xffc9, KEY_F12 */
0x12, 0xbe, 0x00, 0x00, 0xff, 0xc9, 0x00, 0x00, 0x00, 'K','E','Y','_','L','2',0, /* 2313, 0xffc9, KEY_L2 */
0x25, 0x95, 0x00, 0x00, 0xff, 0xca, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','3',0, /* 2330, 0xffca, KEY_F13 */
0x12, 0xbf, 0x00, 0x00, 0xff, 0xca, 0x00, 0x00, 0x00, 'K','E','Y','_','L','3',0, /* 2346, 0xffca, KEY_L3 */
0x25, 0x96, 0x00, 0x00, 0xff, 0xcb, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','4',0, /* 2363, 0xffcb, KEY_F14 */
0x12, 0xc0, 0x00, 0x00, 0xff, 0xcb, 0x00, 0x00, 0x00, 'K','E','Y','_','L','4',0, /* 2379, 0xffcb, KEY_L4 */
0x25, 0x97, 0x00, 0x00, 0xff, 0xcc, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','5',0, /* 2396, 0xffcc, KEY_F15 */
0x12, 0xc1, 0x00, 0x00, 0xff, 0xcc, 0x00, 0x00, 0x00, 'K','E','Y','_','L','5',0, /* 2412, 0xffcc, KEY_L5 */
0x25, 0x98, 0x00, 0x00, 0xff, 0xcd, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','6',0, /* 2429, 0xffcd, KEY_F16 */
0x12, 0xc2, 0x00, 0x00, 0xff, 0xcd, 0x00, 0x00, 0x00, 'K','E','Y','_','L','6',0, /* 2445, 0xffcd, KEY_L6 */
0x25, 0x99, 0x00, 0x00, 0xff, 0xce, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','7',0, /* 2462, 0xffce, KEY_F17 */
0x12, 0xc3, 0x00, 0x00, 0xff, 0xce, 0x00, 0x00, 0x00, 'K','E','Y','_','L','7',0, /* 2478, 0xffce, KEY_L7 */
0x25, 0x9a, 0x00, 0x00, 0xff, 0xcf, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','8',0, /* 2495, 0xffcf, KEY_F18 */
0x12, 0xc4, 0x00, 0x00, 0xff, 0xcf, 0x00, 0x00, 0x00, 'K','E','Y','_','L','8',0, /* 2511, 0xffcf, KEY_L8 */
0x25, 0x9b, 0x00, 0x00, 0xff, 0xd0, 0x00, 0x00, 0x00, 'K','E','Y','_','F','1','9',0, /* 2528, 0xffd0, KEY_F19 */
0x12, 0xc5, 0x00, 0x00, 0xff, 0xd0, 0x00, 0x00, 0x00, 'K','E','Y','_','L','9',0, /* 2544, 0xffd0, KEY_L9 */
0x25, 0x94, 0x00, 0x00, 0xff, 0xd1, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','0',0, /* 2561, 0xffd1, KEY_F20 */
0x25, 0xaa, 0x00, 0x00, 0xff, 0xd1, 0x00, 0x00, 0x00, 'K','E','Y','_','L','1','0',0, /* 2578, 0xffd1, KEY_L10 */
0x25, 0x95, 0x00, 0x00, 0xff, 0xd2, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','1',0, /* 2595, 0xffd2, KEY_F21 */
0x12, 0xc9, 0x00, 0x00, 0xff, 0xd2, 0x00, 0x00, 0x00, 'K','E','Y','_','R','1',0, /* 2611, 0xffd2, KEY_R1 */
0x25, 0x96, 0x00, 0x00, 0xff, 0xd3, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','2',0, /* 2628, 0xffd3, KEY_F22 */
0x12, 0xca, 0x00, 0x00, 0xff, 0xd3, 0x00, 0x00, 0x00, 'K','E','Y','_','R','2',0, /* 2644, 0xffd3, KEY_R2 */
0x25, 0x97, 0x00, 0x00, 0xff, 0xd4, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','3',0, /* 2661, 0xffd4, KEY_F23 */
0x12, 0xcb, 0x00, 0x00, 0xff, 0xd4, 0x00, 0x00, 0x00, 'K','E','Y','_','R','3',0, /* 2677, 0xffd4, KEY_R3 */
0x25, 0x98, 0x00, 0x00, 0xff, 0xd5, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','4',0, /* 2694, 0xffd5, KEY_F24 */
0x12, 0xcc, 0x00, 0x00, 0xff, 0xd5, 0x00, 0x00, 0x00, 'K','E','Y','_','R','4',0, /* 2710, 0xffd5, KEY_R4 */
0x25, 0x99, 0x00, 0x00, 0xff, 0xd6, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','5',0, /* 2727, 0xffd6, KEY_F25 */
0x12, 0xcd, 0x00, 0x00, 0xff, 0xd6, 0x00, 0x00, 0x00, 'K','E','Y','_','R','5',0, /* 2743, 0xffd6, KEY_R5 */
0x25, 0x9a, 0x00, 0x00, 0xff, 0xd7, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','6',0, /* 2760, 0xffd7, KEY_F26 */
0x12, 0xce, 0x00, 0x00, 0xff, 0xd7, 0x00, 0x00, 0x00, 'K','E','Y','_','R','6',0, /* 2776, 0xffd7, KEY_R6 */
0x25, 0x9b, 0x00, 0x00, 0xff, 0xd8, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','7',0, /* 2793, 0xffd8, KEY_F27 */
0x12, 0xcf, 0x00, 0x00, 0xff, 0xd8, 0x00, 0x00, 0x00, 'K','E','Y','_','R','7',0, /* 2809, 0xffd8, KEY_R7 */
0x25, 0x9c, 0x00, 0x00, 0xff, 0xd9, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','8',0, /* 2826, 0xffd9, KEY_F28 */
0x12, 0xd0, 0x00, 0x00, 0xff, 0xd9, 0x00, 0x00, 0x00, 'K','E','Y','_','R','8',0, /* 2842, 0xffd9, KEY_R8 */
0x25, 0x9d, 0x00, 0x00, 0xff, 0xda, 0x00, 0x00, 0x00, 'K','E','Y','_','F','2','9',0, /* 2859, 0xffda, KEY_F29 */
0x12, 0xd1, 0x00, 0x00, 0xff, 0xda, 0x00, 0x00, 0x00, 'K','E','Y','_','R','9',0, /* 2875, 0xffda, KEY_R9 */
0x25, 0x96, 0x00, 0x00, 0xff, 0xdb, 0x00, 0x00, 0x00, 'K','E','Y','_','F','3','0',0, /* 2892, 0xffdb, KEY_F30 */
0x25, 0xc2, 0x00, 0x00, 0xff, 0xdb, 0x00, 0x00, 0x00, 'K','E','Y','_','R','1','0',0, /* 2909, 0xffdb, KEY_R10 */
0x25, 0x97, 0x00, 0x00, 0xff, 0xdc, 0x00, 0x00, 0x00, 'K','E','Y','_','F','3','1',0, /* 2926, 0xffdc, KEY_F31 */
0x25, 0xc3, 0x00, 0x00, 0xff, 0xdc, 0x00, 0x00, 0x00, 'K','E','Y','_','R','1','1',0, /* 2943, 0xffdc, KEY_R11 */
0x25, 0x98, 0x00, 0x00, 0xff, 0xdd, 0x00, 0x00, 0x00, 'K','E','Y','_','F','3','2',0, /* 2960, 0xffdd, KEY_F32 */
0x25, 0xc4, 0x00, 0x00, 0xff, 0xdd, 0x00, 0x00, 0x00, 'K','E','Y','_','R','1','2',0, /* 2977, 0xffdd, KEY_R12 */
0x25, 0x99, 0x00, 0x00, 0xff, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','F','3','3',0, /* 2994, 0xffde, KEY_F33 */
0x25, 0xc5, 0x00, 0x00, 0xff, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','R','1','3',0, /* 3011, 0xffde, KEY_R13 */
0x25, 0x9a, 0x00, 0x00, 0xff, 0xdf, 0x00, 0x00, 0x00, 'K','E','Y','_','F','3','4',0, /* 3028, 0xffdf, KEY_F34 */
0x25, 0xc6, 0x00, 0x00, 0xff, 0xdf, 0x00, 0x00, 0x00, 'K','E','Y','_','R','1','4',0, /* 3045, 0xffdf, KEY_R14 */
0x25, 0x9b, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 'K','E','Y','_','F','3','5',0, /* 3062, 0xffe0, KEY_F35 */
0x25, 0xc7, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 'K','E','Y','_','R','1','5',0, /* 3079, 0xffe0, KEY_R15 */
0x6c, 0xda, 0x00, 0x00, 0xff, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','S','h','i','f','t','_','L',0, /* 3100, 0xffe1, KEY_Shift_L, Left shift */
0x6c, 0xe0, 0x00, 0x00, 0xff, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','S','h','i','f','t','_','R',0, /* 3121, 0xffe2, KEY_Shift_R, Right shift */
0xab, 0xd2, 0x00, 0x00, 0xff, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','C','o','n','t','r','o','l','_','L',0, /* 3144, 0xffe3, KEY_Control_L, Left control */
0xab, 0xd8, 0x00, 0x00, 0xff, 0xe4, 0x00, 0x00, 0x00, 'K','E','Y','_','C','o','n','t','r','o','l','_','R',0, /* 3167, 0xffe4, KEY_Control_R, Right control */
0xa3, 0x1d, 0x00, 0x00, 0xff, 0xe5, 0x00, 0x00, 0x00, 'K','E','Y','_','C','a','p','s','_','L','o','c','k',0, /* 3190, 0xffe5, KEY_Caps_Lock, Caps lock */
0x69, 0xbd, 0x00, 0x00, 0xff, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','S','h','i','f','t','_','L','o','c','k',0, /* 3214, 0xffe6, KEY_Shift_Lock, Shift lock */
0x35, 0x5e, 0x00, 0x00, 0xff, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','M','e','t','a','_','L',0, /* 3234, 0xffe7, KEY_Meta_L, Left meta */
0x35, 0x64, 0x00, 0x00, 0xff, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','M','e','t','a','_','R',0, /* 3254, 0xffe8, KEY_Meta_R, Right meta */
0x99, 0xea, 0x00, 0x00, 0xff, 0xe9, 0x00, 0x00, 0x00, 'K','E','Y','_','A','l','t','_','L',0, /* 3273, 0xffe9, KEY_Alt_L, Left alt */
0x99, 0xf0, 0x00, 0x00, 0xff, 0xea, 0x00, 0x00, 0x00, 'K','E','Y','_','A','l','t','_','R',0, /* 3292, 0xffea, KEY_Alt_R, Right alt */
0x6e, 0xda, 0x00, 0x00, 0xff, 0xeb, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','p','e','r','_','L',0, /* 3313, 0xffeb, KEY_Super_L, Left super */
0x6e, 0xe0, 0x00, 0x00, 0xff, 0xec, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','p','e','r','_','R',0, /* 3334, 0xffec, KEY_Super_R, Right super */
0x6c, 0x9a, 0x00, 0x00, 0xff, 0xed, 0x00, 0x00, 0x00, 'K','E','Y','_','H','y','p','e','r','_','L',0, /* 3355, 0xffed, KEY_Hyper_L, Left hyper */
0x6c, 0xa0, 0x00, 0x00, 0xff, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','H','y','p','e','r','_','R',0, /* 3376, 0xffee, KEY_Hyper_R, Right hyper */
0xcb, 0x5d, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','o','c','k',0, /* 3398, 0xfe01, KEY_ISO_Lock */
0xae, 0x26, 0x00, 0x00, 0xfe, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','e','v','e','l','2','_','L','a','t','c','h',0, /* 3428, 0xfe02, KEY_ISO_Level2_Latch */
0xae, 0xf4, 0x00, 0x00, 0xfe, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','e','v','e','l','3','_','S','h','i','f','t',0, /* 3458, 0xfe03, KEY_ISO_Level3_Shift */
0xae, 0x66, 0x00, 0x00, 0xfe, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','e','v','e','l','3','_','L','a','t','c','h',0, /* 3488, 0xfe04, KEY_ISO_Level3_Latch */
0xd7, 0x1d, 0x00, 0x00, 0xfe, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','e','v','e','l','3','_','L','o','c','k',0, /* 3517, 0xfe05, KEY_ISO_Level3_Lock */
0xaf, 0x74, 0x00, 0x00, 0xfe, 0x11, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','e','v','e','l','5','_','S','h','i','f','t',0, /* 3547, 0xfe11, KEY_ISO_Level5_Shift */
0xae, 0xe6, 0x00, 0x00, 0xfe, 0x12, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','e','v','e','l','5','_','L','a','t','c','h',0, /* 3577, 0xfe12, KEY_ISO_Level5_Latch */
0xd7, 0x5d, 0x00, 0x00, 0xfe, 0x13, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','e','v','e','l','5','_','L','o','c','k',0, /* 3606, 0xfe13, KEY_ISO_Level5_Lock */
0xe4, 0xb4, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','G','r','o','u','p','_','S','h','i','f','t',0, /* 3635, 0xff7e, KEY_ISO_Group_Shift, Alias for mode_switch */
0xe4, 0x26, 0x00, 0x00, 0xfe, 0x06, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','G','r','o','u','p','_','L','a','t','c','h',0, /* 3664, 0xfe06, KEY_ISO_Group_Latch */
0xf1, 0xfd, 0x00, 0x00, 0xfe, 0x07, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','G','r','o','u','p','_','L','o','c','k',0, /* 3692, 0xfe07, KEY_ISO_Group_Lock */
0xf4, 0xf6, 0x00, 0x00, 0xfe, 0x08, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','N','e','x','t','_','G','r','o','u','p',0, /* 3720, 0xfe08, KEY_ISO_Next_Group */
0xa9, 0xfd, 0x00, 0x00, 0xfe, 0x09, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','N','e','x','t','_','G','r','o','u','p','_','L','o','c','k',0, /* 3753, 0xfe09, KEY_ISO_Next_Group_Lock */
0xfc, 0xf6, 0x00, 0x00, 0xfe, 0x0a, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','P','r','e','v','_','G','r','o','u','p',0, /* 3781, 0xfe0a, KEY_ISO_Prev_Group */
0xa9, 0xfd, 0x00, 0x00, 0xfe, 0x0b, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','P','r','e','v','_','G','r','o','u','p','_','L','o','c','k',0, /* 3814, 0xfe0b, KEY_ISO_Prev_Group_Lock */
0xd1, 0x76, 0x00, 0x00, 0xfe, 0x0c, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','F','i','r','s','t','_','G','r','o','u','p',0, /* 3843, 0xfe0c, KEY_ISO_First_Group */
0x39, 0xfd, 0x00, 0x00, 0xfe, 0x0d, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','F','i','r','s','t','_','G','r','o','u','p','_','L','o','c','k',0, /* 3877, 0xfe0d, KEY_ISO_First_Group_Lock */
0xea, 0x76, 0x00, 0x00, 0xfe, 0x0e, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','a','s','t','_','G','r','o','u','p',0, /* 3905, 0xfe0e, KEY_ISO_Last_Group */
0x59, 0xfd, 0x00, 0x00, 0xfe, 0x0f, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','a','s','t','_','G','r','o','u','p','_','L','o','c','k',0, /* 3938, 0xfe0f, KEY_ISO_Last_Group_Lock */
0xb9, 0xac, 0x00, 0x00, 0xfe, 0x20, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','L','e','f','t','_','T','a','b',0, /* 3964, 0xfe20, KEY_ISO_Left_Tab */
0xe1, 0x3e, 0x00, 0x00, 0xfe, 0x21, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','M','o','v','e','_','L','i','n','e','_','U','p',0, /* 3994, 0xfe21, KEY_ISO_Move_Line_Up */
0x85, 0xc8, 0x00, 0x00, 0xfe, 0x22, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','M','o','v','e','_','L','i','n','e','_','D','o','w','n',0, /* 4026, 0xfe22, KEY_ISO_Move_Line_Down */
0x8e, 0x3e, 0x00, 0x00, 0xfe, 0x23, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','P','a','r','t','i','a','l','_','L','i','n','e','_','U','p',0, /* 4059, 0xfe23, KEY_ISO_Partial_Line_Up */
0x39, 0xc8, 0x00, 0x00, 0xfe, 0x24, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','P','a','r','t','i','a','l','_','L','i','n','e','_','D','o','w','n',0, /* 4094, 0xfe24, KEY_ISO_Partial_Line_Down */
0x83, 0x04, 0x00, 0x00, 0xfe, 0x25, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','P','a','r','t','i','a','l','_','S','p','a','c','e','_','L','e','f','t',0, /* 4130, 0xfe25, KEY_ISO_Partial_Space_Left */
0x06, 0xe8, 0x00, 0x00, 0xfe, 0x26, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','P','a','r','t','i','a','l','_','S','p','a','c','e','_','R','i','g','h','t',0, /* 4167, 0xfe26, KEY_ISO_Partial_Space_Right */
0xe6, 0xa4, 0x00, 0x00, 0xfe, 0x27, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','S','e','t','_','M','a','r','g','i','n','_','L','e','f','t',0, /* 4200, 0xfe27, KEY_ISO_Set_Margin_Left */
0xce, 0x28, 0x00, 0x00, 0xfe, 0x28, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','S','e','t','_','M','a','r','g','i','n','_','R','i','g','h','t',0, /* 4234, 0xfe28, KEY_ISO_Set_Margin_Right */
0x36, 0xa4, 0x00, 0x00, 0xfe, 0x29, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','R','e','l','e','a','s','e','_','M','a','r','g','i','n','_','L','e','f','t',0, /* 4271, 0xfe29, KEY_ISO_Release_Margin_Left */
0x6e, 0x28, 0x00, 0x00, 0xfe, 0x2a, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','R','e','l','e','a','s','e','_','M','a','r','g','i','n','_','R','i','g','h','t',0, /* 4309, 0xfe2a, KEY_ISO_Release_Margin_Right */
0x48, 0x2b, 0x00, 0x00, 0xfe, 0x2b, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','R','e','l','e','a','s','e','_','B','o','t','h','_','M','a','r','g','i','n','s',0, /* 4347, 0xfe2b, KEY_ISO_Release_Both_Margins */
0xae, 0xa4, 0x00, 0x00, 0xfe, 0x2c, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','F','a','s','t','_','C','u','r','s','o','r','_','L','e','f','t',0, /* 4381, 0xfe2c, KEY_ISO_Fast_Cursor_Left */
0x5e, 0x28, 0x00, 0x00, 0xfe, 0x2d, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','F','a','s','t','_','C','u','r','s','o','r','_','R','i','g','h','t',0, /* 4416, 0xfe2d, KEY_ISO_Fast_Cursor_Right */
0xeb, 0x76, 0x00, 0x00, 0xfe, 0x2e, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','F','a','s','t','_','C','u','r','s','o','r','_','U','p',0, /* 4448, 0xfe2e, KEY_ISO_Fast_Cursor_Up */
0xae, 0xa8, 0x00, 0x00, 0xfe, 0x2f, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','F','a','s','t','_','C','u','r','s','o','r','_','D','o','w','n',0, /* 4482, 0xfe2f, KEY_ISO_Fast_Cursor_Down */
0x81, 0x05, 0x00, 0x00, 0xfe, 0x30, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','C','o','n','t','i','n','u','o','u','s','_','U','n','d','e','r','l','i','n','e',0, /* 4520, 0xfe30, KEY_ISO_Continuous_Underline */
0x81, 0x05, 0x00, 0x00, 0xfe, 0x31, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','D','i','s','c','o','n','t','i','n','u','o','u','s','_','U','n','d','e','r','l','i','n','e',0, /* 4561, 0xfe31, KEY_ISO_Discontinuous_Underline */
0x73, 0x25, 0x00, 0x00, 0xfe, 0x32, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','E','m','p','h','a','s','i','z','e',0, /* 4588, 0xfe32, KEY_ISO_Emphasize */
0xe3, 0xde, 0x00, 0x00, 0xfe, 0x33, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','C','e','n','t','e','r','_','O','b','j','e','c','t',0, /* 4619, 0xfe33, KEY_ISO_Center_Object */
0x96, 0xec, 0x00, 0x00, 0xfe, 0x34, 0x00, 0x00, 0x00, 'K','E','Y','_','I','S','O','_','E','n','t','e','r',0, /* 4642, 0xfe34, KEY_ISO_Enter */
0x83, 0x35, 0x00, 0x00, 0xfe, 0x50, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','g','r','a','v','e',0, /* 4666, 0xfe50, KEY_dead_grave */
0x82, 0xa9, 0x00, 0x00, 0xfe, 0x51, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','a','c','u','t','e',0, /* 4690, 0xfe51, KEY_dead_acute */
0x68, 0x52, 0x00, 0x00, 0xfe, 0x52, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','c','i','r','c','u','m','f','l','e','x',0, /* 4719, 0xfe52, KEY_dead_circumflex */
0x83, 0xc5, 0x00, 0x00, 0xfe, 0x53, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','t','i','l','d','e',0, /* 4743, 0xfe53, KEY_dead_tilde */
0x00, 0x71, 0x00, 0x00, 0xfe, 0x53, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','p','e','r','i','s','p','o','m','e','n','i',0, /* 4773, 0xfe53, KEY_dead_perispomeni, alias for dead_tilde */
0x06, 0x9c, 0x00, 0x00, 0xfe, 0x54, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','m','a','c','r','o','n',0, /* 4798, 0xfe54, KEY_dead_macron */
0x82, 0xf5, 0x00, 0x00, 0xfe, 0x55, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','r','e','v','e',0, /* 4822, 0xfe55, KEY_dead_breve */
0x17, 0x4a, 0x00, 0x00, 0xfe, 0x56, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','a','b','o','v','e','d','o','t',0, /* 4849, 0xfe56, KEY_dead_abovedot */
0x30, 0xb9, 0x00, 0x00, 0xfe, 0x57, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','d','i','a','e','r','e','s','i','s',0, /* 4877, 0xfe57, KEY_dead_diaeresis */
0x2f, 0x47, 0x00, 0x00, 0xfe, 0x58, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','a','b','o','v','e','r','i','n','g',0, /* 4905, 0xfe58, KEY_dead_abovering */
0xdf, 0xe9, 0x00, 0x00, 0xfe, 0x59, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','d','o','u','b','l','e','a','c','u','t','e',0, /* 4935, 0xfe59, KEY_dead_doubleacute */
0x82, 0xac, 0x00, 0x00, 0xfe, 0x5a, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','c','a','r','o','n',0, /* 4959, 0xfe5a, KEY_dead_caron */
0x0b, 0x51, 0x00, 0x00, 0xfe, 0x5b, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','c','e','d','i','l','l','a',0, /* 4985, 0xfe5b, KEY_dead_cedilla */
0x07, 0x75, 0x00, 0x00, 0xfe, 0x5c, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','o','g','o','n','e','k',0, /* 5010, 0xfe5c, KEY_dead_ogonek */
0xc1, 0x7d, 0x00, 0x00, 0xfe, 0x5d, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','i','o','t','a',0, /* 5033, 0xfe5d, KEY_dead_iota */
0x36, 0x1c, 0x00, 0x00, 0xfe, 0x5e, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','v','o','i','c','e','d','_','s','o','u','n','d',0, /* 5064, 0xfe5e, KEY_dead_voiced_sound */
0xf6, 0x1c, 0x00, 0x00, 0xfe, 0x5f, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','s','e','m','i','v','o','i','c','e','d','_','s','o','u','n','d',0, /* 5099, 0xfe5f, KEY_dead_semivoiced_sound */
0x18, 0x4a, 0x00, 0x00, 0xfe, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','d','o','t',0, /* 5126, 0xfe60, KEY_dead_belowdot */
0xc1, 0x75, 0x00, 0x00, 0xfe, 0x61, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','h','o','o','k',0, /* 5149, 0xfe61, KEY_dead_hook */
0xc1, 0x7e, 0x00, 0x00, 0xfe, 0x62, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','h','o','r','n',0, /* 5172, 0xfe62, KEY_dead_horn */
0x08, 0xe7, 0x00, 0x00, 0xfe, 0x63, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','s','t','r','o','k','e',0, /* 5197, 0xfe63, KEY_dead_stroke */
0x5e, 0x37, 0x00, 0x00, 0xfe, 0x64, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','a','b','o','v','e','c','o','m','m','a',0, /* 5226, 0xfe64, KEY_dead_abovecomma */
0x83, 0xdd, 0x00, 0x00, 0xfe, 0x64, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','p','s','i','l','i',0, /* 5250, 0xfe64, KEY_dead_psili, alias for dead_abovecomma */
0x67, 0xd7, 0x00, 0x00, 0xfe, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','a','b','o','v','e','r','e','v','e','r','s','e','d','c','o','m','m','a',0, /* 5287, 0xfe65, KEY_dead_abovereversedcomma */
0x82, 0xa7, 0x00, 0x00, 0xfe, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','d','a','s','i','a',0, /* 5311, 0xfe65, KEY_dead_dasia, alias for dead_abovereversedcomma */
0xe0, 0x75, 0x00, 0x00, 0xfe, 0x66, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','d','o','u','b','l','e','g','r','a','v','e',0, /* 5341, 0xfe66, KEY_dead_doublegrave */
0x31, 0x47, 0x00, 0x00, 0xfe, 0x67, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','r','i','n','g',0, /* 5369, 0xfe67, KEY_dead_belowring */
0xc5, 0x1c, 0x00, 0x00, 0xfe, 0x68, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','m','a','c','r','o','n',0, /* 5399, 0xfe68, KEY_dead_belowmacron */
0x50, 0x52, 0x00, 0x00, 0xfe, 0x69, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','c','i','r','c','u','m','f','l','e','x',0, /* 5433, 0xfe69, KEY_dead_belowcircumflex */
0x63, 0x05, 0x00, 0x00, 0xfe, 0x6a, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','t','i','l','d','e',0, /* 5462, 0xfe6a, KEY_dead_belowtilde */
0x62, 0x35, 0x00, 0x00, 0xfe, 0x6b, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','b','r','e','v','e',0, /* 5491, 0xfe6b, KEY_dead_belowbreve */
0x24, 0xb9, 0x00, 0x00, 0xfe, 0x6c, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','d','i','a','e','r','e','s','i','s',0, /* 5524, 0xfe6c, KEY_dead_belowdiaeresis */
0xe0, 0x55, 0x00, 0x00, 0xfe, 0x6d, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','i','n','v','e','r','t','e','d','b','r','e','v','e',0, /* 5556, 0xfe6d, KEY_dead_invertedbreve */
0x62, 0x37, 0x00, 0x00, 0xfe, 0x6e, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','c','o','m','m','a',0, /* 5585, 0xfe6e, KEY_dead_belowcomma */
0x1d, 0x3f, 0x00, 0x00, 0xfe, 0x6f, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','c','u','r','r','e','n','c','y',0, /* 5612, 0xfe6f, KEY_dead_currency */
0x37, 0xc7, 0x00, 0x00, 0xfe, 0x80, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','a',0, /* 5632, 0xfe80, KEY_dead_a */
0x37, 0xa7, 0x00, 0x00, 0xfe, 0x81, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','A',0, /* 5652, 0xfe81, KEY_dead_A */
0x37, 0xcb, 0x00, 0x00, 0xfe, 0x82, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','e',0, /* 5672, 0xfe82, KEY_dead_e */
0x37, 0xab, 0x00, 0x00, 0xfe, 0x83, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','E',0, /* 5692, 0xfe83, KEY_dead_E */
0x37, 0xcf, 0x00, 0x00, 0xfe, 0x84, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','i',0, /* 5712, 0xfe84, KEY_dead_i */
0x37, 0xaf, 0x00, 0x00, 0xfe, 0x85, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','I',0, /* 5732, 0xfe85, KEY_dead_I */
0x37, 0xd5, 0x00, 0x00, 0xfe, 0x86, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','o',0, /* 5752, 0xfe86, KEY_dead_o */
0x37, 0xb5, 0x00, 0x00, 0xfe, 0x87, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','O',0, /* 5772, 0xfe87, KEY_dead_O */
0x37, 0xdb, 0x00, 0x00, 0xfe, 0x88, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','u',0, /* 5792, 0xfe88, KEY_dead_u */
0x37, 0xbb, 0x00, 0x00, 0xfe, 0x89, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','U',0, /* 5812, 0xfe89, KEY_dead_U */
0x09, 0x17, 0x00, 0x00, 0xfe, 0x8a, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','s','m','a','l','l','_','s','c','h','w','a',0, /* 5842, 0xfe8a, KEY_dead_small_schwa */
0x02, 0x97, 0x00, 0x00, 0xfe, 0x8b, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','c','a','p','i','t','a','l','_','s','c','h','w','a',0, /* 5874, 0xfe8b, KEY_dead_capital_schwa */
0x83, 0x29, 0x00, 0x00, 0xfe, 0x8c, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','g','r','e','e','k',0, /* 5898, 0xfe8c, KEY_dead_greek */
0x1f, 0xac, 0x00, 0x00, 0xfe, 0xd0, 0x00, 0x00, 0x00, 'K','E','Y','_','F','i','r','s','t','_','V','i','r','t','u','a','l','_','S','c','r','e','e','n',0, /* 5932, 0xfed0, KEY_First_Virtual_Screen */
0x1f, 0xac, 0x00, 0x00, 0xfe, 0xd1, 0x00, 0x00, 0x00, 'K','E','Y','_','P','r','e','v','_','V','i','r','t','u','a','l','_','S','c','r','e','e','n',0, /* 5965, 0xfed1, KEY_Prev_Virtual_Screen */
0x1f, 0xac, 0x00, 0x00, 0xfe, 0xd2, 0x00, 0x00, 0x00, 'K','E','Y','_','N','e','x','t','_','V','i','r','t','u','a','l','_','S','c','r','e','e','n',0, /* 5998, 0xfed2, KEY_Next_Virtual_Screen */
0x1f, 0xac, 0x00, 0x00, 0xfe, 0xd4, 0x00, 0x00, 0x00, 'K','E','Y','_','L','a','s','t','_','V','i','r','t','u','a','l','_','S','c','r','e','e','n',0, /* 6031, 0xfed4, KEY_Last_Virtual_Screen */
0xe7, 0x94, 0x00, 0x00, 0xfe, 0xd5, 0x00, 0x00, 0x00, 'K','E','Y','_','T','e','r','m','i','n','a','t','e','_','S','e','r','v','e','r',0, /* 6061, 0xfed5, KEY_Terminate_Server */
0xee, 0x0d, 0x00, 0x00, 0xfe, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','A','c','c','e','s','s','X','_','E','n','a','b','l','e',0, /* 6089, 0xfe70, KEY_AccessX_Enable */
0x1f, 0x8d, 0x00, 0x00, 0xfe, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','A','c','c','e','s','s','X','_','F','e','e','d','b','a','c','k','_','E','n','a','b','l','e',0, /* 6126, 0xfe71, KEY_AccessX_Feedback_Enable */
0xa5, 0x8d, 0x00, 0x00, 0xfe, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','R','e','p','e','a','t','K','e','y','s','_','E','n','a','b','l','e',0, /* 6157, 0xfe72, KEY_RepeatKeys_Enable */
0x3d, 0x8d, 0x00, 0x00, 0xfe, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','S','l','o','w','K','e','y','s','_','E','n','a','b','l','e',0, /* 6186, 0xfe73, KEY_SlowKeys_Enable */
0xad, 0x8d, 0x00, 0x00, 0xfe, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','B','o','u','n','c','e','K','e','y','s','_','E','n','a','b','l','e',0, /* 6217, 0xfe74, KEY_BounceKeys_Enable */
0xed, 0x8d, 0x00, 0x00, 0xfe, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','S','t','i','c','k','y','K','e','y','s','_','E','n','a','b','l','e',0, /* 6248, 0xfe75, KEY_StickyKeys_Enable */
0x0d, 0x8d, 0x00, 0x00, 0xfe, 0x76, 0x00, 0x00, 0x00, 'K','E','Y','_','M','o','u','s','e','K','e','y','s','_','E','n','a','b','l','e',0, /* 6278, 0xfe76, KEY_MouseKeys_Enable */
0x32, 0x0d, 0x00, 0x00, 0xfe, 0x77, 0x00, 0x00, 0x00, 'K','E','Y','_','M','o','u','s','e','K','e','y','s','_','A','c','c','e','l','_','E','n','a','b','l','e',0, /* 6314, 0xfe77, KEY_MouseKeys_Accel_Enable */
0x10, 0x8d, 0x00, 0x00, 0xfe, 0x78, 0x00, 0x00, 0x00, 'K','E','Y','_','O','v','e','r','l','a','y','1','_','E','n','a','b','l','e',0, /* 6343, 0xfe78, KEY_Overlay1_Enable */
0x11, 0x0d, 0x00, 0x00, 0xfe, 0x79, 0x00, 0x00, 0x00, 'K','E','Y','_','O','v','e','r','l','a','y','2','_','E','n','a','b','l','e',0, /* 6372, 0xfe79, KEY_Overlay2_Enable */
0x09, 0x0d, 0x00, 0x00, 0xfe, 0x7a, 0x00, 0x00, 0x00, 'K','E','Y','_','A','u','d','i','b','l','e','B','e','l','l','_','E','n','a','b','l','e',0, /* 6404, 0xfe7a, KEY_AudibleBell_Enable */
0xb8, 0xa4, 0x00, 0x00, 0xfe, 0xe0, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','L','e','f','t',0, /* 6430, 0xfee0, KEY_Pointer_Left */
0x72, 0x28, 0x00, 0x00, 0xfe, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','R','i','g','h','t',0, /* 6457, 0xfee1, KEY_Pointer_Right */
0x6d, 0xf6, 0x00, 0x00, 0xfe, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','U','p',0, /* 6481, 0xfee2, KEY_Pointer_Up */
0xb8, 0xa8, 0x00, 0x00, 0xfe, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','o','w','n',0, /* 6507, 0xfee3, KEY_Pointer_Down */
0xe4, 0x94, 0x00, 0x00, 0xfe, 0xe4, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','U','p','L','e','f','t',0, /* 6535, 0xfee4, KEY_Pointer_UpLeft */
0xca, 0x08, 0x00, 0x00, 0xfe, 0xe5, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','U','p','R','i','g','h','t',0, /* 6564, 0xfee5, KEY_Pointer_UpRight */
0x8f, 0xb4, 0x00, 0x00, 0xfe, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','o','w','n','L','e','f','t',0, /* 6594, 0xfee6, KEY_Pointer_DownLeft */
0x20, 0x48, 0x00, 0x00, 0xfe, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','o','w','n','R','i','g','h','t',0, /* 6625, 0xfee7, KEY_Pointer_DownRight */
0x8c, 0x74, 0x00, 0x00, 0xfe, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','_','D','f','l','t',0, /* 6658, 0xfee8, KEY_Pointer_Button_Dflt */
0xc8, 0x49, 0x00, 0x00, 0xfe, 0xe9, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','1',0, /* 6687, 0xfee9, KEY_Pointer_Button1 */
0xc8, 0x4a, 0x00, 0x00, 0xfe, 0xea, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','2',0, /* 6716, 0xfeea, KEY_Pointer_Button2 */
0xc8, 0x4b, 0x00, 0x00, 0xfe, 0xeb, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','3',0, /* 6745, 0xfeeb, KEY_Pointer_Button3 */
0xc8, 0x4c, 0x00, 0x00, 0xfe, 0xec, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','4',0, /* 6774, 0xfeec, KEY_Pointer_Button4 */
0xc8, 0x4d, 0x00, 0x00, 0xfe, 0xed, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','5',0, /* 6803, 0xfeed, KEY_Pointer_Button5 */
0x37, 0x94, 0x00, 0x00, 0xfe, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','_','D','f','l','t',0, /* 6838, 0xfeee, KEY_Pointer_DblClick_Dflt */
0x12, 0xfb, 0x00, 0x00, 0xfe, 0xef, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','1',0, /* 6869, 0xfeef, KEY_Pointer_DblClick1 */
0x12, 0xfc, 0x00, 0x00, 0xfe, 0xf0, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','2',0, /* 6900, 0xfef0, KEY_Pointer_DblClick2 */
0x12, 0xfd, 0x00, 0x00, 0xfe, 0xf1, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','3',0, /* 6931, 0xfef1, KEY_Pointer_DblClick3 */
0x12, 0xfe, 0x00, 0x00, 0xfe, 0xf2, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','4',0, /* 6962, 0xfef2, KEY_Pointer_DblClick4 */
0x12, 0xff, 0x00, 0x00, 0xfe, 0xf3, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','5',0, /* 6993, 0xfef3, KEY_Pointer_DblClick5 */
0x1b, 0x14, 0x00, 0x00, 0xfe, 0xf4, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','_','D','f','l','t',0, /* 7024, 0xfef4, KEY_Pointer_Drag_Dflt */
0x71, 0x33, 0x00, 0x00, 0xfe, 0xf5, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','1',0, /* 7051, 0xfef5, KEY_Pointer_Drag1 */
0x71, 0x34, 0x00, 0x00, 0xfe, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','2',0, /* 7078, 0xfef6, KEY_Pointer_Drag2 */
0x71, 0x35, 0x00, 0x00, 0xfe, 0xf7, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','3',0, /* 7105, 0xfef7, KEY_Pointer_Drag3 */
0x71, 0x36, 0x00, 0x00, 0xfe, 0xf8, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','4',0, /* 7132, 0xfef8, KEY_Pointer_Drag4 */
0x71, 0x37, 0x00, 0x00, 0xfe, 0xfd, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','5',0, /* 7159, 0xfefd, KEY_Pointer_Drag5 */
0x36, 0x21, 0x00, 0x00, 0xfe, 0xf9, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','E','n','a','b','l','e','K','e','y','s',0, /* 7191, 0xfef9, KEY_Pointer_EnableKeys */
0x25, 0xf1, 0x00, 0x00, 0xfe, 0xfa, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','A','c','c','e','l','e','r','a','t','e',0, /* 7223, 0xfefa, KEY_Pointer_Accelerate */
0x65, 0x48, 0x00, 0x00, 0xfe, 0xfb, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','f','l','t','B','t','n','N','e','x','t',0, /* 7256, 0xfefb, KEY_Pointer_DfltBtnNext */
0x65, 0x68, 0x00, 0x00, 0xfe, 0xfc, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','f','l','t','B','t','n','P','r','e','v',0, /* 7289, 0xfefc, KEY_Pointer_DfltBtnPrev */
0x13, 0x22, 0x00, 0x00, 0xfe, 0xa0, 0x00, 0x00, 0x00, 'K','E','Y','_','c','h',0, /* 7305, 0xfea0, KEY_ch */
0x12, 0xe2, 0x00, 0x00, 0xfe, 0xa1, 0x00, 0x00, 0x00, 'K','E','Y','_','C','h',0, /* 7321, 0xfea1, KEY_Ch */
0x12, 0xc2, 0x00, 0x00, 0xfe, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','C','H',0, /* 7337, 0xfea2, KEY_CH */
0x26, 0x9a, 0x00, 0x00, 0xfe, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','c','_','h',0, /* 7354, 0xfea3, KEY_c_h */
0x26, 0x1a, 0x00, 0x00, 0xfe, 0xa4, 0x00, 0x00, 0x00, 'K','E','Y','_','C','_','h',0, /* 7371, 0xfea4, KEY_C_h */
0x25, 0xfa, 0x00, 0x00, 0xfe, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','C','_','H',0, /* 7388, 0xfea5, KEY_C_H */
0xaa, 0x79, 0x00, 0x00, 0xfd, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','D','u','p','l','i','c','a','t','e',0, /* 7416, 0xfd01, KEY_3270_Duplicate */
0xa2, 0xbb, 0x00, 0x00, 0xfd, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','F','i','e','l','d','M','a','r','k',0, /* 7444, 0xfd02, KEY_3270_FieldMark */
0x95, 0x82, 0x00, 0x00, 0xfd, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','R','i','g','h','t','2',0, /* 7469, 0xfd03, KEY_3270_Right2 */
0xc9, 0xfa, 0x00, 0x00, 0xfd, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','L','e','f','t','2',0, /* 7493, 0xfd04, KEY_3270_Left2 */
0x26, 0x1c, 0x00, 0x00, 0xfd, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','B','a','c','k','T','a','b',0, /* 7519, 0xfd05, KEY_3270_BackTab */
0x52, 0x70, 0x00, 0x00, 0xfd, 0x06, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','E','r','a','s','e','E','O','F',0, /* 7546, 0xfd06, KEY_3270_EraseEOF */
0x4c, 0xfe, 0x00, 0x00, 0xfd, 0x07, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','E','r','a','s','e','I','n','p','u','t',0, /* 7575, 0xfd07, KEY_3270_EraseInput */
0xca, 0xb2, 0x00, 0x00, 0xfd, 0x08, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','R','e','s','e','t',0, /* 7599, 0xfd08, KEY_3270_Reset */
0x65, 0x52, 0x00, 0x00, 0xfd, 0x09, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','Q','u','i','t',0, /* 7622, 0xfd09, KEY_3270_Quit */
0xb1, 0xcb, 0x00, 0x00, 0xfd, 0x0a, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','A','1',0, /* 7644, 0xfd0a, KEY_3270_PA1 */
0xb1, 0xcc, 0x00, 0x00, 0xfd, 0x0b, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','A','2',0, /* 7666, 0xfd0b, KEY_3270_PA2 */
0xb1, 0xcd, 0x00, 0x00, 0xfd, 0x0c, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','A','3',0, /* 7688, 0xfd0c, KEY_3270_PA3 */
0x65, 0x3e, 0x00, 0x00, 0xfd, 0x0d, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','T','e','s','t',0, /* 7711, 0xfd0d, KEY_3270_Test */
0x64, 0xde, 0x00, 0x00, 0xfd, 0x0e, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','A','t','t','n',0, /* 7734, 0xfd0e, KEY_3270_Attn */
0xad, 0xeb, 0x00, 0x00, 0xfd, 0x0f, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','C','u','r','s','o','r','B','l','i','n','k',0, /* 7764, 0xfd0f, KEY_3270_CursorBlink */
0xa0, 0x5c, 0x00, 0x00, 0xfd, 0x10, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','A','l','t','C','u','r','s','o','r',0, /* 7792, 0xfd10, KEY_3270_AltCursor */
0x53, 0x45, 0x00, 0x00, 0xfd, 0x11, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','K','e','y','C','l','i','c','k',0, /* 7819, 0xfd11, KEY_3270_KeyClick */
0x65, 0x1e, 0x00, 0x00, 0xfd, 0x12, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','J','u','m','p',0, /* 7842, 0xfd12, KEY_3270_Jump */
0xc9, 0xf4, 0x00, 0x00, 0xfd, 0x13, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','I','d','e','n','t',0, /* 7866, 0xfd13, KEY_3270_Ident */
0x65, 0x51, 0x00, 0x00, 0xfd, 0x14, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','R','u','l','e',0, /* 7889, 0xfd14, KEY_3270_Rule */
0x64, 0xdd, 0x00, 0x00, 0xfd, 0x15, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','C','o','p','y',0, /* 7912, 0xfd15, KEY_3270_Copy */
0x65, 0x1b, 0x00, 0x00, 0xfd, 0x16, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','l','a','y',0, /* 7935, 0xfd16, KEY_3270_Play */
0xca, 0xe2, 0x00, 0x00, 0xfd, 0x17, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','S','e','t','u','p',0, /* 7959, 0xfd17, KEY_3270_Setup */
0x95, 0x6c, 0x00, 0x00, 0xfd, 0x18, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','R','e','c','o','r','d',0, /* 7984, 0xfd18, KEY_3270_Record */
0xfb, 0xac, 0x00, 0x00, 0xfd, 0x19, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','C','h','a','n','g','e','S','c','r','e','e','n',0, /* 8015, 0xfd19, KEY_3270_ChangeScreen */
0x42, 0xcc, 0x00, 0x00, 0xfd, 0x1a, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','D','e','l','e','t','e','W','o','r','d',0, /* 8044, 0xfd1a, KEY_3270_DeleteWord */
0x52, 0x5e, 0x00, 0x00, 0xfd, 0x1b, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','E','x','S','e','l','e','c','t',0, /* 8071, 0xfd1b, KEY_3270_ExSelect */
0x5d, 0xde, 0x00, 0x00, 0xfd, 0x1c, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','C','u','r','s','o','r','S','e','l','e','c','t',0, /* 8102, 0xfd1c, KEY_3270_CursorSelect */
0xcf, 0xec, 0x00, 0x00, 0xfd, 0x1d, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','r','i','n','t','S','c','r','e','e','n',0, /* 8132, 0xfd1d, KEY_3270_PrintScreen */
0xca, 0x2c, 0x00, 0x00, 0xfd, 0x1e, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','E','n','t','e','r',0, /* 8156, 0xfd1e, KEY_3270_Enter */
0x9c, 0xff, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 'K','E','Y','_','s','p','a','c','e',0, /* 8175, 0x20, U+0020, KEY_space, SPACE */
0x39, 0x57, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x21, 'K','E','Y','_','e','x','c','l','a','m',0, /* 8195, 0x21, U+0021, KEY_exclam, EXCLAMATION MARK */
0xed, 0xc8, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x22, 'K','E','Y','_','q','u','o','t','e','d','b','l',0, /* 8217, 0x22, U+0022, KEY_quotedbl, QUOTATION MARK */
0xae, 0x38, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x23, 'K','E','Y','_','n','u','m','b','e','r','s','i','g','n',0, /* 8241, 0x23, U+0023, KEY_numbersign, NUMBER SIGN */
0x38, 0xf4, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 'K','E','Y','_','d','o','l','l','a','r',0, /* 8261, 0x24, U+0024, KEY_dollar, DOLLAR SIGN */
0x74, 0x3c, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x25, 'K','E','Y','_','p','e','r','c','e','n','t',0, /* 8282, 0x25, U+0025, KEY_percent, PERCENT SIGN */
0xc7, 0x9c, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x26, 'K','E','Y','_','a','m','p','e','r','s','a','n','d',0, /* 8305, 0x26, U+0026, KEY_ampersand, AMPERSAND */
0x96, 0x4d, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x27, 'K','E','Y','_','a','p','o','s','t','r','o','p','h','e',0, /* 8329, 0x27, U+0027, KEY_apostrophe, APOSTROPHE */
0xb9, 0x68, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 'K','E','Y','_','q','u','o','t','e','r','i','g','h','t',0, /* 8353, 0x27, KEY_quoteright, deprecated */
0xd0, 0xb4, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x28, 'K','E','Y','_','p','a','r','e','n','l','e','f','t',0, /* 8376, 0x28, U+0028, KEY_parenleft, LEFT PARENTHESIS */
0xa2, 0x48, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x29, 'K','E','Y','_','p','a','r','e','n','r','i','g','h','t',0, /* 8400, 0x29, U+0029, KEY_parenright, RIGHT PARENTHESIS */
0xe5, 0x95, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x2a, 'K','E','Y','_','a','s','t','e','r','i','s','k',0, /* 8422, 0x2a, U+002a, KEY_asterisk, ASTERISK */
0x4e, 0x5d, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x2b, 'K','E','Y','_','p','l','u','s',0, /* 8440, 0x2b, U+002b, KEY_plus, PLUS SIGN */
0x9c, 0x37, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c, 'K','E','Y','_','c','o','m','m','a',0, /* 8459, 0x2c, U+002c, KEY_comma, COMMA */
0x9c, 0xcd, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x2d, 'K','E','Y','_','m','i','n','u','s',0, /* 8478, 0x2d, U+002d, KEY_minus, HYPHEN-MINUS */
0x3a, 0x06, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x2e, 'K','E','Y','_','p','e','r','i','o','d',0, /* 8498, 0x2e, U+002e, KEY_period, FULL STOP */
0x9d, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x2f, 'K','E','Y','_','s','l','a','s','h',0, /* 8517, 0x2f, U+002f, KEY_slash, SOLIDUS */
0x09, 0x2a, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 'K','E','Y','_','0',0, /* 8532, 0x30, U+0030, KEY_0, DIGIT ZERO */
0x09, 0x2b, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x31, 'K','E','Y','_','1',0, /* 8547, 0x31, U+0031, KEY_1, DIGIT ONE */
0x09, 0x2c, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x32, 'K','E','Y','_','2',0, /* 8562, 0x32, U+0032, KEY_2, DIGIT TWO */
0x09, 0x2d, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x33, 'K','E','Y','_','3',0, /* 8577, 0x33, U+0033, KEY_3, DIGIT THREE */
0x09, 0x2e, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x34, 'K','E','Y','_','4',0, /* 8592, 0x34, U+0034, KEY_4, DIGIT FOUR */
0x09, 0x2f, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x35, 'K','E','Y','_','5',0, /* 8607, 0x35, U+0035, KEY_5, DIGIT FIVE */
0x09, 0x30, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x36, 'K','E','Y','_','6',0, /* 8622, 0x36, U+0036, KEY_6, DIGIT SIX */
0x09, 0x31, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x37, 'K','E','Y','_','7',0, /* 8637, 0x37, U+0037, KEY_7, DIGIT SEVEN */
0x09, 0x32, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 'K','E','Y','_','8',0, /* 8652, 0x38, U+0038, KEY_8, DIGIT EIGHT */
0x09, 0x33, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x39, 'K','E','Y','_','9',0, /* 8667, 0x39, U+0039, KEY_9, DIGIT NINE */
0x9c, 0x44, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x3a, 'K','E','Y','_','c','o','l','o','n',0, /* 8686, 0x3a, U+003a, KEY_colon, COLON */
0xd4, 0x84, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x3b, 'K','E','Y','_','s','e','m','i','c','o','l','o','n',0, /* 8709, 0x3b, U+003b, KEY_semicolon, SEMICOLON */
0x4e, 0x1d, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 'K','E','Y','_','l','e','s','s',0, /* 8727, 0x3c, U+003c, KEY_less, LESS-THAN SIGN */
0x9c, 0x7a, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x3d, 'K','E','Y','_','e','q','u','a','l',0, /* 8746, 0x3d, U+003d, KEY_equal, EQUALS SIGN */
0x72, 0xe4, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x3e, 'K','E','Y','_','g','r','e','a','t','e','r',0, /* 8767, 0x3e, U+003e, KEY_greater, GREATER-THAN SIGN */
0xed, 0x20, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 'K','E','Y','_','q','u','e','s','t','i','o','n',0, /* 8789, 0x3f, U+003f, KEY_question, QUESTION MARK */
0x13, 0x2a, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x40, 'K','E','Y','_','a','t',0, /* 8805, 0x40, U+0040, KEY_at, COMMERCIAL AT */
0x09, 0x3b, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x41, 'K','E','Y','_','A',0, /* 8820, 0x41, U+0041, KEY_A, LATIN CAPITAL LETTER A */
0x09, 0x3c, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x42, 'K','E','Y','_','B',0, /* 8835, 0x42, U+0042, KEY_B, LATIN CAPITAL LETTER B */
0x09, 0x3d, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x43, 'K','E','Y','_','C',0, /* 8850, 0x43, U+0043, KEY_C, LATIN CAPITAL LETTER C */
0x09, 0x3e, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x44, 'K','E','Y','_','D',0, /* 8865, 0x44, U+0044, KEY_D, LATIN CAPITAL LETTER D */
0x09, 0x3f, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x45, 'K','E','Y','_','E',0, /* 8880, 0x45, U+0045, KEY_E, LATIN CAPITAL LETTER E */
0x09, 0x40, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x46, 'K','E','Y','_','F',0, /* 8895, 0x46, U+0046, KEY_F, LATIN CAPITAL LETTER F */
0x09, 0x41, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x47, 'K','E','Y','_','G',0, /* 8910, 0x47, U+0047, KEY_G, LATIN CAPITAL LETTER G */
0x09, 0x42, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x48, 'K','E','Y','_','H',0, /* 8925, 0x48, U+0048, KEY_H, LATIN CAPITAL LETTER H */
0x09, 0x43, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x49, 'K','E','Y','_','I',0, /* 8940, 0x49, U+0049, KEY_I, LATIN CAPITAL LETTER I */
0x09, 0x44, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x4a, 'K','E','Y','_','J',0, /* 8955, 0x4a, U+004a, KEY_J, LATIN CAPITAL LETTER J */
0x09, 0x45, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x4b, 'K','E','Y','_','K',0, /* 8970, 0x4b, U+004b, KEY_K, LATIN CAPITAL LETTER K */
0x09, 0x46, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x4c, 'K','E','Y','_','L',0, /* 8985, 0x4c, U+004c, KEY_L, LATIN CAPITAL LETTER L */
0x09, 0x47, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x4d, 'K','E','Y','_','M',0, /* 9000, 0x4d, U+004d, KEY_M, LATIN CAPITAL LETTER M */
0x09, 0x48, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x4e, 'K','E','Y','_','N',0, /* 9015, 0x4e, U+004e, KEY_N, LATIN CAPITAL LETTER N */
0x09, 0x49, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x4f, 'K','E','Y','_','O',0, /* 9030, 0x4f, U+004f, KEY_O, LATIN CAPITAL LETTER O */
0x09, 0x4a, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x50, 'K','E','Y','_','P',0, /* 9045, 0x50, U+0050, KEY_P, LATIN CAPITAL LETTER P */
0x09, 0x4b, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x51, 'K','E','Y','_','Q',0, /* 9060, 0x51, U+0051, KEY_Q, LATIN CAPITAL LETTER Q */
0x09, 0x4c, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x52, 'K','E','Y','_','R',0, /* 9075, 0x52, U+0052, KEY_R, LATIN CAPITAL LETTER R */
0x09, 0x4d, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x53, 'K','E','Y','_','S',0, /* 9090, 0x53, U+0053, KEY_S, LATIN CAPITAL LETTER S */
0x09, 0x4e, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x54, 'K','E','Y','_','T',0, /* 9105, 0x54, U+0054, KEY_T, LATIN CAPITAL LETTER T */
0x09, 0x4f, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x55, 'K','E','Y','_','U',0, /* 9120, 0x55, U+0055, KEY_U, LATIN CAPITAL LETTER U */
0x09, 0x50, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x56, 'K','E','Y','_','V',0, /* 9135, 0x56, U+0056, KEY_V, LATIN CAPITAL LETTER V */
0x09, 0x51, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x57, 'K','E','Y','_','W',0, /* 9150, 0x57, U+0057, KEY_W, LATIN CAPITAL LETTER W */
0x09, 0x52, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 'K','E','Y','_','X',0, /* 9165, 0x58, U+0058, KEY_X, LATIN CAPITAL LETTER X */
0x09, 0x53, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x59, 'K','E','Y','_','Y',0, /* 9180, 0x59, U+0059, KEY_Y, LATIN CAPITAL LETTER Y */
0x09, 0x54, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x5a, 'K','E','Y','_','Z',0, /* 9195, 0x5a, U+005a, KEY_Z, LATIN CAPITAL LETTER Z */
0x1b, 0x54, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x5b, 'K','E','Y','_','b','r','a','c','k','e','t','l','e','f','t',0, /* 9220, 0x5b, U+005b, KEY_bracketleft, LEFT SQUARE BRACKET */
0xc0, 0x02, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x5c, 'K','E','Y','_','b','a','c','k','s','l','a','s','h',0, /* 9243, 0x5c, U+005c, KEY_backslash, REVERSE SOLIDUS */
0x37, 0x88, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x5d, 'K','E','Y','_','b','r','a','c','k','e','t','r','i','g','h','t',0, /* 9269, 0x5d, U+005d, KEY_bracketright, RIGHT SQUARE BRACKET */
0x1d, 0x23, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x5e, 'K','E','Y','_','a','s','c','i','i','c','i','r','c','u','m',0, /* 9294, 0x5e, U+005e, KEY_asciicircum, CIRCUMFLEX ACCENT */
0xb2, 0xcd, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x5f, 'K','E','Y','_','u','n','d','e','r','s','c','o','r','e',0, /* 9318, 0x5f, U+005f, KEY_underscore, LOW LINE */
0x9c, 0x75, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 'K','E','Y','_','g','r','a','v','e',0, /* 9337, 0x60, U+0060, KEY_grave, GRAVE ACCENT */
0xdc, 0x44, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','q','u','o','t','e','l','e','f','t',0, /* 9360, 0x60, KEY_quoteleft, deprecated */
0x09, 0x5b, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x61, 'K','E','Y','_','a',0, /* 9375, 0x61, U+0061, KEY_a, LATIN SMALL LETTER A */
0x09, 0x5c, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x62, 'K','E','Y','_','b',0, /* 9390, 0x62, U+0062, KEY_b, LATIN SMALL LETTER B */
0x09, 0x5d, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x63, 'K','E','Y','_','c',0, /* 9405, 0x63, U+0063, KEY_c, LATIN SMALL LETTER C */
0x09, 0x5e, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x64, 'K','E','Y','_','d',0, /* 9420, 0x64, U+0064, KEY_d, LATIN SMALL LETTER D */
0x09, 0x5f, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x65, 'K','E','Y','_','e',0, /* 9435, 0x65, U+0065, KEY_e, LATIN SMALL LETTER E */
0x09, 0x60, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x66, 'K','E','Y','_','f',0, /* 9450, 0x66, U+0066, KEY_f, LATIN SMALL LETTER F */
0x09, 0x61, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x67, 'K','E','Y','_','g',0, /* 9465, 0x67, U+0067, KEY_g, LATIN SMALL LETTER G */
0x09, 0x62, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x68, 'K','E','Y','_','h',0, /* 9480, 0x68, U+0068, KEY_h, LATIN SMALL LETTER H */
0x09, 0x63, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x69, 'K','E','Y','_','i',0, /* 9495, 0x69, U+0069, KEY_i, LATIN SMALL LETTER I */
0x09, 0x64, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x6a, 'K','E','Y','_','j',0, /* 9510, 0x6a, U+006a, KEY_j, LATIN SMALL LETTER J */
0x09, 0x65, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x6b, 'K','E','Y','_','k',0, /* 9525, 0x6b, U+006b, KEY_k, LATIN SMALL LETTER K */
0x09, 0x66, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x6c, 'K','E','Y','_','l',0, /* 9540, 0x6c, U+006c, KEY_l, LATIN SMALL LETTER L */
0x09, 0x67, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x6d, 'K','E','Y','_','m',0, /* 9555, 0x6d, U+006d, KEY_m, LATIN SMALL LETTER M */
0x09, 0x68, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x6e, 'K','E','Y','_','n',0, /* 9570, 0x6e, U+006e, KEY_n, LATIN SMALL LETTER N */
0x09, 0x69, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x6f, 'K','E','Y','_','o',0, /* 9585, 0x6f, U+006f, KEY_o, LATIN SMALL LETTER O */
0x09, 0x6a, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 'K','E','Y','_','p',0, /* 9600, 0x70, U+0070, KEY_p, LATIN SMALL LETTER P */
0x09, 0x6b, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x71, 'K','E','Y','_','q',0, /* 9615, 0x71, U+0071, KEY_q, LATIN SMALL LETTER Q */
0x09, 0x6c, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x72, 'K','E','Y','_','r',0, /* 9630, 0x72, U+0072, KEY_r, LATIN SMALL LETTER R */
0x09, 0x6d, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x73, 'K','E','Y','_','s',0, /* 9645, 0x73, U+0073, KEY_s, LATIN SMALL LETTER S */
0x09, 0x6e, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x74, 'K','E','Y','_','t',0, /* 9660, 0x74, U+0074, KEY_t, LATIN SMALL LETTER T */
0x09, 0x6f, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x75, 'K','E','Y','_','u',0, /* 9675, 0x75, U+0075, KEY_u, LATIN SMALL LETTER U */
0x09, 0x70, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x76, 'K','E','Y','_','v',0, /* 9690, 0x76, U+0076, KEY_v, LATIN SMALL LETTER V */
0x09, 0x71, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x77, 'K','E','Y','_','w',0, /* 9705, 0x77, U+0077, KEY_w, LATIN SMALL LETTER W */
0x09, 0x72, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x78, 'K','E','Y','_','x',0, /* 9720, 0x78, U+0078, KEY_x, LATIN SMALL LETTER X */
0x09, 0x73, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x79, 'K','E','Y','_','y',0, /* 9735, 0x79, U+0079, KEY_y, LATIN SMALL LETTER Y */
0x09, 0x74, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x7a, 'K','E','Y','_','z',0, /* 9750, 0x7a, U+007a, KEY_z, LATIN SMALL LETTER Z */
0xc6, 0x24, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x7b, 'K','E','Y','_','b','r','a','c','e','l','e','f','t',0, /* 9773, 0x7b, U+007b, KEY_braceleft, LEFT CURLY BRACKET */
0x26, 0xa4, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 'K','E','Y','_','b','a','r',0, /* 9790, 0x7c, U+007c, KEY_bar, VERTICAL LINE */
0x8d, 0x28, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x7d, 'K','E','Y','_','b','r','a','c','e','r','i','g','h','t',0, /* 9814, 0x7d, U+007d, KEY_braceright, RIGHT CURLY BRACKET */
0x8f, 0x45, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7e, 'K','E','Y','_','a','s','c','i','i','t','i','l','d','e',0, /* 9838, 0x7e, U+007e, KEY_asciitilde, TILDE */
0x97, 0x7f, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0xa0, 'K','E','Y','_','n','o','b','r','e','a','k','s','p','a','c','e',0, /* 9864, 0xa0, U+00a0, KEY_nobreakspace, NO-BREAK SPACE */
0x9b, 0xa8, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0xa1, 'K','E','Y','_','e','x','c','l','a','m','d','o','w','n',0, /* 9888, 0xa1, U+00a1, KEY_exclamdown, INVERTED EXCLAMATION MARK */
0x4d, 0xcc, 0x00, 0x00, 0x00, 0xa2, 0x00, 0x00, 0xa2, 'K','E','Y','_','c','e','n','t',0, /* 9906, 0xa2, U+00a2, KEY_cent, CENT SIGN */
0xed, 0x87, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0xa3, 'K','E','Y','_','s','t','e','r','l','i','n','g',0, /* 9928, 0xa3, U+00a3, KEY_sterling, POUND SIGN */
0xe7, 0x3f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0xa4, 'K','E','Y','_','c','u','r','r','e','n','c','y',0, /* 9950, 0xa4, U+00a4, KEY_currency, CURRENCY SIGN */
0x27, 0x04, 0x00, 0x00, 0x00, 0xa5, 0x00, 0x00, 0xa5, 'K','E','Y','_','y','e','n',0, /* 9967, 0xa5, U+00a5, KEY_yen, YEN SIGN */
0xca, 0x9c, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0xa6, 'K','E','Y','_','b','r','o','k','e','n','b','a','r',0, /* 9990, 0xa6, U+00a6, KEY_brokenbar, BROKEN BAR */
0x74, 0xa0, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0xa7, 'K','E','Y','_','s','e','c','t','i','o','n',0, /* 10011, 0xa7, U+00a7, KEY_section, SECTION SIGN */
0xc4, 0xb9, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0xa8, 'K','E','Y','_','d','i','a','e','r','e','s','i','s',0, /* 10034, 0xa8, U+00a8, KEY_diaeresis, DIAERESIS */
0xcc, 0xe8, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0xa9, 'K','E','Y','_','c','o','p','y','r','i','g','h','t',0, /* 10057, 0xa9, U+00a9, KEY_copyright, COPYRIGHT SIGN */
0x52, 0xc5, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0xaa, 'K','E','Y','_','o','r','d','f','e','m','i','n','i','n','e',0, /* 10082, 0xaa, U+00aa, KEY_ordfeminine, FEMININE ORDINAL INDICATOR */
0x09, 0x14, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0xab, 'K','E','Y','_','g','u','i','l','l','e','m','o','t','l','e','f','t',0, /* 10109, 0xab, U+00ab, KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
0x75, 0x98, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0xac, 'K','E','Y','_','n','o','t','s','i','g','n',0, /* 10130, 0xac, U+00ac, KEY_notsign, NOT SIGN */
0x3a, 0x28, 0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0xad, 'K','E','Y','_','h','y','p','h','e','n',0, /* 10150, 0xad, U+00ad, KEY_hyphen, SOFT HYPHEN */
0xa6, 0x7e, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, 0xae, 'K','E','Y','_','r','e','g','i','s','t','e','r','e','d',0, /* 10174, 0xae, U+00ae, KEY_registered, REGISTERED SIGN */
0x39, 0x1c, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0xaf, 'K','E','Y','_','m','a','c','r','o','n',0, /* 10194, 0xaf, U+00af, KEY_macron, MACRON */
0x38, 0x3f, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0xb0, 'K','E','Y','_','d','e','g','r','e','e',0, /* 10214, 0xb0, U+00b0, KEY_degree, DEGREE SIGN */
0xd8, 0xcd, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0xb1, 'K','E','Y','_','p','l','u','s','m','i','n','u','s',0, /* 10237, 0xb1, U+00b1, KEY_plusminus, PLUS-MINUS SIGN */
0x86, 0x94, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0xb2, 'K','E','Y','_','t','w','o','s','u','p','e','r','i','o','r',0, /* 10262, 0xb2, U+00b2, KEY_twosuperior, SUPERSCRIPT TWO */
0x88, 0x94, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0xb3, 'K','E','Y','_','t','h','r','e','e','s','u','p','e','r','i','o','r',0, /* 10289, 0xb3, U+00b3, KEY_threesuperior, SUPERSCRIPT THREE */
0x9b, 0xe9, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0xb4, 'K','E','Y','_','a','c','u','t','e',0, /* 10308, 0xb4, U+00b4, KEY_acute, ACUTE ACCENT */
0x13, 0x43, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0xb5, 'K','E','Y','_','m','u',0, /* 10324, 0xb5, U+00b5, KEY_mu, MICRO SIGN */
0xcf, 0xec, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0xb6, 'K','E','Y','_','p','a','r','a','g','r','a','p','h',0, /* 10347, 0xb6, U+00b6, KEY_paragraph, PILCROW SIGN */
0x6b, 0xde, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0xb7, 'K','E','Y','_','p','e','r','i','o','d','c','e','n','t','e','r','e','d',0, /* 10375, 0xb7, U+00b7, KEY_periodcentered, MIDDLE DOT */
0x70, 0x51, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0xb8, 'K','E','Y','_','c','e','d','i','l','l','a',0, /* 10396, 0xb8, U+00b8, KEY_cedilla, CEDILLA */
0x56, 0x94, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0xb9, 'K','E','Y','_','o','n','e','s','u','p','e','r','i','o','r',0, /* 10421, 0xb9, U+00b9, KEY_onesuperior, SUPERSCRIPT ONE */
0xce, 0x35, 0x00, 0x00, 0x00, 0xba, 0x00, 0x00, 0xba, 'K','E','Y','_','m','a','s','c','u','l','i','n','e',0, /* 10444, 0xba, U+00ba, KEY_masculine, MASCULINE ORDINAL INDICATOR */
0x13, 0x08, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb, 'K','E','Y','_','g','u','i','l','l','e','m','o','t','r','i','g','h','t',0, /* 10472, 0xbb, U+00bb, KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
0xaa, 0x0c, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0xbc, 'K','E','Y','_','o','n','e','q','u','a','r','t','e','r',0, /* 10496, 0xbc, U+00bc, KEY_onequarter, VULGAR FRACTION ONE QUARTER */
0x74, 0x52, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0xbd, 'K','E','Y','_','o','n','e','h','a','l','f',0, /* 10517, 0xbd, U+00bd, KEY_onehalf, VULGAR FRACTION ONE HALF */
0x86, 0x8b, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0xbe, 'K','E','Y','_','t','h','r','e','e','q','u','a','r','t','e','r','s',0, /* 10544, 0xbe, U+00be, KEY_threequarters, VULGAR FRACTION THREE QUARTERS */
0xd8, 0x38, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0xbf, 'K','E','Y','_','q','u','e','s','t','i','o','n','d','o','w','n',0, /* 10570, 0xbf, U+00bf, KEY_questiondown, INVERTED QUESTION MARK */
0x34, 0x35, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0xc0, 'K','E','Y','_','A','g','r','a','v','e',0, /* 10590, 0xc0, U+00c0, KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */
0x33, 0xa9, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1, 'K','E','Y','_','A','a','c','u','t','e',0, /* 10610, 0xc1, U+00c1, KEY_Aacute, LATIN CAPITAL LETTER A WITH ACUTE */
0x88, 0x52, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0xc2, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x',0, /* 10635, 0xc2, U+00c2, KEY_Acircumflex, LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
0x34, 0xc5, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0xc3, 'K','E','Y','_','A','t','i','l','d','e',0, /* 10655, 0xc3, U+00c3, KEY_Atilde, LATIN CAPITAL LETTER A WITH TILDE */
0x40, 0xb9, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0xc4, 'K','E','Y','_','A','d','i','a','e','r','e','s','i','s',0, /* 10679, 0xc4, U+00c4, KEY_Adiaeresis, LATIN CAPITAL LETTER A WITH DIAERESIS */
0x9a, 0x27, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0xc5, 'K','E','Y','_','A','r','i','n','g',0, /* 10698, 0xc5, U+00c5, KEY_Aring, LATIN CAPITAL LETTER A WITH RING ABOVE */
0x12, 0xbb, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0xc6, 'K','E','Y','_','A','E',0, /* 10714, 0xc6, U+00c6, KEY_AE, LATIN CAPITAL LETTER AE */
0xd0, 0x51, 0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0xc7, 'K','E','Y','_','C','c','e','d','i','l','l','a',0, /* 10736, 0xc7, U+00c7, KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */
0x34, 0xb5, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0xc8, 'K','E','Y','_','E','g','r','a','v','e',0, /* 10756, 0xc8, U+00c8, KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */
0x34, 0x29, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0xc9, 'K','E','Y','_','E','a','c','u','t','e',0, /* 10776, 0xc9, U+00c9, KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */
0x98, 0x52, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0xca, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x',0, /* 10801, 0xca, U+00ca, KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
0x48, 0xb9, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0xcb, 'K','E','Y','_','E','d','i','a','e','r','e','s','i','s',0, /* 10825, 0xcb, U+00cb, KEY_Ediaeresis, LATIN CAPITAL LETTER E WITH DIAERESIS */
0x35, 0x35, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0xcc, 'K','E','Y','_','I','g','r','a','v','e',0, /* 10845, 0xcc, U+00cc, KEY_Igrave, LATIN CAPITAL LETTER I WITH GRAVE */
0x34, 0xa9, 0x00, 0x00, 0x00, 0xcd, 0x00, 0x00, 0xcd, 'K','E','Y','_','I','a','c','u','t','e',0, /* 10865, 0xcd, U+00cd, KEY_Iacute, LATIN CAPITAL LETTER I WITH ACUTE */
0xa8, 0x52, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0xce, 'K','E','Y','_','I','c','i','r','c','u','m','f','l','e','x',0, /* 10890, 0xce, U+00ce, KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
0x50, 0xb9, 0x00, 0x00, 0x00, 0xcf, 0x00, 0x00, 0xcf, 'K','E','Y','_','I','d','i','a','e','r','e','s','i','s',0, /* 10914, 0xcf, U+00cf, KEY_Idiaeresis, LATIN CAPITAL LETTER I WITH DIAERESIS */
0x25, 0xec, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0xd0, 'K','E','Y','_','E','T','H',0, /* 10931, 0xd0, U+00d0, KEY_ETH, LATIN CAPITAL LETTER ETH */
0x26, 0x4c, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 'K','E','Y','_','E','t','h',0, /* 10948, 0xd0, KEY_Eth, deprecated */
0x36, 0x65, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0xd1, 'K','E','Y','_','N','t','i','l','d','e',0, /* 10968, 0xd1, U+00d1, KEY_Ntilde, LATIN CAPITAL LETTER N WITH TILDE */
0x35, 0xf5, 0x00, 0x00, 0x00, 0xd2, 0x00, 0x00, 0xd2, 'K','E','Y','_','O','g','r','a','v','e',0, /* 10988, 0xd2, U+00d2, KEY_Ograve, LATIN CAPITAL LETTER O WITH GRAVE */
0x35, 0x69, 0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0xd3, 'K','E','Y','_','O','a','c','u','t','e',0, /* 11008, 0xd3, U+00d3, KEY_Oacute, LATIN CAPITAL LETTER O WITH ACUTE */
0xc0, 0x52, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0xd4, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x',0, /* 11033, 0xd4, U+00d4, KEY_Ocircumflex, LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
0x36, 0x85, 0x00, 0x00, 0x00, 0xd5, 0x00, 0x00, 0xd5, 'K','E','Y','_','O','t','i','l','d','e',0, /* 11053, 0xd5, U+00d5, KEY_Otilde, LATIN CAPITAL LETTER O WITH TILDE */
0x5c, 0xb9, 0x00, 0x00, 0x00, 0xd6, 0x00, 0x00, 0xd6, 'K','E','Y','_','O','d','i','a','e','r','e','s','i','s',0, /* 11077, 0xd6, U+00d6, KEY_Odiaeresis, LATIN CAPITAL LETTER O WITH DIAERESIS */
0xeb, 0xd9, 0x00, 0x00, 0x00, 0xd7, 0x00, 0x00, 0xd7, 'K','E','Y','_','m','u','l','t','i','p','l','y',0, /* 11099, 0xd7, U+00d7, KEY_multiply, MULTIPLICATION SIGN */
0x36, 0x82, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0xd8, 'K','E','Y','_','O','s','l','a','s','h',0, /* 11119, 0xd8, U+00d8, KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */
0xd9, 0x9b, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0xd8, 'K','E','Y','_','O','o','b','l','i','q','u','e',0, /* 11141, 0xd8, U+00d8, KEY_Ooblique, LATIN CAPITAL LETTER O WITH STROKE */
0x36, 0xb5, 0x00, 0x00, 0x00, 0xd9, 0x00, 0x00, 0xd9, 'K','E','Y','_','U','g','r','a','v','e',0, /* 11161, 0xd9, U+00d9, KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */
0x36, 0x29, 0x00, 0x00, 0x00, 0xda, 0x00, 0x00, 0xda, 'K','E','Y','_','U','a','c','u','t','e',0, /* 11181, 0xda, U+00da, KEY_Uacute, LATIN CAPITAL LETTER U WITH ACUTE */
0xd8, 0x52, 0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0xdb, 'K','E','Y','_','U','c','i','r','c','u','m','f','l','e','x',0, /* 11206, 0xdb, U+00db, KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
0x68, 0xb9, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0xdc, 'K','E','Y','_','U','d','i','a','e','r','e','s','i','s',0, /* 11230, 0xdc, U+00dc, KEY_Udiaeresis, LATIN CAPITAL LETTER U WITH DIAERESIS */
0x36, 0xa9, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0xdd, 'K','E','Y','_','Y','a','c','u','t','e',0, /* 11250, 0xdd, U+00dd, KEY_Yacute, LATIN CAPITAL LETTER Y WITH ACUTE */
0x99, 0x4e, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0xde, 'K','E','Y','_','T','H','O','R','N',0, /* 11269, 0xde, U+00de, KEY_THORN, LATIN CAPITAL LETTER THORN */
0x9b, 0x2e, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','T','h','o','r','n',0, /* 11288, 0xde, KEY_Thorn, deprecated */
0x3a, 0xe8, 0x00, 0x00, 0x00, 0xdf, 0x00, 0x00, 0xdf, 'K','E','Y','_','s','s','h','a','r','p',0, /* 11308, 0xdf, U+00df, KEY_ssharp, LATIN SMALL LETTER SHARP S */
0x38, 0x35, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 'K','E','Y','_','a','g','r','a','v','e',0, /* 11328, 0xe0, U+00e0, KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */
0x37, 0xa9, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0xe1, 'K','E','Y','_','a','a','c','u','t','e',0, /* 11348, 0xe1, U+00e1, KEY_aacute, LATIN SMALL LETTER A WITH ACUTE */
0x08, 0x52, 0x00, 0x00, 0x00, 0xe2, 0x00, 0x00, 0xe2, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x',0, /* 11373, 0xe2, U+00e2, KEY_acircumflex, LATIN SMALL LETTER A WITH CIRCUMFLEX */
0x38, 0xc5, 0x00, 0x00, 0x00, 0xe3, 0x00, 0x00, 0xe3, 'K','E','Y','_','a','t','i','l','d','e',0, /* 11393, 0xe3, U+00e3, KEY_atilde, LATIN SMALL LETTER A WITH TILDE */
0x80, 0xb9, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0xe4, 'K','E','Y','_','a','d','i','a','e','r','e','s','i','s',0, /* 11417, 0xe4, U+00e4, KEY_adiaeresis, LATIN SMALL LETTER A WITH DIAERESIS */
0x9c, 0x27, 0x00, 0x00, 0x00, 0xe5, 0x00, 0x00, 0xe5, 'K','E','Y','_','a','r','i','n','g',0, /* 11436, 0xe5, U+00e5, KEY_aring, LATIN SMALL LETTER A WITH RING ABOVE */
0x13, 0x1b, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0xe6, 'K','E','Y','_','a','e',0, /* 11452, 0xe6, U+00e6, KEY_ae, LATIN SMALL LETTER AE */
0xe0, 0x51, 0x00, 0x00, 0x00, 0xe7, 0x00, 0x00, 0xe7, 'K','E','Y','_','c','c','e','d','i','l','l','a',0, /* 11474, 0xe7, U+00e7, KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */
0x38, 0xb5, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0xe8, 'K','E','Y','_','e','g','r','a','v','e',0, /* 11494, 0xe8, U+00e8, KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */
0x38, 0x29, 0x00, 0x00, 0x00, 0xe9, 0x00, 0x00, 0xe9, 'K','E','Y','_','e','a','c','u','t','e',0, /* 11514, 0xe9, U+00e9, KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */
0x18, 0x52, 0x00, 0x00, 0x00, 0xea, 0x00, 0x00, 0xea, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x',0, /* 11539, 0xea, U+00ea, KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */
0x88, 0xb9, 0x00, 0x00, 0x00, 0xeb, 0x00, 0x00, 0xeb, 'K','E','Y','_','e','d','i','a','e','r','e','s','i','s',0, /* 11563, 0xeb, U+00eb, KEY_ediaeresis, LATIN SMALL LETTER E WITH DIAERESIS */
0x39, 0x35, 0x00, 0x00, 0x00, 0xec, 0x00, 0x00, 0xec, 'K','E','Y','_','i','g','r','a','v','e',0, /* 11583, 0xec, U+00ec, KEY_igrave, LATIN SMALL LETTER I WITH GRAVE */
0x38, 0xa9, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0xed, 'K','E','Y','_','i','a','c','u','t','e',0, /* 11603, 0xed, U+00ed, KEY_iacute, LATIN SMALL LETTER I WITH ACUTE */
0x28, 0x52, 0x00, 0x00, 0x00, 0xee, 0x00, 0x00, 0xee, 'K','E','Y','_','i','c','i','r','c','u','m','f','l','e','x',0, /* 11628, 0xee, U+00ee, KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */
0x90, 0xb9, 0x00, 0x00, 0x00, 0xef, 0x00, 0x00, 0xef, 'K','E','Y','_','i','d','i','a','e','r','e','s','i','s',0, /* 11652, 0xef, U+00ef, KEY_idiaeresis, LATIN SMALL LETTER I WITH DIAERESIS */
0x26, 0xcc, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 'K','E','Y','_','e','t','h',0, /* 11669, 0xf0, U+00f0, KEY_eth, LATIN SMALL LETTER ETH */
0x3a, 0x65, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0xf1, 'K','E','Y','_','n','t','i','l','d','e',0, /* 11689, 0xf1, U+00f1, KEY_ntilde, LATIN SMALL LETTER N WITH TILDE */
0x39, 0xf5, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0xf2, 'K','E','Y','_','o','g','r','a','v','e',0, /* 11709, 0xf2, U+00f2, KEY_ograve, LATIN SMALL LETTER O WITH GRAVE */
0x39, 0x69, 0x00, 0x00, 0x00, 0xf3, 0x00, 0x00, 0xf3, 'K','E','Y','_','o','a','c','u','t','e',0, /* 11729, 0xf3, U+00f3, KEY_oacute, LATIN SMALL LETTER O WITH ACUTE */
0x40, 0x52, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0xf4, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x',0, /* 11754, 0xf4, U+00f4, KEY_ocircumflex, LATIN SMALL LETTER O WITH CIRCUMFLEX */
0x3a, 0x85, 0x00, 0x00, 0x00, 0xf5, 0x00, 0x00, 0xf5, 'K','E','Y','_','o','t','i','l','d','e',0, /* 11774, 0xf5, U+00f5, KEY_otilde, LATIN SMALL LETTER O WITH TILDE */
0x9c, 0xb9, 0x00, 0x00, 0x00, 0xf6, 0x00, 0x00, 0xf6, 'K','E','Y','_','o','d','i','a','e','r','e','s','i','s',0, /* 11798, 0xf6, U+00f6, KEY_odiaeresis, LATIN SMALL LETTER O WITH DIAERESIS */
0xe5, 0x18, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0xf7, 'K','E','Y','_','d','i','v','i','s','i','o','n',0, /* 11820, 0xf7, U+00f7, KEY_division, DIVISION SIGN */
0x3a, 0x82, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf8, 'K','E','Y','_','o','s','l','a','s','h',0, /* 11840, 0xf8, U+00f8, KEY_oslash, LATIN SMALL LETTER O WITH STROKE */
0xe9, 0x9b, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf8, 'K','E','Y','_','o','o','b','l','i','q','u','e',0, /* 11862, 0xf8, U+00f8, KEY_ooblique, LATIN SMALL LETTER O WITH STROKE */
0x3a, 0xb5, 0x00, 0x00, 0x00, 0xf9, 0x00, 0x00, 0xf9, 'K','E','Y','_','u','g','r','a','v','e',0, /* 11882, 0xf9, U+00f9, KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */
0x3a, 0x29, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x00, 0xfa, 'K','E','Y','_','u','a','c','u','t','e',0, /* 11902, 0xfa, U+00fa, KEY_uacute, LATIN SMALL LETTER U WITH ACUTE */
0x58, 0x52, 0x00, 0x00, 0x00, 0xfb, 0x00, 0x00, 0xfb, 'K','E','Y','_','u','c','i','r','c','u','m','f','l','e','x',0, /* 11927, 0xfb, U+00fb, KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */
0xa8, 0xb9, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 'K','E','Y','_','u','d','i','a','e','r','e','s','i','s',0, /* 11951, 0xfc, U+00fc, KEY_udiaeresis, LATIN SMALL LETTER U WITH DIAERESIS */
0x3a, 0xa9, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x00, 0xfd, 'K','E','Y','_','y','a','c','u','t','e',0, /* 11971, 0xfd, U+00fd, KEY_yacute, LATIN SMALL LETTER Y WITH ACUTE */
0x9d, 0x2e, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0xfe, 'K','E','Y','_','t','h','o','r','n',0, /* 11990, 0xfe, U+00fe, KEY_thorn, LATIN SMALL LETTER THORN */
0xb0, 0xb9, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 'K','E','Y','_','y','d','i','a','e','r','e','s','i','s',0, /* 12014, 0xff, U+00ff, KEY_ydiaeresis, LATIN SMALL LETTER Y WITH DIAERESIS */
0x69, 0x75, 0x00, 0x00, 0x01, 0xa1, 0x00, 0x01, 0x04, 'K','E','Y','_','A','o','g','o','n','e','k',0, /* 12035, 0x1a1, U+0104, KEY_Aogonek, LATIN CAPITAL LETTER A WITH OGONEK */
0x9c, 0x35, 0x00, 0x00, 0x01, 0xa2, 0x00, 0x02, 0xd8, 'K','E','Y','_','b','r','e','v','e',0, /* 12054, 0x1a2, U+02d8, KEY_breve, BREVE */
0x6d, 0xa7, 0x00, 0x00, 0x01, 0xa3, 0x00, 0x01, 0x41, 'K','E','Y','_','L','s','t','r','o','k','e',0, /* 12075, 0x1a3, U+0141, KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */
0x35, 0x0c, 0x00, 0x00, 0x01, 0xa5, 0x00, 0x01, 0x3d, 'K','E','Y','_','L','c','a','r','o','n',0, /* 12095, 0x1a5, U+013d, KEY_Lcaron, LATIN CAPITAL LETTER L WITH CARON */
0x35, 0xe9, 0x00, 0x00, 0x01, 0xa6, 0x00, 0x01, 0x5a, 'K','E','Y','_','S','a','c','u','t','e',0, /* 12115, 0x1a6, U+015a, KEY_Sacute, LATIN CAPITAL LETTER S WITH ACUTE */
0x35, 0xec, 0x00, 0x00, 0x01, 0xa9, 0x00, 0x01, 0x60, 'K','E','Y','_','S','c','a','r','o','n',0, /* 12135, 0x1a9, U+0160, KEY_Scaron, LATIN CAPITAL LETTER S WITH CARON */
0xd8, 0x51, 0x00, 0x00, 0x01, 0xaa, 0x00, 0x01, 0x5e, 'K','E','Y','_','S','c','e','d','i','l','l','a',0, /* 12157, 0x1aa, U+015e, KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */
0x36, 0x0c, 0x00, 0x00, 0x01, 0xab, 0x00, 0x01, 0x64, 'K','E','Y','_','T','c','a','r','o','n',0, /* 12177, 0x1ab, U+0164, KEY_Tcaron, LATIN CAPITAL LETTER T WITH CARON */
0x36, 0xc9, 0x00, 0x00, 0x01, 0xac, 0x00, 0x01, 0x79, 'K','E','Y','_','Z','a','c','u','t','e',0, /* 12197, 0x1ac, U+0179, KEY_Zacute, LATIN CAPITAL LETTER Z WITH ACUTE */
0x36, 0xcc, 0x00, 0x00, 0x01, 0xae, 0x00, 0x01, 0x7d, 'K','E','Y','_','Z','c','a','r','o','n',0, /* 12217, 0x1ae, U+017d, KEY_Zcaron, LATIN CAPITAL LETTER Z WITH CARON */
0xb8, 0x4a, 0x00, 0x00, 0x01, 0xaf, 0x00, 0x01, 0x7b, 'K','E','Y','_','Z','a','b','o','v','e','d','o','t',0, /* 12240, 0x1af, U+017b, KEY_Zabovedot, LATIN CAPITAL LETTER Z WITH DOT ABOVE */
0x71, 0x75, 0x00, 0x00, 0x01, 0xb1, 0x00, 0x01, 0x05, 'K','E','Y','_','a','o','g','o','n','e','k',0, /* 12261, 0x1b1, U+0105, KEY_aogonek, LATIN SMALL LETTER A WITH OGONEK */
0x39, 0xf5, 0x00, 0x00, 0x01, 0xb2, 0x00, 0x02, 0xdb, 'K','E','Y','_','o','g','o','n','e','k',0, /* 12281, 0x1b2, U+02db, KEY_ogonek, OGONEK */
0x75, 0xa7, 0x00, 0x00, 0x01, 0xb3, 0x00, 0x01, 0x42, 'K','E','Y','_','l','s','t','r','o','k','e',0, /* 12302, 0x1b3, U+0142, KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */
0x39, 0x0c, 0x00, 0x00, 0x01, 0xb5, 0x00, 0x01, 0x3e, 'K','E','Y','_','l','c','a','r','o','n',0, /* 12322, 0x1b5, U+013e, KEY_lcaron, LATIN SMALL LETTER L WITH CARON */
0x39, 0xe9, 0x00, 0x00, 0x01, 0xb6, 0x00, 0x01, 0x5b, 'K','E','Y','_','s','a','c','u','t','e',0, /* 12342, 0x1b6, U+015b, KEY_sacute, LATIN SMALL LETTER S WITH ACUTE */
0x9b, 0xec, 0x00, 0x00, 0x01, 0xb7, 0x00, 0x02, 0xc7, 'K','E','Y','_','c','a','r','o','n',0, /* 12361, 0x1b7, U+02c7, KEY_caron, CARON */
0x39, 0xec, 0x00, 0x00, 0x01, 0xb9, 0x00, 0x01, 0x61, 'K','E','Y','_','s','c','a','r','o','n',0, /* 12381, 0x1b9, U+0161, KEY_scaron, LATIN SMALL LETTER S WITH CARON */
0xe8, 0x51, 0x00, 0x00, 0x01, 0xba, 0x00, 0x01, 0x5f, 'K','E','Y','_','s','c','e','d','i','l','l','a',0, /* 12403, 0x1ba, U+015f, KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */
0x3a, 0x0c, 0x00, 0x00, 0x01, 0xbb, 0x00, 0x01, 0x65, 'K','E','Y','_','t','c','a','r','o','n',0, /* 12423, 0x1bb, U+0165, KEY_tcaron, LATIN SMALL LETTER T WITH CARON */
0x3a, 0xc9, 0x00, 0x00, 0x01, 0xbc, 0x00, 0x01, 0x7a, 'K','E','Y','_','z','a','c','u','t','e',0, /* 12443, 0x1bc, U+017a, KEY_zacute, LATIN SMALL LETTER Z WITH ACUTE */
0x2f, 0xe9, 0x00, 0x00, 0x01, 0xbd, 0x00, 0x02, 0xdd, 'K','E','Y','_','d','o','u','b','l','e','a','c','u','t','e',0, /* 12468, 0x1bd, U+02dd, KEY_doubleacute, DOUBLE ACUTE ACCENT */
0x3a, 0xcc, 0x00, 0x00, 0x01, 0xbe, 0x00, 0x01, 0x7e, 'K','E','Y','_','z','c','a','r','o','n',0, /* 12488, 0x1be, U+017e, KEY_zcaron, LATIN SMALL LETTER Z WITH CARON */
0xd8, 0x4a, 0x00, 0x00, 0x01, 0xbf, 0x00, 0x01, 0x7c, 'K','E','Y','_','z','a','b','o','v','e','d','o','t',0, /* 12511, 0x1bf, U+017c, KEY_zabovedot, LATIN SMALL LETTER Z WITH DOT ABOVE */
0x35, 0xc9, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x01, 0x54, 'K','E','Y','_','R','a','c','u','t','e',0, /* 12531, 0x1c0, U+0154, KEY_Racute, LATIN CAPITAL LETTER R WITH ACUTE */
0x33, 0xf5, 0x00, 0x00, 0x01, 0xc3, 0x00, 0x01, 0x02, 'K','E','Y','_','A','b','r','e','v','e',0, /* 12551, 0x1c3, U+0102, KEY_Abreve, LATIN CAPITAL LETTER A WITH BREVE */
0x35, 0x09, 0x00, 0x00, 0x01, 0xc5, 0x00, 0x01, 0x39, 'K','E','Y','_','L','a','c','u','t','e',0, /* 12571, 0x1c5, U+0139, KEY_Lacute, LATIN CAPITAL LETTER L WITH ACUTE */
0x33, 0xe9, 0x00, 0x00, 0x01, 0xc6, 0x00, 0x01, 0x06, 'K','E','Y','_','C','a','c','u','t','e',0, /* 12591, 0x1c6, U+0106, KEY_Cacute, LATIN CAPITAL LETTER C WITH ACUTE */
0x33, 0xec, 0x00, 0x00, 0x01, 0xc8, 0x00, 0x01, 0x0c, 'K','E','Y','_','C','c','a','r','o','n',0, /* 12611, 0x1c8, U+010c, KEY_Ccaron, LATIN CAPITAL LETTER C WITH CARON */
0x6a, 0x75, 0x00, 0x00, 0x01, 0xca, 0x00, 0x01, 0x18, 'K','E','Y','_','E','o','g','o','n','e','k',0, /* 12632, 0x1ca, U+0118, KEY_Eogonek, LATIN CAPITAL LETTER E WITH OGONEK */
0x34, 0x2c, 0x00, 0x00, 0x01, 0xcc, 0x00, 0x01, 0x1a, 'K','E','Y','_','E','c','a','r','o','n',0, /* 12652, 0x1cc, U+011a, KEY_Ecaron, LATIN CAPITAL LETTER E WITH CARON */
0x34, 0x0c, 0x00, 0x00, 0x01, 0xcf, 0x00, 0x01, 0x0e, 'K','E','Y','_','D','c','a','r','o','n',0, /* 12672, 0x1cf, U+010e, KEY_Dcaron, LATIN CAPITAL LETTER D WITH CARON */
0x6b, 0xa7, 0x00, 0x00, 0x01, 0xd0, 0x00, 0x01, 0x10, 'K','E','Y','_','D','s','t','r','o','k','e',0, /* 12693, 0x1d0, U+0110, KEY_Dstroke, LATIN CAPITAL LETTER D WITH STROKE */
0x35, 0x49, 0x00, 0x00, 0x01, 0xd1, 0x00, 0x01, 0x43, 'K','E','Y','_','N','a','c','u','t','e',0, /* 12713, 0x1d1, U+0143, KEY_Nacute, LATIN CAPITAL LETTER N WITH ACUTE */
0x35, 0x4c, 0x00, 0x00, 0x01, 0xd2, 0x00, 0x01, 0x47, 'K','E','Y','_','N','c','a','r','o','n',0, /* 12733, 0x1d2, U+0147, KEY_Ncaron, LATIN CAPITAL LETTER N WITH CARON */
0x8f, 0xe9, 0x00, 0x00, 0x01, 0xd5, 0x00, 0x01, 0x50, 'K','E','Y','_','O','d','o','u','b','l','e','a','c','u','t','e',0, /* 12759, 0x1d5, U+0150, KEY_Odoubleacute, LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
0x35, 0xcc, 0x00, 0x00, 0x01, 0xd8, 0x00, 0x01, 0x58, 'K','E','Y','_','R','c','a','r','o','n',0, /* 12779, 0x1d8, U+0158, KEY_Rcaron, LATIN CAPITAL LETTER R WITH CARON */
0x9b, 0x67, 0x00, 0x00, 0x01, 0xd9, 0x00, 0x01, 0x6e, 'K','E','Y','_','U','r','i','n','g',0, /* 12798, 0x1d9, U+016e, KEY_Uring, LATIN CAPITAL LETTER U WITH RING ABOVE */
0xbf, 0xe9, 0x00, 0x00, 0x01, 0xdb, 0x00, 0x01, 0x70, 'K','E','Y','_','U','d','o','u','b','l','e','a','c','u','t','e',0, /* 12824, 0x1db, U+0170, KEY_Udoubleacute, LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
0xd8, 0xd1, 0x00, 0x00, 0x01, 0xde, 0x00, 0x01, 0x62, 'K','E','Y','_','T','c','e','d','i','l','l','a',0, /* 12846, 0x1de, U+0162, KEY_Tcedilla, LATIN CAPITAL LETTER T WITH CEDILLA */
0x39, 0xc9, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x01, 0x55, 'K','E','Y','_','r','a','c','u','t','e',0, /* 12866, 0x1e0, U+0155, KEY_racute, LATIN SMALL LETTER R WITH ACUTE */
0x37, 0xf5, 0x00, 0x00, 0x01, 0xe3, 0x00, 0x01, 0x03, 'K','E','Y','_','a','b','r','e','v','e',0, /* 12886, 0x1e3, U+0103, KEY_abreve, LATIN SMALL LETTER A WITH BREVE */
0x39, 0x09, 0x00, 0x00, 0x01, 0xe5, 0x00, 0x01, 0x3a, 'K','E','Y','_','l','a','c','u','t','e',0, /* 12906, 0x1e5, U+013a, KEY_lacute, LATIN SMALL LETTER L WITH ACUTE */
0x37, 0xe9, 0x00, 0x00, 0x01, 0xe6, 0x00, 0x01, 0x07, 'K','E','Y','_','c','a','c','u','t','e',0, /* 12926, 0x1e6, U+0107, KEY_cacute, LATIN SMALL LETTER C WITH ACUTE */
0x37, 0xec, 0x00, 0x00, 0x01, 0xe8, 0x00, 0x01, 0x0d, 'K','E','Y','_','c','c','a','r','o','n',0, /* 12946, 0x1e8, U+010d, KEY_ccaron, LATIN SMALL LETTER C WITH CARON */
0x72, 0x75, 0x00, 0x00, 0x01, 0xea, 0x00, 0x01, 0x19, 'K','E','Y','_','e','o','g','o','n','e','k',0, /* 12967, 0x1ea, U+0119, KEY_eogonek, LATIN SMALL LETTER E WITH OGONEK */
0x38, 0x2c, 0x00, 0x00, 0x01, 0xec, 0x00, 0x01, 0x1b, 'K','E','Y','_','e','c','a','r','o','n',0, /* 12987, 0x1ec, U+011b, KEY_ecaron, LATIN SMALL LETTER E WITH CARON */
0x38, 0x0c, 0x00, 0x00, 0x01, 0xef, 0x00, 0x01, 0x0f, 'K','E','Y','_','d','c','a','r','o','n',0, /* 13007, 0x1ef, U+010f, KEY_dcaron, LATIN SMALL LETTER D WITH CARON */
0x73, 0xa7, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x01, 0x11, 'K','E','Y','_','d','s','t','r','o','k','e',0, /* 13028, 0x1f0, U+0111, KEY_dstroke, LATIN SMALL LETTER D WITH STROKE */
0x39, 0x49, 0x00, 0x00, 0x01, 0xf1, 0x00, 0x01, 0x44, 'K','E','Y','_','n','a','c','u','t','e',0, /* 13048, 0x1f1, U+0144, KEY_nacute, LATIN SMALL LETTER N WITH ACUTE */
0x39, 0x4c, 0x00, 0x00, 0x01, 0xf2, 0x00, 0x01, 0x48, 'K','E','Y','_','n','c','a','r','o','n',0, /* 13068, 0x1f2, U+0148, KEY_ncaron, LATIN SMALL LETTER N WITH CARON */
0x8f, 0xe9, 0x00, 0x00, 0x01, 0xf5, 0x00, 0x01, 0x51, 'K','E','Y','_','o','d','o','u','b','l','e','a','c','u','t','e',0, /* 13094, 0x1f5, U+0151, KEY_odoubleacute, LATIN SMALL LETTER O WITH DOUBLE ACUTE */
0x39, 0xcc, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x01, 0x59, 'K','E','Y','_','r','c','a','r','o','n',0, /* 13114, 0x1f8, U+0159, KEY_rcaron, LATIN SMALL LETTER R WITH CARON */
0x9d, 0x67, 0x00, 0x00, 0x01, 0xf9, 0x00, 0x01, 0x6f, 'K','E','Y','_','u','r','i','n','g',0, /* 13133, 0x1f9, U+016f, KEY_uring, LATIN SMALL LETTER U WITH RING ABOVE */
0xbf, 0xe9, 0x00, 0x00, 0x01, 0xfb, 0x00, 0x01, 0x71, 'K','E','Y','_','u','d','o','u','b','l','e','a','c','u','t','e',0, /* 13159, 0x1fb, U+0171, KEY_udoubleacute, LATIN SMALL LETTER U WITH DOUBLE ACUTE */
0xe8, 0xd1, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x01, 0x63, 'K','E','Y','_','t','c','e','d','i','l','l','a',0, /* 13181, 0x1fe, U+0163, KEY_tcedilla, LATIN SMALL LETTER T WITH CEDILLA */
0xe1, 0x4a, 0x00, 0x00, 0x01, 0xff, 0x00, 0x02, 0xd9, 'K','E','Y','_','a','b','o','v','e','d','o','t',0, /* 13203, 0x1ff, U+02d9, KEY_abovedot, DOT ABOVE */
0x6c, 0xa7, 0x00, 0x00, 0x02, 0xa1, 0x00, 0x01, 0x26, 'K','E','Y','_','H','s','t','r','o','k','e',0, /* 13224, 0x2a1, U+0126, KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */
0xa4, 0x52, 0x00, 0x00, 0x02, 0xa6, 0x00, 0x01, 0x24, 'K','E','Y','_','H','c','i','r','c','u','m','f','l','e','x',0, /* 13249, 0x2a6, U+0124, KEY_Hcircumflex, LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
0xa7, 0x4a, 0x00, 0x00, 0x02, 0xa9, 0x00, 0x01, 0x30, 'K','E','Y','_','I','a','b','o','v','e','d','o','t',0, /* 13272, 0x2a9, U+0130, KEY_Iabovedot, LATIN CAPITAL LETTER I WITH DOT ABOVE */
0x34, 0xb5, 0x00, 0x00, 0x02, 0xab, 0x00, 0x01, 0x1e, 'K','E','Y','_','G','b','r','e','v','e',0, /* 13292, 0x2ab, U+011e, KEY_Gbreve, LATIN CAPITAL LETTER G WITH BREVE */
0xac, 0x52, 0x00, 0x00, 0x02, 0xac, 0x00, 0x01, 0x34, 'K','E','Y','_','J','c','i','r','c','u','m','f','l','e','x',0, /* 13317, 0x2ac, U+0134, KEY_Jcircumflex, LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
0x74, 0xa7, 0x00, 0x00, 0x02, 0xb1, 0x00, 0x01, 0x27, 'K','E','Y','_','h','s','t','r','o','k','e',0, /* 13338, 0x2b1, U+0127, KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */
0x24, 0x52, 0x00, 0x00, 0x02, 0xb6, 0x00, 0x01, 0x25, 'K','E','Y','_','h','c','i','r','c','u','m','f','l','e','x',0, /* 13363, 0x2b6, U+0125, KEY_hcircumflex, LATIN SMALL LETTER H WITH CIRCUMFLEX */
0xe5, 0xed, 0x00, 0x00, 0x02, 0xb9, 0x00, 0x01, 0x31, 'K','E','Y','_','i','d','o','t','l','e','s','s',0, /* 13385, 0x2b9, U+0131, KEY_idotless, LATIN SMALL LETTER DOTLESS I */
0x38, 0xb5, 0x00, 0x00, 0x02, 0xbb, 0x00, 0x01, 0x1f, 'K','E','Y','_','g','b','r','e','v','e',0, /* 13405, 0x2bb, U+011f, KEY_gbreve, LATIN SMALL LETTER G WITH BREVE */
0x2c, 0x52, 0x00, 0x00, 0x02, 0xbc, 0x00, 0x01, 0x35, 'K','E','Y','_','j','c','i','r','c','u','m','f','l','e','x',0, /* 13430, 0x2bc, U+0135, KEY_jcircumflex, LATIN SMALL LETTER J WITH CIRCUMFLEX */
0xa1, 0x4a, 0x00, 0x00, 0x02, 0xc5, 0x00, 0x01, 0x0a, 'K','E','Y','_','C','a','b','o','v','e','d','o','t',0, /* 13453, 0x2c5, U+010a, KEY_Cabovedot, LATIN CAPITAL LETTER C WITH DOT ABOVE */
0x90, 0x52, 0x00, 0x00, 0x02, 0xc6, 0x00, 0x01, 0x08, 'K','E','Y','_','C','c','i','r','c','u','m','f','l','e','x',0, /* 13478, 0x2c6, U+0108, KEY_Ccircumflex, LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
0xa5, 0x4a, 0x00, 0x00, 0x02, 0xd5, 0x00, 0x01, 0x20, 'K','E','Y','_','G','a','b','o','v','e','d','o','t',0, /* 13501, 0x2d5, U+0120, KEY_Gabovedot, LATIN CAPITAL LETTER G WITH DOT ABOVE */
0xa0, 0x52, 0x00, 0x00, 0x02, 0xd8, 0x00, 0x01, 0x1c, 'K','E','Y','_','G','c','i','r','c','u','m','f','l','e','x',0, /* 13526, 0x2d8, U+011c, KEY_Gcircumflex, LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
0x36, 0x75, 0x00, 0x00, 0x02, 0xdd, 0x00, 0x01, 0x6c, 'K','E','Y','_','U','b','r','e','v','e',0, /* 13546, 0x2dd, U+016c, KEY_Ubreve, LATIN CAPITAL LETTER U WITH BREVE */
0xd0, 0x52, 0x00, 0x00, 0x02, 0xde, 0x00, 0x01, 0x5c, 'K','E','Y','_','S','c','i','r','c','u','m','f','l','e','x',0, /* 13571, 0x2de, U+015c, KEY_Scircumflex, LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
0xc1, 0x4a, 0x00, 0x00, 0x02, 0xe5, 0x00, 0x01, 0x0b, 'K','E','Y','_','c','a','b','o','v','e','d','o','t',0, /* 13594, 0x2e5, U+010b, KEY_cabovedot, LATIN SMALL LETTER C WITH DOT ABOVE */
0x10, 0x52, 0x00, 0x00, 0x02, 0xe6, 0x00, 0x01, 0x09, 'K','E','Y','_','c','c','i','r','c','u','m','f','l','e','x',0, /* 13619, 0x2e6, U+0109, KEY_ccircumflex, LATIN SMALL LETTER C WITH CIRCUMFLEX */
0xc5, 0x4a, 0x00, 0x00, 0x02, 0xf5, 0x00, 0x01, 0x21, 'K','E','Y','_','g','a','b','o','v','e','d','o','t',0, /* 13642, 0x2f5, U+0121, KEY_gabovedot, LATIN SMALL LETTER G WITH DOT ABOVE */
0x20, 0x52, 0x00, 0x00, 0x02, 0xf8, 0x00, 0x01, 0x1d, 'K','E','Y','_','g','c','i','r','c','u','m','f','l','e','x',0, /* 13667, 0x2f8, U+011d, KEY_gcircumflex, LATIN SMALL LETTER G WITH CIRCUMFLEX */
0x3a, 0x75, 0x00, 0x00, 0x02, 0xfd, 0x00, 0x01, 0x6d, 'K','E','Y','_','u','b','r','e','v','e',0, /* 13687, 0x2fd, U+016d, KEY_ubreve, LATIN SMALL LETTER U WITH BREVE */
0x50, 0x52, 0x00, 0x00, 0x02, 0xfe, 0x00, 0x01, 0x5d, 'K','E','Y','_','s','c','i','r','c','u','m','f','l','e','x',0, /* 13712, 0x2fe, U+015d, KEY_scircumflex, LATIN SMALL LETTER S WITH CIRCUMFLEX */
0x26, 0xd9, 0x00, 0x00, 0x03, 0xa2, 0x00, 0x01, 0x38, 'K','E','Y','_','k','r','a',0, /* 13729, 0x3a2, U+0138, KEY_kra, LATIN SMALL LETTER KRA */
0x9c, 0x59, 0x00, 0x00, 0x03, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','p','p','a',0, /* 13748, 0x3a2, KEY_kappa, deprecated */
0xd7, 0xd1, 0x00, 0x00, 0x03, 0xa3, 0x00, 0x01, 0x56, 'K','E','Y','_','R','c','e','d','i','l','l','a',0, /* 13770, 0x3a3, U+0156, KEY_Rcedilla, LATIN CAPITAL LETTER R WITH CEDILLA */
0x35, 0xc5, 0x00, 0x00, 0x03, 0xa5, 0x00, 0x01, 0x28, 'K','E','Y','_','I','t','i','l','d','e',0, /* 13790, 0x3a5, U+0128, KEY_Itilde, LATIN CAPITAL LETTER I WITH TILDE */
0xd4, 0xd1, 0x00, 0x00, 0x03, 0xa6, 0x00, 0x01, 0x3b, 'K','E','Y','_','L','c','e','d','i','l','l','a',0, /* 13812, 0x3a6, U+013b, KEY_Lcedilla, LATIN CAPITAL LETTER L WITH CEDILLA */
0x69, 0x9c, 0x00, 0x00, 0x03, 0xaa, 0x00, 0x01, 0x12, 'K','E','Y','_','E','m','a','c','r','o','n',0, /* 13833, 0x3aa, U+0112, KEY_Emacron, LATIN CAPITAL LETTER E WITH MACRON */
0xd2, 0x51, 0x00, 0x00, 0x03, 0xab, 0x00, 0x01, 0x22, 'K','E','Y','_','G','c','e','d','i','l','l','a',0, /* 13855, 0x3ab, U+0122, KEY_Gcedilla, LATIN CAPITAL LETTER G WITH CEDILLA */
0x37, 0x22, 0x00, 0x00, 0x03, 0xac, 0x00, 0x01, 0x66, 'K','E','Y','_','T','s','l','a','s','h',0, /* 13875, 0x3ac, U+0166, KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */
0xe7, 0xd1, 0x00, 0x00, 0x03, 0xb3, 0x00, 0x01, 0x57, 'K','E','Y','_','r','c','e','d','i','l','l','a',0, /* 13897, 0x3b3, U+0157, KEY_rcedilla, LATIN SMALL LETTER R WITH CEDILLA */
0x39, 0xc5, 0x00, 0x00, 0x03, 0xb5, 0x00, 0x01, 0x29, 'K','E','Y','_','i','t','i','l','d','e',0, /* 13917, 0x3b5, U+0129, KEY_itilde, LATIN SMALL LETTER I WITH TILDE */
0xe4, 0xd1, 0x00, 0x00, 0x03, 0xb6, 0x00, 0x01, 0x3c, 'K','E','Y','_','l','c','e','d','i','l','l','a',0, /* 13939, 0x3b6, U+013c, KEY_lcedilla, LATIN SMALL LETTER L WITH CEDILLA */
0x71, 0x9c, 0x00, 0x00, 0x03, 0xba, 0x00, 0x01, 0x13, 'K','E','Y','_','e','m','a','c','r','o','n',0, /* 13960, 0x3ba, U+0113, KEY_emacron, LATIN SMALL LETTER E WITH MACRON */
0xe2, 0x51, 0x00, 0x00, 0x03, 0xbb, 0x00, 0x01, 0x23, 'K','E','Y','_','g','c','e','d','i','l','l','a',0, /* 13982, 0x3bb, U+0123, KEY_gcedilla, LATIN SMALL LETTER G WITH CEDILLA */
0x3b, 0x22, 0x00, 0x00, 0x03, 0xbc, 0x00, 0x01, 0x67, 'K','E','Y','_','t','s','l','a','s','h',0, /* 14002, 0x3bc, U+0167, KEY_tslash, LATIN SMALL LETTER T WITH STROKE */
0x25, 0xdf, 0x00, 0x00, 0x03, 0xbd, 0x00, 0x01, 0x4a, 'K','E','Y','_','E','N','G',0, /* 14019, 0x3bd, U+014a, KEY_ENG, LATIN CAPITAL LETTER ENG */
0x26, 0xbf, 0x00, 0x00, 0x03, 0xbf, 0x00, 0x01, 0x4b, 'K','E','Y','_','e','n','g',0, /* 14036, 0x3bf, U+014b, KEY_eng, LATIN SMALL LETTER ENG */
0x68, 0x9c, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x01, 0x00, 'K','E','Y','_','A','m','a','c','r','o','n',0, /* 14057, 0x3c0, U+0100, KEY_Amacron, LATIN CAPITAL LETTER A WITH MACRON */
0x6b, 0x75, 0x00, 0x00, 0x03, 0xc7, 0x00, 0x01, 0x2e, 'K','E','Y','_','I','o','g','o','n','e','k',0, /* 14078, 0x3c7, U+012e, KEY_Iogonek, LATIN CAPITAL LETTER I WITH OGONEK */
0xa3, 0x4a, 0x00, 0x00, 0x03, 0xcc, 0x00, 0x01, 0x16, 'K','E','Y','_','E','a','b','o','v','e','d','o','t',0, /* 14101, 0x3cc, U+0116, KEY_Eabovedot, LATIN CAPITAL LETTER E WITH DOT ABOVE */
0x6a, 0x9c, 0x00, 0x00, 0x03, 0xcf, 0x00, 0x01, 0x2a, 'K','E','Y','_','I','m','a','c','r','o','n',0, /* 14122, 0x3cf, U+012a, KEY_Imacron, LATIN CAPITAL LETTER I WITH MACRON */
0xd5, 0xd1, 0x00, 0x00, 0x03, 0xd1, 0x00, 0x01, 0x45, 'K','E','Y','_','N','c','e','d','i','l','l','a',0, /* 14144, 0x3d1, U+0145, KEY_Ncedilla, LATIN CAPITAL LETTER N WITH CEDILLA */
0x6c, 0x1c, 0x00, 0x00, 0x03, 0xd2, 0x00, 0x01, 0x4c, 'K','E','Y','_','O','m','a','c','r','o','n',0, /* 14165, 0x3d2, U+014c, KEY_Omacron, LATIN CAPITAL LETTER O WITH MACRON */
0xd4, 0x51, 0x00, 0x00, 0x03, 0xd3, 0x00, 0x01, 0x36, 'K','E','Y','_','K','c','e','d','i','l','l','a',0, /* 14187, 0x3d3, U+0136, KEY_Kcedilla, LATIN CAPITAL LETTER K WITH CEDILLA */
0x6e, 0x75, 0x00, 0x00, 0x03, 0xd9, 0x00, 0x01, 0x72, 'K','E','Y','_','U','o','g','o','n','e','k',0, /* 14208, 0x3d9, U+0172, KEY_Uogonek, LATIN CAPITAL LETTER U WITH OGONEK */
0x37, 0x45, 0x00, 0x00, 0x03, 0xdd, 0x00, 0x01, 0x68, 'K','E','Y','_','U','t','i','l','d','e',0, /* 14228, 0x3dd, U+0168, KEY_Utilde, LATIN CAPITAL LETTER U WITH TILDE */
0x6d, 0x9c, 0x00, 0x00, 0x03, 0xde, 0x00, 0x01, 0x6a, 'K','E','Y','_','U','m','a','c','r','o','n',0, /* 14249, 0x3de, U+016a, KEY_Umacron, LATIN CAPITAL LETTER U WITH MACRON */
0x70, 0x9c, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x01, 0x01, 'K','E','Y','_','a','m','a','c','r','o','n',0, /* 14270, 0x3e0, U+0101, KEY_amacron, LATIN SMALL LETTER A WITH MACRON */
0x73, 0x75, 0x00, 0x00, 0x03, 0xe7, 0x00, 0x01, 0x2f, 'K','E','Y','_','i','o','g','o','n','e','k',0, /* 14291, 0x3e7, U+012f, KEY_iogonek, LATIN SMALL LETTER I WITH OGONEK */
0xc3, 0x4a, 0x00, 0x00, 0x03, 0xec, 0x00, 0x01, 0x17, 'K','E','Y','_','e','a','b','o','v','e','d','o','t',0, /* 14314, 0x3ec, U+0117, KEY_eabovedot, LATIN SMALL LETTER E WITH DOT ABOVE */
0x72, 0x9c, 0x00, 0x00, 0x03, 0xef, 0x00, 0x01, 0x2b, 'K','E','Y','_','i','m','a','c','r','o','n',0, /* 14335, 0x3ef, U+012b, KEY_imacron, LATIN SMALL LETTER I WITH MACRON */
0xe5, 0xd1, 0x00, 0x00, 0x03, 0xf1, 0x00, 0x01, 0x46, 'K','E','Y','_','n','c','e','d','i','l','l','a',0, /* 14357, 0x3f1, U+0146, KEY_ncedilla, LATIN SMALL LETTER N WITH CEDILLA */
0x74, 0x1c, 0x00, 0x00, 0x03, 0xf2, 0x00, 0x01, 0x4d, 'K','E','Y','_','o','m','a','c','r','o','n',0, /* 14378, 0x3f2, U+014d, KEY_omacron, LATIN SMALL LETTER O WITH MACRON */
0xe4, 0x51, 0x00, 0x00, 0x03, 0xf3, 0x00, 0x01, 0x37, 'K','E','Y','_','k','c','e','d','i','l','l','a',0, /* 14400, 0x3f3, U+0137, KEY_kcedilla, LATIN SMALL LETTER K WITH CEDILLA */
0x76, 0x75, 0x00, 0x00, 0x03, 0xf9, 0x00, 0x01, 0x73, 'K','E','Y','_','u','o','g','o','n','e','k',0, /* 14421, 0x3f9, U+0173, KEY_uogonek, LATIN SMALL LETTER U WITH OGONEK */
0x3b, 0x45, 0x00, 0x00, 0x03, 0xfd, 0x00, 0x01, 0x69, 'K','E','Y','_','u','t','i','l','d','e',0, /* 14441, 0x3fd, U+0169, KEY_utilde, LATIN SMALL LETTER U WITH TILDE */
0x75, 0x9c, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x01, 0x6b, 'K','E','Y','_','u','m','a','c','r','o','n',0, /* 14462, 0x3fe, U+016b, KEY_umacron, LATIN SMALL LETTER U WITH MACRON */
0xe0, 0x52, 0x01, 0x00, 0x01, 0x74, 0x00, 0x01, 0x74, 'K','E','Y','_','W','c','i','r','c','u','m','f','l','e','x',0, /* 14487, 0x1000174, U+0174, KEY_Wcircumflex, LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
0x60, 0x52, 0x01, 0x00, 0x01, 0x75, 0x00, 0x01, 0x75, 'K','E','Y','_','w','c','i','r','c','u','m','f','l','e','x',0, /* 14512, 0x1000175, U+0175, KEY_wcircumflex, LATIN SMALL LETTER W WITH CIRCUMFLEX */
0xe8, 0x52, 0x01, 0x00, 0x01, 0x76, 0x00, 0x01, 0x76, 'K','E','Y','_','Y','c','i','r','c','u','m','f','l','e','x',0, /* 14537, 0x1000176, U+0176, KEY_Ycircumflex, LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
0x68, 0x52, 0x01, 0x00, 0x01, 0x77, 0x00, 0x01, 0x77, 'K','E','Y','_','y','c','i','r','c','u','m','f','l','e','x',0, /* 14562, 0x1000177, U+0177, KEY_ycircumflex, LATIN SMALL LETTER Y WITH CIRCUMFLEX */
0xa0, 0x4a, 0x01, 0x00, 0x1e, 0x02, 0x00, 0x1e, 0x02, 'K','E','Y','_','B','a','b','o','v','e','d','o','t',0, /* 14585, 0x1001e02, U+1e02, KEY_Babovedot, LATIN CAPITAL LETTER B WITH DOT ABOVE */
0xc0, 0x4a, 0x01, 0x00, 0x1e, 0x03, 0x00, 0x1e, 0x03, 'K','E','Y','_','b','a','b','o','v','e','d','o','t',0, /* 14608, 0x1001e03, U+1e03, KEY_babovedot, LATIN SMALL LETTER B WITH DOT ABOVE */
0xa2, 0x4a, 0x01, 0x00, 0x1e, 0x0a, 0x00, 0x1e, 0x0a, 'K','E','Y','_','D','a','b','o','v','e','d','o','t',0, /* 14631, 0x1001e0a, U+1e0a, KEY_Dabovedot, LATIN CAPITAL LETTER D WITH DOT ABOVE */
0xc2, 0x4a, 0x01, 0x00, 0x1e, 0x0b, 0x00, 0x1e, 0x0b, 'K','E','Y','_','d','a','b','o','v','e','d','o','t',0, /* 14654, 0x1001e0b, U+1e0b, KEY_dabovedot, LATIN SMALL LETTER D WITH DOT ABOVE */
0xa4, 0x4a, 0x01, 0x00, 0x1e, 0x1e, 0x00, 0x1e, 0x1e, 'K','E','Y','_','F','a','b','o','v','e','d','o','t',0, /* 14677, 0x1001e1e, U+1e1e, KEY_Fabovedot, LATIN CAPITAL LETTER F WITH DOT ABOVE */
0xc4, 0x4a, 0x01, 0x00, 0x1e, 0x1f, 0x00, 0x1e, 0x1f, 'K','E','Y','_','f','a','b','o','v','e','d','o','t',0, /* 14700, 0x1001e1f, U+1e1f, KEY_fabovedot, LATIN SMALL LETTER F WITH DOT ABOVE */
0xab, 0x4a, 0x01, 0x00, 0x1e, 0x40, 0x00, 0x1e, 0x40, 'K','E','Y','_','M','a','b','o','v','e','d','o','t',0, /* 14723, 0x1001e40, U+1e40, KEY_Mabovedot, LATIN CAPITAL LETTER M WITH DOT ABOVE */
0xcb, 0x4a, 0x01, 0x00, 0x1e, 0x41, 0x00, 0x1e, 0x41, 'K','E','Y','_','m','a','b','o','v','e','d','o','t',0, /* 14746, 0x1001e41, U+1e41, KEY_mabovedot, LATIN SMALL LETTER M WITH DOT ABOVE */
0xae, 0x4a, 0x01, 0x00, 0x1e, 0x56, 0x00, 0x1e, 0x56, 'K','E','Y','_','P','a','b','o','v','e','d','o','t',0, /* 14769, 0x1001e56, U+1e56, KEY_Pabovedot, LATIN CAPITAL LETTER P WITH DOT ABOVE */
0xce, 0x4a, 0x01, 0x00, 0x1e, 0x57, 0x00, 0x1e, 0x57, 'K','E','Y','_','p','a','b','o','v','e','d','o','t',0, /* 14792, 0x1001e57, U+1e57, KEY_pabovedot, LATIN SMALL LETTER P WITH DOT ABOVE */
0xb1, 0x4a, 0x01, 0x00, 0x1e, 0x60, 0x00, 0x1e, 0x60, 'K','E','Y','_','S','a','b','o','v','e','d','o','t',0, /* 14815, 0x1001e60, U+1e60, KEY_Sabovedot, LATIN CAPITAL LETTER S WITH DOT ABOVE */
0xd1, 0x4a, 0x01, 0x00, 0x1e, 0x61, 0x00, 0x1e, 0x61, 'K','E','Y','_','s','a','b','o','v','e','d','o','t',0, /* 14838, 0x1001e61, U+1e61, KEY_sabovedot, LATIN SMALL LETTER S WITH DOT ABOVE */
0xb2, 0x4a, 0x01, 0x00, 0x1e, 0x6a, 0x00, 0x1e, 0x6a, 'K','E','Y','_','T','a','b','o','v','e','d','o','t',0, /* 14861, 0x1001e6a, U+1e6a, KEY_Tabovedot, LATIN CAPITAL LETTER T WITH DOT ABOVE */
0xd2, 0x4a, 0x01, 0x00, 0x1e, 0x6b, 0x00, 0x1e, 0x6b, 'K','E','Y','_','t','a','b','o','v','e','d','o','t',0, /* 14884, 0x1001e6b, U+1e6b, KEY_tabovedot, LATIN SMALL LETTER T WITH DOT ABOVE */
0x36, 0xf5, 0x01, 0x00, 0x1e, 0x80, 0x00, 0x1e, 0x80, 'K','E','Y','_','W','g','r','a','v','e',0, /* 14904, 0x1001e80, U+1e80, KEY_Wgrave, LATIN CAPITAL LETTER W WITH GRAVE */
0x3a, 0xf5, 0x01, 0x00, 0x1e, 0x81, 0x00, 0x1e, 0x81, 'K','E','Y','_','w','g','r','a','v','e',0, /* 14924, 0x1001e81, U+1e81, KEY_wgrave, LATIN SMALL LETTER W WITH GRAVE */
0x36, 0x69, 0x01, 0x00, 0x1e, 0x82, 0x00, 0x1e, 0x82, 'K','E','Y','_','W','a','c','u','t','e',0, /* 14944, 0x1001e82, U+1e82, KEY_Wacute, LATIN CAPITAL LETTER W WITH ACUTE */
0x3a, 0x69, 0x01, 0x00, 0x1e, 0x83, 0x00, 0x1e, 0x83, 'K','E','Y','_','w','a','c','u','t','e',0, /* 14964, 0x1001e83, U+1e83, KEY_wacute, LATIN SMALL LETTER W WITH ACUTE */
0x6c, 0xb9, 0x01, 0x00, 0x1e, 0x84, 0x00, 0x1e, 0x84, 'K','E','Y','_','W','d','i','a','e','r','e','s','i','s',0, /* 14988, 0x1001e84, U+1e84, KEY_Wdiaeresis, LATIN CAPITAL LETTER W WITH DIAERESIS */
0xac, 0xb9, 0x01, 0x00, 0x1e, 0x85, 0x00, 0x1e, 0x85, 'K','E','Y','_','w','d','i','a','e','r','e','s','i','s',0, /* 15012, 0x1001e85, U+1e85, KEY_wdiaeresis, LATIN SMALL LETTER W WITH DIAERESIS */
0x37, 0x35, 0x01, 0x00, 0x1e, 0xf2, 0x00, 0x1e, 0xf2, 'K','E','Y','_','Y','g','r','a','v','e',0, /* 15032, 0x1001ef2, U+1ef2, KEY_Ygrave, LATIN CAPITAL LETTER Y WITH GRAVE */
0x3b, 0x35, 0x01, 0x00, 0x1e, 0xf3, 0x00, 0x1e, 0xf3, 'K','E','Y','_','y','g','r','a','v','e',0, /* 15052, 0x1001ef3, U+1ef3, KEY_ygrave, LATIN SMALL LETTER Y WITH GRAVE */
0x12, 0xd7, 0x00, 0x00, 0x13, 0xbc, 0x00, 0x01, 0x52, 'K','E','Y','_','O','E',0, /* 15068, 0x13bc, U+0152, KEY_OE, LATIN CAPITAL LIGATURE OE */
0x13, 0x37, 0x00, 0x00, 0x13, 0xbd, 0x00, 0x01, 0x53, 'K','E','Y','_','o','e',0, /* 15084, 0x13bd, U+0153, KEY_oe, LATIN SMALL LIGATURE OE */
0x70, 0xb9, 0x00, 0x00, 0x13, 0xbe, 0x00, 0x01, 0x78, 'K','E','Y','_','Y','d','i','a','e','r','e','s','i','s',0, /* 15108, 0x13be, U+0178, KEY_Ydiaeresis, LATIN CAPITAL LETTER Y WITH DIAERESIS */
0xec, 0x05, 0x00, 0x00, 0x04, 0x7e, 0x00, 0x20, 0x3e, 'K','E','Y','_','o','v','e','r','l','i','n','e',0, /* 15130, 0x47e, U+203e, KEY_overline, OVERLINE */
0x9c, 0x36, 0x00, 0x00, 0x04, 0xa1, 0x00, 0x30, 0x02, 'K','E','Y','_','k','a','n','a','_','f','u','l','l','s','t','o','p',0, /* 15157, 0x4a1, U+3002, KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */
0xa6, 0x52, 0x00, 0x00, 0x04, 0xa2, 0x00, 0x30, 0x0c, 'K','E','Y','_','k','a','n','a','_','o','p','e','n','i','n','g','b','r','a','c','k','e','t',0, /* 15190, 0x4a2, U+300c, KEY_kana_openingbracket, LEFT CORNER BRACKET */
0x4a, 0x52, 0x00, 0x00, 0x04, 0xa3, 0x00, 0x30, 0x0d, 'K','E','Y','_','k','a','n','a','_','c','l','o','s','i','n','g','b','r','a','c','k','e','t',0, /* 15223, 0x4a3, U+300d, KEY_kana_closingbracket, RIGHT CORNER BRACKET */
0x92, 0xb7, 0x00, 0x00, 0x04, 0xa4, 0x00, 0x30, 0x01, 'K','E','Y','_','k','a','n','a','_','c','o','m','m','a',0, /* 15247, 0x4a4, U+3001, KEY_kana_comma, IDEOGRAPHIC COMMA */
0xcc, 0xc5, 0x00, 0x00, 0x04, 0xa5, 0x00, 0x30, 0xfb, 'K','E','Y','_','k','a','n','a','_','c','o','n','j','u','n','c','t','i','v','e',0, /* 15277, 0x4a5, U+30fb, KEY_kana_conjunctive, KATAKANA MIDDLE DOT */
0x35, 0xca, 0x00, 0x00, 0x04, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','m','i','d','d','l','e','d','o','t',0, /* 15305, 0x4a5, KEY_kana_middledot, deprecated */
0x71, 0xc1, 0x00, 0x00, 0x04, 0xa6, 0x00, 0x30, 0xf2, 'K','E','Y','_','k','a','n','a','_','W','O',0, /* 15326, 0x4a6, U+30f2, KEY_kana_WO, KATAKANA LETTER WO */
0x38, 0xc3, 0x00, 0x00, 0x04, 0xa7, 0x00, 0x30, 0xa1, 'K','E','Y','_','k','a','n','a','_','a',0, /* 15346, 0x4a7, U+30a1, KEY_kana_a, KATAKANA LETTER SMALL A */
0x38, 0xcb, 0x00, 0x00, 0x04, 0xa8, 0x00, 0x30, 0xa3, 'K','E','Y','_','k','a','n','a','_','i',0, /* 15366, 0x4a8, U+30a3, KEY_kana_i, KATAKANA LETTER SMALL I */
0x38, 0xd7, 0x00, 0x00, 0x04, 0xa9, 0x00, 0x30, 0xa5, 'K','E','Y','_','k','a','n','a','_','u',0, /* 15386, 0x4a9, U+30a5, KEY_kana_u, KATAKANA LETTER SMALL U */
0x38, 0xc7, 0x00, 0x00, 0x04, 0xaa, 0x00, 0x30, 0xa7, 'K','E','Y','_','k','a','n','a','_','e',0, /* 15406, 0x4aa, U+30a7, KEY_kana_e, KATAKANA LETTER SMALL E */
0x38, 0xd1, 0x00, 0x00, 0x04, 0xab, 0x00, 0x30, 0xa9, 'K','E','Y','_','k','a','n','a','_','o',0, /* 15426, 0x4ab, U+30a9, KEY_kana_o, KATAKANA LETTER SMALL O */
0x72, 0x17, 0x00, 0x00, 0x04, 0xac, 0x00, 0x30, 0xe3, 'K','E','Y','_','k','a','n','a','_','y','a',0, /* 15447, 0x4ac, U+30e3, KEY_kana_ya, KATAKANA LETTER SMALL YA */
0x72, 0x2b, 0x00, 0x00, 0x04, 0xad, 0x00, 0x30, 0xe5, 'K','E','Y','_','k','a','n','a','_','y','u',0, /* 15468, 0x4ad, U+30e5, KEY_kana_yu, KATAKANA LETTER SMALL YU */
0x72, 0x25, 0x00, 0x00, 0x04, 0xae, 0x00, 0x30, 0xe7, 'K','E','Y','_','k','a','n','a','_','y','o',0, /* 15489, 0x4ae, U+30e7, KEY_kana_yo, KATAKANA LETTER SMALL YO */
0xe4, 0xb3, 0x00, 0x00, 0x04, 0xaf, 0x00, 0x30, 0xc3, 'K','E','Y','_','k','a','n','a','_','t','s','u',0, /* 15511, 0x4af, U+30c3, KEY_kana_tsu, KATAKANA LETTER SMALL TU */
0x72, 0x21, 0x00, 0x00, 0x04, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','t','u',0, /* 15532, 0x4af, KEY_kana_tu, deprecated */
0x3a, 0xfc, 0x00, 0x00, 0x04, 0xb0, 0x00, 0x30, 0xfc, 'K','E','Y','_','p','r','o','l','o','n','g','e','d','s','o','u','n','d',0, /* 15560, 0x4b0, U+30fc, KEY_prolongedsound, KATAKANA-HIRAGANA PROLONGED SOUND MARK */
0x38, 0xa3, 0x00, 0x00, 0x04, 0xb1, 0x00, 0x30, 0xa2, 'K','E','Y','_','k','a','n','a','_','A',0, /* 15580, 0x4b1, U+30a2, KEY_kana_A, KATAKANA LETTER A */
0x38, 0xab, 0x00, 0x00, 0x04, 0xb2, 0x00, 0x30, 0xa4, 'K','E','Y','_','k','a','n','a','_','I',0, /* 15600, 0x4b2, U+30a4, KEY_kana_I, KATAKANA LETTER I */
0x38, 0xb7, 0x00, 0x00, 0x04, 0xb3, 0x00, 0x30, 0xa6, 'K','E','Y','_','k','a','n','a','_','U',0, /* 15620, 0x4b3, U+30a6, KEY_kana_U, KATAKANA LETTER U */
0x38, 0xa7, 0x00, 0x00, 0x04, 0xb4, 0x00, 0x30, 0xa8, 'K','E','Y','_','k','a','n','a','_','E',0, /* 15640, 0x4b4, U+30a8, KEY_kana_E, KATAKANA LETTER E */
0x38, 0xb1, 0x00, 0x00, 0x04, 0xb5, 0x00, 0x30, 0xaa, 'K','E','Y','_','k','a','n','a','_','O',0, /* 15660, 0x4b5, U+30aa, KEY_kana_O, KATAKANA LETTER O */
0x71, 0x9b, 0x00, 0x00, 0x04, 0xb6, 0x00, 0x30, 0xab, 'K','E','Y','_','k','a','n','a','_','K','A',0, /* 15681, 0x4b6, U+30ab, KEY_kana_KA, KATAKANA LETTER KA */
0x71, 0xa3, 0x00, 0x00, 0x04, 0xb7, 0x00, 0x30, 0xad, 'K','E','Y','_','k','a','n','a','_','K','I',0, /* 15702, 0x4b7, U+30ad, KEY_kana_KI, KATAKANA LETTER KI */
0x71, 0xaf, 0x00, 0x00, 0x04, 0xb8, 0x00, 0x30, 0xaf, 'K','E','Y','_','k','a','n','a','_','K','U',0, /* 15723, 0x4b8, U+30af, KEY_kana_KU, KATAKANA LETTER KU */
0x71, 0x9f, 0x00, 0x00, 0x04, 0xb9, 0x00, 0x30, 0xb1, 'K','E','Y','_','k','a','n','a','_','K','E',0, /* 15744, 0x4b9, U+30b1, KEY_kana_KE, KATAKANA LETTER KE */
0x71, 0xa9, 0x00, 0x00, 0x04, 0xba, 0x00, 0x30, 0xb3, 'K','E','Y','_','k','a','n','a','_','K','O',0, /* 15765, 0x4ba, U+30b3, KEY_kana_KO, KATAKANA LETTER KO */
0x71, 0xab, 0x00, 0x00, 0x04, 0xbb, 0x00, 0x30, 0xb5, 'K','E','Y','_','k','a','n','a','_','S','A',0, /* 15786, 0x4bb, U+30b5, KEY_kana_SA, KATAKANA LETTER SA */
0xe3, 0xad, 0x00, 0x00, 0x04, 0xbc, 0x00, 0x30, 0xb7, 'K','E','Y','_','k','a','n','a','_','S','H','I',0, /* 15808, 0x4bc, U+30b7, KEY_kana_SHI, KATAKANA LETTER SI */
0x71, 0xbf, 0x00, 0x00, 0x04, 0xbd, 0x00, 0x30, 0xb9, 'K','E','Y','_','k','a','n','a','_','S','U',0, /* 15829, 0x4bd, U+30b9, KEY_kana_SU, KATAKANA LETTER SU */
0x71, 0xaf, 0x00, 0x00, 0x04, 0xbe, 0x00, 0x30, 0xbb, 'K','E','Y','_','k','a','n','a','_','S','E',0, /* 15850, 0x4be, U+30bb, KEY_kana_SE, KATAKANA LETTER SE */
0x71, 0xb9, 0x00, 0x00, 0x04, 0xbf, 0x00, 0x30, 0xbd, 'K','E','Y','_','k','a','n','a','_','S','O',0, /* 15871, 0x4bf, U+30bd, KEY_kana_SO, KATAKANA LETTER SO */
0x71, 0xad, 0x00, 0x00, 0x04, 0xc0, 0x00, 0x30, 0xbf, 'K','E','Y','_','k','a','n','a','_','T','A',0, /* 15892, 0x4c0, U+30bf, KEY_kana_TA, KATAKANA LETTER TA */
0xe3, 0x6d, 0x00, 0x00, 0x04, 0xc1, 0x00, 0x30, 0xc1, 'K','E','Y','_','k','a','n','a','_','C','H','I',0, /* 15914, 0x4c1, U+30c1, KEY_kana_CHI, KATAKANA LETTER TI */
0x71, 0xb5, 0x00, 0x00, 0x04, 0xc1, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','T','I',0, /* 15935, 0x4c1, KEY_kana_TI, deprecated */
0xe3, 0xd3, 0x00, 0x00, 0x04, 0xc2, 0x00, 0x30, 0xc4, 'K','E','Y','_','k','a','n','a','_','T','S','U',0, /* 15957, 0x4c2, U+30c4, KEY_kana_TSU, KATAKANA LETTER TU */
0x71, 0xc1, 0x00, 0x00, 0x04, 0xc2, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','T','U',0, /* 15978, 0x4c2, KEY_kana_TU, deprecated */
0x71, 0xb1, 0x00, 0x00, 0x04, 0xc3, 0x00, 0x30, 0xc6, 'K','E','Y','_','k','a','n','a','_','T','E',0, /* 15999, 0x4c3, U+30c6, KEY_kana_TE, KATAKANA LETTER TE */
0x71, 0xbb, 0x00, 0x00, 0x04, 0xc4, 0x00, 0x30, 0xc8, 'K','E','Y','_','k','a','n','a','_','T','O',0, /* 16020, 0x4c4, U+30c8, KEY_kana_TO, KATAKANA LETTER TO */
0x71, 0xa1, 0x00, 0x00, 0x04, 0xc5, 0x00, 0x30, 0xca, 'K','E','Y','_','k','a','n','a','_','N','A',0, /* 16041, 0x4c5, U+30ca, KEY_kana_NA, KATAKANA LETTER NA */
0x71, 0xa9, 0x00, 0x00, 0x04, 0xc6, 0x00, 0x30, 0xcb, 'K','E','Y','_','k','a','n','a','_','N','I',0, /* 16062, 0x4c6, U+30cb, KEY_kana_NI, KATAKANA LETTER NI */
0x71, 0xb5, 0x00, 0x00, 0x04, 0xc7, 0x00, 0x30, 0xcc, 'K','E','Y','_','k','a','n','a','_','N','U',0, /* 16083, 0x4c7, U+30cc, KEY_kana_NU, KATAKANA LETTER NU */
0x71, 0xa5, 0x00, 0x00, 0x04, 0xc8, 0x00, 0x30, 0xcd, 'K','E','Y','_','k','a','n','a','_','N','E',0, /* 16104, 0x4c8, U+30cd, KEY_kana_NE, KATAKANA LETTER NE */
0x71, 0xaf, 0x00, 0x00, 0x04, 0xc9, 0x00, 0x30, 0xce, 'K','E','Y','_','k','a','n','a','_','N','O',0, /* 16125, 0x4c9, U+30ce, KEY_kana_NO, KATAKANA LETTER NO */
0x71, 0x95, 0x00, 0x00, 0x04, 0xca, 0x00, 0x30, 0xcf, 'K','E','Y','_','k','a','n','a','_','H','A',0, /* 16146, 0x4ca, U+30cf, KEY_kana_HA, KATAKANA LETTER HA */
0x71, 0x9d, 0x00, 0x00, 0x04, 0xcb, 0x00, 0x30, 0xd2, 'K','E','Y','_','k','a','n','a','_','H','I',0, /* 16167, 0x4cb, U+30d2, KEY_kana_HI, KATAKANA LETTER HI */
0x71, 0xa5, 0x00, 0x00, 0x04, 0xcc, 0x00, 0x30, 0xd5, 'K','E','Y','_','k','a','n','a','_','F','U',0, /* 16188, 0x4cc, U+30d5, KEY_kana_FU, KATAKANA LETTER HU */
0x71, 0xa9, 0x00, 0x00, 0x04, 0xcc, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','H','U',0, /* 16209, 0x4cc, KEY_kana_HU, deprecated */
0x71, 0x99, 0x00, 0x00, 0x04, 0xcd, 0x00, 0x30, 0xd8, 'K','E','Y','_','k','a','n','a','_','H','E',0, /* 16230, 0x4cd, U+30d8, KEY_kana_HE, KATAKANA LETTER HE */
0x71, 0xa3, 0x00, 0x00, 0x04, 0xce, 0x00, 0x30, 0xdb, 'K','E','Y','_','k','a','n','a','_','H','O',0, /* 16251, 0x4ce, U+30db, KEY_kana_HO, KATAKANA LETTER HO */
0x71, 0x9f, 0x00, 0x00, 0x04, 0xcf, 0x00, 0x30, 0xde, 'K','E','Y','_','k','a','n','a','_','M','A',0, /* 16272, 0x4cf, U+30de, KEY_kana_MA, KATAKANA LETTER MA */
0x71, 0xa7, 0x00, 0x00, 0x04, 0xd0, 0x00, 0x30, 0xdf, 'K','E','Y','_','k','a','n','a','_','M','I',0, /* 16293, 0x4d0, U+30df, KEY_kana_MI, KATAKANA LETTER MI */
0x71, 0xb3, 0x00, 0x00, 0x04, 0xd1, 0x00, 0x30, 0xe0, 'K','E','Y','_','k','a','n','a','_','M','U',0, /* 16314, 0x4d1, U+30e0, KEY_kana_MU, KATAKANA LETTER MU */
0x71, 0xa3, 0x00, 0x00, 0x04, 0xd2, 0x00, 0x30, 0xe1, 'K','E','Y','_','k','a','n','a','_','M','E',0, /* 16335, 0x4d2, U+30e1, KEY_kana_ME, KATAKANA LETTER ME */
0x71, 0xad, 0x00, 0x00, 0x04, 0xd3, 0x00, 0x30, 0xe2, 'K','E','Y','_','k','a','n','a','_','M','O',0, /* 16356, 0x4d3, U+30e2, KEY_kana_MO, KATAKANA LETTER MO */
0x71, 0xb7, 0x00, 0x00, 0x04, 0xd4, 0x00, 0x30, 0xe4, 'K','E','Y','_','k','a','n','a','_','Y','A',0, /* 16377, 0x4d4, U+30e4, KEY_kana_YA, KATAKANA LETTER YA */
0x71, 0xcb, 0x00, 0x00, 0x04, 0xd5, 0x00, 0x30, 0xe6, 'K','E','Y','_','k','a','n','a','_','Y','U',0, /* 16398, 0x4d5, U+30e6, KEY_kana_YU, KATAKANA LETTER YU */
0x71, 0xc5, 0x00, 0x00, 0x04, 0xd6, 0x00, 0x30, 0xe8, 'K','E','Y','_','k','a','n','a','_','Y','O',0, /* 16419, 0x4d6, U+30e8, KEY_kana_YO, KATAKANA LETTER YO */
0x71, 0xa9, 0x00, 0x00, 0x04, 0xd7, 0x00, 0x30, 0xe9, 'K','E','Y','_','k','a','n','a','_','R','A',0, /* 16440, 0x4d7, U+30e9, KEY_kana_RA, KATAKANA LETTER RA */
0x71, 0xb1, 0x00, 0x00, 0x04, 0xd8, 0x00, 0x30, 0xea, 'K','E','Y','_','k','a','n','a','_','R','I',0, /* 16461, 0x4d8, U+30ea, KEY_kana_RI, KATAKANA LETTER RI */
0x71, 0xbd, 0x00, 0x00, 0x04, 0xd9, 0x00, 0x30, 0xeb, 'K','E','Y','_','k','a','n','a','_','R','U',0, /* 16482, 0x4d9, U+30eb, KEY_kana_RU, KATAKANA LETTER RU */
0x71, 0xad, 0x00, 0x00, 0x04, 0xda, 0x00, 0x30, 0xec, 'K','E','Y','_','k','a','n','a','_','R','E',0, /* 16503, 0x4da, U+30ec, KEY_kana_RE, KATAKANA LETTER RE */
0x71, 0xb7, 0x00, 0x00, 0x04, 0xdb, 0x00, 0x30, 0xed, 'K','E','Y','_','k','a','n','a','_','R','O',0, /* 16524, 0x4db, U+30ed, KEY_kana_RO, KATAKANA LETTER RO */
0x71, 0xb3, 0x00, 0x00, 0x04, 0xdc, 0x00, 0x30, 0xef, 'K','E','Y','_','k','a','n','a','_','W','A',0, /* 16545, 0x4dc, U+30ef, KEY_kana_WA, KATAKANA LETTER WA */
0x38, 0xb0, 0x00, 0x00, 0x04, 0xdd, 0x00, 0x30, 0xf3, 'K','E','Y','_','k','a','n','a','_','N',0, /* 16565, 0x4dd, U+30f3, KEY_kana_N, KATAKANA LETTER N */
0x6b, 0xfc, 0x00, 0x00, 0x04, 0xde, 0x00, 0x30, 0x9b, 'K','E','Y','_','v','o','i','c','e','d','s','o','u','n','d',0, /* 16590, 0x4de, U+309b, KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */
0x7b, 0xfc, 0x00, 0x00, 0x04, 0xdf, 0x00, 0x30, 0x9c, 'K','E','Y','_','s','e','m','i','v','o','i','c','e','d','s','o','u','n','d',0, /* 16619, 0x4df, U+309c, KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
0x28, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','s','w','i','t','c','h',0, /* 16644, 0xff7e, KEY_kana_switch, Alias for mode_switch */
0x69, 0x6a, 0x01, 0x00, 0x06, 0xf0, 0x00, 0x06, 0xf0, 'K','E','Y','_','F','a','r','s','i','_','0',0, /* 16665, 0x10006f0, U+06f0, KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */
0x69, 0x6b, 0x01, 0x00, 0x06, 0xf1, 0x00, 0x06, 0xf1, 'K','E','Y','_','F','a','r','s','i','_','1',0, /* 16686, 0x10006f1, U+06f1, KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */
0x69, 0x6c, 0x01, 0x00, 0x06, 0xf2, 0x00, 0x06, 0xf2, 'K','E','Y','_','F','a','r','s','i','_','2',0, /* 16707, 0x10006f2, U+06f2, KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */
0x69, 0x6d, 0x01, 0x00, 0x06, 0xf3, 0x00, 0x06, 0xf3, 'K','E','Y','_','F','a','r','s','i','_','3',0, /* 16728, 0x10006f3, U+06f3, KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */
0x69, 0x6e, 0x01, 0x00, 0x06, 0xf4, 0x00, 0x06, 0xf4, 'K','E','Y','_','F','a','r','s','i','_','4',0, /* 16749, 0x10006f4, U+06f4, KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */
0x69, 0x6f, 0x01, 0x00, 0x06, 0xf5, 0x00, 0x06, 0xf5, 'K','E','Y','_','F','a','r','s','i','_','5',0, /* 16770, 0x10006f5, U+06f5, KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */
0x69, 0x70, 0x01, 0x00, 0x06, 0xf6, 0x00, 0x06, 0xf6, 'K','E','Y','_','F','a','r','s','i','_','6',0, /* 16791, 0x10006f6, U+06f6, KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */
0x69, 0x71, 0x01, 0x00, 0x06, 0xf7, 0x00, 0x06, 0xf7, 'K','E','Y','_','F','a','r','s','i','_','7',0, /* 16812, 0x10006f7, U+06f7, KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */
0x69, 0x72, 0x01, 0x00, 0x06, 0xf8, 0x00, 0x06, 0xf8, 'K','E','Y','_','F','a','r','s','i','_','8',0, /* 16833, 0x10006f8, U+06f8, KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */
0x69, 0x73, 0x01, 0x00, 0x06, 0xf9, 0x00, 0x06, 0xf9, 'K','E','Y','_','F','a','r','s','i','_','9',0, /* 16854, 0x10006f9, U+06f9, KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */
0xaa, 0x3c, 0x01, 0x00, 0x06, 0x6a, 0x00, 0x06, 0x6a, 'K','E','Y','_','A','r','a','b','i','c','_','p','e','r','c','e','n','t',0, /* 16882, 0x100066a, U+066a, KEY_Arabic_percent, ARABIC PERCENT SIGN */
0x0e, 0xd8, 0x01, 0x00, 0x06, 0x70, 0x00, 0x06, 0x70, 'K','E','Y','_','A','r','a','b','i','c','_','s','u','p','e','r','s','c','r','i','p','t','_','a','l','e','f',0, /* 16919, 0x1000670, U+0670, KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */
0x95, 0x32, 0x01, 0x00, 0x06, 0x79, 0x00, 0x06, 0x79, 'K','E','Y','_','A','r','a','b','i','c','_','t','t','e','h',0, /* 16944, 0x1000679, U+0679, KEY_Arabic_tteh, ARABIC LETTER TTEH */
0x4a, 0x3a, 0x01, 0x00, 0x06, 0x7e, 0x00, 0x06, 0x7e, 'K','E','Y','_','A','r','a','b','i','c','_','p','e','h',0, /* 16968, 0x100067e, U+067e, KEY_Arabic_peh, ARABIC LETTER PEH */
0x2a, 0x4a, 0x01, 0x00, 0x06, 0x86, 0x00, 0x06, 0x86, 'K','E','Y','_','A','r','a','b','i','c','_','t','c','h','e','h',0, /* 16994, 0x1000686, U+0686, KEY_Arabic_tcheh, ARABIC LETTER TCHEH */
0x94, 0x6e, 0x01, 0x00, 0x06, 0x88, 0x00, 0x06, 0x88, 'K','E','Y','_','A','r','a','b','i','c','_','d','d','a','l',0, /* 17019, 0x1000688, U+0688, KEY_Arabic_ddal, ARABIC LETTER DDAL */
0x95, 0x1a, 0x01, 0x00, 0x06, 0x91, 0x00, 0x06, 0x91, 'K','E','Y','_','A','r','a','b','i','c','_','r','r','e','h',0, /* 17044, 0x1000691, U+0691, KEY_Arabic_rreh, ARABIC LETTER RREH */
0x29, 0xb7, 0x00, 0x00, 0x05, 0xac, 0x00, 0x06, 0x0c, 'K','E','Y','_','A','r','a','b','i','c','_','c','o','m','m','a',0, /* 17070, 0x5ac, U+060c, KEY_Arabic_comma, ARABIC COMMA */
0x54, 0x36, 0x01, 0x00, 0x06, 0xd4, 0x00, 0x06, 0xd4, 'K','E','Y','_','A','r','a','b','i','c','_','f','u','l','l','s','t','o','p',0, /* 17099, 0x10006d4, U+06d4, KEY_Arabic_fullstop, ARABIC FULL STOP */
0xd2, 0x02, 0x01, 0x00, 0x06, 0x60, 0x00, 0x06, 0x60, 'K','E','Y','_','A','r','a','b','i','c','_','0',0, /* 17121, 0x1000660, U+0660, KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */
0xd2, 0x03, 0x01, 0x00, 0x06, 0x61, 0x00, 0x06, 0x61, 'K','E','Y','_','A','r','a','b','i','c','_','1',0, /* 17143, 0x1000661, U+0661, KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */
0xd2, 0x04, 0x01, 0x00, 0x06, 0x62, 0x00, 0x06, 0x62, 'K','E','Y','_','A','r','a','b','i','c','_','2',0, /* 17165, 0x1000662, U+0662, KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */
0xd2, 0x05, 0x01, 0x00, 0x06, 0x63, 0x00, 0x06, 0x63, 'K','E','Y','_','A','r','a','b','i','c','_','3',0, /* 17187, 0x1000663, U+0663, KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */
0xd2, 0x06, 0x01, 0x00, 0x06, 0x64, 0x00, 0x06, 0x64, 'K','E','Y','_','A','r','a','b','i','c','_','4',0, /* 17209, 0x1000664, U+0664, KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */
0xd2, 0x07, 0x01, 0x00, 0x06, 0x65, 0x00, 0x06, 0x65, 'K','E','Y','_','A','r','a','b','i','c','_','5',0, /* 17231, 0x1000665, U+0665, KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */
0xd2, 0x08, 0x01, 0x00, 0x06, 0x66, 0x00, 0x06, 0x66, 'K','E','Y','_','A','r','a','b','i','c','_','6',0, /* 17253, 0x1000666, U+0666, KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */
0xd2, 0x09, 0x01, 0x00, 0x06, 0x67, 0x00, 0x06, 0x67, 'K','E','Y','_','A','r','a','b','i','c','_','7',0, /* 17275, 0x1000667, U+0667, KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */
0xd2, 0x0a, 0x01, 0x00, 0x06, 0x68, 0x00, 0x06, 0x68, 'K','E','Y','_','A','r','a','b','i','c','_','8',0, /* 17297, 0x1000668, U+0668, KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */
0xd2, 0x0b, 0x01, 0x00, 0x06, 0x69, 0x00, 0x06, 0x69, 'K','E','Y','_','A','r','a','b','i','c','_','9',0, /* 17319, 0x1000669, U+0669, KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */
0xac, 0x84, 0x00, 0x00, 0x05, 0xbb, 0x00, 0x06, 0x1b, 'K','E','Y','_','A','r','a','b','i','c','_','s','e','m','i','c','o','l','o','n',0, /* 17349, 0x5bb, U+061b, KEY_Arabic_semicolon, ARABIC SEMICOLON */
0x30, 0x2b, 0x00, 0x00, 0x05, 0xbf, 0x00, 0x06, 0x1f, 'K','E','Y','_','A','r','a','b','i','c','_','q','u','e','s','t','i','o','n','_','m','a','r','k',0, /* 17383, 0x5bf, U+061f, KEY_Arabic_question_mark, ARABIC QUESTION MARK */
0x29, 0xb1, 0x00, 0x00, 0x05, 0xc1, 0x00, 0x06, 0x21, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a',0, /* 17409, 0x5c1, U+0621, KEY_Arabic_hamza, ARABIC LETTER HAMZA */
0x86, 0xe8, 0x00, 0x00, 0x05, 0xc2, 0x00, 0x06, 0x22, 'K','E','Y','_','A','r','a','b','i','c','_','m','a','d','d','a','o','n','a','l','e','f',0, /* 17441, 0x5c2, U+0622, KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */
0x86, 0xe8, 0x00, 0x00, 0x05, 0xc3, 0x00, 0x06, 0x23, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','o','n','a','l','e','f',0, /* 17473, 0x5c3, U+0623, KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */
0x43, 0x95, 0x00, 0x00, 0x05, 0xc4, 0x00, 0x06, 0x24, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','o','n','w','a','w',0, /* 17504, 0x5c4, U+0624, KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */
0x40, 0xa8, 0x00, 0x00, 0x05, 0xc5, 0x00, 0x06, 0x25, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','u','n','d','e','r','a','l','e','f',0, /* 17539, 0x5c5, U+0625, KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */
0x43, 0x96, 0x00, 0x00, 0x05, 0xc6, 0x00, 0x06, 0x26, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','o','n','y','e','h',0, /* 17570, 0x5c6, U+0626, KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */
0x94, 0x78, 0x00, 0x00, 0x05, 0xc7, 0x00, 0x06, 0x27, 'K','E','Y','_','A','r','a','b','i','c','_','a','l','e','f',0, /* 17595, 0x5c7, U+0627, KEY_Arabic_alef, ARABIC LETTER ALEF */
0x4a, 0x02, 0x00, 0x00, 0x05, 0xc8, 0x00, 0x06, 0x28, 'K','E','Y','_','A','r','a','b','i','c','_','b','e','h',0, /* 17619, 0x5c8, U+0628, KEY_Arabic_beh, ARABIC LETTER BEH */
0x59, 0xad, 0x00, 0x00, 0x05, 0xc9, 0x00, 0x06, 0x29, 'K','E','Y','_','A','r','a','b','i','c','_','t','e','h','m','a','r','b','u','t','a',0, /* 17650, 0x5c9, U+0629, KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */
0x4a, 0x4a, 0x00, 0x00, 0x05, 0xca, 0x00, 0x06, 0x2a, 'K','E','Y','_','A','r','a','b','i','c','_','t','e','h',0, /* 17674, 0x5ca, U+062a, KEY_Arabic_teh, ARABIC LETTER TEH */
0x95, 0x02, 0x00, 0x00, 0x05, 0xcb, 0x00, 0x06, 0x2b, 'K','E','Y','_','A','r','a','b','i','c','_','t','h','e','h',0, /* 17699, 0x5cb, U+062b, KEY_Arabic_theh, ARABIC LETTER THEH */
0x94, 0xab, 0x00, 0x00, 0x05, 0xcc, 0x00, 0x06, 0x2c, 'K','E','Y','_','A','r','a','b','i','c','_','j','e','e','m',0, /* 17724, 0x5cc, U+062c, KEY_Arabic_jeem, ARABIC LETTER JEEM */
0x4a, 0x12, 0x00, 0x00, 0x05, 0xcd, 0x00, 0x06, 0x2d, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','h',0, /* 17748, 0x5cd, U+062d, KEY_Arabic_hah, ARABIC LETTER HAH */
0x94, 0xb2, 0x00, 0x00, 0x05, 0xce, 0x00, 0x06, 0x2e, 'K','E','Y','_','A','r','a','b','i','c','_','k','h','a','h',0, /* 17773, 0x5ce, U+062e, KEY_Arabic_khah, ARABIC LETTER KHAH */
0x4a, 0x06, 0x00, 0x00, 0x05, 0xcf, 0x00, 0x06, 0x2f, 'K','E','Y','_','A','r','a','b','i','c','_','d','a','l',0, /* 17797, 0x5cf, U+062f, KEY_Arabic_dal, ARABIC LETTER DAL */
0x94, 0xfe, 0x00, 0x00, 0x05, 0xd0, 0x00, 0x06, 0x30, 'K','E','Y','_','A','r','a','b','i','c','_','t','h','a','l',0, /* 17822, 0x5d0, U+0630, KEY_Arabic_thal, ARABIC LETTER THAL */
0xa4, 0xe9, 0x00, 0x00, 0x05, 0xd1, 0x00, 0x06, 0x31, 'K','E','Y','_','A','r','a','b','i','c','_','r','a',0, /* 17845, 0x5d1, U+0631, KEY_Arabic_ra, ARABIC LETTER REH */
0x95, 0x24, 0x00, 0x00, 0x05, 0xd2, 0x00, 0x06, 0x32, 'K','E','Y','_','A','r','a','b','i','c','_','z','a','i','n',0, /* 17870, 0x5d2, U+0632, KEY_Arabic_zain, ARABIC LETTER ZAIN */
0x94, 0xf4, 0x00, 0x00, 0x05, 0xd3, 0x00, 0x06, 0x33, 'K','E','Y','_','A','r','a','b','i','c','_','s','e','e','n',0, /* 17895, 0x5d3, U+0633, KEY_Arabic_seen, ARABIC LETTER SEEN */
0x2a, 0x5c, 0x00, 0x00, 0x05, 0xd4, 0x00, 0x06, 0x34, 'K','E','Y','_','A','r','a','b','i','c','_','s','h','e','e','n',0, /* 17921, 0x5d4, U+0634, KEY_Arabic_sheen, ARABIC LETTER SHEEN */
0x4a, 0x3a, 0x00, 0x00, 0x05, 0xd5, 0x00, 0x06, 0x35, 'K','E','Y','_','A','r','a','b','i','c','_','s','a','d',0, /* 17945, 0x5d5, U+0635, KEY_Arabic_sad, ARABIC LETTER SAD */
0x49, 0xfe, 0x00, 0x00, 0x05, 0xd6, 0x00, 0x06, 0x36, 'K','E','Y','_','A','r','a','b','i','c','_','d','a','d',0, /* 17969, 0x5d6, U+0636, KEY_Arabic_dad, ARABIC LETTER DAD */
0x4a, 0x42, 0x00, 0x00, 0x05, 0xd7, 0x00, 0x06, 0x37, 'K','E','Y','_','A','r','a','b','i','c','_','t','a','h',0, /* 17993, 0x5d7, U+0637, KEY_Arabic_tah, ARABIC LETTER TAH */
0x4a, 0x5a, 0x00, 0x00, 0x05, 0xd8, 0x00, 0x06, 0x38, 'K','E','Y','_','A','r','a','b','i','c','_','z','a','h',0, /* 18017, 0x5d8, U+0638, KEY_Arabic_zah, ARABIC LETTER ZAH */
0x4a, 0x0c, 0x00, 0x00, 0x05, 0xd9, 0x00, 0x06, 0x39, 'K','E','Y','_','A','r','a','b','i','c','_','a','i','n',0, /* 18041, 0x5d9, U+0639, KEY_Arabic_ain, ARABIC LETTER AIN */
0x29, 0x94, 0x00, 0x00, 0x05, 0xda, 0x00, 0x06, 0x3a, 'K','E','Y','_','A','r','a','b','i','c','_','g','h','a','i','n',0, /* 18067, 0x5da, U+063a, KEY_Arabic_ghain, ARABIC LETTER GHAIN */
0xab, 0x62, 0x00, 0x00, 0x05, 0xe0, 0x00, 0x06, 0x40, 'K','E','Y','_','A','r','a','b','i','c','_','t','a','t','w','e','e','l',0, /* 18095, 0x5e0, U+0640, KEY_Arabic_tatweel, ARABIC TATWEEL */
0x4a, 0x12, 0x00, 0x00, 0x05, 0xe1, 0x00, 0x06, 0x41, 'K','E','Y','_','A','r','a','b','i','c','_','f','e','h',0, /* 18119, 0x5e1, U+0641, KEY_Arabic_feh, ARABIC LETTER FEH */
0x4a, 0x34, 0x00, 0x00, 0x05, 0xe2, 0x00, 0x06, 0x42, 'K','E','Y','_','A','r','a','b','i','c','_','q','a','f',0, /* 18143, 0x5e2, U+0642, KEY_Arabic_qaf, ARABIC LETTER QAF */
0x4a, 0x1c, 0x00, 0x00, 0x05, 0xe3, 0x00, 0x06, 0x43, 'K','E','Y','_','A','r','a','b','i','c','_','k','a','f',0, /* 18167, 0x5e3, U+0643, KEY_Arabic_kaf, ARABIC LETTER KAF */
0x4a, 0x27, 0x00, 0x00, 0x05, 0xe4, 0x00, 0x06, 0x44, 'K','E','Y','_','A','r','a','b','i','c','_','l','a','m',0, /* 18191, 0x5e4, U+0644, KEY_Arabic_lam, ARABIC LETTER LAM */
0x94, 0xc3, 0x00, 0x00, 0x05, 0xe5, 0x00, 0x06, 0x45, 'K','E','Y','_','A','r','a','b','i','c','_','m','e','e','m',0, /* 18216, 0x5e5, U+0645, KEY_Arabic_meem, ARABIC LETTER MEEM */
0x95, 0x08, 0x00, 0x00, 0x05, 0xe6, 0x00, 0x06, 0x46, 'K','E','Y','_','A','r','a','b','i','c','_','n','o','o','n',0, /* 18241, 0x5e6, U+0646, KEY_Arabic_noon, ARABIC LETTER NOON */
0xa4, 0xd5, 0x00, 0x00, 0x05, 0xe7, 0x00, 0x06, 0x47, 'K','E','Y','_','A','r','a','b','i','c','_','h','a',0, /* 18264, 0x5e7, U+0647, KEY_Arabic_ha, ARABIC LETTER HEH */
0x4a, 0x1a, 0x00, 0x00, 0x05, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','A','r','a','b','i','c','_','h','e','h',0, /* 18288, 0x5e7, KEY_Arabic_heh, deprecated */
0x4a, 0x5d, 0x00, 0x00, 0x05, 0xe8, 0x00, 0x06, 0x48, 'K','E','Y','_','A','r','a','b','i','c','_','w','a','w',0, /* 18312, 0x5e8, U+0648, KEY_Arabic_waw, ARABIC LETTER WAW */
0x70, 0xc1, 0x00, 0x00, 0x05, 0xe9, 0x00, 0x06, 0x49, 'K','E','Y','_','A','r','a','b','i','c','_','a','l','e','f','m','a','k','s','u','r','a',0, /* 18344, 0x5e9, U+0649, KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */
0x4a, 0x5e, 0x00, 0x00, 0x05, 0xea, 0x00, 0x06, 0x4a, 'K','E','Y','_','A','r','a','b','i','c','_','y','e','h',0, /* 18368, 0x5ea, U+064a, KEY_Arabic_yeh, ARABIC LETTER YEH */
0x4f, 0x48, 0x00, 0x00, 0x05, 0xeb, 0x00, 0x06, 0x4b, 'K','E','Y','_','A','r','a','b','i','c','_','f','a','t','h','a','t','a','n',0, /* 18397, 0x5eb, U+064b, KEY_Arabic_fathatan, ARABIC FATHATAN */
0x4d, 0xb8, 0x00, 0x00, 0x05, 0xec, 0x00, 0x06, 0x4c, 'K','E','Y','_','A','r','a','b','i','c','_','d','a','m','m','a','t','a','n',0, /* 18426, 0x5ec, U+064c, KEY_Arabic_dammatan, ARABIC DAMMATAN */
0x52, 0x48, 0x00, 0x00, 0x05, 0xed, 0x00, 0x06, 0x4d, 'K','E','Y','_','A','r','a','b','i','c','_','k','a','s','r','a','t','a','n',0, /* 18455, 0x5ed, U+064d, KEY_Arabic_kasratan, ARABIC KASRATAN */
0x29, 0x89, 0x00, 0x00, 0x05, 0xee, 0x00, 0x06, 0x4e, 'K','E','Y','_','A','r','a','b','i','c','_','f','a','t','h','a',0, /* 18481, 0x5ee, U+064e, KEY_Arabic_fatha, ARABIC FATHA */
0x29, 0x57, 0x00, 0x00, 0x05, 0xef, 0x00, 0x06, 0x4f, 'K','E','Y','_','A','r','a','b','i','c','_','d','a','m','m','a',0, /* 18507, 0x5ef, U+064f, KEY_Arabic_damma, ARABIC DAMMA */
0x29, 0xe9, 0x00, 0x00, 0x05, 0xf0, 0x00, 0x06, 0x50, 'K','E','Y','_','A','r','a','b','i','c','_','k','a','s','r','a',0, /* 18533, 0x5f0, U+0650, KEY_Arabic_kasra, ARABIC KASRA */
0x54, 0xe1, 0x00, 0x00, 0x05, 0xf1, 0x00, 0x06, 0x51, 'K','E','Y','_','A','r','a','b','i','c','_','s','h','a','d','d','a',0, /* 18560, 0x5f1, U+0651, KEY_Arabic_shadda, ARABIC SHADDA */
0x2a, 0xfc, 0x00, 0x00, 0x05, 0xf2, 0x00, 0x06, 0x52, 'K','E','Y','_','A','r','a','b','i','c','_','s','u','k','u','n',0, /* 18586, 0x5f2, U+0652, KEY_Arabic_sukun, ARABIC SUKUN */
0x84, 0x4d, 0x01, 0x00, 0x06, 0x53, 0x00, 0x06, 0x53, 'K','E','Y','_','A','r','a','b','i','c','_','m','a','d','d','a','_','a','b','o','v','e',0, /* 18618, 0x1000653, U+0653, KEY_Arabic_madda_above, ARABIC MADDAH ABOVE */
0x84, 0x4d, 0x01, 0x00, 0x06, 0x54, 0x00, 0x06, 0x54, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','_','a','b','o','v','e',0, /* 18650, 0x1000654, U+0654, KEY_Arabic_hamza_above, ARABIC HAMZA ABOVE */
0x84, 0x6d, 0x01, 0x00, 0x06, 0x55, 0x00, 0x06, 0x55, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','_','b','e','l','o','w',0, /* 18682, 0x1000655, U+0655, KEY_Arabic_hamza_below, ARABIC HAMZA BELOW */
0x4a, 0x22, 0x01, 0x00, 0x06, 0x98, 0x00, 0x06, 0x98, 'K','E','Y','_','A','r','a','b','i','c','_','j','e','h',0, /* 18706, 0x1000698, U+0698, KEY_Arabic_jeh, ARABIC LETTER JEH */
0x4a, 0x52, 0x01, 0x00, 0x06, 0xa4, 0x00, 0x06, 0xa4, 'K','E','Y','_','A','r','a','b','i','c','_','v','e','h',0, /* 18730, 0x10006a4, U+06a4, KEY_Arabic_veh, ARABIC LETTER VEH */
0x29, 0xca, 0x01, 0x00, 0x06, 0xa9, 0x00, 0x06, 0xa9, 'K','E','Y','_','A','r','a','b','i','c','_','k','e','h','e','h',0, /* 18756, 0x10006a9, U+06a9, KEY_Arabic_keheh, ARABIC LETTER KEHEH */
0x4a, 0x0c, 0x01, 0x00, 0x06, 0xaf, 0x00, 0x06, 0xaf, 'K','E','Y','_','A','r','a','b','i','c','_','g','a','f',0, /* 18780, 0x10006af, U+06af, KEY_Arabic_gaf, ARABIC LETTER GAF */
0xb5, 0xbd, 0x01, 0x00, 0x06, 0xba, 0x00, 0x06, 0xba, 'K','E','Y','_','A','r','a','b','i','c','_','n','o','o','n','_','g','h','u','n','n','a',0, /* 18812, 0x10006ba, U+06ba, KEY_Arabic_noon_ghunna, ARABIC LETTER NOON GHUNNA */
0xcb, 0xf3, 0x01, 0x00, 0x06, 0xbe, 0x00, 0x06, 0xbe, 'K','E','Y','_','A','r','a','b','i','c','_','h','e','h','_','d','o','a','c','h','a','s','h','m','e','e',0, /* 18848, 0x10006be, U+06be, KEY_Arabic_heh_doachashmee, ARABIC LETTER HEH DOACHASHMEE */
0xa7, 0xfe, 0x01, 0x00, 0x06, 0xcc, 0x00, 0x06, 0xcc, 'K','E','Y','_','F','a','r','s','i','_','y','e','h',0, /* 18871, 0x10006cc, U+06cc, KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */
0x9f, 0xfe, 0x01, 0x00, 0x06, 0xcc, 0x00, 0x06, 0xcc, 'K','E','Y','_','A','r','a','b','i','c','_','f','a','r','s','i','_','y','e','h',0, /* 18901, 0x10006cc, U+06cc, KEY_Arabic_farsi_yeh, ARABIC LETTER FARSI YEH */
0xaf, 0x7f, 0x01, 0x00, 0x06, 0xd2, 0x00, 0x06, 0xd2, 'K','E','Y','_','A','r','a','b','i','c','_','y','e','h','_','b','a','r','e','e',0, /* 18931, 0x10006d2, U+06d2, KEY_Arabic_yeh_baree, ARABIC LETTER YEH BARREE */
0x4f, 0x52, 0x01, 0x00, 0x06, 0xc1, 0x00, 0x06, 0xc1, 'K','E','Y','_','A','r','a','b','i','c','_','h','e','h','_','g','o','a','l',0, /* 18960, 0x10006c1, U+06c1, KEY_Arabic_heh_goal, ARABIC LETTER HEH GOAL */
0x56, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','A','r','a','b','i','c','_','s','w','i','t','c','h',0, /* 18987, 0xff7e, KEY_Arabic_switch, Alias for mode_switch */
0x29, 0x44, 0x01, 0x00, 0x04, 0x92, 0x00, 0x04, 0x92, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','G','H','E','_','b','a','r',0, /* 19017, 0x1000492, U+0492, KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */
0x37, 0x44, 0x01, 0x00, 0x04, 0x93, 0x00, 0x04, 0x93, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','g','h','e','_','b','a','r',0, /* 19047, 0x1000493, U+0493, KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */
0x9e, 0x2c, 0x01, 0x00, 0x04, 0x96, 0x00, 0x04, 0x96, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Z','H','E','_','d','e','s','c','e','n','d','e','r',0, /* 19083, 0x1000496, U+0496, KEY_Cyrillic_ZHE_descender, CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
0x1e, 0x2c, 0x01, 0x00, 0x04, 0x97, 0x00, 0x04, 0x97, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','z','h','e','_','d','e','s','c','e','n','d','e','r',0, /* 19119, 0x1000497, U+0497, KEY_Cyrillic_zhe_descender, CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
0x76, 0x2c, 0x01, 0x00, 0x04, 0x9a, 0x00, 0x04, 0x9a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','K','A','_','d','e','s','c','e','n','d','e','r',0, /* 19154, 0x100049a, U+049a, KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
0xf6, 0x2c, 0x01, 0x00, 0x04, 0x9b, 0x00, 0x04, 0x9b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','k','a','_','d','e','s','c','e','n','d','e','r',0, /* 19189, 0x100049b, U+049b, KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */
0x17, 0x27, 0x01, 0x00, 0x04, 0x9c, 0x00, 0x04, 0x9c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','K','A','_','v','e','r','t','s','t','r','o','k','e',0, /* 19225, 0x100049c, U+049c, KEY_Cyrillic_KA_vertstroke, CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
0x17, 0x27, 0x01, 0x00, 0x04, 0x9d, 0x00, 0x04, 0x9d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','k','a','_','v','e','r','t','s','t','r','o','k','e',0, /* 19261, 0x100049d, U+049d, KEY_Cyrillic_ka_vertstroke, CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
0x7a, 0x2c, 0x01, 0x00, 0x04, 0xa2, 0x00, 0x04, 0xa2, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','N','_','d','e','s','c','e','n','d','e','r',0, /* 19296, 0x10004a2, U+04a2, KEY_Cyrillic_EN_descender, CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
0xfa, 0x2c, 0x01, 0x00, 0x04, 0xa3, 0x00, 0x04, 0xa3, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','n','_','d','e','s','c','e','n','d','e','r',0, /* 19331, 0x10004a3, U+04a3, KEY_Cyrillic_en_descender, CYRILLIC SMALL LETTER EN WITH DESCENDER */
0x9d, 0xf8, 0x01, 0x00, 0x04, 0xae, 0x00, 0x04, 0xae, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','U','_','s','t','r','a','i','g','h','t',0, /* 19364, 0x10004ae, U+04ae, KEY_Cyrillic_U_straight, CYRILLIC CAPITAL LETTER STRAIGHT U */
0xdd, 0xf8, 0x01, 0x00, 0x04, 0xaf, 0x00, 0x04, 0xaf, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','u','_','s','t','r','a','i','g','h','t',0, /* 19397, 0x10004af, U+04af, KEY_Cyrillic_u_straight, CYRILLIC SMALL LETTER STRAIGHT U */
0xe5, 0x34, 0x01, 0x00, 0x04, 0xb0, 0x00, 0x04, 0xb0, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','U','_','s','t','r','a','i','g','h','t','_','b','a','r',0, /* 19434, 0x10004b0, U+04b0, KEY_Cyrillic_U_straight_bar, CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
0xe5, 0x34, 0x01, 0x00, 0x04, 0xb1, 0x00, 0x04, 0xb1, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','u','_','s','t','r','a','i','g','h','t','_','b','a','r',0, /* 19471, 0x10004b1, U+04b1, KEY_Cyrillic_u_straight_bar, CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
0x5e, 0x2c, 0x01, 0x00, 0x04, 0xb2, 0x00, 0x04, 0xb2, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','H','A','_','d','e','s','c','e','n','d','e','r',0, /* 19506, 0x10004b2, U+04b2, KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
0xde, 0x2c, 0x01, 0x00, 0x04, 0xb3, 0x00, 0x04, 0xb3, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','h','a','_','d','e','s','c','e','n','d','e','r',0, /* 19541, 0x10004b3, U+04b3, KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */
0x2e, 0x2c, 0x01, 0x00, 0x04, 0xb6, 0x00, 0x04, 0xb6, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','C','H','E','_','d','e','s','c','e','n','d','e','r',0, /* 19577, 0x10004b6, U+04b6, KEY_Cyrillic_CHE_descender, CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
0xae, 0x2c, 0x01, 0x00, 0x04, 0xb7, 0x00, 0x04, 0xb7, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','c','h','e','_','d','e','s','c','e','n','d','e','r',0, /* 19613, 0x10004b7, U+04b7, KEY_Cyrillic_che_descender, CYRILLIC SMALL LETTER CHE WITH DESCENDER */
0x87, 0x27, 0x01, 0x00, 0x04, 0xb8, 0x00, 0x04, 0xb8, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','C','H','E','_','v','e','r','t','s','t','r','o','k','e',0, /* 19650, 0x10004b8, U+04b8, KEY_Cyrillic_CHE_vertstroke, CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
0x87, 0x27, 0x01, 0x00, 0x04, 0xb9, 0x00, 0x04, 0xb9, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','c','h','e','_','v','e','r','t','s','t','r','o','k','e',0, /* 19687, 0x10004b9, U+04b9, KEY_Cyrillic_che_vertstroke, CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
0x05, 0x19, 0x01, 0x00, 0x04, 0xba, 0x00, 0x04, 0xba, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','H','H','A',0, /* 19714, 0x10004ba, U+04ba, KEY_Cyrillic_SHHA, CYRILLIC CAPITAL LETTER SHHA */
0x06, 0xf9, 0x01, 0x00, 0x04, 0xbb, 0x00, 0x04, 0xbb, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','h','h','a',0, /* 19741, 0x10004bb, U+04bb, KEY_Cyrillic_shha, CYRILLIC SMALL LETTER SHHA */
0x0a, 0x77, 0x01, 0x00, 0x04, 0xd8, 0x00, 0x04, 0xd8, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','C','H','W','A',0, /* 19769, 0x10004d8, U+04d8, KEY_Cyrillic_SCHWA, CYRILLIC CAPITAL LETTER SCHWA */
0x0e, 0x57, 0x01, 0x00, 0x04, 0xd9, 0x00, 0x04, 0xd9, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','c','h','w','a',0, /* 19797, 0x10004d9, U+04d9, KEY_Cyrillic_schwa, CYRILLIC SMALL LETTER SCHWA */
0x5f, 0x1c, 0x01, 0x00, 0x04, 0xe2, 0x00, 0x04, 0xe2, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','I','_','m','a','c','r','o','n',0, /* 19828, 0x10004e2, U+04e2, KEY_Cyrillic_I_macron, CYRILLIC CAPITAL LETTER I WITH MACRON */
0x6f, 0x1c, 0x01, 0x00, 0x04, 0xe3, 0x00, 0x04, 0xe3, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','i','_','m','a','c','r','o','n',0, /* 19859, 0x10004e3, U+04e3, KEY_Cyrillic_i_macron, CYRILLIC SMALL LETTER I WITH MACRON */
0x0b, 0xc4, 0x01, 0x00, 0x04, 0xe8, 0x00, 0x04, 0xe8, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','O','_','b','a','r',0, /* 19887, 0x10004e8, U+04e8, KEY_Cyrillic_O_bar, CYRILLIC CAPITAL LETTER BARRED O */
0x0d, 0xc4, 0x01, 0x00, 0x04, 0xe9, 0x00, 0x04, 0xe9, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','o','_','b','a','r',0, /* 19915, 0x10004e9, U+04e9, KEY_Cyrillic_o_bar, CYRILLIC SMALL LETTER BARRED O */
0x65, 0x1c, 0x01, 0x00, 0x04, 0xee, 0x00, 0x04, 0xee, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','U','_','m','a','c','r','o','n',0, /* 19946, 0x10004ee, U+04ee, KEY_Cyrillic_U_macron, CYRILLIC CAPITAL LETTER U WITH MACRON */
0x75, 0x1c, 0x01, 0x00, 0x04, 0xef, 0x00, 0x04, 0xef, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','u','_','m','a','c','r','o','n',0, /* 19977, 0x10004ef, U+04ef, KEY_Cyrillic_u_macron, CYRILLIC SMALL LETTER U WITH MACRON */
0xd4, 0x01, 0x00, 0x00, 0x06, 0xa1, 0x00, 0x04, 0x52, 'K','E','Y','_','S','e','r','b','i','a','n','_','d','j','e',0, /* 20002, 0x6a1, U+0452, KEY_Serbian_dje, CYRILLIC SMALL LETTER DJE */
0x9d, 0xfd, 0x00, 0x00, 0x06, 0xa2, 0x00, 0x04, 0x53, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','g','j','e',0, /* 20029, 0x6a2, U+0453, KEY_Macedonia_gje, CYRILLIC SMALL LETTER GJE */
0xc1, 0x65, 0x00, 0x00, 0x06, 0xa3, 0x00, 0x04, 0x51, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','i','o',0, /* 20054, 0x6a3, U+0451, KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */
0xd2, 0x53, 0x00, 0x00, 0x06, 0xa4, 0x00, 0x04, 0x54, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','i','e',0, /* 20080, 0x6a4, U+0454, KEY_Ukrainian_ie, CYRILLIC SMALL LETTER UKRAINIAN IE */
0xe9, 0x55, 0x00, 0x00, 0x06, 0xa4, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','j','e',0, /* 20105, 0x6a4, KEY_Ukranian_je, deprecated */
0x9e, 0x03, 0x00, 0x00, 0x06, 0xa5, 0x00, 0x04, 0x55, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','d','s','e',0, /* 20132, 0x6a5, U+0455, KEY_Macedonia_dse, CYRILLIC SMALL LETTER DZE */
0xe8, 0xf7, 0x00, 0x00, 0x06, 0xa6, 0x00, 0x04, 0x56, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','i',0, /* 20157, 0x6a6, U+0456, KEY_Ukrainian_i, CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
0x74, 0x77, 0x00, 0x00, 0x06, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','i',0, /* 20181, 0x6a6, KEY_Ukranian_i, deprecated */
0xd2, 0x77, 0x00, 0x00, 0x06, 0xa7, 0x00, 0x04, 0x57, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','y','i',0, /* 20207, 0x6a7, U+0457, KEY_Ukrainian_yi, CYRILLIC SMALL LETTER YI */
0xe9, 0x77, 0x00, 0x00, 0x06, 0xa7, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','y','i',0, /* 20232, 0x6a7, KEY_Ukranian_yi, deprecated */
0xc1, 0x5d, 0x00, 0x00, 0x06, 0xa8, 0x00, 0x04, 0x58, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','j','e',0, /* 20257, 0x6a8, U+0458, KEY_Cyrillic_je, CYRILLIC SMALL LETTER JE */
0x69, 0xd5, 0x00, 0x00, 0x06, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','j','e',0, /* 20281, 0x6a8, KEY_Serbian_je, deprecated */
0x83, 0x31, 0x00, 0x00, 0x06, 0xa9, 0x00, 0x04, 0x59, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','l','j','e',0, /* 20307, 0x6a9, U+0459, KEY_Cyrillic_lje, CYRILLIC SMALL LETTER LJE */
0xd4, 0x21, 0x00, 0x00, 0x06, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','l','j','e',0, /* 20332, 0x6a9, KEY_Serbian_lje, deprecated */
0x83, 0x39, 0x00, 0x00, 0x06, 0xaa, 0x00, 0x04, 0x5a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','n','j','e',0, /* 20358, 0x6aa, U+045a, KEY_Cyrillic_nje, CYRILLIC SMALL LETTER NJE */
0xd4, 0x29, 0x00, 0x00, 0x06, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','n','j','e',0, /* 20383, 0x6aa, KEY_Serbian_nje, deprecated */
0xa9, 0x11, 0x00, 0x00, 0x06, 0xab, 0x00, 0x04, 0x5b, 'K','E','Y','_','S','e','r','b','i','a','n','_','t','s','h','e',0, /* 20409, 0x6ab, U+045b, KEY_Serbian_tshe, CYRILLIC SMALL LETTER TSHE */
0x9e, 0x0d, 0x00, 0x00, 0x06, 0xac, 0x00, 0x04, 0x5c, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','k','j','e',0, /* 20436, 0x6ac, U+045c, KEY_Macedonia_kje, CYRILLIC SMALL LETTER KJE */
0x12, 0x26, 0x00, 0x00, 0x06, 0xad, 0x00, 0x04, 0x91, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','g','h','e','_','w','i','t','h','_','u','p','t','u','r','n',0, /* 20475, 0x6ad, U+0491, KEY_Ukrainian_ghe_with_upturn, CYRILLIC SMALL LETTER GHE WITH UPTURN */
0x51, 0x3d, 0x00, 0x00, 0x06, 0xae, 0x00, 0x04, 0x5e, 'K','E','Y','_','B','y','e','l','o','r','u','s','s','i','a','n','_','s','h','o','r','t','u',0, /* 20508, 0x6ae, U+045e, KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */
0x06, 0xcd, 0x00, 0x00, 0x06, 0xaf, 0x00, 0x04, 0x5f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','d','z','h','e',0, /* 20535, 0x6af, U+045f, KEY_Cyrillic_dzhe, CYRILLIC SMALL LETTER DZHE */
0xd4, 0x21, 0x00, 0x00, 0x06, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','d','z','e',0, /* 20560, 0x6af, KEY_Serbian_dze, deprecated */
0xb0, 0x68, 0x00, 0x00, 0x06, 0xb0, 0x00, 0x21, 0x16, 'K','E','Y','_','n','u','m','e','r','o','s','i','g','n',0, /* 20584, 0x6b0, U+2116, KEY_numerosign, NUMERO SIGN */
0xd3, 0x21, 0x00, 0x00, 0x06, 0xb1, 0x00, 0x04, 0x02, 'K','E','Y','_','S','e','r','b','i','a','n','_','D','J','E',0, /* 20609, 0x6b1, U+0402, KEY_Serbian_DJE, CYRILLIC CAPITAL LETTER DJE */
0x9d, 0x1d, 0x00, 0x00, 0x06, 0xb2, 0x00, 0x04, 0x03, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','G','J','E',0, /* 20636, 0x6b2, U+0403, KEY_Macedonia_GJE, CYRILLIC CAPITAL LETTER GJE */
0xc1, 0x05, 0x00, 0x00, 0x06, 0xb3, 0x00, 0x04, 0x01, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','I','O',0, /* 20661, 0x6b3, U+0401, KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */
0xd1, 0xf3, 0x00, 0x00, 0x06, 0xb4, 0x00, 0x04, 0x04, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','I','E',0, /* 20687, 0x6b4, U+0404, KEY_Ukrainian_IE, CYRILLIC CAPITAL LETTER UKRAINIAN IE */
0xe8, 0xf5, 0x00, 0x00, 0x06, 0xb4, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','J','E',0, /* 20712, 0x6b4, KEY_Ukranian_JE, deprecated */
0x9d, 0x23, 0x00, 0x00, 0x06, 0xb5, 0x00, 0x04, 0x05, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','D','S','E',0, /* 20739, 0x6b5, U+0405, KEY_Macedonia_DSE, CYRILLIC CAPITAL LETTER DZE */
0xe8, 0xd7, 0x00, 0x00, 0x06, 0xb6, 0x00, 0x04, 0x06, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','I',0, /* 20764, 0x6b6, U+0406, KEY_Ukrainian_I, CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
0x74, 0x57, 0x00, 0x00, 0x06, 0xb6, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','I',0, /* 20788, 0x6b6, KEY_Ukranian_I, deprecated */
0xd2, 0x17, 0x00, 0x00, 0x06, 0xb7, 0x00, 0x04, 0x07, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','Y','I',0, /* 20814, 0x6b7, U+0407, KEY_Ukrainian_YI, CYRILLIC CAPITAL LETTER YI */
0xe9, 0x17, 0x00, 0x00, 0x06, 0xb7, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','Y','I',0, /* 20839, 0x6b7, KEY_Ukranian_YI, deprecated */
0xc0, 0xfd, 0x00, 0x00, 0x06, 0xb8, 0x00, 0x04, 0x08, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','J','E',0, /* 20864, 0x6b8, U+0408, KEY_Cyrillic_JE, CYRILLIC CAPITAL LETTER JE */
0x69, 0x75, 0x00, 0x00, 0x06, 0xb8, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','J','E',0, /* 20888, 0x6b8, KEY_Serbian_JE, deprecated */
0x82, 0x51, 0x00, 0x00, 0x06, 0xb9, 0x00, 0x04, 0x09, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','L','J','E',0, /* 20914, 0x6b9, U+0409, KEY_Cyrillic_LJE, CYRILLIC CAPITAL LETTER LJE */
0xd3, 0x41, 0x00, 0x00, 0x06, 0xb9, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','L','J','E',0, /* 20939, 0x6b9, KEY_Serbian_LJE, deprecated */
0x82, 0x59, 0x00, 0x00, 0x06, 0xba, 0x00, 0x04, 0x0a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','N','J','E',0, /* 20965, 0x6ba, U+040a, KEY_Cyrillic_NJE, CYRILLIC CAPITAL LETTER NJE */
0xd3, 0x49, 0x00, 0x00, 0x06, 0xba, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','N','J','E',0, /* 20990, 0x6ba, KEY_Serbian_NJE, deprecated */
0xa7, 0x31, 0x00, 0x00, 0x06, 0xbb, 0x00, 0x04, 0x0b, 'K','E','Y','_','S','e','r','b','i','a','n','_','T','S','H','E',0, /* 21016, 0x6bb, U+040b, KEY_Serbian_TSHE, CYRILLIC CAPITAL LETTER TSHE */
0x9d, 0x2d, 0x00, 0x00, 0x06, 0xbc, 0x00, 0x04, 0x0c, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','K','J','E',0, /* 21043, 0x6bc, U+040c, KEY_Macedonia_KJE, CYRILLIC CAPITAL LETTER KJE */
0x1a, 0x46, 0x00, 0x00, 0x06, 0xbd, 0x00, 0x04, 0x90, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','G','H','E','_','W','I','T','H','_','U','P','T','U','R','N',0, /* 21082, 0x6bd, U+0490, KEY_Ukrainian_GHE_WITH_UPTURN, CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
0x49, 0x5d, 0x00, 0x00, 0x06, 0xbe, 0x00, 0x04, 0x0e, 'K','E','Y','_','B','y','e','l','o','r','u','s','s','i','a','n','_','S','H','O','R','T','U',0, /* 21115, 0x6be, U+040e, KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */
0x04, 0xed, 0x00, 0x00, 0x06, 0xbf, 0x00, 0x04, 0x0f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','D','Z','H','E',0, /* 21142, 0x6bf, U+040f, KEY_Cyrillic_DZHE, CYRILLIC CAPITAL LETTER DZHE */
0xd3, 0x41, 0x00, 0x00, 0x06, 0xbf, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','D','Z','E',0, /* 21167, 0x6bf, KEY_Serbian_DZE, deprecated */
0xc1, 0x8b, 0x00, 0x00, 0x06, 0xc0, 0x00, 0x04, 0x4e, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','y','u',0, /* 21192, 0x6c0, U+044e, KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */
0x60, 0x73, 0x00, 0x00, 0x06, 0xc1, 0x00, 0x04, 0x30, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','a',0, /* 21216, 0x6c1, U+0430, KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */
0xc1, 0x4d, 0x00, 0x00, 0x06, 0xc2, 0x00, 0x04, 0x31, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','b','e',0, /* 21241, 0x6c2, U+0431, KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */
0x83, 0x63, 0x00, 0x00, 0x06, 0xc3, 0x00, 0x04, 0x46, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','t','s','e',0, /* 21267, 0x6c3, U+0446, KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */
0xc1, 0x51, 0x00, 0x00, 0x06, 0xc4, 0x00, 0x04, 0x34, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','d','e',0, /* 21292, 0x6c4, U+0434, KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */
0xc1, 0x5b, 0x00, 0x00, 0x06, 0xc5, 0x00, 0x04, 0x35, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','i','e',0, /* 21317, 0x6c5, U+0435, KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */
0xc1, 0x54, 0x00, 0x00, 0x06, 0xc6, 0x00, 0x04, 0x44, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','f',0, /* 21342, 0x6c6, U+0444, KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */
0x83, 0x19, 0x00, 0x00, 0x06, 0xc7, 0x00, 0x04, 0x33, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','g','h','e',0, /* 21368, 0x6c7, U+0433, KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */
0xc1, 0x55, 0x00, 0x00, 0x06, 0xc8, 0x00, 0x04, 0x45, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','h','a',0, /* 21393, 0x6c8, U+0445, KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */
0x60, 0x7b, 0x00, 0x00, 0x06, 0xc9, 0x00, 0x04, 0x38, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','i',0, /* 21417, 0x6c9, U+0438, KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */
0x1d, 0xb1, 0x00, 0x00, 0x06, 0xca, 0x00, 0x04, 0x39, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','h','o','r','t','i',0, /* 21446, 0x6ca, U+0439, KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */
0xc1, 0x5b, 0x00, 0x00, 0x06, 0xcb, 0x00, 0x04, 0x3a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','k','a',0, /* 21471, 0x6cb, U+043a, KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */
0xc1, 0x5a, 0x00, 0x00, 0x06, 0xcc, 0x00, 0x04, 0x3b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','l',0, /* 21496, 0x6cc, U+043b, KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */
0xc1, 0x5b, 0x00, 0x00, 0x06, 0xcd, 0x00, 0x04, 0x3c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','m',0, /* 21521, 0x6cd, U+043c, KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */
0xc1, 0x5c, 0x00, 0x00, 0x06, 0xce, 0x00, 0x04, 0x3d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','n',0, /* 21546, 0x6ce, U+043d, KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */
0x60, 0x81, 0x00, 0x00, 0x06, 0xcf, 0x00, 0x04, 0x3e, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','o',0, /* 21570, 0x6cf, U+043e, KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */
0xc1, 0x69, 0x00, 0x00, 0x06, 0xd0, 0x00, 0x04, 0x3f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','p','e',0, /* 21595, 0x6d0, U+043f, KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */
0xc1, 0x77, 0x00, 0x00, 0x06, 0xd1, 0x00, 0x04, 0x4f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','y','a',0, /* 21620, 0x6d1, U+044f, KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */
0xc1, 0x60, 0x00, 0x00, 0x06, 0xd2, 0x00, 0x04, 0x40, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','r',0, /* 21645, 0x6d2, U+0440, KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */
0xc1, 0x61, 0x00, 0x00, 0x06, 0xd3, 0x00, 0x04, 0x41, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','s',0, /* 21670, 0x6d3, U+0441, KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */
0xc1, 0x71, 0x00, 0x00, 0x06, 0xd4, 0x00, 0x04, 0x42, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','t','e',0, /* 21695, 0x6d4, U+0442, KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */
0x60, 0x87, 0x00, 0x00, 0x06, 0xd5, 0x00, 0x04, 0x43, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','u',0, /* 21719, 0x6d5, U+0443, KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */
0x83, 0x65, 0x00, 0x00, 0x06, 0xd6, 0x00, 0x04, 0x36, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','z','h','e',0, /* 21745, 0x6d6, U+0436, KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */
0xc1, 0x75, 0x00, 0x00, 0x06, 0xd7, 0x00, 0x04, 0x32, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','v','e',0, /* 21770, 0x6d7, U+0432, KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */
0x78, 0xb8, 0x00, 0x00, 0x06, 0xd8, 0x00, 0x04, 0x4c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','o','f','t','s','i','g','n',0, /* 21801, 0x6d8, U+044c, KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */
0x07, 0x45, 0x00, 0x00, 0x06, 0xd9, 0x00, 0x04, 0x4b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','y','e','r','u',0, /* 21828, 0x6d9, U+044b, KEY_Cyrillic_yeru, CYRILLIC SMALL LETTER YERU */
0xc1, 0x7d, 0x00, 0x00, 0x06, 0xda, 0x00, 0x04, 0x37, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','z','e',0, /* 21853, 0x6da, U+0437, KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */
0x83, 0x45, 0x00, 0x00, 0x06, 0xdb, 0x00, 0x04, 0x48, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','h','a',0, /* 21879, 0x6db, U+0448, KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */
0x60, 0x77, 0x00, 0x00, 0x06, 0xdc, 0x00, 0x04, 0x4d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e',0, /* 21903, 0x6dc, U+044d, KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */
0x0e, 0x4d, 0x00, 0x00, 0x06, 0xdd, 0x00, 0x04, 0x49, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','h','c','h','a',0, /* 21931, 0x6dd, U+0449, KEY_Cyrillic_shcha, CYRILLIC SMALL LETTER SHCHA */
0x83, 0x09, 0x00, 0x00, 0x06, 0xde, 0x00, 0x04, 0x47, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','c','h','e',0, /* 21957, 0x6de, U+0447, KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */
0x70, 0x38, 0x00, 0x00, 0x06, 0xdf, 0x00, 0x04, 0x4a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','h','a','r','d','s','i','g','n',0, /* 21988, 0x6df, U+044a, KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */
0xc1, 0x2b, 0x00, 0x00, 0x06, 0xe0, 0x00, 0x04, 0x2e, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Y','U',0, /* 22013, 0x6e0, U+042e, KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */
0x60, 0x53, 0x00, 0x00, 0x06, 0xe1, 0x00, 0x04, 0x10, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','A',0, /* 22037, 0x6e1, U+0410, KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */
0xc0, 0xed, 0x00, 0x00, 0x06, 0xe2, 0x00, 0x04, 0x11, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','B','E',0, /* 22062, 0x6e2, U+0411, KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */
0x82, 0x83, 0x00, 0x00, 0x06, 0xe3, 0x00, 0x04, 0x26, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','T','S','E',0, /* 22088, 0x6e3, U+0426, KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */
0xc0, 0xf1, 0x00, 0x00, 0x06, 0xe4, 0x00, 0x04, 0x14, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','D','E',0, /* 22113, 0x6e4, U+0414, KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */
0xc0, 0xfb, 0x00, 0x00, 0x06, 0xe5, 0x00, 0x04, 0x15, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','I','E',0, /* 22138, 0x6e5, U+0415, KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */
0xc0, 0xf4, 0x00, 0x00, 0x06, 0xe6, 0x00, 0x04, 0x24, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','F',0, /* 22163, 0x6e6, U+0424, KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */
0x82, 0x39, 0x00, 0x00, 0x06, 0xe7, 0x00, 0x04, 0x13, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','G','H','E',0, /* 22189, 0x6e7, U+0413, KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */
0xc0, 0xf5, 0x00, 0x00, 0x06, 0xe8, 0x00, 0x04, 0x25, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','H','A',0, /* 22214, 0x6e8, U+0425, KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */
0x60, 0x5b, 0x00, 0x00, 0x06, 0xe9, 0x00, 0x04, 0x18, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','I',0, /* 22238, 0x6e9, U+0418, KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */
0x15, 0xd1, 0x00, 0x00, 0x06, 0xea, 0x00, 0x04, 0x19, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','H','O','R','T','I',0, /* 22267, 0x6ea, U+0419, KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */
0xc0, 0xfb, 0x00, 0x00, 0x06, 0xeb, 0x00, 0x04, 0x1a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','K','A',0, /* 22292, 0x6eb, U+041a, KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */
0xc0, 0xfa, 0x00, 0x00, 0x06, 0xec, 0x00, 0x04, 0x1b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','L',0, /* 22317, 0x6ec, U+041b, KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */
0xc0, 0xfb, 0x00, 0x00, 0x06, 0xed, 0x00, 0x04, 0x1c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','M',0, /* 22342, 0x6ed, U+041c, KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */
0xc0, 0xfc, 0x00, 0x00, 0x06, 0xee, 0x00, 0x04, 0x1d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','N',0, /* 22367, 0x6ee, U+041d, KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */
0x60, 0x61, 0x00, 0x00, 0x06, 0xef, 0x00, 0x04, 0x1e, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','O',0, /* 22391, 0x6ef, U+041e, KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */
0xc1, 0x09, 0x00, 0x00, 0x06, 0xf0, 0x00, 0x04, 0x1f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','P','E',0, /* 22416, 0x6f0, U+041f, KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */
0xc1, 0x17, 0x00, 0x00, 0x06, 0xf1, 0x00, 0x04, 0x2f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Y','A',0, /* 22441, 0x6f1, U+042f, KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */
0xc1, 0x00, 0x00, 0x00, 0x06, 0xf2, 0x00, 0x04, 0x20, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','R',0, /* 22466, 0x6f2, U+0420, KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */
0xc1, 0x01, 0x00, 0x00, 0x06, 0xf3, 0x00, 0x04, 0x21, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','S',0, /* 22491, 0x6f3, U+0421, KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */
0xc1, 0x11, 0x00, 0x00, 0x06, 0xf4, 0x00, 0x04, 0x22, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','T','E',0, /* 22516, 0x6f4, U+0422, KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */
0x60, 0x67, 0x00, 0x00, 0x06, 0xf5, 0x00, 0x04, 0x23, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','U',0, /* 22540, 0x6f5, U+0423, KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */
0x82, 0x85, 0x00, 0x00, 0x06, 0xf6, 0x00, 0x04, 0x16, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Z','H','E',0, /* 22566, 0x6f6, U+0416, KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */
0xc1, 0x15, 0x00, 0x00, 0x06, 0xf7, 0x00, 0x04, 0x12, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','V','E',0, /* 22591, 0x6f7, U+0412, KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */
0x58, 0xd8, 0x00, 0x00, 0x06, 0xf8, 0x00, 0x04, 0x2c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','O','F','T','S','I','G','N',0, /* 22622, 0x6f8, U+042c, KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */
0x05, 0x65, 0x00, 0x00, 0x06, 0xf9, 0x00, 0x04, 0x2b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Y','E','R','U',0, /* 22649, 0x6f9, U+042b, KEY_Cyrillic_YERU, CYRILLIC CAPITAL LETTER YERU */
0xc1, 0x1d, 0x00, 0x00, 0x06, 0xfa, 0x00, 0x04, 0x17, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Z','E',0, /* 22674, 0x6fa, U+0417, KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */
0x82, 0x65, 0x00, 0x00, 0x06, 0xfb, 0x00, 0x04, 0x28, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','H','A',0, /* 22700, 0x6fb, U+0428, KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */
0x60, 0x57, 0x00, 0x00, 0x06, 0xfc, 0x00, 0x04, 0x2d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E',0, /* 22724, 0x6fc, U+042d, KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */
0x0a, 0x6d, 0x00, 0x00, 0x06, 0xfd, 0x00, 0x04, 0x29, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','H','C','H','A',0, /* 22752, 0x6fd, U+0429, KEY_Cyrillic_SHCHA, CYRILLIC CAPITAL LETTER SHCHA */
0x82, 0x29, 0x00, 0x00, 0x06, 0xfe, 0x00, 0x04, 0x27, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','C','H','E',0, /* 22778, 0x6fe, U+0427, KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */
0x50, 0x58, 0x00, 0x00, 0x06, 0xff, 0x00, 0x04, 0x2a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','H','A','R','D','S','I','G','N',0, /* 22809, 0x6ff, U+042a, KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */
0xc0, 0x8c, 0x00, 0x00, 0x07, 0xa1, 0x00, 0x03, 0x86, 'K','E','Y','_','G','r','e','e','k','_','A','L','P','H','A','a','c','c','e','n','t',0, /* 22840, 0x7a1, U+0386, KEY_Greek_ALPHAaccent, GREEK CAPITAL LETTER ALPHA WITH TONOS */
0x6d, 0x4c, 0x00, 0x00, 0x07, 0xa2, 0x00, 0x03, 0x88, 'K','E','Y','_','G','r','e','e','k','_','E','P','S','I','L','O','N','a','c','c','e','n','t',0, /* 22873, 0x7a2, U+0388, KEY_Greek_EPSILONaccent, GREEK CAPITAL LETTER EPSILON WITH TONOS */
0xf9, 0x8c, 0x00, 0x00, 0x07, 0xa3, 0x00, 0x03, 0x89, 'K','E','Y','_','G','r','e','e','k','_','E','T','A','a','c','c','e','n','t',0, /* 22902, 0x7a3, U+0389, KEY_Greek_ETAaccent, GREEK CAPITAL LETTER ETA WITH TONOS */
0xf7, 0x8c, 0x00, 0x00, 0x07, 0xa4, 0x00, 0x03, 0x8a, 'K','E','Y','_','G','r','e','e','k','_','I','O','T','A','a','c','c','e','n','t',0, /* 22932, 0x7a4, U+038a, KEY_Greek_IOTAaccent, GREEK CAPITAL LETTER IOTA WITH TONOS */
0xe3, 0x39, 0x00, 0x00, 0x07, 0xa5, 0x00, 0x03, 0xaa, 'K','E','Y','_','G','r','e','e','k','_','I','O','T','A','d','i','e','r','e','s','i','s',0, /* 22964, 0x7a5, U+03aa, KEY_Greek_IOTAdieresis, GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
0xc4, 0xb9, 0x00, 0x00, 0x07, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','G','r','e','e','k','_','I','O','T','A','d','i','a','e','r','e','s','i','s',0, /* 22997, 0x7a5, KEY_Greek_IOTAdiaeresis, old typo */
0xc7, 0x4c, 0x00, 0x00, 0x07, 0xa7, 0x00, 0x03, 0x8c, 'K','E','Y','_','G','r','e','e','k','_','O','M','I','C','R','O','N','a','c','c','e','n','t',0, /* 23030, 0x7a7, U+038c, KEY_Greek_OMICRONaccent, GREEK CAPITAL LETTER OMICRON WITH TONOS */
0x6d, 0x4c, 0x00, 0x00, 0x07, 0xa8, 0x00, 0x03, 0x8e, 'K','E','Y','_','G','r','e','e','k','_','U','P','S','I','L','O','N','a','c','c','e','n','t',0, /* 23063, 0x7a8, U+038e, KEY_Greek_UPSILONaccent, GREEK CAPITAL LETTER UPSILON WITH TONOS */
0xba, 0x39, 0x00, 0x00, 0x07, 0xa9, 0x00, 0x03, 0xab, 'K','E','Y','_','G','r','e','e','k','_','U','P','S','I','L','O','N','d','i','e','r','e','s','i','s',0, /* 23098, 0x7a9, U+03ab, KEY_Greek_UPSILONdieresis, GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
0xef, 0x0c, 0x00, 0x00, 0x07, 0xab, 0x00, 0x03, 0x8f, 'K','E','Y','_','G','r','e','e','k','_','O','M','E','G','A','a','c','c','e','n','t',0, /* 23129, 0x7ab, U+038f, KEY_Greek_OMEGAaccent, GREEK CAPITAL LETTER OMEGA WITH TONOS */
0xf2, 0x39, 0x00, 0x00, 0x07, 0xae, 0x00, 0x03, 0x85, 'K','E','Y','_','G','r','e','e','k','_','a','c','c','e','n','t','d','i','e','r','e','s','i','s',0, /* 23163, 0x7ae, U+0385, KEY_Greek_accentdieresis, GREEK DIALYTIKA TONOS */
0x9c, 0x1c, 0x00, 0x00, 0x07, 0xaf, 0x00, 0x20, 0x15, 'K','E','Y','_','G','r','e','e','k','_','h','o','r','i','z','b','a','r',0, /* 23191, 0x7af, U+2015, KEY_Greek_horizbar, HORIZONTAL BAR */
0xb8, 0x8c, 0x00, 0x00, 0x07, 0xb1, 0x00, 0x03, 0xac, 'K','E','Y','_','G','r','e','e','k','_','a','l','p','h','a','a','c','c','e','n','t',0, /* 23222, 0x7b1, U+03ac, KEY_Greek_alphaaccent, GREEK SMALL LETTER ALPHA WITH TONOS */
0x65, 0x4c, 0x00, 0x00, 0x07, 0xb2, 0x00, 0x03, 0xad, 'K','E','Y','_','G','r','e','e','k','_','e','p','s','i','l','o','n','a','c','c','e','n','t',0, /* 23255, 0x7b2, U+03ad, KEY_Greek_epsilonaccent, GREEK SMALL LETTER EPSILON WITH TONOS */
0x31, 0x8c, 0x00, 0x00, 0x07, 0xb3, 0x00, 0x03, 0xae, 'K','E','Y','_','G','r','e','e','k','_','e','t','a','a','c','c','e','n','t',0, /* 23284, 0x7b3, U+03ae, KEY_Greek_etaaccent, GREEK SMALL LETTER ETA WITH TONOS */
0x6f, 0x8c, 0x00, 0x00, 0x07, 0xb4, 0x00, 0x03, 0xaf, 'K','E','Y','_','G','r','e','e','k','_','i','o','t','a','a','c','c','e','n','t',0, /* 23314, 0x7b4, U+03af, KEY_Greek_iotaaccent, GREEK SMALL LETTER IOTA WITH TONOS */
0xc3, 0x39, 0x00, 0x00, 0x07, 0xb5, 0x00, 0x03, 0xca, 'K','E','Y','_','G','r','e','e','k','_','i','o','t','a','d','i','e','r','e','s','i','s',0, /* 23346, 0x7b5, U+03ca, KEY_Greek_iotadieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA */
0xf2, 0x39, 0x00, 0x00, 0x07, 0xb6, 0x00, 0x03, 0x90, 'K','E','Y','_','G','r','e','e','k','_','i','o','t','a','a','c','c','e','n','t','d','i','e','r','e','s','i','s',0, /* 23384, 0x7b6, U+0390, KEY_Greek_iotaaccentdieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
0xbf, 0x4c, 0x00, 0x00, 0x07, 0xb7, 0x00, 0x03, 0xcc, 'K','E','Y','_','G','r','e','e','k','_','o','m','i','c','r','o','n','a','c','c','e','n','t',0, /* 23417, 0x7b7, U+03cc, KEY_Greek_omicronaccent, GREEK SMALL LETTER OMICRON WITH TONOS */
0x65, 0x4c, 0x00, 0x00, 0x07, 0xb8, 0x00, 0x03, 0xcd, 'K','E','Y','_','G','r','e','e','k','_','u','p','s','i','l','o','n','a','c','c','e','n','t',0, /* 23450, 0x7b8, U+03cd, KEY_Greek_upsilonaccent, GREEK SMALL LETTER UPSILON WITH TONOS */
0x9a, 0x39, 0x00, 0x00, 0x07, 0xb9, 0x00, 0x03, 0xcb, 'K','E','Y','_','G','r','e','e','k','_','u','p','s','i','l','o','n','d','i','e','r','e','s','i','s',0, /* 23485, 0x7b9, U+03cb, KEY_Greek_upsilondieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
0xb2, 0x39, 0x00, 0x00, 0x07, 0xba, 0x00, 0x03, 0xb0, 'K','E','Y','_','G','r','e','e','k','_','u','p','s','i','l','o','n','a','c','c','e','n','t','d','i','e','r','e','s','i','s',0, /* 23526, 0x7ba, U+03b0, KEY_Greek_upsilonaccentdieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
0xe7, 0x0c, 0x00, 0x00, 0x07, 0xbb, 0x00, 0x03, 0xce, 'K','E','Y','_','G','r','e','e','k','_','o','m','e','g','a','a','c','c','e','n','t',0, /* 23557, 0x7bb, U+03ce, KEY_Greek_omegaaccent, GREEK SMALL LETTER OMEGA WITH TONOS */
0xae, 0xa1, 0x00, 0x00, 0x07, 0xc1, 0x00, 0x03, 0x91, 'K','E','Y','_','G','r','e','e','k','_','A','L','P','H','A',0, /* 23582, 0x7c1, U+0391, KEY_Greek_ALPHA, GREEK CAPITAL LETTER ALPHA */
0x57, 0x1d, 0x00, 0x00, 0x07, 0xc2, 0x00, 0x03, 0x92, 'K','E','Y','_','G','r','e','e','k','_','B','E','T','A',0, /* 23606, 0x7c2, U+0392, KEY_Greek_BETA, GREEK CAPITAL LETTER BETA */
0xae, 0xa7, 0x00, 0x00, 0x07, 0xc3, 0x00, 0x03, 0x93, 'K','E','Y','_','G','r','e','e','k','_','G','A','M','M','A',0, /* 23631, 0x7c3, U+0393, KEY_Greek_GAMMA, GREEK CAPITAL LETTER GAMMA */
0xae, 0xa1, 0x00, 0x00, 0x07, 0xc4, 0x00, 0x03, 0x94, 'K','E','Y','_','G','r','e','e','k','_','D','E','L','T','A',0, /* 23656, 0x7c4, U+0394, KEY_Greek_DELTA, GREEK CAPITAL LETTER DELTA */
0xbd, 0x54, 0x00, 0x00, 0x07, 0xc5, 0x00, 0x03, 0x95, 'K','E','Y','_','G','r','e','e','k','_','E','P','S','I','L','O','N',0, /* 23683, 0x7c5, U+0395, KEY_Greek_EPSILON, GREEK CAPITAL LETTER EPSILON */
0x57, 0xdd, 0x00, 0x00, 0x07, 0xc6, 0x00, 0x03, 0x96, 'K','E','Y','_','G','r','e','e','k','_','Z','E','T','A',0, /* 23707, 0x7c6, U+0396, KEY_Greek_ZETA, GREEK CAPITAL LETTER ZETA */
0xab, 0x85, 0x00, 0x00, 0x07, 0xc7, 0x00, 0x03, 0x97, 'K','E','Y','_','G','r','e','e','k','_','E','T','A',0, /* 23730, 0x7c7, U+0397, KEY_Greek_ETA, GREEK CAPITAL LETTER ETA */
0xaf, 0x9d, 0x00, 0x00, 0x07, 0xc8, 0x00, 0x03, 0x98, 'K','E','Y','_','G','r','e','e','k','_','T','H','E','T','A',0, /* 23755, 0x7c8, U+0398, KEY_Greek_THETA, GREEK CAPITAL LETTER THETA */
0x57, 0x7d, 0x00, 0x00, 0x07, 0xc9, 0x00, 0x03, 0x99, 'K','E','Y','_','G','r','e','e','k','_','I','O','T','A',0, /* 23779, 0x7c9, U+0399, KEY_Greek_IOTA, GREEK CAPITAL LETTER IOTA */
0xae, 0xf9, 0x00, 0x00, 0x07, 0xca, 0x00, 0x03, 0x9a, 'K','E','Y','_','G','r','e','e','k','_','K','A','P','P','A',0, /* 23804, 0x7ca, U+039a, KEY_Greek_KAPPA, GREEK CAPITAL LETTER KAPPA */
0xae, 0xe5, 0x00, 0x00, 0x07, 0xcb, 0x00, 0x03, 0x9b, 'K','E','Y','_','G','r','e','e','k','_','L','A','M','D','A',0, /* 23829, 0x7cb, U+039b, KEY_Greek_LAMDA, GREEK CAPITAL LETTER LAMDA */
0x5e, 0x09, 0x00, 0x00, 0x07, 0xcb, 0x00, 0x03, 0x9b, 'K','E','Y','_','G','r','e','e','k','_','L','A','M','B','D','A',0, /* 23855, 0x7cb, U+039b, KEY_Greek_LAMBDA, GREEK CAPITAL LETTER LAMDA */
0xd5, 0xb3, 0x00, 0x00, 0x07, 0xcc, 0x00, 0x03, 0x9c, 'K','E','Y','_','G','r','e','e','k','_','M','U',0, /* 23877, 0x7cc, U+039c, KEY_Greek_MU, GREEK CAPITAL LETTER MU */
0xd5, 0xb5, 0x00, 0x00, 0x07, 0xcd, 0x00, 0x03, 0x9d, 'K','E','Y','_','G','r','e','e','k','_','N','U',0, /* 23899, 0x7cd, U+039d, KEY_Greek_NU, GREEK CAPITAL LETTER NU */
0xd5, 0xbd, 0x00, 0x00, 0x07, 0xce, 0x00, 0x03, 0x9e, 'K','E','Y','_','G','r','e','e','k','_','X','I',0, /* 23921, 0x7ce, U+039e, KEY_Greek_XI, GREEK CAPITAL LETTER XI */
0xbe, 0xbc, 0x00, 0x00, 0x07, 0xcf, 0x00, 0x03, 0x9f, 'K','E','Y','_','G','r','e','e','k','_','O','M','I','C','R','O','N',0, /* 23948, 0x7cf, U+039f, KEY_Greek_OMICRON, GREEK CAPITAL LETTER OMICRON */
0xd5, 0xad, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x03, 0xa0, 'K','E','Y','_','G','r','e','e','k','_','P','I',0, /* 23970, 0x7d0, U+03a0, KEY_Greek_PI, GREEK CAPITAL LETTER PI */
0xab, 0xaf, 0x00, 0x00, 0x07, 0xd1, 0x00, 0x03, 0xa1, 'K','E','Y','_','G','r','e','e','k','_','R','H','O',0, /* 23993, 0x7d1, U+03a1, KEY_Greek_RHO, GREEK CAPITAL LETTER RHO */
0xaf, 0x8f, 0x00, 0x00, 0x07, 0xd2, 0x00, 0x03, 0xa3, 'K','E','Y','_','G','r','e','e','k','_','S','I','G','M','A',0, /* 24018, 0x7d2, U+03a3, KEY_Greek_SIGMA, GREEK CAPITAL LETTER SIGMA */
0xab, 0xaf, 0x00, 0x00, 0x07, 0xd4, 0x00, 0x03, 0xa4, 'K','E','Y','_','G','r','e','e','k','_','T','A','U',0, /* 24041, 0x7d4, U+03a4, KEY_Greek_TAU, GREEK CAPITAL LETTER TAU */
0xc1, 0x54, 0x00, 0x00, 0x07, 0xd5, 0x00, 0x03, 0xa5, 'K','E','Y','_','G','r','e','e','k','_','U','P','S','I','L','O','N',0, /* 24068, 0x7d5, U+03a5, KEY_Greek_UPSILON, GREEK CAPITAL LETTER UPSILON */
0xab, 0xa1, 0x00, 0x00, 0x07, 0xd6, 0x00, 0x03, 0xa6, 'K','E','Y','_','G','r','e','e','k','_','P','H','I',0, /* 24091, 0x7d6, U+03a6, KEY_Greek_PHI, GREEK CAPITAL LETTER PHI */
0xab, 0x6d, 0x00, 0x00, 0x07, 0xd7, 0x00, 0x03, 0xa7, 'K','E','Y','_','G','r','e','e','k','_','C','H','I',0, /* 24114, 0x7d7, U+03a7, KEY_Greek_CHI, GREEK CAPITAL LETTER CHI */
0xab, 0xb7, 0x00, 0x00, 0x07, 0xd8, 0x00, 0x03, 0xa8, 'K','E','Y','_','G','r','e','e','k','_','P','S','I',0, /* 24137, 0x7d8, U+03a8, KEY_Greek_PSI, GREEK CAPITAL LETTER PSI */
0xaf, 0x5b, 0x00, 0x00, 0x07, 0xd9, 0x00, 0x03, 0xa9, 'K','E','Y','_','G','r','e','e','k','_','O','M','E','G','A',0, /* 24162, 0x7d9, U+03a9, KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */
0xb2, 0x81, 0x00, 0x00, 0x07, 0xe1, 0x00, 0x03, 0xb1, 'K','E','Y','_','G','r','e','e','k','_','a','l','p','h','a',0, /* 24187, 0x7e1, U+03b1, KEY_Greek_alpha, GREEK SMALL LETTER ALPHA */
0x58, 0xfd, 0x00, 0x00, 0x07, 0xe2, 0x00, 0x03, 0xb2, 'K','E','Y','_','G','r','e','e','k','_','b','e','t','a',0, /* 24211, 0x7e2, U+03b2, KEY_Greek_beta, GREEK SMALL LETTER BETA */
0xb2, 0x87, 0x00, 0x00, 0x07, 0xe3, 0x00, 0x03, 0xb3, 'K','E','Y','_','G','r','e','e','k','_','g','a','m','m','a',0, /* 24236, 0x7e3, U+03b3, KEY_Greek_gamma, GREEK SMALL LETTER GAMMA */
0xb2, 0x81, 0x00, 0x00, 0x07, 0xe4, 0x00, 0x03, 0xb4, 'K','E','Y','_','G','r','e','e','k','_','d','e','l','t','a',0, /* 24261, 0x7e4, U+03b4, KEY_Greek_delta, GREEK SMALL LETTER DELTA */
0xcd, 0x34, 0x00, 0x00, 0x07, 0xe5, 0x00, 0x03, 0xb5, 'K','E','Y','_','G','r','e','e','k','_','e','p','s','i','l','o','n',0, /* 24288, 0x7e5, U+03b5, KEY_Greek_epsilon, GREEK SMALL LETTER EPSILON */
0x59, 0xbd, 0x00, 0x00, 0x07, 0xe6, 0x00, 0x03, 0xb6, 'K','E','Y','_','G','r','e','e','k','_','z','e','t','a',0, /* 24312, 0x7e6, U+03b6, KEY_Greek_zeta, GREEK SMALL LETTER ZETA */
0xac, 0x65, 0x00, 0x00, 0x07, 0xe7, 0x00, 0x03, 0xb7, 'K','E','Y','_','G','r','e','e','k','_','e','t','a',0, /* 24335, 0x7e7, U+03b7, KEY_Greek_eta, GREEK SMALL LETTER ETA */
0xb3, 0x7d, 0x00, 0x00, 0x07, 0xe8, 0x00, 0x03, 0xb8, 'K','E','Y','_','G','r','e','e','k','_','t','h','e','t','a',0, /* 24360, 0x7e8, U+03b8, KEY_Greek_theta, GREEK SMALL LETTER THETA */
0x59, 0x5d, 0x00, 0x00, 0x07, 0xe9, 0x00, 0x03, 0xb9, 'K','E','Y','_','G','r','e','e','k','_','i','o','t','a',0, /* 24384, 0x7e9, U+03b9, KEY_Greek_iota, GREEK SMALL LETTER IOTA */
0xb2, 0xd9, 0x00, 0x00, 0x07, 0xea, 0x00, 0x03, 0xba, 'K','E','Y','_','G','r','e','e','k','_','k','a','p','p','a',0, /* 24409, 0x7ea, U+03ba, KEY_Greek_kappa, GREEK SMALL LETTER KAPPA */
0xb2, 0xc5, 0x00, 0x00, 0x07, 0xeb, 0x00, 0x03, 0xbb, 'K','E','Y','_','G','r','e','e','k','_','l','a','m','d','a',0, /* 24434, 0x7eb, U+03bb, KEY_Greek_lamda, GREEK SMALL LETTER LAMDA */
0x65, 0xe9, 0x00, 0x00, 0x07, 0xeb, 0x00, 0x03, 0xbb, 'K','E','Y','_','G','r','e','e','k','_','l','a','m','b','d','a',0, /* 24460, 0x7eb, U+03bb, KEY_Greek_lambda, GREEK SMALL LETTER LAMDA */
0xd6, 0x13, 0x00, 0x00, 0x07, 0xec, 0x00, 0x03, 0xbc, 'K','E','Y','_','G','r','e','e','k','_','m','u',0, /* 24482, 0x7ec, U+03bc, KEY_Greek_mu, GREEK SMALL LETTER MU */
0xd6, 0x15, 0x00, 0x00, 0x07, 0xed, 0x00, 0x03, 0xbd, 'K','E','Y','_','G','r','e','e','k','_','n','u',0, /* 24504, 0x7ed, U+03bd, KEY_Greek_nu, GREEK SMALL LETTER NU */
0xd6, 0x1d, 0x00, 0x00, 0x07, 0xee, 0x00, 0x03, 0xbe, 'K','E','Y','_','G','r','e','e','k','_','x','i',0, /* 24526, 0x7ee, U+03be, KEY_Greek_xi, GREEK SMALL LETTER XI */
0xce, 0x9c, 0x00, 0x00, 0x07, 0xef, 0x00, 0x03, 0xbf, 'K','E','Y','_','G','r','e','e','k','_','o','m','i','c','r','o','n',0, /* 24553, 0x7ef, U+03bf, KEY_Greek_omicron, GREEK SMALL LETTER OMICRON */
0xd6, 0x0d, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x03, 0xc0, 'K','E','Y','_','G','r','e','e','k','_','p','i',0, /* 24575, 0x7f0, U+03c0, KEY_Greek_pi, GREEK SMALL LETTER PI */
0xac, 0x8f, 0x00, 0x00, 0x07, 0xf1, 0x00, 0x03, 0xc1, 'K','E','Y','_','G','r','e','e','k','_','r','h','o',0, /* 24598, 0x7f1, U+03c1, KEY_Greek_rho, GREEK SMALL LETTER RHO */
0xb3, 0x6f, 0x00, 0x00, 0x07, 0xf2, 0x00, 0x03, 0xc3, 'K','E','Y','_','G','r','e','e','k','_','s','i','g','m','a',0, /* 24623, 0x7f2, U+03c3, KEY_Greek_sigma, GREEK SMALL LETTER SIGMA */
0x71, 0x4f, 0x00, 0x00, 0x07, 0xf3, 0x00, 0x03, 0xc2, 'K','E','Y','_','G','r','e','e','k','_','f','i','n','a','l','s','m','a','l','l','s','i','g','m','a',0, /* 24658, 0x7f3, U+03c2, KEY_Greek_finalsmallsigma, GREEK SMALL LETTER FINAL SIGMA */
0xac, 0x8f, 0x00, 0x00, 0x07, 0xf4, 0x00, 0x03, 0xc4, 'K','E','Y','_','G','r','e','e','k','_','t','a','u',0, /* 24681, 0x7f4, U+03c4, KEY_Greek_tau, GREEK SMALL LETTER TAU */
0xd1, 0x34, 0x00, 0x00, 0x07, 0xf5, 0x00, 0x03, 0xc5, 'K','E','Y','_','G','r','e','e','k','_','u','p','s','i','l','o','n',0, /* 24708, 0x7f5, U+03c5, KEY_Greek_upsilon, GREEK SMALL LETTER UPSILON */
0xac, 0x81, 0x00, 0x00, 0x07, 0xf6, 0x00, 0x03, 0xc6, 'K','E','Y','_','G','r','e','e','k','_','p','h','i',0, /* 24731, 0x7f6, U+03c6, KEY_Greek_phi, GREEK SMALL LETTER PHI */
0xac, 0x4d, 0x00, 0x00, 0x07, 0xf7, 0x00, 0x03, 0xc7, 'K','E','Y','_','G','r','e','e','k','_','c','h','i',0, /* 24754, 0x7f7, U+03c7, KEY_Greek_chi, GREEK SMALL LETTER CHI */
0xac, 0x97, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xc8, 'K','E','Y','_','G','r','e','e','k','_','p','s','i',0, /* 24777, 0x7f8, U+03c8, KEY_Greek_psi, GREEK SMALL LETTER PSI */
0xb3, 0x3b, 0x00, 0x00, 0x07, 0xf9, 0x00, 0x03, 0xc9, 'K','E','Y','_','G','r','e','e','k','_','o','m','e','g','a',0, /* 24802, 0x7f9, U+03c9, KEY_Greek_omega, GREEK SMALL LETTER OMEGA */
0x68, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','G','r','e','e','k','_','s','w','i','t','c','h',0, /* 24828, 0xff7e, KEY_Greek_switch, Alias for mode_switch */
0x36, 0xe2, 0x00, 0x00, 0x08, 0xa1, 0x00, 0x23, 0xb7, 'K','E','Y','_','l','e','f','t','r','a','d','i','c','a','l',0, /* 24853, 0x8a1, U+23b7, KEY_leftradical, RADICAL SYMBOL BOTTOM */
0x7e, 0xe2, 0x00, 0x00, 0x08, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','t','o','p','l','e','f','t','r','a','d','i','c','a','l',0, /* 24881, 0x8a2, KEY_topleftradical, (U+250C BOX DRAWINGS LIGHT DOWN AND RIGHT) */
0x28, 0x48, 0x00, 0x00, 0x08, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','h','o','r','i','z','c','o','n','n','e','c','t','o','r',0, /* 24909, 0x8a3, KEY_horizconnector, (U+2500 BOX DRAWINGS LIGHT HORIZONTAL) */
0x70, 0xfe, 0x00, 0x00, 0x08, 0xa4, 0x00, 0x23, 0x20, 'K','E','Y','_','t','o','p','i','n','t','e','g','r','a','l',0, /* 24934, 0x8a4, U+2320, KEY_topintegral, TOP HALF INTEGRAL */
0x2c, 0xfe, 0x00, 0x00, 0x08, 0xa5, 0x00, 0x23, 0x21, 'K','E','Y','_','b','o','t','i','n','t','e','g','r','a','l',0, /* 24959, 0x8a5, U+2321, KEY_botintegral, BOTTOM HALF INTEGRAL */
0xa8, 0x48, 0x00, 0x00, 0x08, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','v','e','r','t','c','o','n','n','e','c','t','o','r',0, /* 24986, 0x8a6, KEY_vertconnector, (U+2502 BOX DRAWINGS LIGHT VERTICAL) */
0x06, 0x52, 0x00, 0x00, 0x08, 0xa7, 0x00, 0x23, 0xa1, 'K','E','Y','_','t','o','p','l','e','f','t','s','q','b','r','a','c','k','e','t',0, /* 25016, 0x8a7, U+23a1, KEY_topleftsqbracket, LEFT SQUARE BRACKET UPPER CORNER */
0x86, 0x52, 0x00, 0x00, 0x08, 0xa8, 0x00, 0x23, 0xa3, 'K','E','Y','_','b','o','t','l','e','f','t','s','q','b','r','a','c','k','e','t',0, /* 25046, 0x8a8, U+23a3, KEY_botleftsqbracket, LEFT SQUARE BRACKET LOWER CORNER */
0xee, 0x52, 0x00, 0x00, 0x08, 0xa9, 0x00, 0x23, 0xa4, 'K','E','Y','_','t','o','p','r','i','g','h','t','s','q','b','r','a','c','k','e','t',0, /* 25077, 0x8a9, U+23a4, KEY_toprightsqbracket, RIGHT SQUARE BRACKET UPPER CORNER */
0xee, 0x52, 0x00, 0x00, 0x08, 0xaa, 0x00, 0x23, 0xa6, 'K','E','Y','_','b','o','t','r','i','g','h','t','s','q','b','r','a','c','k','e','t',0, /* 25108, 0x8aa, U+23a6, KEY_botrightsqbracket, RIGHT SQUARE BRACKET LOWER CORNER */
0xbf, 0x83, 0x00, 0x00, 0x08, 0xab, 0x00, 0x23, 0x9b, 'K','E','Y','_','t','o','p','l','e','f','t','p','a','r','e','n','s',0, /* 25135, 0x8ab, U+239b, KEY_topleftparens, LEFT PARENTHESIS UPPER HOOK */
0xaf, 0x83, 0x00, 0x00, 0x08, 0xac, 0x00, 0x23, 0x9d, 'K','E','Y','_','b','o','t','l','e','f','t','p','a','r','e','n','s',0, /* 25162, 0x8ac, U+239d, KEY_botleftparens, LEFT PARENTHESIS LOWER HOOK */
0x9c, 0x83, 0x00, 0x00, 0x08, 0xad, 0x00, 0x23, 0x9e, 'K','E','Y','_','t','o','p','r','i','g','h','t','p','a','r','e','n','s',0, /* 25190, 0x8ad, U+239e, KEY_toprightparens, RIGHT PARENTHESIS UPPER HOOK */
0x7c, 0x83, 0x00, 0x00, 0x08, 0xae, 0x00, 0x23, 0xa0, 'K','E','Y','_','b','o','t','r','i','g','h','t','p','a','r','e','n','s',0, /* 25218, 0x8ae, U+23a0, KEY_botrightparens, RIGHT PARENTHESIS LOWER HOOK */
0x1e, 0x7f, 0x00, 0x00, 0x08, 0xaf, 0x00, 0x23, 0xa8, 'K','E','Y','_','l','e','f','t','m','i','d','d','l','e','c','u','r','l','y','b','r','a','c','e',0, /* 25252, 0x8af, U+23a8, KEY_leftmiddlecurlybrace, LEFT CURLY BRACKET MIDDLE PIECE */
0x1e, 0x7f, 0x00, 0x00, 0x08, 0xb0, 0x00, 0x23, 0xac, 'K','E','Y','_','r','i','g','h','t','m','i','d','d','l','e','c','u','r','l','y','b','r','a','c','e',0, /* 25287, 0x8b0, U+23ac, KEY_rightmiddlecurlybrace, RIGHT CURLY BRACKET MIDDLE PIECE */
0x0b, 0x00, 0x00, 0x00, 0x08, 0xb1, 0x00, 0x00, 0x00, 'K','E','Y','_','t','o','p','l','e','f','t','s','u','m','m','a','t','i','o','n',0, /* 25317, 0x8b1, KEY_topleftsummation */
0x8b, 0x00, 0x00, 0x00, 0x08, 0xb2, 0x00, 0x00, 0x00, 'K','E','Y','_','b','o','t','l','e','f','t','s','u','m','m','a','t','i','o','n',0, /* 25347, 0x8b2, KEY_botleftsummation */
0xd0, 0x48, 0x00, 0x00, 0x08, 0xb3, 0x00, 0x00, 0x00, 'K','E','Y','_','t','o','p','v','e','r','t','s','u','m','m','a','t','i','o','n','c','o','n','n','e','c','t','o','r',0, /* 25386, 0x8b3, KEY_topvertsummationconnector */
0xd0, 0x48, 0x00, 0x00, 0x08, 0xb4, 0x00, 0x00, 0x00, 'K','E','Y','_','b','o','t','v','e','r','t','s','u','m','m','a','t','i','o','n','c','o','n','n','e','c','t','o','r',0, /* 25425, 0x8b4, KEY_botvertsummationconnector */
0xf3, 0x00, 0x00, 0x00, 0x08, 0xb5, 0x00, 0x00, 0x00, 'K','E','Y','_','t','o','p','r','i','g','h','t','s','u','m','m','a','t','i','o','n',0, /* 25456, 0x8b5, KEY_toprightsummation */
0xf3, 0x00, 0x00, 0x00, 0x08, 0xb6, 0x00, 0x00, 0x00, 'K','E','Y','_','b','o','t','r','i','g','h','t','s','u','m','m','a','t','i','o','n',0, /* 25487, 0x8b6, KEY_botrightsummation */
0x1d, 0x00, 0x00, 0x00, 0x08, 0xb7, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','m','i','d','d','l','e','s','u','m','m','a','t','i','o','n',0, /* 25521, 0x8b7, KEY_rightmiddlesummation */
0x14, 0xda, 0x00, 0x00, 0x08, 0xbc, 0x00, 0x22, 0x64, 'K','E','Y','_','l','e','s','s','t','h','a','n','e','q','u','a','l',0, /* 25548, 0x8bc, U+2264, KEY_lessthanequal, LESS-THAN OR EQUAL TO */
0xeb, 0x1a, 0x00, 0x00, 0x08, 0xbd, 0x00, 0x22, 0x60, 'K','E','Y','_','n','o','t','e','q','u','a','l',0, /* 25570, 0x8bd, U+2260, KEY_notequal, NOT EQUAL TO */
0xa2, 0xda, 0x00, 0x00, 0x08, 0xbe, 0x00, 0x22, 0x65, 'K','E','Y','_','g','r','e','a','t','e','r','t','h','a','n','e','q','u','a','l',0, /* 25600, 0x8be, U+2265, KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */
0xe7, 0xfe, 0x00, 0x00, 0x08, 0xbf, 0x00, 0x22, 0x2b, 'K','E','Y','_','i','n','t','e','g','r','a','l',0, /* 25622, 0x8bf, U+222b, KEY_integral, INTEGRAL */
0xd6, 0x05, 0x00, 0x00, 0x08, 0xc0, 0x00, 0x22, 0x34, 'K','E','Y','_','t','h','e','r','e','f','o','r','e',0, /* 25645, 0x8c0, U+2234, KEY_therefore, THEREFORE */
0xd6, 0xc0, 0x00, 0x00, 0x08, 0xc1, 0x00, 0x22, 0x1d, 'K','E','Y','_','v','a','r','i','a','t','i','o','n',0, /* 25668, 0x8c1, U+221d, KEY_variation, PROPORTIONAL TO */
0xe6, 0xc5, 0x00, 0x00, 0x08, 0xc2, 0x00, 0x22, 0x1e, 'K','E','Y','_','i','n','f','i','n','i','t','y',0, /* 25690, 0x8c2, U+221e, KEY_infinity, INFINITY */
0x9c, 0x49, 0x00, 0x00, 0x08, 0xc5, 0x00, 0x22, 0x07, 'K','E','Y','_','n','a','b','l','a',0, /* 25709, 0x8c5, U+2207, KEY_nabla, NABLA */
0x2c, 0x89, 0x00, 0x00, 0x08, 0xc8, 0x00, 0x22, 0x3c, 'K','E','Y','_','a','p','p','r','o','x','i','m','a','t','e',0, /* 25734, 0x8c8, U+223c, KEY_approximate, TILDE OPERATOR */
0xb8, 0x5a, 0x00, 0x00, 0x08, 0xc9, 0x00, 0x22, 0x43, 'K','E','Y','_','s','i','m','i','l','a','r','e','q','u','a','l',0, /* 25760, 0x8c9, U+2243, KEY_similarequal, ASYMPTOTICALLY EQUAL TO */
0xe6, 0x3c, 0x00, 0x00, 0x08, 0xcd, 0x00, 0x21, 0xd4, 'K','E','Y','_','i','f','o','n','l','y','i','f',0, /* 25782, 0x8cd, U+21d4, KEY_ifonlyif, LEFT RIGHT DOUBLE ARROW */
0x73, 0xa1, 0x00, 0x00, 0x08, 0xce, 0x00, 0x21, 0xd2, 'K','E','Y','_','i','m','p','l','i','e','s',0, /* 25803, 0x8ce, U+21d2, KEY_implies, RIGHTWARDS DOUBLE ARROW */
0xc9, 0x42, 0x00, 0x00, 0x08, 0xcf, 0x00, 0x22, 0x61, 'K','E','Y','_','i','d','e','n','t','i','c','a','l',0, /* 25826, 0x8cf, U+2261, KEY_identical, IDENTICAL TO */
0x73, 0x62, 0x00, 0x00, 0x08, 0xd6, 0x00, 0x22, 0x1a, 'K','E','Y','_','r','a','d','i','c','a','l',0, /* 25847, 0x8d6, U+221a, KEY_radical, SQUARE ROOT */
0x9b, 0x58, 0x00, 0x00, 0x08, 0xda, 0x00, 0x22, 0x82, 'K','E','Y','_','i','n','c','l','u','d','e','d','i','n',0, /* 25871, 0x8da, U+2282, KEY_includedin, SUBSET OF */
0xe6, 0x95, 0x00, 0x00, 0x08, 0xdb, 0x00, 0x22, 0x83, 'K','E','Y','_','i','n','c','l','u','d','e','s',0, /* 25893, 0x8db, U+2283, KEY_includes, SUPERSET OF */
0x8c, 0x20, 0x00, 0x00, 0x08, 0xdc, 0x00, 0x22, 0x29, 'K','E','Y','_','i','n','t','e','r','s','e','c','t','i','o','n',0, /* 25919, 0x8dc, U+2229, KEY_intersection, INTERSECTION */
0x9d, 0x50, 0x00, 0x00, 0x08, 0xdd, 0x00, 0x22, 0x2a, 'K','E','Y','_','u','n','i','o','n',0, /* 25938, 0x8dd, U+222a, KEY_union, UNION */
0xa1, 0x54, 0x00, 0x00, 0x08, 0xde, 0x00, 0x22, 0x27, 'K','E','Y','_','l','o','g','i','c','a','l','a','n','d',0, /* 25962, 0x8de, U+2227, KEY_logicaland, LOGICAL AND */
0xd0, 0x98, 0x00, 0x00, 0x08, 0xdf, 0x00, 0x22, 0x28, 'K','E','Y','_','l','o','g','i','c','a','l','o','r',0, /* 25985, 0x8df, U+2228, KEY_logicalor, LOGICAL OR */
0x63, 0xa5, 0x00, 0x00, 0x08, 0xef, 0x00, 0x22, 0x02, 'K','E','Y','_','p','a','r','t','i','a','l','d','e','r','i','v','a','t','i','v','e',0, /* 26016, 0x8ef, U+2202, KEY_partialderivative, PARTIAL DIFFERENTIAL */
0xe7, 0xc0, 0x00, 0x00, 0x08, 0xf6, 0x00, 0x01, 0x92, 'K','E','Y','_','f','u','n','c','t','i','o','n',0, /* 26038, 0x8f6, U+0192, KEY_function, LATIN SMALL LETTER F WITH HOOK */
0xcd, 0x3d, 0x00, 0x00, 0x08, 0xfb, 0x00, 0x21, 0x90, 'K','E','Y','_','l','e','f','t','a','r','r','o','w',0, /* 26061, 0x8fb, U+2190, KEY_leftarrow, LEFTWARDS ARROW */
0x76, 0x7d, 0x00, 0x00, 0x08, 0xfc, 0x00, 0x21, 0x91, 'K','E','Y','_','u','p','a','r','r','o','w',0, /* 26082, 0x8fc, U+2191, KEY_uparrow, UPWARDS ARROW */
0xa9, 0xbd, 0x00, 0x00, 0x08, 0xfd, 0x00, 0x21, 0x92, 'K','E','Y','_','r','i','g','h','t','a','r','r','o','w',0, /* 26106, 0x8fd, U+2192, KEY_rightarrow, RIGHTWARDS ARROW */
0xcd, 0xbd, 0x00, 0x00, 0x08, 0xfe, 0x00, 0x21, 0x93, 'K','E','Y','_','d','o','w','n','a','r','r','o','w',0, /* 26129, 0x8fe, U+2193, KEY_downarrow, DOWNWARDS ARROW */
0x9b, 0xeb, 0x00, 0x00, 0x09, 0xdf, 0x00, 0x00, 0x00, 'K','E','Y','_','b','l','a','n','k',0, /* 26148, 0x9df, KEY_blank */
0xc9, 0x94, 0x00, 0x00, 0x09, 0xe0, 0x00, 0x25, 0xc6, 'K','E','Y','_','s','o','l','i','d','d','i','a','m','o','n','d',0, /* 26174, 0x9e0, U+25c6, KEY_soliddiamond, BLACK DIAMOND */
0x1e, 0x64, 0x00, 0x00, 0x09, 0xe1, 0x00, 0x25, 0x92, 'K','E','Y','_','c','h','e','c','k','e','r','b','o','a','r','d',0, /* 26200, 0x9e1, U+2592, KEY_checkerboard, MEDIUM SHADE */
0x13, 0x38, 0x00, 0x00, 0x09, 0xe2, 0x00, 0x24, 0x09, 'K','E','Y','_','h','t',0, /* 26216, 0x9e2, U+2409, KEY_ht, SYMBOL FOR HORIZONTAL TABULATION */
0x13, 0x26, 0x00, 0x00, 0x09, 0xe3, 0x00, 0x24, 0x0c, 'K','E','Y','_','f','f',0, /* 26232, 0x9e3, U+240c, KEY_ff, SYMBOL FOR FORM FEED */
0x13, 0x2c, 0x00, 0x00, 0x09, 0xe4, 0x00, 0x24, 0x0d, 'K','E','Y','_','c','r',0, /* 26248, 0x9e4, U+240d, KEY_cr, SYMBOL FOR CARRIAGE RETURN */
0x13, 0x32, 0x00, 0x00, 0x09, 0xe5, 0x00, 0x24, 0x0a, 'K','E','Y','_','l','f',0, /* 26264, 0x9e5, U+240a, KEY_lf, SYMBOL FOR LINE FEED */
0x13, 0x3c, 0x00, 0x00, 0x09, 0xe8, 0x00, 0x24, 0x24, 'K','E','Y','_','n','l',0, /* 26280, 0x9e8, U+2424, KEY_nl, SYMBOL FOR NEWLINE */
0x13, 0x54, 0x00, 0x00, 0x09, 0xe9, 0x00, 0x24, 0x0b, 'K','E','Y','_','v','t',0, /* 26296, 0x9e9, U+240b, KEY_vt, SYMBOL FOR VERTICAL TABULATION */
0xd3, 0xd4, 0x00, 0x00, 0x09, 0xea, 0x00, 0x25, 0x18, 'K','E','Y','_','l','o','w','r','i','g','h','t','c','o','r','n','e','r',0, /* 26324, 0x9ea, U+2518, KEY_lowrightcorner, BOX DRAWINGS LIGHT UP AND LEFT */
0xdb, 0xd4, 0x00, 0x00, 0x09, 0xeb, 0x00, 0x25, 0x10, 'K','E','Y','_','u','p','r','i','g','h','t','c','o','r','n','e','r',0, /* 26351, 0x9eb, U+2510, KEY_uprightcorner, BOX DRAWINGS LIGHT DOWN AND LEFT */
0xde, 0xd4, 0x00, 0x00, 0x09, 0xec, 0x00, 0x25, 0x0c, 'K','E','Y','_','u','p','l','e','f','t','c','o','r','n','e','r',0, /* 26377, 0x9ec, U+250c, KEY_upleftcorner, BOX DRAWINGS LIGHT DOWN AND RIGHT */
0x5a, 0xd4, 0x00, 0x00, 0x09, 0xed, 0x00, 0x25, 0x14, 'K','E','Y','_','l','o','w','l','e','f','t','c','o','r','n','e','r',0, /* 26404, 0x9ed, U+2514, KEY_lowleftcorner, BOX DRAWINGS LIGHT UP AND RIGHT */
0xde, 0xdd, 0x00, 0x00, 0x09, 0xee, 0x00, 0x25, 0x3c, 'K','E','Y','_','c','r','o','s','s','i','n','g','l','i','n','e','s',0, /* 26431, 0x9ee, U+253c, KEY_crossinglines, BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
0x2d, 0x79, 0x00, 0x00, 0x09, 0xef, 0x00, 0x23, 0xba, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','1',0, /* 26459, 0x9ef, U+23ba, KEY_horizlinescan1, HORIZONTAL SCAN LINE-1 */
0x2d, 0x7b, 0x00, 0x00, 0x09, 0xf0, 0x00, 0x23, 0xbb, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','3',0, /* 26487, 0x9f0, U+23bb, KEY_horizlinescan3, HORIZONTAL SCAN LINE-3 */
0x2d, 0x7d, 0x00, 0x00, 0x09, 0xf1, 0x00, 0x25, 0x00, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','5',0, /* 26515, 0x9f1, U+2500, KEY_horizlinescan5, BOX DRAWINGS LIGHT HORIZONTAL */
0x2d, 0x7f, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x23, 0xbc, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','7',0, /* 26543, 0x9f2, U+23bc, KEY_horizlinescan7, HORIZONTAL SCAN LINE-7 */
0x2d, 0x81, 0x00, 0x00, 0x09, 0xf3, 0x00, 0x23, 0xbd, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','9',0, /* 26571, 0x9f3, U+23bd, KEY_horizlinescan9, HORIZONTAL SCAN LINE-9 */
0x9c, 0x7c, 0x00, 0x00, 0x09, 0xf4, 0x00, 0x25, 0x1c, 'K','E','Y','_','l','e','f','t','t',0, /* 26590, 0x9f4, U+251c, KEY_leftt, BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
0x3a, 0x44, 0x00, 0x00, 0x09, 0xf5, 0x00, 0x25, 0x24, 'K','E','Y','_','r','i','g','h','t','t',0, /* 26610, 0x9f5, U+2524, KEY_rightt, BOX DRAWINGS LIGHT VERTICAL AND LEFT */
0x4d, 0xf8, 0x00, 0x00, 0x09, 0xf6, 0x00, 0x25, 0x34, 'K','E','Y','_','b','o','t','t',0, /* 26628, 0x9f6, U+2534, KEY_bott, BOX DRAWINGS LIGHT UP AND HORIZONTAL */
0x4e, 0x80, 0x00, 0x00, 0x09, 0xf7, 0x00, 0x25, 0x2c, 'K','E','Y','_','t','o','p','t',0, /* 26646, 0x9f7, U+252c, KEY_topt, BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
0x76, 0x1c, 0x00, 0x00, 0x09, 0xf8, 0x00, 0x25, 0x02, 'K','E','Y','_','v','e','r','t','b','a','r',0, /* 26667, 0x9f8, U+2502, KEY_vertbar, BOX DRAWINGS LIGHT VERTICAL */
0x72, 0xbf, 0x00, 0x00, 0x0a, 0xa1, 0x00, 0x20, 0x03, 'K','E','Y','_','e','m','s','p','a','c','e',0, /* 26688, 0xaa1, U+2003, KEY_emspace, EM SPACE */
0x72, 0xdf, 0x00, 0x00, 0x0a, 0xa2, 0x00, 0x20, 0x02, 'K','E','Y','_','e','n','s','p','a','c','e',0, /* 26709, 0xaa2, U+2002, KEY_enspace, EN SPACE */
0xde, 0x7f, 0x00, 0x00, 0x0a, 0xa3, 0x00, 0x20, 0x04, 'K','E','Y','_','e','m','3','s','p','a','c','e',0, /* 26731, 0xaa3, U+2004, KEY_em3space, THREE-PER-EM SPACE */
0xde, 0x9f, 0x00, 0x00, 0x0a, 0xa4, 0x00, 0x20, 0x05, 'K','E','Y','_','e','m','4','s','p','a','c','e',0, /* 26753, 0xaa4, U+2005, KEY_em4space, FOUR-PER-EM SPACE */
0x8e, 0x9f, 0x00, 0x00, 0x0a, 0xa5, 0x00, 0x20, 0x07, 'K','E','Y','_','d','i','g','i','t','s','p','a','c','e',0, /* 26777, 0xaa5, U+2007, KEY_digitspace, FIGURE SPACE */
0xb4, 0x9f, 0x00, 0x00, 0x0a, 0xa6, 0x00, 0x20, 0x08, 'K','E','Y','_','p','u','n','c','t','s','p','a','c','e',0, /* 26801, 0xaa6, U+2008, KEY_punctspace, PUNCTUATION SPACE */
0xd7, 0x5f, 0x00, 0x00, 0x0a, 0xa7, 0x00, 0x20, 0x09, 'K','E','Y','_','t','h','i','n','s','p','a','c','e',0, /* 26824, 0xaa7, U+2009, KEY_thinspace, THIN SPACE */
0xc8, 0x5f, 0x00, 0x00, 0x0a, 0xa8, 0x00, 0x20, 0x0a, 'K','E','Y','_','h','a','i','r','s','p','a','c','e',0, /* 26847, 0xaa8, U+200a, KEY_hairspace, HAIR SPACE */
0x38, 0xa2, 0x00, 0x00, 0x0a, 0xa9, 0x00, 0x20, 0x14, 'K','E','Y','_','e','m','d','a','s','h',0, /* 26867, 0xaa9, U+2014, KEY_emdash, EM DASH */
0x38, 0xb2, 0x00, 0x00, 0x0a, 0xaa, 0x00, 0x20, 0x13, 'K','E','Y','_','e','n','d','a','s','h',0, /* 26887, 0xaaa, U+2013, KEY_endash, EN DASH */
0x57, 0x4b, 0x00, 0x00, 0x0a, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','s','i','g','n','i','f','b','l','a','n','k',0, /* 26912, 0xaac, KEY_signifblank, (U+2423 OPEN BOX) */
0xe5, 0x21, 0x00, 0x00, 0x0a, 0xae, 0x00, 0x20, 0x26, 'K','E','Y','_','e','l','l','i','p','s','i','s',0, /* 26934, 0xaae, U+2026, KEY_ellipsis, HORIZONTAL ELLIPSIS */
0xe4, 0x8a, 0x00, 0x00, 0x0a, 0xaf, 0x00, 0x20, 0x25, 'K','E','Y','_','d','o','u','b','b','a','s','e','l','i','n','e','d','o','t',0, /* 26963, 0xaaf, U+2025, KEY_doubbaselinedot, TWO DOT LEADER */
0xea, 0x0c, 0x00, 0x00, 0x0a, 0xb0, 0x00, 0x21, 0x53, 'K','E','Y','_','o','n','e','t','h','i','r','d',0, /* 26985, 0xab0, U+2153, KEY_onethird, VULGAR FRACTION ONE THIRD */
0xe0, 0x8b, 0x00, 0x00, 0x0a, 0xb1, 0x00, 0x21, 0x54, 'K','E','Y','_','t','w','o','t','h','i','r','d','s',0, /* 27008, 0xab1, U+2154, KEY_twothirds, VULGAR FRACTION TWO THIRDS */
0xe9, 0x30, 0x00, 0x00, 0x0a, 0xb2, 0x00, 0x21, 0x55, 'K','E','Y','_','o','n','e','f','i','f','t','h',0, /* 27030, 0xab2, U+2155, KEY_onefifth, VULGAR FRACTION ONE FIFTH */
0xde, 0xd3, 0x00, 0x00, 0x0a, 0xb3, 0x00, 0x21, 0x56, 'K','E','Y','_','t','w','o','f','i','f','t','h','s',0, /* 27053, 0xab3, U+2156, KEY_twofifths, VULGAR FRACTION TWO FIFTHS */
0x5f, 0x53, 0x00, 0x00, 0x0a, 0xb4, 0x00, 0x21, 0x57, 'K','E','Y','_','t','h','r','e','e','f','i','f','t','h','s',0, /* 27078, 0xab4, U+2157, KEY_threefifths, VULGAR FRACTION THREE FIFTHS */
0x9f, 0x93, 0x00, 0x00, 0x0a, 0xb5, 0x00, 0x21, 0x58, 'K','E','Y','_','f','o','u','r','f','i','f','t','h','s',0, /* 27102, 0xab5, U+2158, KEY_fourfifths, VULGAR FRACTION FOUR FIFTHS */
0xea, 0x48, 0x00, 0x00, 0x0a, 0xb6, 0x00, 0x21, 0x59, 'K','E','Y','_','o','n','e','s','i','x','t','h',0, /* 27124, 0xab6, U+2159, KEY_onesixth, VULGAR FRACTION ONE SIXTH */
0x99, 0x03, 0x00, 0x00, 0x0a, 0xb7, 0x00, 0x21, 0x5a, 'K','E','Y','_','f','i','v','e','s','i','x','t','h','s',0, /* 27148, 0xab7, U+215a, KEY_fivesixths, VULGAR FRACTION FIVE SIXTHS */
0x38, 0x18, 0x00, 0x00, 0x0a, 0xb8, 0x00, 0x21, 0x05, 'K','E','Y','_','c','a','r','e','o','f',0, /* 27168, 0xab8, U+2105, KEY_careof, CARE OF */
0x71, 0x82, 0x00, 0x00, 0x0a, 0xbb, 0x00, 0x20, 0x12, 'K','E','Y','_','f','i','g','d','a','s','h',0, /* 27189, 0xabb, U+2012, KEY_figdash, FIGURE DASH */
0x9f, 0x52, 0x00, 0x00, 0x0a, 0xbc, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','a','n','g','l','e','b','r','a','c','k','e','t',0, /* 27219, 0xabc, KEY_leftanglebracket, (U+27E8 MATHEMATICAL LEFT ANGLE BRACKET) */
0x1c, 0xac, 0x00, 0x00, 0x0a, 0xbd, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','c','i','m','a','l','p','o','i','n','t',0, /* 27245, 0xabd, KEY_decimalpoint, (U+002E FULL STOP) */
0xdf, 0x52, 0x00, 0x00, 0x0a, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','a','n','g','l','e','b','r','a','c','k','e','t',0, /* 27276, 0xabe, KEY_rightanglebracket, (U+27E9 MATHEMATICAL RIGHT ANGLE BRACKET) */
0x39, 0x68, 0x00, 0x00, 0x0a, 0xbf, 0x00, 0x00, 0x00, 'K','E','Y','_','m','a','r','k','e','r',0, /* 27296, 0xabf, KEY_marker */
0xd2, 0x98, 0x00, 0x00, 0x0a, 0xc3, 0x00, 0x21, 0x5b, 'K','E','Y','_','o','n','e','e','i','g','h','t','h',0, /* 27319, 0xac3, U+215b, KEY_oneeighth, VULGAR FRACTION ONE EIGHTH */
0xbe, 0xa3, 0x00, 0x00, 0x0a, 0xc4, 0x00, 0x21, 0x5c, 'K','E','Y','_','t','h','r','e','e','e','i','g','h','t','h','s',0, /* 27345, 0xac4, U+215c, KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */
0x2d, 0xa3, 0x00, 0x00, 0x0a, 0xc5, 0x00, 0x21, 0x5d, 'K','E','Y','_','f','i','v','e','e','i','g','h','t','h','s',0, /* 27370, 0xac5, U+215d, KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */
0xb7, 0x23, 0x00, 0x00, 0x0a, 0xc6, 0x00, 0x21, 0x5e, 'K','E','Y','_','s','e','v','e','n','e','i','g','h','t','h','s',0, /* 27396, 0xac6, U+215e, KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */
0xd8, 0x4b, 0x00, 0x00, 0x0a, 0xc9, 0x00, 0x21, 0x22, 'K','E','Y','_','t','r','a','d','e','m','a','r','k',0, /* 27419, 0xac9, U+2122, KEY_trademark, TRADE MARK SIGN */
0x63, 0x0b, 0x00, 0x00, 0x0a, 0xca, 0x00, 0x00, 0x00, 'K','E','Y','_','s','i','g','n','a','t','u','r','e','m','a','r','k',0, /* 27446, 0xaca, KEY_signaturemark, (U+2613 SALTIRE) */
0xb4, 0x49, 0x00, 0x00, 0x0a, 0xcb, 0x00, 0x00, 0x00, 'K','E','Y','_','t','r','a','d','e','m','a','r','k','i','n','c','i','r','c','l','e',0, /* 27477, 0xacb, KEY_trademarkincircle */
0x1f, 0xf9, 0x00, 0x00, 0x0a, 0xcc, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','o','p','e','n','t','r','i','a','n','g','l','e',0, /* 27507, 0xacc, KEY_leftopentriangle, (U+25C1 WHITE LEFT-POINTING TRIANGLE) */
0x5f, 0xf9, 0x00, 0x00, 0x0a, 0xcd, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','o','p','e','n','t','r','i','a','n','g','l','e',0, /* 27538, 0xacd, KEY_rightopentriangle, (U+25B7 WHITE RIGHT-POINTING TRIANGLE) */
0x61, 0x49, 0x00, 0x00, 0x0a, 0xce, 0x00, 0x00, 0x00, 'K','E','Y','_','e','m','o','p','e','n','c','i','r','c','l','e',0, /* 27564, 0xace, KEY_emopencircle, (U+25CB WHITE CIRCLE) */
0x18, 0x19, 0x00, 0x00, 0x0a, 0xcf, 0x00, 0x00, 0x00, 'K','E','Y','_','e','m','o','p','e','n','r','e','c','t','a','n','g','l','e',0, /* 27593, 0xacf, KEY_emopenrectangle, (U+25AF WHITE VERTICAL RECTANGLE) */
0x54, 0x4b, 0x00, 0x00, 0x0a, 0xd0, 0x00, 0x20, 0x18, 'K','E','Y','_','l','e','f','t','s','i','n','g','l','e','q','u','o','t','e','m','a','r','k',0, /* 27626, 0xad0, U+2018, KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */
0x54, 0x4b, 0x00, 0x00, 0x0a, 0xd1, 0x00, 0x20, 0x19, 'K','E','Y','_','r','i','g','h','t','s','i','n','g','l','e','q','u','o','t','e','m','a','r','k',0, /* 27660, 0xad1, U+2019, KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */
0x9c, 0x4b, 0x00, 0x00, 0x0a, 0xd2, 0x00, 0x20, 0x1c, 'K','E','Y','_','l','e','f','t','d','o','u','b','l','e','q','u','o','t','e','m','a','r','k',0, /* 27693, 0xad2, U+201c, KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */
0x9c, 0x4b, 0x00, 0x00, 0x0a, 0xd3, 0x00, 0x20, 0x1d, 'K','E','Y','_','r','i','g','h','t','d','o','u','b','l','e','q','u','o','t','e','m','a','r','k',0, /* 27727, 0xad3, U+201d, KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */
0xbd, 0xb0, 0x00, 0x00, 0x0a, 0xd4, 0x00, 0x21, 0x1e, 'K','E','Y','_','p','r','e','s','c','r','i','p','t','i','o','n',0, /* 27753, 0xad4, U+211e, KEY_prescription, PRESCRIPTION TAKE */
0xe9, 0x85, 0x00, 0x00, 0x0a, 0xd5, 0x00, 0x20, 0x30, 'K','E','Y','_','p','e','r','m','i','l','l','e',0, /* 27775, 0xad5, U+2030, KEY_permille, PER MILLE SIGN */
0x74, 0x75, 0x00, 0x00, 0x0a, 0xd6, 0x00, 0x20, 0x32, 'K','E','Y','_','m','i','n','u','t','e','s',0, /* 27796, 0xad6, U+2032, KEY_minutes, PRIME */
0x74, 0x7b, 0x00, 0x00, 0x0a, 0xd7, 0x00, 0x20, 0x33, 'K','E','Y','_','s','e','c','o','n','d','s',0, /* 27817, 0xad7, U+2033, KEY_seconds, DOUBLE PRIME */
0x9b, 0xd5, 0x00, 0x00, 0x0a, 0xd9, 0x00, 0x27, 0x1d, 'K','E','Y','_','l','a','t','i','n','c','r','o','s','s',0, /* 27841, 0xad9, U+271d, KEY_latincross, LATIN CROSS */
0xe5, 0x7f, 0x00, 0x00, 0x0a, 0xda, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','x','a','g','r','a','m',0, /* 27863, 0xada, KEY_hexagram */
0xe9, 0x5e, 0x00, 0x00, 0x0a, 0xdb, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','r','e','c','t','b','u','l','l','e','t',0, /* 27893, 0xadb, KEY_filledrectbullet, (U+25AC BLACK RECTANGLE) */
0x09, 0x1e, 0x00, 0x00, 0x0a, 0xdc, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','l','e','f','t','t','r','i','b','u','l','l','e','t',0, /* 27926, 0xadc, KEY_filledlefttribullet, (U+25C0 BLACK LEFT-POINTING TRIANGLE) */
0xf1, 0x1e, 0x00, 0x00, 0x0a, 0xdd, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','r','i','g','h','t','t','r','i','b','u','l','l','e','t',0, /* 27960, 0xadd, KEY_filledrighttribullet, (U+25B6 BLACK RIGHT-POINTING TRIANGLE) */
0x2c, 0xc9, 0x00, 0x00, 0x0a, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','e','m','f','i','l','l','e','d','c','i','r','c','l','e',0, /* 27988, 0xade, KEY_emfilledcircle, (U+25CF BLACK CIRCLE) */
0x4b, 0x3e, 0x00, 0x00, 0x0a, 0xdf, 0x00, 0x00, 0x00, 'K','E','Y','_','e','m','f','i','l','l','e','d','r','e','c','t',0, /* 28014, 0xadf, KEY_emfilledrect, (U+25AE BLACK VERTICAL RECTANGLE) */
0x5a, 0x9e, 0x00, 0x00, 0x0a, 0xe0, 0x00, 0x00, 0x00, 'K','E','Y','_','e','n','o','p','e','n','c','i','r','c','b','u','l','l','e','t',0, /* 28044, 0xae0, KEY_enopencircbullet, (U+25E6 WHITE BULLET) */
0x13, 0x1e, 0x00, 0x00, 0x0a, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','e','n','o','p','e','n','s','q','u','a','r','e','b','u','l','l','e','t',0, /* 28076, 0xae1, KEY_enopensquarebullet, (U+25AB WHITE SMALL SQUARE) */
0xb1, 0x5e, 0x00, 0x00, 0x0a, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','o','p','e','n','r','e','c','t','b','u','l','l','e','t',0, /* 28104, 0xae2, KEY_openrectbullet, (U+25AD WHITE RECTANGLE) */
0x85, 0xd2, 0x00, 0x00, 0x0a, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','o','p','e','n','t','r','i','b','u','l','l','e','t','u','p',0, /* 28133, 0xae3, KEY_opentribulletup, (U+25B3 WHITE UP-POINTING TRIANGLE) */
0x18, 0x18, 0x00, 0x00, 0x0a, 0xe4, 0x00, 0x00, 0x00, 'K','E','Y','_','o','p','e','n','t','r','i','b','u','l','l','e','t','d','o','w','n',0, /* 28164, 0xae4, KEY_opentribulletdown, (U+25BD WHITE DOWN-POINTING TRIANGLE) */
0xea, 0x9c, 0x00, 0x00, 0x0a, 0xe5, 0x00, 0x00, 0x00, 'K','E','Y','_','o','p','e','n','s','t','a','r',0, /* 28186, 0xae5, KEY_openstar, (U+2606 WHITE STAR) */
0xd2, 0x9e, 0x00, 0x00, 0x0a, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','e','n','f','i','l','l','e','d','c','i','r','c','b','u','l','l','e','t',0, /* 28218, 0xae6, KEY_enfilledcircbullet, (U+2022 BULLET) */
0xfd, 0x9e, 0x00, 0x00, 0x0a, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','e','n','f','i','l','l','e','d','s','q','b','u','l','l','e','t',0, /* 28248, 0xae7, KEY_enfilledsqbullet, (U+25AA BLACK SMALL SQUARE) */
0xf5, 0xd2, 0x00, 0x00, 0x0a, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','t','r','i','b','u','l','l','e','t','u','p',0, /* 28279, 0xae8, KEY_filledtribulletup, (U+25B2 BLACK UP-POINTING TRIANGLE) */
0xd8, 0x18, 0x00, 0x00, 0x0a, 0xe9, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','t','r','i','b','u','l','l','e','t','d','o','w','n',0, /* 28312, 0xae9, KEY_filledtribulletdown, (U+25BC BLACK DOWN-POINTING TRIANGLE) */
0x38, 0xec, 0x00, 0x00, 0x0a, 0xea, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','p','o','i','n','t','e','r',0, /* 28337, 0xaea, KEY_leftpointer, (U+261C WHITE LEFT POINTING INDEX) */
0xaa, 0xec, 0x00, 0x00, 0x0a, 0xeb, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','p','o','i','n','t','e','r',0, /* 28363, 0xaeb, KEY_rightpointer, (U+261E WHITE RIGHT POINTING INDEX) */
0x4d, 0xe4, 0x00, 0x00, 0x0a, 0xec, 0x00, 0x26, 0x63, 'K','E','Y','_','c','l','u','b',0, /* 28381, 0xaec, U+2663, KEY_club, BLACK CLUB SUIT */
0x71, 0x14, 0x00, 0x00, 0x0a, 0xed, 0x00, 0x26, 0x66, 'K','E','Y','_','d','i','a','m','o','n','d',0, /* 28402, 0xaed, U+2666, KEY_diamond, BLACK DIAMOND SUIT */
0x9c, 0x24, 0x00, 0x00, 0x0a, 0xee, 0x00, 0x26, 0x65, 'K','E','Y','_','h','e','a','r','t',0, /* 28421, 0xaee, U+2665, KEY_heart, BLACK HEART SUIT */
0x70, 0xb5, 0x00, 0x00, 0x0a, 0xf0, 0x00, 0x27, 0x20, 'K','E','Y','_','m','a','l','t','e','s','e','c','r','o','s','s',0, /* 28447, 0xaf0, U+2720, KEY_maltesecross, MALTESE CROSS */
0x37, 0xe0, 0x00, 0x00, 0x0a, 0xf1, 0x00, 0x20, 0x20, 'K','E','Y','_','d','a','g','g','e','r',0, /* 28467, 0xaf1, U+2020, KEY_dagger, DAGGER */
0x5f, 0xe0, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x20, 0x21, 'K','E','Y','_','d','o','u','b','l','e','d','a','g','g','e','r',0, /* 28493, 0xaf2, U+2021, KEY_doubledagger, DOUBLE DAGGER */
0xc3, 0x8b, 0x00, 0x00, 0x0a, 0xf3, 0x00, 0x27, 0x13, 'K','E','Y','_','c','h','e','c','k','m','a','r','k',0, /* 28516, 0xaf3, U+2713, KEY_checkmark, CHECK MARK */
0x0b, 0x15, 0x00, 0x00, 0x0a, 0xf4, 0x00, 0x27, 0x17, 'K','E','Y','_','b','a','l','l','o','t','c','r','o','s','s',0, /* 28541, 0xaf4, U+2717, KEY_ballotcross, BALLOT X */
0xbf, 0x88, 0x00, 0x00, 0x0a, 0xf5, 0x00, 0x26, 0x6f, 'K','E','Y','_','m','u','s','i','c','a','l','s','h','a','r','p',0, /* 28567, 0xaf5, U+266f, KEY_musicalsharp, MUSIC SHARP SIGN */
0x5f, 0x36, 0x00, 0x00, 0x0a, 0xf6, 0x00, 0x26, 0x6d, 'K','E','Y','_','m','u','s','i','c','a','l','f','l','a','t',0, /* 28592, 0xaf6, U+266d, KEY_musicalflat, MUSIC FLAT SIGN */
0x9a, 0x6a, 0x00, 0x00, 0x0a, 0xf7, 0x00, 0x26, 0x42, 'K','E','Y','_','m','a','l','e','s','y','m','b','o','l',0, /* 28616, 0xaf7, U+2642, KEY_malesymbol, MALE SIGN */
0x3a, 0x6a, 0x00, 0x00, 0x0a, 0xf8, 0x00, 0x26, 0x40, 'K','E','Y','_','f','e','m','a','l','e','s','y','m','b','o','l',0, /* 28642, 0xaf8, U+2640, KEY_femalesymbol, FEMALE SIGN */
0xd5, 0x5d, 0x00, 0x00, 0x0a, 0xf9, 0x00, 0x26, 0x0e, 'K','E','Y','_','t','e','l','e','p','h','o','n','e',0, /* 28665, 0xaf9, U+260e, KEY_telephone, BLACK TELEPHONE */
0xc8, 0xec, 0x00, 0x00, 0x0a, 0xfa, 0x00, 0x23, 0x15, 'K','E','Y','_','t','e','l','e','p','h','o','n','e','r','e','c','o','r','d','e','r',0, /* 28696, 0xafa, U+2315, KEY_telephonerecorder, TELEPHONE RECORDER */
0x2a, 0xe8, 0x00, 0x00, 0x0a, 0xfb, 0x00, 0x21, 0x17, 'K','E','Y','_','p','h','o','n','o','g','r','a','p','h','c','o','p','y','r','i','g','h','t',0, /* 28729, 0xafb, U+2117, KEY_phonographcopyright, SOUND RECORDING COPYRIGHT */
0x9b, 0xde, 0x00, 0x00, 0x0a, 0xfc, 0x00, 0x20, 0x38, 'K','E','Y','_','c','a','r','e','t',0, /* 28748, 0xafc, U+2038, KEY_caret, CARET */
0x7c, 0x4b, 0x00, 0x00, 0x0a, 0xfd, 0x00, 0x20, 0x1a, 'K','E','Y','_','s','i','n','g','l','e','l','o','w','q','u','o','t','e','m','a','r','k',0, /* 28780, 0xafd, U+201a, KEY_singlelowquotemark, SINGLE LOW-9 QUOTATION MARK */
0xbc, 0x4b, 0x00, 0x00, 0x0a, 0xfe, 0x00, 0x20, 0x1e, 'K','E','Y','_','d','o','u','b','l','e','l','o','w','q','u','o','t','e','m','a','r','k',0, /* 28812, 0xafe, U+201e, KEY_doublelowquotemark, DOUBLE LOW-9 QUOTATION MARK */
0x39, 0x9c, 0x00, 0x00, 0x0a, 0xff, 0x00, 0x00, 0x00, 'K','E','Y','_','c','u','r','s','o','r',0, /* 28832, 0xaff, KEY_cursor */
0xcc, 0xbe, 0x00, 0x00, 0x0b, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','c','a','r','e','t',0, /* 28855, 0xba3, KEY_leftcaret, (U+003C LESS-THAN SIGN) */
0xa9, 0x3e, 0x00, 0x00, 0x0b, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','c','a','r','e','t',0, /* 28879, 0xba6, KEY_rightcaret, (U+003E GREATER-THAN SIGN) */
0xcd, 0x3e, 0x00, 0x00, 0x0b, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','d','o','w','n','c','a','r','e','t',0, /* 28902, 0xba8, KEY_downcaret, (U+2228 LOGICAL OR) */
0x75, 0xfe, 0x00, 0x00, 0x0b, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','u','p','c','a','r','e','t',0, /* 28923, 0xba9, KEY_upcaret, (U+2227 LOGICAL AND) */
0x75, 0x9c, 0x00, 0x00, 0x0b, 0xc0, 0x00, 0x00, 0x00, 'K','E','Y','_','o','v','e','r','b','a','r',0, /* 28944, 0xbc0, KEY_overbar, (U+00AF MACRON) */
0xe6, 0xd5, 0x00, 0x00, 0x0b, 0xc2, 0x00, 0x22, 0xa4, 'K','E','Y','_','d','o','w','n','t','a','c','k',0, /* 28966, 0xbc2, U+22a4, KEY_downtack, DOWN TACK */
0x3b, 0x5b, 0x00, 0x00, 0x0b, 0xc3, 0x00, 0x00, 0x00, 'K','E','Y','_','u','p','s','h','o','e',0, /* 28986, 0xbc3, KEY_upshoe, (U+2229 INTERSECTION) */
0xce, 0xb1, 0x00, 0x00, 0x0b, 0xc4, 0x00, 0x23, 0x0a, 'K','E','Y','_','d','o','w','n','s','t','i','l','e',0, /* 29009, 0xbc4, U+230a, KEY_downstile, LEFT FLOOR */
0xec, 0x1c, 0x00, 0x00, 0x0b, 0xc6, 0x00, 0x00, 0x00, 'K','E','Y','_','u','n','d','e','r','b','a','r',0, /* 29031, 0xbc6, KEY_underbar, (U+005F LOW LINE) */
0x26, 0xe2, 0x00, 0x00, 0x0b, 0xca, 0x00, 0x22, 0x18, 'K','E','Y','_','j','o','t',0, /* 29048, 0xbca, U+2218, KEY_jot, RING OPERATOR */
0x4e, 0x52, 0x00, 0x00, 0x0b, 0xcc, 0x00, 0x23, 0x95, 'K','E','Y','_','q','u','a','d',0, /* 29066, 0xbcc, U+2395, KEY_quad, APL FUNCTIONAL SYMBOL QUAD */
0x3b, 0x35, 0x00, 0x00, 0x0b, 0xce, 0x00, 0x22, 0xa5, 'K','E','Y','_','u','p','t','a','c','k',0, /* 29086, 0xbce, U+22a5, KEY_uptack, UP TACK */
0x38, 0x89, 0x00, 0x00, 0x0b, 0xcf, 0x00, 0x25, 0xcb, 'K','E','Y','_','c','i','r','c','l','e',0, /* 29106, 0xbcf, U+25cb, KEY_circle, WHITE CIRCLE */
0x77, 0x71, 0x00, 0x00, 0x0b, 0xd3, 0x00, 0x23, 0x08, 'K','E','Y','_','u','p','s','t','i','l','e',0, /* 29127, 0xbd3, U+2308, KEY_upstile, LEFT CEILING */
0xe6, 0xfb, 0x00, 0x00, 0x0b, 0xd6, 0x00, 0x00, 0x00, 'K','E','Y','_','d','o','w','n','s','h','o','e',0, /* 29149, 0xbd6, KEY_downshoe, (U+222A UNION) */
0xd4, 0xfb, 0x00, 0x00, 0x0b, 0xd8, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','s','h','o','e',0, /* 29172, 0xbd8, KEY_rightshoe, (U+2283 SUPERSET OF) */
0xe6, 0xbb, 0x00, 0x00, 0x0b, 0xda, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','s','h','o','e',0, /* 29194, 0xbda, KEY_leftshoe, (U+2282 SUBSET OF) */
0xe6, 0x95, 0x00, 0x00, 0x0b, 0xdc, 0x00, 0x22, 0xa3, 'K','E','Y','_','l','e','f','t','t','a','c','k',0, /* 29216, 0xbdc, U+22a3, KEY_lefttack, LEFT TACK */
0xd4, 0xd5, 0x00, 0x00, 0x0b, 0xfc, 0x00, 0x22, 0xa2, 'K','E','Y','_','r','i','g','h','t','t','a','c','k',0, /* 29239, 0xbfc, U+22a2, KEY_righttack, RIGHT TACK */
0x45, 0x15, 0x00, 0x00, 0x0c, 0xdf, 0x00, 0x20, 0x17, 'K','E','Y','_','h','e','b','r','e','w','_','d','o','u','b','l','e','l','o','w','l','i','n','e',0, /* 29273, 0xcdf, U+2017, KEY_hebrew_doublelowline, DOUBLE LOW LINE */
0x42, 0x6c, 0x00, 0x00, 0x0c, 0xe0, 0x00, 0x05, 0xd0, 'K','E','Y','_','h','e','b','r','e','w','_','a','l','e','p','h',0, /* 29299, 0xce0, U+05d0, KEY_hebrew_aleph, HEBREW LETTER ALEF */
0x90, 0x4e, 0x00, 0x00, 0x0c, 0xe1, 0x00, 0x05, 0xd1, 'K','E','Y','_','h','e','b','r','e','w','_','b','e','t',0, /* 29323, 0xce1, U+05d1, KEY_hebrew_bet, HEBREW LETTER BET */
0x21, 0x04, 0x00, 0x00, 0x0c, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','b','e','t','h',0, /* 29348, 0xce1, KEY_hebrew_beth, deprecated */
0x42, 0xc2, 0x00, 0x00, 0x0c, 0xe2, 0x00, 0x05, 0xd2, 'K','E','Y','_','h','e','b','r','e','w','_','g','i','m','e','l',0, /* 29374, 0xce2, U+05d2, KEY_hebrew_gimel, HEBREW LETTER GIMEL */
0x86, 0x02, 0x00, 0x00, 0x0c, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','g','i','m','m','e','l',0, /* 29401, 0xce2, KEY_hebrew_gimmel, deprecated */
0x42, 0x56, 0x00, 0x00, 0x0c, 0xe3, 0x00, 0x05, 0xd3, 'K','E','Y','_','h','e','b','r','e','w','_','d','a','l','e','t',0, /* 29427, 0xce3, U+05d3, KEY_hebrew_dalet, HEBREW LETTER DALET */
0x85, 0x14, 0x00, 0x00, 0x0c, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','d','a','l','e','t','h',0, /* 29454, 0xce3, KEY_hebrew_daleth, deprecated */
0xc7, 0xf9, 0x00, 0x00, 0x0c, 0xe4, 0x00, 0x05, 0xd4, 'K','E','Y','_','h','e','b','r','e','w','_','h','e',0, /* 29477, 0xce4, U+05d4, KEY_hebrew_he, HEBREW LETTER HE */
0x90, 0x9d, 0x00, 0x00, 0x0c, 0xe5, 0x00, 0x05, 0xd5, 'K','E','Y','_','h','e','b','r','e','w','_','w','a','w',0, /* 29501, 0xce5, U+05d5, KEY_hebrew_waw, HEBREW LETTER VAV */
0x21, 0xa4, 0x00, 0x00, 0x0c, 0xe6, 0x00, 0x05, 0xd6, 'K','E','Y','_','h','e','b','r','e','w','_','z','a','i','n',0, /* 29526, 0xce6, U+05d6, KEY_hebrew_zain, HEBREW LETTER ZAYIN */
0x43, 0xec, 0x00, 0x00, 0x0c, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','z','a','y','i','n',0, /* 29552, 0xce6, KEY_hebrew_zayin, deprecated */
0x21, 0x06, 0x00, 0x00, 0x0c, 0xe7, 0x00, 0x05, 0xd7, 'K','E','Y','_','h','e','b','r','e','w','_','c','h','e','t',0, /* 29577, 0xce7, U+05d7, KEY_hebrew_chet, HEBREW LETTER HET */
0x90, 0x66, 0x00, 0x00, 0x0c, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','h','e','t',0, /* 29601, 0xce7, KEY_hebrew_het, deprecated */
0x90, 0x96, 0x00, 0x00, 0x0c, 0xe8, 0x00, 0x05, 0xd8, 'K','E','Y','_','h','e','b','r','e','w','_','t','e','t',0, /* 29625, 0xce8, U+05d8, KEY_hebrew_tet, HEBREW LETTER TET */
0x21, 0x94, 0x00, 0x00, 0x0c, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','t','e','t','h',0, /* 29650, 0xce8, KEY_hebrew_teth, deprecated */
0x90, 0xae, 0x00, 0x00, 0x0c, 0xe9, 0x00, 0x05, 0xd9, 'K','E','Y','_','h','e','b','r','e','w','_','y','o','d',0, /* 29674, 0xce9, U+05d9, KEY_hebrew_yod, HEBREW LETTER YOD */
0x31, 0x04, 0x00, 0x00, 0x0c, 0xea, 0x00, 0x05, 0xda, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','k','a','p','h',0, /* 29704, 0xcea, U+05da, KEY_hebrew_finalkaph, HEBREW LETTER FINAL KAF */
0x21, 0x34, 0x00, 0x00, 0x0c, 0xeb, 0x00, 0x05, 0xdb, 'K','E','Y','_','h','e','b','r','e','w','_','k','a','p','h',0, /* 29729, 0xceb, U+05db, KEY_hebrew_kaph, HEBREW LETTER KAF */
0x42, 0xca, 0x00, 0x00, 0x0c, 0xec, 0x00, 0x05, 0xdc, 'K','E','Y','_','h','e','b','r','e','w','_','l','a','m','e','d',0, /* 29755, 0xcec, U+05dc, KEY_hebrew_lamed, HEBREW LETTER LAMED */
0x18, 0x5b, 0x00, 0x00, 0x0c, 0xed, 0x00, 0x05, 0xdd, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','m','e','m',0, /* 29784, 0xced, U+05dd, KEY_hebrew_finalmem, HEBREW LETTER FINAL MEM */
0x90, 0x73, 0x00, 0x00, 0x0c, 0xee, 0x00, 0x05, 0xde, 'K','E','Y','_','h','e','b','r','e','w','_','m','e','m',0, /* 29808, 0xcee, U+05de, KEY_hebrew_mem, HEBREW LETTER MEM */
0x18, 0x80, 0x00, 0x00, 0x0c, 0xef, 0x00, 0x05, 0xdf, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','n','u','n',0, /* 29837, 0xcef, U+05df, KEY_hebrew_finalnun, HEBREW LETTER FINAL NUN */
0x90, 0x98, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x05, 0xe0, 'K','E','Y','_','h','e','b','r','e','w','_','n','u','n',0, /* 29861, 0xcf0, U+05e0, KEY_hebrew_nun, HEBREW LETTER NUN */
0x86, 0xda, 0x00, 0x00, 0x0c, 0xf1, 0x00, 0x05, 0xe1, 'K','E','Y','_','h','e','b','r','e','w','_','s','a','m','e','c','h',0, /* 29888, 0xcf1, U+05e1, KEY_hebrew_samech, HEBREW LETTER SAMEKH */
0x86, 0xea, 0x00, 0x00, 0x0c, 0xf1, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','s','a','m','e','k','h',0, /* 29915, 0xcf1, KEY_hebrew_samekh, deprecated */
0x21, 0x3c, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x05, 0xe2, 'K','E','Y','_','h','e','b','r','e','w','_','a','y','i','n',0, /* 29940, 0xcf2, U+05e2, KEY_hebrew_ayin, HEBREW LETTER AYIN */
0x0b, 0xfd, 0x00, 0x00, 0x0c, 0xf3, 0x00, 0x05, 0xe3, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','p','e',0, /* 29968, 0xcf3, U+05e3, KEY_hebrew_finalpe, HEBREW LETTER FINAL PE */
0xc8, 0x09, 0x00, 0x00, 0x0c, 0xf4, 0x00, 0x05, 0xe4, 'K','E','Y','_','h','e','b','r','e','w','_','p','e',0, /* 29991, 0xcf4, U+05e4, KEY_hebrew_pe, HEBREW LETTER PE */
0x31, 0x61, 0x00, 0x00, 0x0c, 0xf5, 0x00, 0x05, 0xe5, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','z','a','d','e',0, /* 30021, 0xcf5, U+05e5, KEY_hebrew_finalzade, HEBREW LETTER FINAL TSADI */
0x31, 0x65, 0x00, 0x00, 0x0c, 0xf5, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','z','a','d','i',0, /* 30051, 0xcf5, KEY_hebrew_finalzadi, deprecated */
0x21, 0x91, 0x00, 0x00, 0x0c, 0xf6, 0x00, 0x05, 0xe6, 'K','E','Y','_','h','e','b','r','e','w','_','z','a','d','e',0, /* 30076, 0xcf6, U+05e6, KEY_hebrew_zade, HEBREW LETTER TSADI */
0x21, 0x95, 0x00, 0x00, 0x0c, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','z','a','d','i',0, /* 30101, 0xcf6, KEY_hebrew_zadi, deprecated */
0x21, 0x9c, 0x00, 0x00, 0x0c, 0xf7, 0x00, 0x05, 0xe7, 'K','E','Y','_','h','e','b','r','e','w','_','q','o','p','h',0, /* 30126, 0xcf7, U+05e7, KEY_hebrew_qoph, HEBREW LETTER QOF */
0x90, 0x84, 0x00, 0x00, 0x0c, 0xf7, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','k','u','f',0, /* 30150, 0xcf7, KEY_hebrew_kuf, deprecated */
0x21, 0x82, 0x00, 0x00, 0x0c, 0xf8, 0x00, 0x05, 0xe8, 'K','E','Y','_','h','e','b','r','e','w','_','r','e','s','h',0, /* 30175, 0xcf8, U+05e8, KEY_hebrew_resh, HEBREW LETTER RESH */
0x21, 0x88, 0x00, 0x00, 0x0c, 0xf9, 0x00, 0x05, 0xe9, 'K','E','Y','_','h','e','b','r','e','w','_','s','h','i','n',0, /* 30200, 0xcf9, U+05e9, KEY_hebrew_shin, HEBREW LETTER SHIN */
0x90, 0x91, 0x00, 0x00, 0x0c, 0xfa, 0x00, 0x05, 0xea, 'K','E','Y','_','h','e','b','r','e','w','_','t','a','w',0, /* 30224, 0xcfa, U+05ea, KEY_hebrew_taw, HEBREW LETTER TAV */
0x90, 0x80, 0x00, 0x00, 0x0c, 0xfa, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','t','a','f',0, /* 30248, 0xcfa, KEY_hebrew_taf, deprecated */
0x88, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','H','e','b','r','e','w','_','s','w','i','t','c','h',0, /* 30275, 0xff7e, KEY_Hebrew_switch, Alias for mode_switch */
0x67, 0x9f, 0x00, 0x00, 0x0d, 0xa1, 0x00, 0x0e, 0x01, 'K','E','Y','_','T','h','a','i','_','k','o','k','a','i',0, /* 30299, 0xda1, U+0e01, KEY_Thai_kokai, THAI CHARACTER KO KAI */
0x9f, 0x53, 0x00, 0x00, 0x0d, 0xa2, 0x00, 0x0e, 0x02, 'K','E','Y','_','T','h','a','i','_','k','h','o','k','h','a','i',0, /* 30325, 0xda2, U+0e02, KEY_Thai_khokhai, THAI CHARACTER KHO KHAI */
0x3f, 0x5a, 0x00, 0x00, 0x0d, 0xa3, 0x00, 0x0e, 0x03, 'K','E','Y','_','T','h','a','i','_','k','h','o','k','h','u','a','t',0, /* 30352, 0xda3, U+0e03, KEY_Thai_khokhuat, THAI CHARACTER KHO KHUAT */
0x3f, 0x57, 0x00, 0x00, 0x0d, 0xa4, 0x00, 0x0e, 0x04, 'K','E','Y','_','T','h','a','i','_','k','h','o','k','h','w','a','i',0, /* 30379, 0xda4, U+0e04, KEY_Thai_khokhwai, THAI CHARACTER KHO KHWAI */
0x9f, 0x74, 0x00, 0x00, 0x0d, 0xa5, 0x00, 0x0e, 0x05, 'K','E','Y','_','T','h','a','i','_','k','h','o','k','h','o','n',0, /* 30405, 0xda5, U+0e05, KEY_Thai_khokhon, THAI CHARACTER KHO KHON */
0xfe, 0xd7, 0x00, 0x00, 0x0d, 0xa6, 0x00, 0x0e, 0x06, 'K','E','Y','_','T','h','a','i','_','k','h','o','r','a','k','h','a','n','g',0, /* 30434, 0xda6, U+0e06, KEY_Thai_khorakhang, THAI CHARACTER KHO RAKHANG */
0xcf, 0xe3, 0x00, 0x00, 0x0d, 0xa7, 0x00, 0x0e, 0x07, 'K','E','Y','_','T','h','a','i','_','n','g','o','n','g','u',0, /* 30459, 0xda7, U+0e07, KEY_Thai_ngongu, THAI CHARACTER NGO NGU */
0x9d, 0x18, 0x00, 0x00, 0x0d, 0xa8, 0x00, 0x0e, 0x08, 'K','E','Y','_','T','h','a','i','_','c','h','o','c','h','a','n',0, /* 30485, 0xda8, U+0e08, KEY_Thai_chochan, THAI CHARACTER CHO CHAN */
0x3a, 0xb7, 0x00, 0x00, 0x0d, 0xa9, 0x00, 0x0e, 0x09, 'K','E','Y','_','T','h','a','i','_','c','h','o','c','h','i','n','g',0, /* 30512, 0xda9, U+0e09, KEY_Thai_choching, THAI CHARACTER CHO CHING */
0x3a, 0x97, 0x00, 0x00, 0x0d, 0xaa, 0x00, 0x0e, 0x0a, 'K','E','Y','_','T','h','a','i','_','c','h','o','c','h','a','n','g',0, /* 30539, 0xdaa, U+0e0a, KEY_Thai_chochang, THAI CHARACTER CHO CHANG */
0xb3, 0xf9, 0x00, 0x00, 0x0d, 0xab, 0x00, 0x0e, 0x0b, 'K','E','Y','_','T','h','a','i','_','s','o','s','o',0, /* 30562, 0xdab, U+0e0b, KEY_Thai_soso, THAI CHARACTER SO SO */
0x9d, 0x2b, 0x00, 0x00, 0x0d, 0xac, 0x00, 0x0e, 0x0c, 'K','E','Y','_','T','h','a','i','_','c','h','o','c','h','o','e',0, /* 30588, 0xdac, U+0e0c, KEY_Thai_chochoe, THAI CHARACTER CHO CHOE */
0xd1, 0xff, 0x00, 0x00, 0x0d, 0xad, 0x00, 0x0e, 0x0d, 'K','E','Y','_','T','h','a','i','_','y','o','y','i','n','g',0, /* 30613, 0xdad, U+0e0d, KEY_Thai_yoying, THAI CHARACTER YO YING */
0x9d, 0x7d, 0x00, 0x00, 0x0d, 0xae, 0x00, 0x0e, 0x0e, 'K','E','Y','_','T','h','a','i','_','d','o','c','h','a','d','a',0, /* 30639, 0xdae, U+0e0e, KEY_Thai_dochada, THAI CHARACTER DO CHADA */
0xa2, 0x65, 0x00, 0x00, 0x0d, 0xaf, 0x00, 0x0e, 0x0f, 'K','E','Y','_','T','h','a','i','_','t','o','p','a','t','a','k',0, /* 30665, 0xdaf, U+0e0f, KEY_Thai_topatak, THAI CHARACTER TO PATAK */
0xa1, 0xe0, 0x00, 0x00, 0x0d, 0xb0, 0x00, 0x0e, 0x10, 'K','E','Y','_','T','h','a','i','_','t','h','o','t','h','a','n',0, /* 30691, 0xdb0, U+0e10, KEY_Thai_thothan, THAI CHARACTER THO THAN */
0x84, 0xcf, 0x00, 0x00, 0x0d, 0xb1, 0x00, 0x0e, 0x11, 'K','E','Y','_','T','h','a','i','_','t','h','o','n','a','n','g','m','o','n','t','h','o',0, /* 30723, 0xdb1, U+0e11, KEY_Thai_thonangmontho, THAI CHARACTER THO NANGMONTHO */
0x12, 0x41, 0x00, 0x00, 0x0d, 0xb2, 0x00, 0x0e, 0x12, 'K','E','Y','_','T','h','a','i','_','t','h','o','p','h','u','t','h','a','o',0, /* 30752, 0xdb2, U+0e12, KEY_Thai_thophuthao, THAI CHARACTER THO PHUTHAO */
0x67, 0xe8, 0x00, 0x00, 0x0d, 0xb3, 0x00, 0x0e, 0x13, 'K','E','Y','_','T','h','a','i','_','n','o','n','e','n',0, /* 30776, 0xdb3, U+0e13, KEY_Thai_nonen, THAI CHARACTER NO NEN */
0x67, 0x1d, 0x00, 0x00, 0x0d, 0xb4, 0x00, 0x0e, 0x14, 'K','E','Y','_','T','h','a','i','_','d','o','d','e','k',0, /* 30800, 0xdb4, U+0e14, KEY_Thai_dodek, THAI CHARACTER DO DEK */
0x68, 0x59, 0x00, 0x00, 0x0d, 0xb5, 0x00, 0x0e, 0x15, 'K','E','Y','_','T','h','a','i','_','t','o','t','a','o',0, /* 30824, 0xdb5, U+0e15, KEY_Thai_totao, THAI CHARACTER TO TAO */
0x44, 0x77, 0x00, 0x00, 0x0d, 0xb6, 0x00, 0x0e, 0x16, 'K','E','Y','_','T','h','a','i','_','t','h','o','t','h','u','n','g',0, /* 30851, 0xdb6, U+0e16, KEY_Thai_thothung, THAI CHARACTER THO THUNG */
0x88, 0x98, 0x00, 0x00, 0x0d, 0xb7, 0x00, 0x0e, 0x17, 'K','E','Y','_','T','h','a','i','_','t','h','o','t','h','a','h','a','n',0, /* 30879, 0xdb7, U+0e17, KEY_Thai_thothahan, THAI CHARACTER THO THAHAN */
0x44, 0x5f, 0x00, 0x00, 0x0d, 0xb8, 0x00, 0x0e, 0x18, 'K','E','Y','_','T','h','a','i','_','t','h','o','t','h','o','n','g',0, /* 30906, 0xdb8, U+0e18, KEY_Thai_thothong, THAI CHARACTER THO THONG */
0xb3, 0xcd, 0x00, 0x00, 0x0d, 0xb9, 0x00, 0x0e, 0x19, 'K','E','Y','_','T','h','a','i','_','n','o','n','u',0, /* 30929, 0xdb9, U+0e19, KEY_Thai_nonu, THAI CHARACTER NO NU */
0x3a, 0x37, 0x00, 0x00, 0x0d, 0xba, 0x00, 0x0e, 0x1a, 'K','E','Y','_','T','h','a','i','_','b','o','b','a','i','m','a','i',0, /* 30956, 0xdba, U+0e1a, KEY_Thai_bobaimai, THAI CHARACTER BO BAIMAI */
0x68, 0x11, 0x00, 0x00, 0x0d, 0xbb, 0x00, 0x0e, 0x1b, 'K','E','Y','_','T','h','a','i','_','p','o','p','l','a',0, /* 30980, 0xdbb, U+0e1b, KEY_Thai_popla, THAI CHARACTER PO PLA */
0x42, 0x37, 0x00, 0x00, 0x0d, 0xbc, 0x00, 0x0e, 0x1c, 'K','E','Y','_','T','h','a','i','_','p','h','o','p','h','u','n','g',0, /* 31007, 0xdbc, U+0e1c, KEY_Thai_phophung, THAI CHARACTER PHO PHUNG */
0xb3, 0x69, 0x00, 0x00, 0x0d, 0xbd, 0x00, 0x0e, 0x1d, 'K','E','Y','_','T','h','a','i','_','f','o','f','a',0, /* 31030, 0xdbd, U+0e1d, KEY_Thai_fofa, THAI CHARACTER FO FA */
0xa0, 0xc0, 0x00, 0x00, 0x0d, 0xbe, 0x00, 0x0e, 0x1e, 'K','E','Y','_','T','h','a','i','_','p','h','o','p','h','a','n',0, /* 31056, 0xdbe, U+0e1e, KEY_Thai_phophan, THAI CHARACTER PHO PHAN */
0x67, 0x40, 0x00, 0x00, 0x0d, 0xbf, 0x00, 0x0e, 0x1f, 'K','E','Y','_','T','h','a','i','_','f','o','f','a','n',0, /* 31080, 0xdbf, U+0e1f, KEY_Thai_fofan, THAI CHARACTER FO FAN */
0x09, 0x81, 0x00, 0x00, 0x0d, 0xc0, 0x00, 0x0e, 0x20, 'K','E','Y','_','T','h','a','i','_','p','h','o','s','a','m','p','h','a','o',0, /* 31109, 0xdc0, U+0e20, KEY_Thai_phosamphao, THAI CHARACTER PHO SAMPHAO */
0xb3, 0xaf, 0x00, 0x00, 0x0d, 0xc1, 0x00, 0x0e, 0x21, 'K','E','Y','_','T','h','a','i','_','m','o','m','a',0, /* 31132, 0xdc1, U+0e21, KEY_Thai_moma, THAI CHARACTER MO MA */
0x68, 0xb9, 0x00, 0x00, 0x0d, 0xc2, 0x00, 0x0e, 0x22, 'K','E','Y','_','T','h','a','i','_','y','o','y','a','k',0, /* 31156, 0xdc2, U+0e22, KEY_Thai_yoyak, THAI CHARACTER YO YAK */
0x68, 0x4b, 0x00, 0x00, 0x0d, 0xc3, 0x00, 0x0e, 0x23, 'K','E','Y','_','T','h','a','i','_','r','o','r','u','a',0, /* 31180, 0xdc3, U+0e23, KEY_Thai_rorua, THAI CHARACTER RO RUA */
0x6c, 0xad, 0x00, 0x00, 0x0d, 0xc4, 0x00, 0x0e, 0x24, 'K','E','Y','_','T','h','a','i','_','r','u',0, /* 31201, 0xdc4, U+0e24, KEY_Thai_ru, THAI CHARACTER RU */
0xcf, 0xf7, 0x00, 0x00, 0x0d, 0xc5, 0x00, 0x0e, 0x25, 'K','E','Y','_','T','h','a','i','_','l','o','l','i','n','g',0, /* 31226, 0xdc5, U+0e25, KEY_Thai_loling, THAI CHARACTER LO LING */
0x6c, 0xa1, 0x00, 0x00, 0x0d, 0xc6, 0x00, 0x0e, 0x26, 'K','E','Y','_','T','h','a','i','_','l','u',0, /* 31247, 0xdc6, U+0e26, KEY_Thai_lu, THAI CHARACTER LU */
0xd1, 0x84, 0x00, 0x00, 0x0d, 0xc7, 0x00, 0x0e, 0x27, 'K','E','Y','_','T','h','a','i','_','w','o','w','a','e','n',0, /* 31272, 0xdc7, U+0e27, KEY_Thai_wowaen, THAI CHARACTER WO WAEN */
0xd0, 0xe5, 0x00, 0x00, 0x0d, 0xc8, 0x00, 0x0e, 0x28, 'K','E','Y','_','T','h','a','i','_','s','o','s','a','l','a',0, /* 31297, 0xdc8, U+0e28, KEY_Thai_sosala, THAI CHARACTER SO SALA */
0xd1, 0x43, 0x00, 0x00, 0x0d, 0xc9, 0x00, 0x0e, 0x29, 'K','E','Y','_','T','h','a','i','_','s','o','r','u','s','i',0, /* 31322, 0xdc9, U+0e29, KEY_Thai_sorusi, THAI CHARACTER SO RUSI */
0x68, 0x5f, 0x00, 0x00, 0x0d, 0xca, 0x00, 0x0e, 0x2a, 'K','E','Y','_','T','h','a','i','_','s','o','s','u','a',0, /* 31346, 0xdca, U+0e2a, KEY_Thai_sosua, THAI CHARACTER SO SUA */
0x67, 0x7a, 0x00, 0x00, 0x0d, 0xcb, 0x00, 0x0e, 0x2b, 'K','E','Y','_','T','h','a','i','_','h','o','h','i','p',0, /* 31370, 0xdcb, U+0e2b, KEY_Thai_hohip, THAI CHARACTER HO HIP */
0x9f, 0xdd, 0x00, 0x00, 0x0d, 0xcc, 0x00, 0x0e, 0x2c, 'K','E','Y','_','T','h','a','i','_','l','o','c','h','u','l','a',0, /* 31396, 0xdcc, U+0e2c, KEY_Thai_lochula, THAI CHARACTER LO CHULA */
0xb3, 0x8f, 0x00, 0x00, 0x0d, 0xcd, 0x00, 0x0e, 0x2d, 'K','E','Y','_','T','h','a','i','_','o','a','n','g',0, /* 31419, 0xdcd, U+0e2d, KEY_Thai_oang, THAI CHARACTER O ANG */
0x3f, 0xbd, 0x00, 0x00, 0x0d, 0xce, 0x00, 0x0e, 0x2e, 'K','E','Y','_','T','h','a','i','_','h','o','n','o','k','h','u','k',0, /* 31446, 0xdce, U+0e2e, KEY_Thai_honokhuk, THAI CHARACTER HO NOKHUK */
0x80, 0x5f, 0x00, 0x00, 0x0d, 0xcf, 0x00, 0x0e, 0x2f, 'K','E','Y','_','T','h','a','i','_','p','a','i','y','a','n','n','o','i',0, /* 31474, 0xdcf, U+0e2f, KEY_Thai_paiyannoi, THAI CHARACTER PAIYANNOI */
0x67, 0xc3, 0x00, 0x00, 0x0d, 0xd0, 0x00, 0x0e, 0x30, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a',0, /* 31498, 0xdd0, U+0e30, KEY_Thai_saraa, THAI CHARACTER SARA A */
0xf6, 0x6a, 0x00, 0x00, 0x0d, 0xd1, 0x00, 0x0e, 0x31, 'K','E','Y','_','T','h','a','i','_','m','a','i','h','a','n','a','k','a','t',0, /* 31527, 0xdd1, U+0e31, KEY_Thai_maihanakat, THAI CHARACTER MAI HAN-AKAT */
0xcf, 0xe7, 0x00, 0x00, 0x0d, 0xd2, 0x00, 0x0e, 0x32, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','a',0, /* 31552, 0xdd2, U+0e32, KEY_Thai_saraaa, THAI CHARACTER SARA AA */
0xcf, 0xf3, 0x00, 0x00, 0x0d, 0xd3, 0x00, 0x0e, 0x33, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','m',0, /* 31577, 0xdd3, U+0e33, KEY_Thai_saraam, THAI CHARACTER SARA AM */
0x67, 0xcb, 0x00, 0x00, 0x0d, 0xd4, 0x00, 0x0e, 0x34, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','i',0, /* 31601, 0xdd4, U+0e34, KEY_Thai_sarai, THAI CHARACTER SARA I */
0xcf, 0xff, 0x00, 0x00, 0x0d, 0xd5, 0x00, 0x0e, 0x35, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','i','i',0, /* 31626, 0xdd5, U+0e35, KEY_Thai_saraii, THAI CHARACTER SARA II */
0xd0, 0x13, 0x00, 0x00, 0x0d, 0xd6, 0x00, 0x0e, 0x36, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','u','e',0, /* 31651, 0xdd6, U+0e36, KEY_Thai_saraue, THAI CHARACTER SARA UE */
0xa0, 0x8b, 0x00, 0x00, 0x0d, 0xd7, 0x00, 0x0e, 0x37, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','u','e','e',0, /* 31677, 0xdd7, U+0e37, KEY_Thai_sarauee, THAI CHARACTER SARA UEE */
0x67, 0xd7, 0x00, 0x00, 0x0d, 0xd8, 0x00, 0x0e, 0x38, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','u',0, /* 31701, 0xdd8, U+0e38, KEY_Thai_sarau, THAI CHARACTER SARA U */
0xd0, 0x23, 0x00, 0x00, 0x0d, 0xd9, 0x00, 0x0e, 0x39, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','u','u',0, /* 31726, 0xdd9, U+0e39, KEY_Thai_sarauu, THAI CHARACTER SARA UU */
0xa0, 0x95, 0x00, 0x00, 0x0d, 0xda, 0x00, 0x0e, 0x3a, 'K','E','Y','_','T','h','a','i','_','p','h','i','n','t','h','u',0, /* 31752, 0xdda, U+0e3a, KEY_Thai_phinthu, THAI CHARACTER PHINTHU */
0x66, 0xc7, 0x00, 0x00, 0x0d, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','T','h','a','i','_','m','a','i','h','a','n','a','k','a','t','_','m','a','i','t','h','o',0, /* 31788, 0xdde, KEY_Thai_maihanakat_maitho */
0xb3, 0x28, 0x00, 0x00, 0x0d, 0xdf, 0x00, 0x0e, 0x3f, 'K','E','Y','_','T','h','a','i','_','b','a','h','t',0, /* 31811, 0xddf, U+0e3f, KEY_Thai_baht, THAI CURRENCY SYMBOL BAHT */
0x67, 0xc7, 0x00, 0x00, 0x0d, 0xe0, 0x00, 0x0e, 0x40, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','e',0, /* 31835, 0xde0, U+0e40, KEY_Thai_sarae, THAI CHARACTER SARA E */
0xcf, 0xeb, 0x00, 0x00, 0x0d, 0xe1, 0x00, 0x0e, 0x41, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','e',0, /* 31860, 0xde1, U+0e41, KEY_Thai_saraae, THAI CHARACTER SARA AE */
0x67, 0xd1, 0x00, 0x00, 0x0d, 0xe2, 0x00, 0x0e, 0x42, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','o',0, /* 31884, 0xde2, U+0e42, KEY_Thai_sarao, THAI CHARACTER SARA O */
0x2b, 0xdc, 0x00, 0x00, 0x0d, 0xe3, 0x00, 0x0e, 0x43, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','i','m','a','i','m','u','a','n',0, /* 31916, 0xde3, U+0e43, KEY_Thai_saraaimaimuan, THAI CHARACTER SARA AI MAIMUAN */
0x57, 0x93, 0x00, 0x00, 0x0d, 0xe4, 0x00, 0x0e, 0x44, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','i','m','a','i','m','a','l','a','i',0, /* 31949, 0xde4, U+0e44, KEY_Thai_saraaimaimalai, THAI CHARACTER SARA AI MAIMALAI */
0xed, 0xcd, 0x00, 0x00, 0x0d, 0xe5, 0x00, 0x0e, 0x45, 'K','E','Y','_','T','h','a','i','_','l','a','k','k','h','a','n','g','y','a','o',0, /* 31979, 0xde5, U+0e45, KEY_Thai_lakkhangyao, THAI CHARACTER LAKKHANGYAO */
0x3e, 0x75, 0x00, 0x00, 0x0d, 0xe6, 0x00, 0x0e, 0x46, 'K','E','Y','_','T','h','a','i','_','m','a','i','y','a','m','o','k',0, /* 32006, 0xde6, U+0e46, KEY_Thai_maiyamok, THAI CHARACTER MAIYAMOK */
0x7c, 0x89, 0x00, 0x00, 0x0d, 0xe7, 0x00, 0x0e, 0x47, 'K','E','Y','_','T','h','a','i','_','m','a','i','t','a','i','k','h','u',0, /* 32034, 0xde7, U+0e47, KEY_Thai_maitaikhu, THAI CHARACTER MAITAIKHU */
0x67, 0x51, 0x00, 0x00, 0x0d, 0xe8, 0x00, 0x0e, 0x48, 'K','E','Y','_','T','h','a','i','_','m','a','i','e','k',0, /* 32058, 0xde8, U+0e48, KEY_Thai_maiek, THAI CHARACTER MAI EK */
0xcf, 0x47, 0x00, 0x00, 0x0d, 0xe9, 0x00, 0x0e, 0x49, 'K','E','Y','_','T','h','a','i','_','m','a','i','t','h','o',0, /* 32083, 0xde9, U+0e49, KEY_Thai_maitho, THAI CHARACTER MAI THO */
0xcf, 0x55, 0x00, 0x00, 0x0d, 0xea, 0x00, 0x0e, 0x4a, 'K','E','Y','_','T','h','a','i','_','m','a','i','t','r','i',0, /* 32108, 0xdea, U+0e4a, KEY_Thai_maitri, THAI CHARACTER MAI TRI */
0xec, 0x53, 0x00, 0x00, 0x0d, 0xeb, 0x00, 0x0e, 0x4b, 'K','E','Y','_','T','h','a','i','_','m','a','i','c','h','a','t','t','a','w','a',0, /* 32138, 0xdeb, U+0e4b, KEY_Thai_maichattawa, THAI CHARACTER MAI CHATTAWA */
0x16, 0x3e, 0x00, 0x00, 0x0d, 0xec, 0x00, 0x0e, 0x4c, 'K','E','Y','_','T','h','a','i','_','t','h','a','n','t','h','a','k','h','a','t',0, /* 32168, 0xdec, U+0e4c, KEY_Thai_thanthakhat, THAI CHARACTER THANTHAKHAT */
0x40, 0x0e, 0x00, 0x00, 0x0d, 0xed, 0x00, 0x0e, 0x4d, 'K','E','Y','_','T','h','a','i','_','n','i','k','h','a','h','i','t',0, /* 32195, 0xded, U+0e4d, KEY_Thai_nikhahit, THAI CHARACTER NIKHAHIT */
0xcf, 0x8c, 0x00, 0x00, 0x0d, 0xf0, 0x00, 0x0e, 0x50, 'K','E','Y','_','T','h','a','i','_','l','e','k','s','u','n',0, /* 32220, 0xdf0, U+0e50, KEY_Thai_leksun, THAI DIGIT ZERO */
0x9f, 0x57, 0x00, 0x00, 0x0d, 0xf1, 0x00, 0x0e, 0x51, 'K','E','Y','_','T','h','a','i','_','l','e','k','n','u','n','g',0, /* 32246, 0xdf1, U+0e51, KEY_Thai_leknung, THAI DIGIT ONE */
0x9f, 0x67, 0x00, 0x00, 0x0d, 0xf2, 0x00, 0x0e, 0x52, 'K','E','Y','_','T','h','a','i','_','l','e','k','s','o','n','g',0, /* 32272, 0xdf2, U+0e52, KEY_Thai_leksong, THAI DIGIT TWO */
0xcf, 0x63, 0x00, 0x00, 0x0d, 0xf3, 0x00, 0x0e, 0x53, 'K','E','Y','_','T','h','a','i','_','l','e','k','s','a','m',0, /* 32297, 0xdf3, U+0e53, KEY_Thai_leksam, THAI DIGIT THREE */
0x67, 0x83, 0x00, 0x00, 0x0d, 0xf4, 0x00, 0x0e, 0x54, 'K','E','Y','_','T','h','a','i','_','l','e','k','s','i',0, /* 32321, 0xdf4, U+0e54, KEY_Thai_leksi, THAI DIGIT FOUR */
0x67, 0x65, 0x00, 0x00, 0x0d, 0xf5, 0x00, 0x0e, 0x55, 'K','E','Y','_','T','h','a','i','_','l','e','k','h','a',0, /* 32345, 0xdf5, U+0e55, KEY_Thai_lekha, THAI DIGIT FIVE */
0xcf, 0x51, 0x00, 0x00, 0x0d, 0xf6, 0x00, 0x0e, 0x56, 'K','E','Y','_','T','h','a','i','_','l','e','k','h','o','k',0, /* 32370, 0xdf6, U+0e56, KEY_Thai_lekhok, THAI DIGIT SIX */
0x9e, 0xc6, 0x00, 0x00, 0x0d, 0xf7, 0x00, 0x0e, 0x57, 'K','E','Y','_','T','h','a','i','_','l','e','k','c','h','e','t',0, /* 32396, 0xdf7, U+0e57, KEY_Thai_lekchet, THAI DIGIT SEVEN */
0x9f, 0x12, 0x00, 0x00, 0x0d, 0xf8, 0x00, 0x0e, 0x58, 'K','E','Y','_','T','h','a','i','_','l','e','k','p','a','e','t',0, /* 32422, 0xdf8, U+0e58, KEY_Thai_lekpaet, THAI DIGIT EIGHT */
0xcf, 0x45, 0x00, 0x00, 0x0d, 0xf9, 0x00, 0x0e, 0x59, 'K','E','Y','_','T','h','a','i','_','l','e','k','k','a','o',0, /* 32447, 0xdf9, U+0e59, KEY_Thai_lekkao, THAI DIGIT NINE */
0x34, 0xb2, 0x00, 0x00, 0xff, 0x31, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l',0, /* 32467, 0xff31, KEY_Hangul, Hangul start/stop(toggle) */
0x44, 0x0c, 0x00, 0x00, 0xff, 0x32, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','t','a','r','t',0, /* 32493, 0xff32, KEY_Hangul_Start, Hangul start */
0x50, 0x6c, 0x00, 0x00, 0xff, 0x33, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','E','n','d',0, /* 32517, 0xff33, KEY_Hangul_End, Hangul end, English start */
0x42, 0xd5, 0x00, 0x00, 0xff, 0x34, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','H','a','n','j','a',0, /* 32543, 0xff34, KEY_Hangul_Hanja, Start Hangul->Hanja Conversion */
0xa1, 0x4d, 0x00, 0x00, 0xff, 0x35, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','a','m','o',0, /* 32568, 0xff35, KEY_Hangul_Jamo, Hangul Jamo mode */
0x88, 0x11, 0x00, 0x00, 0xff, 0x36, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','o','m','a','j','a',0, /* 32595, 0xff36, KEY_Hangul_Romaja, Hangul Romaja mode */
0x33, 0x3e, 0x00, 0x00, 0xff, 0x37, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','C','o','d','e','i','n','p','u','t',0, /* 32625, 0xff37, KEY_Hangul_Codeinput, Hangul code input mode */
0x86, 0xb5, 0x00, 0x00, 0xff, 0x38, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','e','o','n','j','a',0, /* 32652, 0xff38, KEY_Hangul_Jeonja, Jeonja mode */
0x42, 0x75, 0x00, 0x00, 0xff, 0x39, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','B','a','n','j','a',0, /* 32678, 0xff39, KEY_Hangul_Banja, Banja mode */
0x1e, 0x95, 0x00, 0x00, 0xff, 0x3a, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','r','e','H','a','n','j','a',0, /* 32707, 0xff3a, KEY_Hangul_PreHanja, Pre Hanja conversion */
0x43, 0x35, 0x00, 0x00, 0xff, 0x3b, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','o','s','t','H','a','n','j','a',0, /* 32737, 0xff3b, KEY_Hangul_PostHanja, Post Hanja conversion */
0x9a, 0x01, 0x00, 0x00, 0xff, 0x3c, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','i','n','g','l','e','C','a','n','d','i','d','a','t','e',0, /* 32773, 0xff3c, KEY_Hangul_SingleCandidate, Single candidate */
0x32, 0x01, 0x00, 0x00, 0xff, 0x3d, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','M','u','l','t','i','p','l','e','C','a','n','d','i','d','a','t','e',0, /* 32811, 0xff3d, KEY_Hangul_MultipleCandidate, Multiple candidate */
0x6a, 0x01, 0x00, 0x00, 0xff, 0x3e, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','r','e','v','i','o','u','s','C','a','n','d','i','d','a','t','e',0, /* 32849, 0xff3e, KEY_Hangul_PreviousCandidate, Previous candidate */
0x10, 0x7a, 0x00, 0x00, 0xff, 0x3f, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','p','e','c','i','a','l',0, /* 32877, 0xff3f, KEY_Hangul_Special, Special symbols */
0x8c, 0xd6, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','s','w','i','t','c','h',0, /* 32904, 0xff7e, KEY_Hangul_switch, Alias for mode_switch */
0x87, 0x51, 0x00, 0x00, 0x0e, 0xa1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','K','i','y','e','o','g',0, /* 32931, 0xea1, KEY_Hangul_Kiyeog */
0x12, 0x51, 0x00, 0x00, 0x0e, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','K','i','y','e','o','g',0, /* 32963, 0xea2, KEY_Hangul_SsangKiyeog */
0x7a, 0x9d, 0x00, 0x00, 0x0e, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','K','i','y','e','o','g','S','i','o','s',0, /* 32994, 0xea3, KEY_Hangul_KiyeogSios */
0x43, 0x74, 0x00, 0x00, 0x0e, 0xa4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','N','i','e','u','n',0, /* 33020, 0xea4, KEY_Hangul_Nieun */
0x79, 0x50, 0x00, 0x00, 0x0e, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','N','i','e','u','n','J','i','e','u','j',0, /* 33051, 0xea5, KEY_Hangul_NieunJieuj */
0x79, 0x2e, 0x00, 0x00, 0x0e, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','N','i','e','u','n','H','i','e','u','h',0, /* 33082, 0xea6, KEY_Hangul_NieunHieuh */
0x86, 0x0a, 0x00, 0x00, 0x0e, 0xa7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','D','i','k','e','u','d',0, /* 33109, 0xea7, KEY_Hangul_Dikeud */
0x11, 0x0a, 0x00, 0x00, 0x0e, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','D','i','k','e','u','d',0, /* 33141, 0xea8, KEY_Hangul_SsangDikeud */
0x43, 0xb2, 0x00, 0x00, 0x0e, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l',0, /* 33167, 0xea9, KEY_Hangul_Rieul */
0x03, 0x11, 0x00, 0x00, 0x0e, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','K','i','y','e','o','g',0, /* 33199, 0xeaa, KEY_Hangul_RieulKiyeog */
0x81, 0x43, 0x00, 0x00, 0x0e, 0xab, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','M','i','e','u','m',0, /* 33230, 0xeab, KEY_Hangul_RieulMieum */
0x81, 0x68, 0x00, 0x00, 0x0e, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','P','i','e','u','b',0, /* 33261, 0xeac, KEY_Hangul_RieulPieub */
0x40, 0xad, 0x00, 0x00, 0x0e, 0xad, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','S','i','o','s',0, /* 33291, 0xead, KEY_Hangul_RieulSios */
0x81, 0xba, 0x00, 0x00, 0x0e, 0xae, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','T','i','e','u','t',0, /* 33322, 0xeae, KEY_Hangul_RieulTieut */
0x03, 0x2c, 0x00, 0x00, 0x0e, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','P','h','i','e','u','f',0, /* 33354, 0xeaf, KEY_Hangul_RieulPhieuf */
0x80, 0xee, 0x00, 0x00, 0x0e, 0xb0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','H','i','e','u','h',0, /* 33385, 0xeb0, KEY_Hangul_RieulHieuh */
0x43, 0x63, 0x00, 0x00, 0x0e, 0xb1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','M','i','e','u','m',0, /* 33411, 0xeb1, KEY_Hangul_Mieum */
0x43, 0x88, 0x00, 0x00, 0x0e, 0xb2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','i','e','u','b',0, /* 33437, 0xeb2, KEY_Hangul_Pieub */
0x89, 0x08, 0x00, 0x00, 0x0e, 0xb3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','P','i','e','u','b',0, /* 33468, 0xeb3, KEY_Hangul_SsangPieub */
0x3e, 0x0d, 0x00, 0x00, 0x0e, 0xb4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','i','e','u','b','S','i','o','s',0, /* 33498, 0xeb4, KEY_Hangul_PieubSios */
0xa1, 0xbd, 0x00, 0x00, 0x0e, 0xb5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','i','o','s',0, /* 33523, 0xeb5, KEY_Hangul_Sios */
0x44, 0x7d, 0x00, 0x00, 0x0e, 0xb6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','S','i','o','s',0, /* 33553, 0xeb6, KEY_Hangul_SsangSios */
0x43, 0x2f, 0x00, 0x00, 0x0e, 0xb7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','I','e','u','n','g',0, /* 33579, 0xeb7, KEY_Hangul_Ieung */
0x43, 0x30, 0x00, 0x00, 0x0e, 0xb8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','i','e','u','j',0, /* 33605, 0xeb8, KEY_Hangul_Jieuj */
0x88, 0xb0, 0x00, 0x00, 0x0e, 0xb9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','J','i','e','u','j',0, /* 33636, 0xeb9, KEY_Hangul_SsangJieuj */
0x42, 0xb9, 0x00, 0x00, 0x0e, 0xba, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','C','i','e','u','c',0, /* 33662, 0xeba, KEY_Hangul_Cieuc */
0x86, 0xd7, 0x00, 0x00, 0x0e, 0xbb, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','K','h','i','e','u','q',0, /* 33689, 0xebb, KEY_Hangul_Khieuq */
0x43, 0xda, 0x00, 0x00, 0x0e, 0xbc, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','T','i','e','u','t',0, /* 33715, 0xebc, KEY_Hangul_Tieut */
0x87, 0x6c, 0x00, 0x00, 0x0e, 0xbd, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','h','i','e','u','f',0, /* 33742, 0xebd, KEY_Hangul_Phieuf */
0x43, 0x0e, 0x00, 0x00, 0x0e, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','H','i','e','u','h',0, /* 33768, 0xebe, KEY_Hangul_Hieuh */
0xd3, 0xc7, 0x00, 0x00, 0x0e, 0xbf, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','A',0, /* 33790, 0xebf, KEY_Hangul_A */
0xa7, 0xd3, 0x00, 0x00, 0x0e, 0xc0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','A','E',0, /* 33813, 0xec0, KEY_Hangul_AE */
0xa7, 0xff, 0x00, 0x00, 0x0e, 0xc1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','A',0, /* 33836, 0xec1, KEY_Hangul_YA */
0x50, 0x43, 0x00, 0x00, 0x0e, 0xc2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','A','E',0, /* 33860, 0xec2, KEY_Hangul_YAE */
0xa7, 0xe5, 0x00, 0x00, 0x0e, 0xc3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','E','O',0, /* 33883, 0xec3, KEY_Hangul_EO */
0xd3, 0xcb, 0x00, 0x00, 0x0e, 0xc4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','E',0, /* 33905, 0xec4, KEY_Hangul_E */
0x50, 0x55, 0x00, 0x00, 0x0e, 0xc5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','E','O',0, /* 33929, 0xec5, KEY_Hangul_YEO */
0xa8, 0x03, 0x00, 0x00, 0x0e, 0xc6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','E',0, /* 33952, 0xec6, KEY_Hangul_YE */
0xd3, 0xd5, 0x00, 0x00, 0x0e, 0xc7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','O',0, /* 33974, 0xec7, KEY_Hangul_O */
0xa7, 0xfb, 0x00, 0x00, 0x0e, 0xc8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','A',0, /* 33997, 0xec8, KEY_Hangul_WA */
0x50, 0x3b, 0x00, 0x00, 0x0e, 0xc9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','A','E',0, /* 34021, 0xec9, KEY_Hangul_WAE */
0xa7, 0xef, 0x00, 0x00, 0x0e, 0xca, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','O','E',0, /* 34044, 0xeca, KEY_Hangul_OE */
0xa8, 0x0d, 0x00, 0x00, 0x0e, 0xcb, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','O',0, /* 34067, 0xecb, KEY_Hangul_YO */
0xd3, 0xdb, 0x00, 0x00, 0x0e, 0xcc, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','U',0, /* 34089, 0xecc, KEY_Hangul_U */
0x50, 0x4d, 0x00, 0x00, 0x0e, 0xcd, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','E','O',0, /* 34113, 0xecd, KEY_Hangul_WEO */
0xa7, 0xff, 0x00, 0x00, 0x0e, 0xce, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','E',0, /* 34136, 0xece, KEY_Hangul_WE */
0xa8, 0x03, 0x00, 0x00, 0x0e, 0xcf, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','I',0, /* 34159, 0xecf, KEY_Hangul_WI */
0xa8, 0x13, 0x00, 0x00, 0x0e, 0xd0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','U',0, /* 34182, 0xed0, KEY_Hangul_YU */
0xa7, 0xeb, 0x00, 0x00, 0x0e, 0xd1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','E','U',0, /* 34205, 0xed1, KEY_Hangul_EU */
0xa8, 0x07, 0x00, 0x00, 0x0e, 0xd2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','I',0, /* 34228, 0xed2, KEY_Hangul_YI */
0xd3, 0xcf, 0x00, 0x00, 0x0e, 0xd3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','I',0, /* 34250, 0xed3, KEY_Hangul_I */
0x16, 0x51, 0x00, 0x00, 0x0e, 0xd4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','K','i','y','e','o','g',0, /* 34279, 0xed4, KEY_Hangul_J_Kiyeog */
0xf2, 0x51, 0x00, 0x00, 0x0e, 0xd5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','S','s','a','n','g','K','i','y','e','o','g',0, /* 34313, 0xed5, KEY_Hangul_J_SsangKiyeog */
0x6a, 0x9d, 0x00, 0x00, 0x0e, 0xd6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','K','i','y','e','o','g','S','i','o','s',0, /* 34346, 0xed6, KEY_Hangul_J_KiyeogSios */
0x0a, 0xf4, 0x00, 0x00, 0x0e, 0xd7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','N','i','e','u','n',0, /* 34374, 0xed7, KEY_Hangul_J_Nieun */
0x69, 0x50, 0x00, 0x00, 0x0e, 0xd8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','N','i','e','u','n','J','i','e','u','j',0, /* 34407, 0xed8, KEY_Hangul_J_NieunJieuj */
0x69, 0x2e, 0x00, 0x00, 0x0e, 0xd9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','N','i','e','u','n','H','i','e','u','h',0, /* 34440, 0xed9, KEY_Hangul_J_NieunHieuh */
0x15, 0x0a, 0x00, 0x00, 0x0e, 0xda, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','D','i','k','e','u','d',0, /* 34469, 0xeda, KEY_Hangul_J_Dikeud */
0x0b, 0x32, 0x00, 0x00, 0x0e, 0xdb, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l',0, /* 34497, 0xedb, KEY_Hangul_J_Rieul */
0xe3, 0x11, 0x00, 0x00, 0x0e, 0xdc, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','K','i','y','e','o','g',0, /* 34531, 0xedc, KEY_Hangul_J_RieulKiyeog */
0x71, 0x43, 0x00, 0x00, 0x0e, 0xdd, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','M','i','e','u','m',0, /* 34564, 0xedd, KEY_Hangul_J_RieulMieum */
0x71, 0x68, 0x00, 0x00, 0x0e, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','P','i','e','u','b',0, /* 34597, 0xede, KEY_Hangul_J_RieulPieub */
0xb8, 0xad, 0x00, 0x00, 0x0e, 0xdf, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','S','i','o','s',0, /* 34629, 0xedf, KEY_Hangul_J_RieulSios */
0x71, 0xba, 0x00, 0x00, 0x0e, 0xe0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','T','i','e','u','t',0, /* 34662, 0xee0, KEY_Hangul_J_RieulTieut */
0xe3, 0x2c, 0x00, 0x00, 0x0e, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','P','h','i','e','u','f',0, /* 34696, 0xee1, KEY_Hangul_J_RieulPhieuf */
0x70, 0xee, 0x00, 0x00, 0x0e, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','H','i','e','u','h',0, /* 34729, 0xee2, KEY_Hangul_J_RieulHieuh */
0x0a, 0xe3, 0x00, 0x00, 0x0e, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','M','i','e','u','m',0, /* 34757, 0xee3, KEY_Hangul_J_Mieum */
0x0b, 0x08, 0x00, 0x00, 0x0e, 0xe4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','P','i','e','u','b',0, /* 34785, 0xee4, KEY_Hangul_J_Pieub */
0xb6, 0x0d, 0x00, 0x00, 0x0e, 0xe5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','P','i','e','u','b','S','i','o','s',0, /* 34817, 0xee5, KEY_Hangul_J_PieubSios */
0x85, 0x7d, 0x00, 0x00, 0x0e, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','S','i','o','s',0, /* 34844, 0xee6, KEY_Hangul_J_Sios */
0xbc, 0x7d, 0x00, 0x00, 0x0e, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','S','s','a','n','g','S','i','o','s',0, /* 34876, 0xee7, KEY_Hangul_J_SsangSios */
0x0a, 0xaf, 0x00, 0x00, 0x0e, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','I','e','u','n','g',0, /* 34904, 0xee8, KEY_Hangul_J_Ieung */
0x0a, 0xb0, 0x00, 0x00, 0x0e, 0xe9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','J','i','e','u','j',0, /* 34932, 0xee9, KEY_Hangul_J_Jieuj */
0x0a, 0x39, 0x00, 0x00, 0x0e, 0xea, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','C','i','e','u','c',0, /* 34960, 0xeea, KEY_Hangul_J_Cieuc */
0x15, 0xd7, 0x00, 0x00, 0x0e, 0xeb, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','K','h','i','e','u','q',0, /* 34989, 0xeeb, KEY_Hangul_J_Khieuq */
0x0b, 0x5a, 0x00, 0x00, 0x0e, 0xec, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','T','i','e','u','t',0, /* 35017, 0xeec, KEY_Hangul_J_Tieut */
0x16, 0x6c, 0x00, 0x00, 0x0e, 0xed, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','P','h','i','e','u','f',0, /* 35046, 0xeed, KEY_Hangul_J_Phieuf */
0x0a, 0x8e, 0x00, 0x00, 0x0e, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','H','i','e','u','h',0, /* 35074, 0xeee, KEY_Hangul_J_Hieuh */
0x98, 0xae, 0x00, 0x00, 0x0e, 0xef, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','Y','e','o','r','i','n','H','i','e','u','h',0, /* 35111, 0xeef, KEY_Hangul_RieulYeorinHieuh */
0x7f, 0x63, 0x00, 0x00, 0x0e, 0xf0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','u','n','k','y','e','o','n','g','e','u','m','M','i','e','u','m',0, /* 35149, 0xef0, KEY_Hangul_SunkyeongeumMieum */
0x7f, 0x88, 0x00, 0x00, 0x0e, 0xf1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','u','n','k','y','e','o','n','g','e','u','m','P','i','e','u','b',0, /* 35187, 0xef1, KEY_Hangul_SunkyeongeumPieub */
0x0e, 0x0d, 0x00, 0x00, 0x0e, 0xf2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','a','n','S','i','o','s',0, /* 35215, 0xef2, KEY_Hangul_PanSios */
0xb1, 0xcf, 0x00, 0x00, 0x0e, 0xf3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','K','k','o','g','j','i','D','a','l','r','i','n','I','e','u','n','g',0, /* 35253, 0xef3, KEY_Hangul_KkogjiDalrinIeung */
0xff, 0x6c, 0x00, 0x00, 0x0e, 0xf4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','u','n','k','y','e','o','n','g','e','u','m','P','h','i','e','u','f',0, /* 35292, 0xef4, KEY_Hangul_SunkyeongeumPhieuf */
0x20, 0xae, 0x00, 0x00, 0x0e, 0xf5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','e','o','r','i','n','H','i','e','u','h',0, /* 35324, 0xef5, KEY_Hangul_YeorinHieuh */
0x42, 0x8f, 0x00, 0x00, 0x0e, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','A','r','a','e','A',0, /* 35350, 0xef6, KEY_Hangul_AraeA */
0x85, 0x63, 0x00, 0x00, 0x0e, 0xf7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','A','r','a','e','A','E',0, /* 35377, 0xef7, KEY_Hangul_AraeAE */
0x2c, 0x0d, 0x00, 0x00, 0x0e, 0xf8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','P','a','n','S','i','o','s',0, /* 35407, 0xef8, KEY_Hangul_J_PanSios */
0xb1, 0xcf, 0x00, 0x00, 0x0e, 0xf9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','K','k','o','g','j','i','D','a','l','r','i','n','I','e','u','n','g',0, /* 35447, 0xef9, KEY_Hangul_J_KkogjiDalrinIeung */
0x00, 0xae, 0x00, 0x00, 0x0e, 0xfa, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','Y','e','o','r','i','n','H','i','e','u','h',0, /* 35481, 0xefa, KEY_Hangul_J_YeorinHieuh */
0x63, 0xe0, 0x00, 0x00, 0x0e, 0xff, 0x00, 0x00, 0x00, 'K','E','Y','_','K','o','r','e','a','n','_','W','o','n',0, /* 35505, 0xeff, KEY_Korean_Won, (U+20A9 WON SIGN) */
0x8a, 0x25, 0x01, 0x00, 0x05, 0x87, 0x00, 0x05, 0x87, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','l','i','g','a','t','u','r','e','_','e','w',0, /* 35539, 0x1000587, U+0587, KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */
0x63, 0xa6, 0x01, 0x00, 0x05, 0x89, 0x00, 0x05, 0x89, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','f','u','l','l','_','s','t','o','p',0, /* 35571, 0x1000589, U+0589, KEY_Armenian_full_stop, ARMENIAN FULL STOP */
0x36, 0x12, 0x01, 0x00, 0x05, 0x89, 0x00, 0x05, 0x89, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','v','e','r','j','a','k','e','t',0, /* 35602, 0x1000589, U+0589, KEY_Armenian_verjaket, ARMENIAN FULL STOP */
0x50, 0x2b, 0x01, 0x00, 0x05, 0x5d, 0x00, 0x05, 0x5d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','s','e','p','a','r','a','t','i','o','n','_','m','a','r','k',0, /* 35640, 0x100055d, U+055d, KEY_Armenian_separation_mark, ARMENIAN COMMA */
0x49, 0x1e, 0x01, 0x00, 0x05, 0x5d, 0x00, 0x05, 0x5d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','b','u','t',0, /* 35666, 0x100055d, U+055d, KEY_Armenian_but, ARMENIAN COMMA */
0x4c, 0xa8, 0x01, 0x00, 0x05, 0x8a, 0x00, 0x05, 0x8a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','h','y','p','h','e','n',0, /* 35695, 0x100058a, U+058a, KEY_Armenian_hyphen, ARMENIAN HYPHEN */
0x37, 0xb9, 0x01, 0x00, 0x05, 0x8a, 0x00, 0x05, 0x8a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','y','e','n','t','a','m','n','a',0, /* 35726, 0x100058a, U+058a, KEY_Armenian_yentamna, ARMENIAN HYPHEN */
0x4b, 0xd7, 0x01, 0x00, 0x05, 0x5c, 0x00, 0x05, 0x5c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','e','x','c','l','a','m',0, /* 35755, 0x100055c, U+055c, KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */
0x4a, 0x9d, 0x01, 0x00, 0x05, 0x5c, 0x00, 0x05, 0x5c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','m','a','n','a','k',0, /* 35784, 0x100055c, U+055c, KEY_Armenian_amanak, ARMENIAN EXCLAMATION MARK */
0x4a, 0x0c, 0x01, 0x00, 0x05, 0x5b, 0x00, 0x05, 0x5b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','c','c','e','n','t',0, /* 35813, 0x100055b, U+055b, KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */
0x4c, 0xd8, 0x01, 0x00, 0x05, 0x5b, 0x00, 0x05, 0x5b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','s','h','e','s','h','t',0, /* 35842, 0x100055b, U+055b, KEY_Armenian_shesht, ARMENIAN EMPHASIS MARK */
0x37, 0x20, 0x01, 0x00, 0x05, 0x5e, 0x00, 0x05, 0x5e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','q','u','e','s','t','i','o','n',0, /* 35873, 0x100055e, U+055e, KEY_Armenian_question, ARMENIAN QUESTION MARK */
0x4c, 0x91, 0x01, 0x00, 0x05, 0x5e, 0x00, 0x05, 0x5e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','p','a','r','u','y','k',0, /* 35902, 0x100055e, U+055e, KEY_Armenian_paruyk, ARMENIAN QUESTION MARK */
0x48, 0x30, 0x01, 0x00, 0x05, 0x31, 0x00, 0x05, 0x31, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','A','Y','B',0, /* 35928, 0x1000531, U+0531, KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */
0x49, 0x10, 0x01, 0x00, 0x05, 0x61, 0x00, 0x05, 0x61, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','y','b',0, /* 35954, 0x1000561, U+0561, KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */
0x48, 0x18, 0x01, 0x00, 0x05, 0x32, 0x00, 0x05, 0x32, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','B','E','N',0, /* 35980, 0x1000532, U+0532, KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */
0x48, 0xf8, 0x01, 0x00, 0x05, 0x62, 0x00, 0x05, 0x62, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','b','e','n',0, /* 36006, 0x1000562, U+0562, KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */
0x48, 0x33, 0x01, 0x00, 0x05, 0x33, 0x00, 0x05, 0x33, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','G','I','M',0, /* 36032, 0x1000533, U+0533, KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */
0x49, 0x13, 0x01, 0x00, 0x05, 0x63, 0x00, 0x05, 0x63, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','g','i','m',0, /* 36058, 0x1000563, U+0563, KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */
0xa3, 0xe5, 0x01, 0x00, 0x05, 0x34, 0x00, 0x05, 0x34, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','D','A',0, /* 36083, 0x1000534, U+0534, KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */
0xa4, 0x45, 0x01, 0x00, 0x05, 0x64, 0x00, 0x05, 0x64, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','d','a',0, /* 36108, 0x1000564, U+0564, KEY_Armenian_da, ARMENIAN SMALL LETTER DA */
0x91, 0x1a, 0x01, 0x00, 0x05, 0x35, 0x00, 0x05, 0x35, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','Y','E','C','H',0, /* 36135, 0x1000535, U+0535, KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */
0x92, 0xfa, 0x01, 0x00, 0x05, 0x65, 0x00, 0x05, 0x65, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','y','e','c','h',0, /* 36162, 0x1000565, U+0565, KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */
0xa4, 0x11, 0x01, 0x00, 0x05, 0x36, 0x00, 0x05, 0x36, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','Z','A',0, /* 36187, 0x1000536, U+0536, KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */
0xa4, 0x71, 0x01, 0x00, 0x05, 0x66, 0x00, 0x05, 0x66, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','z','a',0, /* 36212, 0x1000566, U+0566, KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */
0x51, 0xd3, 0x01, 0x00, 0x05, 0x37, 0x00, 0x05, 0x37, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','E',0, /* 36236, 0x1000537, U+0537, KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */
0x51, 0xf3, 0x01, 0x00, 0x05, 0x67, 0x00, 0x05, 0x67, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','e',0, /* 36260, 0x1000567, U+0567, KEY_Armenian_e, ARMENIAN SMALL LETTER EH */
0xa3, 0xf2, 0x01, 0x00, 0x05, 0x38, 0x00, 0x05, 0x38, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','A','T',0, /* 36285, 0x1000538, U+0538, KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */
0xa4, 0x52, 0x01, 0x00, 0x05, 0x68, 0x00, 0x05, 0x68, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','t',0, /* 36310, 0x1000568, U+0568, KEY_Armenian_at, ARMENIAN SMALL LETTER ET */
0xa4, 0x13, 0x01, 0x00, 0x05, 0x39, 0x00, 0x05, 0x39, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','O',0, /* 36335, 0x1000539, U+0539, KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */
0xa4, 0x73, 0x01, 0x00, 0x05, 0x69, 0x00, 0x05, 0x69, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','o',0, /* 36360, 0x1000569, U+0569, KEY_Armenian_to, ARMENIAN SMALL LETTER TO */
0x48, 0x75, 0x01, 0x00, 0x05, 0x3a, 0x00, 0x05, 0x3a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','Z','H','E',0, /* 36386, 0x100053a, U+053a, KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */
0x49, 0x55, 0x01, 0x00, 0x05, 0x6a, 0x00, 0x05, 0x6a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','z','h','e',0, /* 36412, 0x100056a, U+056a, KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */
0x48, 0x41, 0x01, 0x00, 0x05, 0x3b, 0x00, 0x05, 0x3b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','I','N','I',0, /* 36438, 0x100053b, U+053b, KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */
0x49, 0x21, 0x01, 0x00, 0x05, 0x6b, 0x00, 0x05, 0x6b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','i','n','i',0, /* 36464, 0x100056b, U+056b, KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */
0x91, 0x2c, 0x01, 0x00, 0x05, 0x3c, 0x00, 0x05, 0x3c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','L','Y','U','N',0, /* 36491, 0x100053c, U+053c, KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */
0x93, 0x0c, 0x01, 0x00, 0x05, 0x6c, 0x00, 0x05, 0x6c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','l','y','u','n',0, /* 36518, 0x100056c, U+056c, KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */
0x48, 0x39, 0x01, 0x00, 0x05, 0x3d, 0x00, 0x05, 0x3d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','K','H','E',0, /* 36544, 0x100053d, U+053d, KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */
0x49, 0x19, 0x01, 0x00, 0x05, 0x6d, 0x00, 0x05, 0x6d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','k','h','e',0, /* 36570, 0x100056d, U+056d, KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */
0x48, 0x6f, 0x01, 0x00, 0x05, 0x3e, 0x00, 0x05, 0x3e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','S','A',0, /* 36596, 0x100053e, U+053e, KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */
0x49, 0x4f, 0x01, 0x00, 0x05, 0x6e, 0x00, 0x05, 0x6e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','s','a',0, /* 36622, 0x100056e, U+056e, KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */
0x48, 0x3c, 0x01, 0x00, 0x05, 0x3f, 0x00, 0x05, 0x3f, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','K','E','N',0, /* 36648, 0x100053f, U+053f, KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */
0x49, 0x1c, 0x01, 0x00, 0x05, 0x6f, 0x00, 0x05, 0x6f, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','k','e','n',0, /* 36674, 0x100056f, U+056f, KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */
0xa3, 0xfb, 0x01, 0x00, 0x05, 0x40, 0x00, 0x05, 0x40, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','H','O',0, /* 36699, 0x1000540, U+0540, KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */
0xa4, 0x5b, 0x01, 0x00, 0x05, 0x70, 0x00, 0x05, 0x70, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','h','o',0, /* 36724, 0x1000570, U+0570, KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */
0x48, 0x3d, 0x01, 0x00, 0x05, 0x41, 0x00, 0x05, 0x41, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','D','Z','A',0, /* 36750, 0x1000541, U+0541, KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */
0x49, 0x1d, 0x01, 0x00, 0x05, 0x71, 0x00, 0x05, 0x71, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','d','z','a',0, /* 36776, 0x1000571, U+0571, KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */
0x90, 0x9e, 0x01, 0x00, 0x05, 0x42, 0x00, 0x05, 0x42, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','G','H','A','T',0, /* 36803, 0x1000542, U+0542, KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */
0x92, 0x7e, 0x01, 0x00, 0x05, 0x72, 0x00, 0x05, 0x72, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','g','h','a','t',0, /* 36830, 0x1000572, U+0572, KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */
0x90, 0xf1, 0x01, 0x00, 0x05, 0x43, 0x00, 0x05, 0x43, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','C','H','E',0, /* 36857, 0x1000543, U+0543, KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */
0x92, 0xd1, 0x01, 0x00, 0x05, 0x73, 0x00, 0x05, 0x73, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','c','h','e',0, /* 36884, 0x1000573, U+0573, KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */
0x48, 0x44, 0x01, 0x00, 0x05, 0x44, 0x00, 0x05, 0x44, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','M','E','N',0, /* 36910, 0x1000544, U+0544, KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */
0x49, 0x24, 0x01, 0x00, 0x05, 0x74, 0x00, 0x05, 0x74, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','m','e','n',0, /* 36936, 0x1000574, U+0574, KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */
0xa3, 0xf5, 0x01, 0x00, 0x05, 0x45, 0x00, 0x05, 0x45, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','H','I',0, /* 36961, 0x1000545, U+0545, KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */
0xa4, 0x55, 0x01, 0x00, 0x05, 0x75, 0x00, 0x05, 0x75, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','h','i',0, /* 36986, 0x1000575, U+0575, KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */
0xa4, 0x0d, 0x01, 0x00, 0x05, 0x46, 0x00, 0x05, 0x46, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','N','U',0, /* 37011, 0x1000546, U+0546, KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */
0xa4, 0x6d, 0x01, 0x00, 0x05, 0x76, 0x00, 0x05, 0x76, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','n','u',0, /* 37036, 0x1000576, U+0576, KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */
0x48, 0x55, 0x01, 0x00, 0x05, 0x47, 0x00, 0x05, 0x47, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','S','H','A',0, /* 37062, 0x1000547, U+0547, KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */
0x49, 0x35, 0x01, 0x00, 0x05, 0x77, 0x00, 0x05, 0x77, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','s','h','a',0, /* 37088, 0x1000577, U+0577, KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */
0xa4, 0x17, 0x01, 0x00, 0x05, 0x48, 0x00, 0x05, 0x48, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','V','O',0, /* 37113, 0x1000548, U+0548, KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */
0xa4, 0x77, 0x01, 0x00, 0x05, 0x78, 0x00, 0x05, 0x78, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','v','o',0, /* 37138, 0x1000578, U+0578, KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */
0x48, 0x15, 0x01, 0x00, 0x05, 0x49, 0x00, 0x05, 0x49, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','C','H','A',0, /* 37164, 0x1000549, U+0549, KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */
0x48, 0xf5, 0x01, 0x00, 0x05, 0x79, 0x00, 0x05, 0x79, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','c','h','a',0, /* 37190, 0x1000579, U+0579, KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */
0xa4, 0x01, 0x01, 0x00, 0x05, 0x4a, 0x00, 0x05, 0x4a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','P','E',0, /* 37215, 0x100054a, U+054a, KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */
0xa4, 0x61, 0x01, 0x00, 0x05, 0x7a, 0x00, 0x05, 0x7a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','p','e',0, /* 37240, 0x100057a, U+057a, KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */
0xa3, 0xf5, 0x01, 0x00, 0x05, 0x4b, 0x00, 0x05, 0x4b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','J','E',0, /* 37265, 0x100054b, U+054b, KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */
0xa4, 0x55, 0x01, 0x00, 0x05, 0x7b, 0x00, 0x05, 0x7b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','j','e',0, /* 37290, 0x100057b, U+057b, KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */
0xa4, 0x01, 0x01, 0x00, 0x05, 0x4c, 0x00, 0x05, 0x4c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','R','A',0, /* 37315, 0x100054c, U+054c, KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */
0xa4, 0x61, 0x01, 0x00, 0x05, 0x7c, 0x00, 0x05, 0x7c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','r','a',0, /* 37340, 0x100057c, U+057c, KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */
0xa4, 0x07, 0x01, 0x00, 0x05, 0x4d, 0x00, 0x05, 0x4d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','S','E',0, /* 37365, 0x100054d, U+054d, KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */
0xa4, 0x67, 0x01, 0x00, 0x05, 0x7d, 0x00, 0x05, 0x7d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','s','e',0, /* 37390, 0x100057d, U+057d, KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */
0x48, 0x70, 0x01, 0x00, 0x05, 0x4e, 0x00, 0x05, 0x4e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','V','E','V',0, /* 37416, 0x100054e, U+054e, KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */
0x49, 0x50, 0x01, 0x00, 0x05, 0x7e, 0x00, 0x05, 0x7e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','v','e','v',0, /* 37442, 0x100057e, U+057e, KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */
0x91, 0x6c, 0x01, 0x00, 0x05, 0x4f, 0x00, 0x05, 0x4f, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','Y','U','N',0, /* 37469, 0x100054f, U+054f, KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */
0x93, 0x4c, 0x01, 0x00, 0x05, 0x7f, 0x00, 0x05, 0x7f, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','y','u','n',0, /* 37496, 0x100057f, U+057f, KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */
0xa4, 0x05, 0x01, 0x00, 0x05, 0x50, 0x00, 0x05, 0x50, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','R','E',0, /* 37521, 0x1000550, U+0550, KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */
0xa4, 0x65, 0x01, 0x00, 0x05, 0x80, 0x00, 0x05, 0x80, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','r','e',0, /* 37546, 0x1000580, U+0580, KEY_Armenian_re, ARMENIAN SMALL LETTER REH */
0x48, 0x7d, 0x01, 0x00, 0x05, 0x51, 0x00, 0x05, 0x51, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','S','O',0, /* 37572, 0x1000551, U+0551, KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */
0x49, 0x5d, 0x01, 0x00, 0x05, 0x81, 0x00, 0x05, 0x81, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','s','o',0, /* 37598, 0x1000581, U+0581, KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */
0x91, 0x7c, 0x01, 0x00, 0x05, 0x52, 0x00, 0x05, 0x52, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','V','Y','U','N',0, /* 37625, 0x1000552, U+0552, KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */
0x93, 0x5c, 0x01, 0x00, 0x05, 0x82, 0x00, 0x05, 0x82, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','v','y','u','n',0, /* 37652, 0x1000582, U+0582, KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */
0x91, 0x50, 0x01, 0x00, 0x05, 0x53, 0x00, 0x05, 0x53, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','P','Y','U','R',0, /* 37679, 0x1000553, U+0553, KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */
0x93, 0x30, 0x01, 0x00, 0x05, 0x83, 0x00, 0x05, 0x83, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','p','y','u','r',0, /* 37706, 0x1000583, U+0583, KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */
0xa3, 0xf7, 0x01, 0x00, 0x05, 0x54, 0x00, 0x05, 0x54, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','K','E',0, /* 37731, 0x1000554, U+0554, KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */
0xa4, 0x57, 0x01, 0x00, 0x05, 0x84, 0x00, 0x05, 0x84, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','k','e',0, /* 37756, 0x1000584, U+0584, KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */
0x51, 0xdd, 0x01, 0x00, 0x05, 0x55, 0x00, 0x05, 0x55, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','O',0, /* 37780, 0x1000555, U+0555, KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */
0x51, 0xfd, 0x01, 0x00, 0x05, 0x85, 0x00, 0x05, 0x85, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','o',0, /* 37804, 0x1000585, U+0585, KEY_Armenian_o, ARMENIAN SMALL LETTER OH */
0xa3, 0xed, 0x01, 0x00, 0x05, 0x56, 0x00, 0x05, 0x56, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','F','E',0, /* 37829, 0x1000556, U+0556, KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */
0xa4, 0x4d, 0x01, 0x00, 0x05, 0x86, 0x00, 0x05, 0x86, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','f','e',0, /* 37854, 0x1000586, U+0586, KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */
0xbe, 0x4d, 0x01, 0x00, 0x05, 0x5a, 0x00, 0x05, 0x5a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','p','o','s','t','r','o','p','h','e',0, /* 37887, 0x100055a, U+055a, KEY_Armenian_apostrophe, ARMENIAN APOSTROPHE */
0xa9, 0x0c, 0x01, 0x00, 0x10, 0xd0, 0x00, 0x10, 0xd0, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','a','n',0, /* 37912, 0x10010d0, U+10d0, KEY_Georgian_an, GEORGIAN LETTER AN */
0x52, 0x70, 0x01, 0x00, 0x10, 0xd1, 0x00, 0x10, 0xd1, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','b','a','n',0, /* 37938, 0x10010d1, U+10d1, KEY_Georgian_ban, GEORGIAN LETTER BAN */
0x52, 0x84, 0x01, 0x00, 0x10, 0xd2, 0x00, 0x10, 0xd2, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','g','a','n',0, /* 37964, 0x10010d2, U+10d2, KEY_Georgian_gan, GEORGIAN LETTER GAN */
0x52, 0x94, 0x01, 0x00, 0x10, 0xd3, 0x00, 0x10, 0xd3, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','d','o','n',0, /* 37990, 0x10010d3, U+10d3, KEY_Georgian_don, GEORGIAN LETTER DON */
0xa9, 0x14, 0x01, 0x00, 0x10, 0xd4, 0x00, 0x10, 0xd4, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','e','n',0, /* 38015, 0x10010d4, U+10d4, KEY_Georgian_en, GEORGIAN LETTER EN */
0x52, 0xd0, 0x01, 0x00, 0x10, 0xd5, 0x00, 0x10, 0xd5, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','v','i','n',0, /* 38041, 0x10010d5, U+10d5, KEY_Georgian_vin, GEORGIAN LETTER VIN */
0x52, 0xd8, 0x01, 0x00, 0x10, 0xd6, 0x00, 0x10, 0xd6, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','z','e','n',0, /* 38067, 0x10010d6, U+10d6, KEY_Georgian_zen, GEORGIAN LETTER ZEN */
0x52, 0xb8, 0x01, 0x00, 0x10, 0xd7, 0x00, 0x10, 0xd7, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','t','a','n',0, /* 38093, 0x10010d7, U+10d7, KEY_Georgian_tan, GEORGIAN LETTER TAN */
0xa9, 0x1c, 0x01, 0x00, 0x10, 0xd8, 0x00, 0x10, 0xd8, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','i','n',0, /* 38118, 0x10010d8, U+10d8, KEY_Georgian_in, GEORGIAN LETTER IN */
0x52, 0x94, 0x01, 0x00, 0x10, 0xd9, 0x00, 0x10, 0xd9, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','k','a','n',0, /* 38144, 0x10010d9, U+10d9, KEY_Georgian_kan, GEORGIAN LETTER KAN */
0x52, 0x9d, 0x01, 0x00, 0x10, 0xda, 0x00, 0x10, 0xda, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','l','a','s',0, /* 38170, 0x10010da, U+10da, KEY_Georgian_las, GEORGIAN LETTER LAS */
0x52, 0x9c, 0x01, 0x00, 0x10, 0xdb, 0x00, 0x10, 0xdb, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','m','a','n',0, /* 38196, 0x10010db, U+10db, KEY_Georgian_man, GEORGIAN LETTER MAN */
0x52, 0xa4, 0x01, 0x00, 0x10, 0xdc, 0x00, 0x10, 0xdc, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','n','a','r',0, /* 38222, 0x10010dc, U+10dc, KEY_Georgian_nar, GEORGIAN LETTER NAR */
0xa9, 0x28, 0x01, 0x00, 0x10, 0xdd, 0x00, 0x10, 0xdd, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','o','n',0, /* 38247, 0x10010dd, U+10dd, KEY_Georgian_on, GEORGIAN LETTER ON */
0x52, 0xac, 0x01, 0x00, 0x10, 0xde, 0x00, 0x10, 0xde, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','p','a','r',0, /* 38273, 0x10010de, U+10de, KEY_Georgian_par, GEORGIAN LETTER PAR */
0xa6, 0x14, 0x01, 0x00, 0x10, 0xdf, 0x00, 0x10, 0xdf, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','z','h','a','r',0, /* 38300, 0x10010df, U+10df, KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */
0x52, 0xa7, 0x01, 0x00, 0x10, 0xe0, 0x00, 0x10, 0xe0, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','r','a','e',0, /* 38326, 0x10010e0, U+10e0, KEY_Georgian_rae, GEORGIAN LETTER RAE */
0x52, 0xb4, 0x01, 0x00, 0x10, 0xe1, 0x00, 0x10, 0xe1, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','s','a','n',0, /* 38352, 0x10010e1, U+10e1, KEY_Georgian_san, GEORGIAN LETTER SAN */
0x52, 0xbc, 0x01, 0x00, 0x10, 0xe2, 0x00, 0x10, 0xe2, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','t','a','r',0, /* 38378, 0x10010e2, U+10e2, KEY_Georgian_tar, GEORGIAN LETTER TAR */
0xa9, 0x34, 0x01, 0x00, 0x10, 0xe3, 0x00, 0x10, 0xe3, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','u','n',0, /* 38403, 0x10010e3, U+10e3, KEY_Georgian_un, GEORGIAN LETTER UN */
0xa5, 0xc4, 0x01, 0x00, 0x10, 0xe4, 0x00, 0x10, 0xe4, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','p','h','a','r',0, /* 38430, 0x10010e4, U+10e4, KEY_Georgian_phar, GEORGIAN LETTER PHAR */
0xa5, 0x9c, 0x01, 0x00, 0x10, 0xe5, 0x00, 0x10, 0xe5, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','k','h','a','r',0, /* 38457, 0x10010e5, U+10e5, KEY_Georgian_khar, GEORGIAN LETTER KHAR */
0xa5, 0x78, 0x01, 0x00, 0x10, 0xe6, 0x00, 0x10, 0xe6, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','g','h','a','n',0, /* 38484, 0x10010e6, U+10e6, KEY_Georgian_ghan, GEORGIAN LETTER GHAN */
0x52, 0xb0, 0x01, 0x00, 0x10, 0xe7, 0x00, 0x10, 0xe7, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','q','a','r',0, /* 38510, 0x10010e7, U+10e7, KEY_Georgian_qar, GEORGIAN LETTER QAR */
0xa5, 0xe8, 0x01, 0x00, 0x10, 0xe8, 0x00, 0x10, 0xe8, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','s','h','i','n',0, /* 38537, 0x10010e8, U+10e8, KEY_Georgian_shin, GEORGIAN LETTER SHIN */
0xa5, 0x68, 0x01, 0x00, 0x10, 0xe9, 0x00, 0x10, 0xe9, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','c','h','i','n',0, /* 38564, 0x10010e9, U+10e9, KEY_Georgian_chin, GEORGIAN LETTER CHIN */
0x52, 0x74, 0x01, 0x00, 0x10, 0xea, 0x00, 0x10, 0xea, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','c','a','n',0, /* 38590, 0x10010ea, U+10ea, KEY_Georgian_can, GEORGIAN LETTER CAN */
0x52, 0x9e, 0x01, 0x00, 0x10, 0xeb, 0x00, 0x10, 0xeb, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','j','i','l',0, /* 38616, 0x10010eb, U+10eb, KEY_Georgian_jil, GEORGIAN LETTER JIL */
0x52, 0x82, 0x01, 0x00, 0x10, 0xec, 0x00, 0x10, 0xec, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','c','i','l',0, /* 38642, 0x10010ec, U+10ec, KEY_Georgian_cil, GEORGIAN LETTER CIL */
0xa5, 0x5c, 0x01, 0x00, 0x10, 0xed, 0x00, 0x10, 0xed, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','c','h','a','r',0, /* 38669, 0x10010ed, U+10ed, KEY_Georgian_char, GEORGIAN LETTER CHAR */
0x52, 0xc8, 0x01, 0x00, 0x10, 0xee, 0x00, 0x10, 0xee, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','x','a','n',0, /* 38695, 0x10010ee, U+10ee, KEY_Georgian_xan, GEORGIAN LETTER XAN */
0xa5, 0x90, 0x01, 0x00, 0x10, 0xef, 0x00, 0x10, 0xef, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','j','h','a','n',0, /* 38722, 0x10010ef, U+10ef, KEY_Georgian_jhan, GEORGIAN LETTER JHAN */
0x52, 0x7f, 0x01, 0x00, 0x10, 0xf0, 0x00, 0x10, 0xf0, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','a','e',0, /* 38748, 0x10010f0, U+10f0, KEY_Georgian_hae, GEORGIAN LETTER HAE */
0xa9, 0x11, 0x01, 0x00, 0x10, 0xf1, 0x00, 0x10, 0xf1, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','e',0, /* 38773, 0x10010f1, U+10f1, KEY_Georgian_he, GEORGIAN LETTER HE */
0x52, 0x8f, 0x01, 0x00, 0x10, 0xf2, 0x00, 0x10, 0xf2, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','i','e',0, /* 38799, 0x10010f2, U+10f2, KEY_Georgian_hie, GEORGIAN LETTER HIE */
0xa9, 0x2f, 0x01, 0x00, 0x10, 0xf3, 0x00, 0x10, 0xf3, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','w','e',0, /* 38824, 0x10010f3, U+10f3, KEY_Georgian_we, GEORGIAN LETTER WE */
0x52, 0x8c, 0x01, 0x00, 0x10, 0xf4, 0x00, 0x10, 0xf4, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','a','r',0, /* 38850, 0x10010f4, U+10f4, KEY_Georgian_har, GEORGIAN LETTER HAR */
0x52, 0x9b, 0x01, 0x00, 0x10, 0xf5, 0x00, 0x10, 0xf5, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','o','e',0, /* 38876, 0x10010f5, U+10f5, KEY_Georgian_hoe, GEORGIAN LETTER HOE */
0xa9, 0x11, 0x01, 0x00, 0x10, 0xf6, 0x00, 0x10, 0xf6, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','f','i',0, /* 38901, 0x10010f6, U+10f6, KEY_Georgian_fi, GEORGIAN LETTER FI */
0xb6, 0x4a, 0x01, 0x00, 0x1e, 0x8a, 0x00, 0x1e, 0x8a, 'K','E','Y','_','X','a','b','o','v','e','d','o','t',0, /* 38924, 0x1001e8a, U+1e8a, KEY_Xabovedot, LATIN CAPITAL LETTER X WITH DOT ABOVE */
0x34, 0xf5, 0x01, 0x00, 0x01, 0x2c, 0x00, 0x01, 0x2c, 'K','E','Y','_','I','b','r','e','v','e',0, /* 38944, 0x100012c, U+012c, KEY_Ibreve, LATIN CAPITAL LETTER I WITH BREVE */
0x71, 0x27, 0x01, 0x00, 0x01, 0xb5, 0x00, 0x01, 0xb5, 'K','E','Y','_','Z','s','t','r','o','k','e',0, /* 38965, 0x10001b5, U+01b5, KEY_Zstroke, LATIN CAPITAL LETTER Z WITH STROKE */
0x34, 0x6c, 0x01, 0x00, 0x01, 0xe6, 0x00, 0x01, 0xe6, 'K','E','Y','_','G','c','a','r','o','n',0, /* 38985, 0x10001e6, U+01e6, KEY_Gcaron, LATIN CAPITAL LETTER G WITH CARON */
0x35, 0x6c, 0x01, 0x00, 0x01, 0xd1, 0x00, 0x01, 0xd2, 'K','E','Y','_','O','c','a','r','o','n',0, /* 39005, 0x10001d1, U+01d2, KEY_Ocaron, LATIN CAPITAL LETTER O WITH CARON */
0x6b, 0x16, 0x01, 0x00, 0x01, 0x9f, 0x00, 0x01, 0x9f, 'K','E','Y','_','O','b','a','r','r','e','d',0, /* 39026, 0x100019f, U+019f, KEY_Obarred, LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
0xd6, 0x4a, 0x01, 0x00, 0x1e, 0x8b, 0x00, 0x1e, 0x8b, 'K','E','Y','_','x','a','b','o','v','e','d','o','t',0, /* 39049, 0x1001e8b, U+1e8b, KEY_xabovedot, LATIN SMALL LETTER X WITH DOT ABOVE */
0x38, 0xf5, 0x01, 0x00, 0x01, 0x2d, 0x00, 0x01, 0x2d, 'K','E','Y','_','i','b','r','e','v','e',0, /* 39069, 0x100012d, U+012d, KEY_ibreve, LATIN SMALL LETTER I WITH BREVE */
0x79, 0x27, 0x01, 0x00, 0x01, 0xb6, 0x00, 0x01, 0xb6, 'K','E','Y','_','z','s','t','r','o','k','e',0, /* 39090, 0x10001b6, U+01b6, KEY_zstroke, LATIN SMALL LETTER Z WITH STROKE */
0x38, 0x6c, 0x01, 0x00, 0x01, 0xe7, 0x00, 0x01, 0xe7, 'K','E','Y','_','g','c','a','r','o','n',0, /* 39110, 0x10001e7, U+01e7, KEY_gcaron, LATIN SMALL LETTER G WITH CARON */
0x39, 0x6c, 0x01, 0x00, 0x01, 0xd2, 0x00, 0x01, 0xd2, 'K','E','Y','_','o','c','a','r','o','n',0, /* 39130, 0x10001d2, U+01d2, KEY_ocaron, LATIN SMALL LETTER O WITH CARON */
0x73, 0x16, 0x01, 0x00, 0x02, 0x75, 0x00, 0x02, 0x75, 'K','E','Y','_','o','b','a','r','r','e','d',0, /* 39151, 0x1000275, U+0275, KEY_obarred, LATIN SMALL LETTER BARRED O */
0x98, 0xf7, 0x01, 0x00, 0x01, 0x8f, 0x00, 0x01, 0x8f, 'K','E','Y','_','S','C','H','W','A',0, /* 39170, 0x100018f, U+018f, KEY_SCHWA, LATIN CAPITAL LETTER SCHWA */
0x9c, 0xd7, 0x01, 0x00, 0x02, 0x59, 0x00, 0x02, 0x59, 'K','E','Y','_','s','c','h','w','a',0, /* 39189, 0x1000259, U+0259, KEY_schwa, LATIN SMALL LETTER SCHWA */
0x25, 0xf8, 0x01, 0x00, 0x01, 0xb7, 0x00, 0x01, 0xb7, 'K','E','Y','_','E','Z','H',0, /* 39206, 0x10001b7, U+01b7, KEY_EZH, LATIN CAPITAL LETTER EZH */
0x26, 0xd8, 0x01, 0x00, 0x02, 0x92, 0x00, 0x02, 0x92, 'K','E','Y','_','e','z','h',0, /* 39223, 0x1000292, U+0292, KEY_ezh, LATIN SMALL LETTER EZH */
0xab, 0x4a, 0x01, 0x00, 0x1e, 0x36, 0x00, 0x1e, 0x36, 'K','E','Y','_','L','b','e','l','o','w','d','o','t',0, /* 39246, 0x1001e36, U+1e36, KEY_Lbelowdot, LATIN CAPITAL LETTER L WITH DOT BELOW */
0xcb, 0x4a, 0x01, 0x00, 0x1e, 0x37, 0x00, 0x1e, 0x37, 'K','E','Y','_','l','b','e','l','o','w','d','o','t',0, /* 39269, 0x1001e37, U+1e37, KEY_lbelowdot, LATIN SMALL LETTER L WITH DOT BELOW */
0xa0, 0x4a, 0x01, 0x00, 0x1e, 0xa0, 0x00, 0x1e, 0xa0, 'K','E','Y','_','A','b','e','l','o','w','d','o','t',0, /* 39292, 0x1001ea0, U+1ea0, KEY_Abelowdot, LATIN CAPITAL LETTER A WITH DOT BELOW */
0xc0, 0x4a, 0x01, 0x00, 0x1e, 0xa1, 0x00, 0x1e, 0xa1, 'K','E','Y','_','a','b','e','l','o','w','d','o','t',0, /* 39315, 0x1001ea1, U+1ea1, KEY_abelowdot, LATIN SMALL LETTER A WITH DOT BELOW */
0x99, 0xf5, 0x01, 0x00, 0x1e, 0xa2, 0x00, 0x1e, 0xa2, 'K','E','Y','_','A','h','o','o','k',0, /* 39334, 0x1001ea2, U+1ea2, KEY_Ahook, LATIN CAPITAL LETTER A WITH HOOK ABOVE */
0x9b, 0xf5, 0x01, 0x00, 0x1e, 0xa3, 0x00, 0x1e, 0xa3, 'K','E','Y','_','a','h','o','o','k',0, /* 39353, 0x1001ea3, U+1ea3, KEY_ahook, LATIN SMALL LETTER A WITH HOOK ABOVE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xa4, 0x00, 0x1e, 0xa4, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 39383, 0x1001ea4, U+1ea4, KEY_Acircumflexacute, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xa5, 0x00, 0x1e, 0xa5, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 39413, 0x1001ea5, U+1ea5, KEY_acircumflexacute, LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xa6, 0x00, 0x1e, 0xa6, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 39443, 0x1001ea6, U+1ea6, KEY_Acircumflexgrave, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xa7, 0x00, 0x1e, 0xa7, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 39473, 0x1001ea7, U+1ea7, KEY_acircumflexgrave, LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
0x8b, 0x65, 0x01, 0x00, 0x1e, 0xa8, 0x00, 0x1e, 0xa8, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 39502, 0x1001ea8, U+1ea8, KEY_Acircumflexhook, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
0x8b, 0x65, 0x01, 0x00, 0x1e, 0xa9, 0x00, 0x1e, 0xa9, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 39531, 0x1001ea9, U+1ea9, KEY_acircumflexhook, LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xaa, 0x00, 0x1e, 0xaa, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 39561, 0x1001eaa, U+1eaa, KEY_Acircumflextilde, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xab, 0x00, 0x1e, 0xab, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 39591, 0x1001eab, U+1eab, KEY_acircumflextilde, LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xac, 0x00, 0x1e, 0xac, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 39624, 0x1001eac, U+1eac, KEY_Acircumflexbelowdot, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xad, 0x00, 0x1e, 0xad, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 39657, 0x1001ead, U+1ead, KEY_acircumflexbelowdot, LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
0x8a, 0xe9, 0x01, 0x00, 0x1e, 0xae, 0x00, 0x1e, 0xae, 'K','E','Y','_','A','b','r','e','v','e','a','c','u','t','e',0, /* 39682, 0x1001eae, U+1eae, KEY_Abreveacute, LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
0x0a, 0xe9, 0x01, 0x00, 0x1e, 0xaf, 0x00, 0x1e, 0xaf, 'K','E','Y','_','a','b','r','e','v','e','a','c','u','t','e',0, /* 39707, 0x1001eaf, U+1eaf, KEY_abreveacute, LATIN SMALL LETTER A WITH BREVE AND ACUTE */
0x8b, 0x75, 0x01, 0x00, 0x1e, 0xb0, 0x00, 0x1e, 0xb0, 'K','E','Y','_','A','b','r','e','v','e','g','r','a','v','e',0, /* 39732, 0x1001eb0, U+1eb0, KEY_Abrevegrave, LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
0x0b, 0x75, 0x01, 0x00, 0x1e, 0xb1, 0x00, 0x1e, 0xb1, 'K','E','Y','_','a','b','r','e','v','e','g','r','a','v','e',0, /* 39757, 0x1001eb1, U+1eb1, KEY_abrevegrave, LATIN SMALL LETTER A WITH BREVE AND GRAVE */
0x45, 0x95, 0x01, 0x00, 0x1e, 0xb2, 0x00, 0x1e, 0xb2, 'K','E','Y','_','A','b','r','e','v','e','h','o','o','k',0, /* 39781, 0x1001eb2, U+1eb2, KEY_Abrevehook, LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
0x85, 0x95, 0x01, 0x00, 0x1e, 0xb3, 0x00, 0x1e, 0xb3, 'K','E','Y','_','a','b','r','e','v','e','h','o','o','k',0, /* 39805, 0x1001eb3, U+1eb3, KEY_abrevehook, LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
0x8c, 0x05, 0x01, 0x00, 0x1e, 0xb4, 0x00, 0x1e, 0xb4, 'K','E','Y','_','A','b','r','e','v','e','t','i','l','d','e',0, /* 39830, 0x1001eb4, U+1eb4, KEY_Abrevetilde, LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
0x0c, 0x05, 0x01, 0x00, 0x1e, 0xb5, 0x00, 0x1e, 0xb5, 'K','E','Y','_','a','b','r','e','v','e','t','i','l','d','e',0, /* 39855, 0x1001eb5, U+1eb5, KEY_abrevetilde, LATIN SMALL LETTER A WITH BREVE AND TILDE */
0x5a, 0x4a, 0x01, 0x00, 0x1e, 0xb6, 0x00, 0x1e, 0xb6, 'K','E','Y','_','A','b','r','e','v','e','b','e','l','o','w','d','o','t',0, /* 39883, 0x1001eb6, U+1eb6, KEY_Abrevebelowdot, LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
0x5a, 0x4a, 0x01, 0x00, 0x1e, 0xb7, 0x00, 0x1e, 0xb7, 'K','E','Y','_','a','b','r','e','v','e','b','e','l','o','w','d','o','t',0, /* 39911, 0x1001eb7, U+1eb7, KEY_abrevebelowdot, LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
0xa4, 0x4a, 0x01, 0x00, 0x1e, 0xb8, 0x00, 0x1e, 0xb8, 'K','E','Y','_','E','b','e','l','o','w','d','o','t',0, /* 39934, 0x1001eb8, U+1eb8, KEY_Ebelowdot, LATIN CAPITAL LETTER E WITH DOT BELOW */
0xc4, 0x4a, 0x01, 0x00, 0x1e, 0xb9, 0x00, 0x1e, 0xb9, 'K','E','Y','_','e','b','e','l','o','w','d','o','t',0, /* 39957, 0x1001eb9, U+1eb9, KEY_ebelowdot, LATIN SMALL LETTER E WITH DOT BELOW */
0x9a, 0x35, 0x01, 0x00, 0x1e, 0xba, 0x00, 0x1e, 0xba, 'K','E','Y','_','E','h','o','o','k',0, /* 39976, 0x1001eba, U+1eba, KEY_Ehook, LATIN CAPITAL LETTER E WITH HOOK ABOVE */
0x9c, 0x35, 0x01, 0x00, 0x1e, 0xbb, 0x00, 0x1e, 0xbb, 'K','E','Y','_','e','h','o','o','k',0, /* 39995, 0x1001ebb, U+1ebb, KEY_ehook, LATIN SMALL LETTER E WITH HOOK ABOVE */
0x35, 0x45, 0x01, 0x00, 0x1e, 0xbc, 0x00, 0x1e, 0xbc, 'K','E','Y','_','E','t','i','l','d','e',0, /* 40015, 0x1001ebc, U+1ebc, KEY_Etilde, LATIN CAPITAL LETTER E WITH TILDE */
0x39, 0x45, 0x01, 0x00, 0x1e, 0xbd, 0x00, 0x1e, 0xbd, 'K','E','Y','_','e','t','i','l','d','e',0, /* 40035, 0x1001ebd, U+1ebd, KEY_etilde, LATIN SMALL LETTER E WITH TILDE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xbe, 0x00, 0x1e, 0xbe, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 40065, 0x1001ebe, U+1ebe, KEY_Ecircumflexacute, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xbf, 0x00, 0x1e, 0xbf, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 40095, 0x1001ebf, U+1ebf, KEY_ecircumflexacute, LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xc0, 0x00, 0x1e, 0xc0, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 40125, 0x1001ec0, U+1ec0, KEY_Ecircumflexgrave, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xc1, 0x00, 0x1e, 0xc1, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 40155, 0x1001ec1, U+1ec1, KEY_ecircumflexgrave, LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
0x8b, 0x65, 0x01, 0x00, 0x1e, 0xc2, 0x00, 0x1e, 0xc2, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 40184, 0x1001ec2, U+1ec2, KEY_Ecircumflexhook, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
0x8b, 0x65, 0x01, 0x00, 0x1e, 0xc3, 0x00, 0x1e, 0xc3, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 40213, 0x1001ec3, U+1ec3, KEY_ecircumflexhook, LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xc4, 0x00, 0x1e, 0xc4, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 40243, 0x1001ec4, U+1ec4, KEY_Ecircumflextilde, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xc5, 0x00, 0x1e, 0xc5, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 40273, 0x1001ec5, U+1ec5, KEY_ecircumflextilde, LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xc6, 0x00, 0x1e, 0xc6, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 40306, 0x1001ec6, U+1ec6, KEY_Ecircumflexbelowdot, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xc7, 0x00, 0x1e, 0xc7, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 40339, 0x1001ec7, U+1ec7, KEY_ecircumflexbelowdot, LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
0x9a, 0x75, 0x01, 0x00, 0x1e, 0xc8, 0x00, 0x1e, 0xc8, 'K','E','Y','_','I','h','o','o','k',0, /* 40358, 0x1001ec8, U+1ec8, KEY_Ihook, LATIN CAPITAL LETTER I WITH HOOK ABOVE */
0x9c, 0x75, 0x01, 0x00, 0x1e, 0xc9, 0x00, 0x1e, 0xc9, 'K','E','Y','_','i','h','o','o','k',0, /* 40377, 0x1001ec9, U+1ec9, KEY_ihook, LATIN SMALL LETTER I WITH HOOK ABOVE */
0xa8, 0x4a, 0x01, 0x00, 0x1e, 0xca, 0x00, 0x1e, 0xca, 'K','E','Y','_','I','b','e','l','o','w','d','o','t',0, /* 40400, 0x1001eca, U+1eca, KEY_Ibelowdot, LATIN CAPITAL LETTER I WITH DOT BELOW */
0xc8, 0x4a, 0x01, 0x00, 0x1e, 0xcb, 0x00, 0x1e, 0xcb, 'K','E','Y','_','i','b','e','l','o','w','d','o','t',0, /* 40423, 0x1001ecb, U+1ecb, KEY_ibelowdot, LATIN SMALL LETTER I WITH DOT BELOW */
0xae, 0x4a, 0x01, 0x00, 0x1e, 0xcc, 0x00, 0x1e, 0xcc, 'K','E','Y','_','O','b','e','l','o','w','d','o','t',0, /* 40446, 0x1001ecc, U+1ecc, KEY_Obelowdot, LATIN CAPITAL LETTER O WITH DOT BELOW */
0xce, 0x4a, 0x01, 0x00, 0x1e, 0xcd, 0x00, 0x1e, 0xcd, 'K','E','Y','_','o','b','e','l','o','w','d','o','t',0, /* 40469, 0x1001ecd, U+1ecd, KEY_obelowdot, LATIN SMALL LETTER O WITH DOT BELOW */
0x9a, 0xd5, 0x01, 0x00, 0x1e, 0xce, 0x00, 0x1e, 0xce, 'K','E','Y','_','O','h','o','o','k',0, /* 40488, 0x1001ece, U+1ece, KEY_Ohook, LATIN CAPITAL LETTER O WITH HOOK ABOVE */
0x9c, 0xd5, 0x01, 0x00, 0x1e, 0xcf, 0x00, 0x1e, 0xcf, 'K','E','Y','_','o','h','o','o','k',0, /* 40507, 0x1001ecf, U+1ecf, KEY_ohook, LATIN SMALL LETTER O WITH HOOK ABOVE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xd0, 0x00, 0x1e, 0xd0, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 40537, 0x1001ed0, U+1ed0, KEY_Ocircumflexacute, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xd1, 0x00, 0x1e, 0xd1, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 40567, 0x1001ed1, U+1ed1, KEY_ocircumflexacute, LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xd2, 0x00, 0x1e, 0xd2, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 40597, 0x1001ed2, U+1ed2, KEY_Ocircumflexgrave, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xd3, 0x00, 0x1e, 0xd3, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 40627, 0x1001ed3, U+1ed3, KEY_ocircumflexgrave, LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
0x0b, 0x65, 0x01, 0x00, 0x1e, 0xd4, 0x00, 0x1e, 0xd4, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 40656, 0x1001ed4, U+1ed4, KEY_Ocircumflexhook, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
0x0b, 0x65, 0x01, 0x00, 0x1e, 0xd5, 0x00, 0x1e, 0xd5, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 40685, 0x1001ed5, U+1ed5, KEY_ocircumflexhook, LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xd6, 0x00, 0x1e, 0xd6, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 40715, 0x1001ed6, U+1ed6, KEY_Ocircumflextilde, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xd7, 0x00, 0x1e, 0xd7, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 40745, 0x1001ed7, U+1ed7, KEY_ocircumflextilde, LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xd8, 0x00, 0x1e, 0xd8, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 40778, 0x1001ed8, U+1ed8, KEY_Ocircumflexbelowdot, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xd9, 0x00, 0x1e, 0xd9, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 40811, 0x1001ed9, U+1ed9, KEY_ocircumflexbelowdot, LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
0x68, 0x09, 0x01, 0x00, 0x1e, 0xda, 0x00, 0x1e, 0xda, 'K','E','Y','_','O','h','o','r','n','a','c','u','t','e',0, /* 40835, 0x1001eda, U+1eda, KEY_Ohornacute, LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
0xa8, 0x09, 0x01, 0x00, 0x1e, 0xdb, 0x00, 0x1e, 0xdb, 'K','E','Y','_','o','h','o','r','n','a','c','u','t','e',0, /* 40859, 0x1001edb, U+1edb, KEY_ohornacute, LATIN SMALL LETTER O WITH HORN AND ACUTE */
0x68, 0x95, 0x01, 0x00, 0x1e, 0xdc, 0x00, 0x1e, 0xdc, 'K','E','Y','_','O','h','o','r','n','g','r','a','v','e',0, /* 40883, 0x1001edc, U+1edc, KEY_Ohorngrave, LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
0xa8, 0x95, 0x01, 0x00, 0x1e, 0xdd, 0x00, 0x1e, 0xdd, 'K','E','Y','_','o','h','o','r','n','g','r','a','v','e',0, /* 40907, 0x1001edd, U+1edd, KEY_ohorngrave, LATIN SMALL LETTER O WITH HORN AND GRAVE */
0xb4, 0x25, 0x01, 0x00, 0x1e, 0xde, 0x00, 0x1e, 0xde, 'K','E','Y','_','O','h','o','r','n','h','o','o','k',0, /* 40930, 0x1001ede, U+1ede, KEY_Ohornhook, LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
0xd4, 0x25, 0x01, 0x00, 0x1e, 0xdf, 0x00, 0x1e, 0xdf, 'K','E','Y','_','o','h','o','r','n','h','o','o','k',0, /* 40953, 0x1001edf, U+1edf, KEY_ohornhook, LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
0x69, 0x25, 0x01, 0x00, 0x1e, 0xe0, 0x00, 0x1e, 0xe0, 'K','E','Y','_','O','h','o','r','n','t','i','l','d','e',0, /* 40977, 0x1001ee0, U+1ee0, KEY_Ohorntilde, LATIN CAPITAL LETTER O WITH HORN AND TILDE */
0xa9, 0x25, 0x01, 0x00, 0x1e, 0xe1, 0x00, 0x1e, 0xe1, 'K','E','Y','_','o','h','o','r','n','t','i','l','d','e',0, /* 41001, 0x1001ee1, U+1ee1, KEY_ohorntilde, LATIN SMALL LETTER O WITH HORN AND TILDE */
0x43, 0x4a, 0x01, 0x00, 0x1e, 0xe2, 0x00, 0x1e, 0xe2, 'K','E','Y','_','O','h','o','r','n','b','e','l','o','w','d','o','t',0, /* 41028, 0x1001ee2, U+1ee2, KEY_Ohornbelowdot, LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
0x43, 0x4a, 0x01, 0x00, 0x1e, 0xe3, 0x00, 0x1e, 0xe3, 'K','E','Y','_','o','h','o','r','n','b','e','l','o','w','d','o','t',0, /* 41055, 0x1001ee3, U+1ee3, KEY_ohornbelowdot, LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
0xb4, 0x4a, 0x01, 0x00, 0x1e, 0xe4, 0x00, 0x1e, 0xe4, 'K','E','Y','_','U','b','e','l','o','w','d','o','t',0, /* 41078, 0x1001ee4, U+1ee4, KEY_Ubelowdot, LATIN CAPITAL LETTER U WITH DOT BELOW */
0xd4, 0x4a, 0x01, 0x00, 0x1e, 0xe5, 0x00, 0x1e, 0xe5, 'K','E','Y','_','u','b','e','l','o','w','d','o','t',0, /* 41101, 0x1001ee5, U+1ee5, KEY_ubelowdot, LATIN SMALL LETTER U WITH DOT BELOW */
0x9b, 0x35, 0x01, 0x00, 0x1e, 0xe6, 0x00, 0x1e, 0xe6, 'K','E','Y','_','U','h','o','o','k',0, /* 41120, 0x1001ee6, U+1ee6, KEY_Uhook, LATIN CAPITAL LETTER U WITH HOOK ABOVE */
0x9d, 0x35, 0x01, 0x00, 0x1e, 0xe7, 0x00, 0x1e, 0xe7, 'K','E','Y','_','u','h','o','o','k',0, /* 41139, 0x1001ee7, U+1ee7, KEY_uhook, LATIN SMALL LETTER U WITH HOOK ABOVE */
0x74, 0x09, 0x01, 0x00, 0x1e, 0xe8, 0x00, 0x1e, 0xe8, 'K','E','Y','_','U','h','o','r','n','a','c','u','t','e',0, /* 41163, 0x1001ee8, U+1ee8, KEY_Uhornacute, LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
0xb4, 0x09, 0x01, 0x00, 0x1e, 0xe9, 0x00, 0x1e, 0xe9, 'K','E','Y','_','u','h','o','r','n','a','c','u','t','e',0, /* 41187, 0x1001ee9, U+1ee9, KEY_uhornacute, LATIN SMALL LETTER U WITH HORN AND ACUTE */
0x74, 0x95, 0x01, 0x00, 0x1e, 0xea, 0x00, 0x1e, 0xea, 'K','E','Y','_','U','h','o','r','n','g','r','a','v','e',0, /* 41211, 0x1001eea, U+1eea, KEY_Uhorngrave, LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
0xb4, 0x95, 0x01, 0x00, 0x1e, 0xeb, 0x00, 0x1e, 0xeb, 'K','E','Y','_','u','h','o','r','n','g','r','a','v','e',0, /* 41235, 0x1001eeb, U+1eeb, KEY_uhorngrave, LATIN SMALL LETTER U WITH HORN AND GRAVE */
0xba, 0x25, 0x01, 0x00, 0x1e, 0xec, 0x00, 0x1e, 0xec, 'K','E','Y','_','U','h','o','r','n','h','o','o','k',0, /* 41258, 0x1001eec, U+1eec, KEY_Uhornhook, LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
0xda, 0x25, 0x01, 0x00, 0x1e, 0xed, 0x00, 0x1e, 0xed, 'K','E','Y','_','u','h','o','r','n','h','o','o','k',0, /* 41281, 0x1001eed, U+1eed, KEY_uhornhook, LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
0x75, 0x25, 0x01, 0x00, 0x1e, 0xee, 0x00, 0x1e, 0xee, 'K','E','Y','_','U','h','o','r','n','t','i','l','d','e',0, /* 41305, 0x1001eee, U+1eee, KEY_Uhorntilde, LATIN CAPITAL LETTER U WITH HORN AND TILDE */
0xb5, 0x25, 0x01, 0x00, 0x1e, 0xef, 0x00, 0x1e, 0xef, 'K','E','Y','_','u','h','o','r','n','t','i','l','d','e',0, /* 41329, 0x1001eef, U+1eef, KEY_uhorntilde, LATIN SMALL LETTER U WITH HORN AND TILDE */
0xa3, 0x4a, 0x01, 0x00, 0x1e, 0xf0, 0x00, 0x1e, 0xf0, 'K','E','Y','_','U','h','o','r','n','b','e','l','o','w','d','o','t',0, /* 41356, 0x1001ef0, U+1ef0, KEY_Uhornbelowdot, LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
0xa3, 0x4a, 0x01, 0x00, 0x1e, 0xf1, 0x00, 0x1e, 0xf1, 'K','E','Y','_','u','h','o','r','n','b','e','l','o','w','d','o','t',0, /* 41383, 0x1001ef1, U+1ef1, KEY_uhornbelowdot, LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
0xb8, 0x4a, 0x01, 0x00, 0x1e, 0xf4, 0x00, 0x1e, 0xf4, 'K','E','Y','_','Y','b','e','l','o','w','d','o','t',0, /* 41406, 0x1001ef4, U+1ef4, KEY_Ybelowdot, LATIN CAPITAL LETTER Y WITH DOT BELOW */
0xd8, 0x4a, 0x01, 0x00, 0x1e, 0xf5, 0x00, 0x1e, 0xf5, 'K','E','Y','_','y','b','e','l','o','w','d','o','t',0, /* 41429, 0x1001ef5, U+1ef5, KEY_ybelowdot, LATIN SMALL LETTER Y WITH DOT BELOW */
0x9b, 0x75, 0x01, 0x00, 0x1e, 0xf6, 0x00, 0x1e, 0xf6, 'K','E','Y','_','Y','h','o','o','k',0, /* 41448, 0x1001ef6, U+1ef6, KEY_Yhook, LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
0x9d, 0x75, 0x01, 0x00, 0x1e, 0xf7, 0x00, 0x1e, 0xf7, 'K','E','Y','_','y','h','o','o','k',0, /* 41467, 0x1001ef7, U+1ef7, KEY_yhook, LATIN SMALL LETTER Y WITH HOOK ABOVE */
0x37, 0xc5, 0x01, 0x00, 0x1e, 0xf8, 0x00, 0x1e, 0xf8, 'K','E','Y','_','Y','t','i','l','d','e',0, /* 41487, 0x1001ef8, U+1ef8, KEY_Ytilde, LATIN CAPITAL LETTER Y WITH TILDE */
0x3b, 0xc5, 0x01, 0x00, 0x1e, 0xf9, 0x00, 0x1e, 0xf9, 'K','E','Y','_','y','t','i','l','d','e',0, /* 41507, 0x1001ef9, U+1ef9, KEY_ytilde, LATIN SMALL LETTER Y WITH TILDE */
0x9a, 0xde, 0x01, 0x00, 0x01, 0xa0, 0x00, 0x01, 0xa0, 'K','E','Y','_','O','h','o','r','n',0, /* 41526, 0x10001a0, U+01a0, KEY_Ohorn, LATIN CAPITAL LETTER O WITH HORN */
0x9c, 0xde, 0x01, 0x00, 0x01, 0xa1, 0x00, 0x01, 0xa1, 'K','E','Y','_','o','h','o','r','n',0, /* 41545, 0x10001a1, U+01a1, KEY_ohorn, LATIN SMALL LETTER O WITH HORN */
0x9b, 0x3e, 0x01, 0x00, 0x01, 0xaf, 0x00, 0x01, 0xaf, 'K','E','Y','_','U','h','o','r','n',0, /* 41564, 0x10001af, U+01af, KEY_Uhorn, LATIN CAPITAL LETTER U WITH HORN */
0x9d, 0x3e, 0x01, 0x00, 0x01, 0xb0, 0x00, 0x01, 0xb0, 'K','E','Y','_','u','h','o','r','n',0, /* 41583, 0x10001b0, U+01b0, KEY_uhorn, LATIN SMALL LETTER U WITH HORN */
0x68, 0xe8, 0x01, 0x00, 0x20, 0xa0, 0x00, 0x20, 0xa0, 'K','E','Y','_','E','c','u','S','i','g','n',0, /* 41604, 0x10020a0, U+20a0, KEY_EcuSign, EURO-CURRENCY SIGN */
0xa9, 0xb8, 0x01, 0x00, 0x20, 0xa1, 0x00, 0x20, 0xa1, 'K','E','Y','_','C','o','l','o','n','S','i','g','n',0, /* 41627, 0x10020a1, U+20a1, KEY_ColonSign, COLON SIGN */
0x7b, 0x68, 0x01, 0x00, 0x20, 0xa2, 0x00, 0x20, 0xa2, 'K','E','Y','_','C','r','u','z','e','i','r','o','S','i','g','n',0, /* 41653, 0x10020a2, U+20a2, KEY_CruzeiroSign, CRUZEIRO SIGN */
0x30, 0xa8, 0x01, 0x00, 0x20, 0xa3, 0x00, 0x20, 0xa3, 'K','E','Y','_','F','F','r','a','n','c','S','i','g','n',0, /* 41677, 0x10020a3, U+20a3, KEY_FFrancSign, FRENCH FRANC SIGN */
0xd7, 0x08, 0x01, 0x00, 0x20, 0xa4, 0x00, 0x20, 0xa4, 'K','E','Y','_','L','i','r','a','S','i','g','n',0, /* 41699, 0x10020a4, U+20a4, KEY_LiraSign, LIRA SIGN */
0xd7, 0x78, 0x01, 0x00, 0x20, 0xa5, 0x00, 0x20, 0xa5, 'K','E','Y','_','M','i','l','l','S','i','g','n',0, /* 41721, 0x10020a5, U+20a5, KEY_MillSign, MILL SIGN */
0xac, 0x88, 0x01, 0x00, 0x20, 0xa6, 0x00, 0x20, 0xa6, 'K','E','Y','_','N','a','i','r','a','S','i','g','n',0, /* 41744, 0x10020a6, U+20a6, KEY_NairaSign, NAIRA SIGN */
0x65, 0xc8, 0x01, 0x00, 0x20, 0xa7, 0x00, 0x20, 0xa7, 'K','E','Y','_','P','e','s','e','t','a','S','i','g','n',0, /* 41768, 0x10020a7, U+20a7, KEY_PesetaSign, PESETA SIGN */
0xba, 0xe8, 0x01, 0x00, 0x20, 0xa8, 0x00, 0x20, 0xa8, 'K','E','Y','_','R','u','p','e','e','S','i','g','n',0, /* 41791, 0x10020a8, U+20a8, KEY_RupeeSign, RUPEE SIGN */
0x6e, 0x78, 0x01, 0x00, 0x20, 0xa9, 0x00, 0x20, 0xa9, 'K','E','Y','_','W','o','n','S','i','g','n',0, /* 41812, 0x10020a9, U+20a9, KEY_WonSign, WON SIGN */
0xf9, 0x98, 0x01, 0x00, 0x20, 0xaa, 0x00, 0x20, 0xaa, 'K','E','Y','_','N','e','w','S','h','e','q','e','l','S','i','g','n',0, /* 41839, 0x10020aa, U+20aa, KEY_NewSheqelSign, NEW SHEQEL SIGN */
0xd4, 0x68, 0x01, 0x00, 0x20, 0xab, 0x00, 0x20, 0xab, 'K','E','Y','_','D','o','n','g','S','i','g','n',0, /* 41861, 0x10020ab, U+20ab, KEY_DongSign, DONG SIGN */
0xd7, 0x68, 0x00, 0x00, 0x20, 0xac, 0x00, 0x20, 0xac, 'K','E','Y','_','E','u','r','o','S','i','g','n',0, /* 41883, 0x20ac, U+20ac, KEY_EuroSign, EURO SIGN */
0xf8, 0x94, 0x01, 0x00, 0x20, 0x70, 0x00, 0x20, 0x70, 'K','E','Y','_','z','e','r','o','s','u','p','e','r','i','o','r',0, /* 41909, 0x1002070, U+2070, KEY_zerosuperior, SUPERSCRIPT ZERO */
0x89, 0x94, 0x01, 0x00, 0x20, 0x74, 0x00, 0x20, 0x74, 'K','E','Y','_','f','o','u','r','s','u','p','e','r','i','o','r',0, /* 41935, 0x1002074, U+2074, KEY_foursuperior, SUPERSCRIPT FOUR */
0x66, 0x94, 0x01, 0x00, 0x20, 0x75, 0x00, 0x20, 0x75, 'K','E','Y','_','f','i','v','e','s','u','p','e','r','i','o','r',0, /* 41961, 0x1002075, U+2075, KEY_fivesuperior, SUPERSCRIPT FIVE */
0x6f, 0x94, 0x01, 0x00, 0x20, 0x76, 0x00, 0x20, 0x76, 'K','E','Y','_','s','i','x','s','u','p','e','r','i','o','r',0, /* 41986, 0x1002076, U+2076, KEY_sixsuperior, SUPERSCRIPT SIX */
0x79, 0x94, 0x01, 0x00, 0x20, 0x77, 0x00, 0x20, 0x77, 'K','E','Y','_','s','e','v','e','n','s','u','p','e','r','i','o','r',0, /* 42013, 0x1002077, U+2077, KEY_sevensuperior, SUPERSCRIPT SEVEN */
0x89, 0x94, 0x01, 0x00, 0x20, 0x78, 0x00, 0x20, 0x78, 'K','E','Y','_','e','i','g','h','t','s','u','p','e','r','i','o','r',0, /* 42040, 0x1002078, U+2078, KEY_eightsuperior, SUPERSCRIPT EIGHT */
0x96, 0x94, 0x01, 0x00, 0x20, 0x79, 0x00, 0x20, 0x79, 'K','E','Y','_','n','i','n','e','s','u','p','e','r','i','o','r',0, /* 42066, 0x1002079, U+2079, KEY_ninesuperior, SUPERSCRIPT NINE */
0xef, 0x18, 0x01, 0x00, 0x20, 0x80, 0x00, 0x20, 0x80, 'K','E','Y','_','z','e','r','o','s','u','b','s','c','r','i','p','t',0, /* 42093, 0x1002080, U+2080, KEY_zerosubscript, SUBSCRIPT ZERO */
0xab, 0x18, 0x01, 0x00, 0x20, 0x81, 0x00, 0x20, 0x81, 'K','E','Y','_','o','n','e','s','u','b','s','c','r','i','p','t',0, /* 42119, 0x1002081, U+2081, KEY_onesubscript, SUBSCRIPT ONE */
0x0b, 0x18, 0x01, 0x00, 0x20, 0x82, 0x00, 0x20, 0x82, 'K','E','Y','_','t','w','o','s','u','b','s','c','r','i','p','t',0, /* 42145, 0x1002082, U+2082, KEY_twosubscript, SUBSCRIPT TWO */
0x0f, 0x18, 0x01, 0x00, 0x20, 0x83, 0x00, 0x20, 0x83, 'K','E','Y','_','t','h','r','e','e','s','u','b','s','c','r','i','p','t',0, /* 42173, 0x1002083, U+2083, KEY_threesubscript, SUBSCRIPT THREE */
0x11, 0x18, 0x01, 0x00, 0x20, 0x84, 0x00, 0x20, 0x84, 'K','E','Y','_','f','o','u','r','s','u','b','s','c','r','i','p','t',0, /* 42200, 0x1002084, U+2084, KEY_foursubscript, SUBSCRIPT FOUR */
0xcb, 0x18, 0x01, 0x00, 0x20, 0x85, 0x00, 0x20, 0x85, 'K','E','Y','_','f','i','v','e','s','u','b','s','c','r','i','p','t',0, /* 42227, 0x1002085, U+2085, KEY_fivesubscript, SUBSCRIPT FIVE */
0xdd, 0x18, 0x01, 0x00, 0x20, 0x86, 0x00, 0x20, 0x86, 'K','E','Y','_','s','i','x','s','u','b','s','c','r','i','p','t',0, /* 42253, 0x1002086, U+2086, KEY_sixsubscript, SUBSCRIPT SIX */
0xf1, 0x18, 0x01, 0x00, 0x20, 0x87, 0x00, 0x20, 0x87, 'K','E','Y','_','s','e','v','e','n','s','u','b','s','c','r','i','p','t',0, /* 42281, 0x1002087, U+2087, KEY_sevensubscript, SUBSCRIPT SEVEN */
0x11, 0x18, 0x01, 0x00, 0x20, 0x88, 0x00, 0x20, 0x88, 'K','E','Y','_','e','i','g','h','t','s','u','b','s','c','r','i','p','t',0, /* 42309, 0x1002088, U+2088, KEY_eightsubscript, SUBSCRIPT EIGHT */
0x2b, 0x18, 0x01, 0x00, 0x20, 0x89, 0x00, 0x20, 0x89, 'K','E','Y','_','n','i','n','e','s','u','b','s','c','r','i','p','t',0, /* 42336, 0x1002089, U+2089, KEY_ninesubscript, SUBSCRIPT NINE */
0x1e, 0xf2, 0x01, 0x00, 0x22, 0x02, 0x00, 0x22, 0x02, 'K','E','Y','_','p','a','r','t','d','i','f','f','e','r','e','n','t','i','a','l',0, /* 42366, 0x1002202, U+2202, KEY_partdifferential, PARTIAL DIFFERENTIAL */
0xe6, 0xd2, 0x01, 0x00, 0x22, 0x05, 0x00, 0x22, 0x05, 'K','E','Y','_','e','m','p','t','y','s','e','t',0, /* 42388, 0x1002205, U+2205, KEY_emptyset, NULL SET */
0xc8, 0xb4, 0x01, 0x00, 0x22, 0x08, 0x00, 0x22, 0x08, 'K','E','Y','_','e','l','e','m','e','n','t','o','f',0, /* 42411, 0x1002208, U+2208, KEY_elementof, ELEMENT OF */
0xb2, 0xb4, 0x01, 0x00, 0x22, 0x09, 0x00, 0x22, 0x09, 'K','E','Y','_','n','o','t','e','l','e','m','e','n','t','o','f',0, /* 42437, 0x1002209, U+2209, KEY_notelementof, NOT AN ELEMENT OF */
0x96, 0x21, 0x01, 0x00, 0x22, 0x0b, 0x00, 0x22, 0x0b, 'K','E','Y','_','c','o','n','t','a','i','n','s','a','s',0, /* 42461, 0x100220b, U+220b, KEY_containsas, CONTAINS AS MEMBER */
0xb8, 0xee, 0x01, 0x00, 0x22, 0x1a, 0x00, 0x22, 0x1a, 'K','E','Y','_','s','q','u','a','r','e','r','o','o','t',0, /* 42485, 0x100221a, U+221a, KEY_squareroot, SQUARE ROOT */
0xe4, 0xee, 0x01, 0x00, 0x22, 0x1b, 0x00, 0x22, 0x1b, 'K','E','Y','_','c','u','b','e','r','o','o','t',0, /* 42507, 0x100221b, U+221b, KEY_cuberoot, CUBE ROOT */
0xa1, 0x9e, 0x01, 0x00, 0x22, 0x1c, 0x00, 0x22, 0x1c, 'K','E','Y','_','f','o','u','r','t','h','r','o','o','t',0, /* 42531, 0x100221c, U+221c, KEY_fourthroot, FOURTH ROOT */
0xc8, 0xfe, 0x01, 0x00, 0x22, 0x2c, 0x00, 0x22, 0x2c, 'K','E','Y','_','d','i','n','t','e','g','r','a','l',0, /* 42554, 0x100222c, U+222c, KEY_dintegral, DOUBLE INTEGRAL */
0xd8, 0xfe, 0x01, 0x00, 0x22, 0x2d, 0x00, 0x22, 0x2d, 'K','E','Y','_','t','i','n','t','e','g','r','a','l',0, /* 42577, 0x100222d, U+222d, KEY_tintegral, TRIPLE INTEGRAL */
0x6f, 0xf7, 0x01, 0x00, 0x22, 0x35, 0x00, 0x22, 0x35, 'K','E','Y','_','b','e','c','a','u','s','e',0, /* 42598, 0x1002235, U+2235, KEY_because, BECAUSE */
0xe5, 0x33, 0x01, 0x00, 0x22, 0x48, 0x00, 0x22, 0x45, 'K','E','Y','_','a','p','p','r','o','x','e','q',0, /* 42620, 0x1002248, U+2245, KEY_approxeq, ALMOST EQUAL TO */
0x5a, 0x33, 0x01, 0x00, 0x22, 0x47, 0x00, 0x22, 0x47, 'K','E','Y','_','n','o','t','a','p','p','r','o','x','e','q',0, /* 42645, 0x1002247, U+2247, KEY_notapproxeq, NOT ALMOST EQUAL TO */
0xb3, 0x42, 0x01, 0x00, 0x22, 0x62, 0x00, 0x22, 0x62, 'K','E','Y','_','n','o','t','i','d','e','n','t','i','c','a','l',0, /* 42671, 0x1002262, U+2262, KEY_notidentical, NOT IDENTICAL TO */
0xee, 0x73, 0x01, 0x00, 0x22, 0x63, 0x00, 0x22, 0x63, 'K','E','Y','_','s','t','r','i','c','t','e','q',0, /* 42693, 0x1002263, U+2263, KEY_stricteq, STRICTLY EQUIVALENT TO */
0x79, 0x97, 0x00, 0x00, 0xff, 0xf1, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','1',0, /* 42720, 0xfff1, KEY_braille_dot_1 */
0x79, 0x98, 0x00, 0x00, 0xff, 0xf2, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','2',0, /* 42747, 0xfff2, KEY_braille_dot_2 */
0x79, 0x99, 0x00, 0x00, 0xff, 0xf3, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','3',0, /* 42774, 0xfff3, KEY_braille_dot_3 */
0x79, 0x9a, 0x00, 0x00, 0xff, 0xf4, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','4',0, /* 42801, 0xfff4, KEY_braille_dot_4 */
0x79, 0x9b, 0x00, 0x00, 0xff, 0xf5, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','5',0, /* 42828, 0xfff5, KEY_braille_dot_5 */
0x79, 0x9c, 0x00, 0x00, 0xff, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','6',0, /* 42855, 0xfff6, KEY_braille_dot_6 */
0x79, 0x9d, 0x00, 0x00, 0xff, 0xf7, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','7',0, /* 42882, 0xfff7, KEY_braille_dot_7 */
0x79, 0x9e, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','8',0, /* 42909, 0xfff8, KEY_braille_dot_8 */
0x79, 0x9f, 0x00, 0x00, 0xff, 0xf9, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','9',0, /* 42936, 0xfff9, KEY_braille_dot_9 */
0xf3, 0x5e, 0x00, 0x00, 0xff, 0xfa, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','1','0',0, /* 42964, 0xfffa, KEY_braille_dot_10 */
0x79, 0x6b, 0x01, 0x00, 0x28, 0x00, 0x00, 0x28, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','b','l','a','n','k',0, /* 42991, 0x1002800, U+2800, KEY_braille_blank, BRAILLE PATTERN BLANK */
0xf4, 0x0b, 0x01, 0x00, 0x28, 0x01, 0x00, 0x28, 0x01, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1',0, /* 43019, 0x1002801, U+2801, KEY_braille_dots_1, BRAILLE PATTERN DOTS-1 */
0xf4, 0x0c, 0x01, 0x00, 0x28, 0x02, 0x00, 0x28, 0x02, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2',0, /* 43047, 0x1002802, U+2802, KEY_braille_dots_2, BRAILLE PATTERN DOTS-2 */
0xe8, 0x48, 0x01, 0x00, 0x28, 0x03, 0x00, 0x28, 0x03, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2',0, /* 43076, 0x1002803, U+2803, KEY_braille_dots_12, BRAILLE PATTERN DOTS-12 */
0xf4, 0x0d, 0x01, 0x00, 0x28, 0x04, 0x00, 0x28, 0x04, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3',0, /* 43104, 0x1002804, U+2804, KEY_braille_dots_3, BRAILLE PATTERN DOTS-3 */
0xe8, 0x49, 0x01, 0x00, 0x28, 0x05, 0x00, 0x28, 0x05, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3',0, /* 43133, 0x1002805, U+2805, KEY_braille_dots_13, BRAILLE PATTERN DOTS-13 */
0xe8, 0x4b, 0x01, 0x00, 0x28, 0x06, 0x00, 0x28, 0x06, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3',0, /* 43162, 0x1002806, U+2806, KEY_braille_dots_23, BRAILLE PATTERN DOTS-23 */
0xd0, 0xc3, 0x01, 0x00, 0x28, 0x07, 0x00, 0x28, 0x07, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3',0, /* 43192, 0x1002807, U+2807, KEY_braille_dots_123, BRAILLE PATTERN DOTS-123 */
0xf4, 0x0e, 0x01, 0x00, 0x28, 0x08, 0x00, 0x28, 0x08, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4',0, /* 43220, 0x1002808, U+2808, KEY_braille_dots_4, BRAILLE PATTERN DOTS-4 */
0xe8, 0x4a, 0x01, 0x00, 0x28, 0x09, 0x00, 0x28, 0x09, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4',0, /* 43249, 0x1002809, U+2809, KEY_braille_dots_14, BRAILLE PATTERN DOTS-14 */
0xe8, 0x4c, 0x01, 0x00, 0x28, 0x0a, 0x00, 0x28, 0x0a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4',0, /* 43278, 0x100280a, U+280a, KEY_braille_dots_24, BRAILLE PATTERN DOTS-24 */
0xd0, 0xc4, 0x01, 0x00, 0x28, 0x0b, 0x00, 0x28, 0x0b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4',0, /* 43308, 0x100280b, U+280b, KEY_braille_dots_124, BRAILLE PATTERN DOTS-124 */
0xe8, 0x4e, 0x01, 0x00, 0x28, 0x0c, 0x00, 0x28, 0x0c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4',0, /* 43337, 0x100280c, U+280c, KEY_braille_dots_34, BRAILLE PATTERN DOTS-34 */
0xd0, 0xc6, 0x01, 0x00, 0x28, 0x0d, 0x00, 0x28, 0x0d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4',0, /* 43367, 0x100280d, U+280d, KEY_braille_dots_134, BRAILLE PATTERN DOTS-134 */
0xd0, 0xca, 0x01, 0x00, 0x28, 0x0e, 0x00, 0x28, 0x0e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4',0, /* 43397, 0x100280e, U+280e, KEY_braille_dots_234, BRAILLE PATTERN DOTS-234 */
0xa1, 0xba, 0x01, 0x00, 0x28, 0x0f, 0x00, 0x28, 0x0f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4',0, /* 43428, 0x100280f, U+280f, KEY_braille_dots_1234, BRAILLE PATTERN DOTS-1234 */
0xf4, 0x0f, 0x01, 0x00, 0x28, 0x10, 0x00, 0x28, 0x10, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5',0, /* 43456, 0x1002810, U+2810, KEY_braille_dots_5, BRAILLE PATTERN DOTS-5 */
0xe8, 0x4b, 0x01, 0x00, 0x28, 0x11, 0x00, 0x28, 0x11, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5',0, /* 43485, 0x1002811, U+2811, KEY_braille_dots_15, BRAILLE PATTERN DOTS-15 */
0xe8, 0x4d, 0x01, 0x00, 0x28, 0x12, 0x00, 0x28, 0x12, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5',0, /* 43514, 0x1002812, U+2812, KEY_braille_dots_25, BRAILLE PATTERN DOTS-25 */
0xd0, 0xc5, 0x01, 0x00, 0x28, 0x13, 0x00, 0x28, 0x13, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5',0, /* 43544, 0x1002813, U+2813, KEY_braille_dots_125, BRAILLE PATTERN DOTS-125 */
0xe8, 0x4f, 0x01, 0x00, 0x28, 0x14, 0x00, 0x28, 0x14, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5',0, /* 43573, 0x1002814, U+2814, KEY_braille_dots_35, BRAILLE PATTERN DOTS-35 */
0xd0, 0xc7, 0x01, 0x00, 0x28, 0x15, 0x00, 0x28, 0x15, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5',0, /* 43603, 0x1002815, U+2815, KEY_braille_dots_135, BRAILLE PATTERN DOTS-135 */
0xd0, 0xcb, 0x01, 0x00, 0x28, 0x16, 0x00, 0x28, 0x16, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5',0, /* 43633, 0x1002816, U+2816, KEY_braille_dots_235, BRAILLE PATTERN DOTS-235 */
0xa1, 0xbb, 0x01, 0x00, 0x28, 0x17, 0x00, 0x28, 0x17, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5',0, /* 43664, 0x1002817, U+2817, KEY_braille_dots_1235, BRAILLE PATTERN DOTS-1235 */
0xe8, 0x51, 0x01, 0x00, 0x28, 0x18, 0x00, 0x28, 0x18, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5',0, /* 43693, 0x1002818, U+2818, KEY_braille_dots_45, BRAILLE PATTERN DOTS-45 */
0xd0, 0xc9, 0x01, 0x00, 0x28, 0x19, 0x00, 0x28, 0x19, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5',0, /* 43723, 0x1002819, U+2819, KEY_braille_dots_145, BRAILLE PATTERN DOTS-145 */
0xd0, 0xcd, 0x01, 0x00, 0x28, 0x1a, 0x00, 0x28, 0x1a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5',0, /* 43753, 0x100281a, U+281a, KEY_braille_dots_245, BRAILLE PATTERN DOTS-245 */
0xa1, 0xbd, 0x01, 0x00, 0x28, 0x1b, 0x00, 0x28, 0x1b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5',0, /* 43784, 0x100281b, U+281b, KEY_braille_dots_1245, BRAILLE PATTERN DOTS-1245 */
0xd0, 0xd1, 0x01, 0x00, 0x28, 0x1c, 0x00, 0x28, 0x1c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5',0, /* 43814, 0x100281c, U+281c, KEY_braille_dots_345, BRAILLE PATTERN DOTS-345 */
0xa1, 0xc1, 0x01, 0x00, 0x28, 0x1d, 0x00, 0x28, 0x1d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5',0, /* 43845, 0x100281d, U+281d, KEY_braille_dots_1345, BRAILLE PATTERN DOTS-1345 */
0xa1, 0xc9, 0x01, 0x00, 0x28, 0x1e, 0x00, 0x28, 0x1e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5',0, /* 43876, 0x100281e, U+281e, KEY_braille_dots_2345, BRAILLE PATTERN DOTS-2345 */
0x43, 0xa9, 0x01, 0x00, 0x28, 0x1f, 0x00, 0x28, 0x1f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5',0, /* 43908, 0x100281f, U+281f, KEY_braille_dots_12345, BRAILLE PATTERN DOTS-12345 */
0xf4, 0x10, 0x01, 0x00, 0x28, 0x20, 0x00, 0x28, 0x20, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','6',0, /* 43936, 0x1002820, U+2820, KEY_braille_dots_6, BRAILLE PATTERN DOTS-6 */
0xe8, 0x4c, 0x01, 0x00, 0x28, 0x21, 0x00, 0x28, 0x21, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','6',0, /* 43965, 0x1002821, U+2821, KEY_braille_dots_16, BRAILLE PATTERN DOTS-16 */
0xe8, 0x4e, 0x01, 0x00, 0x28, 0x22, 0x00, 0x28, 0x22, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','6',0, /* 43994, 0x1002822, U+2822, KEY_braille_dots_26, BRAILLE PATTERN DOTS-26 */
0xd0, 0xc6, 0x01, 0x00, 0x28, 0x23, 0x00, 0x28, 0x23, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','6',0, /* 44024, 0x1002823, U+2823, KEY_braille_dots_126, BRAILLE PATTERN DOTS-126 */
0xe8, 0x50, 0x01, 0x00, 0x28, 0x24, 0x00, 0x28, 0x24, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','6',0, /* 44053, 0x1002824, U+2824, KEY_braille_dots_36, BRAILLE PATTERN DOTS-36 */
0xd0, 0xc8, 0x01, 0x00, 0x28, 0x25, 0x00, 0x28, 0x25, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','6',0, /* 44083, 0x1002825, U+2825, KEY_braille_dots_136, BRAILLE PATTERN DOTS-136 */
0xd0, 0xcc, 0x01, 0x00, 0x28, 0x26, 0x00, 0x28, 0x26, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','6',0, /* 44113, 0x1002826, U+2826, KEY_braille_dots_236, BRAILLE PATTERN DOTS-236 */
0xa1, 0xbc, 0x01, 0x00, 0x28, 0x27, 0x00, 0x28, 0x27, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','6',0, /* 44144, 0x1002827, U+2827, KEY_braille_dots_1236, BRAILLE PATTERN DOTS-1236 */
0xe8, 0x52, 0x01, 0x00, 0x28, 0x28, 0x00, 0x28, 0x28, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','6',0, /* 44173, 0x1002828, U+2828, KEY_braille_dots_46, BRAILLE PATTERN DOTS-46 */
0xd0, 0xca, 0x01, 0x00, 0x28, 0x29, 0x00, 0x28, 0x29, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','6',0, /* 44203, 0x1002829, U+2829, KEY_braille_dots_146, BRAILLE PATTERN DOTS-146 */
0xd0, 0xce, 0x01, 0x00, 0x28, 0x2a, 0x00, 0x28, 0x2a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','6',0, /* 44233, 0x100282a, U+282a, KEY_braille_dots_246, BRAILLE PATTERN DOTS-246 */
0xa1, 0xbe, 0x01, 0x00, 0x28, 0x2b, 0x00, 0x28, 0x2b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','6',0, /* 44264, 0x100282b, U+282b, KEY_braille_dots_1246, BRAILLE PATTERN DOTS-1246 */
0xd0, 0xd2, 0x01, 0x00, 0x28, 0x2c, 0x00, 0x28, 0x2c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','6',0, /* 44294, 0x100282c, U+282c, KEY_braille_dots_346, BRAILLE PATTERN DOTS-346 */
0xa1, 0xc2, 0x01, 0x00, 0x28, 0x2d, 0x00, 0x28, 0x2d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','6',0, /* 44325, 0x100282d, U+282d, KEY_braille_dots_1346, BRAILLE PATTERN DOTS-1346 */
0xa1, 0xca, 0x01, 0x00, 0x28, 0x2e, 0x00, 0x28, 0x2e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','6',0, /* 44356, 0x100282e, U+282e, KEY_braille_dots_2346, BRAILLE PATTERN DOTS-2346 */
0x43, 0xaa, 0x01, 0x00, 0x28, 0x2f, 0x00, 0x28, 0x2f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','6',0, /* 44388, 0x100282f, U+282f, KEY_braille_dots_12346, BRAILLE PATTERN DOTS-12346 */
0xe8, 0x54, 0x01, 0x00, 0x28, 0x30, 0x00, 0x28, 0x30, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','6',0, /* 44417, 0x1002830, U+2830, KEY_braille_dots_56, BRAILLE PATTERN DOTS-56 */
0xd0, 0xcc, 0x01, 0x00, 0x28, 0x31, 0x00, 0x28, 0x31, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','6',0, /* 44447, 0x1002831, U+2831, KEY_braille_dots_156, BRAILLE PATTERN DOTS-156 */
0xd0, 0xd0, 0x01, 0x00, 0x28, 0x32, 0x00, 0x28, 0x32, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','6',0, /* 44477, 0x1002832, U+2832, KEY_braille_dots_256, BRAILLE PATTERN DOTS-256 */
0xa1, 0xc0, 0x01, 0x00, 0x28, 0x33, 0x00, 0x28, 0x33, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','6',0, /* 44508, 0x1002833, U+2833, KEY_braille_dots_1256, BRAILLE PATTERN DOTS-1256 */
0xd0, 0xd4, 0x01, 0x00, 0x28, 0x34, 0x00, 0x28, 0x34, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','6',0, /* 44538, 0x1002834, U+2834, KEY_braille_dots_356, BRAILLE PATTERN DOTS-356 */
0xa1, 0xc4, 0x01, 0x00, 0x28, 0x35, 0x00, 0x28, 0x35, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','6',0, /* 44569, 0x1002835, U+2835, KEY_braille_dots_1356, BRAILLE PATTERN DOTS-1356 */
0xa1, 0xcc, 0x01, 0x00, 0x28, 0x36, 0x00, 0x28, 0x36, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','6',0, /* 44600, 0x1002836, U+2836, KEY_braille_dots_2356, BRAILLE PATTERN DOTS-2356 */
0x43, 0xac, 0x01, 0x00, 0x28, 0x37, 0x00, 0x28, 0x37, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','6',0, /* 44632, 0x1002837, U+2837, KEY_braille_dots_12356, BRAILLE PATTERN DOTS-12356 */
0xd0, 0xd8, 0x01, 0x00, 0x28, 0x38, 0x00, 0x28, 0x38, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','6',0, /* 44662, 0x1002838, U+2838, KEY_braille_dots_456, BRAILLE PATTERN DOTS-456 */
0xa1, 0xc8, 0x01, 0x00, 0x28, 0x39, 0x00, 0x28, 0x39, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','6',0, /* 44693, 0x1002839, U+2839, KEY_braille_dots_1456, BRAILLE PATTERN DOTS-1456 */
0xa1, 0xd0, 0x01, 0x00, 0x28, 0x3a, 0x00, 0x28, 0x3a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','6',0, /* 44724, 0x100283a, U+283a, KEY_braille_dots_2456, BRAILLE PATTERN DOTS-2456 */
0x43, 0xb0, 0x01, 0x00, 0x28, 0x3b, 0x00, 0x28, 0x3b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','6',0, /* 44756, 0x100283b, U+283b, KEY_braille_dots_12456, BRAILLE PATTERN DOTS-12456 */
0xa1, 0xd8, 0x01, 0x00, 0x28, 0x3c, 0x00, 0x28, 0x3c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','6',0, /* 44787, 0x100283c, U+283c, KEY_braille_dots_3456, BRAILLE PATTERN DOTS-3456 */
0x43, 0xb8, 0x01, 0x00, 0x28, 0x3d, 0x00, 0x28, 0x3d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','6',0, /* 44819, 0x100283d, U+283d, KEY_braille_dots_13456, BRAILLE PATTERN DOTS-13456 */
0x43, 0xc8, 0x01, 0x00, 0x28, 0x3e, 0x00, 0x28, 0x3e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','6',0, /* 44851, 0x100283e, U+283e, KEY_braille_dots_23456, BRAILLE PATTERN DOTS-23456 */
0x87, 0x88, 0x01, 0x00, 0x28, 0x3f, 0x00, 0x28, 0x3f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','6',0, /* 44884, 0x100283f, U+283f, KEY_braille_dots_123456, BRAILLE PATTERN DOTS-123456 */
0xf4, 0x11, 0x01, 0x00, 0x28, 0x40, 0x00, 0x28, 0x40, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','7',0, /* 44912, 0x1002840, U+2840, KEY_braille_dots_7, BRAILLE PATTERN DOTS-7 */
0xe8, 0x4d, 0x01, 0x00, 0x28, 0x41, 0x00, 0x28, 0x41, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','7',0, /* 44941, 0x1002841, U+2841, KEY_braille_dots_17, BRAILLE PATTERN DOTS-17 */
0xe8, 0x4f, 0x01, 0x00, 0x28, 0x42, 0x00, 0x28, 0x42, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','7',0, /* 44970, 0x1002842, U+2842, KEY_braille_dots_27, BRAILLE PATTERN DOTS-27 */
0xd0, 0xc7, 0x01, 0x00, 0x28, 0x43, 0x00, 0x28, 0x43, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','7',0, /* 45000, 0x1002843, U+2843, KEY_braille_dots_127, BRAILLE PATTERN DOTS-127 */
0xe8, 0x51, 0x01, 0x00, 0x28, 0x44, 0x00, 0x28, 0x44, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','7',0, /* 45029, 0x1002844, U+2844, KEY_braille_dots_37, BRAILLE PATTERN DOTS-37 */
0xd0, 0xc9, 0x01, 0x00, 0x28, 0x45, 0x00, 0x28, 0x45, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','7',0, /* 45059, 0x1002845, U+2845, KEY_braille_dots_137, BRAILLE PATTERN DOTS-137 */
0xd0, 0xcd, 0x01, 0x00, 0x28, 0x46, 0x00, 0x28, 0x46, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','7',0, /* 45089, 0x1002846, U+2846, KEY_braille_dots_237, BRAILLE PATTERN DOTS-237 */
0xa1, 0xbd, 0x01, 0x00, 0x28, 0x47, 0x00, 0x28, 0x47, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','7',0, /* 45120, 0x1002847, U+2847, KEY_braille_dots_1237, BRAILLE PATTERN DOTS-1237 */
0xe8, 0x53, 0x01, 0x00, 0x28, 0x48, 0x00, 0x28, 0x48, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','7',0, /* 45149, 0x1002848, U+2848, KEY_braille_dots_47, BRAILLE PATTERN DOTS-47 */
0xd0, 0xcb, 0x01, 0x00, 0x28, 0x49, 0x00, 0x28, 0x49, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','7',0, /* 45179, 0x1002849, U+2849, KEY_braille_dots_147, BRAILLE PATTERN DOTS-147 */
0xd0, 0xcf, 0x01, 0x00, 0x28, 0x4a, 0x00, 0x28, 0x4a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','7',0, /* 45209, 0x100284a, U+284a, KEY_braille_dots_247, BRAILLE PATTERN DOTS-247 */
0xa1, 0xbf, 0x01, 0x00, 0x28, 0x4b, 0x00, 0x28, 0x4b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','7',0, /* 45240, 0x100284b, U+284b, KEY_braille_dots_1247, BRAILLE PATTERN DOTS-1247 */
0xd0, 0xd3, 0x01, 0x00, 0x28, 0x4c, 0x00, 0x28, 0x4c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','7',0, /* 45270, 0x100284c, U+284c, KEY_braille_dots_347, BRAILLE PATTERN DOTS-347 */
0xa1, 0xc3, 0x01, 0x00, 0x28, 0x4d, 0x00, 0x28, 0x4d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','7',0, /* 45301, 0x100284d, U+284d, KEY_braille_dots_1347, BRAILLE PATTERN DOTS-1347 */
0xa1, 0xcb, 0x01, 0x00, 0x28, 0x4e, 0x00, 0x28, 0x4e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','7',0, /* 45332, 0x100284e, U+284e, KEY_braille_dots_2347, BRAILLE PATTERN DOTS-2347 */
0x43, 0xab, 0x01, 0x00, 0x28, 0x4f, 0x00, 0x28, 0x4f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','7',0, /* 45364, 0x100284f, U+284f, KEY_braille_dots_12347, BRAILLE PATTERN DOTS-12347 */
0xe8, 0x55, 0x01, 0x00, 0x28, 0x50, 0x00, 0x28, 0x50, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','7',0, /* 45393, 0x1002850, U+2850, KEY_braille_dots_57, BRAILLE PATTERN DOTS-57 */
0xd0, 0xcd, 0x01, 0x00, 0x28, 0x51, 0x00, 0x28, 0x51, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','7',0, /* 45423, 0x1002851, U+2851, KEY_braille_dots_157, BRAILLE PATTERN DOTS-157 */
0xd0, 0xd1, 0x01, 0x00, 0x28, 0x52, 0x00, 0x28, 0x52, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','7',0, /* 45453, 0x1002852, U+2852, KEY_braille_dots_257, BRAILLE PATTERN DOTS-257 */
0xa1, 0xc1, 0x01, 0x00, 0x28, 0x53, 0x00, 0x28, 0x53, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','7',0, /* 45484, 0x1002853, U+2853, KEY_braille_dots_1257, BRAILLE PATTERN DOTS-1257 */
0xd0, 0xd5, 0x01, 0x00, 0x28, 0x54, 0x00, 0x28, 0x54, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','7',0, /* 45514, 0x1002854, U+2854, KEY_braille_dots_357, BRAILLE PATTERN DOTS-357 */
0xa1, 0xc5, 0x01, 0x00, 0x28, 0x55, 0x00, 0x28, 0x55, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','7',0, /* 45545, 0x1002855, U+2855, KEY_braille_dots_1357, BRAILLE PATTERN DOTS-1357 */
0xa1, 0xcd, 0x01, 0x00, 0x28, 0x56, 0x00, 0x28, 0x56, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','7',0, /* 45576, 0x1002856, U+2856, KEY_braille_dots_2357, BRAILLE PATTERN DOTS-2357 */
0x43, 0xad, 0x01, 0x00, 0x28, 0x57, 0x00, 0x28, 0x57, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','7',0, /* 45608, 0x1002857, U+2857, KEY_braille_dots_12357, BRAILLE PATTERN DOTS-12357 */
0xd0, 0xd9, 0x01, 0x00, 0x28, 0x58, 0x00, 0x28, 0x58, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','7',0, /* 45638, 0x1002858, U+2858, KEY_braille_dots_457, BRAILLE PATTERN DOTS-457 */
0xa1, 0xc9, 0x01, 0x00, 0x28, 0x59, 0x00, 0x28, 0x59, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','7',0, /* 45669, 0x1002859, U+2859, KEY_braille_dots_1457, BRAILLE PATTERN DOTS-1457 */
0xa1, 0xd1, 0x01, 0x00, 0x28, 0x5a, 0x00, 0x28, 0x5a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','7',0, /* 45700, 0x100285a, U+285a, KEY_braille_dots_2457, BRAILLE PATTERN DOTS-2457 */
0x43, 0xb1, 0x01, 0x00, 0x28, 0x5b, 0x00, 0x28, 0x5b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','7',0, /* 45732, 0x100285b, U+285b, KEY_braille_dots_12457, BRAILLE PATTERN DOTS-12457 */
0xa1, 0xd9, 0x01, 0x00, 0x28, 0x5c, 0x00, 0x28, 0x5c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','7',0, /* 45763, 0x100285c, U+285c, KEY_braille_dots_3457, BRAILLE PATTERN DOTS-3457 */
0x43, 0xb9, 0x01, 0x00, 0x28, 0x5d, 0x00, 0x28, 0x5d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','7',0, /* 45795, 0x100285d, U+285d, KEY_braille_dots_13457, BRAILLE PATTERN DOTS-13457 */
0x43, 0xc9, 0x01, 0x00, 0x28, 0x5e, 0x00, 0x28, 0x5e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','7',0, /* 45827, 0x100285e, U+285e, KEY_braille_dots_23457, BRAILLE PATTERN DOTS-23457 */
0x87, 0x89, 0x01, 0x00, 0x28, 0x5f, 0x00, 0x28, 0x5f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','7',0, /* 45860, 0x100285f, U+285f, KEY_braille_dots_123457, BRAILLE PATTERN DOTS-123457 */
0xe8, 0x57, 0x01, 0x00, 0x28, 0x60, 0x00, 0x28, 0x60, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','6','7',0, /* 45889, 0x1002860, U+2860, KEY_braille_dots_67, BRAILLE PATTERN DOTS-67 */
0xd0, 0xcf, 0x01, 0x00, 0x28, 0x61, 0x00, 0x28, 0x61, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','6','7',0, /* 45919, 0x1002861, U+2861, KEY_braille_dots_167, BRAILLE PATTERN DOTS-167 */
0xd0, 0xd3, 0x01, 0x00, 0x28, 0x62, 0x00, 0x28, 0x62, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','6','7',0, /* 45949, 0x1002862, U+2862, KEY_braille_dots_267, BRAILLE PATTERN DOTS-267 */
0xa1, 0xc3, 0x01, 0x00, 0x28, 0x63, 0x00, 0x28, 0x63, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','6','7',0, /* 45980, 0x1002863, U+2863, KEY_braille_dots_1267, BRAILLE PATTERN DOTS-1267 */
0xd0, 0xd7, 0x01, 0x00, 0x28, 0x64, 0x00, 0x28, 0x64, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','6','7',0, /* 46010, 0x1002864, U+2864, KEY_braille_dots_367, BRAILLE PATTERN DOTS-367 */
0xa1, 0xc7, 0x01, 0x00, 0x28, 0x65, 0x00, 0x28, 0x65, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','6','7',0, /* 46041, 0x1002865, U+2865, KEY_braille_dots_1367, BRAILLE PATTERN DOTS-1367 */
0xa1, 0xcf, 0x01, 0x00, 0x28, 0x66, 0x00, 0x28, 0x66, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','6','7',0, /* 46072, 0x1002866, U+2866, KEY_braille_dots_2367, BRAILLE PATTERN DOTS-2367 */
0x43, 0xaf, 0x01, 0x00, 0x28, 0x67, 0x00, 0x28, 0x67, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','6','7',0, /* 46104, 0x1002867, U+2867, KEY_braille_dots_12367, BRAILLE PATTERN DOTS-12367 */
0xd0, 0xdb, 0x01, 0x00, 0x28, 0x68, 0x00, 0x28, 0x68, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','6','7',0, /* 46134, 0x1002868, U+2868, KEY_braille_dots_467, BRAILLE PATTERN DOTS-467 */
0xa1, 0xcb, 0x01, 0x00, 0x28, 0x69, 0x00, 0x28, 0x69, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','6','7',0, /* 46165, 0x1002869, U+2869, KEY_braille_dots_1467, BRAILLE PATTERN DOTS-1467 */
0xa1, 0xd3, 0x01, 0x00, 0x28, 0x6a, 0x00, 0x28, 0x6a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','6','7',0, /* 46196, 0x100286a, U+286a, KEY_braille_dots_2467, BRAILLE PATTERN DOTS-2467 */
0x43, 0xb3, 0x01, 0x00, 0x28, 0x6b, 0x00, 0x28, 0x6b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','6','7',0, /* 46228, 0x100286b, U+286b, KEY_braille_dots_12467, BRAILLE PATTERN DOTS-12467 */
0xa1, 0xdb, 0x01, 0x00, 0x28, 0x6c, 0x00, 0x28, 0x6c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','6','7',0, /* 46259, 0x100286c, U+286c, KEY_braille_dots_3467, BRAILLE PATTERN DOTS-3467 */
0x43, 0xbb, 0x01, 0x00, 0x28, 0x6d, 0x00, 0x28, 0x6d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','6','7',0, /* 46291, 0x100286d, U+286d, KEY_braille_dots_13467, BRAILLE PATTERN DOTS-13467 */
0x43, 0xcb, 0x01, 0x00, 0x28, 0x6e, 0x00, 0x28, 0x6e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','6','7',0, /* 46323, 0x100286e, U+286e, KEY_braille_dots_23467, BRAILLE PATTERN DOTS-23467 */
0x87, 0x8b, 0x01, 0x00, 0x28, 0x6f, 0x00, 0x28, 0x6f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','6','7',0, /* 46356, 0x100286f, U+286f, KEY_braille_dots_123467, BRAILLE PATTERN DOTS-123467 */
0xd0, 0xdf, 0x01, 0x00, 0x28, 0x70, 0x00, 0x28, 0x70, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','6','7',0, /* 46386, 0x1002870, U+2870, KEY_braille_dots_567, BRAILLE PATTERN DOTS-567 */
0xa1, 0xcf, 0x01, 0x00, 0x28, 0x71, 0x00, 0x28, 0x71, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','6','7',0, /* 46417, 0x1002871, U+2871, KEY_braille_dots_1567, BRAILLE PATTERN DOTS-1567 */
0xa1, 0xd7, 0x01, 0x00, 0x28, 0x72, 0x00, 0x28, 0x72, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','6','7',0, /* 46448, 0x1002872, U+2872, KEY_braille_dots_2567, BRAILLE PATTERN DOTS-2567 */
0x43, 0xb7, 0x01, 0x00, 0x28, 0x73, 0x00, 0x28, 0x73, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','6','7',0, /* 46480, 0x1002873, U+2873, KEY_braille_dots_12567, BRAILLE PATTERN DOTS-12567 */
0xa1, 0xdf, 0x01, 0x00, 0x28, 0x74, 0x00, 0x28, 0x74, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','6','7',0, /* 46511, 0x1002874, U+2874, KEY_braille_dots_3567, BRAILLE PATTERN DOTS-3567 */
0x43, 0xbf, 0x01, 0x00, 0x28, 0x75, 0x00, 0x28, 0x75, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','6','7',0, /* 46543, 0x1002875, U+2875, KEY_braille_dots_13567, BRAILLE PATTERN DOTS-13567 */
0x43, 0xcf, 0x01, 0x00, 0x28, 0x76, 0x00, 0x28, 0x76, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','6','7',0, /* 46575, 0x1002876, U+2876, KEY_braille_dots_23567, BRAILLE PATTERN DOTS-23567 */
0x87, 0x8f, 0x01, 0x00, 0x28, 0x77, 0x00, 0x28, 0x77, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','6','7',0, /* 46608, 0x1002877, U+2877, KEY_braille_dots_123567, BRAILLE PATTERN DOTS-123567 */
0xa1, 0xe7, 0x01, 0x00, 0x28, 0x78, 0x00, 0x28, 0x78, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','6','7',0, /* 46639, 0x1002878, U+2878, KEY_braille_dots_4567, BRAILLE PATTERN DOTS-4567 */
0x43, 0xc7, 0x01, 0x00, 0x28, 0x79, 0x00, 0x28, 0x79, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','6','7',0, /* 46671, 0x1002879, U+2879, KEY_braille_dots_14567, BRAILLE PATTERN DOTS-14567 */
0x43, 0xd7, 0x01, 0x00, 0x28, 0x7a, 0x00, 0x28, 0x7a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','6','7',0, /* 46703, 0x100287a, U+287a, KEY_braille_dots_24567, BRAILLE PATTERN DOTS-24567 */
0x87, 0x97, 0x01, 0x00, 0x28, 0x7b, 0x00, 0x28, 0x7b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','6','7',0, /* 46736, 0x100287b, U+287b, KEY_braille_dots_124567, BRAILLE PATTERN DOTS-124567 */
0x43, 0xe7, 0x01, 0x00, 0x28, 0x7c, 0x00, 0x28, 0x7c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','6','7',0, /* 46768, 0x100287c, U+287c, KEY_braille_dots_34567, BRAILLE PATTERN DOTS-34567 */
0x87, 0xa7, 0x01, 0x00, 0x28, 0x7d, 0x00, 0x28, 0x7d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','6','7',0, /* 46801, 0x100287d, U+287d, KEY_braille_dots_134567, BRAILLE PATTERN DOTS-134567 */
0x87, 0xc7, 0x01, 0x00, 0x28, 0x7e, 0x00, 0x28, 0x7e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','6','7',0, /* 46834, 0x100287e, U+287e, KEY_braille_dots_234567, BRAILLE PATTERN DOTS-234567 */
0x0f, 0x47, 0x01, 0x00, 0x28, 0x7f, 0x00, 0x28, 0x7f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','6','7',0, /* 46868, 0x100287f, U+287f, KEY_braille_dots_1234567, BRAILLE PATTERN DOTS-1234567 */
0xf4, 0x12, 0x01, 0x00, 0x28, 0x80, 0x00, 0x28, 0x80, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','8',0, /* 46896, 0x1002880, U+2880, KEY_braille_dots_8, BRAILLE PATTERN DOTS-8 */
0xe8, 0x4e, 0x01, 0x00, 0x28, 0x81, 0x00, 0x28, 0x81, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','8',0, /* 46925, 0x1002881, U+2881, KEY_braille_dots_18, BRAILLE PATTERN DOTS-18 */
0xe8, 0x50, 0x01, 0x00, 0x28, 0x82, 0x00, 0x28, 0x82, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','8',0, /* 46954, 0x1002882, U+2882, KEY_braille_dots_28, BRAILLE PATTERN DOTS-28 */
0xd0, 0xc8, 0x01, 0x00, 0x28, 0x83, 0x00, 0x28, 0x83, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','8',0, /* 46984, 0x1002883, U+2883, KEY_braille_dots_128, BRAILLE PATTERN DOTS-128 */
0xe8, 0x52, 0x01, 0x00, 0x28, 0x84, 0x00, 0x28, 0x84, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','8',0, /* 47013, 0x1002884, U+2884, KEY_braille_dots_38, BRAILLE PATTERN DOTS-38 */
0xd0, 0xca, 0x01, 0x00, 0x28, 0x85, 0x00, 0x28, 0x85, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','8',0, /* 47043, 0x1002885, U+2885, KEY_braille_dots_138, BRAILLE PATTERN DOTS-138 */
0xd0, 0xce, 0x01, 0x00, 0x28, 0x86, 0x00, 0x28, 0x86, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','8',0, /* 47073, 0x1002886, U+2886, KEY_braille_dots_238, BRAILLE PATTERN DOTS-238 */
0xa1, 0xbe, 0x01, 0x00, 0x28, 0x87, 0x00, 0x28, 0x87, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','8',0, /* 47104, 0x1002887, U+2887, KEY_braille_dots_1238, BRAILLE PATTERN DOTS-1238 */
0xe8, 0x54, 0x01, 0x00, 0x28, 0x88, 0x00, 0x28, 0x88, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','8',0, /* 47133, 0x1002888, U+2888, KEY_braille_dots_48, BRAILLE PATTERN DOTS-48 */
0xd0, 0xcc, 0x01, 0x00, 0x28, 0x89, 0x00, 0x28, 0x89, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','8',0, /* 47163, 0x1002889, U+2889, KEY_braille_dots_148, BRAILLE PATTERN DOTS-148 */
0xd0, 0xd0, 0x01, 0x00, 0x28, 0x8a, 0x00, 0x28, 0x8a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','8',0, /* 47193, 0x100288a, U+288a, KEY_braille_dots_248, BRAILLE PATTERN DOTS-248 */
0xa1, 0xc0, 0x01, 0x00, 0x28, 0x8b, 0x00, 0x28, 0x8b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','8',0, /* 47224, 0x100288b, U+288b, KEY_braille_dots_1248, BRAILLE PATTERN DOTS-1248 */
0xd0, 0xd4, 0x01, 0x00, 0x28, 0x8c, 0x00, 0x28, 0x8c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','8',0, /* 47254, 0x100288c, U+288c, KEY_braille_dots_348, BRAILLE PATTERN DOTS-348 */
0xa1, 0xc4, 0x01, 0x00, 0x28, 0x8d, 0x00, 0x28, 0x8d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','8',0, /* 47285, 0x100288d, U+288d, KEY_braille_dots_1348, BRAILLE PATTERN DOTS-1348 */
0xa1, 0xcc, 0x01, 0x00, 0x28, 0x8e, 0x00, 0x28, 0x8e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','8',0, /* 47316, 0x100288e, U+288e, KEY_braille_dots_2348, BRAILLE PATTERN DOTS-2348 */
0x43, 0xac, 0x01, 0x00, 0x28, 0x8f, 0x00, 0x28, 0x8f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','8',0, /* 47348, 0x100288f, U+288f, KEY_braille_dots_12348, BRAILLE PATTERN DOTS-12348 */
0xe8, 0x56, 0x01, 0x00, 0x28, 0x90, 0x00, 0x28, 0x90, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','8',0, /* 47377, 0x1002890, U+2890, KEY_braille_dots_58, BRAILLE PATTERN DOTS-58 */
0xd0, 0xce, 0x01, 0x00, 0x28, 0x91, 0x00, 0x28, 0x91, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','8',0, /* 47407, 0x1002891, U+2891, KEY_braille_dots_158, BRAILLE PATTERN DOTS-158 */
0xd0, 0xd2, 0x01, 0x00, 0x28, 0x92, 0x00, 0x28, 0x92, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','8',0, /* 47437, 0x1002892, U+2892, KEY_braille_dots_258, BRAILLE PATTERN DOTS-258 */
0xa1, 0xc2, 0x01, 0x00, 0x28, 0x93, 0x00, 0x28, 0x93, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','8',0, /* 47468, 0x1002893, U+2893, KEY_braille_dots_1258, BRAILLE PATTERN DOTS-1258 */
0xd0, 0xd6, 0x01, 0x00, 0x28, 0x94, 0x00, 0x28, 0x94, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','8',0, /* 47498, 0x1002894, U+2894, KEY_braille_dots_358, BRAILLE PATTERN DOTS-358 */
0xa1, 0xc6, 0x01, 0x00, 0x28, 0x95, 0x00, 0x28, 0x95, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','8',0, /* 47529, 0x1002895, U+2895, KEY_braille_dots_1358, BRAILLE PATTERN DOTS-1358 */
0xa1, 0xce, 0x01, 0x00, 0x28, 0x96, 0x00, 0x28, 0x96, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','8',0, /* 47560, 0x1002896, U+2896, KEY_braille_dots_2358, BRAILLE PATTERN DOTS-2358 */
0x43, 0xae, 0x01, 0x00, 0x28, 0x97, 0x00, 0x28, 0x97, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','8',0, /* 47592, 0x1002897, U+2897, KEY_braille_dots_12358, BRAILLE PATTERN DOTS-12358 */
0xd0, 0xda, 0x01, 0x00, 0x28, 0x98, 0x00, 0x28, 0x98, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','8',0, /* 47622, 0x1002898, U+2898, KEY_braille_dots_458, BRAILLE PATTERN DOTS-458 */
0xa1, 0xca, 0x01, 0x00, 0x28, 0x99, 0x00, 0x28, 0x99, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','8',0, /* 47653, 0x1002899, U+2899, KEY_braille_dots_1458, BRAILLE PATTERN DOTS-1458 */
0xa1, 0xd2, 0x01, 0x00, 0x28, 0x9a, 0x00, 0x28, 0x9a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','8',0, /* 47684, 0x100289a, U+289a, KEY_braille_dots_2458, BRAILLE PATTERN DOTS-2458 */
0x43, 0xb2, 0x01, 0x00, 0x28, 0x9b, 0x00, 0x28, 0x9b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','8',0, /* 47716, 0x100289b, U+289b, KEY_braille_dots_12458, BRAILLE PATTERN DOTS-12458 */
0xa1, 0xda, 0x01, 0x00, 0x28, 0x9c, 0x00, 0x28, 0x9c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','8',0, /* 47747, 0x100289c, U+289c, KEY_braille_dots_3458, BRAILLE PATTERN DOTS-3458 */
0x43, 0xba, 0x01, 0x00, 0x28, 0x9d, 0x00, 0x28, 0x9d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','8',0, /* 47779, 0x100289d, U+289d, KEY_braille_dots_13458, BRAILLE PATTERN DOTS-13458 */
0x43, 0xca, 0x01, 0x00, 0x28, 0x9e, 0x00, 0x28, 0x9e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','8',0, /* 47811, 0x100289e, U+289e, KEY_braille_dots_23458, BRAILLE PATTERN DOTS-23458 */
0x87, 0x8a, 0x01, 0x00, 0x28, 0x9f, 0x00, 0x28, 0x9f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','8',0, /* 47844, 0x100289f, U+289f, KEY_braille_dots_123458, BRAILLE PATTERN DOTS-123458 */
0xe8, 0x58, 0x01, 0x00, 0x28, 0xa0, 0x00, 0x28, 0xa0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','6','8',0, /* 47873, 0x10028a0, U+28a0, KEY_braille_dots_68, BRAILLE PATTERN DOTS-68 */
0xd0, 0xd0, 0x01, 0x00, 0x28, 0xa1, 0x00, 0x28, 0xa1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','6','8',0, /* 47903, 0x10028a1, U+28a1, KEY_braille_dots_168, BRAILLE PATTERN DOTS-168 */
0xd0, 0xd4, 0x01, 0x00, 0x28, 0xa2, 0x00, 0x28, 0xa2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','6','8',0, /* 47933, 0x10028a2, U+28a2, KEY_braille_dots_268, BRAILLE PATTERN DOTS-268 */
0xa1, 0xc4, 0x01, 0x00, 0x28, 0xa3, 0x00, 0x28, 0xa3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','6','8',0, /* 47964, 0x10028a3, U+28a3, KEY_braille_dots_1268, BRAILLE PATTERN DOTS-1268 */
0xd0, 0xd8, 0x01, 0x00, 0x28, 0xa4, 0x00, 0x28, 0xa4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','6','8',0, /* 47994, 0x10028a4, U+28a4, KEY_braille_dots_368, BRAILLE PATTERN DOTS-368 */
0xa1, 0xc8, 0x01, 0x00, 0x28, 0xa5, 0x00, 0x28, 0xa5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','6','8',0, /* 48025, 0x10028a5, U+28a5, KEY_braille_dots_1368, BRAILLE PATTERN DOTS-1368 */
0xa1, 0xd0, 0x01, 0x00, 0x28, 0xa6, 0x00, 0x28, 0xa6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','6','8',0, /* 48056, 0x10028a6, U+28a6, KEY_braille_dots_2368, BRAILLE PATTERN DOTS-2368 */
0x43, 0xb0, 0x01, 0x00, 0x28, 0xa7, 0x00, 0x28, 0xa7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','6','8',0, /* 48088, 0x10028a7, U+28a7, KEY_braille_dots_12368, BRAILLE PATTERN DOTS-12368 */
0xd0, 0xdc, 0x01, 0x00, 0x28, 0xa8, 0x00, 0x28, 0xa8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','6','8',0, /* 48118, 0x10028a8, U+28a8, KEY_braille_dots_468, BRAILLE PATTERN DOTS-468 */
0xa1, 0xcc, 0x01, 0x00, 0x28, 0xa9, 0x00, 0x28, 0xa9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','6','8',0, /* 48149, 0x10028a9, U+28a9, KEY_braille_dots_1468, BRAILLE PATTERN DOTS-1468 */
0xa1, 0xd4, 0x01, 0x00, 0x28, 0xaa, 0x00, 0x28, 0xaa, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','6','8',0, /* 48180, 0x10028aa, U+28aa, KEY_braille_dots_2468, BRAILLE PATTERN DOTS-2468 */
0x43, 0xb4, 0x01, 0x00, 0x28, 0xab, 0x00, 0x28, 0xab, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','6','8',0, /* 48212, 0x10028ab, U+28ab, KEY_braille_dots_12468, BRAILLE PATTERN DOTS-12468 */
0xa1, 0xdc, 0x01, 0x00, 0x28, 0xac, 0x00, 0x28, 0xac, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','6','8',0, /* 48243, 0x10028ac, U+28ac, KEY_braille_dots_3468, BRAILLE PATTERN DOTS-3468 */
0x43, 0xbc, 0x01, 0x00, 0x28, 0xad, 0x00, 0x28, 0xad, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','6','8',0, /* 48275, 0x10028ad, U+28ad, KEY_braille_dots_13468, BRAILLE PATTERN DOTS-13468 */
0x43, 0xcc, 0x01, 0x00, 0x28, 0xae, 0x00, 0x28, 0xae, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','6','8',0, /* 48307, 0x10028ae, U+28ae, KEY_braille_dots_23468, BRAILLE PATTERN DOTS-23468 */
0x87, 0x8c, 0x01, 0x00, 0x28, 0xaf, 0x00, 0x28, 0xaf, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','6','8',0, /* 48340, 0x10028af, U+28af, KEY_braille_dots_123468, BRAILLE PATTERN DOTS-123468 */
0xd0, 0xe0, 0x01, 0x00, 0x28, 0xb0, 0x00, 0x28, 0xb0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','6','8',0, /* 48370, 0x10028b0, U+28b0, KEY_braille_dots_568, BRAILLE PATTERN DOTS-568 */
0xa1, 0xd0, 0x01, 0x00, 0x28, 0xb1, 0x00, 0x28, 0xb1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','6','8',0, /* 48401, 0x10028b1, U+28b1, KEY_braille_dots_1568, BRAILLE PATTERN DOTS-1568 */
0xa1, 0xd8, 0x01, 0x00, 0x28, 0xb2, 0x00, 0x28, 0xb2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','6','8',0, /* 48432, 0x10028b2, U+28b2, KEY_braille_dots_2568, BRAILLE PATTERN DOTS-2568 */
0x43, 0xb8, 0x01, 0x00, 0x28, 0xb3, 0x00, 0x28, 0xb3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','6','8',0, /* 48464, 0x10028b3, U+28b3, KEY_braille_dots_12568, BRAILLE PATTERN DOTS-12568 */
0xa1, 0xe0, 0x01, 0x00, 0x28, 0xb4, 0x00, 0x28, 0xb4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','6','8',0, /* 48495, 0x10028b4, U+28b4, KEY_braille_dots_3568, BRAILLE PATTERN DOTS-3568 */
0x43, 0xc0, 0x01, 0x00, 0x28, 0xb5, 0x00, 0x28, 0xb5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','6','8',0, /* 48527, 0x10028b5, U+28b5, KEY_braille_dots_13568, BRAILLE PATTERN DOTS-13568 */
0x43, 0xd0, 0x01, 0x00, 0x28, 0xb6, 0x00, 0x28, 0xb6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','6','8',0, /* 48559, 0x10028b6, U+28b6, KEY_braille_dots_23568, BRAILLE PATTERN DOTS-23568 */
0x87, 0x90, 0x01, 0x00, 0x28, 0xb7, 0x00, 0x28, 0xb7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','6','8',0, /* 48592, 0x10028b7, U+28b7, KEY_braille_dots_123568, BRAILLE PATTERN DOTS-123568 */
0xa1, 0xe8, 0x01, 0x00, 0x28, 0xb8, 0x00, 0x28, 0xb8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','6','8',0, /* 48623, 0x10028b8, U+28b8, KEY_braille_dots_4568, BRAILLE PATTERN DOTS-4568 */
0x43, 0xc8, 0x01, 0x00, 0x28, 0xb9, 0x00, 0x28, 0xb9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','6','8',0, /* 48655, 0x10028b9, U+28b9, KEY_braille_dots_14568, BRAILLE PATTERN DOTS-14568 */
0x43, 0xd8, 0x01, 0x00, 0x28, 0xba, 0x00, 0x28, 0xba, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','6','8',0, /* 48687, 0x10028ba, U+28ba, KEY_braille_dots_24568, BRAILLE PATTERN DOTS-24568 */
0x87, 0x98, 0x01, 0x00, 0x28, 0xbb, 0x00, 0x28, 0xbb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','6','8',0, /* 48720, 0x10028bb, U+28bb, KEY_braille_dots_124568, BRAILLE PATTERN DOTS-124568 */
0x43, 0xe8, 0x01, 0x00, 0x28, 0xbc, 0x00, 0x28, 0xbc, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','6','8',0, /* 48752, 0x10028bc, U+28bc, KEY_braille_dots_34568, BRAILLE PATTERN DOTS-34568 */
0x87, 0xa8, 0x01, 0x00, 0x28, 0xbd, 0x00, 0x28, 0xbd, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','6','8',0, /* 48785, 0x10028bd, U+28bd, KEY_braille_dots_134568, BRAILLE PATTERN DOTS-134568 */
0x87, 0xc8, 0x01, 0x00, 0x28, 0xbe, 0x00, 0x28, 0xbe, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','6','8',0, /* 48818, 0x10028be, U+28be, KEY_braille_dots_234568, BRAILLE PATTERN DOTS-234568 */
0x0f, 0x48, 0x01, 0x00, 0x28, 0xbf, 0x00, 0x28, 0xbf, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','6','8',0, /* 48852, 0x10028bf, U+28bf, KEY_braille_dots_1234568, BRAILLE PATTERN DOTS-1234568 */
0xe8, 0x5a, 0x01, 0x00, 0x28, 0xc0, 0x00, 0x28, 0xc0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','7','8',0, /* 48881, 0x10028c0, U+28c0, KEY_braille_dots_78, BRAILLE PATTERN DOTS-78 */
0xd0, 0xd2, 0x01, 0x00, 0x28, 0xc1, 0x00, 0x28, 0xc1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','7','8',0, /* 48911, 0x10028c1, U+28c1, KEY_braille_dots_178, BRAILLE PATTERN DOTS-178 */
0xd0, 0xd6, 0x01, 0x00, 0x28, 0xc2, 0x00, 0x28, 0xc2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','7','8',0, /* 48941, 0x10028c2, U+28c2, KEY_braille_dots_278, BRAILLE PATTERN DOTS-278 */
0xa1, 0xc6, 0x01, 0x00, 0x28, 0xc3, 0x00, 0x28, 0xc3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','7','8',0, /* 48972, 0x10028c3, U+28c3, KEY_braille_dots_1278, BRAILLE PATTERN DOTS-1278 */
0xd0, 0xda, 0x01, 0x00, 0x28, 0xc4, 0x00, 0x28, 0xc4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','7','8',0, /* 49002, 0x10028c4, U+28c4, KEY_braille_dots_378, BRAILLE PATTERN DOTS-378 */
0xa1, 0xca, 0x01, 0x00, 0x28, 0xc5, 0x00, 0x28, 0xc5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','7','8',0, /* 49033, 0x10028c5, U+28c5, KEY_braille_dots_1378, BRAILLE PATTERN DOTS-1378 */
0xa1, 0xd2, 0x01, 0x00, 0x28, 0xc6, 0x00, 0x28, 0xc6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','7','8',0, /* 49064, 0x10028c6, U+28c6, KEY_braille_dots_2378, BRAILLE PATTERN DOTS-2378 */
0x43, 0xb2, 0x01, 0x00, 0x28, 0xc7, 0x00, 0x28, 0xc7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','7','8',0, /* 49096, 0x10028c7, U+28c7, KEY_braille_dots_12378, BRAILLE PATTERN DOTS-12378 */
0xd0, 0xde, 0x01, 0x00, 0x28, 0xc8, 0x00, 0x28, 0xc8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','7','8',0, /* 49126, 0x10028c8, U+28c8, KEY_braille_dots_478, BRAILLE PATTERN DOTS-478 */
0xa1, 0xce, 0x01, 0x00, 0x28, 0xc9, 0x00, 0x28, 0xc9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','7','8',0, /* 49157, 0x10028c9, U+28c9, KEY_braille_dots_1478, BRAILLE PATTERN DOTS-1478 */
0xa1, 0xd6, 0x01, 0x00, 0x28, 0xca, 0x00, 0x28, 0xca, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','7','8',0, /* 49188, 0x10028ca, U+28ca, KEY_braille_dots_2478, BRAILLE PATTERN DOTS-2478 */
0x43, 0xb6, 0x01, 0x00, 0x28, 0xcb, 0x00, 0x28, 0xcb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','7','8',0, /* 49220, 0x10028cb, U+28cb, KEY_braille_dots_12478, BRAILLE PATTERN DOTS-12478 */
0xa1, 0xde, 0x01, 0x00, 0x28, 0xcc, 0x00, 0x28, 0xcc, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','7','8',0, /* 49251, 0x10028cc, U+28cc, KEY_braille_dots_3478, BRAILLE PATTERN DOTS-3478 */
0x43, 0xbe, 0x01, 0x00, 0x28, 0xcd, 0x00, 0x28, 0xcd, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','7','8',0, /* 49283, 0x10028cd, U+28cd, KEY_braille_dots_13478, BRAILLE PATTERN DOTS-13478 */
0x43, 0xce, 0x01, 0x00, 0x28, 0xce, 0x00, 0x28, 0xce, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','7','8',0, /* 49315, 0x10028ce, U+28ce, KEY_braille_dots_23478, BRAILLE PATTERN DOTS-23478 */
0x87, 0x8e, 0x01, 0x00, 0x28, 0xcf, 0x00, 0x28, 0xcf, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','7','8',0, /* 49348, 0x10028cf, U+28cf, KEY_braille_dots_123478, BRAILLE PATTERN DOTS-123478 */
0xd0, 0xe2, 0x01, 0x00, 0x28, 0xd0, 0x00, 0x28, 0xd0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','7','8',0, /* 49378, 0x10028d0, U+28d0, KEY_braille_dots_578, BRAILLE PATTERN DOTS-578 */
0xa1, 0xd2, 0x01, 0x00, 0x28, 0xd1, 0x00, 0x28, 0xd1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','7','8',0, /* 49409, 0x10028d1, U+28d1, KEY_braille_dots_1578, BRAILLE PATTERN DOTS-1578 */
0xa1, 0xda, 0x01, 0x00, 0x28, 0xd2, 0x00, 0x28, 0xd2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','7','8',0, /* 49440, 0x10028d2, U+28d2, KEY_braille_dots_2578, BRAILLE PATTERN DOTS-2578 */
0x43, 0xba, 0x01, 0x00, 0x28, 0xd3, 0x00, 0x28, 0xd3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','7','8',0, /* 49472, 0x10028d3, U+28d3, KEY_braille_dots_12578, BRAILLE PATTERN DOTS-12578 */
0xa1, 0xe2, 0x01, 0x00, 0x28, 0xd4, 0x00, 0x28, 0xd4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','7','8',0, /* 49503, 0x10028d4, U+28d4, KEY_braille_dots_3578, BRAILLE PATTERN DOTS-3578 */
0x43, 0xc2, 0x01, 0x00, 0x28, 0xd5, 0x00, 0x28, 0xd5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','7','8',0, /* 49535, 0x10028d5, U+28d5, KEY_braille_dots_13578, BRAILLE PATTERN DOTS-13578 */
0x43, 0xd2, 0x01, 0x00, 0x28, 0xd6, 0x00, 0x28, 0xd6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','7','8',0, /* 49567, 0x10028d6, U+28d6, KEY_braille_dots_23578, BRAILLE PATTERN DOTS-23578 */
0x87, 0x92, 0x01, 0x00, 0x28, 0xd7, 0x00, 0x28, 0xd7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','7','8',0, /* 49600, 0x10028d7, U+28d7, KEY_braille_dots_123578, BRAILLE PATTERN DOTS-123578 */
0xa1, 0xea, 0x01, 0x00, 0x28, 0xd8, 0x00, 0x28, 0xd8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','7','8',0, /* 49631, 0x10028d8, U+28d8, KEY_braille_dots_4578, BRAILLE PATTERN DOTS-4578 */
0x43, 0xca, 0x01, 0x00, 0x28, 0xd9, 0x00, 0x28, 0xd9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','7','8',0, /* 49663, 0x10028d9, U+28d9, KEY_braille_dots_14578, BRAILLE PATTERN DOTS-14578 */
0x43, 0xda, 0x01, 0x00, 0x28, 0xda, 0x00, 0x28, 0xda, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','7','8',0, /* 49695, 0x10028da, U+28da, KEY_braille_dots_24578, BRAILLE PATTERN DOTS-24578 */
0x87, 0x9a, 0x01, 0x00, 0x28, 0xdb, 0x00, 0x28, 0xdb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','7','8',0, /* 49728, 0x10028db, U+28db, KEY_braille_dots_124578, BRAILLE PATTERN DOTS-124578 */
0x43, 0xea, 0x01, 0x00, 0x28, 0xdc, 0x00, 0x28, 0xdc, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','7','8',0, /* 49760, 0x10028dc, U+28dc, KEY_braille_dots_34578, BRAILLE PATTERN DOTS-34578 */
0x87, 0xaa, 0x01, 0x00, 0x28, 0xdd, 0x00, 0x28, 0xdd, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','7','8',0, /* 49793, 0x10028dd, U+28dd, KEY_braille_dots_134578, BRAILLE PATTERN DOTS-134578 */
0x87, 0xca, 0x01, 0x00, 0x28, 0xde, 0x00, 0x28, 0xde, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','7','8',0, /* 49826, 0x10028de, U+28de, KEY_braille_dots_234578, BRAILLE PATTERN DOTS-234578 */
0x0f, 0x4a, 0x01, 0x00, 0x28, 0xdf, 0x00, 0x28, 0xdf, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','7','8',0, /* 49860, 0x10028df, U+28df, KEY_braille_dots_1234578, BRAILLE PATTERN DOTS-1234578 */
0xd0, 0xe6, 0x01, 0x00, 0x28, 0xe0, 0x00, 0x28, 0xe0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','6','7','8',0, /* 49890, 0x10028e0, U+28e0, KEY_braille_dots_678, BRAILLE PATTERN DOTS-678 */
0xa1, 0xd6, 0x01, 0x00, 0x28, 0xe1, 0x00, 0x28, 0xe1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','6','7','8',0, /* 49921, 0x10028e1, U+28e1, KEY_braille_dots_1678, BRAILLE PATTERN DOTS-1678 */
0xa1, 0xde, 0x01, 0x00, 0x28, 0xe2, 0x00, 0x28, 0xe2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','6','7','8',0, /* 49952, 0x10028e2, U+28e2, KEY_braille_dots_2678, BRAILLE PATTERN DOTS-2678 */
0x43, 0xbe, 0x01, 0x00, 0x28, 0xe3, 0x00, 0x28, 0xe3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','6','7','8',0, /* 49984, 0x10028e3, U+28e3, KEY_braille_dots_12678, BRAILLE PATTERN DOTS-12678 */
0xa1, 0xe6, 0x01, 0x00, 0x28, 0xe4, 0x00, 0x28, 0xe4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','6','7','8',0, /* 50015, 0x10028e4, U+28e4, KEY_braille_dots_3678, BRAILLE PATTERN DOTS-3678 */
0x43, 0xc6, 0x01, 0x00, 0x28, 0xe5, 0x00, 0x28, 0xe5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','6','7','8',0, /* 50047, 0x10028e5, U+28e5, KEY_braille_dots_13678, BRAILLE PATTERN DOTS-13678 */
0x43, 0xd6, 0x01, 0x00, 0x28, 0xe6, 0x00, 0x28, 0xe6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','6','7','8',0, /* 50079, 0x10028e6, U+28e6, KEY_braille_dots_23678, BRAILLE PATTERN DOTS-23678 */
0x87, 0x96, 0x01, 0x00, 0x28, 0xe7, 0x00, 0x28, 0xe7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','6','7','8',0, /* 50112, 0x10028e7, U+28e7, KEY_braille_dots_123678, BRAILLE PATTERN DOTS-123678 */
0xa1, 0xee, 0x01, 0x00, 0x28, 0xe8, 0x00, 0x28, 0xe8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','6','7','8',0, /* 50143, 0x10028e8, U+28e8, KEY_braille_dots_4678, BRAILLE PATTERN DOTS-4678 */
0x43, 0xce, 0x01, 0x00, 0x28, 0xe9, 0x00, 0x28, 0xe9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','6','7','8',0, /* 50175, 0x10028e9, U+28e9, KEY_braille_dots_14678, BRAILLE PATTERN DOTS-14678 */
0x43, 0xde, 0x01, 0x00, 0x28, 0xea, 0x00, 0x28, 0xea, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','6','7','8',0, /* 50207, 0x10028ea, U+28ea, KEY_braille_dots_24678, BRAILLE PATTERN DOTS-24678 */
0x87, 0x9e, 0x01, 0x00, 0x28, 0xeb, 0x00, 0x28, 0xeb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','6','7','8',0, /* 50240, 0x10028eb, U+28eb, KEY_braille_dots_124678, BRAILLE PATTERN DOTS-124678 */
0x43, 0xee, 0x01, 0x00, 0x28, 0xec, 0x00, 0x28, 0xec, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','6','7','8',0, /* 50272, 0x10028ec, U+28ec, KEY_braille_dots_34678, BRAILLE PATTERN DOTS-34678 */
0x87, 0xae, 0x01, 0x00, 0x28, 0xed, 0x00, 0x28, 0xed, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','6','7','8',0, /* 50305, 0x10028ed, U+28ed, KEY_braille_dots_134678, BRAILLE PATTERN DOTS-134678 */
0x87, 0xce, 0x01, 0x00, 0x28, 0xee, 0x00, 0x28, 0xee, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','6','7','8',0, /* 50338, 0x10028ee, U+28ee, KEY_braille_dots_234678, BRAILLE PATTERN DOTS-234678 */
0x0f, 0x4e, 0x01, 0x00, 0x28, 0xef, 0x00, 0x28, 0xef, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','6','7','8',0, /* 50372, 0x10028ef, U+28ef, KEY_braille_dots_1234678, BRAILLE PATTERN DOTS-1234678 */
0xa1, 0xf6, 0x01, 0x00, 0x28, 0xf0, 0x00, 0x28, 0xf0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','6','7','8',0, /* 50403, 0x10028f0, U+28f0, KEY_braille_dots_5678, BRAILLE PATTERN DOTS-5678 */
0x43, 0xd6, 0x01, 0x00, 0x28, 0xf1, 0x00, 0x28, 0xf1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','6','7','8',0, /* 50435, 0x10028f1, U+28f1, KEY_braille_dots_15678, BRAILLE PATTERN DOTS-15678 */
0x43, 0xe6, 0x01, 0x00, 0x28, 0xf2, 0x00, 0x28, 0xf2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','6','7','8',0, /* 50467, 0x10028f2, U+28f2, KEY_braille_dots_25678, BRAILLE PATTERN DOTS-25678 */
0x87, 0xa6, 0x01, 0x00, 0x28, 0xf3, 0x00, 0x28, 0xf3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','6','7','8',0, /* 50500, 0x10028f3, U+28f3, KEY_braille_dots_125678, BRAILLE PATTERN DOTS-125678 */
0x43, 0xf6, 0x01, 0x00, 0x28, 0xf4, 0x00, 0x28, 0xf4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','6','7','8',0, /* 50532, 0x10028f4, U+28f4, KEY_braille_dots_35678, BRAILLE PATTERN DOTS-35678 */
0x87, 0xb6, 0x01, 0x00, 0x28, 0xf5, 0x00, 0x28, 0xf5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','6','7','8',0, /* 50565, 0x10028f5, U+28f5, KEY_braille_dots_135678, BRAILLE PATTERN DOTS-135678 */
0x87, 0xd6, 0x01, 0x00, 0x28, 0xf6, 0x00, 0x28, 0xf6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','6','7','8',0, /* 50598, 0x10028f6, U+28f6, KEY_braille_dots_235678, BRAILLE PATTERN DOTS-235678 */
0x0f, 0x56, 0x01, 0x00, 0x28, 0xf7, 0x00, 0x28, 0xf7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','6','7','8',0, /* 50632, 0x10028f7, U+28f7, KEY_braille_dots_1235678, BRAILLE PATTERN DOTS-1235678 */
0x44, 0x06, 0x01, 0x00, 0x28, 0xf8, 0x00, 0x28, 0xf8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','6','7','8',0, /* 50664, 0x10028f8, U+28f8, KEY_braille_dots_45678, BRAILLE PATTERN DOTS-45678 */
0x87, 0xc6, 0x01, 0x00, 0x28, 0xf9, 0x00, 0x28, 0xf9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','6','7','8',0, /* 50697, 0x10028f9, U+28f9, KEY_braille_dots_145678, BRAILLE PATTERN DOTS-145678 */
0x87, 0xe6, 0x01, 0x00, 0x28, 0xfa, 0x00, 0x28, 0xfa, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','6','7','8',0, /* 50730, 0x10028fa, U+28fa, KEY_braille_dots_245678, BRAILLE PATTERN DOTS-245678 */
0x0f, 0x66, 0x01, 0x00, 0x28, 0xfb, 0x00, 0x28, 0xfb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','6','7','8',0, /* 50764, 0x10028fb, U+28fb, KEY_braille_dots_1245678, BRAILLE PATTERN DOTS-1245678 */
0x88, 0x06, 0x01, 0x00, 0x28, 0xfc, 0x00, 0x28, 0xfc, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','6','7','8',0, /* 50797, 0x10028fc, U+28fc, KEY_braille_dots_345678, BRAILLE PATTERN DOTS-345678 */
0x0f, 0x86, 0x01, 0x00, 0x28, 0xfd, 0x00, 0x28, 0xfd, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','6','7','8',0, /* 50831, 0x10028fd, U+28fd, KEY_braille_dots_1345678, BRAILLE PATTERN DOTS-1345678 */
0x0f, 0xc6, 0x01, 0x00, 0x28, 0xfe, 0x00, 0x28, 0xfe, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','6','7','8',0, /* 50865, 0x10028fe, U+28fe, KEY_braille_dots_2345678, BRAILLE PATTERN DOTS-2345678 */
0x1e, 0xc6, 0x01, 0x00, 0x28, 0xff, 0x00, 0x28, 0xff, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','6','7','8',0, /* 50900, 0x10028ff, U+28ff, KEY_braille_dots_12345678, BRAILLE PATTERN DOTS-12345678 */
0x6d, 0x3f, 0x01, 0x00, 0x0d, 0x82, 0x00, 0x0d, 0x82, 'K','E','Y','_','S','i','n','h','_','n','g',0, /* 50921, 0x1000d82, U+0d82, KEY_Sinh_ng, SINHALA ANUSVARAYA */
0x6c, 0xfe, 0x01, 0x00, 0x0d, 0x83, 0x00, 0x0d, 0x83, 'K','E','Y','_','S','i','n','h','_','h','2',0, /* 50942, 0x1000d83, U+0d83, KEY_Sinh_h2, SINHALA VISARGAYA */
0x36, 0x5f, 0x01, 0x00, 0x0d, 0x85, 0x00, 0x0d, 0x85, 'K','E','Y','_','S','i','n','h','_','a',0, /* 50962, 0x1000d85, U+0d85, KEY_Sinh_a, SINHALA AYANNA */
0x6d, 0x1f, 0x01, 0x00, 0x0d, 0x86, 0x00, 0x0d, 0x86, 'K','E','Y','_','S','i','n','h','_','a','a',0, /* 50983, 0x1000d86, U+0d86, KEY_Sinh_aa, SINHALA AAYANNA */
0x6d, 0x23, 0x01, 0x00, 0x0d, 0x87, 0x00, 0x0d, 0x87, 'K','E','Y','_','S','i','n','h','_','a','e',0, /* 51004, 0x1000d87, U+0d87, KEY_Sinh_ae, SINHALA AEYANNA */
0xda, 0xab, 0x01, 0x00, 0x0d, 0x88, 0x00, 0x0d, 0x88, 'K','E','Y','_','S','i','n','h','_','a','e','e',0, /* 51026, 0x1000d88, U+0d88, KEY_Sinh_aee, SINHALA AEEYANNA */
0x36, 0x67, 0x01, 0x00, 0x0d, 0x89, 0x00, 0x0d, 0x89, 'K','E','Y','_','S','i','n','h','_','i',0, /* 51046, 0x1000d89, U+0d89, KEY_Sinh_i, SINHALA IYANNA */
0x6d, 0x37, 0x01, 0x00, 0x0d, 0x8a, 0x00, 0x0d, 0x8a, 'K','E','Y','_','S','i','n','h','_','i','i',0, /* 51067, 0x1000d8a, U+0d8a, KEY_Sinh_ii, SINHALA IIYANNA */
0x36, 0x73, 0x01, 0x00, 0x0d, 0x8b, 0x00, 0x0d, 0x8b, 'K','E','Y','_','S','i','n','h','_','u',0, /* 51087, 0x1000d8b, U+0d8b, KEY_Sinh_u, SINHALA UYANNA */
0x6d, 0x5b, 0x01, 0x00, 0x0d, 0x8c, 0x00, 0x0d, 0x8c, 'K','E','Y','_','S','i','n','h','_','u','u',0, /* 51108, 0x1000d8c, U+0d8c, KEY_Sinh_uu, SINHALA UUYANNA */
0x6d, 0x49, 0x01, 0x00, 0x0d, 0x8d, 0x00, 0x0d, 0x8d, 'K','E','Y','_','S','i','n','h','_','r','i',0, /* 51129, 0x1000d8d, U+0d8d, KEY_Sinh_ri, SINHALA IRUYANNA */
0xda, 0xfb, 0x01, 0x00, 0x0d, 0x8e, 0x00, 0x0d, 0x8e, 'K','E','Y','_','S','i','n','h','_','r','i','i',0, /* 51151, 0x1000d8e, U+0d8e, KEY_Sinh_rii, SINHALA IRUUYANNA */
0x6d, 0x49, 0x01, 0x00, 0x0d, 0x8f, 0x00, 0x0d, 0x8f, 'K','E','Y','_','S','i','n','h','_','l','u',0, /* 51172, 0x1000d8f, U+0d8f, KEY_Sinh_lu, SINHALA ILUYANNA */
0xdb, 0x07, 0x01, 0x00, 0x0d, 0x90, 0x00, 0x0d, 0x90, 'K','E','Y','_','S','i','n','h','_','l','u','u',0, /* 51194, 0x1000d90, U+0d90, KEY_Sinh_luu, SINHALA ILUUYANNA */
0x36, 0x63, 0x01, 0x00, 0x0d, 0x91, 0x00, 0x0d, 0x91, 'K','E','Y','_','S','i','n','h','_','e',0, /* 51214, 0x1000d91, U+0d91, KEY_Sinh_e, SINHALA EYANNA */
0x6d, 0x2b, 0x01, 0x00, 0x0d, 0x92, 0x00, 0x0d, 0x92, 'K','E','Y','_','S','i','n','h','_','e','e',0, /* 51235, 0x1000d92, U+0d92, KEY_Sinh_ee, SINHALA EEYANNA */
0x6d, 0x27, 0x01, 0x00, 0x0d, 0x93, 0x00, 0x0d, 0x93, 'K','E','Y','_','S','i','n','h','_','a','i',0, /* 51256, 0x1000d93, U+0d93, KEY_Sinh_ai, SINHALA AIYANNA */
0x36, 0x6d, 0x01, 0x00, 0x0d, 0x94, 0x00, 0x0d, 0x94, 'K','E','Y','_','S','i','n','h','_','o',0, /* 51276, 0x1000d94, U+0d94, KEY_Sinh_o, SINHALA OYANNA */
0x6d, 0x49, 0x01, 0x00, 0x0d, 0x95, 0x00, 0x0d, 0x95, 'K','E','Y','_','S','i','n','h','_','o','o',0, /* 51297, 0x1000d95, U+0d95, KEY_Sinh_oo, SINHALA OOYANNA */
0x6d, 0x33, 0x01, 0x00, 0x0d, 0x96, 0x00, 0x0d, 0x96, 'K','E','Y','_','S','i','n','h','_','a','u',0, /* 51318, 0x1000d96, U+0d96, KEY_Sinh_au, SINHALA AUYANNA */
0x6d, 0x33, 0x01, 0x00, 0x0d, 0x9a, 0x00, 0x0d, 0x9a, 'K','E','Y','_','S','i','n','h','_','k','a',0, /* 51339, 0x1000d9a, U+0d9a, KEY_Sinh_ka, SINHALA KAYANNA */
0xda, 0xd5, 0x01, 0x00, 0x0d, 0x9b, 0x00, 0x0d, 0x9b, 'K','E','Y','_','S','i','n','h','_','k','h','a',0, /* 51361, 0x1000d9b, U+0d9b, KEY_Sinh_kha, SINHALA MAHA. KAYANNA */
0x6d, 0x2b, 0x01, 0x00, 0x0d, 0x9c, 0x00, 0x0d, 0x9c, 'K','E','Y','_','S','i','n','h','_','g','a',0, /* 51382, 0x1000d9c, U+0d9c, KEY_Sinh_ga, SINHALA GAYANNA */
0xda, 0xc5, 0x01, 0x00, 0x0d, 0x9d, 0x00, 0x0d, 0x9d, 'K','E','Y','_','S','i','n','h','_','g','h','a',0, /* 51404, 0x1000d9d, U+0d9d, KEY_Sinh_gha, SINHALA MAHA. GAYANNA */
0xda, 0xb0, 0x01, 0x00, 0x0d, 0x9e, 0x00, 0x0d, 0x9e, 'K','E','Y','_','S','i','n','h','_','n','g','2',0, /* 51426, 0x1000d9e, U+0d9e, KEY_Sinh_ng2, SINHALA KANTAJA NAASIKYAYA */
0xda, 0xdf, 0x01, 0x00, 0x0d, 0x9f, 0x00, 0x0d, 0x9f, 'K','E','Y','_','S','i','n','h','_','n','g','a',0, /* 51448, 0x1000d9f, U+0d9f, KEY_Sinh_nga, SINHALA SANYAKA GAYANNA */
0x6d, 0x23, 0x01, 0x00, 0x0d, 0xa0, 0x00, 0x0d, 0xa0, 'K','E','Y','_','S','i','n','h','_','c','a',0, /* 51469, 0x1000da0, U+0da0, KEY_Sinh_ca, SINHALA CAYANNA */
0xda, 0xb5, 0x01, 0x00, 0x0d, 0xa1, 0x00, 0x0d, 0xa1, 'K','E','Y','_','S','i','n','h','_','c','h','a',0, /* 51491, 0x1000da1, U+0da1, KEY_Sinh_cha, SINHALA MAHA. CAYANNA */
0x6d, 0x31, 0x01, 0x00, 0x0d, 0xa2, 0x00, 0x0d, 0xa2, 'K','E','Y','_','S','i','n','h','_','j','a',0, /* 51512, 0x1000da2, U+0da2, KEY_Sinh_ja, SINHALA JAYANNA */
0xda, 0xd1, 0x01, 0x00, 0x0d, 0xa3, 0x00, 0x0d, 0xa3, 'K','E','Y','_','S','i','n','h','_','j','h','a',0, /* 51534, 0x1000da3, U+0da3, KEY_Sinh_jha, SINHALA MAHA. JAYANNA */
0xdb, 0x03, 0x01, 0x00, 0x0d, 0xa4, 0x00, 0x0d, 0xa4, 'K','E','Y','_','S','i','n','h','_','n','y','a',0, /* 51556, 0x1000da4, U+0da4, KEY_Sinh_nya, SINHALA TAALUJA NAASIKYAYA */
0xb6, 0x4b, 0x01, 0x00, 0x0d, 0xa5, 0x00, 0x0d, 0xa5, 'K','E','Y','_','S','i','n','h','_','j','n','y','a',0, /* 51579, 0x1000da5, U+0da5, KEY_Sinh_jnya, SINHALA TAALUJA SANYOOGA NAASIKYAYA */
0xda, 0xe5, 0x01, 0x00, 0x0d, 0xa6, 0x00, 0x0d, 0xa6, 'K','E','Y','_','S','i','n','h','_','n','j','a',0, /* 51601, 0x1000da6, U+0da6, KEY_Sinh_nja, SINHALA SANYAKA JAYANNA */
0xdb, 0x11, 0x01, 0x00, 0x0d, 0xa7, 0x00, 0x0d, 0xa7, 'K','E','Y','_','S','i','n','h','_','t','t','a',0, /* 51623, 0x1000da7, U+0da7, KEY_Sinh_tta, SINHALA TTAYANNA */
0xb6, 0x91, 0x01, 0x00, 0x0d, 0xa8, 0x00, 0x0d, 0xa8, 'K','E','Y','_','S','i','n','h','_','t','t','h','a',0, /* 51646, 0x1000da8, U+0da8, KEY_Sinh_ttha, SINHALA MAHA. TTAYANNA */
0xda, 0xb1, 0x01, 0x00, 0x0d, 0xa9, 0x00, 0x0d, 0xa9, 'K','E','Y','_','S','i','n','h','_','d','d','a',0, /* 51668, 0x1000da9, U+0da9, KEY_Sinh_dda, SINHALA DDAYANNA */
0xb5, 0xd1, 0x01, 0x00, 0x0d, 0xaa, 0x00, 0x0d, 0xaa, 'K','E','Y','_','S','i','n','h','_','d','d','h','a',0, /* 51691, 0x1000daa, U+0daa, KEY_Sinh_ddha, SINHALA MAHA. DDAYANNA */
0xda, 0xed, 0x01, 0x00, 0x0d, 0xab, 0x00, 0x0d, 0xab, 'K','E','Y','_','S','i','n','h','_','n','n','a',0, /* 51713, 0x1000dab, U+0dab, KEY_Sinh_nna, SINHALA MUURDHAJA NAYANNA */
0xb6, 0x19, 0x01, 0x00, 0x0d, 0xac, 0x00, 0x0d, 0xac, 'K','E','Y','_','S','i','n','h','_','n','d','d','a',0, /* 51736, 0x1000dac, U+0dac, KEY_Sinh_ndda, SINHALA SANYAKA DDAYANNA */
0xda, 0xf9, 0x01, 0x00, 0x0d, 0xad, 0x00, 0x0d, 0xad, 'K','E','Y','_','S','i','n','h','_','t','h','a',0, /* 51758, 0x1000dad, U+0dad, KEY_Sinh_tha, SINHALA TAYANNA */
0xb6, 0x61, 0x01, 0x00, 0x0d, 0xae, 0x00, 0x0d, 0xae, 'K','E','Y','_','S','i','n','h','_','t','h','h','a',0, /* 51781, 0x1000dae, U+0dae, KEY_Sinh_thha, SINHALA MAHA. TAYANNA */
0xda, 0xb9, 0x01, 0x00, 0x0d, 0xaf, 0x00, 0x0d, 0xaf, 'K','E','Y','_','S','i','n','h','_','d','h','a',0, /* 51803, 0x1000daf, U+0daf, KEY_Sinh_dha, SINHALA DAYANNA */
0xb5, 0xe1, 0x01, 0x00, 0x0d, 0xb0, 0x00, 0x0d, 0xb0, 'K','E','Y','_','S','i','n','h','_','d','h','h','a',0, /* 51826, 0x1000db0, U+0db0, KEY_Sinh_dhha, SINHALA MAHA. DAYANNA */
0x6d, 0x39, 0x01, 0x00, 0x0d, 0xb1, 0x00, 0x0d, 0xb1, 'K','E','Y','_','S','i','n','h','_','n','a',0, /* 51847, 0x1000db1, U+0db1, KEY_Sinh_na, SINHALA DANTAJA NAYANNA */
0xb6, 0x21, 0x01, 0x00, 0x0d, 0xb3, 0x00, 0x0d, 0xb3, 'K','E','Y','_','S','i','n','h','_','n','d','h','a',0, /* 51870, 0x1000db3, U+0db3, KEY_Sinh_ndha, SINHALA SANYAKA DAYANNA */
0x6d, 0x3d, 0x01, 0x00, 0x0d, 0xb4, 0x00, 0x0d, 0xb4, 'K','E','Y','_','S','i','n','h','_','p','a',0, /* 51891, 0x1000db4, U+0db4, KEY_Sinh_pa, SINHALA PAYANNA */
0xda, 0xe9, 0x01, 0x00, 0x0d, 0xb5, 0x00, 0x0d, 0xb5, 'K','E','Y','_','S','i','n','h','_','p','h','a',0, /* 51913, 0x1000db5, U+0db5, KEY_Sinh_pha, SINHALA MAHA. PAYANNA */
0x6d, 0x21, 0x01, 0x00, 0x0d, 0xb6, 0x00, 0x0d, 0xb6, 'K','E','Y','_','S','i','n','h','_','b','a',0, /* 51934, 0x1000db6, U+0db6, KEY_Sinh_ba, SINHALA BAYANNA */
0xda, 0xb1, 0x01, 0x00, 0x0d, 0xb7, 0x00, 0x0d, 0xb7, 'K','E','Y','_','S','i','n','h','_','b','h','a',0, /* 51956, 0x1000db7, U+0db7, KEY_Sinh_bha, SINHALA MAHA. BAYANNA */
0x6d, 0x37, 0x01, 0x00, 0x0d, 0xb8, 0x00, 0x0d, 0xb8, 'K','E','Y','_','S','i','n','h','_','m','a',0, /* 51977, 0x1000db8, U+0db8, KEY_Sinh_ma, SINHALA MAYANNA */
0xda, 0xd1, 0x01, 0x00, 0x0d, 0xb9, 0x00, 0x0d, 0xb9, 'K','E','Y','_','S','i','n','h','_','m','b','a',0, /* 51999, 0x1000db9, U+0db9, KEY_Sinh_mba, SINHALA AMBA BAYANNA */
0x6d, 0x4f, 0x01, 0x00, 0x0d, 0xba, 0x00, 0x0d, 0xba, 'K','E','Y','_','S','i','n','h','_','y','a',0, /* 52020, 0x1000dba, U+0dba, KEY_Sinh_ya, SINHALA YAYANNA */
0x6d, 0x41, 0x01, 0x00, 0x0d, 0xbb, 0x00, 0x0d, 0xbb, 'K','E','Y','_','S','i','n','h','_','r','a',0, /* 52041, 0x1000dbb, U+0dbb, KEY_Sinh_ra, SINHALA RAYANNA */
0x6d, 0x35, 0x01, 0x00, 0x0d, 0xbd, 0x00, 0x0d, 0xbd, 'K','E','Y','_','S','i','n','h','_','l','a',0, /* 52062, 0x1000dbd, U+0dbd, KEY_Sinh_la, SINHALA DANTAJA LAYANNA */
0x6d, 0x49, 0x01, 0x00, 0x0d, 0xc0, 0x00, 0x0d, 0xc0, 'K','E','Y','_','S','i','n','h','_','v','a',0, /* 52083, 0x1000dc0, U+0dc0, KEY_Sinh_va, SINHALA VAYANNA */
0xda, 0xf5, 0x01, 0x00, 0x0d, 0xc1, 0x00, 0x0d, 0xc1, 'K','E','Y','_','S','i','n','h','_','s','h','a',0, /* 52105, 0x1000dc1, U+0dc1, KEY_Sinh_sha, SINHALA TAALUJA SAYANNA */
0xb6, 0x85, 0x01, 0x00, 0x0d, 0xc2, 0x00, 0x0d, 0xc2, 'K','E','Y','_','S','i','n','h','_','s','s','h','a',0, /* 52128, 0x1000dc2, U+0dc2, KEY_Sinh_ssha, SINHALA MUURDHAJA SAYANNA */
0x6d, 0x43, 0x01, 0x00, 0x0d, 0xc3, 0x00, 0x0d, 0xc3, 'K','E','Y','_','S','i','n','h','_','s','a',0, /* 52149, 0x1000dc3, U+0dc3, KEY_Sinh_sa, SINHALA DANTAJA SAYANNA */
0x6d, 0x2d, 0x01, 0x00, 0x0d, 0xc4, 0x00, 0x0d, 0xc4, 'K','E','Y','_','S','i','n','h','_','h','a',0, /* 52170, 0x1000dc4, U+0dc4, KEY_Sinh_ha, SINHALA HAYANNA */
0xda, 0xe1, 0x01, 0x00, 0x0d, 0xc5, 0x00, 0x0d, 0xc5, 'K','E','Y','_','S','i','n','h','_','l','l','a',0, /* 52192, 0x1000dc5, U+0dc5, KEY_Sinh_lla, SINHALA MUURDHAJA LAYANNA */
0x6d, 0x29, 0x01, 0x00, 0x0d, 0xc6, 0x00, 0x0d, 0xc6, 'K','E','Y','_','S','i','n','h','_','f','a',0, /* 52213, 0x1000dc6, U+0dc6, KEY_Sinh_fa, SINHALA FAYANNA */
0x6d, 0x2a, 0x01, 0x00, 0x0d, 0xca, 0x00, 0x0d, 0xca, 'K','E','Y','_','S','i','n','h','_','a','l',0, /* 52234, 0x1000dca, U+0dca, KEY_Sinh_al, SINHALA AL-LAKUNA */
0xda, 0x70, 0x01, 0x00, 0x0d, 0xcf, 0x00, 0x0d, 0xcf, 'K','E','Y','_','S','i','n','h','_','a','a','2',0, /* 52256, 0x1000dcf, U+0dcf, KEY_Sinh_aa2, SINHALA AELA-PILLA */
0xda, 0x78, 0x01, 0x00, 0x0d, 0xd0, 0x00, 0x0d, 0xd0, 'K','E','Y','_','S','i','n','h','_','a','e','2',0, /* 52278, 0x1000dd0, U+0dd0, KEY_Sinh_ae2, SINHALA AEDA-PILLA */
0xb5, 0x88, 0x01, 0x00, 0x0d, 0xd1, 0x00, 0x0d, 0xd1, 'K','E','Y','_','S','i','n','h','_','a','e','e','2',0, /* 52301, 0x1000dd1, U+0dd1, KEY_Sinh_aee2, SINHALA DIGA AEDA-PILLA */
0x6d, 0x00, 0x01, 0x00, 0x0d, 0xd2, 0x00, 0x0d, 0xd2, 'K','E','Y','_','S','i','n','h','_','i','2',0, /* 52322, 0x1000dd2, U+0dd2, KEY_Sinh_i2, SINHALA IS-PILLA */
0xda, 0xa0, 0x01, 0x00, 0x0d, 0xd3, 0x00, 0x0d, 0xd3, 'K','E','Y','_','S','i','n','h','_','i','i','2',0, /* 52344, 0x1000dd3, U+0dd3, KEY_Sinh_ii2, SINHALA DIGA IS-PILLA */
0x6d, 0x18, 0x01, 0x00, 0x0d, 0xd4, 0x00, 0x0d, 0xd4, 'K','E','Y','_','S','i','n','h','_','u','2',0, /* 52365, 0x1000dd4, U+0dd4, KEY_Sinh_u2, SINHALA PAA-PILLA */
0xda, 0xe8, 0x01, 0x00, 0x0d, 0xd6, 0x00, 0x0d, 0xd6, 'K','E','Y','_','S','i','n','h','_','u','u','2',0, /* 52387, 0x1000dd6, U+0dd6, KEY_Sinh_uu2, SINHALA DIGA PAA-PILLA */
0xda, 0xdc, 0x01, 0x00, 0x0d, 0xd8, 0x00, 0x0d, 0xd8, 'K','E','Y','_','S','i','n','h','_','r','u','2',0, /* 52409, 0x1000dd8, U+0dd8, KEY_Sinh_ru2, SINHALA GAETTA-PILLA */
0x6c, 0xf8, 0x01, 0x00, 0x0d, 0xd9, 0x00, 0x0d, 0xd9, 'K','E','Y','_','S','i','n','h','_','e','2',0, /* 52430, 0x1000dd9, U+0dd9, KEY_Sinh_e2, SINHALA KOMBUVA */
0xda, 0x88, 0x01, 0x00, 0x0d, 0xda, 0x00, 0x0d, 0xda, 'K','E','Y','_','S','i','n','h','_','e','e','2',0, /* 52452, 0x1000dda, U+0dda, KEY_Sinh_ee2, SINHALA DIGA KOMBUVA */
0xda, 0x80, 0x01, 0x00, 0x0d, 0xdb, 0x00, 0x0d, 0xdb, 'K','E','Y','_','S','i','n','h','_','a','i','2',0, /* 52474, 0x1000ddb, U+0ddb, KEY_Sinh_ai2, SINHALA KOMBU DEKA */
0x6d, 0x0c, 0x01, 0x00, 0x0d, 0xdc, 0x00, 0x0d, 0xdc, 'K','E','Y','_','S','i','n','h','_','o','2',0, /* 52495, 0x1000ddc, U+0ddc, KEY_Sinh_o2, SINHALA KOMBUVA HAA AELA-PILLA */
0xda, 0xc4, 0x01, 0x00, 0x0d, 0xdd, 0x00, 0x0d, 0xdd, 'K','E','Y','_','S','i','n','h','_','o','o','2',0, /* 52517, 0x1000ddd, U+0ddd, KEY_Sinh_oo2, SINHALA KOMBUVA HAA DIGA AELA-PILLA */
0xda, 0x98, 0x01, 0x00, 0x0d, 0xde, 0x00, 0x0d, 0xde, 'K','E','Y','_','S','i','n','h','_','a','u','2',0, /* 52539, 0x1000dde, U+0dde, KEY_Sinh_au2, SINHALA KOMBUVA HAA GAYANUKITTA */
0xda, 0xc4, 0x01, 0x00, 0x0d, 0xdf, 0x00, 0x0d, 0xdf, 'K','E','Y','_','S','i','n','h','_','l','u','2',0, /* 52561, 0x1000ddf, U+0ddf, KEY_Sinh_lu2, SINHALA GAYANUKITTA */
0xb6, 0x70, 0x01, 0x00, 0x0d, 0xf2, 0x00, 0x0d, 0xf2, 'K','E','Y','_','S','i','n','h','_','r','u','u','2',0, /* 52584, 0x1000df2, U+0df2, KEY_Sinh_ruu2, SINHALA DIGA GAETTA-PILLA */
0xb6, 0x40, 0x01, 0x00, 0x0d, 0xf3, 0x00, 0x0d, 0xf3, 'K','E','Y','_','S','i','n','h','_','l','u','u','2',0, /* 52607, 0x1000df3, U+0df3, KEY_Sinh_luu2, SINHALA DIGA GAYANUKITTA */
0xaf, 0xe7, 0x01, 0x00, 0x0d, 0xf4, 0x00, 0x0d, 0xf4, 'K','E','Y','_','S','i','n','h','_','k','u','n','d','d','a','l','i','y','a',0, /* 52636, 0x1000df4, U+0df4, KEY_Sinh_kunddaliya, SINHALA KUNDDALIYA */
0xa8, 0x5d, 0x10, 0x08, 0xff, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','o','d','e','L','o','c','k',0, /* 52662, 0x1008ff01, KEY_XF86ModeLock, Mode Switch Lock */
0x7c, 0x8e, 0x10, 0x08, 0xff, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','o','n','B','r','i','g','h','t','n','e','s','s','U','p',0, /* 52695, 0x1008ff02, KEY_XF86MonBrightnessUp, Monitor/panel brightness */
0xf3, 0x08, 0x10, 0x08, 0xff, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','o','n','B','r','i','g','h','t','n','e','s','s','D','o','w','n',0, /* 52730, 0x1008ff03, KEY_XF86MonBrightnessDown, Monitor/panel brightness */
0x77, 0xce, 0x10, 0x08, 0xff, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','K','b','d','L','i','g','h','t','O','n','O','f','f',0, /* 52761, 0x1008ff04, KEY_XF86KbdLightOnOff, Keyboards may be lit */
0xbc, 0x8e, 0x10, 0x08, 0xff, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','K','b','d','B','r','i','g','h','t','n','e','s','s','U','p',0, /* 52794, 0x1008ff05, KEY_XF86KbdBrightnessUp, Keyboards may be lit */
0xf3, 0x08, 0x10, 0x08, 0xff, 0x06, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','K','b','d','B','r','i','g','h','t','n','e','s','s','D','o','w','n',0, /* 52829, 0x1008ff06, KEY_XF86KbdBrightnessDown, Keyboards may be lit */
0x56, 0x8d, 0x10, 0x08, 0xff, 0x10, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','t','a','n','d','b','y',0, /* 52854, 0x1008ff10, KEY_XF86Standby, System into standby mode */
0x34, 0x23, 0x10, 0x08, 0xff, 0x11, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','L','o','w','e','r','V','o','l','u','m','e',0, /* 52888, 0x1008ff11, KEY_XF86AudioLowerVolume, Volume control down */
0x4a, 0x19, 0x10, 0x08, 0xff, 0x12, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','M','u','t','e',0, /* 52915, 0x1008ff12, KEY_XF86AudioMute, Mute sound from the system */
0x25, 0xe3, 0x10, 0x08, 0xff, 0x13, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','a','i','s','e','V','o','l','u','m','e',0, /* 52949, 0x1008ff13, KEY_XF86AudioRaiseVolume, Volume control up */
0x49, 0xfb, 0x10, 0x08, 0xff, 0x14, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','P','l','a','y',0, /* 52976, 0x1008ff14, KEY_XF86AudioPlay, Start playing of audio > */
0x4a, 0x46, 0x10, 0x08, 0xff, 0x15, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','S','t','o','p',0, /* 53003, 0x1008ff15, KEY_XF86AudioStop, Stop playing audio */
0x4a, 0x18, 0x10, 0x08, 0xff, 0x16, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','P','r','e','v',0, /* 53030, 0x1008ff16, KEY_XF86AudioPrev, Previous track */
0x49, 0xf8, 0x10, 0x08, 0xff, 0x17, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','N','e','x','t',0, /* 53057, 0x1008ff17, KEY_XF86AudioNext, Next track */
0xa6, 0xe7, 0x10, 0x08, 0xff, 0x18, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','H','o','m','e','P','a','g','e',0, /* 53083, 0x1008ff18, KEY_XF86HomePage, Display user's home page */
0xca, 0x0a, 0x10, 0x08, 0xff, 0x19, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','a','i','l',0, /* 53105, 0x1008ff19, KEY_XF86Mail, Invoke user's mail program */
0x95, 0x6c, 0x10, 0x08, 0xff, 0x1a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','t','a','r','t',0, /* 53128, 0x1008ff1a, KEY_XF86Start, Start application */
0x2a, 0x2e, 0x10, 0x08, 0xff, 0x1b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','e','a','r','c','h',0, /* 53152, 0x1008ff1b, KEY_XF86Search, Search */
0x28, 0xec, 0x10, 0x08, 0xff, 0x1c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','e','c','o','r','d',0, /* 53181, 0x1008ff1c, KEY_XF86AudioRecord, Record audio application */
0x89, 0x48, 0x10, 0x08, 0xff, 0x1d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','a','l','c','u','l','a','t','o','r',0, /* 53209, 0x1008ff1d, KEY_XF86Calculator, Invoke calculator program */
0xca, 0x25, 0x10, 0x08, 0xff, 0x1e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','m','o',0, /* 53231, 0x1008ff1e, KEY_XF86Memo, Invoke Memo taking program */
0xa8, 0x8e, 0x10, 0x08, 0xff, 0x1f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','D','o','L','i','s','t',0, /* 53257, 0x1008ff1f, KEY_XF86ToDoList, Invoke To Do List program */
0xa1, 0xc4, 0x10, 0x08, 0xff, 0x20, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','a','l','e','n','d','a','r',0, /* 53283, 0x1008ff20, KEY_XF86Calendar, Invoke Calendar program */
0x5a, 0x38, 0x10, 0x08, 0xff, 0x21, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','o','w','e','r','D','o','w','n',0, /* 53310, 0x1008ff21, KEY_XF86PowerDown, Deep sleep the system */
0xc0, 0x5e, 0x10, 0x08, 0xff, 0x22, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','o','n','t','r','a','s','t','A','d','j','u','s','t',0, /* 53342, 0x1008ff22, KEY_XF86ContrastAdjust, Adjust screen contrast */
0xab, 0xda, 0x10, 0x08, 0xff, 0x23, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','c','k','e','r','U','p',0, /* 53368, 0x1008ff23, KEY_XF86RockerUp, Rocker switches exist up */
0xb0, 0x38, 0x10, 0x08, 0xff, 0x24, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','c','k','e','r','D','o','w','n',0, /* 53396, 0x1008ff24, KEY_XF86RockerDown, and down */
0x60, 0xcc, 0x10, 0x08, 0xff, 0x25, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','c','k','e','r','E','n','t','e','r',0, /* 53425, 0x1008ff25, KEY_XF86RockerEnter, and let you press them */
0xc9, 0xa5, 0x10, 0x08, 0xff, 0x26, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','a','c','k',0, /* 53447, 0x1008ff26, KEY_XF86Back, Like back on a browser */
0x54, 0x04, 0x10, 0x08, 0xff, 0x27, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','o','r','w','a','r','d',0, /* 53472, 0x1008ff27, KEY_XF86Forward, Like forward on a browser */
0xca, 0x96, 0x10, 0x08, 0xff, 0x28, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','t','o','p',0, /* 53494, 0x1008ff28, KEY_XF86Stop, Stop current operation */
0x54, 0xf2, 0x10, 0x08, 0xff, 0x29, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','e','f','r','e','s','h',0, /* 53519, 0x1008ff29, KEY_XF86Refresh, Refresh the page */
0xac, 0xee, 0x10, 0x08, 0xff, 0x2a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','o','w','e','r','O','f','f',0, /* 53545, 0x1008ff2a, KEY_XF86PowerOff, Power off system entirely */
0x2a, 0x76, 0x10, 0x08, 0xff, 0x2b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','a','k','e','U','p',0, /* 53569, 0x1008ff2b, KEY_XF86WakeUp, Wake up system from sleep */
0x94, 0x2e, 0x10, 0x08, 0xff, 0x2c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','E','j','e','c','t',0, /* 53592, 0x1008ff2c, KEY_XF86Eject, Eject device (e.g. DVD) */
0x58, 0xcc, 0x10, 0x08, 0xff, 0x2d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','c','r','e','e','n','S','a','v','e','r',0, /* 53621, 0x1008ff2d, KEY_XF86ScreenSaver, Invoke screensaver */
0x64, 0xd1, 0x10, 0x08, 0xff, 0x2e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','W','W',0, /* 53642, 0x1008ff2e, KEY_XF86WWW, Invoke web browser */
0x95, 0x1e, 0x10, 0x08, 0xff, 0x2f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','l','e','e','p',0, /* 53665, 0x1008ff2f, KEY_XF86Sleep, Put system to sleep */
0x4b, 0x55, 0x10, 0x08, 0xff, 0x30, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','a','v','o','r','i','t','e','s',0, /* 53692, 0x1008ff30, KEY_XF86Favorites, Show favorite locations */
0x94, 0x47, 0x10, 0x08, 0xff, 0x31, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','P','a','u','s','e',0, /* 53720, 0x1008ff31, KEY_XF86AudioPause, Pause audio playing */
0x93, 0xdb, 0x10, 0x08, 0xff, 0x32, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','M','e','d','i','a',0, /* 53748, 0x1008ff32, KEY_XF86AudioMedia, Launch media collection app */
0xa3, 0x94, 0x10, 0x08, 0xff, 0x33, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','y','C','o','m','p','u','t','e','r',0, /* 53776, 0x1008ff33, KEY_XF86MyComputer, Display "My Computer" window */
0xb3, 0x3b, 0x10, 0x08, 0xff, 0x34, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','V','e','n','d','o','r','H','o','m','e',0, /* 53804, 0x1008ff34, KEY_XF86VendorHome, Display vendor home web site */
0x4f, 0x9e, 0x10, 0x08, 0xff, 0x35, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','i','g','h','t','B','u','l','b',0, /* 53831, 0x1008ff35, KEY_XF86LightBulb, Light bulb keys exist */
0xca, 0x66, 0x10, 0x08, 0xff, 0x36, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','h','o','p',0, /* 53853, 0x1008ff36, KEY_XF86Shop, Display shopping web site */
0x54, 0x09, 0x10, 0x08, 0xff, 0x37, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','H','i','s','t','o','r','y',0, /* 53878, 0x1008ff37, KEY_XF86History, Show history of web surfing */
0x54, 0xc4, 0x10, 0x08, 0xff, 0x38, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','O','p','e','n','U','R','L',0, /* 53903, 0x1008ff38, KEY_XF86OpenURL, Open selected URL */
0xf7, 0x71, 0x10, 0x08, 0xff, 0x39, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','d','d','F','a','v','o','r','i','t','e',0, /* 53932, 0x1008ff39, KEY_XF86AddFavorite, Add URL to favorites list */
0xa7, 0x49, 0x10, 0x08, 0xff, 0x3a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','H','o','t','L','i','n','k','s',0, /* 53958, 0x1008ff3a, KEY_XF86HotLinks, Show "hot" links */
0xcc, 0x1e, 0x10, 0x08, 0xff, 0x3b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','r','i','g','h','t','n','e','s','s','A','d','j','u','s','t',0, /* 53992, 0x1008ff3b, KEY_XF86BrightnessAdjust, Invoke brightness adj. UI */
0x52, 0x6b, 0x10, 0x08, 0xff, 0x3c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','i','n','a','n','c','e',0, /* 54017, 0x1008ff3c, KEY_XF86Finance, Display financial site */
0x4d, 0x25, 0x10, 0x08, 0xff, 0x3d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','o','m','m','u','n','i','t','y',0, /* 54044, 0x1008ff3d, KEY_XF86Community, Display user's community */
0x29, 0x6c, 0x10, 0x08, 0xff, 0x3e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','e','w','i','n','d',0, /* 54073, 0x1008ff3e, KEY_XF86AudioRewind, "rewind" audio track */
0xff, 0x84, 0x10, 0x08, 0xff, 0x3f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','a','c','k','F','o','r','w','a','r','d',0, /* 54102, 0x1008ff3f, KEY_XF86BackForward, ??? */
0x53, 0x6c, 0x10, 0x08, 0xff, 0x40, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','0',0, /* 54127, 0x1008ff40, KEY_XF86Launch0, Launch Application */
0x53, 0x6d, 0x10, 0x08, 0xff, 0x41, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','1',0, /* 54152, 0x1008ff41, KEY_XF86Launch1, Launch Application */
0x53, 0x6e, 0x10, 0x08, 0xff, 0x42, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','2',0, /* 54177, 0x1008ff42, KEY_XF86Launch2, Launch Application */
0x53, 0x6f, 0x10, 0x08, 0xff, 0x43, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','3',0, /* 54202, 0x1008ff43, KEY_XF86Launch3, Launch Application */
0x53, 0x70, 0x10, 0x08, 0xff, 0x44, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','4',0, /* 54227, 0x1008ff44, KEY_XF86Launch4, Launch Application */
0x53, 0x71, 0x10, 0x08, 0xff, 0x45, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','5',0, /* 54252, 0x1008ff45, KEY_XF86Launch5, Launch Application */
0x53, 0x72, 0x10, 0x08, 0xff, 0x46, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','6',0, /* 54277, 0x1008ff46, KEY_XF86Launch6, Launch Application */
0x53, 0x73, 0x10, 0x08, 0xff, 0x47, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','7',0, /* 54302, 0x1008ff47, KEY_XF86Launch7, Launch Application */
0x53, 0x74, 0x10, 0x08, 0xff, 0x48, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','8',0, /* 54327, 0x1008ff48, KEY_XF86Launch8, Launch Application */
0x53, 0x75, 0x10, 0x08, 0xff, 0x49, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','9',0, /* 54352, 0x1008ff49, KEY_XF86Launch9, Launch Application */
0x53, 0x7d, 0x10, 0x08, 0xff, 0x4a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','A',0, /* 54377, 0x1008ff4a, KEY_XF86LaunchA, Launch Application */
0x53, 0x7e, 0x10, 0x08, 0xff, 0x4b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','B',0, /* 54402, 0x1008ff4b, KEY_XF86LaunchB, Launch Application */
0x53, 0x7f, 0x10, 0x08, 0xff, 0x4c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','C',0, /* 54427, 0x1008ff4c, KEY_XF86LaunchC, Launch Application */
0x53, 0x80, 0x10, 0x08, 0xff, 0x4d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','D',0, /* 54452, 0x1008ff4d, KEY_XF86LaunchD, Launch Application */
0x53, 0x81, 0x10, 0x08, 0xff, 0x4e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','E',0, /* 54477, 0x1008ff4e, KEY_XF86LaunchE, Launch Application */
0x53, 0x82, 0x10, 0x08, 0xff, 0x4f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','F',0, /* 54502, 0x1008ff4f, KEY_XF86LaunchF, Launch Application */
0xd9, 0x34, 0x10, 0x08, 0xff, 0x50, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','p','p','l','i','c','a','t','i','o','n','L','e','f','t',0, /* 54535, 0x1008ff50, KEY_XF86ApplicationLeft, switch to application, left */
0xb3, 0x48, 0x10, 0x08, 0xff, 0x51, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','p','p','l','i','c','a','t','i','o','n','R','i','g','h','t',0, /* 54569, 0x1008ff51, KEY_XF86ApplicationRight, switch to application, right */
0xc9, 0xf5, 0x10, 0x08, 0xff, 0x52, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','o','o','k',0, /* 54591, 0x1008ff52, KEY_XF86Book, Launch bookreader */
0x32, 0x02, 0x10, 0x08, 0xff, 0x53, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','D',0, /* 54611, 0x1008ff53, KEY_XF86CD, Launch CD/DVD player */
0x89, 0x34, 0x10, 0x08, 0xff, 0x54, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','a','l','c','u','l','a','t','e','r',0, /* 54639, 0x1008ff54, KEY_XF86Calculater, Launch Calculater */
0x94, 0x18, 0x10, 0x08, 0xff, 0x55, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','l','e','a','r',0, /* 54662, 0x1008ff55, KEY_XF86Clear, Clear window, screen */
0x94, 0x57, 0x10, 0x08, 0xff, 0x56, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','l','o','s','e',0, /* 54685, 0x1008ff56, KEY_XF86Close, Close window */
0xca, 0x0d, 0x10, 0x08, 0xff, 0x57, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','o','p','y',0, /* 54707, 0x1008ff57, KEY_XF86Copy, Copy selection */
0x64, 0xda, 0x10, 0x08, 0xff, 0x58, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','u','t',0, /* 54728, 0x1008ff58, KEY_XF86Cut, Cut selection */
0x52, 0xbb, 0x10, 0x08, 0xff, 0x59, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','D','i','s','p','l','a','y',0, /* 54753, 0x1008ff59, KEY_XF86Display, Output switch key */
0x64, 0x71, 0x10, 0x08, 0xff, 0x5a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','D','O','S',0, /* 54774, 0x1008ff5a, KEY_XF86DOS, Launch DOS (emulation) */
0x4b, 0xeb, 0x10, 0x08, 0xff, 0x5b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','D','o','c','u','m','e','n','t','s',0, /* 54801, 0x1008ff5b, KEY_XF86Documents, Open documents window */
0x94, 0x92, 0x10, 0x08, 0xff, 0x5c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','E','x','c','e','l',0, /* 54824, 0x1008ff5c, KEY_XF86Excel, Launch spread sheet */
0xa9, 0xbc, 0x10, 0x08, 0xff, 0x5d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','E','x','p','l','o','r','e','r',0, /* 54850, 0x1008ff5d, KEY_XF86Explorer, Launch file explorer */
0xc9, 0xdb, 0x10, 0x08, 0xff, 0x5e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','G','a','m','e',0, /* 54872, 0x1008ff5e, KEY_XF86Game, Launch game */
0x32, 0x35, 0x10, 0x08, 0xff, 0x5f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','G','o',0, /* 54892, 0x1008ff5f, KEY_XF86Go, Go to URL */
0x2c, 0x5a, 0x10, 0x08, 0xff, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','i','T','o','u','c','h',0, /* 54916, 0x1008ff60, KEY_XF86iTouch, Logitch iTouch- don't use */
0x29, 0x96, 0x10, 0x08, 0xff, 0x61, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','o','g','O','f','f',0, /* 54940, 0x1008ff61, KEY_XF86LogOff, Log off system */
0x29, 0xaa, 0x10, 0x08, 0xff, 0x62, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','a','r','k','e','t',0, /* 54964, 0x1008ff62, KEY_XF86Market, ?? */
0x53, 0xb7, 0x10, 0x08, 0xff, 0x63, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','e','t','i','n','g',0, /* 54989, 0x1008ff63, KEY_XF86Meeting, enter meeting in calendar */
0x29, 0x8c, 0x10, 0x08, 0xff, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','n','u','K','B',0, /* 55013, 0x1008ff65, KEY_XF86MenuKB, distingush keyboard from PB */
0x29, 0x96, 0x10, 0x08, 0xff, 0x66, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','n','u','P','B',0, /* 55037, 0x1008ff66, KEY_XF86MenuPB, distinuish PB from keyboard */
0x54, 0xe5, 0x10, 0x08, 0xff, 0x67, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','y','S','i','t','e','s',0, /* 55062, 0x1008ff67, KEY_XF86MySites, Favourites */
0x64, 0xe9, 0x10, 0x08, 0xff, 0x68, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','N','e','w',0, /* 55083, 0x1008ff68, KEY_XF86New, New (folder, document... */
0xca, 0x45, 0x10, 0x08, 0xff, 0x69, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','N','e','w','s',0, /* 55105, 0x1008ff69, KEY_XF86News, News */
0xa1, 0x2b, 0x10, 0x08, 0xff, 0x6a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','O','f','f','i','c','e','H','o','m','e',0, /* 55133, 0x1008ff6a, KEY_XF86OfficeHome, Office home (old Staroffice) */
0xca, 0x50, 0x10, 0x08, 0xff, 0x6b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','O','p','e','n',0, /* 55155, 0x1008ff6b, KEY_XF86Open, Open */
0x2a, 0xf0, 0x10, 0x08, 0xff, 0x6c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','O','p','t','i','o','n',0, /* 55179, 0x1008ff6c, KEY_XF86Option, ?? */
0x94, 0xe1, 0x10, 0x08, 0xff, 0x6d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','a','s','t','e',0, /* 55202, 0x1008ff6d, KEY_XF86Paste, Paste */
0x94, 0xfd, 0x10, 0x08, 0xff, 0x6e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','h','o','n','e',0, /* 55225, 0x1008ff6e, KEY_XF86Phone, Launch phone; dial number */
0x98, 0xed, 0x10, 0x08, 0xff, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','Q',0, /* 55244, 0x1008ff70, KEY_XF86Q, Compaq's Q - don't use */
0x95, 0x19, 0x10, 0x08, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','e','p','l','y',0, /* 55267, 0x1008ff72, KEY_XF86Reply, Reply e.g., mail */
0x2a, 0x52, 0x10, 0x08, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','e','l','o','a','d',0, /* 55291, 0x1008ff73, KEY_XF86Reload, Reload web page, file, etc. */
0xc0, 0x7d, 0x10, 0x08, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','t','a','t','e','W','i','n','d','o','w','s',0, /* 55322, 0x1008ff74, KEY_XF86RotateWindows, Rotate windows e.g. xrandr */
0xb8, 0x62, 0x10, 0x08, 0xff, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','t','a','t','i','o','n','P','B',0, /* 55350, 0x1008ff75, KEY_XF86RotationPB, don't use */
0xb8, 0x58, 0x10, 0x08, 0xff, 0x76, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','t','a','t','i','o','n','K','B',0, /* 55378, 0x1008ff76, KEY_XF86RotationKB, don't use */
0xca, 0x4d, 0x10, 0x08, 0xff, 0x77, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','a','v','e',0, /* 55400, 0x1008ff77, KEY_XF86Save, Save (file, document, state */
0xab, 0x9a, 0x10, 0x08, 0xff, 0x78, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','c','r','o','l','l','U','p',0, /* 55426, 0x1008ff78, KEY_XF86ScrollUp, Scroll window/contents up */
0xaf, 0x38, 0x10, 0x08, 0xff, 0x79, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','c','r','o','l','l','D','o','w','n',0, /* 55454, 0x1008ff79, KEY_XF86ScrollDown, Scrool window/contentd down */
0x5e, 0x65, 0x10, 0x08, 0xff, 0x7a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','c','r','o','l','l','C','l','i','c','k',0, /* 55483, 0x1008ff7a, KEY_XF86ScrollClick, Use XKB mousekeys instead */
0xca, 0x4c, 0x10, 0x08, 0xff, 0x7b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','e','n','d',0, /* 55505, 0x1008ff7b, KEY_XF86Send, Send mail, file, object */
0x95, 0x48, 0x10, 0x08, 0xff, 0x7c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','p','e','l','l',0, /* 55528, 0x1008ff7c, KEY_XF86Spell, Spell checker */
0x70, 0x6c, 0x10, 0x08, 0xff, 0x7d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','p','l','i','t','S','c','r','e','e','n',0, /* 55557, 0x1008ff7d, KEY_XF86SplitScreen, Split window or screen */
0x57, 0xf4, 0x10, 0x08, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','u','p','p','o','r','t',0, /* 55582, 0x1008ff7e, KEY_XF86Support, Get support (??) */
0xaa, 0x95, 0x10, 0x08, 0xff, 0x7f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','a','s','k','P','a','n','e',0, /* 55608, 0x1008ff7f, KEY_XF86TaskPane, Show tasks */
0xac, 0x7e, 0x10, 0x08, 0xff, 0x80, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','e','r','m','i','n','a','l',0, /* 55634, 0x1008ff80, KEY_XF86Terminal, Launch terminal emulator */
0x95, 0x7f, 0x10, 0x08, 0xff, 0x81, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','o','l','s',0, /* 55657, 0x1008ff81, KEY_XF86Tools, toolbox of desktop/app. */
0x2b, 0x36, 0x10, 0x08, 0xff, 0x82, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','r','a','v','e','l',0, /* 55681, 0x1008ff82, KEY_XF86Travel, ?? */
0x2b, 0x22, 0x10, 0x08, 0xff, 0x84, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','s','e','r','P','B',0, /* 55705, 0x1008ff84, KEY_XF86UserPB, ?? */
0x56, 0x1c, 0x10, 0x08, 0xff, 0x85, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','s','e','r','1','K','B',0, /* 55730, 0x1008ff85, KEY_XF86User1KB, ?? */
0x56, 0x20, 0x10, 0x08, 0xff, 0x86, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','s','e','r','2','K','B',0, /* 55755, 0x1008ff86, KEY_XF86User2KB, ?? */
0x95, 0x31, 0x10, 0x08, 0xff, 0x87, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','V','i','d','e','o',0, /* 55778, 0x1008ff87, KEY_XF86Video, Launch video player */
0x64, 0xcc, 0x10, 0x08, 0xff, 0x88, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','h','e','e','l','B','u','t','t','o','n',0, /* 55807, 0x1008ff88, KEY_XF86WheelButton, button from a mouse wheel */
0xca, 0x9c, 0x10, 0x08, 0xff, 0x89, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','o','r','d',0, /* 55829, 0x1008ff89, KEY_XF86Word, Launch word processor */
0xca, 0x74, 0x10, 0x08, 0xff, 0x8a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','X','f','e','r',0, /* 55851, 0x1008ff8a, KEY_XF86Xfer */
0x2b, 0xdc, 0x10, 0x08, 0xff, 0x8b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','Z','o','o','m','I','n',0, /* 55875, 0x1008ff8b, KEY_XF86ZoomIn, zoom in view, map, etc. */
0x58, 0x52, 0x10, 0x08, 0xff, 0x8c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','Z','o','o','m','O','u','t',0, /* 55900, 0x1008ff8c, KEY_XF86ZoomOut, zoom out view, map, etc. */
0xc9, 0xff, 0x10, 0x08, 0xff, 0x8d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','w','a','y',0, /* 55922, 0x1008ff8d, KEY_XF86Away, mark yourself as away */
0x53, 0x38, 0x10, 0x08, 0xff, 0x8e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','s','s','e','n','g','e','r',0, /* 55949, 0x1008ff8e, KEY_XF86Messenger, as in instant messaging */
0x29, 0xfb, 0x10, 0x08, 0xff, 0x8f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','e','b','C','a','m',0, /* 55973, 0x1008ff8f, KEY_XF86WebCam, Launch web camera app. */
0x32, 0x04, 0x10, 0x08, 0xff, 0x90, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','a','i','l','F','o','r','w','a','r','d',0, /* 56002, 0x1008ff90, KEY_XF86MailForward, Forward in mail */
0xaa, 0x8d, 0x10, 0x08, 0xff, 0x91, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','i','c','t','u','r','e','s',0, /* 56028, 0x1008ff91, KEY_XF86Pictures, Show pictures */
0x95, 0x39, 0x10, 0x08, 0xff, 0x92, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','u','s','i','c',0, /* 56051, 0x1008ff92, KEY_XF86Music, Launch music application */
0x51, 0x71, 0x10, 0x08, 0xff, 0x93, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','a','t','t','e','r','y',0, /* 56076, 0x1008ff93, KEY_XF86Battery, Display battery information */
0x4b, 0xa4, 0x10, 0x08, 0xff, 0x94, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','l','u','e','t','o','o','t','h',0, /* 56103, 0x1008ff94, KEY_XF86Bluetooth, Enable/disable Bluetooth */
0xc9, 0x98, 0x10, 0x08, 0xff, 0x95, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','L','A','N',0, /* 56125, 0x1008ff95, KEY_XF86WLAN, Enable/disable WLAN */
0x64, 0xb4, 0x10, 0x08, 0xff, 0x96, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','W','B',0, /* 56146, 0x1008ff96, KEY_XF86UWB, Enable/disable UWB	 */
0x51, 0x84, 0x10, 0x08, 0xff, 0x97, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','F','o','r','w','a','r','d',0, /* 56176, 0x1008ff97, KEY_XF86AudioForward, fast-forward audio track */
0x29, 0x1a, 0x10, 0x08, 0xff, 0x98, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','e','p','e','a','t',0, /* 56205, 0x1008ff98, KEY_XF86AudioRepeat, toggle repeat mode */
0x93, 0x1b, 0x10, 0x08, 0xff, 0x99, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','a','n','d','o','m','P','l','a','y',0, /* 56238, 0x1008ff99, KEY_XF86AudioRandomPlay, toggle shuffle mode */
0xae, 0x95, 0x10, 0x08, 0xff, 0x9a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','u','b','t','i','t','l','e',0, /* 56264, 0x1008ff9a, KEY_XF86Subtitle, cycle through subtitle */
0x87, 0xa5, 0x10, 0x08, 0xff, 0x9b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','C','y','c','l','e','T','r','a','c','k',0, /* 56297, 0x1008ff9b, KEY_XF86AudioCycleTrack, cycle through audio tracks */
0x9a, 0x79, 0x10, 0x08, 0xff, 0x9c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','y','c','l','e','A','n','g','l','e',0, /* 56325, 0x1008ff9c, KEY_XF86CycleAngle, cycle through angles */
0x4b, 0xf5, 0x10, 0x08, 0xff, 0x9d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','r','a','m','e','B','a','c','k',0, /* 56352, 0x1008ff9d, KEY_XF86FrameBack, video: go one frame back */
0x66, 0x84, 0x10, 0x08, 0xff, 0x9e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','r','a','m','e','F','o','r','w','a','r','d',0, /* 56382, 0x1008ff9e, KEY_XF86FrameForward, video: go one frame forward */
0xca, 0x63, 0x10, 0x08, 0xff, 0x9f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','i','m','e',0, /* 56404, 0x1008ff9f, KEY_XF86Time, display, or shows an entry for time seeking */
0x2a, 0x5e, 0x10, 0x08, 0xff, 0xa0, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','e','l','e','c','t',0, /* 56428, 0x1008ffa0, KEY_XF86Select, Select button on joypads and remotes */
0xca, 0x75, 0x10, 0x08, 0xff, 0xa1, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','V','i','e','w',0, /* 56450, 0x1008ffa1, KEY_XF86View, Show a view options/properties */
0x56, 0x2d, 0x10, 0x08, 0xff, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','p','M','e','n','u',0, /* 56475, 0x1008ffa2, KEY_XF86TopMenu, Go to a top-level menu in a video */
0x64, 0xe6, 0x10, 0x08, 0xff, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','e','d',0, /* 56496, 0x1008ffa3, KEY_XF86Red, Red button */
0x94, 0x8c, 0x10, 0x08, 0xff, 0xa4, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','G','r','e','e','n',0, /* 56519, 0x1008ffa4, KEY_XF86Green, Green button */
0x2b, 0x55, 0x10, 0x08, 0xff, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','Y','e','l','l','o','w',0, /* 56543, 0x1008ffa5, KEY_XF86Yellow, Yellow button */
0xc9, 0xef, 0x10, 0x08, 0xff, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','l','u','e',0, /* 56565, 0x1008ffa6, KEY_XF86Blue, Blue button */
0x57, 0xe4, 0x10, 0x08, 0xff, 0xa7, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','u','s','p','e','n','d',0, /* 56590, 0x1008ffa7, KEY_XF86Suspend, Sleep to RAM */
0x4b, 0x01, 0x10, 0x08, 0xff, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','H','i','b','e','r','n','a','t','e',0, /* 56617, 0x1008ffa8, KEY_XF86Hibernate, Sleep to disk */
0xc5, 0x01, 0x10, 0x08, 0xff, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','u','c','h','p','a','d','T','o','g','g','l','e',0, /* 56649, 0x1008ffa9, KEY_XF86TouchpadToggle, Toggle between touchpad/trackstick */
0xbb, 0xe4, 0x10, 0x08, 0xff, 0xb0, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','u','c','h','p','a','d','O','n',0, /* 56677, 0x1008ffb0, KEY_XF86TouchpadOn, The touchpad got switched on */
0x78, 0x1e, 0x10, 0x08, 0xff, 0xb1, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','u','c','h','p','a','d','O','f','f',0, /* 56706, 0x1008ffb1, KEY_XF86TouchpadOff, The touchpad got switched off */
0x7d, 0x9f, 0x10, 0x08, 0xfe, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','1',0, /* 56735, 0x1008fe01, KEY_XF86Switch_VT_1 */
0x7d, 0xa0, 0x10, 0x08, 0xfe, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','2',0, /* 56764, 0x1008fe02, KEY_XF86Switch_VT_2 */
0x7d, 0xa1, 0x10, 0x08, 0xfe, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','3',0, /* 56793, 0x1008fe03, KEY_XF86Switch_VT_3 */
0x7d, 0xa2, 0x10, 0x08, 0xfe, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','4',0, /* 56822, 0x1008fe04, KEY_XF86Switch_VT_4 */
0x7d, 0xa3, 0x10, 0x08, 0xfe, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','5',0, /* 56851, 0x1008fe05, KEY_XF86Switch_VT_5 */
0x7d, 0xa4, 0x10, 0x08, 0xfe, 0x06, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','6',0, /* 56880, 0x1008fe06, KEY_XF86Switch_VT_6 */
0x7d, 0xa5, 0x10, 0x08, 0xfe, 0x07, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','7',0, /* 56909, 0x1008fe07, KEY_XF86Switch_VT_7 */
0x7d, 0xa6, 0x10, 0x08, 0xfe, 0x08, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','8',0, /* 56938, 0x1008fe08, KEY_XF86Switch_VT_8 */
0x7d, 0xa7, 0x10, 0x08, 0xfe, 0x09, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','9',0, /* 56967, 0x1008fe09, KEY_XF86Switch_VT_9 */
0xfb, 0x6e, 0x10, 0x08, 0xfe, 0x0a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','1','0',0, /* 56997, 0x1008fe0a, KEY_XF86Switch_VT_10 */
0xfb, 0x6f, 0x10, 0x08, 0xfe, 0x0b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','1','1',0, /* 57027, 0x1008fe0b, KEY_XF86Switch_VT_11 */
0xfb, 0x70, 0x10, 0x08, 0xfe, 0x0c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','1','2',0, /* 57057, 0x1008fe0c, KEY_XF86Switch_VT_12 */
0x2b, 0x24, 0x10, 0x08, 0xfe, 0x20, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','n','g','r','a','b',0, /* 57081, 0x1008fe20, KEY_XF86Ungrab, force ungrab */
0x46, 0xa4, 0x10, 0x08, 0xfe, 0x21, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','l','e','a','r','G','r','a','b',0, /* 57108, 0x1008fe21, KEY_XF86ClearGrab, kill application with grab */
0xa8, 0x91, 0x10, 0x08, 0xfe, 0x22, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','N','e','x','t','_','V','M','o','d','e',0, /* 57136, 0x1008fe22, KEY_XF86Next_VMode, next video mode available */
0xb0, 0x91, 0x10, 0x08, 0xfe, 0x23, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','r','e','v','_','V','M','o','d','e',0, /* 57164, 0x1008fe23, KEY_XF86Prev_VMode, prev. video mode available */
0x15, 0xe7, 0x10, 0x08, 0xfe, 0x24, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','o','g','W','i','n','d','o','w','T','r','e','e',0, /* 57195, 0x1008fe24, KEY_XF86LogWindowTree, print window tree to log */
0x3c, 0x7b, 0x10, 0x08, 0xfe, 0x25, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','o','g','G','r','a','b','I','n','f','o',0, /* 57224, 0x1008fe25, KEY_XF86LogGrabInfo, print all active grabs to log */
0xd5, 0xf5, 0x10, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','G','r','a','v','e',0, /* 57249, 0x1005ff00, KEY_SunFA_Grave */
0xab, 0xa3, 0x10, 0x05, 0xff, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','C','i','r','c','u','m',0, /* 57275, 0x1005ff01, KEY_SunFA_Circum */
0xd6, 0x85, 0x10, 0x05, 0xff, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','T','i','l','d','e',0, /* 57300, 0x1005ff02, KEY_SunFA_Tilde */
0xd5, 0x69, 0x10, 0x05, 0xff, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','A','c','u','t','e',0, /* 57325, 0x1005ff03, KEY_SunFA_Acute */
0x5c, 0xb9, 0x10, 0x05, 0xff, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','D','i','a','e','r','e','s','i','s',0, /* 57354, 0x1005ff04, KEY_SunFA_Diaeresis */
0x56, 0x51, 0x10, 0x05, 0xff, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','C','e','d','i','l','l','a',0, /* 57381, 0x1005ff05, KEY_SunFA_Cedilla */
0x36, 0x14, 0x10, 0x05, 0xff, 0x10, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','3','6',0, /* 57401, 0x1005ff10, KEY_SunF36, Labeled F11 */
0x36, 0x15, 0x10, 0x05, 0xff, 0x11, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','3','7',0, /* 57421, 0x1005ff11, KEY_SunF37, Labeled F12 */
0x76, 0x8b, 0x10, 0x05, 0xff, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','S','y','s','_','R','e','q',0, /* 57445, 0x1005ff60, KEY_SunSys_Req */
0xb0, 0xac, 0x00, 0x00, 0xff, 0x61, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','r','i','n','t','_','S','c','r','e','e','n',0, /* 57474, 0xff61, KEY_SunPrint_Screen, Same as XK_Print */
0x71, 0xf7, 0x00, 0x00, 0xff, 0x20, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','C','o','m','p','o','s','e',0, /* 57498, 0xff20, KEY_SunCompose, Same as XK_Multi_key */
0xe0, 0xcc, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','l','t','G','r','a','p','h',0, /* 57523, 0xff7e, KEY_SunAltGraph, Same as XK_Mode_switch */
0xb8, 0xf6, 0x00, 0x00, 0xff, 0x55, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','a','g','e','U','p',0, /* 57546, 0xff55, KEY_SunPageUp, Same as XK_Prior */
0xe4, 0xa8, 0x00, 0x00, 0xff, 0x56, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','a','g','e','D','o','w','n',0, /* 57571, 0xff56, KEY_SunPageDown, Same as XK_Next */
0x6e, 0x57, 0x00, 0x00, 0xff, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','U','n','d','o',0, /* 57592, 0xff65, KEY_SunUndo, Same as XK_Undo */
0xdb, 0x8c, 0x00, 0x00, 0xff, 0x66, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','g','a','i','n',0, /* 57614, 0xff66, KEY_SunAgain, Same as XK_Redo */
0x6d, 0xd4, 0x00, 0x00, 0xff, 0x68, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','i','n','d',0, /* 57635, 0xff68, KEY_SunFind, Same as XK_Find */
0x6e, 0x76, 0x00, 0x00, 0xff, 0x69, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','S','t','o','p',0, /* 57656, 0xff69, KEY_SunStop, Same as XK_Cancel */
0xdd, 0x1f, 0x10, 0x05, 0xff, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','r','o','p','s',0, /* 57678, 0x1005ff70, KEY_SunProps */
0xdc, 0x7c, 0x10, 0x05, 0xff, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','r','o','n','t',0, /* 57700, 0x1005ff71, KEY_SunFront */
0x6d, 0xed, 0x10, 0x05, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','C','o','p','y',0, /* 57721, 0x1005ff72, KEY_SunCopy */
0x6e, 0x30, 0x10, 0x05, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','O','p','e','n',0, /* 57742, 0x1005ff73, KEY_SunOpen */
0xdc, 0xa1, 0x10, 0x05, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','a','s','t','e',0, /* 57764, 0x1005ff74, KEY_SunPaste */
0x36, 0xca, 0x10, 0x05, 0xff, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','C','u','t',0, /* 57784, 0x1005ff75, KEY_SunCut */
0x5c, 0x16, 0x10, 0x05, 0xff, 0x76, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','o','w','e','r','S','w','i','t','c','h',0, /* 57812, 0x1005ff76, KEY_SunPowerSwitch */
0x34, 0x23, 0x10, 0x05, 0xff, 0x77, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','u','d','i','o','L','o','w','e','r','V','o','l','u','m','e',0, /* 57845, 0x1005ff77, KEY_SunAudioLowerVolume */
0xc6, 0x19, 0x10, 0x05, 0xff, 0x78, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','u','d','i','o','M','u','t','e',0, /* 57871, 0x1005ff78, KEY_SunAudioMute */
0x25, 0xe3, 0x10, 0x05, 0xff, 0x79, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','u','d','i','o','R','a','i','s','e','V','o','l','u','m','e',0, /* 57904, 0x1005ff79, KEY_SunAudioRaiseVolume */
0xa2, 0xc5, 0x10, 0x05, 0xff, 0x7a, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','V','i','d','e','o','D','e','g','a','u','s','s',0, /* 57933, 0x1005ff7a, KEY_SunVideoDegauss */
0x1e, 0xdd, 0x10, 0x05, 0xff, 0x7b, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','V','i','d','e','o','L','o','w','e','r','B','r','i','g','h','t','n','e','s','s',0, /* 57970, 0x1005ff7b, KEY_SunVideoLowerBrightness */
0x3a, 0xdd, 0x10, 0x05, 0xff, 0x7c, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','V','i','d','e','o','R','a','i','s','e','B','r','i','g','h','t','n','e','s','s',0, /* 58007, 0x1005ff7c, KEY_SunVideoRaiseBrightness */
0x8e, 0x14, 0x10, 0x05, 0xff, 0x7d, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','o','w','e','r','S','w','i','t','c','h','S','h','i','f','t',0, /* 58040, 0x1005ff7d, KEY_SunPowerSwitchShift */
0x5b, 0x8c, 0x10, 0x00, 0xfe, 0xb0, 0x00, 0x00, 0x00, 'K','E','Y','_','D','r','i','n','g','_','a','c','c','e','n','t',0, /* 58066, 0x1000feb0, KEY_Dring_accent */
0x59, 0x0c, 0x10, 0x00, 0xfe, 0x5e, 0x00, 0x00, 0x00, 'K','E','Y','_','D','c','i','r','c','u','m','f','l','e','x','_','a','c','c','e','n','t',0, /* 58098, 0x1000fe5e, KEY_Dcircumflex_accent */
0x98, 0x8c, 0x10, 0x00, 0xfe, 0x2c, 0x00, 0x00, 0x00, 'K','E','Y','_','D','c','e','d','i','l','l','a','_','a','c','c','e','n','t',0, /* 58127, 0x1000fe2c, KEY_Dcedilla_accent */
0x34, 0x8c, 0x10, 0x00, 0xfe, 0x27, 0x00, 0x00, 0x00, 'K','E','Y','_','D','a','c','u','t','e','_','a','c','c','e','n','t',0, /* 58154, 0x1000fe27, KEY_Dacute_accent */
0x7a, 0x8c, 0x10, 0x00, 0xfe, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','D','g','r','a','v','e','_','a','c','c','e','n','t',0, /* 58181, 0x1000fe60, KEY_Dgrave_accent */
0x35, 0x25, 0x10, 0x00, 0xfe, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','D','t','i','l','d','e',0, /* 58201, 0x1000fe7e, KEY_Dtilde */
0x46, 0xb9, 0x10, 0x00, 0xfe, 0x22, 0x00, 0x00, 0x00, 'K','E','Y','_','D','d','i','a','e','r','e','s','i','s',0, /* 58225, 0x1000fe22, KEY_Ddiaeresis */
0x66, 0x85, 0x10, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 'K','E','Y','_','D','R','e','m','o','v','e',0, /* 58246, 0x1000ff00, KEY_DRemove, Remove */
0x12, 0xc5, 0x10, 0x00, 0xff, 0x6f, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','C','l','e','a','r','L','i','n','e',0, /* 58271, 0x1000ff6f, KEY_hpClearLine */
0x3d, 0x85, 0x10, 0x00, 0xff, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','I','n','s','e','r','t','L','i','n','e',0, /* 58297, 0x1000ff70, KEY_hpInsertLine */
0x26, 0x55, 0x10, 0x00, 0xff, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','D','e','l','e','t','e','L','i','n','e',0, /* 58323, 0x1000ff71, KEY_hpDeleteLine */
0x3d, 0x2c, 0x10, 0x00, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','I','n','s','e','r','t','C','h','a','r',0, /* 58349, 0x1000ff72, KEY_hpInsertChar */
0x25, 0xfc, 0x10, 0x00, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','D','e','l','e','t','e','C','h','a','r',0, /* 58375, 0x1000ff73, KEY_hpDeleteChar */
0xc2, 0x9c, 0x10, 0x00, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','B','a','c','k','T','a','b',0, /* 58398, 0x1000ff74, KEY_hpBackTab */
0x0e, 0x1c, 0x10, 0x00, 0xff, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','K','P','_','B','a','c','k','T','a','b',0, /* 58424, 0x1000ff75, KEY_hpKP_BackTab */
0x1e, 0xeb, 0x10, 0x00, 0xff, 0x48, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','M','o','d','e','l','o','c','k','1',0, /* 58449, 0x1000ff48, KEY_hpModelock1 */
0x1e, 0xec, 0x10, 0x00, 0xff, 0x49, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','M','o','d','e','l','o','c','k','2',0, /* 58474, 0x1000ff49, KEY_hpModelock2 */
0x71, 0xd2, 0x10, 0x00, 0xff, 0x6c, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','R','e','s','e','t',0, /* 58495, 0x1000ff6c, KEY_hpReset */
0xe5, 0x8f, 0x10, 0x00, 0xff, 0x6d, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','S','y','s','t','e','m',0, /* 58517, 0x1000ff6d, KEY_hpSystem */
0x38, 0xf0, 0x10, 0x00, 0xff, 0x6e, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','U','s','e','r',0, /* 58537, 0x1000ff6e, KEY_hpUser */
0x8a, 0x69, 0x10, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','a','c','u','t','e',0, /* 58563, 0x100000a8, KEY_hpmute_acute */
0x8a, 0xf5, 0x10, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','g','r','a','v','e',0, /* 58589, 0x100000a9, KEY_hpmute_grave */
0xbd, 0x23, 0x10, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','a','s','c','i','i','c','i','r','c','u','m',0, /* 58621, 0x100000aa, KEY_hpmute_asciicircum */
0xac, 0xb9, 0x10, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','d','i','a','e','r','e','s','i','s',0, /* 58651, 0x100000ab, KEY_hpmute_diaeresis */
0x5f, 0x45, 0x10, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','a','s','c','i','i','t','i','l','d','e',0, /* 58682, 0x100000ac, KEY_hpmute_asciitilde */
0x39, 0x89, 0x10, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','l','i','r','a',0, /* 58702, 0x100000af, KEY_hplira */
0xcf, 0x1c, 0x10, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','g','u','i','l','d','e','r',0, /* 58725, 0x100000be, KEY_hpguilder */
0x4c, 0xb9, 0x10, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','Y','d','i','a','e','r','e','s','i','s',0, /* 58751, 0x100000ee, KEY_hpYdiaeresis */
0x4d, 0xb1, 0x10, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','I','O',0, /* 58769, 0x100000ee, KEY_hpIO */
0x41, 0x0d, 0x10, 0x00, 0x00, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','l','o','n','g','m','i','n','u','s',0, /* 58794, 0x100000f6, KEY_hplongminus */
0x72, 0xed, 0x10, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','b','l','o','c','k',0, /* 58815, 0x100000fc, KEY_hpblock */
0x74, 0x2d, 0x10, 0x04, 0xff, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','C','o','p','y',0, /* 58836, 0x1004ff02, KEY_osfCopy */
0x39, 0xea, 0x10, 0x04, 0xff, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','C','u','t',0, /* 58856, 0x1004ff03, KEY_osfCut */
0xe9, 0x21, 0x10, 0x04, 0xff, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','s','t','e',0, /* 58878, 0x1004ff04, KEY_osfPaste */
0xa0, 0x9c, 0x10, 0x04, 0xff, 0x07, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','B','a','c','k','T','a','b',0, /* 58902, 0x1004ff07, KEY_osfBackTab */
0x83, 0xff, 0x10, 0x04, 0xff, 0x08, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','B','a','c','k','S','p','a','c','e',0, /* 58928, 0x1004ff08, KEY_osfBackSpace */
0xe8, 0x58, 0x10, 0x04, 0xff, 0x0b, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','C','l','e','a','r',0, /* 58950, 0x1004ff0b, KEY_osfClear */
0xd1, 0xb1, 0x10, 0x04, 0xff, 0x1b, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','E','s','c','a','p','e',0, /* 58973, 0x1004ff1b, KEY_osfEscape */
0xa0, 0x51, 0x10, 0x04, 0xff, 0x31, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','A','d','d','M','o','d','e',0, /* 58997, 0x1004ff31, KEY_osfAddMode */
0xee, 0x41, 0x10, 0x04, 0xff, 0x32, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','r','i','m','a','r','y','P','a','s','t','e',0, /* 59026, 0x1004ff32, KEY_osfPrimaryPaste */
0x3c, 0xc1, 0x10, 0x04, 0xff, 0x33, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','Q','u','i','c','k','P','a','s','t','e',0, /* 59053, 0x1004ff33, KEY_osfQuickPaste */
0x48, 0xa4, 0x10, 0x04, 0xff, 0x40, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','g','e','L','e','f','t',0, /* 59078, 0x1004ff40, KEY_osfPageLeft */
0xd1, 0xf6, 0x10, 0x04, 0xff, 0x41, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','g','e','U','p',0, /* 59101, 0x1004ff41, KEY_osfPageUp */
0x48, 0xa8, 0x10, 0x04, 0xff, 0x42, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','g','e','D','o','w','n',0, /* 59126, 0x1004ff42, KEY_osfPageDown */
0x92, 0x28, 0x10, 0x04, 0xff, 0x43, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','g','e','R','i','g','h','t',0, /* 59152, 0x1004ff43, KEY_osfPageRight */
0x44, 0xd1, 0x10, 0x04, 0xff, 0x44, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','A','c','t','i','v','a','t','e',0, /* 59177, 0x1004ff44, KEY_osfActivate */
0xa4, 0xa4, 0x10, 0x04, 0xff, 0x45, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','M','e','n','u','B','a','r',0, /* 59201, 0x1004ff45, KEY_osfMenuBar */
0x74, 0x34, 0x10, 0x04, 0xff, 0x51, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','L','e','f','t',0, /* 59222, 0x1004ff51, KEY_osfLeft */
0x9c, 0xda, 0x10, 0x04, 0xff, 0x52, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','U','p',0, /* 59241, 0x1004ff52, KEY_osfUp */
0xe9, 0x48, 0x10, 0x04, 0xff, 0x53, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','R','i','g','h','t',0, /* 59263, 0x1004ff53, KEY_osfRight */
0x74, 0x38, 0x10, 0x04, 0xff, 0x54, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','D','o','w','n',0, /* 59284, 0x1004ff54, KEY_osfDown */
0xa2, 0x85, 0x10, 0x04, 0xff, 0x57, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','E','n','d','L','i','n','e',0, /* 59308, 0x1004ff57, KEY_osfEndLine */
0x87, 0x85, 0x10, 0x04, 0xff, 0x58, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','B','e','g','i','n','L','i','n','e',0, /* 59334, 0x1004ff58, KEY_osfBeginLine */
0xa2, 0x2d, 0x10, 0x04, 0xff, 0x59, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','E','n','d','D','a','t','a',0, /* 59358, 0x1004ff59, KEY_osfEndData */
0x87, 0x2d, 0x10, 0x04, 0xff, 0x5a, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','B','e','g','i','n','D','a','t','a',0, /* 59384, 0x1004ff5a, KEY_osfBeginData */
0x4d, 0xcd, 0x10, 0x04, 0xff, 0x5b, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','r','e','v','M','e','n','u',0, /* 59409, 0x1004ff5b, KEY_osfPrevMenu */
0x4b, 0xcd, 0x10, 0x04, 0xff, 0x5c, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','N','e','x','t','M','e','n','u',0, /* 59434, 0x1004ff5c, KEY_osfNextMenu */
0x9b, 0x78, 0x10, 0x04, 0xff, 0x5d, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','r','e','v','F','i','e','l','d',0, /* 59460, 0x1004ff5d, KEY_osfPrevField */
0x97, 0x78, 0x10, 0x04, 0xff, 0x5e, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','N','e','x','t','F','i','e','l','d',0, /* 59486, 0x1004ff5e, KEY_osfNextField */
0xd2, 0xde, 0x10, 0x04, 0xff, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','S','e','l','e','c','t',0, /* 59509, 0x1004ff60, KEY_osfSelect */
0xd2, 0x84, 0x10, 0x04, 0xff, 0x63, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','I','n','s','e','r','t',0, /* 59532, 0x1004ff63, KEY_osfInsert */
0x74, 0x97, 0x10, 0x04, 0xff, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','U','n','d','o',0, /* 59553, 0x1004ff65, KEY_osfUndo */
0x74, 0x4d, 0x10, 0x04, 0xff, 0x67, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','M','e','n','u',0, /* 59574, 0x1004ff67, KEY_osfMenu */
0xd0, 0xa2, 0x10, 0x04, 0xff, 0x69, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','C','a','n','c','e','l',0, /* 59597, 0x1004ff69, KEY_osfCancel */
0x74, 0x1c, 0x10, 0x04, 0xff, 0x6a, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','H','e','l','p',0, /* 59618, 0x1004ff6a, KEY_osfHelp */
0x99, 0x38, 0x10, 0x04, 0xff, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','S','e','l','e','c','t','A','l','l',0, /* 59644, 0x1004ff71, KEY_osfSelectAll */
0x33, 0x38, 0x10, 0x04, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','D','e','s','e','l','e','c','t','A','l','l',0, /* 59672, 0x1004ff72, KEY_osfDeselectAll */
0x4d, 0x1e, 0x10, 0x04, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','R','e','s','e','l','e','c','t',0, /* 59697, 0x1004ff73, KEY_osfReselect */
0xd2, 0x94, 0x10, 0x04, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','E','x','t','e','n','d',0, /* 59720, 0x1004ff74, KEY_osfExtend */
0xa6, 0xf5, 0x10, 0x04, 0xff, 0x78, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','R','e','s','t','o','r','e',0, /* 59744, 0x1004ff78, KEY_osfRestore */
0xd1, 0x11, 0x10, 0x04, 0xff, 0xff, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','D','e','l','e','t','e',0, /* 59767, 0x1004ffff, KEY_osfDelete */
0x9a, 0xf2, 0x10, 0x00, 0xff, 0x6c, 0x00, 0x00, 0x00, 'K','E','Y','_','R','e','s','e','t',0, /* 59786, 0x1000ff6c, KEY_Reset */
0x37, 0xcf, 0x10, 0x00, 0xff, 0x6d, 0x00, 0x00, 0x00, 'K','E','Y','_','S','y','s','t','e','m',0, /* 59806, 0x1000ff6d, KEY_System */
0x4d, 0x80, 0x10, 0x00, 0xff, 0x6e, 0x00, 0x00, 0x00, 'K','E','Y','_','U','s','e','r',0, /* 59824, 0x1000ff6e, KEY_User */
0xa4, 0xc5, 0x10, 0x00, 0xff, 0x6f, 0x00, 0x00, 0x00, 'K','E','Y','_','C','l','e','a','r','L','i','n','e',0, /* 59847, 0x1000ff6f, KEY_ClearLine */
0x61, 0x85, 0x10, 0x00, 0xff, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','I','n','s','e','r','t','L','i','n','e',0, /* 59871, 0x1000ff70, KEY_InsertLine */
0x4a, 0x55, 0x10, 0x00, 0xff, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','D','e','l','e','t','e','L','i','n','e',0, /* 59895, 0x1000ff71, KEY_DeleteLine */
0x61, 0x2c, 0x10, 0x00, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','I','n','s','e','r','t','C','h','a','r',0, /* 59919, 0x1000ff72, KEY_InsertChar */
0x49, 0xfc, 0x10, 0x00, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','D','e','l','e','t','e','C','h','a','r',0, /* 59943, 0x1000ff73, KEY_DeleteChar */
0x67, 0x1c, 0x10, 0x00, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','B','a','c','k','T','a','b',0, /* 59964, 0x1000ff74, KEY_BackTab */
0x32, 0x1c, 0x10, 0x00, 0xff, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','B','a','c','k','T','a','b',0, /* 59988, 0x1000ff75, KEY_KP_BackTab */
0x4f, 0x42, 0x10, 0x00, 0xff, 0x76, 0x00, 0x00, 0x00, 'K','E','Y','_','E','x','t','1','6','b','i','t','_','L',0, /* 60012, 0x1000ff76, KEY_Ext16bit_L */
0x4f, 0x48, 0x10, 0x00, 0xff, 0x77, 0x00, 0x00, 0x00, 'K','E','Y','_','E','x','t','1','6','b','i','t','_','R',0, /* 60036, 0x1000ff77, KEY_Ext16bit_R */
0xae, 0x69, 0x10, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','a','c','u','t','e',0, /* 60060, 0x100000a8, KEY_mute_acute */
0xae, 0xf5, 0x10, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','g','r','a','v','e',0, /* 60084, 0x100000a9, KEY_mute_grave */
0xbd, 0x23, 0x10, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','a','s','c','i','i','c','i','r','c','u','m',0, /* 60114, 0x100000aa, KEY_mute_asciicircum */
0xec, 0xb9, 0x10, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','d','i','a','e','r','e','s','i','s',0, /* 60142, 0x100000ab, KEY_mute_diaeresis */
0xdf, 0x45, 0x10, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','a','s','c','i','i','t','i','l','d','e',0, /* 60171, 0x100000ac, KEY_mute_asciitilde */
0x4e, 0x19, 0x10, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','l','i','r','a',0, /* 60189, 0x100000af, KEY_lira */
0x73, 0x9c, 0x10, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','g','u','i','l','d','e','r',0, /* 60210, 0x100000be, KEY_guilder */
0x12, 0xd5, 0x10, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','I','O',0, /* 60226, 0x100000ee, KEY_IO */
0xd3, 0x0d, 0x10, 0x00, 0x00, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','l','o','n','g','m','i','n','u','s',0, /* 60249, 0x100000f6, KEY_longminus */
0x9c, 0x0d, 0x10, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 'K','E','Y','_','b','l','o','c','k',0 /* 60268, 0x100000fc, KEY_block */
};


/*
 *  KeySymbolName to object index.
 */
#define KTABLESIZE 3667
#define KMAXHASH 13

static const unsigned short hashString[KTABLESIZE] = {
	0x369e, /*  631, 0x3bc, U+0167, KEY_tslash, LATIN SMALL LETTER T WITH STROKE */
	0xc64c, /* 2011, 0x10028fc, U+28fc, KEY_braille_dots_345678, BRAILLE PATTERN DOTS-345678 */
	0x0000,
	0xa7b8, /* 1758, 0xfffa, KEY_braille_dot_10 */
	0x0000,
	0x0000,
	0x0000,
	0x9fb3, /* 1673, 0x1001edd, U+1edd, KEY_ohorngrave, LATIN SMALL LETTER O WITH HORN AND GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0xc5c8, /* 2007, 0x10028f8, U+28f8, KEY_braille_dots_45678, BRAILLE PATTERN DOTS-45678 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x617f, /* 1063, 0x8a6, KEY_vertconnector, (U+2502 BOX DRAWINGS LIGHT VERTICAL) */
	0x0000,
	0x0000,
	0x3ab8, /*  679, 0x1001ef3, U+1ef3, KEY_ygrave, LATIN SMALL LETTER Y WITH GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc7fa, /* 2029, 0x1000d91, U+0d91, KEY_Sinh_e, SINHALA EYANNA */
	0x0000,
	0x0000,
	0x49b7, /*  840, 0x10006cc, U+06cc, KEY_Arabic_farsi_yeh, ARABIC LETTER FARSI YEH */
	0xa57e, /* 1735, 0x1002205, U+2205, KEY_emptyset, NULL SET */
	0x0000,
	0x0000,
	0x0000,
	0x5b32, /* 1000, 0x7b6, U+0390, KEY_Greek_iotaaccentdieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
	0x6a53, /* 1155, 0xabd, KEY_decimalpoint, (U+002E FULL STOP) */
	0x6d38, /* 1182, 0xade, KEY_emfilledcircle, (U+25CF BLACK CIRCLE) */
	0x3855, /*  652, 0x3fd, U+0169, KEY_utilde, LATIN SMALL LETTER U WITH TILDE */
	0x0000,
	0x0000,
	0x9191, /* 1531, 0x100057b, U+057b, KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */
	0x718a, /* 1226, 0xbce, U+22a5, KEY_uptack, UP TACK */
	0xdd0e, /* 2249, 0x1008ffa8, KEY_XF86Hibernate, Sleep to disk */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd882, /* 2203, 0x1008ff79, KEY_XF86ScrollDown, Scrool window/contentd down */
	0x0000,
	0xcd9c, /* 2095, 0x1008ff01, KEY_XF86ModeLock, Mode Switch Lock */
	0x0000,
	0x3840, /*  651, 0x3f9, U+0173, KEY_uogonek, LATIN SMALL LETTER U WITH OGONEK */
	0xe359, /* 2309, 0x1000fe22, KEY_Ddiaeresis */
	0x399a, /*  666, 0x1001e56, U+1e56, KEY_Pabovedot, LATIN CAPITAL LETTER P WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x65cd, /* 1104, 0x8fc, U+2191, KEY_uparrow, UPWARDS ARROW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4523, /*  795, 0x5cc, U+062c, KEY_Arabic_jeem, ARABIC LETTER JEEM */
	0x62c7, /* 1074, 0x8b1, KEY_topleftsummation */
	0x0000,
	0x0000,
	0x6cc1, /* 1178, 0xada, KEY_hexagram */
	0x0000,
	0x0000,
	0x0000,
	0xcf88, /* 2112, 0x1008ff1b, KEY_XF86Search, Search */
	0x0000,
	0x0000,
	0x0000,
	0x6855, /* 1133, 0xaa3, U+2004, KEY_em3space, THREE-PER-EM SPACE */
	0x0000,
	0x585e, /*  976, 0x6f9, U+042b, KEY_Cyrillic_YERU, CYRILLIC CAPITAL LETTER YERU */
	0x1904, /*  276, 0xfee0, KEY_Pointer_Left */
	0x34d6, /*  610, 0x2dd, U+016c, KEY_Ubreve, LATIN CAPITAL LETTER U WITH BREVE */
	0xd89e, /* 2204, 0x1008ff7a, KEY_XF86ScrollClick, Use XKB mousekeys instead */
	0x0000,
	0x1951, /*  279, 0xfee3, KEY_Pointer_Down */
	0x75c6, /* 1269, 0xcf8, U+05e8, KEY_hebrew_resh, HEBREW LETTER RESH */
	0x0000,
	0x182a, /*  269, 0xfe74, KEY_BounceKeys_Enable */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7bee, /* 1331, 0xdda, U+0e3a, KEY_Thai_phinthu, THAI CHARACTER PHINTHU */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x837e, /* 1400, 0xebb, KEY_Hangul_Khieuq */
	0x0000,
	0xe47f, /* 2321, 0x1000ff6d, KEY_hpSystem */
	0x8ad3, /* 1466, 0x1000589, U+0589, KEY_Armenian_full_stop, ARMENIAN FULL STOP */
	0x0000,
	0x0000,
	0x4421, /*  786, 0x5c3, U+0623, KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */
	0x9de7, /* 1656, 0x1001ecc, U+1ecc, KEY_Obelowdot, LATIN CAPITAL LETTER O WITH DOT BELOW */
	0x0000,
	0x0000,
	0x6698, /* 1114, 0x9e8, U+2424, KEY_nl, SYMBOL FOR NEWLINE */
	0x0000,
	0x0000,
	0x0000,
	0x20d0, /*  353, 0x2a, U+002a, KEY_asterisk, ASTERISK */
	0x29da, /*  478, 0xc7, U+00c7, KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */
	0x4817, /*  825, 0x5ee, U+064e, KEY_Arabic_fatha, ARABIC FATHA */
	0x0000,
	0x3fba, /*  738, 0x4d2, U+30e1, KEY_kana_ME, KATAKANA LETTER ME */
	0x7126, /* 1221, 0xbc3, KEY_upshoe, (U+2229 INTERSECTION) */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4679, /*  809, 0x5da, U+063a, KEY_Arabic_ghain, ARABIC LETTER GHAIN */
	0x1c37, /*  304, 0xfefb, KEY_Pointer_DfltBtnNext */
	0x4831, /*  826, 0x5ef, U+064f, KEY_Arabic_damma, ARABIC DAMMA */
	0x3f90, /*  736, 0x4d0, U+30df, KEY_kana_MI, KATAKANA LETTER MI */
	0x47dd, /*  823, 0x5ec, U+064c, KEY_Arabic_dammatan, ARABIC DAMMATAN */
	0x0000,
	0x0000,
	0x2435, /*  405, 0x5e, U+005e, KEY_asciicircum, CIRCUMFLEX ACCENT */
	0x0000,
	0x3f3c, /*  732, 0x4cc, KEY_kana_HU, deprecated */
	0x1b70, /*  297, 0xfef5, KEY_Pointer_Drag1 */
	0x1b8b, /*  298, 0xfef6, KEY_Pointer_Drag2 */
	0x1ba6, /*  299, 0xfef7, KEY_Pointer_Drag3 */
	0x1bc1, /*  300, 0xfef8, KEY_Pointer_Drag4 */
	0x1bdc, /*  301, 0xfefd, KEY_Pointer_Drag5 */
	0x0000,
	0x2b2d, /*  494, 0xd6, U+00d6, KEY_Odiaeresis, LATIN CAPITAL LETTER O WITH DIAERESIS */
	0x0000,
	0x3983, /*  665, 0x1001e41, U+1e41, KEY_mabovedot, LATIN SMALL LETTER M WITH DOT ABOVE */
	0xd7e3, /* 2197, 0x1008ff73, KEY_XF86Reload, Reload web page, file, etc. */
	0x11a8, /*  208, 0xfe31, KEY_ISO_Discontinuous_Underline */
	0x4062, /*  746, 0x4da, U+30ec, KEY_kana_RE, KATAKANA LETTER RE */
	0x0000,
	0xcd0f, /* 2089, 0x1000ddd, U+0ddd, KEY_Sinh_oo2, SINHALA KOMBUVA HAA DIGA AELA-PILLA */
	0x0000,
	0x0000,
	0xdc20, /* 2239, 0x1008ff9e, KEY_XF86FrameForward, video: go one frame forward */
	0x3ee8, /*  728, 0x4c9, U+30ce, KEY_kana_NO, KATAKANA LETTER NO */
	0x0000,
	0x223f, /*  374, 0x3f, U+003f, KEY_question, QUESTION MARK */
	0xe4dd, /* 2325, 0x100000aa, KEY_hpmute_asciicircum */
	0x0000,
	0x0000,
	0x1c58, /*  305, 0xfefc, KEY_Pointer_DfltBtnPrev */
	0x0fba, /*  194, 0xfe23, KEY_ISO_Partial_Line_Up */
	0x4294, /*  770, 0x5ac, U+060c, KEY_Arabic_comma, ARABIC COMMA */
	0x0000,
	0x9f29, /* 1668, 0x1001ed8, U+1ed8, KEY_Ocircumflexbelowdot, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x1379, /*  225, 0xfe5c, KEY_dead_ogonek */
	0xa20f, /* 1699, 0x1001ef9, U+1ef9, KEY_ytilde, LATIN SMALL LETTER Y WITH TILDE */
	0x77e3, /* 1290, 0xdb1, U+0e11, KEY_Thai_thonangmontho, THAI CHARACTER THO NANGMONTHO */
	0x0000,
	0xdc54, /* 2241, 0x1008ffa0, KEY_XF86Select, Select button on joypads and remotes */
	0x289c, /*  464, 0xb9, U+00b9, KEY_onesuperior, SUPERSCRIPT ONE */
	0x0000,
	0x0000,
	0x0000,
	0x36d4, /*  634, 0x3c0, U+0100, KEY_Amacron, LATIN CAPITAL LETTER A WITH MACRON */
	0x0000,
	0x15d1, /*  246, 0xfe6f, KEY_dead_currency */
	0x0000,
	0x1d45, /*  316, 0xfd05, KEY_3270_BackTab */
	0xa7ef, /* 1760, 0x1002801, U+2801, KEY_braille_dots_1, BRAILLE PATTERN DOTS-1 */
	0x492a, /*  835, 0x10006a9, U+06a9, KEY_Arabic_keheh, ARABIC LETTER KEHEH */
	0xa844, /* 1763, 0x1002804, U+2804, KEY_braille_dots_3, BRAILLE PATTERN DOTS-3 */
	0xa8b8, /* 1767, 0x1002808, U+2808, KEY_braille_dots_4, BRAILLE PATTERN DOTS-4 */
	0xa9a4, /* 1775, 0x1002810, U+2810, KEY_braille_dots_5, BRAILLE PATTERN DOTS-5 */
	0x330c, /*  590, 0x1f5, U+0151, KEY_odoubleacute, LATIN SMALL LETTER O WITH DOUBLE ACUTE */
	0xaf54, /* 1823, 0x1002840, U+2840, KEY_braille_dots_7, BRAILLE PATTERN DOTS-7 */
	0xb714, /* 1887, 0x1002880, U+2880, KEY_braille_dots_8, BRAILLE PATTERN DOTS-8 */
	0x0000,
	0xa560, /* 1734, 0x1002202, U+2202, KEY_partdifferential, PARTIAL DIFFERENTIAL */
	0x9aa7, /* 1624, 0x1001eac, U+1eac, KEY_Acircumflexbelowdot, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcfef, /* 2116, 0x1008ff1f, KEY_XF86ToDoList, Invoke To Do List program */
	0x9b02, /* 1627, 0x1001eaf, U+1eaf, KEY_abreveacute, LATIN SMALL LETTER A WITH BREVE AND ACUTE */
	0xe99e, /* 2376, 0x1000ff6e, KEY_User */
	0x0000,
	0x0000,
	0x3dc0, /*  714, 0x4bd, U+30b9, KEY_kana_SU, KATAKANA LETTER SU */
	0x0000,
	0x0ee6, /*  187, 0xfe0c, KEY_ISO_First_Group */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd6fd, /* 2187, 0x1008ff67, KEY_XF86MySites, Favourites */
	0xdfd4, /* 2274, 0x1005ff03, KEY_SunFA_Acute */
	0x484b, /*  827, 0x5f0, U+0650, KEY_Arabic_kasra, ARABIC KASRA */
	0x0000,
	0x0000,
	0x2071, /*  349, 0x27, U+0027, KEY_apostrophe, APOSTROPHE */
	0x0000,
	0x10fb, /*  203, 0xfe2c, KEY_ISO_Fast_Cursor_Left */
	0xd129, /* 2128, 0x1008ff2b, KEY_XF86WakeUp, Wake up system from sleep */
	0xe729, /* 2349, 0x1004ff45, KEY_osfMenuBar */
	0x0000,
	0x1160, /*  206, 0xfe2f, KEY_ISO_Fast_Cursor_Down */
	0xa2e3, /* 1709, 0x10020a5, U+20a5, KEY_MillSign, MILL SIGN */
	0xa354, /* 1714, 0x10020aa, U+20aa, KEY_NewSheqelSign, NEW SHEQEL SIGN */
	0xcc4d, /* 2080, 0x1000dd2, U+0dd2, KEY_Sinh_i2, SINHALA IS-PILLA */
	0x470f, /*  815, 0x5e5, U+0645, KEY_Arabic_meem, ARABIC LETTER MEEM */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x638f, /* 1080, 0x8b7, KEY_rightmiddlesummation */
	0xdcf5, /* 2248, 0x1008ffa7, KEY_XF86Suspend, Sleep to RAM */
	0x0000,
	0x0000,
	0xd741, /* 2190, 0x1008ff6a, KEY_XF86OfficeHome, Office home (old Staroffice) */
	0x0000,
	0x0000,
	0x7fe1, /* 1369, 0xff3c, KEY_Hangul_SingleCandidate, Single candidate */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd023, /* 2118, 0x1008ff21, KEY_XF86PowerDown, Deep sleep the system */
	0x0000,
	0x0000,
	0xdf88, /* 2271, 0x1005ff00, KEY_SunFA_Grave */
	0x0000,
	0x0000,
	0x0000,
	0xa26f, /* 1704, 0x10020a0, U+20a0, KEY_EcuSign, EURO-CURRENCY SIGN */
	0x6d16, /* 1181, 0xadd, KEY_filledrighttribullet, (U+25B6 BLACK RIGHT-POINTING TRIANGLE) */
	0xd507, /* 2166, 0x1008ff51, KEY_XF86ApplicationRight, switch to application, right */
	0xe5aa, /* 2333, 0x100000fc, KEY_hpblock */
	0x0000,
	0x9d72, /* 1651, 0x1001ec7, U+1ec7, KEY_ecircumflexbelowdot, LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x0000,
	0x26b2, /*  442, 0xa3, U+00a3, KEY_sterling, POUND SIGN */
	0x7968, /* 1305, 0xdc0, U+0e20, KEY_Thai_phosamphao, THAI CHARACTER PHO SAMPHAO */
	0x0000,
	0x0000,
	0xa4bd, /* 1728, 0x1002084, U+2084, KEY_foursubscript, SUBSCRIPT FOUR */
	0x0000,
	0xd4e6, /* 2165, 0x1008ff50, KEY_XF86ApplicationLeft, switch to application, left */
	0x0000,
	0x0000,
	0x0000,
	0x87e1, /* 1442, 0xee5, KEY_Hangul_J_PieubSios */
	0xe6ad, /* 2344, 0x1004ff40, KEY_osfPageLeft */
	0x0000,
	0x0000,
	0x38e2, /*  658, 0x1001e02, U+1e02, KEY_Babovedot, LATIN CAPITAL LETTER B WITH DOT ABOVE */
	0xe6dd, /* 2346, 0x1004ff42, KEY_osfPageDown */
	0xe3b9, /* 2313, 0x1000ff71, KEY_hpDeleteLine */
	0x0000,
	0x0000,
	0x932f, /* 1547, 0x1000583, U+0583, KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */
	0x0000,
	0x6624, /* 1108, 0x9e0, U+25c6, KEY_soliddiamond, BLACK DIAMOND */
	0xa12a, /* 1689, 0x1001eed, U+1eed, KEY_uhornhook, LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
	0x0000,
	0xa529, /* 1732, 0x1002088, U+2088, KEY_eightsubscript, SUBSCRIPT EIGHT */
	0xe4fd, /* 2326, 0x100000ab, KEY_hpmute_diaeresis */
	0x6c2d, /* 1172, 0xad3, U+201d, KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */
	0x0000,
	0x994e, /* 1611, 0x1001e37, U+1e37, KEY_lbelowdot, LATIN SMALL LETTER L WITH DOT BELOW */
	0x06e3, /*   82, 0xffaa, KEY_KP_Multiply */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcc36, /* 2079, 0x1000dd1, U+0dd1, KEY_Sinh_aee2, SINHALA DIGA AEDA-PILLA */
	0xc9d4, /* 2051, 0x1000daa, U+0daa, KEY_Sinh_ddha, SINHALA MAHA. DDAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6fc8, /* 1207, 0xaf8, U+2640, KEY_femalesymbol, FEMALE SIGN */
	0x1e36, /*  326, 0xfd0f, KEY_3270_CursorBlink */
	0x0000,
	0x0000,
	0x0000,
	0x71b2, /* 1228, 0xbd3, U+2308, KEY_upstile, LEFT CEILING */
	0x0000,
	0x0000,
	0x45b5, /*  801, 0x5d2, U+0632, KEY_Arabic_zain, ARABIC LETTER ZAIN */
	0x28cc, /*  466, 0xbb, U+00bb, KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x525a, /*  916, 0x6be, U+040e, KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */
	0x0000,
	0x0000,
	0x0000,
	0xc9eb, /* 2052, 0x1000dab, U+0dab, KEY_Sinh_nna, SINHALA MUURDHAJA NAYANNA */
	0x0000,
	0x0000,
	0x7803, /* 1291, 0xdb2, U+0e12, KEY_Thai_thophuthao, THAI CHARACTER THO PHUTHAO */
	0xe591, /* 2332, 0x100000f6, KEY_hplongminus */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x2003, /*  344, 0x22, U+0022, KEY_quotedbl, QUOTATION MARK */
	0x0000,
	0x0000,
	0x45e7, /*  803, 0x5d4, U+0634, KEY_Arabic_sheen, ARABIC LETTER SHEEN */
	0x0000,
	0x4d93, /*  870, 0x10004e8, U+04e8, KEY_Cyrillic_O_bar, CYRILLIC CAPITAL LETTER BARRED O */
	0x0000,
	0x0000,
	0x0000,
	0x49d5, /*  841, 0x10006d2, U+06d2, KEY_Arabic_yeh_baree, ARABIC LETTER YEH BARREE */
	0x0000,
	0x0000,
	0xa438, /* 1723, 0x1002079, U+2079, KEY_ninesuperior, SUPERSCRIPT NINE */
	0x0000,
	0x0000,
	0xa5c5, /* 1738, 0x100220b, U+220b, KEY_containsas, CONTAINS AS MEMBER */
	0x8a4f, /* 1462, 0xef9, KEY_Hangul_J_KkogjiDalrinIeung */
	0xcfbd, /* 2114, 0x1008ff1d, KEY_XF86Calculator, Invoke calculator program */
	0x0000,
	0xe0ca, /* 2284, 0xff56, KEY_SunPageDown, Same as XK_Next */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x806d, /* 1373, 0xff7e, KEY_Hangul_switch, Alias for mode_switch */
	0x0000,
	0xdcdf, /* 2247, 0x1008ffa6, KEY_XF86Blue, Blue button */
	0x244e, /*  406, 0x5f, U+005f, KEY_underscore, LOW LINE */
	0x6e58, /* 1192, 0xae8, KEY_filledtribulletup, (U+25B2 BLACK UP-POINTING TRIANGLE) */
	0xc80e, /* 2030, 0x1000d92, U+0d92, KEY_Sinh_ee, SINHALA EEYANNA */
	0x345d, /*  605, 0x2bc, U+0135, KEY_jcircumflex, LATIN SMALL LETTER J WITH CIRCUMFLEX */
	0x6b73, /* 1166, 0xacd, KEY_rightopentriangle, (U+25B7 WHITE RIGHT-POINTING TRIANGLE) */
	0x4b3d, /*  852, 0x10004a2, U+04a2, KEY_Cyrillic_EN_descender, CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
	0x0000,
	0x0000,
	0x81ed, /* 1386, 0xead, KEY_Hangul_RieulSios */
	0x0000,
	0x2930, /*  470, 0xbf, U+00bf, KEY_questiondown, INVERTED QUESTION MARK */
	0x0000,
	0x76fb, /* 1281, 0xda8, U+0e08, KEY_Thai_chochan, THAI CHARACTER CHO CHAN */
	0xe8e2, /* 2368, 0x1004ff71, KEY_osfSelectAll */
	0x0000,
	0x0000,
	0xab84, /* 1791, 0x1002820, U+2820, KEY_braille_dots_6, BRAILLE PATTERN DOTS-6 */
	0x0000,
	0xea6c, /* 2385, 0x1000ff77, KEY_Ext16bit_R */
	0x9bfe, /* 1637, 0x1001eb9, U+1eb9, KEY_ebelowdot, LATIN SMALL LETTER E WITH DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa385, /* 1716, 0x20ac, U+20ac, KEY_EuroSign, EURO SIGN */
	0xd1d8, /* 2135, 0x1008ff32, KEY_XF86AudioMedia, Launch media collection app */
	0x0000,
	0x0000,
	0x4104, /*  753, 0x10006f0, U+06f0, KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */
	0x191e, /*  277, 0xfee1, KEY_Pointer_Right */
	0x412e, /*  755, 0x10006f2, U+06f2, KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */
	0x4143, /*  756, 0x10006f3, U+06f3, KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */
	0x4158, /*  757, 0x10006f4, U+06f4, KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */
	0x416d, /*  758, 0x10006f5, U+06f5, KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */
	0x4182, /*  759, 0x10006f6, U+06f6, KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */
	0x4197, /*  760, 0x10006f7, U+06f7, KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */
	0x41ac, /*  761, 0x10006f8, U+06f8, KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */
	0x41c1, /*  762, 0x10006f9, U+06f9, KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */
	0xdfbb, /* 2273, 0x1005ff02, KEY_SunFA_Tilde */
	0x2eee, /*  539, 0x1a1, U+0104, KEY_Aogonek, LATIN CAPITAL LETTER A WITH OGONEK */
	0x0000,
	0x3476, /*  606, 0x2c5, U+010a, KEY_Cabovedot, LATIN CAPITAL LETTER C WITH DOT ABOVE */
	0x62e5, /* 1075, 0x8b2, KEY_botleftsummation */
	0x0000,
	0xdc6c, /* 2242, 0x1008ffa1, KEY_XF86View, Show a view options/properties */
	0x0000,
	0x0000,
	0xcf26, /* 2108, 0x1008ff17, KEY_XF86AudioNext, Next track */
	0xc938, /* 2044, 0x1000da3, U+0da3, KEY_Sinh_jha, SINHALA MAHA. JAYANNA */
	0xd628, /* 2178, 0x1008ff5d, KEY_XF86Explorer, Launch file explorer */
	0x0000,
	0x8874, /* 1447, 0xeea, KEY_Hangul_J_Cieuc */
	0x0000,
	0x2d13, /*  517, 0xeb, U+00eb, KEY_ediaeresis, LATIN SMALL LETTER E WITH DIAERESIS */
	0xa860, /* 1764, 0x1002805, U+2805, KEY_braille_dots_13, BRAILLE PATTERN DOTS-13 */
	0x40ce, /*  751, 0x4df, U+309c, KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
	0x646d, /* 1089, 0x8c8, U+223c, KEY_approximate, TILDE OPERATOR */
	0xa8f1, /* 1769, 0x100280a, U+280a, KEY_braille_dots_24, BRAILLE PATTERN DOTS-24 */
	0xa9dd, /* 1777, 0x1002812, U+2812, KEY_braille_dots_25, BRAILLE PATTERN DOTS-25 */
	0xa92c, /* 1771, 0x100280c, U+280c, KEY_braille_dots_34, BRAILLE PATTERN DOTS-34 */
	0xaa18, /* 1779, 0x1002814, U+2814, KEY_braille_dots_35, BRAILLE PATTERN DOTS-35 */
	0x2b00, /*  492, 0xd4, U+00d4, KEY_Ocircumflex, LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
	0xaa90, /* 1783, 0x1002818, U+2818, KEY_braille_dots_45, BRAILLE PATTERN DOTS-45 */
	0xac70, /* 1799, 0x1002828, U+2828, KEY_braille_dots_46, BRAILLE PATTERN DOTS-46 */
	0x5af4, /*  998, 0x7b4, U+03af, KEY_Greek_iotaaccent, GREEK SMALL LETTER IOTA WITH TONOS */
	0xad64, /* 1807, 0x1002830, U+2830, KEY_braille_dots_56, BRAILLE PATTERN DOTS-56 */
	0xb134, /* 1839, 0x1002850, U+2850, KEY_braille_dots_57, BRAILLE PATTERN DOTS-57 */
	0xb8f4, /* 1903, 0x1002890, U+2890, KEY_braille_dots_58, BRAILLE PATTERN DOTS-58 */
	0xb324, /* 1855, 0x1002860, U+2860, KEY_braille_dots_67, BRAILLE PATTERN DOTS-67 */
	0xbae4, /* 1919, 0x10028a0, U+28a0, KEY_braille_dots_68, BRAILLE PATTERN DOTS-68 */
	0x6a6d, /* 1156, 0xabe, KEY_rightanglebracket, (U+27E9 MATHEMATICAL RIGHT ANGLE BRACKET) */
	0xbed4, /* 1951, 0x10028c0, U+28c0, KEY_braille_dots_78, BRAILLE PATTERN DOTS-78 */
	0xcba0, /* 2072, 0x1000dc3, U+0dc3, KEY_Sinh_sa, SINHALA DANTAJA SAYANNA */
	0x0000,
	0x56de, /*  961, 0x6ea, U+0419, KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */
	0x0000,
	0x0000,
	0x0000,
	0x35f4, /*  623, 0x3aa, U+0112, KEY_Emacron, LATIN CAPITAL LETTER E WITH MACRON */
	0x0000,
	0x0000,
	0x4c55, /*  860, 0x10004b6, U+04b6, KEY_Cyrillic_CHE_descender, CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
	0x0000,
	0xe1d4, /* 2296, 0x1005ff77, KEY_SunAudioLowerVolume */
	0x0000,
	0xe00a, /* 2276, 0x1005ff05, KEY_SunFA_Cedilla */
	0xe692, /* 2343, 0x1004ff33, KEY_osfQuickPaste */
	0x0000,
	0x0000,
	0x023a, /*   25, 0xff29, KEY_Hankaku, to Hankaku */
	0xc7cf, /* 2027, 0x1000d8f, U+0d8f, KEY_Sinh_lu, SINHALA ILUYANNA */
	0x0000,
	0xdbc8, /* 2236, 0x1008ff9b, KEY_XF86AudioCycleTrack, cycle through audio tracks */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x5ad7, /*  997, 0x7b3, U+03ae, KEY_Greek_etaaccent, GREEK SMALL LETTER ETA WITH TONOS */
	0x0000,
	0x0000,
	0x0000,
	0xe272, /* 2301, 0x1005ff7c, KEY_SunVideoRaiseBrightness */
	0x0000,
	0x0000,
	0xe630, /* 2339, 0x1004ff0b, KEY_osfClear */
	0x0000,
	0x0000,
	0x663e, /* 1109, 0x9e1, U+2592, KEY_checkerboard, MEDIUM SHADE */
	0x0000,
	0x43e7, /*  784, 0x5c1, U+0621, KEY_Arabic_hamza, ARABIC LETTER HAMZA */
	0x0000,
	0x7795, /* 1287, 0xdae, U+0e0e, KEY_Thai_dochada, THAI CHARACTER DO CHADA */
	0x0000,
	0x3c42, /*  696, 0x4ac, U+30e3, KEY_kana_ya, KATAKANA LETTER SMALL YA */
	0x9cf8, /* 1647, 0x1001ec3, U+1ec3, KEY_ecircumflexhook, LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0be5, /*  156, 0xffe0, KEY_F35 */
	0x0000,
	0xdbe9, /* 2237, 0x1008ff9c, KEY_XF86CycleAngle, cycle through angles */
	0xce3a, /* 2100, 0x1008ff06, KEY_XF86KbdBrightnessDown, Keyboards may be lit */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xb341, /* 1856, 0x1002861, U+2861, KEY_braille_dots_167, BRAILLE PATTERN DOTS-167 */
	0x1c17, /*  303, 0xfefa, KEY_Pointer_Accelerate */
	0x0000,
	0x0000,
	0x1b51, /*  296, 0xfef4, KEY_Pointer_Drag_Dflt */
	0xd1bc, /* 2134, 0x1008ff31, KEY_XF86AudioPause, Pause audio playing */
	0x4880, /*  829, 0x5f2, U+0652, KEY_Arabic_sukun, ARABIC SUKUN */
	0x0000,
	0x88e6, /* 1451, 0xeee, KEY_Hangul_J_Hieuh */
	0x7e41, /* 1353, 0xdf5, U+0e55, KEY_Thai_lekha, THAI DIGIT FIVE */
	0x0000,
	0x9c63, /* 1642, 0x1001ebe, U+1ebe, KEY_Ecircumflexacute, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0xa0cb, /* 1685, 0x1001ee9, U+1ee9, KEY_uhornacute, LATIN SMALL LETTER U WITH HORN AND ACUTE */
	0x2656, /*  438, 0x7e, U+007e, KEY_asciitilde, TILDE */
	0x9ed0, /* 1665, 0x1001ed5, U+1ed5, KEY_ocircumflexhook, LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe85e, /* 2362, 0x1004ff60, KEY_osfSelect */
	0x0000,
	0x04f3, /*   59, 0xff7e, KEY_script_switch, Alias for mode_switch */
	0x61d6, /* 1066, 0x8a9, U+23a4, KEY_toprightsqbracket, RIGHT SQUARE BRACKET UPPER CORNER */
	0x0000,
	0xa1a7, /* 1694, 0x1001ef4, U+1ef4, KEY_Ybelowdot, LATIN CAPITAL LETTER Y WITH DOT BELOW */
	0x6dac, /* 1186, 0xae2, KEY_openrectbullet, (U+25AD WHITE RECTANGLE) */
	0x0000,
	0x0000,
	0x0000,
	0xa452, /* 1724, 0x1002080, U+2080, KEY_zerosubscript, SUBSCRIPT ZERO */
	0x0000,
	0xe675, /* 2342, 0x1004ff32, KEY_osfPrimaryPaste */
	0x0000,
	0x0000,
	0xe46a, /* 2320, 0x1000ff6c, KEY_hpReset */
	0x0000,
	0x70a0, /* 1215, 0xba3, KEY_leftcaret, (U+003C LESS-THAN SIGN) */
	0x0000,
	0x0000,
	0x351a, /*  613, 0x2e6, U+0109, KEY_ccircumflex, LATIN SMALL LETTER C WITH CIRCUMFLEX */
	0xd999, /* 2214, 0x1008ff85, KEY_XF86User1KB, ?? */
	0x4c0f, /*  858, 0x10004b2, U+04b2, KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
	0x8858, /* 1446, 0xee9, KEY_Hangul_J_Jieuj */
	0x0000,
	0xd276, /* 2141, 0x1008ff38, KEY_XF86OpenURL, Open selected URL */
	0x6166, /* 1062, 0x8a5, U+2321, KEY_botintegral, BOTTOM HALF INTEGRAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x1573, /*  243, 0xfe6c, KEY_dead_belowdiaeresis */
	0xc9a7, /* 2049, 0x1000da8, U+0da8, KEY_Sinh_ttha, SINHALA MAHA. TTAYANNA */
	0x0000,
	0x5296, /*  918, 0x6bf, KEY_Serbian_DZE, deprecated */
	0x0000,
	0x0000,
	0xa80b, /* 1761, 0x1002802, U+2802, KEY_braille_dots_2, BRAILLE PATTERN DOTS-2 */
	0x686b, /* 1134, 0xaa4, U+2005, KEY_em4space, FOUR-PER-EM SPACE */
	0x7aa4, /* 1318, 0xdcd, U+0e2d, KEY_Thai_oang, THAI CHARACTER O ANG */
	0x0000,
	0x0000,
	0x0000,
	0x9965, /* 1612, 0x1001ea0, U+1ea0, KEY_Abelowdot, LATIN CAPITAL LETTER A WITH DOT BELOW */
	0x2cbc, /*  513, 0xe7, U+00e7, KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */
	0x0000,
	0x0000,
	0x0f25, /*  189, 0xfe0e, KEY_ISO_Last_Group */
	0x42cb, /*  772, 0x1000660, U+0660, KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */
	0x42e1, /*  773, 0x1000661, U+0661, KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */
	0x42f7, /*  774, 0x1000662, U+0662, KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */
	0x430d, /*  775, 0x1000663, U+0663, KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */
	0x4323, /*  776, 0x1000664, U+0664, KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */
	0x4339, /*  777, 0x1000665, U+0665, KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */
	0x434f, /*  778, 0x1000666, U+0666, KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */
	0x4365, /*  779, 0x1000667, U+0667, KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */
	0x2f2b, /*  542, 0x1a5, U+013d, KEY_Lcaron, LATIN CAPITAL LETTER L WITH CARON */
	0x4391, /*  781, 0x1000669, U+0669, KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */
	0x0000,
	0x2732, /*  448, 0xa9, U+00a9, KEY_copyright, COPYRIGHT SIGN */
	0x8558, /* 1420, 0xecf, KEY_Hangul_WI */
	0x0000,
	0xd981, /* 2213, 0x1008ff84, KEY_XF86UserPB, ?? */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3a74, /*  676, 0x1001e84, U+1e84, KEY_Wdiaeresis, LATIN CAPITAL LETTER W WITH DIAERESIS */
	0x0000,
	0x87a9, /* 1440, 0xee3, KEY_Hangul_J_Mieum */
	0x0091, /*    7, 0xff14, KEY_Scroll_Lock */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0115, /*   13, 0xff3c, KEY_SingleCandidate */
	0x0000,
	0x9146, /* 1528, 0x100054a, U+054a, KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */
	0x0743, /*   86, 0xffae, KEY_KP_Decimal */
	0x41f2, /*  764, 0x1000670, U+0670, KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */
	0x7f53, /* 1364, 0xff37, KEY_Hangul_Codeinput, Hangul code input mode */
	0x0000,
	0x33ec, /*  600, 0x2ac, U+0134, KEY_Jcircumflex, LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
	0xe438, /* 2318, 0x1000ff48, KEY_hpModelock1 */
	0x862a, /* 1428, 0xed7, KEY_Hangul_J_Nieun */
	0x856f, /* 1421, 0xed0, KEY_Hangul_YU */
	0x0000,
	0x0000,
	0x5dd2, /* 1025, 0x7d4, U+03a4, KEY_Greek_TAU, GREEK CAPITAL LETTER TAU */
	0x0000,
	0x5b79, /* 1002, 0x7b8, U+03cd, KEY_Greek_upsilonaccent, GREEK SMALL LETTER UPSILON WITH TONOS */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9112, /* 1526, 0x1000549, U+0549, KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */
	0x0000,
	0x0000,
	0x8c72, /* 1480, 0x1000532, U+0532, KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */
	0x824a, /* 1389, 0xeb0, KEY_Hangul_RieulHieuh */
	0xd078, /* 2121, 0x1008ff24, KEY_XF86RockerDown, and down */
	0x907a, /* 1520, 0x1000546, U+0546, KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */
	0xe7f8, /* 2358, 0x1004ff5b, KEY_osfPrevMenu */
	0x0000,
	0x4fd4, /*  892, 0x6ad, U+0491, KEY_Ukrainian_ghe_with_upturn, CYRILLIC SMALL LETTER GHE WITH UPTURN */
	0x84cd, /* 1414, 0xec9, KEY_Hangul_WAE */
	0x997c, /* 1613, 0x1001ea1, U+1ea1, KEY_abelowdot, LATIN SMALL LETTER A WITH DOT BELOW */
	0x0000,
	0x299f, /*  475, 0xc4, U+00c4, KEY_Adiaeresis, LATIN CAPITAL LETTER A WITH DIAERESIS */
	0x8d42, /* 1488, 0x1000536, U+0536, KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */
	0x2e7e, /*  534, 0xfb, U+00fb, KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */
	0x0000,
	0xd91e, /* 2209, 0x1008ff7f, KEY_XF86TaskPane, Show tasks */
	0x842c, /* 1407, 0xec2, KEY_Hangul_YAE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x2887, /*  463, 0xb8, U+00b8, KEY_cedilla, CEDILLA */
	0x3609, /*  624, 0x3ab, U+0122, KEY_Gcedilla, LATIN CAPITAL LETTER G WITH CEDILLA */
	0x80c3, /* 1376, 0xea3, KEY_Hangul_KiyeogSios */
	0x8c3e, /* 1478, 0x1000531, U+0531, KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */
	0x8529, /* 1418, 0xecd, KEY_Hangul_WEO */
	0x8b8e, /* 1472, 0x100055c, U+055c, KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */
	0x8ca6, /* 1482, 0x1000533, U+0533, KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */
	0xa0fb, /* 1687, 0x1001eeb, U+1eeb, KEY_uhorngrave, LATIN SMALL LETTER U WITH HORN AND GRAVE */
	0xa50d, /* 1731, 0x1002087, U+2087, KEY_sevensubscript, SUBSCRIPT SEVEN */
	0xd28f, /* 2142, 0x1008ff39, KEY_XF86AddFavorite, Add URL to favorites list */
	0x0000,
	0x0000,
	0x8471, /* 1410, 0xec5, KEY_Hangul_YEO */
	0x0000,
	0xe811, /* 2359, 0x1004ff5c, KEY_osfNextMenu */
	0x8f0e, /* 1506, 0x100053f, U+053f, KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */
	0x8f74, /* 1510, 0x1000541, U+0541, KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */
	0x172c, /*  261, 0xfed1, KEY_Prev_Virtual_Screen */
	0x65b6, /* 1103, 0x8fb, U+2190, KEY_leftarrow, LEFTWARDS ARROW */
	0x70cf, /* 1217, 0xba8, KEY_downcaret, (U+2228 LOGICAL OR) */
	0x8e3c, /* 1498, 0x100053b, U+053b, KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */
	0x0000,
	0x3143, /*  568, 0x1ca, U+0118, KEY_Eogonek, LATIN CAPITAL LETTER E WITH OGONEK */
	0x9014, /* 1516, 0x1000544, U+0544, KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */
	0x3910, /*  660, 0x1001e0a, U+1e0a, KEY_Dabovedot, LATIN CAPITAL LETTER D WITH DOT ABOVE */
	0xb7a5, /* 1892, 0x1002885, U+2885, KEY_braille_dots_138, BRAILLE PATTERN DOTS-138 */
	0x6d8c, /* 1185, 0xae1, KEY_enopensquarebullet, (U+25AB WHITE SMALL SQUARE) */
	0x86a5, /* 1432, 0xedb, KEY_Hangul_J_Rieul */
	0x111d, /*  204, 0xfe2d, KEY_ISO_Fast_Cursor_Right */
	0x31bd, /*  574, 0x1d5, U+0150, KEY_Odoubleacute, LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
	0x0000,
	0x1482, /*  235, 0xfe65, KEY_dead_abovereversedcomma */
	0x0000,
	0x0000,
	0x0000,
	0x7eed, /* 1360, 0xff33, KEY_Hangul_End, Hangul end, English start */
	0x0000,
	0xcdb6, /* 2096, 0x1008ff02, KEY_XF86MonBrightnessUp, Monitor/panel brightness */
	0xdcc7, /* 2246, 0x1008ffa5, KEY_XF86Yellow, Yellow button */
	0x0000,
	0x90ac, /* 1522, 0x1000547, U+0547, KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */
	0x0000,
	0x0000,
	0xcdfa, /* 2098, 0x1008ff04, KEY_XF86KbdLightOnOff, Keyboards may be lit */
	0x0000,
	0xb911, /* 1904, 0x1002891, U+2891, KEY_braille_dots_158, BRAILLE PATTERN DOTS-158 */
	0x0000,
	0x0000,
	0x5eac, /* 1034, 0x7e4, U+03b4, KEY_Greek_delta, GREEK SMALL LETTER DELTA */
	0x0000,
	0x9f83, /* 1671, 0x1001edb, U+1edb, KEY_ohornacute, LATIN SMALL LETTER O WITH HORN AND ACUTE */
	0xe386, /* 2311, 0x1000ff6f, KEY_hpClearLine */
	0x3195, /*  572, 0x1d1, U+0143, KEY_Nacute, LATIN CAPITAL LETTER N WITH ACUTE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd56f, /* 2170, 0x1008ff55, KEY_XF86Clear, Clear window, screen */
	0x0000,
	0x0000,
	0xd59d, /* 2172, 0x1008ff57, KEY_XF86Copy, Copy selection */
	0x3715, /*  637, 0x3cf, U+012a, KEY_Imacron, LATIN CAPITAL LETTER I WITH MACRON */
	0x0000,
	0x0000,
	0x0000,
	0x4865, /*  828, 0x5f1, U+0651, KEY_Arabic_shadda, ARABIC SHADDA */
	0x8eda, /* 1504, 0x100053e, U+053e, KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */
	0x27a6, /*  453, 0xae, U+00ae, KEY_registered, REGISTERED SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8e08, /* 1496, 0x100053a, U+053a, KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */
	0xa4f3, /* 1730, 0x1002086, U+2086, KEY_sixsubscript, SUBSCRIPT SIX */
	0xea0f, /* 2381, 0x1000ff73, KEY_DeleteChar */
	0x8e70, /* 1500, 0x100053c, U+053c, KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */
	0x9db9, /* 1654, 0x1001eca, U+1eca, KEY_Ibelowdot, LATIN CAPITAL LETTER I WITH DOT BELOW */
	0x0000,
	0x0000,
	0x6907, /* 1141, 0xaac, KEY_signifblank, (U+2423 OPEN BOX) */
	0x92aa, /* 1542, 0x1000551, U+0551, KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd339, /* 2148, 0x1008ff3f, KEY_XF86BackForward, ??? */
	0x0000,
	0x0000,
	0x0000,
	0x8cf3, /* 1485, 0x1000564, U+0564, KEY_Armenian_da, ARMENIAN SMALL LETTER DA */
	0xd868, /* 2202, 0x1008ff78, KEY_XF86ScrollUp, Scroll window/contents up */
	0x0000,
	0xea54, /* 2384, 0x1000ff76, KEY_Ext16bit_L */
	0x0000,
	0x072a, /*   85, 0xffad, KEY_KP_Subtract */
	0x0000,
	0x0000,
	0x81ce, /* 1385, 0xeac, KEY_Hangul_RieulPieub */
	0x78d1, /* 1299, 0xdba, U+0e1a, KEY_Thai_bobaimai, THAI CHARACTER BO BAIMAI */
	0x0000,
	0xbf4c, /* 1955, 0x10028c4, U+28c4, KEY_braille_dots_378, BRAILLE PATTERN DOTS-378 */
	0x144d, /*  233, 0xfe64, KEY_dead_abovecomma */
	0x0000,
	0x9eed, /* 1666, 0x1001ed6, U+1ed6, KEY_Ocircumflextilde, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0xd1f4, /* 2136, 0x1008ff33, KEY_XF86MyComputer, Display "My Computer" window */
	0x03a7, /*   42, 0xff55, KEY_Page_Up */
	0x2a8a, /*  486, 0xcf, U+00cf, KEY_Idiaeresis, LATIN CAPITAL LETTER I WITH DIAERESIS */
	0x0000,
	0x56ad, /*  959, 0x6e8, U+0425, KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */
	0x0000,
	0x0000,
	0x989d, /* 1602, 0x10001b6, U+01b6, KEY_zstroke, LATIN SMALL LETTER Z WITH STROKE */
	0xdd9f, /* 2254, 0x1008fe02, KEY_XF86Switch_VT_2 */
	0xddbc, /* 2255, 0x1008fe03, KEY_XF86Switch_VT_3 */
	0x8dbd, /* 1493, 0x1000568, U+0568, KEY_Armenian_at, ARMENIAN SMALL LETTER ET */
	0xddf6, /* 2257, 0x1008fe05, KEY_XF86Switch_VT_5 */
	0x4661, /*  808, 0x5d9, U+0639, KEY_Arabic_ain, ARABIC LETTER AIN */
	0xde30, /* 2259, 0x1008fe07, KEY_XF86Switch_VT_7 */
	0xde4d, /* 2260, 0x1008fe08, KEY_XF86Switch_VT_8 */
	0x62a4, /* 1073, 0x8b0, U+23ac, KEY_rightmiddlecurlybrace, RIGHT CURLY BRACKET MIDDLE PIECE */
	0x56fb, /*  962, 0x6eb, U+041a, KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */
	0x0000,
	0x7110, /* 1220, 0xbc2, U+22a4, KEY_downtack, DOWN TACK */
	0x348d, /*  607, 0x2c6, U+0108, KEY_Ccircumflex, LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
	0x9363, /* 1549, 0x1000584, U+0584, KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */
	0x0000,
	0x7e59, /* 1354, 0xdf6, U+0e56, KEY_Thai_lekhok, THAI DIGIT SIX */
	0x0000,
	0xe6f6, /* 2347, 0x1004ff43, KEY_osfPageRight */
	0x33d8, /*  599, 0x2ab, U+011e, KEY_Gbreve, LATIN CAPITAL LETTER G WITH BREVE */
	0x0000,
	0x0000,
	0x57c2, /*  970, 0x6f3, U+0421, KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */
	0x0000,
	0x0000,
	0xe230, /* 2299, 0x1005ff7a, KEY_SunVideoDegauss */
	0x0000,
	0x0000,
	0xa113, /* 1688, 0x1001eec, U+1eec, KEY_Uhornhook, LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
	0x0000,
	0x509c, /*  899, 0x6b3, U+0401, KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */
	0xd009, /* 2117, 0x1008ff20, KEY_XF86Calendar, Invoke Calendar program */
	0x0000,
	0xcaf4, /* 2064, 0x1000db8, U+0db8, KEY_Sinh_ma, SINHALA MAYANNA */
	0x915f, /* 1529, 0x100057a, U+057a, KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */
	0xa159, /* 1691, 0x1001eef, U+1eef, KEY_uhorntilde, LATIN SMALL LETTER U WITH HORN AND TILDE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x5959, /*  985, 0x7a3, U+0389, KEY_Greek_ETAaccent, GREEK CAPITAL LETTER ETA WITH TONOS */
	0x0000,
	0x0000,
	0xdf30, /* 2268, 0x1008fe23, KEY_XF86Prev_VMode, prev. video mode available */
	0x0000,
	0x0000,
	0x0000,
	0x1047, /*  198, 0xfe27, KEY_ISO_Set_Margin_Left */
	0x0000,
	0x0000,
	0xa3b5, /* 1718, 0x1002074, U+2074, KEY_foursuperior, SUPERSCRIPT FOUR */
	0x337d, /*  595, 0x1ff, U+02d9, KEY_abovedot, DOT ABOVE */
	0x0000,
	0x0000,
	0x57db, /*  971, 0x6f4, U+0422, KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */
	0x0000,
	0x0000,
	0xdcb0, /* 2245, 0x1008ffa4, KEY_XF86Green, Green button */
	0x501c, /*  894, 0x6af, U+045f, KEY_Cyrillic_dzhe, CYRILLIC SMALL LETTER DZHE */
	0x0000,
	0x58e0, /*  981, 0x6fe, U+0427, KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */
	0x0000,
	0x6709, /* 1119, 0x9ed, U+2514, KEY_lowleftcorner, BOX DRAWINGS LIGHT UP AND RIGHT */
	0xd210, /* 2137, 0x1008ff34, KEY_XF86VendorHome, Display vendor home web site */
	0xde13, /* 2258, 0x1008fe06, KEY_XF86Switch_VT_6 */
	0x0000,
	0x8725, /* 1436, 0xedf, KEY_Hangul_J_RieulSios */
	0x985d, /* 1599, 0x100019f, U+019f, KEY_Obarred, LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
	0x820b, /* 1387, 0xeae, KEY_Hangul_RieulTieut */
	0x0000,
	0xa41d, /* 1722, 0x1002078, U+2078, KEY_eightsuperior, SUPERSCRIPT EIGHT */
	0xa8d4, /* 1768, 0x1002809, U+2809, KEY_braille_dots_14, BRAILLE PATTERN DOTS-14 */
	0x5919, /*  983, 0x7a1, U+0386, KEY_Greek_ALPHAaccent, GREEK CAPITAL LETTER ALPHA WITH TONOS */
	0x0f62, /*  191, 0xfe20, KEY_ISO_Left_Tab */
	0x0000,
	0xaba0, /* 1792, 0x1002821, U+2821, KEY_braille_dots_16, BRAILLE PATTERN DOTS-16 */
	0x5693, /*  958, 0x6e7, U+0413, KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */
	0xaf70, /* 1824, 0x1002841, U+2841, KEY_braille_dots_17, BRAILLE PATTERN DOTS-17 */
	0x90f9, /* 1525, 0x1000578, U+0578, KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */
	0xabbd, /* 1793, 0x1002822, U+2822, KEY_braille_dots_26, BRAILLE PATTERN DOTS-26 */
	0x4c9d, /*  862, 0x10004b8, U+04b8, KEY_Cyrillic_CHE_vertstroke, CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
	0x39c8, /*  668, 0x1001e60, U+1e60, KEY_Sabovedot, LATIN CAPITAL LETTER S WITH DOT ABOVE */
	0x2479, /*  408, 0x60, KEY_quoteleft, deprecated */
	0x66d4, /* 1117, 0x9eb, U+2510, KEY_uprightcorner, BOX DRAWINGS LIGHT DOWN AND LEFT */
	0x912c, /* 1527, 0x1000579, U+0579, KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */
	0xafc8, /* 1827, 0x1002844, U+2844, KEY_braille_dots_37, BRAILLE PATTERN DOTS-37 */
	0x196b, /*  280, 0xfee4, KEY_Pointer_UpLeft */
	0x174d, /*  262, 0xfed2, KEY_Next_Virtual_Screen */
	0x0000,
	0xb040, /* 1831, 0x1002848, U+2848, KEY_braille_dots_47, BRAILLE PATTERN DOTS-47 */
	0x0000,
	0xb800, /* 1895, 0x1002888, U+2888, KEY_braille_dots_48, BRAILLE PATTERN DOTS-48 */
	0x0000,
	0xdfa1, /* 2272, 0x1005ff01, KEY_SunFA_Circum */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0fdb, /*  195, 0xfe24, KEY_ISO_Partial_Line_Down */
	0x4daf, /*  871, 0x10004e9, U+04e9, KEY_Cyrillic_o_bar, CYRILLIC SMALL LETTER BARRED O */
	0x5198, /*  909, 0x6b9, U+0409, KEY_Cyrillic_LJE, CYRILLIC CAPITAL LETTER LJE */
	0x0000,
	0x7ad6, /* 1320, 0xdcf, U+0e2f, KEY_Thai_paiyannoi, THAI CHARACTER PAIYANNOI */
	0x0000,
	0x0000,
	0x0000,
	0x5081, /*  898, 0x6b2, U+0403, KEY_Macedonia_GJE, CYRILLIC CAPITAL LETTER GJE */
	0x0000,
	0x51cb, /*  911, 0x6ba, U+040a, KEY_Cyrillic_NJE, CYRILLIC CAPITAL LETTER NJE */
	0x0000,
	0x2bad, /*  500, 0xdb, U+00db, KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
	0x8c58, /* 1479, 0x1000561, U+0561, KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */
	0x50e8, /*  902, 0x6b5, U+0405, KEY_Macedonia_DSE, CYRILLIC CAPITAL LETTER DZE */
	0x0000,
	0x8cc0, /* 1483, 0x1000563, U+0563, KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */
	0x7715, /* 1282, 0xda9, U+0e09, KEY_Thai_choching, THAI CHARACTER CHO CHING */
	0x59f6, /*  990, 0x7a8, U+038e, KEY_Greek_UPSILONaccent, GREEK CAPITAL LETTER UPSILON WITH TONOS */
	0xa89a, /* 1766, 0x1002807, U+2807, KEY_braille_dots_123, BRAILLE PATTERN DOTS-123 */
	0x0430, /*   49, 0xff62, KEY_Execute, Execute, run, do */
	0x0c5f, /*  162, 0xffe5, KEY_Caps_Lock, Caps lock */
	0x5892, /*  978, 0x6fb, U+0428, KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */
	0xaa35, /* 1780, 0x1002815, U+2815, KEY_braille_dots_135, BRAILLE PATTERN DOTS-135 */
	0x5218, /*  914, 0x6bc, U+040c, KEY_Macedonia_KJE, CYRILLIC CAPITAL LETTER KJE */
	0x8f28, /* 1507, 0x100056f, U+056f, KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */
	0x8f8e, /* 1511, 0x1000571, U+0571, KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */
	0x8b38, /* 1469, 0x100055d, U+055d, KEY_Armenian_but, ARMENIAN COMMA */
	0xac33, /* 1797, 0x1002826, U+2826, KEY_braille_dots_236, BRAILLE PATTERN DOTS-236 */
	0x7e8c, /* 1356, 0xdf8, U+0e58, KEY_Thai_lekpaet, THAI DIGIT EIGHT */
	0x8e56, /* 1499, 0x100056b, U+056b, KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */
	0x6e3a, /* 1191, 0xae7, KEY_enfilledsqbullet, (U+25AA BLACK SMALL SQUARE) */
	0xad9f, /* 1809, 0x1002832, U+2832, KEY_braille_dots_256, BRAILLE PATTERN DOTS-256 */
	0x902e, /* 1517, 0x1000574, U+0574, KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */
	0xace8, /* 1803, 0x100282c, U+282c, KEY_braille_dots_346, BRAILLE PATTERN DOTS-346 */
	0xb0b8, /* 1835, 0x100284c, U+284c, KEY_braille_dots_347, BRAILLE PATTERN DOTS-347 */
	0xaddc, /* 1811, 0x1002834, U+2834, KEY_braille_dots_356, BRAILLE PATTERN DOTS-356 */
	0xb1ac, /* 1843, 0x1002854, U+2854, KEY_braille_dots_357, BRAILLE PATTERN DOTS-357 */
	0xb96c, /* 1907, 0x1002894, U+2894, KEY_braille_dots_358, BRAILLE PATTERN DOTS-358 */
	0xb39c, /* 1859, 0x1002864, U+2864, KEY_braille_dots_367, BRAILLE PATTERN DOTS-367 */
	0x813a, /* 1380, 0xea7, KEY_Hangul_Dikeud */
	0x9ac8, /* 1625, 0x1001ead, U+1ead, KEY_acircumflexbelowdot, LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x3533, /*  614, 0x2f5, U+0121, KEY_gabovedot, LATIN SMALL LETTER G WITH DOT ABOVE */
	0xb418, /* 1863, 0x1002868, U+2868, KEY_braille_dots_467, BRAILLE PATTERN DOTS-467 */
	0x9d33, /* 1649, 0x1001ec5, U+1ec5, KEY_ecircumflextilde, LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0x4601, /*  804, 0x5d5, U+0635, KEY_Arabic_sad, ARABIC LETTER SAD */
	0xb514, /* 1871, 0x1002870, U+2870, KEY_braille_dots_567, BRAILLE PATTERN DOTS-567 */
	0xbcd4, /* 1935, 0x10028b0, U+28b0, KEY_braille_dots_568, BRAILLE PATTERN DOTS-568 */
	0x1939, /*  278, 0xfee2, KEY_Pointer_Up */
	0x90c6, /* 1523, 0x1000577, U+0577, KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */
	0x0000,
	0x28b5, /*  465, 0xba, U+00ba, KEY_masculine, MASCULINE ORDINAL INDICATOR */
	0x0000,
	0x580c, /*  973, 0x6f6, U+0416, KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */
	0x0000,
	0x0000,
	0x706c, /* 1213, 0xafe, U+201e, KEY_doublelowquotemark, DOUBLE LOW-9 QUOTATION MARK */
	0x98b2, /* 1603, 0x10001e7, U+01e7, KEY_gcaron, LATIN SMALL LETTER G WITH CARON */
	0x0000,
	0x0000,
	0x8ef4, /* 1505, 0x100056e, U+056e, KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */
	0x0000,
	0x6c4f, /* 1173, 0xad4, U+211e, KEY_prescription, PRESCRIPTION TAKE */
	0x36e9, /*  635, 0x3c7, U+012e, KEY_Iogonek, LATIN CAPITAL LETTER I WITH OGONEK */
	0x0000,
	0x1434, /*  232, 0xfe63, KEY_dead_stroke */
	0xd1a1, /* 2133, 0x1008ff30, KEY_XF86Favorites, Show favorite locations */
	0x6ab7, /* 1159, 0xac4, U+215c, KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */
	0x69f4, /* 1151, 0xab7, U+215a, KEY_fivesixths, VULGAR FRACTION FIVE SIXTHS */
	0x09f0, /*  126, 0xffd1, KEY_F20 */
	0x0000,
	0x0a12, /*  128, 0xffd2, KEY_F21 */
	0x39b1, /*  667, 0x1001e57, U+1e57, KEY_pabovedot, LATIN SMALL LETTER P WITH DOT ABOVE */
	0x0a33, /*  130, 0xffd3, KEY_F22 */
	0xe8cd, /* 2367, 0x1004ff6a, KEY_osfHelp */
	0x0a54, /*  132, 0xffd4, KEY_F23 */
	0x9228, /* 1537, 0x100057e, U+057e, KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */
	0x0a75, /*  134, 0xffd5, KEY_F24 */
	0x0000,
	0x0a96, /*  136, 0xffd6, KEY_F25 */
	0x4248, /*  767, 0x1000686, U+0686, KEY_Arabic_tcheh, ARABIC LETTER TCHEH */
	0x0ab7, /*  138, 0xffd7, KEY_F26 */
	0x1140, /*  205, 0xfe2e, KEY_ISO_Fast_Cursor_Up */
	0x09cf, /*  124, 0xffd0, KEY_F19 */
	0x02ac, /*   30, 0xff2e, KEY_Kana_Shift, Kana Shift */
	0x35ca, /*  621, 0x3a5, U+0128, KEY_Itilde, LATIN CAPITAL LETTER I WITH TILDE */
	0x0000,
	0x0000,
	0x0000,
	0x92c4, /* 1543, 0x1000581, U+0581, KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */
	0xea3c, /* 2383, 0x1000ff75, KEY_KP_BackTab */
	0x0000,
	0x0000,
	0x765b, /* 1275, 0xda2, U+0e02, KEY_Thai_khokhai, THAI CHARACTER KHO KHAI */
	0x0000,
	0x0000,
	0x0000,
	0x7ddc, /* 1349, 0xdf1, U+0e51, KEY_Thai_leknung, THAI DIGIT ONE */
	0x0000,
	0xd7cc, /* 2196, 0x1008ff72, KEY_XF86Reply, Reply e.g., mail */
	0x6d54, /* 1183, 0xadf, KEY_emfilledrect, (U+25AE BLACK VERTICAL RECTANGLE) */
	0x0000,
	0x0000,
	0x53c6, /*  930, 0x6cb, U+043a, KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */
	0xd18a, /* 2132, 0x1008ff2f, KEY_XF86Sleep, Put system to sleep */
	0x7bbd, /* 1329, 0xdd8, U+0e38, KEY_Thai_sarau, THAI CHARACTER SARA U */
	0x0000,
	0xd7fb, /* 2198, 0x1008ff74, KEY_XF86RotateWindows, Rotate windows e.g. xrandr */
	0x354a, /*  615, 0x2f8, U+011d, KEY_gcircumflex, LATIN SMALL LETTER G WITH CIRCUMFLEX */
	0x0000,
	0x622f, /* 1069, 0x8ac, U+239d, KEY_botleftparens, LEFT PARENTHESIS LOWER HOOK */
	0x0000,
	0x0000,
	0x3180, /*  571, 0x1d0, U+0110, KEY_Dstroke, LATIN CAPITAL LETTER D WITH STROKE */
	0x0000,
	0x8688, /* 1431, 0xeda, KEY_Hangul_J_Dikeud */
	0x0000,
	0x9a4e, /* 1621, 0x1001ea9, U+1ea9, KEY_acircumflexhook, LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x1bf7, /*  302, 0xfef9, KEY_Pointer_EnableKeys */
	0x0000,
	0xeb59, /* 2395, 0x100000fc, KEY_block */
	0x0000,
	0x0000,
	0xd158, /* 2130, 0x1008ff2d, KEY_XF86ScreenSaver, Invoke screensaver */
	0x0325, /*   35, 0xff3e, KEY_Mae_Koho, Previous Candidate */
	0x0000,
	0x76ab, /* 1278, 0xda5, U+0e05, KEY_Thai_khokhon, THAI CHARACTER KHO KHON */
	0x0000,
	0x0000,
	0xc8cc, /* 2039, 0x1000d9e, U+0d9e, KEY_Sinh_ng2, SINHALA KANTAJA NAASIKYAYA */
	0x0000,
	0xa36f, /* 1715, 0x10020ab, U+20ab, KEY_DongSign, DONG SIGN */
	0xcade, /* 2063, 0x1000db7, U+0db7, KEY_Sinh_bha, SINHALA MAHA. BAYANNA */
	0x0000,
	0x0000,
	0x80fc, /* 1378, 0xea5, KEY_Hangul_NieunJieuj */
	0x024f, /*   26, 0xff2a, KEY_Zenkaku_Hankaku, Zenkaku/Hankaku toggle */
	0x558f, /*  948, 0x6dd, U+0449, KEY_Cyrillic_shcha, CYRILLIC SMALL LETTER SHCHA */
	0x4441, /*  787, 0x5c4, U+0624, KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */
	0x4483, /*  789, 0x5c6, U+0626, KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */
	0x0000,
	0x51b2, /*  910, 0x6b9, KEY_Serbian_LJE, deprecated */
	0x0000,
	0x0000,
	0xd5e1, /* 2175, 0x1008ff5a, KEY_XF86DOS, Launch DOS (emulation) */
	0x0000,
	0xa6af, /* 1748, 0x1002263, U+2263, KEY_stricteq, STRICTLY EQUIVALENT TO */
	0x4d39, /*  867, 0x10004d9, U+04d9, KEY_Cyrillic_schwa, CYRILLIC SMALL LETTER SCHWA */
	0x0000,
	0x0000,
	0x7a0f, /* 1312, 0xdc7, U+0e27, KEY_Thai_wowaen, THAI CHARACTER WO WAEN */
	0x0000,
	0xd905, /* 2208, 0x1008ff7e, KEY_XF86Support, Get support (??) */
	0x2915, /*  469, 0xbe, U+00be, KEY_threequarters, VULGAR FRACTION THREE QUARTERS */
	0x0000,
	0x17ad, /*  265, 0xfe70, KEY_AccessX_Enable */
	0xe65d, /* 2341, 0x1004ff31, KEY_osfAddMode */
	0x4bea, /*  857, 0x10004b1, U+04b1, KEY_Cyrillic_u_straight_bar, CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
	0x0000,
	0x0000,
	0x83e8, /* 1404, 0xebf, KEY_Hangul_A */
	0x0000,
	0x8c21, /* 1477, 0x100055e, U+055e, KEY_Armenian_paruyk, ARMENIAN QUESTION MARK */
	0x2f53, /*  544, 0x1a9, U+0160, KEY_Scaron, LATIN CAPITAL LETTER S WITH CARON */
	0x845b, /* 1409, 0xec4, KEY_Hangul_E */
	0xe3d3, /* 2314, 0x1000ff72, KEY_hpInsertChar */
	0x7fc3, /* 1368, 0xff3b, KEY_Hangul_PostHanja, Post Hanja conversion */
	0xd852, /* 2201, 0x1008ff77, KEY_XF86Save, Save (file, document, state */
	0x85b4, /* 1424, 0xed3, KEY_Hangul_I */
	0x0000,
	0x0000,
	0x5544, /*  945, 0x6da, U+0437, KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */
	0x0000,
	0x7820, /* 1292, 0xdb3, U+0e13, KEY_Thai_nonen, THAI CHARACTER NO NEN */
	0x84a0, /* 1412, 0xec7, KEY_Hangul_O */
	0x6edd, /* 1197, 0xaed, U+2666, KEY_diamond, BLACK DIAMOND SUIT */
	0x0000,
	0x0000,
	0xa18c, /* 1693, 0x1001ef1, U+1ef1, KEY_uhornbelowdot, LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
	0x8d74, /* 1490, 0x1000537, U+0537, KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */
	0x8513, /* 1417, 0xecc, KEY_Hangul_U */
	0x0000,
	0xcf71, /* 2111, 0x1008ff1a, KEY_XF86Start, Start application */
	0x7273, /* 1236, 0xce1, U+05d1, KEY_hebrew_bet, HEBREW LETTER BET */
	0x0000,
	0x55ab, /*  949, 0x6de, U+0447, KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */
	0x7b8a, /* 1327, 0xdd6, U+0e36, KEY_Thai_saraue, THAI CHARACTER SARA UE */
	0x0000,
	0x0000,
	0x7259, /* 1235, 0xce0, U+05d0, KEY_hebrew_aleph, HEBREW LETTER ALEF */
	0xd8e8, /* 2207, 0x1008ff7d, KEY_XF86SplitScreen, Split window or screen */
	0x0000,
	0xc8b6, /* 2038, 0x1000d9d, U+0d9d, KEY_Sinh_gha, SINHALA MAHA. GAYANNA */
	0x0000,
	0xd9e2, /* 2217, 0x1008ff88, KEY_XF86WheelButton, button from a mouse wheel */
	0x0000,
	0x69ad, /* 1148, 0xab4, U+2157, KEY_threefifths, VULGAR FRACTION THREE FIFTHS */
	0x0000,
	0x0000,
	0x52af, /*  919, 0x6c0, U+044e, KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */
	0x883c, /* 1445, 0xee8, KEY_Hangul_J_Ieung */
	0x535e, /*  926, 0x6c7, U+0433, KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */
	0x0000,
	0x2a31, /*  482, 0xcb, U+00cb, KEY_Ediaeresis, LATIN CAPITAL LETTER E WITH DIAERESIS */
	0x0000,
	0x38c9, /*  657, 0x1000177, U+0177, KEY_ycircumflex, LATIN SMALL LETTER Y WITH CIRCUMFLEX */
	0x9fe2, /* 1675, 0x1001edf, U+1edf, KEY_ohornhook, LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
	0x9e3b, /* 1660, 0x1001ed0, U+1ed0, KEY_Ocircumflexacute, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x286b, /*  462, 0xb7, U+00b7, KEY_periodcentered, MIDDLE DOT */
	0x0000,
	0x0000,
	0x8d8c, /* 1491, 0x1000567, U+0567, KEY_Armenian_e, ARMENIAN SMALL LETTER EH */
	0x0000,
	0x0000,
	0x0000,
	0x3688, /*  630, 0x3bb, U+0123, KEY_gcedilla, LATIN SMALL LETTER G WITH CEDILLA */
	0x0000,
	0x7b27, /* 1323, 0xdd2, U+0e32, KEY_Thai_saraaa, THAI CHARACTER SARA AA */
	0x0000,
	0xe5e8, /* 2336, 0x1004ff04, KEY_osfPaste */
	0x0000,
	0x9394, /* 1551, 0x1000585, U+0585, KEY_Armenian_o, ARMENIAN SMALL LETTER OH */
	0x0000,
	0x4a10, /*  843, 0xff7e, KEY_Arabic_switch, Alias for mode_switch */
	0x55fd, /*  952, 0x6e1, U+0410, KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */
	0x4f39, /*  886, 0x6a9, U+0459, KEY_Cyrillic_lje, CYRILLIC SMALL LETTER LJE */
	0x5ab6, /*  996, 0x7b2, U+03ad, KEY_Greek_epsilonaccent, GREEK SMALL LETTER EPSILON WITH TONOS */
	0x2f7d, /*  546, 0x1ab, U+0164, KEY_Tcaron, LATIN CAPITAL LETTER T WITH CARON */
	0x58ac, /*  979, 0x6fc, U+042d, KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */
	0x0000,
	0x3740, /*  639, 0x3d2, U+014c, KEY_Omacron, LATIN CAPITAL LETTER O WITH MACRON */
	0x4e22, /*  875, 0x6a2, U+0453, KEY_Macedonia_gje, CYRILLIC SMALL LETTER GJE */
	0x56c6, /*  960, 0x6e9, U+0418, KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */
	0x4f6c, /*  888, 0x6aa, U+045a, KEY_Cyrillic_nje, CYRILLIC SMALL LETTER NJE */
	0x6303, /* 1076, 0x8b3, KEY_topvertsummationconnector */
	0x5994, /*  987, 0x7a5, U+03aa, KEY_Greek_IOTAdieresis, GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
	0x0000,
	0x2972, /*  473, 0xc2, U+00c2, KEY_Acircumflex, LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
	0x39f6, /*  670, 0x1001e6a, U+1e6a, KEY_Tabovedot, LATIN CAPITAL LETTER T WITH DOT ABOVE */
	0x0000,
	0x5a7b, /*  994, 0x7af, U+2015, KEY_Greek_horizbar, HORIZONTAL BAR */
	0x7b40, /* 1324, 0xdd3, U+0e33, KEY_Thai_saraam, THAI CHARACTER SARA AM */
	0x0000,
	0xd31c, /* 2147, 0x1008ff3e, KEY_XF86AudioRewind, "rewind" audio track */
	0x0ffe, /*  196, 0xfe25, KEY_ISO_Partial_Space_Left */
	0x2aa2, /*  487, 0xd0, U+00d0, KEY_ETH, LATIN CAPITAL LETTER ETH */
	0xda43, /* 2221, 0x1008ff8c, KEY_XF86ZoomOut, zoom out view, map, etc. */
	0x4fb9, /*  891, 0x6ac, U+045c, KEY_Macedonia_kje, CYRILLIC SMALL LETTER KJE */
	0x72f3, /* 1241, 0xce3, KEY_hebrew_daleth, deprecated */
	0x79e1, /* 1310, 0xdc5, U+0e25, KEY_Thai_loling, THAI CHARACTER LO LING */
	0x4bc5, /*  856, 0x10004b0, U+04b0, KEY_Cyrillic_U_straight_bar, CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
	0x6f97, /* 1205, 0xaf6, U+266d, KEY_musicalflat, MUSIC FLAT SIGN */
	0x0000,
	0x0000,
	0xe39f, /* 2312, 0x1000ff70, KEY_hpInsertLine */
	0x0000,
	0x52c8, /*  920, 0x6c1, U+0430, KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */
	0x7458, /* 1255, 0xcee, U+05de, KEY_hebrew_mem, HEBREW LETTER MEM */
	0x0000,
	0xa05f, /* 1680, 0x1001ee4, U+1ee4, KEY_Ubelowdot, LATIN CAPITAL LETTER U WITH DOT BELOW */
	0x5577, /*  947, 0x6dc, U+044d, KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */
	0xe88c, /* 2364, 0x1004ff65, KEY_osfUndo */
	0xd0f6, /* 2126, 0x1008ff29, KEY_XF86Refresh, Refresh the page */
	0x2391, /*  396, 0x55, U+0055, KEY_U, LATIN CAPITAL LETTER U */
	0x5391, /*  928, 0x6c9, U+0438, KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */
	0x7b71, /* 1326, 0xdd5, U+0e35, KEY_Thai_saraii, THAI CHARACTER SARA II */
	0x7bd5, /* 1330, 0xdd9, U+0e39, KEY_Thai_sarauu, THAI CHARACTER SARA UU */
	0x9cdb, /* 1646, 0x1001ec2, U+1ec2, KEY_Ecircumflexhook, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x437b, /*  780, 0x1000668, U+0668, KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */
	0x23be, /*  399, 0x58, U+0058, KEY_X, LATIN CAPITAL LETTER X */
	0x542a, /*  934, 0x6cf, U+043e, KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */
	0x76c5, /* 1279, 0xda6, U+0e06, KEY_Thai_khorakhang, THAI CHARACTER KHO RAKHANG */
	0x0000,
	0x23dc, /*  401, 0x5a, U+005a, KEY_Z, LATIN CAPITAL LETTER Z */
	0x0000,
	0x52f9, /*  922, 0x6c3, U+0446, KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */
	0x54bf, /*  940, 0x6d5, U+0443, KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */
	0x1f87, /*  339, 0xfd1c, KEY_3270_CursorSelect */
	0x0000,
	0x0000,
	0x1252, /*  214, 0xfe52, KEY_dead_circumflex */
	0x0826, /*   98, 0xffbe, KEY_F1 */
	0x0836, /*   99, 0xffbf, KEY_F2 */
	0x0846, /*  100, 0xffc0, KEY_F3 */
	0x0856, /*  101, 0xffc1, KEY_F4 */
	0x0866, /*  102, 0xffc2, KEY_F5 */
	0x0876, /*  103, 0xffc3, KEY_F6 */
	0x0886, /*  104, 0xffc4, KEY_F7 */
	0x0896, /*  105, 0xffc5, KEY_F8 */
	0x08a6, /*  106, 0xffc6, KEY_F9 */
	0x0000,
	0x29ca, /*  477, 0xc6, U+00c6, KEY_AE, LATIN CAPITAL LETTER AE */
	0x0000,
	0x08d8, /*  109, 0xffc8, KEY_L1 */
	0x08f9, /*  111, 0xffc9, KEY_L2 */
	0x091a, /*  113, 0xffca, KEY_L3 */
	0x093b, /*  115, 0xffcb, KEY_L4 */
	0x095c, /*  117, 0xffcc, KEY_L5 */
	0x097d, /*  119, 0xffcd, KEY_L6 */
	0x099e, /*  121, 0xffce, KEY_L7 */
	0x09bf, /*  123, 0xffcf, KEY_L8 */
	0x09e0, /*  125, 0xffd0, KEY_L9 */
	0x0000,
	0x17ee, /*  267, 0xfe72, KEY_RepeatKeys_Enable */
	0x8be5, /* 1475, 0x100055b, U+055b, KEY_Armenian_shesht, ARMENIAN EMPHASIS MARK */
	0x0a23, /*  129, 0xffd2, KEY_R1 */
	0x0a44, /*  131, 0xffd3, KEY_R2 */
	0x0a65, /*  133, 0xffd4, KEY_R3 */
	0x0a86, /*  135, 0xffd5, KEY_R4 */
	0x0aa7, /*  137, 0xffd6, KEY_R5 */
	0x0ac8, /*  139, 0xffd7, KEY_R6 */
	0x0ae9, /*  141, 0xffd8, KEY_R7 */
	0x0b0a, /*  143, 0xffd9, KEY_R8 */
	0x0b2b, /*  145, 0xffda, KEY_R9 */
	0x0000,
	0x8a31, /* 1461, 0xef8, KEY_Hangul_J_PanSios */
	0x0000,
	0x75f8, /* 1271, 0xcfa, U+05ea, KEY_hebrew_taw, HEBREW LETTER TAV */
	0x61f5, /* 1067, 0x8aa, U+23a6, KEY_botrightsqbracket, RIGHT SQUARE BRACKET LOWER CORNER */
	0x3acc, /*  680, 0x13bc, U+0152, KEY_OE, LATIN CAPITAL LIGATURE OE */
	0x8890, /* 1448, 0xeeb, KEY_Hangul_J_Khieuq */
	0x393e, /*  662, 0x1001e1e, U+1e1e, KEY_Fabovedot, LATIN CAPITAL LETTER F WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x73a1, /* 1248, 0xce8, U+05d8, KEY_hebrew_tet, HEBREW LETTER TET */
	0x0000,
	0x0000,
	0x1c89, /*  307, 0xfea1, KEY_Ch */
	0x25da, /*  431, 0x77, U+0077, KEY_w, LATIN SMALL LETTER W */
	0x0000,
	0x3d18, /*  706, 0x4b5, U+30aa, KEY_kana_O, KATAKANA LETTER O */
	0x7408, /* 1252, 0xceb, U+05db, KEY_hebrew_kaph, HEBREW LETTER KAF */
	0x6bac, /* 1168, 0xacf, KEY_emopenrectangle, (U+25AF WHITE VERTICAL RECTANGLE) */
	0xcd3b, /* 2091, 0x1000ddf, U+0ddf, KEY_Sinh_lu2, SINHALA GAYANUKITTA */
	0x2607, /*  434, 0x7a, U+007a, KEY_z, LATIN SMALL LETTER Z */
	0xe451, /* 2319, 0x1000ff49, KEY_hpModelock2 */
	0x5c05, /* 1006, 0x7c1, U+0391, KEY_Greek_ALPHA, GREEK CAPITAL LETTER ALPHA */
	0x062e, /*   74, 0xff9a, KEY_KP_Page_Up */
	0x9c9f, /* 1644, 0x1001ec0, U+1ec0, KEY_Ecircumflexgrave, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x74db, /* 1260, 0xcf2, U+05e2, KEY_hebrew_ayin, HEBREW LETTER AYIN */
	0x34bd, /*  609, 0x2d8, U+011c, KEY_Gcircumflex, LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
	0x0000,
	0x5c36, /* 1008, 0x7c3, U+0393, KEY_Greek_GAMMA, GREEK CAPITAL LETTER GAMMA */
	0x0000,
	0x0000,
	0x0000,
	0x3449, /*  604, 0x2bb, U+011f, KEY_gbreve, LATIN SMALL LETTER G WITH BREVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc7b9, /* 2026, 0x1000d8e, U+0d8e, KEY_Sinh_rii, SINHALA IRUUYANNA */
	0x0000,
	0x0d06, /*  170, 0xffed, KEY_Hyper_L, Left hyper */
	0x0000,
	0x4cc2, /*  863, 0x10004b9, U+04b9, KEY_Cyrillic_che_vertstroke, CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
	0x0000,
	0x0000,
	0x72a4, /* 1238, 0xce2, U+05d2, KEY_hebrew_gimel, HEBREW LETTER GIMEL */
	0x0d1b, /*  171, 0xffee, KEY_Hyper_R, Right hyper */
	0x79fa, /* 1311, 0xdc6, U+0e26, KEY_Thai_lu, THAI CHARACTER LU */
	0x7f38, /* 1363, 0xff36, KEY_Hangul_Romaja, Hangul Romaja mode */
	0x0000,
	0xa3cf, /* 1719, 0x1002075, U+2075, KEY_fivesuperior, SUPERSCRIPT FIVE */
	0x0000,
	0x0000,
	0x3393, /*  596, 0x2a1, U+0126, KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */
	0x0772, /*   88, 0xffb0, KEY_KP_0 */
	0x02dc, /*   32, 0xff30, KEY_Eisu_toggle, Alphanumeric toggle */
	0x0796, /*   90, 0xffb2, KEY_KP_2 */
	0x07a8, /*   91, 0xffb3, KEY_KP_3 */
	0x035f, /*   38, 0xff52, KEY_Up, Move up, up arrow */
	0x07cc, /*   93, 0xffb5, KEY_KP_5 */
	0x07de, /*   94, 0xffb6, KEY_KP_6 */
	0x07f0, /*   95, 0xffb7, KEY_KP_7 */
	0x0802, /*   96, 0xffb8, KEY_KP_8 */
	0x0814, /*   97, 0xffb9, KEY_KP_9 */
	0x489a, /*  830, 0x1000653, U+0653, KEY_Arabic_madda_above, ARABIC MADDAH ABOVE */
	0xe5fe, /* 2337, 0x1004ff07, KEY_osfBackTab */
	0x0000,
	0x0000,
	0x63b1, /* 1081, 0x8bc, U+2264, KEY_lessthanequal, LESS-THAN OR EQUAL TO */
	0x0000,
	0x0000,
	0x2cac, /*  512, 0xe6, U+00e6, KEY_ae, LATIN SMALL LETTER AE */
	0x0000,
	0xb730, /* 1888, 0x1002881, U+2881, KEY_braille_dots_18, BRAILLE PATTERN DOTS-18 */
	0xc7e4, /* 2028, 0x1000d90, U+0d90, KEY_Sinh_luu, SINHALA ILUUYANNA */
	0x0000,
	0xaf8d, /* 1825, 0x1002842, U+2842, KEY_braille_dots_27, BRAILLE PATTERN DOTS-27 */
	0x0000,
	0x1c79, /*  306, 0xfea0, KEY_ch */
	0xabf8, /* 1795, 0x1002824, U+2824, KEY_braille_dots_36, BRAILLE PATTERN DOTS-36 */
	0x0000,
	0x0000,
	0x6668, /* 1111, 0x9e3, U+240c, KEY_ff, SYMBOL FOR FORM FEED */
	0x0000,
	0x0000,
	0xb788, /* 1891, 0x1002884, U+2884, KEY_braille_dots_38, BRAILLE PATTERN DOTS-38 */
	0x2255, /*  375, 0x40, U+0040, KEY_at, COMMERCIAL AT */
	0x0000,
	0x6678, /* 1112, 0x9e4, U+240d, KEY_cr, SYMBOL FOR CARRIAGE RETURN */
	0x2ac4, /*  489, 0xd1, U+00d1, KEY_Ntilde, LATIN CAPITAL LETTER N WITH TILDE */
	0x6c0c, /* 1171, 0xad2, U+201c, KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */
	0x5cfc, /* 1016, 0x7cb, U+039b, KEY_Greek_LAMDA, GREEK CAPITAL LETTER LAMDA */
	0x720a, /* 1232, 0xbdc, U+22a3, KEY_lefttack, LEFT TACK */
	0x0000,
	0x6688, /* 1113, 0x9e5, U+240a, KEY_lf, SYMBOL FOR LINE FEED */
	0x3503, /*  612, 0x2e5, U+010b, KEY_cabovedot, LATIN SMALL LETTER C WITH DOT ABOVE */
	0x065b, /*   76, 0xff9b, KEY_KP_Page_Down */
	0xa310, /* 1711, 0x10020a7, U+20a7, KEY_PesetaSign, PESETA SIGN */
	0x0000,
	0x3adc, /*  681, 0x13bd, U+0153, KEY_oe, LATIN SMALL LIGATURE OE */
	0x6658, /* 1110, 0x9e2, U+2409, KEY_ht, SYMBOL FOR HORIZONTAL TABULATION */
	0x0000,
	0x75df, /* 1270, 0xcf9, U+05e9, KEY_hebrew_shin, HEBREW LETTER SHIN */
	0x0000,
	0x0c07, /*  158, 0xffe1, KEY_Shift_L, Left shift */
	0x0000,
	0x0000,
	0x2e97, /*  535, 0xfc, U+00fc, KEY_udiaeresis, LATIN SMALL LETTER U WITH DIAERESIS */
	0xce5d, /* 2101, 0x1008ff10, KEY_XF86Standby, System into standby mode */
	0x0000,
	0x0c1c, /*  159, 0xffe2, KEY_Shift_R, Right shift */
	0x1d7a, /*  318, 0xfd07, KEY_3270_EraseInput */
	0x0000,
	0x0000,
	0x73b9, /* 1249, 0xce8, KEY_hebrew_teth, deprecated */
	0x757c, /* 1266, 0xcf6, KEY_hebrew_zadi, deprecated */
	0x309b, /*  560, 0x1bd, U+02dd, KEY_doubleacute, DOUBLE ACUTE ACCENT */
	0xc77b, /* 2023, 0x1000d8b, U+0d8b, KEY_Sinh_u, SINHALA UYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x2ab3, /*  488, 0xd0, KEY_Eth, deprecated */
	0x7595, /* 1267, 0xcf7, U+05e7, KEY_hebrew_qoph, HEBREW LETTER QOF */
	0x0000,
	0x38b0, /*  656, 0x1000176, U+0176, KEY_Ycircumflex, LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
	0xe9f7, /* 2380, 0x1000ff72, KEY_InsertChar */
	0x6899, /* 1136, 0xaa6, U+2008, KEY_punctspace, PUNCTUATION SPACE */
	0x0000,
	0x66a8, /* 1115, 0x9e9, U+240b, KEY_vt, SYMBOL FOR VERTICAL TABULATION */
	0x0000,
	0x733d, /* 1244, 0xce6, U+05d6, KEY_hebrew_zain, HEBREW LETTER ZAYIN */
	0x0000,
	0x0000,
	0x3f12, /*  730, 0x4cb, U+30d2, KEY_kana_HI, KATAKANA LETTER HI */
	0xccb9, /* 2085, 0x1000dd9, U+0dd9, KEY_Sinh_e2, SINHALA KOMBUVA */
	0x0000,
	0x0000,
	0x3f7b, /*  735, 0x4cf, U+30de, KEY_kana_MA, KATAKANA LETTER MA */
	0x1406, /*  230, 0xfe61, KEY_dead_hook */
	0x0000,
	0xc6e9, /* 2016, 0x1000d83, U+0d83, KEY_Sinh_h2, SINHALA VISARGAYA */
	0x0000,
	0x7936, /* 1303, 0xdbe, U+0e1e, KEY_Thai_phophan, THAI CHARACTER PHO PHAN */
	0x0000,
	0x4741, /*  817, 0x5e7, U+0647, KEY_Arabic_ha, ARABIC LETTER HEH */
	0x3f66, /*  734, 0x4ce, U+30db, KEY_kana_HO, KATAKANA LETTER HO */
	0x1392, /*  226, 0xfe5d, KEY_dead_iota */
	0x141d, /*  231, 0xfe62, KEY_dead_horn */
	0x0000,
	0x3f27, /*  731, 0x4cc, U+30d5, KEY_kana_FU, KATAKANA LETTER HU */
	0x0000,
	0x0000,
	0x0000,
	0x2b19, /*  493, 0xd5, U+00d5, KEY_Otilde, LATIN CAPITAL LETTER O WITH TILDE */
	0xa39b, /* 1717, 0x1002070, U+2070, KEY_zerosuperior, SUPERSCRIPT ZERO */
	0x0000,
	0xeb0b, /* 2391, 0x100000af, KEY_lira */
	0x3ea9, /*  725, 0x4c6, U+30cb, KEY_kana_NI, KATAKANA LETTER NI */
	0x0000,
	0x8fa8, /* 1512, 0x1000542, U+0542, KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */
	0x0000,
	0x3d95, /*  712, 0x4bb, U+30b5, KEY_kana_SA, KATAKANA LETTER SA */
	0x0000,
	0xe565, /* 2330, 0x100000ee, KEY_hpYdiaeresis */
	0x0e33, /*  181, 0xfe06, KEY_ISO_Group_Latch */
	0x3fcf, /*  739, 0x4d3, U+30e2, KEY_kana_MO, KATAKANA LETTER MO */
	0xcc78, /* 2082, 0x1000dd4, U+0dd4, KEY_Sinh_u2, SINHALA PAA-PILLA */
	0x0000,
	0x3c81, /*  699, 0x4af, U+30c3, KEY_kana_tsu, KATAKANA LETTER SMALL TU */
	0x3dd5, /*  715, 0x4be, U+30bb, KEY_kana_SE, KATAKANA LETTER SE */
	0x72be, /* 1239, 0xce2, KEY_hebrew_gimmel, deprecated */
	0x43c5, /*  783, 0x5bf, U+061f, KEY_Arabic_question_mark, ARABIC QUESTION MARK */
	0x0000,
	0x4038, /*  744, 0x4d8, U+30ea, KEY_kana_RI, KATAKANA LETTER RI */
	0x2854, /*  461, 0xb6, U+00b6, KEY_paragraph, PILCROW SIGN */
	0xcac9, /* 2062, 0x1000db6, U+0db6, KEY_Sinh_ba, SINHALA BAYANNA */
	0x0000,
	0x408c, /*  748, 0x4dc, U+30ef, KEY_kana_WA, KATAKANA LETTER WA */
	0x82f3, /* 1395, 0xeb6, KEY_Hangul_SsangSios */
	0xdc9b, /* 2244, 0x1008ffa3, KEY_XF86Red, Red button */
	0x0000,
	0x3ebe, /*  726, 0x4c7, U+30cc, KEY_kana_NU, KATAKANA LETTER NU */
	0x6aea, /* 1161, 0xac6, U+215e, KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */
	0x3e14, /*  718, 0x4c1, U+30c1, KEY_kana_CHI, KATAKANA LETTER TI */
	0xcbf5, /* 2076, 0x1000dca, U+0dca, KEY_Sinh_al, SINHALA AL-LAKUNA */
	0x4077, /*  747, 0x4db, U+30ed, KEY_kana_RO, KATAKANA LETTER RO */
	0x0000,
	0x21ee, /*  370, 0x3b, U+003b, KEY_semicolon, SEMICOLON */
	0x0000,
	0xe123, /* 2288, 0xff69, KEY_SunStop, Same as XK_Cancel */
	0x0000,
	0xc923, /* 2043, 0x1000da2, U+0da2, KEY_Sinh_ja, SINHALA JAYANNA */
	0x0000,
	0x3e7f, /*  723, 0x4c4, U+30c8, KEY_kana_TO, KATAKANA LETTER TO */
	0x894d, /* 1454, 0xef1, KEY_Hangul_SunkyeongeumPieub */
	0xcb49, /* 2068, 0x1000dbd, U+0dbd, KEY_Sinh_la, SINHALA DANTAJA LAYANNA */
	0x048f, /*   54, 0xff68, KEY_Find, Find, search */
	0x404d, /*  745, 0x4d9, U+30eb, KEY_kana_RU, KATAKANA LETTER RU */
	0x0000,
	0xca72, /* 2058, 0x1000db1, U+0db1, KEY_Sinh_na, SINHALA DANTAJA NAYANNA */
	0x0000,
	0x0d30, /*  172, 0xfe01, KEY_ISO_Lock */
	0x0000,
	0x777c, /* 1286, 0xdad, U+0e0d, KEY_Thai_yoying, THAI CHARACTER YO YING */
	0x04b5, /*   56, 0xff6a, KEY_Help, Help */
	0x3e55, /*  721, 0x4c2, KEY_kana_TU, deprecated */
	0x0000,
	0xcb34, /* 2067, 0x1000dbb, U+0dbb, KEY_Sinh_ra, SINHALA RAYANNA */
	0x0000,
	0x5e49, /* 1030, 0x7d9, U+03a9, KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */
	0x0000,
	0x14a7, /*  236, 0xfe65, KEY_dead_dasia, alias for dead_abovereversedcomma */
	0x0000,
	0x0000,
	0xe9c7, /* 2378, 0x1000ff70, KEY_InsertLine */
	0xa011, /* 1677, 0x1001ee1, U+1ee1, KEY_ohorntilde, LATIN SMALL LETTER O WITH HORN AND TILDE */
	0x0000,
	0x0000,
	0x6f7d, /* 1204, 0xaf5, U+266f, KEY_musicalsharp, MUSIC SHARP SIGN */
	0x0000,
	0x0000,
	0xcb1f, /* 2066, 0x1000dba, U+0dba, KEY_Sinh_ya, SINHALA YAYANNA */
	0x6ad1, /* 1160, 0xac5, U+215d, KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */
	0x0000,
	0x0000,
	0x3ff9, /*  741, 0x4d5, U+30e6, KEY_kana_YU, KATAKANA LETTER YU */
	0x88ad, /* 1449, 0xeec, KEY_Hangul_J_Tieut */
	0x8973, /* 1455, 0xef2, KEY_Hangul_PanSios */
	0x034d, /*   37, 0xff51, KEY_Left, Move left, left arrow */
	0xcf0b, /* 2107, 0x1008ff16, KEY_XF86AudioPrev, Previous track */
	0x0000,
	0x0000,
	0x0382, /*   40, 0xff54, KEY_Down, Move down, down arrow */
	0xc78f, /* 2024, 0x1000d8c, U+0d8c, KEY_Sinh_uu, SINHALA UUYANNA */
	0x11ec, /*  210, 0xfe33, KEY_ISO_Center_Object */
	0x033b, /*   36, 0xff50, KEY_Home */
	0x5313, /*  923, 0x6c4, U+0434, KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */
	0x0000,
	0x0000,
	0x5ce3, /* 1015, 0x7ca, U+039a, KEY_Greek_KAPPA, GREEK CAPITAL LETTER KAPPA */
	0x70b7, /* 1216, 0xba6, KEY_rightcaret, (U+003E GREATER-THAN SIGN) */
	0x0000,
	0x8fde, /* 1514, 0x1000543, U+0543, KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3daa, /*  713, 0x4bc, U+30b7, KEY_kana_SHI, KATAKANA LETTER SI */
	0x4af5, /*  850, 0x100049c, U+049c, KEY_Cyrillic_KA_vertstroke, CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
	0x0000,
	0x120b, /*  211, 0xfe34, KEY_ISO_Enter */
	0x0000,
	0x0000,
	0x047d, /*   53, 0xff67, KEY_Menu */
	0x0000,
	0x0000,
	0xbb3d, /* 1922, 0x10028a3, U+28a3, KEY_braille_dots_1268, BRAILLE PATTERN DOTS-1268 */
	0x5103, /*  903, 0x6b6, U+0406, KEY_Ukrainian_I, CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x0000,
	0xe918, /* 2370, 0x1004ff73, KEY_osfReselect */
	0x0000,
	0x34a6, /*  608, 0x2d5, U+0120, KEY_Gabovedot, LATIN CAPITAL LETTER G WITH DOT ABOVE */
	0x01f0, /*   22, 0xff26, KEY_Katakana, to Katakana */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x046b, /*   52, 0xff66, KEY_Redo, Redo, again */
	0x0000,
	0x0000,
	0x8155, /* 1381, 0xea8, KEY_Hangul_SsangDikeud */
	0x0000,
	0x1a02, /*  285, 0xfee9, KEY_Pointer_Button1 */
	0x1a1f, /*  286, 0xfeea, KEY_Pointer_Button2 */
	0x1a3c, /*  287, 0xfeeb, KEY_Pointer_Button3 */
	0x1a59, /*  288, 0xfeec, KEY_Pointer_Button4 */
	0x1a76, /*  289, 0xfeed, KEY_Pointer_Button5 */
	0xa284, /* 1705, 0x10020a1, U+20a1, KEY_ColonSign, COLON SIGN */
	0x7f1f, /* 1362, 0xff35, KEY_Hangul_Jamo, Hangul Jamo mode */
	0x7985, /* 1306, 0xdc1, U+0e21, KEY_Thai_moma, THAI CHARACTER MO MA */
	0x03bc, /*   43, 0xff56, KEY_Next, Next */
	0x0000,
	0x0000,
	0x8d0c, /* 1486, 0x1000535, U+0535, KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */
	0x0000,
	0x3e3f, /*  720, 0x4c2, U+30c4, KEY_kana_TSU, KATAKANA LETTER TU */
	0x0000,
	0x50cf, /*  901, 0x6b4, KEY_Ukranian_JE, deprecated */
	0x0000,
	0x4ea4, /*  880, 0x6a6, U+0456, KEY_Ukrainian_i, CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x4dcb, /*  872, 0x10004ee, U+04ee, KEY_Cyrillic_U_macron, CYRILLIC CAPITAL LETTER U WITH MACRON */
	0xe2f2, /* 2305, 0x1000fe2c, KEY_Dcedilla_accent */
	0x0000,
	0x0000,
	0x01da, /*   21, 0xff25, KEY_Hiragana, to Hiragana */
	0x98ef, /* 1606, 0x100018f, U+018f, KEY_SCHWA, LATIN CAPITAL LETTER SCHWA */
	0x0000,
	0x0000,
	0x3794, /*  643, 0x3de, U+016a, KEY_Umacron, LATIN CAPITAL LETTER U WITH MACRON */
	0x0000,
	0x0000,
	0x27fd, /*  457, 0xb2, U+00b2, KEY_twosuperior, SUPERSCRIPT TWO */
	0x7643, /* 1274, 0xda1, U+0e01, KEY_Thai_kokai, THAI CHARACTER KO KAI */
	0x6a35, /* 1154, 0xabc, KEY_leftanglebracket, (U+27E8 MATHEMATICAL LEFT ANGLE BRACKET) */
	0x5648, /*  955, 0x6e4, U+0414, KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */
	0x0000,
	0x0e16, /*  180, 0xff7e, KEY_ISO_Group_Shift, Alias for mode_switch */
	0xe9b0, /* 2377, 0x1000ff6f, KEY_ClearLine */
	0xcfd9, /* 2115, 0x1008ff1e, KEY_XF86Memo, Invoke Memo taking program */
	0x2f16, /*  541, 0x1a3, U+0141, KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */
	0xcb09, /* 2065, 0x1000db9, U+0db9, KEY_Sinh_mba, SINHALA AMBA BAYANNA */
	0x0000,
	0xda72, /* 2223, 0x1008ff8e, KEY_XF86Messenger, as in instant messaging */
	0xe14e, /* 2290, 0x1005ff71, KEY_SunFront */
	0x0000,
	0x334d, /*  593, 0x1fb, U+0171, KEY_udoubleacute, LATIN SMALL LETTER U WITH DOUBLE ACUTE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa4a1, /* 1727, 0x1002083, U+2083, KEY_threesubscript, SUBSCRIPT THREE */
	0x514e, /*  906, 0x6b7, KEY_Ukranian_YI, deprecated */
	0x6996, /* 1147, 0xab3, U+2156, KEY_twofifths, VULGAR FRACTION TWO FIFTHS */
	0x0000,
	0x0000,
	0x0000,
	0xdd82, /* 2253, 0x1008fe01, KEY_XF86Switch_VT_1 */
	0x0459, /*   51, 0xff65, KEY_Undo */
	0x0000,
	0x0000,
	0x5d8c, /* 1022, 0x7d0, U+03a0, KEY_Greek_PI, GREEK CAPITAL LETTER PI */
	0x0000,
	0xd586, /* 2171, 0x1008ff56, KEY_XF86Close, Close window */
	0xabda, /* 1794, 0x1002823, U+2823, KEY_braille_dots_126, BRAILLE PATTERN DOTS-126 */
	0x0000,
	0x0000,
	0x5d2f, /* 1018, 0x7cc, U+039c, KEY_Greek_MU, GREEK CAPITAL LETTER MU */
	0x9314, /* 1546, 0x1000553, U+0553, KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */
	0x5d45, /* 1019, 0x7cd, U+039d, KEY_Greek_NU, GREEK CAPITAL LETTER NU */
	0x0000,
	0xe04d, /* 2279, 0x1005ff60, KEY_SunSys_Req */
	0xe4c3, /* 2324, 0x100000a9, KEY_hpmute_grave */
	0xde6a, /* 2261, 0x1008fe09, KEY_XF86Switch_VT_9 */
	0x41d6, /*  763, 0x100066a, U+066a, KEY_Arabic_percent, ARABIC PERCENT SIGN */
	0x9061, /* 1519, 0x1000575, U+0575, KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */
	0xb76a, /* 1890, 0x1002883, U+2883, KEY_braille_dots_128, BRAILLE PATTERN DOTS-128 */
	0x5d5b, /* 1020, 0x7ce, U+039e, KEY_Greek_XI, GREEK CAPITAL LETTER XI */
	0x8788, /* 1439, 0xee2, KEY_Hangul_J_RieulHieuh */
	0x0000,
	0x64f7, /* 1095, 0x8da, U+2282, KEY_includedin, SUBSET OF */
	0x0000,
	0x3927, /*  661, 0x1001e0b, U+1e0b, KEY_dabovedot, LATIN SMALL LETTER D WITH DOT ABOVE */
	0xdb70, /* 2233, 0x1008ff98, KEY_XF86AudioRepeat, toggle repeat mode */
	0x774b, /* 1284, 0xdab, U+0e0b, KEY_Thai_soso, THAI CHARACTER SO SO */
	0xe10e, /* 2287, 0xff68, KEY_SunFind, Same as XK_Find */
	0x0000,
	0xe8b6, /* 2366, 0x1004ff69, KEY_osfCancel */
	0x8345, /* 1398, 0xeb9, KEY_Hangul_SsangJieuj */
	0x2816, /*  458, 0xb3, U+00b3, KEY_threesuperior, SUPERSCRIPT THREE */
	0x12f1, /*  220, 0xfe57, KEY_dead_diaeresis */
	0x818f, /* 1383, 0xeaa, KEY_Hangul_RieulKiyeog */
	0x0000,
	0x4119, /*  754, 0x10006f1, U+06f1, KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */
	0x0000,
	0x0000,
	0x9242, /* 1538, 0x100054f, U+054f, KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */
	0x17c9, /*  266, 0xfe71, KEY_AccessX_Feedback_Enable */
	0x65e2, /* 1105, 0x8fd, U+2192, KEY_rightarrow, RIGHTWARDS ARROW */
	0x60e2, /* 1057, 0xff7e, KEY_Greek_switch, Alias for mode_switch */
	0x0000,
	0x0000,
	0x5bbd, /* 1004, 0x7ba, U+03b0, KEY_Greek_upsilonaccentdieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
	0x0000,
	0xde87, /* 2262, 0x1008fe0a, KEY_XF86Switch_VT_10 */
	0x20a1, /*  351, 0x28, U+0028, KEY_parenleft, LEFT PARENTHESIS */
	0xdec3, /* 2264, 0x1008fe0c, KEY_XF86Switch_VT_12 */
	0x06fc, /*   83, 0xffab, KEY_KP_Add */
	0x3a24, /*  672, 0x1001e80, U+1e80, KEY_Wgrave, LATIN CAPITAL LETTER W WITH GRAVE */
	0x0000,
	0xe164, /* 2291, 0x1005ff72, KEY_SunCopy */
	0x0000,
	0x92de, /* 1544, 0x1000552, U+0552, KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */
	0xc2e2, /* 1984, 0x10028e1, U+28e1, KEY_braille_dots_1678, BRAILLE PATTERN DOTS-1678 */
	0x4e70, /*  878, 0x6a4, KEY_Ukranian_je, deprecated */
	0x263e, /*  437, 0x7d, U+007d, KEY_braceright, RIGHT CURLY BRACKET */
	0x0000,
	0x74a5, /* 1258, 0xcf1, U+05e1, KEY_hebrew_samech, HEBREW LETTER SAMEKH */
	0x822a, /* 1388, 0xeaf, KEY_Hangul_RieulPhieuf */
	0x0000,
	0x0000,
	0x82da, /* 1394, 0xeb5, KEY_Hangul_Sios */
	0x0000,
	0x91c3, /* 1533, 0x100057c, U+057c, KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */
	0x0000,
	0x0000,
	0x0000,
	0x6ff9, /* 1209, 0xafa, U+2315, KEY_telephonerecorder, TELEPHONE RECORDER */
	0x9fcb, /* 1674, 0x1001ede, U+1ede, KEY_Ohornhook, LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
	0xd2c6, /* 2144, 0x1008ff3b, KEY_XF86BrightnessAdjust, Invoke brightness adj. UI */
	0x0000,
	0x0000,
	0xe57f, /* 2331, 0x100000ee, KEY_hpIO */
	0x74c0, /* 1259, 0xcf1, KEY_hebrew_samekh, deprecated */
	0x3590, /*  618, 0x3a2, U+0138, KEY_kra, LATIN SMALL LETTER KRA */
	0x0000,
	0xbef1, /* 1952, 0x10028c1, U+28c1, KEY_braille_dots_178, BRAILLE PATTERN DOTS-178 */
	0x0000,
	0x0000,
	0x0000,
	0x93de, /* 1554, 0x100055a, U+055a, KEY_Armenian_apostrophe, ARMENIAN APOSTROPHE */
	0x0000,
	0x382a, /*  650, 0x3f3, U+0137, KEY_kcedilla, LATIN SMALL LETTER K WITH CEDILLA */
	0x0675, /*   77, 0xff9c, KEY_KP_End */
	0x0000,
	0x0000,
	0x8b52, /* 1470, 0x100058a, U+058a, KEY_Armenian_hyphen, ARMENIAN HYPHEN */
	0x0000,
	0x4eef, /*  883, 0x6a7, KEY_Ukranian_yi, deprecated */
	0x11d1, /*  209, 0xfe32, KEY_ISO_Emphasize */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8927, /* 1453, 0xef0, KEY_Hangul_SunkyeongeumMieum */
	0x0000,
	0x0000,
	0x5fe9, /* 1047, 0x7f0, U+03c0, KEY_Greek_pi, GREEK SMALL LETTER PI */
	0x0000,
	0x26a0, /*  441, 0xa2, U+00a2, KEY_cent, CENT SIGN */
	0x2688, /*  440, 0xa1, U+00a1, KEY_exclamdown, INVERTED EXCLAMATION MARK */
	0x77c9, /* 1289, 0xdb0, U+0e10, KEY_Thai_thothan, THAI CHARACTER THO THAN */
	0xd5c8, /* 2174, 0x1008ff59, KEY_XF86Display, Output switch key */
	0x5f8c, /* 1043, 0x7ec, U+03bc, KEY_Greek_mu, GREEK SMALL LETTER MU */
	0xe407, /* 2316, 0x1000ff74, KEY_hpBackTab */
	0x5fa2, /* 1044, 0x7ed, U+03bd, KEY_Greek_nu, GREEK SMALL LETTER NU */
	0xcd7f, /* 2094, 0x1000df4, U+0df4, KEY_Sinh_kunddaliya, SINHALA KUNDDALIYA */
	0x0000,
	0x18aa, /*  273, 0xfe78, KEY_Overlay1_Enable */
	0x0000,
	0x3aec, /*  682, 0x13be, U+0178, KEY_Ydiaeresis, LATIN CAPITAL LETTER Y WITH DIAERESIS */
	0x9093, /* 1521, 0x1000576, U+0576, KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */
	0x0000,
	0x5fb8, /* 1045, 0x7ee, U+03be, KEY_Greek_xi, GREEK SMALL LETTER XI */
	0xa223, /* 1700, 0x10001a0, U+01a0, KEY_Ohorn, LATIN CAPITAL LETTER O WITH HORN */
	0x053a, /*   62, 0xff89, KEY_KP_Tab */
	0x0000,
	0x28e8, /*  467, 0xbc, U+00bc, KEY_onequarter, VULGAR FRACTION ONE QUARTER */
	0x6e77, /* 1193, 0xae9, KEY_filledtribulletdown, (U+25BC BLACK DOWN-POINTING TRIANGLE) */
	0x0000,
	0x83ce, /* 1403, 0xebe, KEY_Hangul_Hieuh */
	0xd611, /* 2177, 0x1008ff5c, KEY_XF86Excel, Launch spread sheet */
	0xdc82, /* 2243, 0x1008ffa2, KEY_XF86TopMenu, Go to a top-level menu in a video */
	0x6ecb, /* 1196, 0xaec, U+2663, KEY_club, BLACK CLUB SUIT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7d6c, /* 1345, 0xdeb, U+0e4b, KEY_Thai_maichattawa, THAI CHARACTER MAI CHATTAWA */
	0xa827, /* 1762, 0x1002803, U+2803, KEY_braille_dots_12, BRAILLE PATTERN DOTS-12 */
	0x0ea9, /*  185, 0xfe0a, KEY_ISO_Prev_Group */
	0x0000,
	0x1849, /*  270, 0xfe75, KEY_StickyKeys_Enable */
	0x89dc, /* 1458, 0xef5, KEY_Hangul_YeorinHieuh */
	0x0000,
	0xd8bb, /* 2205, 0x1008ff7b, KEY_XF86Send, Send mail, file, object */
	0x0000,
	0x0000,
	0xc005, /* 1961, 0x10028ca, U+28ca, KEY_braille_dots_2478, BRAILLE PATTERN DOTS-2478 */
	0xa985, /* 1774, 0x100280f, U+280f, KEY_braille_dots_1234, BRAILLE PATTERN DOTS-1234 */
	0x8704, /* 1435, 0xede, KEY_Hangul_J_RieulPieub */
	0x5e1b, /* 1028, 0x7d7, U+03a7, KEY_Greek_CHI, GREEK CAPITAL LETTER CHI */
	0x6e1a, /* 1190, 0xae6, KEY_enfilledcircbullet, (U+2022 BULLET) */
	0x67f2, /* 1128, 0x9f6, U+2534, KEY_bott, BOX DRAWINGS LIGHT UP AND HORIZONTAL */
	0xe0f8, /* 2286, 0xff66, KEY_SunAgain, Same as XK_Redo */
	0x6ca9, /* 1177, 0xad9, U+271d, KEY_latincross, LATIN CROSS */
	0x0000,
	0xeb1d, /* 2392, 0x100000be, KEY_guilder */
	0xbd11, /* 1937, 0x10028b2, U+28b2, KEY_braille_dots_2568, BRAILLE PATTERN DOTS-2568 */
	0x0000,
	0x0000,
	0xb7e1, /* 1894, 0x1002887, U+2887, KEY_braille_dots_1238, BRAILLE PATTERN DOTS-1238 */
	0x0000,
	0x0000,
	0xb099, /* 1834, 0x100284b, U+284b, KEY_braille_dots_1247, BRAILLE PATTERN DOTS-1247 */
	0x0000,
	0x6dc8, /* 1187, 0xae3, KEY_opentribulletup, (U+25B3 WHITE UP-POINTING TRIANGLE) */
	0xb859, /* 1898, 0x100288b, U+288b, KEY_braille_dots_1248, BRAILLE PATTERN DOTS-1248 */
	0xc101, /* 1969, 0x10028d2, U+28d2, KEY_braille_dots_2578, BRAILLE PATTERN DOTS-2578 */
	0x0000,
	0xb18d, /* 1842, 0x1002853, U+2853, KEY_braille_dots_1257, BRAILLE PATTERN DOTS-1257 */
	0x7730, /* 1283, 0xdaa, U+0e0a, KEY_Thai_chochang, THAI CHARACTER CHO CHANG */
	0x0000,
	0x1f30, /*  336, 0xfd19, KEY_3270_ChangeScreen */
	0x0000,
	0x0da0, /*  176, 0xfe05, KEY_ISO_Level3_Lock */
	0x7563, /* 1265, 0xcf6, U+05e6, KEY_hebrew_zade, HEBREW LETTER TSADI */
	0x0000,
	0x1cdc, /*  312, 0xfd01, KEY_3270_Duplicate */
	0x8c8c, /* 1481, 0x1000562, U+0562, KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */
	0x0000,
	0x0000,
	0x14dd, /*  238, 0xfe67, KEY_dead_belowring */
	0x0000,
	0xc727, /* 2019, 0x1000d87, U+0d87, KEY_Sinh_ae, SINHALA AEYANNA */
	0x4b83, /*  854, 0x10004ae, U+04ae, KEY_Cyrillic_U_straight, CYRILLIC CAPITAL LETTER STRAIGHT U */
	0xcef0, /* 2106, 0x1008ff15, KEY_XF86AudioStop, Stop playing audio */
	0x0000,
	0xc301, /* 1985, 0x10028e2, U+28e2, KEY_braille_dots_2678, BRAILLE PATTERN DOTS-2678 */
	0x0000,
	0x2205, /*  371, 0x3c, U+003c, KEY_less, LESS-THAN SIGN */
	0xae76, /* 1816, 0x1002839, U+2839, KEY_braille_dots_1456, BRAILLE PATTERN DOTS-1456 */
	0x47c0, /*  822, 0x5eb, U+064b, KEY_Arabic_fathatan, ARABIC FATHATAN */
	0x0000,
	0xb246, /* 1848, 0x1002859, U+2859, KEY_braille_dots_1457, BRAILLE PATTERN DOTS-1457 */
	0x0000,
	0x1fa6, /*  340, 0xfd1d, KEY_3270_PrintScreen */
	0xbf6a, /* 1956, 0x10028c5, U+28c5, KEY_braille_dots_1378, BRAILLE PATTERN DOTS-1378 */
	0x9178, /* 1530, 0x100054b, U+054b, KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */
	0xa33f, /* 1713, 0x10020a9, U+20a9, KEY_WonSign, WON SIGN */
	0xb436, /* 1864, 0x1002869, U+2869, KEY_braille_dots_1467, BRAILLE PATTERN DOTS-1467 */
	0x0000,
	0x49f3, /*  842, 0x10006c1, U+06c1, KEY_Arabic_heh_goal, ARABIC LETTER HEH GOAL */
	0xb8b5, /* 1901, 0x100288e, U+288e, KEY_braille_dots_2348, BRAILLE PATTERN DOTS-2348 */
	0x0000,
	0x39df, /*  669, 0x1001e61, U+1e61, KEY_sabovedot, LATIN SMALL LETTER S WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0xbfe6, /* 1960, 0x10028c9, U+28c9, KEY_braille_dots_1478, BRAILLE PATTERN DOTS-1478 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0f7c, /*  192, 0xfe21, KEY_ISO_Move_Line_Up */
	0xbcf2, /* 1936, 0x10028b1, U+28b1, KEY_braille_dots_1568, BRAILLE PATTERN DOTS-1568 */
	0xc8a1, /* 2037, 0x1000d9c, U+0d9c, KEY_Sinh_ga, SINHALA GAYANNA */
	0x7cac, /* 1338, 0xde4, U+0e44, KEY_Thai_saraaimaimalai, THAI CHARACTER SARA AI MAIMALAI */
	0x4619, /*  805, 0x5d6, U+0636, KEY_Arabic_dad, ARABIC LETTER DAD */
	0x0000,
	0x365d, /*  628, 0x3b6, U+013c, KEY_lcedilla, LATIN SMALL LETTER L WITH CEDILLA */
	0xbf89, /* 1957, 0x10028c6, U+28c6, KEY_braille_dots_2378, BRAILLE PATTERN DOTS-2378 */
	0x0000,
	0x0000,
	0xcbb5, /* 2073, 0x1000dc4, U+0dc4, KEY_Sinh_ha, SINHALA HAYANNA */
	0x12a5, /*  217, 0xfe54, KEY_dead_macron */
	0x44bb, /*  791, 0x5c8, U+0628, KEY_Arabic_beh, ARABIC LETTER BEH */
	0xbc15, /* 1929, 0x10028aa, U+28aa, KEY_braille_dots_2468, BRAILLE PATTERN DOTS-2468 */
	0xe7ac, /* 2355, 0x1004ff58, KEY_osfBeginLine */
	0x0000,
	0x0000,
	0x59b4, /*  988, 0x7a5, KEY_Greek_IOTAdiaeresis, old typo */
	0x8745, /* 1437, 0xee0, KEY_Hangul_J_RieulTieut */
	0x9c81, /* 1643, 0x1001ebf, U+1ebf, KEY_ecircumflexacute, LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0xd6cd, /* 2185, 0x1008ff65, KEY_XF86MenuKB, distingush keyboard from PB */
	0x0000,
	0x743b, /* 1254, 0xced, U+05dd, KEY_hebrew_finalmem, HEBREW LETTER FINAL MEM */
	0x0000,
	0x0000,
	0x0df9, /*  179, 0xfe13, KEY_ISO_Level5_Lock */
	0x0000,
	0x5a3a, /*  992, 0x7ab, U+038f, KEY_Greek_OMEGAaccent, GREEK CAPITAL LETTER OMEGA WITH TONOS */
	0x0000,
	0x7178, /* 1225, 0xbcc, U+2395, KEY_quad, APL FUNCTIONAL SYMBOL QUAD */
	0x77af, /* 1288, 0xdaf, U+0e0f, KEY_Thai_topatak, THAI CHARACTER TO PATAK */
	0x8ec0, /* 1503, 0x100056d, U+056d, KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */
	0x0225, /*   24, 0xff28, KEY_Zenkaku, to Zenkaku */
	0xafaa, /* 1826, 0x1002843, U+2843, KEY_braille_dots_127, BRAILLE PATTERN DOTS-127 */
	0xb494, /* 1867, 0x100286c, U+286c, KEY_braille_dots_3467, BRAILLE PATTERN DOTS-3467 */
	0x97a8, /* 1591, 0x10010f4, U+10f4, KEY_Georgian_har, GEORGIAN LETTER HAR */
	0x0000,
	0xaaad, /* 1784, 0x1002819, U+2819, KEY_braille_dots_145, BRAILLE PATTERN DOTS-145 */
	0xda8d, /* 2224, 0x1008ff8f, KEY_XF86WebCam, Launch web camera app. */
	0xa967, /* 1773, 0x100280e, U+280e, KEY_braille_dots_234, BRAILLE PATTERN DOTS-234 */
	0x20e6, /*  354, 0x2b, U+002b, KEY_plus, PLUS SIGN */
	0xaa53, /* 1781, 0x1002816, U+2816, KEY_braille_dots_235, BRAILLE PATTERN DOTS-235 */
	0x0000,
	0xad81, /* 1808, 0x1002831, U+2831, KEY_braille_dots_156, BRAILLE PATTERN DOTS-156 */
	0x46af, /*  811, 0x5e1, U+0641, KEY_Arabic_feh, ARABIC LETTER FEH */
	0xaacb, /* 1785, 0x100281a, U+281a, KEY_braille_dots_245, BRAILLE PATTERN DOTS-245 */
	0x0000,
	0xacab, /* 1801, 0x100282a, U+282a, KEY_braille_dots_246, BRAILLE PATTERN DOTS-246 */
	0x0000,
	0xa6fb, /* 1751, 0xfff3, KEY_braille_dot_3 */
	0xc766, /* 2022, 0x1000d8a, U+0d8a, KEY_Sinh_ii, SINHALA IIYANNA */
	0xb83b, /* 1897, 0x100288a, U+288a, KEY_braille_dots_248, BRAILLE PATTERN DOTS-248 */
	0x0000,
	0xab08, /* 1787, 0x100281c, U+281c, KEY_braille_dots_345, BRAILLE PATTERN DOTS-345 */
	0x9d51, /* 1650, 0x1001ec6, U+1ec6, KEY_Ecircumflexbelowdot, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0xb92f, /* 1905, 0x1002892, U+2892, KEY_braille_dots_258, BRAILLE PATTERN DOTS-258 */
	0xa5dd, /* 1739, 0x100221a, U+221a, KEY_squareroot, SQUARE ROOT */
	0xb35f, /* 1857, 0x1002862, U+2862, KEY_braille_dots_267, BRAILLE PATTERN DOTS-267 */
	0x0000,
	0x7470, /* 1256, 0xcef, U+05df, KEY_hebrew_finalnun, HEBREW LETTER FINAL NUN */
	0x13c8, /*  228, 0xfe5f, KEY_dead_semivoiced_sound */
	0x0000,
	0x0000,
	0xbf0f, /* 1953, 0x10028c2, U+28c2, KEY_braille_dots_278, BRAILLE PATTERN DOTS-278 */
	0x7a41, /* 1314, 0xdc9, U+0e29, KEY_Thai_sorusi, THAI CHARACTER SO RUSI */
	0x527b, /*  917, 0x6bf, U+040f, KEY_Cyrillic_DZHE, CYRILLIC CAPITAL LETTER DZHE */
	0x0000,
	0xae58, /* 1815, 0x1002838, U+2838, KEY_braille_dots_456, BRAILLE PATTERN DOTS-456 */
	0x295e, /*  472, 0xc1, U+00c1, KEY_Aacute, LATIN CAPITAL LETTER A WITH ACUTE */
	0xb228, /* 1847, 0x1002858, U+2858, KEY_braille_dots_457, BRAILLE PATTERN DOTS-457 */
	0x0000,
	0x5c68, /* 1010, 0x7c5, U+0395, KEY_Greek_EPSILON, GREEK CAPITAL LETTER EPSILON */
	0xea27, /* 2382, 0x1000ff74, KEY_BackTab */
	0x0000,
	0x37d3, /*  646, 0x3ec, U+0117, KEY_eabovedot, LATIN SMALL LETTER E WITH DOT ABOVE */
	0x6804, /* 1129, 0x9f7, U+252c, KEY_topt, BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
	0x9c4f, /* 1641, 0x1001ebd, U+1ebd, KEY_etilde, LATIN SMALL LETTER E WITH TILDE */
	0x2e16, /*  529, 0xf7, U+00f7, KEY_division, DIVISION SIGN */
	0x9baf, /* 1634, 0x1001eb6, U+1eb6, KEY_Abrevebelowdot, LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
	0xaae9, /* 1786, 0x100281b, U+281b, KEY_braille_dots_1245, BRAILLE PATTERN DOTS-1245 */
	0x9278, /* 1540, 0x1000550, U+0550, KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */
	0xa7d4, /* 1759, 0x1002800, U+2800, KEY_braille_blank, BRAILLE PATTERN BLANK */
	0xa6c5, /* 1749, 0xfff1, KEY_braille_dot_1 */
	0x0cdc, /*  168, 0xffeb, KEY_Super_L, Left super */
	0x6552, /* 1099, 0x8de, U+2227, KEY_logicaland, LOGICAL AND */
	0xb0d6, /* 1836, 0x100284d, U+284d, KEY_braille_dots_1347, BRAILLE PATTERN DOTS-1347 */
	0x6920, /* 1142, 0xaae, U+2026, KEY_ellipsis, HORIZONTAL ELLIPSIS */
	0xb1ca, /* 1844, 0x1002855, U+2855, KEY_braille_dots_1357, BRAILLE PATTERN DOTS-1357 */
	0x6fe2, /* 1208, 0xaf9, U+260e, KEY_telephone, BLACK TELEPHONE */
	0x0cf1, /*  169, 0xffec, KEY_Super_R, Right super */
	0x6115, /* 1059, 0x8a2, KEY_topleftradical, (U+250C BOX DRAWINGS LIGHT DOWN AND RIGHT) */
	0x562e, /*  954, 0x6e3, U+0426, KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */
	0xad25, /* 1805, 0x100282e, U+282e, KEY_braille_dots_2346, BRAILLE PATTERN DOTS-2346 */
	0xb0f5, /* 1837, 0x100284e, U+284e, KEY_braille_dots_2347, BRAILLE PATTERN DOTS-2347 */
	0x881c, /* 1444, 0xee7, KEY_Hangul_J_SsangSios */
	0xb1e9, /* 1845, 0x1002856, U+2856, KEY_braille_dots_2357, BRAILLE PATTERN DOTS-2357 */
	0xb9a9, /* 1909, 0x1002896, U+2896, KEY_braille_dots_2358, BRAILLE PATTERN DOTS-2358 */
	0xb3d9, /* 1861, 0x1002866, U+2866, KEY_braille_dots_2367, BRAILLE PATTERN DOTS-2367 */
	0xae95, /* 1817, 0x100283a, U+283a, KEY_braille_dots_2456, BRAILLE PATTERN DOTS-2456 */
	0xb265, /* 1849, 0x100285a, U+285a, KEY_braille_dots_2457, BRAILLE PATTERN DOTS-2457 */
	0xba25, /* 1913, 0x100289a, U+289a, KEY_braille_dots_2458, BRAILLE PATTERN DOTS-2458 */
	0xb455, /* 1865, 0x100286a, U+286a, KEY_braille_dots_2467, BRAILLE PATTERN DOTS-2467 */
	0x9dd0, /* 1655, 0x1001ecb, U+1ecb, KEY_ibelowdot, LATIN SMALL LETTER I WITH DOT BELOW */
	0xa782, /* 1756, 0xfff8, KEY_braille_dot_8 */
	0x4693, /*  810, 0x5e0, U+0640, KEY_Arabic_tatweel, ARABIC TATWEEL */
	0xb551, /* 1873, 0x1002872, U+2872, KEY_braille_dots_2567, BRAILLE PATTERN DOTS-2567 */
	0x8fc3, /* 1513, 0x1000572, U+0572, KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */
	0xb2a4, /* 1851, 0x100285c, U+285c, KEY_braille_dots_3457, BRAILLE PATTERN DOTS-3457 */
	0x1068, /*  199, 0xfe28, KEY_ISO_Set_Margin_Right */
	0x4ce7, /*  864, 0x10004ba, U+04ba, KEY_Cyrillic_SHHA, CYRILLIC CAPITAL LETTER SHHA */
	0xbc54, /* 1931, 0x10028ac, U+28ac, KEY_braille_dots_3468, BRAILLE PATTERN DOTS-3468 */
	0x78ec, /* 1300, 0xdbb, U+0e1b, KEY_Thai_popla, THAI CHARACTER PO PLA */
	0x46c7, /*  812, 0x5e2, U+0642, KEY_Arabic_qaf, ARABIC LETTER QAF */
	0xb590, /* 1875, 0x1002874, U+2874, KEY_braille_dots_3567, BRAILLE PATTERN DOTS-3567 */
	0xbd50, /* 1939, 0x10028b4, U+28b4, KEY_braille_dots_3568, BRAILLE PATTERN DOTS-3568 */
	0x5f72, /* 1042, 0x7eb, U+03bb, KEY_Greek_lambda, GREEK SMALL LETTER LAMDA */
	0xc140, /* 1971, 0x10028d4, U+28d4, KEY_braille_dots_3578, BRAILLE PATTERN DOTS-3578 */
	0x2dd1, /*  526, 0xf4, U+00f4, KEY_ocircumflex, LATIN SMALL LETTER O WITH CIRCUMFLEX */
	0x0000,
	0x36fe, /*  636, 0x3cc, U+0116, KEY_Eabovedot, LATIN CAPITAL LETTER E WITH DOT ABOVE */
	0x2cd2, /*  514, 0xe8, U+00e8, KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */
	0xb610, /* 1879, 0x1002878, U+2878, KEY_braille_dots_4567, BRAILLE PATTERN DOTS-4567 */
	0xbdd0, /* 1943, 0x10028b8, U+28b8, KEY_braille_dots_4568, BRAILLE PATTERN DOTS-4568 */
	0x0000,
	0x4230, /*  766, 0x100067e, U+067e, KEY_Arabic_peh, ARABIC LETTER PEH */
	0x04a1, /*   55, 0xff69, KEY_Cancel, Cancel, stop, abort, exit */
	0xa6e0, /* 1750, 0xfff2, KEY_braille_dot_2 */
	0x19c2, /*  283, 0xfee7, KEY_Pointer_DownRight */
	0xa716, /* 1752, 0xfff4, KEY_braille_dot_4 */
	0xa731, /* 1753, 0xfff5, KEY_braille_dot_5 */
	0xa74c, /* 1754, 0xfff6, KEY_braille_dot_6 */
	0x02c4, /*   31, 0xff2f, KEY_Eisu_Shift, Alphanumeric Shift */
	0x00aa, /*    8, 0xff15, KEY_Sys_Req */
	0x9dfe, /* 1657, 0x1001ecd, U+1ecd, KEY_obelowdot, LATIN SMALL LETTER O WITH DOT BELOW */
	0x0000,
	0x312f, /*  567, 0x1c8, U+010c, KEY_Ccaron, LATIN CAPITAL LETTER C WITH CARON */
	0xc4c4, /* 1999, 0x10028f0, U+28f0, KEY_braille_dots_5678, BRAILLE PATTERN DOTS-5678 */
	0x87c5, /* 1441, 0xee4, KEY_Hangul_J_Pieub */
	0x0000,
	0x52e0, /*  921, 0x6c2, U+0431, KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */
	0x4631, /*  806, 0x5d7, U+0637, KEY_Arabic_tah, ARABIC LETTER TAH */
	0x0000,
	0x0000,
	0x4ad2, /*  849, 0x100049b, U+049b, KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */
	0x30f3, /*  564, 0x1c3, U+0102, KEY_Abreve, LATIN CAPITAL LETTER A WITH BREVE */
	0x0000,
	0x0000,
	0xe2d2, /* 2304, 0x1000fe5e, KEY_Dcircumflex_accent */
	0xcc62, /* 2081, 0x1000dd3, U+0dd3, KEY_Sinh_ii2, SINHALA DIGA IS-PILLA */
	0x0000,
	0x0000,
	0x8e22, /* 1497, 0x100056a, U+056a, KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */
	0x0000,
	0x0000,
	0x0000,
	0x0ad8, /*  140, 0xffd8, KEY_F27 */
	0x0000,
	0x0000,
	0x0000,
	0x9603, /* 1575, 0x10010e4, U+10e4, KEY_Georgian_phar, GEORGIAN LETTER PHAR */
	0x799c, /* 1307, 0xdc2, U+0e22, KEY_Thai_yoyak, THAI CHARACTER YO YAK */
	0x0000,
	0x0000,
	0xe6c6, /* 2345, 0x1004ff41, KEY_osfPageUp */
	0x0000,
	0x0000,
	0x0000,
	0x316c, /*  570, 0x1cf, U+010e, KEY_Dcaron, LATIN CAPITAL LETTER D WITH CARON */
	0x0000,
	0x2dfe, /*  528, 0xf6, U+00f6, KEY_odiaeresis, LATIN SMALL LETTER O WITH DIAERESIS */
	0x0000,
	0xa08d, /* 1682, 0x1001ee6, U+1ee6, KEY_Uhook, LATIN CAPITAL LETTER U WITH HOOK ABOVE */
	0x4912, /*  834, 0x10006a4, U+06a4, KEY_Arabic_veh, ARABIC LETTER VEH */
	0x0000,
	0x0000,
	0xda2b, /* 2220, 0x1008ff8b, KEY_XF86ZoomIn, zoom in view, map, etc. */
	0x0000,
	0x0000,
	0x2089, /*  350, 0x27, KEY_quoteright, deprecated */
	0x0000,
	0x682b, /* 1131, 0xaa1, U+2003, KEY_emspace, EM SPACE */
	0x0000,
	0xc9be, /* 2050, 0x1000da9, U+0da9, KEY_Sinh_dda, SINHALA DDAYANNA */
	0x0000,
	0x0000,
	0x4554, /*  797, 0x5ce, U+062e, KEY_Arabic_khah, ARABIC LETTER KHAH */
	0x1987, /*  281, 0xfee5, KEY_Pointer_UpRight */
	0x0000,
	0x2762, /*  450, 0xab, U+00ab, KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x8ff9, /* 1515, 0x1000573, U+0573, KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */
	0xc90d, /* 2042, 0x1000da1, U+0da1, KEY_Sinh_cha, SINHALA MAHA. CAYANNA */
	0x0000,
	0x026c, /*   27, 0xff2b, KEY_Touroku, Add to Dictionary */
	0x0000,
	0x7904, /* 1301, 0xdbc, U+0e1c, KEY_Thai_phophung, THAI CHARACTER PHO PHUNG */
	0x0151, /*   15, 0xff3e, KEY_PreviousCandidate */
	0x2a04, /*  480, 0xc9, U+00c9, KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */
	0x0000,
	0x4401, /*  785, 0x5c2, U+0622, KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */
	0x3158, /*  569, 0x1cc, U+011a, KEY_Ecaron, LATIN CAPITAL LETTER E WITH CARON */
	0x0000,
	0x10af, /*  201, 0xfe2a, KEY_ISO_Release_Margin_Right */
	0x0041, /*    3, 0xff0a, KEY_Linefeed, Linefeed, LF */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x294a, /*  471, 0xc0, U+00c0, KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */
	0x0000,
	0xa695, /* 1747, 0x1002262, U+2262, KEY_notidentical, NOT IDENTICAL TO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7df6, /* 1350, 0xdf2, U+0e52, KEY_Thai_leksong, THAI DIGIT TWO */
	0xdfed, /* 2275, 0x1005ff04, KEY_SunFA_Diaeresis */
	0x0000,
	0x8ea6, /* 1502, 0x100053d, U+053d, KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */
	0x9e95, /* 1663, 0x1001ed3, U+1ed3, KEY_ocircumflexgrave, LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x89b5, /* 1457, 0xef4, KEY_Hangul_SunkyeongeumPhieuf */
	0x9cbd, /* 1645, 0x1001ec1, U+1ec1, KEY_ecircumflexgrave, LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x80e2, /* 1377, 0xea4, KEY_Hangul_Nieun */
	0x0000,
	0xe082, /* 2281, 0xff20, KEY_SunCompose, Same as XK_Multi_key */
	0x0000,
	0x6881, /* 1135, 0xaa5, U+2007, KEY_digitspace, FIGURE SPACE */
	0x0000,
	0x00fe, /*   12, 0xff37, KEY_Codeinput */
	0x6969, /* 1145, 0xab1, U+2154, KEY_twothirds, VULGAR FRACTION TWO THIRDS */
	0x8d27, /* 1487, 0x1000565, U+0565, KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */
	0x0000,
	0x0f41, /*  190, 0xfe0f, KEY_ISO_Last_Group_Lock */
	0x0000,
	0x0000,
	0xd9cb, /* 2216, 0x1008ff87, KEY_XF86Video, Launch video player */
	0x00d3, /*   10, 0xffff, KEY_Delete, Delete, rubout */
	0x0000,
	0x1f6c, /*  338, 0xfd1b, KEY_3270_ExSelect */
	0x0000,
	0x33c1, /*  598, 0x2a9, U+0130, KEY_Iabovedot, LATIN CAPITAL LETTER I WITH DOT ABOVE */
	0xe9df, /* 2379, 0x1000ff71, KEY_DeleteLine */
	0x69c6, /* 1149, 0xab5, U+2158, KEY_fourfifths, VULGAR FRACTION FOUR FIFTHS */
	0x0000,
	0x7ed3, /* 1359, 0xff32, KEY_Hangul_Start, Hangul start */
	0x9ff9, /* 1676, 0x1001ee0, U+1ee0, KEY_Ohorntilde, LATIN CAPITAL LETTER O WITH HORN AND TILDE */
	0x7838, /* 1293, 0xdb4, U+0e14, KEY_Thai_dodek, THAI CHARACTER DO DEK */
	0x3a0d, /*  671, 0x1001e6b, U+1e6b, KEY_tabovedot, LATIN SMALL LETTER T WITH DOT ABOVE */
	0x8e8b, /* 1501, 0x100056c, U+056c, KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */
	0x0000,
	0x0000,
	0x45ce, /*  802, 0x5d3, U+0633, KEY_Arabic_seen, ARABIC LETTER SEEN */
	0x31fe, /*  577, 0x1db, U+0170, KEY_Udoubleacute, LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
	0x0000,
	0xc88b, /* 2036, 0x1000d9b, U+0d9b, KEY_Sinh_kha, SINHALA MAHA. KAYANNA */
	0x0000,
	0x1d5f, /*  317, 0xfd06, KEY_3270_EraseEOF */
	0x0f03, /*  188, 0xfe0d, KEY_ISO_First_Group_Lock */
	0x0000,
	0x0000,
	0x0000,
	0x4585, /*  799, 0x5d0, U+0630, KEY_Arabic_thal, ARABIC LETTER THAL */
	0x37ff, /*  648, 0x3f1, U+0146, KEY_ncedilla, LATIN SMALL LETTER N WITH CEDILLA */
	0x9835, /* 1597, 0x10001e6, U+01e6, KEY_Gcaron, LATIN CAPITAL LETTER G WITH CARON */
	0x8902, /* 1452, 0xeef, KEY_Hangul_RieulYeorinHieuh */
	0x450a, /*  794, 0x5cb, U+062b, KEY_Arabic_theh, ARABIC LETTER THEH */
	0x0000,
	0x0000,
	0xc712, /* 2018, 0x1000d86, U+0d86, KEY_Sinh_aa, SINHALA AAYANNA */
	0xa171, /* 1692, 0x1001ef0, U+1ef0, KEY_Uhornbelowdot, LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
	0x0000,
	0x4728, /*  816, 0x5e6, U+0646, KEY_Arabic_noon, ARABIC LETTER NOON */
	0x4460, /*  788, 0x5c5, U+0625, KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */
	0x5a97, /*  995, 0x7b1, U+03ac, KEY_Greek_alphaaccent, GREEK SMALL LETTER ALPHA WITH TONOS */
	0x0000,
	0x95d0, /* 1573, 0x10010e2, U+10e2, KEY_Georgian_tar, GEORGIAN LETTER TAR */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe98a, /* 2375, 0x1000ff6d, KEY_System */
	0xd8d1, /* 2206, 0x1008ff7c, KEY_XF86Spell, Spell checker */
	0x8283, /* 1391, 0xeb2, KEY_Hangul_Pieub */
	0x341a, /*  602, 0x2b6, U+0125, KEY_hcircumflex, LATIN SMALL LETTER H WITH CIRCUMFLEX */
	0x8a99, /* 1464, 0xeff, KEY_Korean_Won, (U+20A9 WON SIGN) */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x427b, /*  769, 0x1000691, U+0691, KEY_Arabic_rreh, ARABIC LETTER RREH */
	0x3433, /*  603, 0x2b9, U+0131, KEY_idotless, LATIN SMALL LETTER DOTLESS I */
	0x0000,
	0x99b9, /* 1616, 0x1001ea4, U+1ea4, KEY_Acircumflexacute, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x0000,
	0x40b5, /*  750, 0x4de, U+309b, KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */
	0x0000,
	0xc8f8, /* 2041, 0x1000da0, U+0da0, KEY_Sinh_ca, SINHALA CAYANNA */
	0x0000,
	0x7f8c, /* 1366, 0xff39, KEY_Hangul_Banja, Banja mode */
	0x38f9, /*  659, 0x1001e03, U+1e03, KEY_babovedot, LATIN SMALL LETTER B WITH DOT ABOVE */
	0x0000,
	0xeab4, /* 2388, 0x100000aa, KEY_mute_asciicircum */
	0x7ccd, /* 1339, 0xde5, U+0e45, KEY_Thai_lakkhangyao, THAI CHARACTER LAKKHANGYAO */
	0x0000,
	0x66b8, /* 1116, 0x9ea, U+2518, KEY_lowrightcorner, BOX DRAWINGS LIGHT UP AND LEFT */
	0xe875, /* 2363, 0x1004ff63, KEY_osfInsert */
	0x0000,
	0x8088, /* 1374, 0xea1, KEY_Hangul_Kiyeog */
	0xca5b, /* 2057, 0x1000db0, U+0db0, KEY_Sinh_dhha, SINHALA MAHA. DAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x925d, /* 1539, 0x100057f, U+057f, KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */
	0x4217, /*  765, 0x1000679, U+0679, KEY_Arabic_tteh, ARABIC LETTER TTEH */
	0x0000,
	0x8051, /* 1372, 0xff3f, KEY_Hangul_Special, Special symbols */
	0x0000,
	0x0000,
	0xe769, /* 2352, 0x1004ff53, KEY_osfRight */
	0x0000,
	0x0000,
	0xe931, /* 2371, 0x1004ff74, KEY_osfExtend */
	0x0000,
	0xdf14, /* 2267, 0x1008fe22, KEY_XF86Next_VMode, next video mode available */
	0x2a5d, /*  484, 0xcd, U+00cd, KEY_Iacute, LATIN CAPITAL LETTER I WITH ACUTE */
	0x6aa0, /* 1158, 0xac3, U+215b, KEY_oneeighth, VULGAR FRACTION ONE EIGHTH */
	0x0000,
	0x7850, /* 1294, 0xdb5, U+0e15, KEY_Thai_totao, THAI CHARACTER TO TAO */
	0x92f9, /* 1545, 0x1000582, U+0582, KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */
	0x0000,
	0x3955, /*  663, 0x1001e1f, U+1e1f, KEY_fabovedot, LATIN SMALL LETTER F WITH DOT ABOVE */
	0x16b4, /*  257, 0xfe8a, KEY_dead_small_schwa */
	0x6f64, /* 1203, 0xaf4, U+2717, KEY_ballotcross, BALLOT X */
	0x7ebf, /* 1358, 0xff31, KEY_Hangul, Hangul start/stop(toggle) */
	0x0000,
	0x2c81, /*  510, 0xe4, U+00e4, KEY_adiaeresis, LATIN SMALL LETTER A WITH DIAERESIS */
	0x29f0, /*  479, 0xc8, U+00c8, KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */
	0x0000,
	0xa4d8, /* 1729, 0x1002085, U+2085, KEY_fivesubscript, SUBSCRIPT FIVE */
	0x713a, /* 1222, 0xbc4, U+230a, KEY_downstile, LEFT FLOOR */
	0x0000,
	0x624a, /* 1070, 0x8ad, U+239e, KEY_toprightparens, RIGHT PARENTHESIS UPPER HOOK */
	0x0000,
	0xa87d, /* 1765, 0x1002806, U+2806, KEY_braille_dots_23, BRAILLE PATTERN DOTS-23 */
	0x0000,
	0x35b4, /*  620, 0x3a3, U+0156, KEY_Rcedilla, LATIN CAPITAL LETTER R WITH CEDILLA */
	0xdb52, /* 2232, 0x1008ff97, KEY_XF86AudioForward, fast-forward audio track */
	0x0000,
	0xced5, /* 2105, 0x1008ff14, KEY_XF86AudioPlay, Start playing of audio > */
	0x0000,
	0x89fc, /* 1459, 0xef6, KEY_Hangul_AraeA */
	0x7690, /* 1277, 0xda4, U+0e04, KEY_Thai_khokhwai, THAI CHARACTER KHO KHWAI */
	0x298b, /*  474, 0xc3, U+00c3, KEY_Atilde, LATIN CAPITAL LETTER A WITH TILDE */
	0x0000,
	0x7675, /* 1276, 0xda3, U+0e03, KEY_Thai_khokhuat, THAI CHARACTER KHO KHUAT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x66ef, /* 1118, 0x9ec, U+250c, KEY_upleftcorner, BOX DRAWINGS LIGHT DOWN AND RIGHT */
	0xca01, /* 2053, 0x1000dac, U+0dac, KEY_Sinh_ndda, SINHALA SANYAKA DDAYANNA */
	0xe51b, /* 2327, 0x100000ac, KEY_hpmute_asciitilde */
	0x7628, /* 1273, 0xff7e, KEY_Hebrew_switch, Alias for mode_switch */
	0x937c, /* 1550, 0x1000555, U+0555, KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */
	0xa651, /* 1744, 0x1002235, U+2235, KEY_because, BECAUSE */
	0x64a0, /* 1091, 0x8cd, U+21d4, KEY_ifonlyif, LEFT RIGHT DOUBLE ARROW */
	0x0000,
	0xdb27, /* 2230, 0x1008ff95, KEY_XF86WLAN, Enable/disable WLAN */
	0xca87, /* 2059, 0x1000db3, U+0db3, KEY_Sinh_ndha, SINHALA SANYAKA DAYANNA */
	0xead2, /* 2389, 0x100000ab, KEY_mute_diaeresis */
	0x0000,
	0x01b2, /*   19, 0xff23, KEY_Henkan, Alias for Henkan_Mode */
	0xd773, /* 2192, 0x1008ff6c, KEY_XF86Option, ?? */
	0x81af, /* 1384, 0xeab, KEY_Hangul_RieulMieum */
	0xce98, /* 2103, 0x1008ff12, KEY_XF86AudioMute, Mute sound from the system */
	0x0000,
	0x0000,
	0x0000,
	0x6724, /* 1120, 0x9ee, U+253c, KEY_crossinglines, BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
	0x920e, /* 1536, 0x100054e, U+054e, KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */
	0xd0b1, /* 2123, 0x1008ff26, KEY_XF86Back, Like back on a browser */
	0x0000,
	0x0000,
	0x5529, /*  944, 0x6d9, U+044b, KEY_Cyrillic_yeru, CYRILLIC SMALL LETTER YERU */
	0x550a, /*  943, 0x6d8, U+044c, KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */
	0x1ab6, /*  291, 0xfeef, KEY_Pointer_DblClick1 */
	0x1ad5, /*  292, 0xfef0, KEY_Pointer_DblClick2 */
	0x1af4, /*  293, 0xfef1, KEY_Pointer_DblClick3 */
	0x1b13, /*  294, 0xfef2, KEY_Pointer_DblClick4 */
	0x1b32, /*  295, 0xfef3, KEY_Pointer_DblClick5 */
	0x0000,
	0x8444, /* 1408, 0xec3, KEY_Hangul_EO */
	0x00bf, /*    9, 0xff1b, KEY_Escape */
	0x0000,
	0xd094, /* 2122, 0x1008ff25, KEY_XF86RockerEnter, and let you press them */
	0xe741, /* 2350, 0x1004ff51, KEY_osfLeft */
	0x980c, /* 1595, 0x100012c, U+012c, KEY_Ibreve, LATIN CAPITAL LETTER I WITH BREVE */
	0x8586, /* 1422, 0xed1, KEY_Hangul_EU */
	0xe82a, /* 2360, 0x1004ff5d, KEY_osfPrevField */
	0xcd68, /* 2093, 0x1000df3, U+0df3, KEY_Sinh_luu2, SINHALA DIGA GAYANUKITTA */
	0x0000,
	0x84e5, /* 1415, 0xeca, KEY_Hangul_OE */
	0x0000,
	0x0000,
	0x0000,
	0x8cda, /* 1484, 0x1000534, U+0534, KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */
	0x0000,
	0x0000,
	0xb6f2, /* 1886, 0x100287f, U+287f, KEY_braille_dots_1234567, BRAILLE PATTERN DOTS-1234567 */
	0x97f5, /* 1594, 0x1001e8a, U+1e8a, KEY_Xabovedot, LATIN CAPITAL LETTER X WITH DOT ABOVE */
	0xc964, /* 2046, 0x1000da5, U+0da5, KEY_Sinh_jnya, SINHALA TAALUJA SANYOOGA NAASIKYAYA */
	0x5b58, /* 1001, 0x7b7, U+03cc, KEY_Greek_omicronaccent, GREEK SMALL LETTER OMICRON WITH TONOS */
	0x0000,
	0x84b6, /* 1413, 0xec8, KEY_Hangul_WA */
	0x8a16, /* 1460, 0xef7, KEY_Hangul_AraeAE */
	0xd141, /* 2129, 0x1008ff2c, KEY_XF86Eject, Eject device (e.g. DVD) */
	0x3107, /*  565, 0x1c5, U+0139, KEY_Lacute, LATIN CAPITAL LETTER L WITH ACUTE */
	0x8415, /* 1406, 0xec1, KEY_Hangul_YA */
	0x8da4, /* 1492, 0x1000538, U+0538, KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */
	0x180d, /*  268, 0xfe73, KEY_SlowKeys_Enable */
	0x708c, /* 1214, 0xaff, KEY_cursor */
	0x8489, /* 1411, 0xec6, KEY_Hangul_YE */
	0x6a0c, /* 1152, 0xab8, U+2105, KEY_careof, CARE OF */
	0x934a, /* 1548, 0x1000554, U+0554, KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */
	0xdee1, /* 2265, 0x1008fe20, KEY_XF86Ungrab, force ungrab */
	0x859d, /* 1423, 0xed2, KEY_Hangul_YI */
	0xe844, /* 2361, 0x1004ff5e, KEY_osfNextField */
	0x5d71, /* 1021, 0x7cf, U+039f, KEY_Greek_OMICRON, GREEK CAPITAL LETTER OMICRON */
	0x99f5, /* 1618, 0x1001ea6, U+1ea6, KEY_Acircumflexgrave, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x0000,
	0x7018, /* 1210, 0xafb, U+2117, KEY_phonographcopyright, SOUND RECORDING COPYRIGHT */
	0x84fc, /* 1416, 0xecb, KEY_Hangul_YO */
	0xca2e, /* 2055, 0x1000dae, U+0dae, KEY_Sinh_thha, SINHALA MAHA. TAYANNA */
	0x266e, /*  439, 0xa0, U+00a0, KEY_nobreakspace, NO-BREAK SPACE */
	0xd642, /* 2179, 0x1008ff5e, KEY_XF86Game, Launch game */
	0x7c5b, /* 1335, 0xde1, U+0e41, KEY_Thai_saraae, THAI CHARACTER SARA AE */
	0x6c69, /* 1174, 0xad5, U+2030, KEY_permille, PER MILLE SIGN */
	0x271b, /*  447, 0xa8, U+00a8, KEY_diaeresis, DIAERESIS */
	0xeb42, /* 2394, 0x100000f6, KEY_longminus */
	0x91dc, /* 1534, 0x100054d, U+054d, KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */
	0x8801, /* 1443, 0xee6, KEY_Hangul_J_Sios */
	0x9a13, /* 1619, 0x1001ea7, U+1ea7, KEY_acircumflexgrave, LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0xd969, /* 2212, 0x1008ff82, KEY_XF86Travel, ?? */
	0x0000,
	0xe345, /* 2308, 0x1000fe7e, KEY_Dtilde */
	0x2c54, /*  508, 0xe2, U+00e2, KEY_acircumflex, LATIN SMALL LETTER A WITH CIRCUMFLEX */
	0x0000,
	0x7a8a, /* 1317, 0xdcc, U+0e2c, KEY_Thai_lochula, THAI CHARACTER LO CHULA */
	0xe3ed, /* 2315, 0x1000ff73, KEY_hpDeleteChar */
	0x7abb, /* 1319, 0xdce, U+0e2e, KEY_Thai_honokhuk, THAI CHARACTER HO NOKHUK */
	0x6b1b, /* 1163, 0xaca, KEY_signaturemark, (U+2613 SALTIRE) */
	0x8dd6, /* 1494, 0x1000539, U+0539, KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */
	0x0000,
	0x0000,
	0x06b6, /*   80, 0xff9f, KEY_KP_Delete */
	0x90e0, /* 1524, 0x1000548, U+0548, KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */
	0xdadc, /* 2227, 0x1008ff92, KEY_XF86Music, Launch music application */
	0x0000,
	0x7c08, /* 1332, 0xdde, KEY_Thai_maihanakat_maitho */
	0x4e89, /*  879, 0x6a5, U+0455, KEY_Macedonia_dse, CYRILLIC SMALL LETTER DZE */
	0x2a49, /*  483, 0xcc, U+00cc, KEY_Igrave, LATIN CAPITAL LETTER I WITH GRAVE */
	0x575f, /*  966, 0x6ef, U+041e, KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */
	0x32a7, /*  585, 0x1ec, U+011b, KEY_ecaron, LATIN SMALL LETTER E WITH CARON */
	0x0000,
	0x5ec5, /* 1035, 0x7e5, U+03b5, KEY_Greek_epsilon, GREEK SMALL LETTER EPSILON */
	0x1e70, /*  328, 0xfd11, KEY_3270_KeyClick */
	0x0000,
	0x0000,
	0xcb89, /* 2071, 0x1000dc2, U+0dc2, KEY_Sinh_ssha, SINHALA MUURDHAJA SAYANNA */
	0x2f67, /*  545, 0x1aa, U+015e, KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */
	0xda5c, /* 2222, 0x1008ff8d, KEY_XF86Away, mark yourself as away */
	0xe025, /* 2277, 0x1005ff10, KEY_SunF36, Labeled F11 */
	0x0000,
	0x57f4, /*  972, 0x6f5, U+0423, KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */
	0x0000,
	0x555d, /*  946, 0x6db, U+0448, KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */
	0x9c3b, /* 1640, 0x1001ebc, U+1ebc, KEY_Etilde, LATIN CAPITAL LETTER E WITH TILDE */
	0x0000,
	0x5e62, /* 1031, 0x7e1, U+03b1, KEY_Greek_alpha, GREEK SMALL LETTER ALPHA */
	0x9e59, /* 1661, 0x1001ed1, U+1ed1, KEY_ocircumflexacute, LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x2e40, /*  531, 0xf8, U+00f8, KEY_ooblique, LATIN SMALL LETTER O WITH STROKE */
	0xcf5b, /* 2110, 0x1008ff19, KEY_XF86Mail, Invoke user's mail program */
	0x0000,
	0x31a9, /*  573, 0x1d2, U+0147, KEY_Ncaron, LATIN CAPITAL LETTER N WITH CARON */
	0x5e93, /* 1033, 0x7e3, U+03b3, KEY_Greek_gamma, GREEK SMALL LETTER GAMMA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd3d3, /* 2154, 0x1008ff45, KEY_XF86Launch5, Launch Application */
	0x71f4, /* 1231, 0xbda, KEY_leftshoe, (U+2282 SUBSET OF) */
	0x0000,
	0x78ba, /* 1298, 0xdb9, U+0e19, KEY_Thai_nonu, THAI CHARACTER NO NU */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa67c, /* 1746, 0x1002247, U+2247, KEY_notapproxeq, NOT ALMOST EQUAL TO */
	0x6b36, /* 1164, 0xacb, KEY_trademarkincircle */
	0x0c8e, /*  164, 0xffe7, KEY_Meta_L, Left meta */
	0x6444, /* 1087, 0x8c2, U+221e, KEY_infinity, INFINITY */
	0x5615, /*  953, 0x6e2, U+0411, KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */
	0x0000,
	0x0000,
	0x0000,
	0x0ca2, /*  165, 0xffe8, KEY_Meta_R, Right meta */
	0x7ea6, /* 1357, 0xdf9, U+0e59, KEY_Thai_lekkao, THAI DIGIT NINE */
	0x93c5, /* 1553, 0x1000586, U+0586, KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */
	0x567a, /*  957, 0x6e6, U+0424, KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */
	0x0295, /*   29, 0xff2d, KEY_Kana_Lock, Kana Lock */
	0x2aec, /*  491, 0xd3, U+00d3, KEY_Oacute, LATIN CAPITAL LETTER O WITH ACUTE */
	0x6d6e, /* 1184, 0xae0, KEY_enopencircbullet, (U+25E6 WHITE BULLET) */
	0x33a8, /*  597, 0x2a6, U+0124, KEY_Hcircumflex, LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
	0x9849, /* 1598, 0x10001d1, U+01d2, KEY_Ocaron, LATIN CAPITAL LETTER O WITH CARON */
	0x5714, /*  963, 0x6ec, U+041b, KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */
	0x5661, /*  956, 0x6e5, U+0415, KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */
	0x5746, /*  965, 0x6ee, U+041d, KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */
	0x5167, /*  907, 0x6b8, U+0408, KEY_Cyrillic_JE, CYRILLIC CAPITAL LETTER JE */
	0x5a59, /*  993, 0x7ae, U+0385, KEY_Greek_accentdieresis, GREEK DIALYTIKA TONOS */
	0x0000,
	0x57a9, /*  969, 0x6f2, U+0420, KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */
	0x0132, /*   14, 0xff3d, KEY_MultipleCandidate */
	0x7d53, /* 1344, 0xdea, U+0e4a, KEY_Thai_maitri, THAI CHARACTER MAI TRI */
	0x0000,
	0x5b12, /*  999, 0x7b5, U+03ca, KEY_Greek_iotadieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA */
	0x1a93, /*  290, 0xfeee, KEY_Pointer_DblClick_Dflt */
	0x0000,
	0x37a9, /*  644, 0x3e0, U+0101, KEY_amacron, LATIN SMALL LETTER A WITH MACRON */
	0x7da8, /* 1347, 0xded, U+0e4d, KEY_Thai_nikhahit, THAI CHARACTER NIKHAHIT */
	0x5777, /*  967, 0x6f0, U+041f, KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */
	0x0000,
	0x9291, /* 1541, 0x1000580, U+0580, KEY_Armenian_re, ARMENIAN SMALL LETTER REH */
	0x0000,
	0x91f5, /* 1535, 0x100057d, U+057d, KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */
	0x0000,
	0x53a9, /*  929, 0x6ca, U+0439, KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */
	0x7e10, /* 1351, 0xdf3, U+0e53, KEY_Thai_leksam, THAI DIGIT THREE */
	0x54d7, /*  941, 0x6d6, U+0436, KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */
	0xd72b, /* 2189, 0x1008ff69, KEY_XF86News, News */
	0x13a9, /*  227, 0xfe5e, KEY_dead_voiced_sound */
	0x3577, /*  617, 0x2fe, U+015d, KEY_scircumflex, LATIN SMALL LETTER S WITH CIRCUMFLEX */
	0x5826, /*  974, 0x6f7, U+0412, KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */
	0x9937, /* 1610, 0x1001e36, U+1e36, KEY_Lbelowdot, LATIN CAPITAL LETTER L WITH DOT BELOW */
	0x5790, /*  968, 0x6f1, U+042f, KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */
	0x5f59, /* 1041, 0x7eb, U+03bb, KEY_Greek_lamda, GREEK SMALL LETTER LAMDA */
	0x8def, /* 1495, 0x1000569, U+0569, KEY_Armenian_to, ARMENIAN SMALL LETTER TO */
	0x9567, /* 1569, 0x10010de, U+10de, KEY_Georgian_par, GEORGIAN LETTER PAR */
	0xe54e, /* 2329, 0x100000be, KEY_hpguilder */
	0xe2b8, /* 2303, 0x1000feb0, KEY_Dring_accent */
	0x5879, /*  977, 0x6fa, U+0417, KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */
	0x0000,
	0x0000,
	0xe065, /* 2280, 0xff61, KEY_SunPrint_Screen, Same as XK_Print */
	0x0000,
	0x71c7, /* 1229, 0xbd6, KEY_downshoe, (U+222A UNION) */
	0x728b, /* 1237, 0xce1, KEY_hebrew_beth, deprecated */
	0xcb5e, /* 2069, 0x1000dc0, U+0dc0, KEY_Sinh_va, SINHALA VAYANNA */
	0x0000,
	0x0000,
	0x7370, /* 1246, 0xce7, U+05d7, KEY_hebrew_chet, HEBREW LETTER HET */
	0x730e, /* 1242, 0xce4, U+05d4, KEY_hebrew_he, HEBREW LETTER HE */
	0x0000,
	0x8b12, /* 1468, 0x100055d, U+055d, KEY_Armenian_separation_mark, ARMENIAN COMMA */
	0x55e4, /*  951, 0x6e0, U+042e, KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */
	0x5f40, /* 1040, 0x7ea, U+03ba, KEY_Greek_kappa, GREEK SMALL LETTER KAPPA */
	0x75ae, /* 1268, 0xcf7, KEY_hebrew_kuf, deprecated */
	0x0000,
	0x0000,
	0xdc3e, /* 2240, 0x1008ff9f, KEY_XF86Time, display, or shows an entry for time seeking */
	0xdf6b, /* 2270, 0x1008fe25, KEY_XF86LogGrabInfo, print all active grabs to log */
	0x9a6b, /* 1622, 0x1001eaa, U+1eaa, KEY_Acircumflextilde, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
	0xd247, /* 2139, 0x1008ff36, KEY_XF86Shop, Display shopping web site */
	0x0000,
	0xe179, /* 2292, 0x1005ff73, KEY_SunOpen */
	0x0000,
	0x0000,
	0x9e15, /* 1658, 0x1001ece, U+1ece, KEY_Ohook, LATIN CAPITAL LETTER O WITH HOOK ABOVE */
	0x7dc3, /* 1348, 0xdf0, U+0e50, KEY_Thai_leksun, THAI DIGIT ZERO */
	0x0000,
	0x1c99, /*  308, 0xfea2, KEY_CH */
	0x075b, /*   87, 0xffaf, KEY_KP_Divide */
	0x7762, /* 1285, 0xdac, U+0e0c, KEY_Thai_chochoe, THAI CHARACTER CHO CHOE */
	0x8af3, /* 1467, 0x1000589, U+0589, KEY_Armenian_verjaket, ARMENIAN FULL STOP */
	0x4d02, /*  865, 0x10004bb, U+04bb, KEY_Cyrillic_shha, CYRILLIC SMALL LETTER SHHA */
	0x0000,
	0xda15, /* 2219, 0x1008ff8a, KEY_XF86Xfer */
	0x0281, /*   28, 0xff2c, KEY_Massyo, Delete from Dictionary */
	0x0000,
	0x7b59, /* 1325, 0xdd4, U+0e34, KEY_Thai_sarai, THAI CHARACTER SARA I */
	0x0000,
	0x0000,
	0x0000,
	0x08b6, /*  107, 0xffc7, KEY_F10 */
	0x08c7, /*  108, 0xffc8, KEY_F11 */
	0x08e8, /*  110, 0xffc9, KEY_F12 */
	0x0909, /*  112, 0xffca, KEY_F13 */
	0x092a, /*  114, 0xffcb, KEY_F14 */
	0x094b, /*  116, 0xffcc, KEY_F15 */
	0x096c, /*  118, 0xffcd, KEY_F16 */
	0x098d, /*  120, 0xffce, KEY_F17 */
	0x09ae, /*  122, 0xffcf, KEY_F18 */
	0x0445, /*   50, 0xff63, KEY_Insert, Insert, insert here */
	0x0af9, /*  142, 0xffd9, KEY_F28 */
	0x0b1a, /*  144, 0xffda, KEY_F29 */
	0x5345, /*  925, 0x6c6, U+0444, KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */
	0x5378, /*  927, 0x6c8, U+0445, KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */
	0x30df, /*  563, 0x1c0, U+0154, KEY_Racute, LATIN CAPITAL LETTER R WITH ACUTE */
	0x0000,
	0x0000,
	0x31d7, /*  575, 0x1d8, U+0158, KEY_Rcaron, LATIN CAPITAL LETTER R WITH CARON */
	0x53df, /*  931, 0x6cc, U+043b, KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */
	0x532c, /*  924, 0x6c5, U+0435, KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */
	0x5411, /*  933, 0x6ce, U+043d, KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */
	0x4f08, /*  884, 0x6a8, U+0458, KEY_Cyrillic_je, CYRILLIC SMALL LETTER JE */
	0x65fa, /* 1106, 0x8fe, U+2193, KEY_downarrow, DOWNWARDS ARROW */
	0x0000,
	0x0a01, /*  127, 0xffd1, KEY_L10 */
	0x548d, /*  938, 0x6d3, U+0441, KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */
	0x0000,
	0xd0e0, /* 2125, 0x1008ff28, KEY_XF86Stop, Stop current operation */
	0x1868, /*  271, 0xfe76, KEY_MouseKeys_Enable */
	0x4e3d, /*  876, 0x6a3, U+0451, KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */
	0x26c8, /*  443, 0xa4, U+00a4, KEY_currency, CURRENCY SIGN */
	0x12d6, /*  219, 0xfe56, KEY_dead_abovedot */
	0x0000,
	0x5442, /*  935, 0x6d0, U+043f, KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */
	0x0000,
	0x497c, /*  838, 0x10006be, U+06be, KEY_Arabic_heh_doachashmee, ARABIC LETTER HEH DOACHASHMEE */
	0x0000,
	0x1f4f, /*  337, 0xfd1a, KEY_3270_DeleteWord */
	0x4ffb, /*  893, 0x6ae, U+045e, KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */
	0x802b, /* 1371, 0xff3e, KEY_Hangul_PreviousCandidate, Previous candidate */
	0x72d9, /* 1240, 0xce3, U+05d3, KEY_hebrew_dalet, HEBREW LETTER DALET */
	0x54a6, /*  939, 0x6d4, U+0442, KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */
	0xe977, /* 2374, 0x1000ff6c, KEY_Reset */
	0x0000,
	0xdd65, /* 2252, 0x1008ffb1, KEY_XF86TouchpadOff, The touchpad got switched off */
	0x54f1, /*  942, 0x6d7, U+0432, KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */
	0x2f3f, /*  543, 0x1a6, U+015a, KEY_Sacute, LATIN CAPITAL LETTER S WITH ACUTE */
	0x545b, /*  936, 0x6d1, U+044f, KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */
	0x0b4c, /*  147, 0xffdb, KEY_R10 */
	0x0b6e, /*  149, 0xffdc, KEY_R11 */
	0x0b90, /*  151, 0xffdd, KEY_R12 */
	0x0bb2, /*  153, 0xffde, KEY_R13 */
	0x0bd4, /*  155, 0xffdf, KEY_R14 */
	0x0bf6, /*  157, 0xffe0, KEY_R15 */
	0x719e, /* 1227, 0xbcf, U+25cb, KEY_circle, WHITE CIRCLE */
	0x3bad, /*  689, 0x4a5, KEY_kana_middledot, deprecated */
	0x0000,
	0x0000,
	0x2ad8, /*  490, 0xd2, U+00d2, KEY_Ograve, LATIN CAPITAL LETTER O WITH GRAVE */
	0x6a8c, /* 1157, 0xabf, KEY_marker */
	0xdf4c, /* 2269, 0x1008fe24, KEY_XF86LogWindowTree, print window tree to log */
	0x0000,
	0x2145, /*  359, 0x30, U+0030, KEY_0, DIGIT ZERO */
	0x2154, /*  360, 0x31, U+0031, KEY_1, DIGIT ONE */
	0x2163, /*  361, 0x32, U+0032, KEY_2, DIGIT TWO */
	0x2172, /*  362, 0x33, U+0033, KEY_3, DIGIT THREE */
	0x2181, /*  363, 0x34, U+0034, KEY_4, DIGIT FOUR */
	0x2190, /*  364, 0x35, U+0035, KEY_5, DIGIT FIVE */
	0x219f, /*  365, 0x36, U+0036, KEY_6, DIGIT SIX */
	0x21ae, /*  366, 0x37, U+0037, KEY_7, DIGIT SEVEN */
	0x21bd, /*  367, 0x38, U+0038, KEY_8, DIGIT EIGHT */
	0x21cc, /*  368, 0x39, U+0039, KEY_9, DIGIT NINE */
	0x76e2, /* 1280, 0xda7, U+0e07, KEY_Thai_ngongu, THAI CHARACTER NGO NGU */
	0x0000,
	0x9820, /* 1596, 0x10001b5, U+01b5, KEY_Zstroke, LATIN CAPITAL LETTER Z WITH STROKE */
	0xdef9, /* 2266, 0x1008fe21, KEY_XF86ClearGrab, kill application with grab */
	0x63e2, /* 1083, 0x8be, U+2265, KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */
	0x36b2, /*  632, 0x3bd, U+014a, KEY_ENG, LATIN CAPITAL LETTER ENG */
	0x59d5, /*  989, 0x7a7, U+038c, KEY_Greek_OMICRONaccent, GREEK CAPITAL LETTER OMICRON WITH TONOS */
	0x2265, /*  376, 0x41, U+0041, KEY_A, LATIN CAPITAL LETTER A */
	0x2274, /*  377, 0x42, U+0042, KEY_B, LATIN CAPITAL LETTER B */
	0x2283, /*  378, 0x43, U+0043, KEY_C, LATIN CAPITAL LETTER C */
	0x2292, /*  379, 0x44, U+0044, KEY_D, LATIN CAPITAL LETTER D */
	0x22a1, /*  380, 0x45, U+0045, KEY_E, LATIN CAPITAL LETTER E */
	0x22b0, /*  381, 0x46, U+0046, KEY_F, LATIN CAPITAL LETTER F */
	0x22bf, /*  382, 0x47, U+0047, KEY_G, LATIN CAPITAL LETTER G */
	0x22ce, /*  383, 0x48, U+0048, KEY_H, LATIN CAPITAL LETTER H */
	0x22dd, /*  384, 0x49, U+0049, KEY_I, LATIN CAPITAL LETTER I */
	0x22ec, /*  385, 0x4a, U+004a, KEY_J, LATIN CAPITAL LETTER J */
	0x22fb, /*  386, 0x4b, U+004b, KEY_K, LATIN CAPITAL LETTER K */
	0x230a, /*  387, 0x4c, U+004c, KEY_L, LATIN CAPITAL LETTER L */
	0x2319, /*  388, 0x4d, U+004d, KEY_M, LATIN CAPITAL LETTER M */
	0x2328, /*  389, 0x4e, U+004e, KEY_N, LATIN CAPITAL LETTER N */
	0x2337, /*  390, 0x4f, U+004f, KEY_O, LATIN CAPITAL LETTER O */
	0x2346, /*  391, 0x50, U+0050, KEY_P, LATIN CAPITAL LETTER P */
	0x2355, /*  392, 0x51, U+0051, KEY_Q, LATIN CAPITAL LETTER Q */
	0x2364, /*  393, 0x52, U+0052, KEY_R, LATIN CAPITAL LETTER R */
	0x2373, /*  394, 0x53, U+0053, KEY_S, LATIN CAPITAL LETTER S */
	0x2382, /*  395, 0x54, U+0054, KEY_T, LATIN CAPITAL LETTER T */
	0x0409, /*   47, 0xff60, KEY_Select, Select, mark */
	0x23a0, /*  397, 0x56, U+0056, KEY_V, LATIN CAPITAL LETTER V */
	0x23af, /*  398, 0x57, U+0057, KEY_W, LATIN CAPITAL LETTER W */
	0x1022, /*  197, 0xfe26, KEY_ISO_Partial_Space_Right */
	0x23cd, /*  400, 0x59, U+0059, KEY_Y, LATIN CAPITAL LETTER Y */
	0x1ccb, /*  311, 0xfea5, KEY_C_H */
	0x0000,
	0x0000,
	0xd81a, /* 2199, 0x1008ff75, KEY_XF86RotationPB, don't use */
	0xe8fc, /* 2369, 0x1004ff72, KEY_osfDeselectAll */
	0x7610, /* 1272, 0xcfa, KEY_hebrew_taf, deprecated */
	0x2b99, /*  499, 0xda, U+00da, KEY_Uacute, LATIN CAPITAL LETTER U WITH ACUTE */
	0x2490, /*  409, 0x61, U+0061, KEY_a, LATIN SMALL LETTER A */
	0x249f, /*  410, 0x62, U+0062, KEY_b, LATIN SMALL LETTER B */
	0x24ae, /*  411, 0x63, U+0063, KEY_c, LATIN SMALL LETTER C */
	0x24bd, /*  412, 0x64, U+0064, KEY_d, LATIN SMALL LETTER D */
	0x24cc, /*  413, 0x65, U+0065, KEY_e, LATIN SMALL LETTER E */
	0x00e7, /*   11, 0xff20, KEY_Multi_key, Multi-key character compose */
	0x24ea, /*  415, 0x67, U+0067, KEY_g, LATIN SMALL LETTER G */
	0x24f9, /*  416, 0x68, U+0068, KEY_h, LATIN SMALL LETTER H */
	0x2508, /*  417, 0x69, U+0069, KEY_i, LATIN SMALL LETTER I */
	0x2517, /*  418, 0x6a, U+006a, KEY_j, LATIN SMALL LETTER J */
	0x2526, /*  419, 0x6b, U+006b, KEY_k, LATIN SMALL LETTER K */
	0x2535, /*  420, 0x6c, U+006c, KEY_l, LATIN SMALL LETTER L */
	0x2544, /*  421, 0x6d, U+006d, KEY_m, LATIN SMALL LETTER M */
	0x2553, /*  422, 0x6e, U+006e, KEY_n, LATIN SMALL LETTER N */
	0x2562, /*  423, 0x6f, U+006f, KEY_o, LATIN SMALL LETTER O */
	0x2571, /*  424, 0x70, U+0070, KEY_p, LATIN SMALL LETTER P */
	0x2580, /*  425, 0x71, U+0071, KEY_q, LATIN SMALL LETTER Q */
	0x258f, /*  426, 0x72, U+0072, KEY_r, LATIN SMALL LETTER R */
	0x259e, /*  427, 0x73, U+0073, KEY_s, LATIN SMALL LETTER S */
	0x25ad, /*  428, 0x74, U+0074, KEY_t, LATIN SMALL LETTER T */
	0x25bc, /*  429, 0x75, U+0075, KEY_u, LATIN SMALL LETTER U */
	0x25cb, /*  430, 0x76, U+0076, KEY_v, LATIN SMALL LETTER V */
	0x0784, /*   89, 0xffb1, KEY_KP_1 */
	0x25e9, /*  432, 0x78, U+0078, KEY_x, LATIN SMALL LETTER X */
	0x25f8, /*  433, 0x79, U+0079, KEY_y, LATIN SMALL LETTER Y */
	0x1cba, /*  310, 0xfea4, KEY_C_h */
	0x9eb3, /* 1664, 0x1001ed4, U+1ed4, KEY_Ocircumflexhook, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x7325, /* 1243, 0xce5, U+05d5, KEY_hebrew_waw, HEBREW LETTER VAV */
	0x07ba, /*   92, 0xffb4, KEY_KP_4 */
	0xd66c, /* 2181, 0x1008ff60, KEY_XF86iTouch, Logitch iTouch- don't use */
	0x79cc, /* 1309, 0xdc4, U+0e24, KEY_Thai_ru, THAI CHARACTER RU */
	0x041d, /*   48, 0xff61, KEY_Print */
	0x0000,
	0x0000,
	0xe4a9, /* 2323, 0x100000a8, KEY_hpmute_acute */
	0xa029, /* 1678, 0x1001ee2, U+1ee2, KEY_Ohornbelowdot, LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
	0xdac2, /* 2226, 0x1008ff91, KEY_XF86Pictures, Show pictures */
	0x47fa, /*  824, 0x5ed, U+064d, KEY_Arabic_kasratan, ARABIC KASRATAN */
	0x99a6, /* 1615, 0x1001ea3, U+1ea3, KEY_ahook, LATIN SMALL LETTER A WITH HOOK ABOVE */
	0x0000,
	0x48ba, /*  831, 0x1000654, U+0654, KEY_Arabic_hamza_above, ARABIC HAMZA ABOVE */
	0x2fd0, /*  550, 0x1b1, U+0105, KEY_aogonek, LATIN SMALL LETTER A WITH OGONEK */
	0x0000,
	0x0000,
	0x73d2, /* 1250, 0xce9, U+05d9, KEY_hebrew_yod, HEBREW LETTER YOD */
	0x7421, /* 1253, 0xcec, U+05dc, KEY_hebrew_lamed, HEBREW LETTER LAMED */
	0x6bea, /* 1170, 0xad1, U+2019, KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */
	0x7f71, /* 1365, 0xff38, KEY_Hangul_Jeonja, Jeonja mode */
	0x65a0, /* 1102, 0x8f6, U+0192, KEY_function, LATIN SMALL LETTER F WITH HOOK */
	0x0000,
	0xa076, /* 1681, 0x1001ee5, U+1ee5, KEY_ubelowdot, LATIN SMALL LETTER U WITH DOT BELOW */
	0x3b56, /*  686, 0x4a3, U+300d, KEY_kana_closingbracket, RIGHT CORNER BRACKET */
	0x0000,
	0xc6fe, /* 2017, 0x1000d85, U+0d85, KEY_Sinh_a, SINHALA AYANNA */
	0x6a20, /* 1153, 0xabb, U+2012, KEY_figdash, FIGURE DASH */
	0x2d6c, /*  521, 0xef, U+00ef, KEY_idiaeresis, LATIN SMALL LETTER I WITH DIAERESIS */
	0x0000,
	0x4c79, /*  861, 0x10004b7, U+04b7, KEY_Cyrillic_che_descender, CYRILLIC SMALL LETTER CHE WITH DESCENDER */
	0x9f0b, /* 1667, 0x1001ed7, U+1ed7, KEY_ocircumflextilde, LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x03e5, /*   45, 0xff57, KEY_End, EOL */
	0x0000,
	0xc752, /* 2021, 0x1000d89, U+0d89, KEY_Sinh_i, SINHALA IYANNA */
	0x0000,
	0x3a4c, /*  674, 0x1001e82, U+1e82, KEY_Wacute, LATIN CAPITAL LETTER W WITH ACUTE */
	0xdb0c, /* 2229, 0x1008ff94, KEY_XF86Bluetooth, Enable/disable Bluetooth */
	0x3633, /*  626, 0x3b3, U+0157, KEY_rcedilla, LATIN SMALL LETTER R WITH CEDILLA */
	0x0000,
	0xc838, /* 2032, 0x1000d94, U+0d94, KEY_Sinh_o, SINHALA OYANNA */
	0x4944, /*  836, 0x10006af, U+06af, KEY_Arabic_gaf, ARABIC LETTER GAF */
	0x0000,
	0xb74d, /* 1889, 0x1002882, U+2882, KEY_braille_dots_28, BRAILLE PATTERN DOTS-28 */
	0x5ccb, /* 1014, 0x7c9, U+0399, KEY_Greek_IOTA, GREEK CAPITAL LETTER IOTA */
	0x34ea, /*  611, 0x2de, U+015c, KEY_Scircumflex, LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
	0x3efd, /*  729, 0x4ca, U+30cf, KEY_kana_HA, KATAKANA LETTER HA */
	0x0000,
	0x0e50, /*  182, 0xfe07, KEY_ISO_Group_Lock */
	0x0000,
	0x3f51, /*  733, 0x4cd, U+30d8, KEY_kana_HE, KATAKANA LETTER HE */
	0x0000,
	0x3d2c, /*  707, 0x4b6, U+30ab, KEY_kana_KA, KATAKANA LETTER KA */
	0x3673, /*  629, 0x3ba, U+0113, KEY_emacron, LATIN SMALL LETTER E WITH MACRON */
	0x1329, /*  222, 0xfe59, KEY_dead_doubleacute */
	0x0000,
	0x3d6b, /*  710, 0x4b9, U+30b1, KEY_kana_KE, KATAKANA LETTER KE */
	0xd7b9, /* 2195, 0x1008ff70, KEY_XF86Q, Compaq's Q - don't use */
	0x3e94, /*  724, 0x4c5, U+30ca, KEY_kana_NA, KATAKANA LETTER NA */
	0x1886, /*  272, 0xfe77, KEY_MouseKeys_Accel_Enable */
	0x3d41, /*  708, 0x4b7, U+30ad, KEY_kana_KI, KATAKANA LETTER KI */
	0x2b5b, /*  496, 0xd8, U+00d8, KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */
	0x3ed3, /*  727, 0x4c8, U+30cd, KEY_kana_NE, KATAKANA LETTER NE */
	0x7ba3, /* 1328, 0xdd7, U+0e37, KEY_Thai_sarauee, THAI CHARACTER SARA UEE */
	0x0030, /*    2, 0xff09, KEY_Tab */
	0x0000,
	0x3d80, /*  711, 0x4ba, U+30b3, KEY_kana_KO, KATAKANA LETTER KO */
	0x2b6f, /*  497, 0xd8, U+00d8, KEY_Ooblique, LATIN CAPITAL LETTER O WITH STROKE */
	0x2616, /*  435, 0x7b, U+007b, KEY_braceleft, LEFT CURLY BRACKET */
	0x0000,
	0x3dff, /*  717, 0x4c0, U+30bf, KEY_kana_TA, KATAKANA LETTER TA */
	0x0000,
	0x3d56, /*  709, 0x4b8, U+30af, KEY_kana_KU, KATAKANA LETTER KU */
	0x9e77, /* 1662, 0x1001ed2, U+1ed2, KEY_Ocircumflexgrave, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x3e6a, /*  722, 0x4c3, U+30c6, KEY_kana_TE, KATAKANA LETTER TE */
	0x583f, /*  975, 0x6f8, U+042c, KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */
	0x3fa5, /*  737, 0x4d1, U+30e0, KEY_kana_MU, KATAKANA LETTER MU */
	0x48da, /*  832, 0x1000655, U+0655, KEY_Arabic_hamza_below, ARABIC HAMZA BELOW */
	0x3e2a, /*  719, 0x4c1, KEY_kana_TI, deprecated */
	0x0000,
	0x3fe4, /*  740, 0x4d4, U+30e4, KEY_kana_YA, KATAKANA LETTER YA */
	0x006a, /*    5, 0xff0d, KEY_Return, Return, enter */
	0x3dea, /*  716, 0x4bf, U+30bd, KEY_kana_SO, KATAKANA LETTER SO */
	0x6400, /* 1084, 0x8bf, U+222b, KEY_integral, INTEGRAL */
	0x01c6, /*   20, 0xff24, KEY_Romaji, to Romaji */
	0x0564, /*   64, 0xff91, KEY_KP_F1, PF1, KP_A, ... */
	0x0577, /*   65, 0xff92, KEY_KP_F2 */
	0x058a, /*   66, 0xff93, KEY_KP_F3 */
	0x059d, /*   67, 0xff94, KEY_KP_F4 */
	0xa328, /* 1712, 0x10020a8, U+20a8, KEY_RupeeSign, RUPEE SIGN */
	0x3bc9, /*  690, 0x4a6, U+30f2, KEY_kana_WO, KATAKANA LETTER WO */
	0x0000,
	0x5fce, /* 1046, 0x7ef, U+03bf, KEY_Greek_omicron, GREEK SMALL LETTER OMICRON */
	0x069f, /*   79, 0xff9e, KEY_KP_Insert */
	0x400e, /*  742, 0x4d6, U+30e8, KEY_kana_YO, KATAKANA LETTER YO */
	0x123a, /*  213, 0xfe51, KEY_dead_acute */
	0x511c, /*  904, 0x6b6, KEY_Ukranian_I, deprecated */
	0x0000,
	0x1347, /*  223, 0xfe5a, KEY_dead_caron */
	0x0000,
	0x2bde, /*  502, 0xdd, U+00dd, KEY_Yacute, LATIN CAPITAL LETTER Y WITH ACUTE */
	0x94e6, /* 1564, 0x10010d9, U+10d9, KEY_Georgian_kan, GEORGIAN LETTER KAN */
	0x83fe, /* 1405, 0xec0, KEY_Hangul_AE */
	0x0000,
	0x0000,
	0x1f17, /*  335, 0xfd18, KEY_3270_Record */
	0x0000,
	0x2844, /*  460, 0xb5, U+00b5, KEY_mu, MICRO SIGN */
	0xd5f6, /* 2176, 0x1008ff5b, KEY_XF86Documents, Open documents window */
	0x0000,
	0x619a, /* 1064, 0x8a7, U+23a1, KEY_topleftsqbracket, LEFT SQUARE BRACKET UPPER CORNER */
	0x0000,
	0x2b85, /*  498, 0xd9, U+00d9, KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd529, /* 2167, 0x1008ff52, KEY_XF86Book, Launch bookreader */
	0xdc05, /* 2238, 0x1008ff9d, KEY_XF86FrameBack, video: go one frame back */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x1ca9, /*  309, 0xfea3, KEY_c_h */
	0x1d14, /*  314, 0xfd03, KEY_3270_Right2 */
	0x4ebd, /*  881, 0x6a6, KEY_Ukranian_i, deprecated */
	0x5d15, /* 1017, 0x7cb, U+039b, KEY_Greek_LAMBDA, GREEK CAPITAL LETTER LAMDA */
	0x6f33, /* 1201, 0xaf2, U+2021, KEY_doubledagger, DOUBLE DAGGER */
	0x0000,
	0x2f91, /*  547, 0x1ac, U+0179, KEY_Zacute, LATIN CAPITAL LETTER Z WITH ACUTE */
	0xe1a4, /* 2294, 0x1005ff75, KEY_SunCut */
	0x0000,
	0x2fa5, /*  548, 0x1ae, U+017d, KEY_Zcaron, LATIN CAPITAL LETTER Z WITH CARON */
	0x262d, /*  436, 0x7c, U+007c, KEY_bar, VERTICAL LINE */
	0x85ca, /* 1425, 0xed4, KEY_Hangul_J_Kiyeog */
	0x0000,
	0x0000,
	0x5c83, /* 1011, 0x7c6, U+0396, KEY_Greek_ZETA, GREEK CAPITAL LETTER ZETA */
	0x9a89, /* 1623, 0x1001eab, U+1eab, KEY_acircumflextilde, LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x2cfa, /*  516, 0xea, U+00ea, KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */
	0x0000,
	0xd952, /* 2211, 0x1008ff81, KEY_XF86Tools, toolbox of desktop/app. */
	0x0000,
	0x0000,
	0x6131, /* 1060, 0x8a3, KEY_horizconnector, (U+2500 BOX DRAWINGS LIGHT HORIZONTAL) */
	0xa90e, /* 1770, 0x100280b, U+280b, KEY_braille_dots_124, BRAILLE PATTERN DOTS-124 */
	0x13eb, /*  229, 0xfe60, KEY_dead_belowdot */
	0x0000,
	0xa9fa, /* 1778, 0x1002813, U+2813, KEY_braille_dots_125, BRAILLE PATTERN DOTS-125 */
	0xe756, /* 2351, 0x1004ff52, KEY_osfUp */
	0x0000,
	0x2bf2, /*  503, 0xde, U+00de, KEY_THORN, LATIN CAPITAL LETTER THORN */
	0xe371, /* 2310, 0x1000ff00, KEY_DRemove, Remove */
	0x0000,
	0x0000,
	0xa0e3, /* 1686, 0x1001eea, U+1eea, KEY_Uhorngrave, LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
	0xe1b8, /* 2295, 0x1005ff76, KEY_SunPowerSwitch */
	0xac15, /* 1796, 0x1002825, U+2825, KEY_braille_dots_136, BRAILLE PATTERN DOTS-136 */
	0xea84, /* 2386, 0x100000a8, KEY_mute_acute */
	0x7220, /* 1233, 0xbfc, U+22a2, KEY_righttack, RIGHT TACK */
	0x36c3, /*  633, 0x3bf, U+014b, KEY_eng, LATIN SMALL LETTER ENG */
	0x0000,
	0x0000,
	0x305d, /*  557, 0x1ba, U+015f, KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */
	0x0000,
	0x0000,
	0xb05d, /* 1832, 0x1002849, U+2849, KEY_braille_dots_147, BRAILLE PATTERN DOTS-147 */
	0x0000,
	0x12be, /*  218, 0xfe55, KEY_dead_breve */
	0xb81d, /* 1896, 0x1002889, U+2889, KEY_braille_dots_148, BRAILLE PATTERN DOTS-148 */
	0x7c2c, /* 1333, 0xddf, U+0e3f, KEY_Thai_baht, THAI CURRENCY SYMBOL BAHT */
	0x0000,
	0xb003, /* 1829, 0x1002846, U+2846, KEY_braille_dots_237, BRAILLE PATTERN DOTS-237 */
	0x2d84, /*  522, 0xf0, U+00f0, KEY_eth, LATIN SMALL LETTER ETH */
	0x0000,
	0x05da, /*   70, 0xff97, KEY_KP_Up */
	0x0001, /*    0, 0x0, KEY_VoidSymbol, Void symbol */
	0x0000,
	0xb07b, /* 1833, 0x100284a, U+284a, KEY_braille_dots_247, BRAILLE PATTERN DOTS-247 */
	0x0000,
	0x0000,
	0xbb01, /* 1920, 0x10028a1, U+28a1, KEY_braille_dots_168, BRAILLE PATTERN DOTS-168 */
	0xe20f, /* 2298, 0x1005ff79, KEY_SunAudioRaiseVolume */
	0x3c97, /*  700, 0x4af, KEY_kana_tu, deprecated */
	0xb16f, /* 1841, 0x1002852, U+2852, KEY_braille_dots_257, BRAILLE PATTERN DOTS-257 */
	0x9926, /* 1609, 0x1000292, U+0292, KEY_ezh, LATIN SMALL LETTER EZH */
	0x2fb9, /*  549, 0x1af, U+017b, KEY_Zabovedot, LATIN CAPITAL LETTER Z WITH DOT ABOVE */
	0x3c6c, /*  698, 0x4ae, U+30e7, KEY_kana_yo, KATAKANA LETTER SMALL YO */
	0x88c9, /* 1450, 0xeed, KEY_Hangul_J_Phieuf */
	0x7a28, /* 1313, 0xdc8, U+0e28, KEY_Thai_sosala, THAI CHARACTER SO SALA */
	0xccfa, /* 2088, 0x1000ddc, U+0ddc, KEY_Sinh_o2, SINHALA KOMBUVA HAA AELA-PILLA */
	0x14bf, /*  237, 0xfe66, KEY_dead_doublegrave */
	0x0000,
	0x3c57, /*  697, 0x4ad, U+30e5, KEY_kana_yu, KATAKANA LETTER SMALL YU */
	0x050e, /*   60, 0xff7f, KEY_Num_Lock */
	0x7167, /* 1224, 0xbca, U+2218, KEY_jot, RING OPERATOR */
	0x4023, /*  743, 0x4d7, U+30e9, KEY_kana_RA, KATAKANA LETTER RA */
	0x71dd, /* 1230, 0xbd8, KEY_rightshoe, (U+2283 SUPERSET OF) */
	0x0000,
	0x0000,
	0x83b3, /* 1402, 0xebd, KEY_Hangul_Phieuf */
	0x0000,
	0x0000,
	0x19a4, /*  282, 0xfee6, KEY_Pointer_DownLeft */
	0xd553, /* 2169, 0x1008ff54, KEY_XF86Calculater, Launch Calculater */
	0xbb5c, /* 1923, 0x10028a4, U+28a4, KEY_braille_dots_368, BRAILLE PATTERN DOTS-368 */
	0x94b3, /* 1562, 0x10010d7, U+10d7, KEY_Georgian_tan, GEORGIAN LETTER TAN */
	0x0000,
	0xe7de, /* 2357, 0x1004ff5a, KEY_osfBeginData */
	0x0000,
	0x459e, /*  800, 0x5d1, U+0631, KEY_Arabic_ra, ARABIC LETTER REH */
	0xb9e8, /* 1911, 0x1002898, U+2898, KEY_braille_dots_458, BRAILLE PATTERN DOTS-458 */
	0x4a8b, /*  847, 0x1000497, U+0497, KEY_Cyrillic_zhe_descender, CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
	0x0000,
	0x74f4, /* 1261, 0xcf3, U+05e3, KEY_hebrew_finalpe, HEBREW LETTER FINAL PE */
	0x0000,
	0x6936, /* 1143, 0xaaf, U+2025, KEY_doubbaselinedot, TWO DOT LEADER */
	0xbbd8, /* 1927, 0x10028a8, U+28a8, KEY_braille_dots_468, BRAILLE PATTERN DOTS-468 */
	0x361f, /*  625, 0x3ac, U+0166, KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */
	0x93ac, /* 1552, 0x1000556, U+0556, KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */
	0x16f2, /*  259, 0xfe8c, KEY_dead_greek */
	0xe30f, /* 2306, 0x1000fe27, KEY_Dacute_accent */
	0x0000,
	0xbfc8, /* 1959, 0x10028c8, U+28c8, KEY_braille_dots_478, BRAILLE PATTERN DOTS-478 */
	0x5938, /*  984, 0x7a2, U+0388, KEY_Greek_EPSILONaccent, GREEK CAPITAL LETTER EPSILON WITH TONOS */
	0x0000,
	0x8bc8, /* 1474, 0x100055b, U+055b, KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */
	0x35de, /*  622, 0x3a6, U+013b, KEY_Lcedilla, LATIN CAPITAL LETTER L WITH CEDILLA */
	0x49a0, /*  839, 0x10006cc, U+06cc, KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */
	0x26de, /*  444, 0xa5, U+00a5, KEY_yen, YEN SIGN */
	0x8005, /* 1370, 0xff3d, KEY_Hangul_MultipleCandidate, Multiple candidate */
	0x8541, /* 1419, 0xece, KEY_Hangul_WE */
	0x1222, /*  212, 0xfe50, KEY_dead_grave */
	0x0000,
	0xa044, /* 1679, 0x1001ee3, U+1ee3, KEY_ohornbelowdot, LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
	0xc0c4, /* 1967, 0x10028d0, U+28d0, KEY_braille_dots_578, BRAILLE PATTERN DOTS-578 */
	0x3897, /*  655, 0x1000175, U+0175, KEY_wcircumflex, LATIN SMALL LETTER W WITH CIRCUMFLEX */
	0x3aa4, /*  678, 0x1001ef2, U+1ef2, KEY_Ygrave, LATIN CAPITAL LETTER Y WITH GRAVE */
	0xd53f, /* 2168, 0x1008ff53, KEY_XF86CD, Launch CD/DVD player */
	0x0000,
	0x108a, /*  200, 0xfe29, KEY_ISO_Release_Margin_Left */
	0x0000,
	0x2019, /*  345, 0x23, U+0023, KEY_numbersign, NUMBER SIGN */
	0x9048, /* 1518, 0x1000545, U+0545, KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */
	0xc823, /* 2031, 0x1000d93, U+0d93, KEY_Sinh_ai, SINHALA AIYANNA */
	0x0000,
	0x6282, /* 1072, 0x8af, U+23a8, KEY_leftmiddlecurlybrace, LEFT CURLY BRACKET MIDDLE PIECE */
	0x2900, /*  468, 0xbd, U+00bd, KEY_onehalf, VULGAR FRACTION ONE HALF */
	0xcbe0, /* 2075, 0x1000dc6, U+0dc6, KEY_Sinh_fa, SINHALA FAYANNA */
	0x0000,
	0x0000,
	0x829d, /* 1392, 0xeb3, KEY_Hangul_SsangPieub */
	0xa402, /* 1721, 0x1002077, U+2077, KEY_sevensuperior, SUPERSCRIPT SEVEN */
	0x3780, /*  642, 0x3dd, U+0168, KEY_Utilde, LATIN CAPITAL LETTER U WITH TILDE */
	0x0000,
	0x0000,
	0x7d8a, /* 1346, 0xdec, U+0e4c, KEY_Thai_thanthakhat, THAI CHARACTER THANTHAKHAT */
	0x0183, /*   17, 0xff22, KEY_Muhenkan, Cancel Conversion */
	0x0000,
	0x9f9b, /* 1672, 0x1001edc, U+1edc, KEY_Ohorngrave, LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
	0xe794, /* 2354, 0x1004ff57, KEY_osfEndLine */
	0x456d, /*  798, 0x5cf, U+062f, KEY_Arabic_dal, ARABIC LETTER DAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3292, /*  584, 0x1ea, U+0119, KEY_eogonek, LATIN SMALL LETTER E WITH OGONEK */
	0xc861, /* 2034, 0x1000d96, U+0d96, KEY_Sinh_au, SINHALA AUYANNA */
	0x03f6, /*   46, 0xff58, KEY_Begin, BOL */
	0xd7a2, /* 2194, 0x1008ff6e, KEY_XF86Phone, Launch phone; dial number */
	0x5976, /*  986, 0x7a4, U+038a, KEY_Greek_IOTAaccent, GREEK CAPITAL LETTER IOTA WITH TONOS */
	0x0000,
	0x453c, /*  796, 0x5cd, U+062d, KEY_Arabic_hah, ARABIC LETTER HAH */
	0x0000,
	0x0000,
	0x6581, /* 1101, 0x8ef, U+2202, KEY_partialderivative, PARTIAL DIFFERENTIAL */
	0xcc0a, /* 2077, 0x1000dcf, U+0dcf, KEY_Sinh_aa2, SINHALA AELA-PILLA */
	0x7b0a, /* 1322, 0xdd1, U+0e31, KEY_Thai_maihanakat, THAI CHARACTER MAI HAN-AKAT */
	0x91aa, /* 1532, 0x100054c, U+054c, KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */
	0x0000,
	0x4758, /*  818, 0x5e7, KEY_Arabic_heh, deprecated */
	0x0000,
	0x46df, /*  813, 0x5e3, U+0643, KEY_Arabic_kaf, ARABIC LETTER KAF */
	0x0000,
	0xcc20, /* 2078, 0x1000dd0, U+0dd0, KEY_Sinh_ae2, SINHALA AEDA-PILLA */
	0x0000,
	0x0000,
	0xca9e, /* 2060, 0x1000db4, U+0db4, KEY_Sinh_pa, SINHALA PAYANNA */
	0x48fa, /*  833, 0x1000698, U+0698, KEY_Arabic_jeh, ARABIC LETTER JEH */
	0x0000,
	0x3367, /*  594, 0x1fe, U+0163, KEY_tcedilla, LATIN SMALL LETTER T WITH CEDILLA */
	0xc6d4, /* 2015, 0x1000d82, U+0d82, KEY_Sinh_ng, SINHALA ANUSVARAYA */
	0xcce4, /* 2087, 0x1000ddb, U+0ddb, KEY_Sinh_ai2, SINHALA KOMBU DEKA */
	0x46f7, /*  814, 0x5e4, U+0644, KEY_Arabic_lam, ARABIC LETTER LAM */
	0x6214, /* 1068, 0x8ab, U+239b, KEY_topleftparens, LEFT PARENTHESIS UPPER HOOK */
	0xd22c, /* 2138, 0x1008ff35, KEY_XF86LightBulb, Light bulb keys exist */
	0x6f05, /* 1199, 0xaf0, U+2720, KEY_maltesecross, MALTESE CROSS */
	0x0000,
	0xa141, /* 1690, 0x1001eee, U+1eee, KEY_Uhorntilde, LATIN CAPITAL LETTER U WITH HORN AND TILDE */
	0x791f, /* 1302, 0xdbd, U+0e1d, KEY_Thai_fofa, THAI CHARACTER FO FA */
	0xccce, /* 2086, 0x1000dda, U+0dda, KEY_Sinh_ee2, SINHALA DIGA KOMBUVA */
	0x9499, /* 1561, 0x10010d6, U+10d6, KEY_Georgian_zen, GEORGIAN LETTER ZEN */
	0x1e54, /*  327, 0xfd10, KEY_3270_AltCursor */
	0x3cac, /*  701, 0x4b0, U+30fc, KEY_prolongedsound, KATAKANA-HIRAGANA PROLONGED SOUND MARK */
	0x7356, /* 1245, 0xce6, KEY_hebrew_zayin, deprecated */
	0x37ea, /*  647, 0x3ef, U+012b, KEY_imacron, LATIN SMALL LETTER I WITH MACRON */
	0x0cb6, /*  166, 0xffe9, KEY_Alt_L, Left alt */
	0xe5d4, /* 2335, 0x1004ff03, KEY_osfCut */
	0xd6e5, /* 2186, 0x1008ff66, KEY_XF86MenuPB, distinuish PB from keyboard */
	0x0000,
	0xa29b, /* 1706, 0x10020a2, U+20a2, KEY_CruzeiroSign, CRUZEIRO SIGN */
	0xc7a4, /* 2025, 0x1000d8d, U+0d8d, KEY_Sinh_ri, SINHALA IRUYANNA */
	0x0cc9, /*  167, 0xffea, KEY_Alt_R, Right alt */
	0x58fa, /*  982, 0x6ff, U+042a, KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */
	0x0000,
	0x0000,
	0xcd25, /* 2090, 0x1000dde, U+0dde, KEY_Sinh_au2, SINHALA KOMBUVA HAA GAYANUKITTA */
	0x9993, /* 1614, 0x1001ea2, U+1ea2, KEY_Ahook, LATIN CAPITAL LETTER A WITH HOOK ABOVE */
	0x0000,
	0x0000,
	0x0057, /*    4, 0xff0b, KEY_Clear */
	0x0000,
	0x0000,
	0x0000,
	0x1fef, /*  343, 0x21, U+0021, KEY_exclam, EXCLAMATION MARK */
	0x0000,
	0x0000,
	0x0000,
	0x44f2, /*  793, 0x5ca, U+062a, KEY_Arabic_teh, ARABIC LETTER TEH */
	0x0000,
	0x2bc6, /*  501, 0xdc, U+00dc, KEY_Udiaeresis, LATIN CAPITAL LETTER U WITH DIAERESIS */
	0x0000,
	0x0000,
	0x0000,
	0x1182, /*  207, 0xfe30, KEY_ISO_Continuous_Underline */
	0xc73c, /* 2020, 0x1000d88, U+0d88, KEY_Sinh_aee, SINHALA AEEYANNA */
	0x2404, /*  403, 0x5c, U+005c, KEY_backslash, REVERSE SOLIDUS */
	0x0000,
	0x0000,
	0xd658, /* 2180, 0x1008ff5f, KEY_XF86Go, Go to URL */
	0x2fe5, /*  551, 0x1b2, U+02db, KEY_ogonek, OGONEK */
	0x650f, /* 1096, 0x8db, U+2283, KEY_includes, SUPERSET OF */
	0xd03e, /* 2119, 0x1008ff22, KEY_XF86ContrastAdjust, Adjust screen contrast */
	0x0000,
	0x4649, /*  807, 0x5d8, U+0638, KEY_Arabic_zah, ARABIC LETTER ZAH */
	0x04c7, /*   57, 0xff6b, KEY_Break */
	0x0000,
	0x4770, /*  819, 0x5e8, U+0648, KEY_Arabic_waw, ARABIC LETTER WAW */
	0x47a8, /*  821, 0x5ea, U+064a, KEY_Arabic_yeh, ARABIC LETTER YEH */
	0xca45, /* 2056, 0x1000daf, U+0daf, KEY_Sinh_dha, SINHALA DAYANNA */
	0x1600, /*  248, 0xfe81, KEY_dead_A */
	0x6b55, /* 1165, 0xacc, KEY_leftopentriangle, (U+25C1 WHITE LEFT-POINTING TRIANGLE) */
	0x2c40, /*  507, 0xe1, U+00e1, KEY_aacute, LATIN SMALL LETTER A WITH ACUTE */
	0x0000,
	0x1628, /*  250, 0xfe83, KEY_dead_E */
	0x5de9, /* 1026, 0x7d5, U+03a5, KEY_Greek_UPSILON, GREEK CAPITAL LETTER UPSILON */
	0x0000,
	0xe0b3, /* 2283, 0xff55, KEY_SunPageUp, Same as XK_Prior */
	0x1650, /*  252, 0xfe85, KEY_dead_I */
	0x6fb0, /* 1206, 0xaf7, U+2642, KEY_malesymbol, MALE SIGN */
	0x51e5, /*  912, 0x6ba, KEY_Serbian_NJE, deprecated */
	0x4ba4, /*  855, 0x10004af, U+04af, KEY_Cyrillic_u_straight, CYRILLIC SMALL LETTER STRAIGHT U */
	0x0000,
	0x0000,
	0x1678, /*  254, 0xfe87, KEY_dead_O */
	0x0000,
	0x0000,
	0x29b7, /*  476, 0xc5, U+00c5, KEY_Aring, LATIN CAPITAL LETTER A WITH RING ABOVE */
	0x0000,
	0x0000,
	0x16a0, /*  256, 0xfe89, KEY_dead_U */
	0x0000,
	0x6840, /* 1132, 0xaa2, U+2002, KEY_enspace, EN SPACE */
	0x2a18, /*  481, 0xca, U+00ca, KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
	0x5ef8, /* 1037, 0x7e7, U+03b7, KEY_Greek_eta, GREEK SMALL LETTER ETA */
	0x126f, /*  215, 0xfe53, KEY_dead_tilde */
	0x0000,
	0x222a, /*  373, 0x3e, U+003e, KEY_greater, GREATER-THAN SIGN */
	0x0000,
	0x0689, /*   78, 0xff9d, KEY_KP_Begin */
	0xa1fb, /* 1698, 0x1001ef8, U+1ef8, KEY_Ytilde, LATIN CAPITAL LETTER Y WITH TILDE */
	0x9c15, /* 1638, 0x1001eba, U+1eba, KEY_Ehook, LATIN CAPITAL LETTER E WITH HOOK ABOVE */
	0x15ec, /*  247, 0xfe80, KEY_dead_a */
	0x0000,
	0xcca3, /* 2084, 0x1000dd8, U+0dd8, KEY_Sinh_ru2, SINHALA GAETTA-PILLA */
	0x6980, /* 1146, 0xab2, U+2155, KEY_onefifth, VULGAR FRACTION ONE FIFTH */
	0x1614, /*  249, 0xfe82, KEY_dead_e */
	0xc8e2, /* 2040, 0x1000d9f, U+0d9f, KEY_Sinh_nga, SINHALA SANYAKA GAYANNA */
	0x1517, /*  240, 0xfe69, KEY_dead_belowcircumflex */
	0xcbca, /* 2074, 0x1000dc5, U+0dc5, KEY_Sinh_lla, SINHALA MUURDHAJA LAYANNA */
	0x163c, /*  251, 0xfe84, KEY_dead_i */
	0x9da6, /* 1653, 0x1001ec9, U+1ec9, KEY_ihook, LATIN SMALL LETTER I WITH HOOK ABOVE */
	0x19e1, /*  284, 0xfee8, KEY_Pointer_Button_Dflt */
	0xc97b, /* 2047, 0x1000da6, U+0da6, KEY_Sinh_nja, SINHALA SANYAKA JAYANNA */
	0x0000,
	0x0000,
	0x1664, /*  253, 0xfe86, KEY_dead_o */
	0xcab3, /* 2061, 0x1000db5, U+0db5, KEY_Sinh_pha, SINHALA MAHA. PAYANNA */
	0x0000,
	0x146a, /*  234, 0xfe64, KEY_dead_psili, alias for dead_abovecomma */
	0x0000,
	0x0199, /*   18, 0xff23, KEY_Henkan_Mode, Start/Stop Conversion */
	0x168c, /*  255, 0xfe88, KEY_dead_u */
	0x5db9, /* 1024, 0x7d2, U+03a3, KEY_Greek_SIGMA, GREEK CAPITAL LETTER SIGMA */
	0x0000,
	0x0170, /*   16, 0xff21, KEY_Kanji, Kanji, Kanji convert */
	0x0000,
	0x6f1f, /* 1200, 0xaf1, U+2020, KEY_dagger, DAGGER */
	0x7950, /* 1304, 0xdbf, U+0e1f, KEY_Thai_fofan, THAI CHARACTER FO FAN */
	0xcb73, /* 2070, 0x1000dc1, U+0dc1, KEY_Sinh_sha, SINHALA TAALUJA SAYANNA */
	0x0000,
	0x0000,
	0xdb3d, /* 2231, 0x1008ff96, KEY_XF86UWB, Enable/disable UWB	 */
	0xca18, /* 2054, 0x1000dad, U+0dad, KEY_Sinh_tha, SINHALA TAYANNA */
	0x0000,
	0xa9c0, /* 1776, 0x1002811, U+2811, KEY_braille_dots_15, BRAILLE PATTERN DOTS-15 */
	0x326a, /*  582, 0x1e6, U+0107, KEY_cacute, LATIN SMALL LETTER C WITH ACUTE */
	0x0000,
	0x170a, /*  260, 0xfed0, KEY_First_Virtual_Screen */
	0x327e, /*  583, 0x1e8, U+010d, KEY_ccaron, LATIN SMALL LETTER C WITH CARON */
	0xd3ec, /* 2155, 0x1008ff46, KEY_XF86Launch6, Launch Application */
	0xeaee, /* 2390, 0x100000ac, KEY_mute_asciitilde */
	0x0000,
	0xc94e, /* 2045, 0x1000da4, U+0da4, KEY_Sinh_nya, SINHALA TAALUJA NAASIKYAYA */
	0x5e7b, /* 1032, 0x7e2, U+03b2, KEY_Greek_beta, GREEK SMALL LETTER BETA */
	0x7d22, /* 1342, 0xde8, U+0e48, KEY_Thai_maiek, THAI CHARACTER MAI EK */
	0x4d55, /*  868, 0x10004e2, U+04e2, KEY_Cyrillic_I_macron, CYRILLIC CAPITAL LETTER I WITH MACRON */
	0x98da, /* 1605, 0x1000275, U+0275, KEY_obarred, LATIN SMALL LETTER BARRED O */
	0x3242, /*  580, 0x1e3, U+0103, KEY_abreve, LATIN SMALL LETTER A WITH BREVE */
	0x9a31, /* 1620, 0x1001ea8, U+1ea8, KEY_Acircumflexhook, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0xea9c, /* 2387, 0x100000a9, KEY_mute_grave */
	0x5cb2, /* 1013, 0x7c8, U+0398, KEY_Greek_THETA, GREEK CAPITAL LETTER THETA */
	0x0000,
	0x2749, /*  449, 0xaa, U+00aa, KEY_ordfeminine, FEMININE ORDINAL INDICATOR */
	0x61b8, /* 1065, 0x8a8, U+23a3, KEY_botleftsqbracket, LEFT SQUARE BRACKET LOWER CORNER */
	0x0000,
	0x5be6, /* 1005, 0x7bb, U+03ce, KEY_Greek_omegaaccent, GREEK SMALL LETTER OMEGA WITH TONOS */
	0xc991, /* 2048, 0x1000da7, U+0da7, KEY_Sinh_tta, SINHALA TTAYANNA */
	0x0000,
	0x0000,
	0x205a, /*  348, 0x26, U+0026, KEY_ampersand, AMPERSAND */
	0xd175, /* 2131, 0x1008ff2e, KEY_XF86WWW, Invoke web browser */
	0x0000,
	0x0000,
	0x0000,
	0x602f, /* 1050, 0x7f3, U+03c2, KEY_Greek_finalsmallsigma, GREEK SMALL LETTER FINAL SIGMA */
	0x495c, /*  837, 0x10006ba, U+06ba, KEY_Arabic_noon_ghunna, ARABIC LETTER NOON GHUNNA */
	0x0000,
	0x0000,
	0x0000,
	0xd5b3, /* 2173, 0x1008ff58, KEY_XF86Cut, Cut selection */
	0x32bb, /*  586, 0x1ef, U+010f, KEY_dcaron, LATIN SMALL LETTER D WITH CARON */
	0x0000,
	0x6525, /* 1097, 0x8dc, U+2229, KEY_intersection, INTERSECTION */
	0x0000,
	0x0000,
	0x0d46, /*  173, 0xfe02, KEY_ISO_Level2_Latch */
	0x0000,
	0x6052, /* 1051, 0x7f4, U+03c4, KEY_Greek_tau, GREEK SMALL LETTER TAU */
	0x0000,
	0x0000,
	0x0000,
	0x6416, /* 1085, 0x8c0, U+2234, KEY_therefore, THEREFORE */
	0x50b5, /*  900, 0x6b4, U+0404, KEY_Ukrainian_IE, CYRILLIC CAPITAL LETTER UKRAINIAN IE */
	0x0000,
	0xd716, /* 2188, 0x1008ff68, KEY_XF86New, New (folder, document... */
	0x7a72, /* 1316, 0xdcb, U+0e2b, KEY_Thai_hohip, THAI CHARACTER HO HIP */
	0x8364, /* 1399, 0xeba, KEY_Hangul_Cieuc */
	0xd69c, /* 2183, 0x1008ff62, KEY_XF86Market, ?? */
	0x0000,
	0x387e, /*  654, 0x1000174, U+0174, KEY_Wcircumflex, LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
	0x0000,
	0x0000,
	0x0000,
	0xa3e9, /* 1720, 0x1002076, U+2076, KEY_sixsuperior, SUPERSCRIPT SIX */
	0x7e29, /* 1352, 0xdf4, U+0e54, KEY_Thai_leksi, THAI DIGIT FOUR */
	0x0000,
	0x1ea2, /*  330, 0xfd13, KEY_3270_Ident */
	0x944c, /* 1558, 0x10010d3, U+10d3, KEY_Georgian_don, GEORGIAN LETTER DON */
	0x0000,
	0x2ce6, /*  515, 0xe9, U+00e9, KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */
	0x135f, /*  224, 0xfe5b, KEY_dead_cedilla */
	0x0000,
	0x1d2d, /*  315, 0xfd04, KEY_3270_Left2 */
	0xc4a2, /* 1998, 0x10028ef, U+28ef, KEY_braille_dots_1234678, BRAILLE PATTERN DOTS-1234678 */
	0x0000,
	0x0000,
	0x6b92, /* 1167, 0xace, KEY_emopencircle, (U+25CB WHITE CIRCLE) */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x2c2c, /*  506, 0xe0, U+00e0, KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */
	0xd05e, /* 2120, 0x1008ff23, KEY_XF86RockerUp, Rocker switches exist up */
	0x0000,
	0x7f05, /* 1361, 0xff34, KEY_Hangul_Hanja, Start Hangul->Hanja Conversion */
	0x9500, /* 1565, 0x10010da, U+10da, KEY_Georgian_las, GEORGIAN LETTER LAS */
	0x0000,
	0x8ab1, /* 1465, 0x1000587, U+0587, KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */
	0x5134, /*  905, 0x6b7, U+0407, KEY_Ukrainian_YI, CYRILLIC CAPITAL LETTER YI */
	0x42ae, /*  771, 0x10006d4, U+06d4, KEY_Arabic_fullstop, ARABIC FULL STOP */
	0x0000,
	0x27d2, /*  455, 0xb0, U+00b0, KEY_degree, DEGREE SIGN */
	0x64e2, /* 1094, 0x8d6, U+221a, KEY_radical, SQUARE ROOT */
	0x0000,
	0x0000,
	0x0000,
	0x898f, /* 1456, 0xef3, KEY_Hangul_KkogjiDalrinIeung */
	0xb4f3, /* 1870, 0x100286f, U+286f, KEY_braille_dots_123467, BRAILLE PATTERN DOTS-123467 */
	0x7d3a, /* 1343, 0xde9, U+0e49, KEY_Thai_maitho, THAI CHARACTER MAI THO */
	0x9534, /* 1567, 0x10010dc, U+10dc, KEY_Georgian_nar, GEORGIAN LETTER NAR */
	0x0000,
	0x9b34, /* 1629, 0x1001eb1, U+1eb1, KEY_abrevegrave, LATIN SMALL LETTER A WITH BREVE AND GRAVE */
	0x0000,
	0xbcb3, /* 1934, 0x10028af, U+28af, KEY_braille_dots_123468, BRAILLE PATTERN DOTS-123468 */
	0x1fdc, /*  342, 0x20, U+0020, KEY_space, SPACE */
	0x0000,
	0x0000,
	0x51fe, /*  913, 0x6bb, U+040b, KEY_Serbian_TSHE, CYRILLIC CAPITAL LETTER TSHE */
	0x7883, /* 1296, 0xdb7, U+0e17, KEY_Thai_thothahan, THAI CHARACTER THO THAHAN */
	0x5f28, /* 1039, 0x7e9, U+03b9, KEY_Greek_iota, GREEK SMALL LETTER IOTA */
	0x9d15, /* 1648, 0x1001ec4, U+1ec4, KEY_Ecircumflextilde, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x37be, /*  645, 0x3e7, U+012f, KEY_iogonek, LATIN SMALL LETTER I WITH OGONEK */
	0x14f9, /*  239, 0xfe68, KEY_dead_belowmacron */
	0x396c, /*  664, 0x1001e40, U+1e40, KEY_Mabovedot, LATIN CAPITAL LETTER M WITH DOT ABOVE */
	0x0000,
	0x86c1, /* 1433, 0xedc, KEY_Hangul_J_RieulKiyeog */
	0x007e, /*    6, 0xff13, KEY_Pause, Pause, hold */
	0xe710, /* 2348, 0x1004ff44, KEY_osfActivate */
	0x96f2, /* 1584, 0x10010ed, U+10ed, KEY_Georgian_char, GEORGIAN LETTER CHAR */
	0x572d, /*  964, 0x6ed, U+041c, KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */
	0x9872, /* 1600, 0x1001e8b, U+1e8b, KEY_xabovedot, LATIN SMALL LETTER X WITH DOT ABOVE */
	0x0000,
	0x1fc4, /*  341, 0xfd1e, KEY_3270_Enter */
	0x3b77, /*  687, 0x4a4, U+3001, KEY_kana_comma, IDEOGRAPHIC COMMA */
	0x0000,
	0xd938, /* 2210, 0x1008ff80, KEY_XF86Terminal, Launch terminal emulator */
	0x4a67, /*  846, 0x1000496, U+0496, KEY_Cyrillic_ZHE_descender, CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
	0x44d3, /*  792, 0x5c9, U+0629, KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */
	0x7af2, /* 1321, 0xdd0, U+0e30, KEY_Thai_saraa, THAI CHARACTER SARA A */
	0x0000,
	0x9689, /* 1580, 0x10010e9, U+10e9, KEY_Georgian_chin, GEORGIAN LETTER CHIN */
	0x9b7d, /* 1632, 0x1001eb4, U+1eb4, KEY_Abrevetilde, LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
	0x7c43, /* 1334, 0xde0, U+0e40, KEY_Thai_sarae, THAI CHARACTER SARA E */
	0x3649, /*  627, 0x3b5, U+0129, KEY_itilde, LATIN SMALL LETTER I WITH TILDE */
	0xddd9, /* 2256, 0x1008fe04, KEY_XF86Switch_VT_4 */
	0x9c28, /* 1639, 0x1001ebb, U+1ebb, KEY_ehook, LATIN SMALL LETTER E WITH HOOK ABOVE */
	0x054e, /*   63, 0xff8d, KEY_KP_Enter, Enter */
	0x8f5b, /* 1509, 0x1000570, U+0570, KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */
	0x7510, /* 1262, 0xcf4, U+05e4, KEY_hebrew_pe, HEBREW LETTER PE */
	0x20f8, /*  355, 0x2c, U+002c, KEY_comma, COMMA */
	0x0000,
	0x322e, /*  579, 0x1e0, U+0155, KEY_racute, LATIN SMALL LETTER R WITH ACUTE */
	0x7c74, /* 1336, 0xde2, U+0e42, KEY_Thai_sarao, THAI CHARACTER SARA O */
	0x0000,
	0xce76, /* 2102, 0x1008ff11, KEY_XF86AudioLowerVolume, Volume control down */
	0x0000,
	0x9639, /* 1577, 0x10010e6, U+10e6, KEY_Georgian_ghan, GEORGIAN LETTER GHAN */
	0x789f, /* 1297, 0xdb8, U+0e18, KEY_Thai_thothong, THAI CHARACTER THO THONG */
	0x4e56, /*  877, 0x6a4, U+0454, KEY_Ukrainian_ie, CYRILLIC SMALL LETTER UKRAINIAN IE */
	0x036f, /*   39, 0xff53, KEY_Right, Move right, right arrow */
	0x06cd, /*   81, 0xffbd, KEY_KP_Equal, Equals */
	0x0000,
	0xdaf3, /* 2228, 0x1008ff93, KEY_XF86Battery, Display battery information */
	0x0000,
	0x0000,
	0x64b6, /* 1092, 0x8ce, U+21d2, KEY_implies, RIGHTWARDS DOUBLE ARROW */
	0x2d53, /*  520, 0xee, U+00ee, KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */
	0x954e, /* 1568, 0x10010dd, U+10dd, KEY_Georgian_on, GEORGIAN LETTER ON */
	0x4aaf, /*  848, 0x100049a, U+049a, KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
	0xe32a, /* 2307, 0x1000fe60, KEY_Dgrave_accent */
	0x40eb, /*  752, 0xff7e, KEY_kana_switch, Alias for mode_switch */
	0x32cf, /*  587, 0x1f0, U+0111, KEY_dstroke, LATIN SMALL LETTER D WITH STROKE */
	0x656a, /* 1100, 0x8df, U+2228, KEY_logicalor, LOGICAL OR */
	0xceb3, /* 2104, 0x1008ff13, KEY_XF86AudioRaiseVolume, Volume control up */
	0x0000,
	0x23eb, /*  402, 0x5b, U+005b, KEY_bracketleft, LEFT SQUARE BRACKET */
	0x0000,
	0x0000,
	0x0000,
	0xc62a, /* 2010, 0x10028fb, U+28fb, KEY_braille_dots_1245678, BRAILLE PATTERN DOTS-1245678 */
	0x9727, /* 1586, 0x10010ef, U+10ef, KEY_Georgian_jhan, GEORGIAN LETTER JHAN */
	0x970d, /* 1585, 0x10010ee, U+10ee, KEY_Georgian_xan, GEORGIAN LETTER XAN */
	0x5c9b, /* 1012, 0x7c7, U+0397, KEY_Greek_ETA, GREEK CAPITAL LETTER ETA */
	0xbbb8, /* 1926, 0x10028a7, U+28a7, KEY_braille_dots_12368, BRAILLE PATTERN DOTS-12368 */
	0x8311, /* 1396, 0xeb7, KEY_Hangul_Ieung */
	0x832b, /* 1397, 0xeb8, KEY_Hangul_Jieuj */
	0x0000,
	0xcf41, /* 2109, 0x1008ff18, KEY_XF86HomePage, Display user's home page */
	0xdd29, /* 2250, 0x1008ffa9, KEY_XF86TouchpadToggle, Toggle between touchpad/trackstick */
	0x0000,
	0x6cd7, /* 1179, 0xadb, KEY_filledrectbullet, (U+25AC BLACK RECTANGLE) */
	0xe09a, /* 2282, 0xff7e, KEY_SunAltGraph, Same as XK_Mode_switch */
	0x961e, /* 1576, 0x10010e5, U+10e5, KEY_Georgian_khar, GEORGIAN LETTER KHAR */
	0x0000,
	0x4ed5, /*  882, 0x6a7, U+0457, KEY_Ukrainian_yi, CYRILLIC SMALL LETTER YI */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x68df, /* 1139, 0xaa9, U+2014, KEY_emdash, EM DASH */
	0x3cc8, /*  702, 0x4b1, U+30a2, KEY_kana_A, KATAKANA LETTER A */
	0x0000,
	0x3b8f, /*  688, 0x4a5, U+30fb, KEY_kana_conjunctive, KATAKANA MIDDLE DOT */
	0x6953, /* 1144, 0xab0, U+2153, KEY_onethird, VULGAR FRACTION ONE THIRD */
	0x3d04, /*  705, 0x4b4, U+30a8, KEY_kana_E, KATAKANA LETTER E */
	0x9ae9, /* 1626, 0x1001eae, U+1eae, KEY_Abreveacute, LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
	0x2d3f, /*  519, 0xed, U+00ed, KEY_iacute, LATIN SMALL LETTER I WITH ACUTE */
	0x9f6b, /* 1670, 0x1001eda, U+1eda, KEY_Ohornacute, LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
	0x3cdc, /*  703, 0x4b2, U+30a4, KEY_kana_I, KATAKANA LETTER I */
	0x5e04, /* 1027, 0x7d6, U+03a6, KEY_Greek_PHI, GREEK CAPITAL LETTER PHI */
	0x0000,
	0x372a, /*  638, 0x3d1, U+0145, KEY_Ncedilla, LATIN CAPITAL LETTER N WITH CEDILLA */
	0x8d5b, /* 1489, 0x1000566, U+0566, KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */
	0x40a1, /*  749, 0x4dd, U+30f3, KEY_kana_N, KATAKANA LETTER N */
	0x3022, /*  554, 0x1b6, U+015b, KEY_sacute, LATIN SMALL LETTER S WITH ACUTE */
	0x68f3, /* 1140, 0xaaa, U+2013, KEY_endash, EN DASH */
	0xcd51, /* 2092, 0x1000df2, U+0df2, KEY_Sinh_ruu2, SINHALA DIGA GAETTA-PILLA */
	0x0000,
	0x0394, /*   41, 0xff55, KEY_Prior, Prior, previous */
	0x0000,
	0x3cf0, /*  704, 0x4b3, U+30a6, KEY_kana_U, KATAKANA LETTER U */
	0xcdd7, /* 2097, 0x1008ff03, KEY_XF86MonBrightnessDown, Monitor/panel brightness */
	0x0000,
	0x5da2, /* 1023, 0x7d1, U+03a1, KEY_Greek_RHO, GREEK CAPITAL LETTER RHO */
	0x0000,
	0x0000,
	0x60fc, /* 1058, 0x8a1, U+23b7, KEY_leftradical, RADICAL SYMBOL BOTTOM */
	0xdea5, /* 2263, 0x1008fe0b, KEY_XF86Switch_VT_11 */
	0x2c05, /*  504, 0xde, KEY_Thorn, deprecated */
	0x0000,
	0xd75d, /* 2191, 0x1008ff6b, KEY_XF86Open, Open */
	0x5e32, /* 1029, 0x7d8, U+03a8, KEY_Greek_PSI, GREEK CAPITAL LETTER PSI */
	0x3bde, /*  691, 0x4a7, U+30a1, KEY_kana_a, KATAKANA LETTER SMALL A */
	0x68c8, /* 1138, 0xaa8, U+200a, KEY_hairspace, HAIR SPACE */
	0x2c6d, /*  509, 0xe3, U+00e3, KEY_atilde, LATIN SMALL LETTER A WITH TILDE */
	0x8269, /* 1390, 0xeb1, KEY_Hangul_Mieum */
	0x3c1a, /*  694, 0x4aa, U+30a7, KEY_kana_e, KATAKANA LETTER SMALL E */
	0x0000,
	0x04da, /*   58, 0xff7e, KEY_Mode_switch, Character set switch */
	0xc876, /* 2035, 0x1000d9a, U+0d9a, KEY_Sinh_ka, SINHALA KAYANNA */
	0x3bf2, /*  692, 0x4a8, U+30a3, KEY_kana_i, KATAKANA LETTER SMALL I */
	0x0000,
	0x0000,
	0xc0a3, /* 1966, 0x10028cf, U+28cf, KEY_braille_dots_123478, BRAILLE PATTERN DOTS-123478 */
	0xa249, /* 1702, 0x10001af, U+01af, KEY_Uhorn, LATIN CAPITAL LETTER U WITH HORN */
	0x0000,
	0x3c2e, /*  695, 0x4ab, U+30a9, KEY_kana_o, KATAKANA LETTER SMALL O */
	0x642d, /* 1086, 0x8c1, U+221d, KEY_variation, PROPORTIONAL TO */
	0x0000,
	0x0000,
	0x6b04, /* 1162, 0xac9, U+2122, KEY_trademark, TRADE MARK SIGN */
	0x0206, /*   23, 0xff27, KEY_Hiragana_Katakana, Hiragana/Katakana toggle */
	0x3c06, /*  693, 0x4a9, U+30a5, KEY_kana_u, KATAKANA LETTER SMALL U */
	0xbeb2, /* 1950, 0x10028bf, U+28bf, KEY_braille_dots_1234568, BRAILLE PATTERN DOTS-1234568 */
	0x9b96, /* 1633, 0x1001eb5, U+1eb5, KEY_abrevetilde, LATIN SMALL LETTER A WITH BREVE AND TILDE */
	0x0000,
	0x0000,
	0x0000,
	0x0c31, /*  160, 0xffe3, KEY_Control_L, Left control */
	0xc2a2, /* 1982, 0x10028df, U+28df, KEY_braille_dots_1234578, BRAILLE PATTERN DOTS-1234578 */
	0x0000,
	0x0000,
	0x0000,
	0x69de, /* 1150, 0xab6, U+2159, KEY_onesixth, VULGAR FRACTION ONE SIXTH */
	0x0c48, /*  161, 0xffe4, KEY_Control_R, Right control */
	0x1d97, /*  319, 0xfd08, KEY_3270_Reset */
	0xe41e, /* 2317, 0x1000ff75, KEY_hpKP_BackTab */
	0x966e, /* 1579, 0x10010e8, U+10e8, KEY_Georgian_shin, GEORGIAN LETTER SHIN */
	0x0000,
	0x05ed, /*   71, 0xff98, KEY_KP_Right */
	0x0000,
	0x9b4d, /* 1630, 0x1001eb2, U+1eb2, KEY_Abrevehook, LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
	0x2466, /*  407, 0x60, U+0060, KEY_grave, GRAVE ACCENT */
	0x79b4, /* 1308, 0xdc3, U+0e23, KEY_Thai_rorua, THAI CHARACTER RO RUA */
	0x0000,
	0x0000,
	0x0000,
	0xe495, /* 2322, 0x1000ff6e, KEY_hpUser */
	0xdaa5, /* 2225, 0x1008ff90, KEY_XF86MailForward, Forward in mail */
	0x0000,
	0xa60b, /* 1741, 0x100221c, U+221c, KEY_fourthroot, FOURTH ROOT */
	0x2031, /*  346, 0x24, U+0024, KEY_dollar, DOLLAR SIGN */
	0x9889, /* 1601, 0x100012d, U+012d, KEY_ibreve, LATIN SMALL LETTER I WITH BREVE */
	0x0000,
	0xe138, /* 2289, 0x1005ff70, KEY_SunProps */
	0x31eb, /*  576, 0x1d9, U+016e, KEY_Uring, LATIN CAPITAL LETTER U WITH RING ABOVE */
	0x6de5, /* 1188, 0xae4, KEY_opentribulletdown, (U+25BD WHITE DOWN-POINTING TRIANGLE) */
	0x3815, /*  649, 0x3f2, U+014d, KEY_omacron, LATIN SMALL LETTER O WITH MACRON */
	0x5a17, /*  991, 0x7a9, U+03ab, KEY_Greek_UPSILONdieresis, GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
	0x0000,
	0x0000,
	0x0000,
	0x0524, /*   61, 0xff80, KEY_KP_Space, Space */
	0x7a5a, /* 1315, 0xdca, U+0e2a, KEY_Thai_sosua, THAI CHARACTER SO SUA */
	0x178f, /*  264, 0xfed5, KEY_Terminate_Server */
	0x0ec5, /*  186, 0xfe0b, KEY_ISO_Prev_Group_Lock */
	0x7fa6, /* 1367, 0xff3a, KEY_Hangul_PreHanja, Pre Hanja conversion */
	0x0000,
	0x0000,
	0xa1d5, /* 1696, 0x1001ef6, U+1ef6, KEY_Yhook, LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
	0x0000,
	0x0000,
	0x3256, /*  581, 0x1e5, U+013a, KEY_lacute, LATIN SMALL LETTER L WITH ACUTE */
	0xd9b2, /* 2215, 0x1008ff86, KEY_XF86User2KB, ?? */
	0xe5bf, /* 2334, 0x1004ff02, KEY_osfCopy */
	0x300e, /*  553, 0x1b5, U+013e, KEY_lcaron, LATIN SMALL LETTER L WITH CARON */
	0xc66d, /* 2012, 0x10028fd, U+28fd, KEY_braille_dots_1345678, BRAILLE PATTERN DOTS-1345678 */
	0x0000,
	0x0000,
	0x0000,
	0xc4e3, /* 2000, 0x10028f1, U+28f1, KEY_braille_dots_15678, BRAILLE PATTERN DOTS-15678 */
	0x9581, /* 1570, 0x10010df, U+10df, KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */
	0x03ce, /*   44, 0xff56, KEY_Page_Down */
	0x1eff, /*  334, 0xfd17, KEY_3270_Setup */
	0x8175, /* 1382, 0xea9, KEY_Hangul_Rieul */
	0xe77f, /* 2353, 0x1004ff54, KEY_osfDown */
	0x0000,
	0x0000,
	0xa594, /* 1736, 0x1002208, U+2208, KEY_elementof, ELEMENT OF */
	0x2045, /*  347, 0x25, U+0025, KEY_percent, PERCENT SIGN */
	0x673f, /* 1121, 0x9ef, U+23ba, KEY_horizlinescan1, HORIZONTAL SCAN LINE-1 */
	0x27be, /*  454, 0xaf, U+00af, KEY_macron, MACRON */
	0x73ea, /* 1251, 0xcea, U+05da, KEY_hebrew_finalkaph, HEBREW LETTER FINAL KAF */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd356, /* 2149, 0x1008ff40, KEY_XF86Launch0, Launch Application */
	0x0618, /*   73, 0xff9a, KEY_KP_Prior */
	0x0000,
	0x7e72, /* 1355, 0xdf7, U+0e57, KEY_Thai_lekchet, THAI DIGIT SEVEN */
	0x0000,
	0x0000,
	0x0000,
	0x10d5, /*  202, 0xfe2b, KEY_ISO_Release_Both_Margins */
	0xe8a1, /* 2365, 0x1004ff67, KEY_osfMenu */
	0xd3a1, /* 2152, 0x1008ff43, KEY_XF86Launch3, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0x030f, /*   34, 0xff3d, KEY_Zen_Koho, Multiple/All Candidate(s) */
	0x0000,
	0x86e3, /* 1434, 0xedd, KEY_Hangul_J_RieulMieum */
	0x97dc, /* 1593, 0x10010f6, U+10f6, KEY_Georgian_fi, GEORGIAN LETTER FI */
	0x9b1b, /* 1628, 0x1001eb0, U+1eb0, KEY_Abrevegrave, LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
	0x2d2b, /*  518, 0xec, U+00ec, KEY_igrave, LATIN SMALL LETTER I WITH GRAVE */
	0x6e04, /* 1189, 0xae5, KEY_openstar, (U+2606 WHITE STAR) */
	0xcfa0, /* 2113, 0x1008ff1c, KEY_XF86AudioRecord, Record audio application */
	0xc84c, /* 2033, 0x1000d95, U+0d95, KEY_Sinh_oo, SINHALA OOYANNA */
	0x6069, /* 1052, 0x7f5, U+03c5, KEY_Greek_upsilon, GREEK SMALL LETTER UPSILON */
	0x0000,
	0xd41e, /* 2157, 0x1008ff48, KEY_XF86Launch8, Launch Application */
	0x0000,
	0x8399, /* 1401, 0xebc, KEY_Hangul_Tieut */
	0x8667, /* 1430, 0xed9, KEY_Hangul_J_NieunHieuh */
	0x0000,
	0x0000,
	0x5068, /*  897, 0x6b1, U+0402, KEY_Serbian_DJE, CYRILLIC CAPITAL LETTER DJE */
	0x3a8c, /*  677, 0x1001e85, U+1e85, KEY_wdiaeresis, LATIN SMALL LETTER W WITH DIAERESIS */
	0x0000,
	0x0000,
	0x811b, /* 1379, 0xea6, KEY_Hangul_NieunHieuh */
	0x0000,
	0x0000,
	0x0000,
	0x32e4, /*  588, 0x1f1, U+0144, KEY_nacute, LATIN SMALL LETTER N WITH ACUTE */
	0xe616, /* 2338, 0x1004ff08, KEY_osfBackSpace */
	0x3218, /*  578, 0x1de, U+0162, KEY_Tcedilla, LATIN CAPITAL LETTER T WITH CEDILLA */
	0x32f8, /*  589, 0x1f2, U+0148, KEY_ncaron, LATIN SMALL LETTER N WITH CARON */
	0xbf2d, /* 1954, 0x10028c3, U+28c3, KEY_braille_dots_1278, BRAILLE PATTERN DOTS-1278 */
	0x0b3b, /*  146, 0xffdb, KEY_F30 */
	0x6486, /* 1090, 0x8c9, U+2243, KEY_similarequal, ASYMPTOTICALLY EQUAL TO */
	0x0000,
	0x0b5d, /*  148, 0xffdc, KEY_F31 */
	0x0000,
	0x6c7f, /* 1175, 0xad6, U+2032, KEY_minutes, PRIME */
	0x0b7f, /*  150, 0xffdd, KEY_F32 */
	0xc19f, /* 1974, 0x10028d7, U+28d7, KEY_braille_dots_123578, BRAILLE PATTERN DOTS-123578 */
	0x0000,
	0x0ba1, /*  152, 0xffde, KEY_F33 */
	0x609b, /* 1054, 0x7f7, U+03c7, KEY_Greek_chi, GREEK SMALL LETTER CHI */
	0x6c94, /* 1176, 0xad7, U+2033, KEY_seconds, DOUBLE PRIME */
	0x0bc3, /*  154, 0xffdf, KEY_F34 */
	0x0000,
	0x0000,
	0x0019, /*    1, 0xff08, KEY_BackSpace, Back space, back char */
	0x6266, /* 1071, 0x8ae, U+23a0, KEY_botrightparens, RIGHT PARENTHESIS LOWER HOOK */
	0xd49b, /* 2162, 0x1008ff4d, KEY_XF86LaunchD, Launch Application */
	0x8646, /* 1429, 0xed8, KEY_Hangul_J_NieunJieuj */
	0x5037, /*  895, 0x6af, KEY_Serbian_dze, deprecated */
	0x1556, /*  242, 0xfe6b, KEY_dead_belowbreve */
	0xa623, /* 1742, 0x100222c, U+222c, KEY_dintegral, DOUBLE INTEGRAL */
	0x15b4, /*  245, 0xfe6e, KEY_dead_belowcomma */
	0xe297, /* 2302, 0x1005ff7d, KEY_SunPowerSwitchShift */
	0xd301, /* 2146, 0x1008ff3d, KEY_XF86Community, Display user's community */
	0x67de, /* 1127, 0x9f5, U+2524, KEY_rightt, BOX DRAWINGS LIGHT VERTICAL AND LEFT */
	0x241b, /*  404, 0x5d, U+005d, KEY_bracketright, RIGHT SQUARE BRACKET */
	0x2dbd, /*  525, 0xf3, U+00f3, KEY_oacute, LATIN SMALL LETTER O WITH ACUTE */
	0x5050, /*  896, 0x6b0, U+2116, KEY_numerosign, NUMERO SIGN */
	0x2a71, /*  485, 0xce, U+00ce, KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
	0x98c6, /* 1604, 0x10001d2, U+01d2, KEY_ocaron, LATIN SMALL LETTER O WITH CARON */
	0x0000,
	0x0e6c, /*  183, 0xfe08, KEY_ISO_Next_Group */
	0x7039, /* 1211, 0xafc, U+2038, KEY_caret, CARET */
	0x43a7, /*  782, 0x5bb, U+061b, KEY_Arabic_semicolon, ARABIC SEMICOLON */
	0x68b1, /* 1137, 0xaa7, U+2009, KEY_thinspace, THIN SPACE */
	0xe948, /* 2372, 0x1004ff78, KEY_osfRestore */
	0xb8d4, /* 1902, 0x100288f, U+288f, KEY_braille_dots_12348, BRAILLE PATTERN DOTS-12348 */
	0x0000,
	0xc21f, /* 1978, 0x10028db, U+28db, KEY_braille_dots_124578, BRAILLE PATTERN DOTS-124578 */
	0xd2e8, /* 2145, 0x1008ff3c, KEY_XF86Finance, Display financial site */
	0x8c02, /* 1476, 0x100055e, U+055e, KEY_Armenian_question, ARMENIAN QUESTION MARK */
	0xe960, /* 2373, 0x1004ffff, KEY_osfDelete */
	0x9f4a, /* 1669, 0x1001ed9, U+1ed9, KEY_ocircumflexbelowdot, LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x2831, /*  459, 0xb4, U+00b4, KEY_acute, ACUTE ACCENT */
	0x53f8, /*  932, 0x6cd, U+043c, KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */
	0x6611, /* 1107, 0x9df, KEY_blank */
	0x3036, /*  555, 0x1b7, U+02c7, KEY_caron, CARON */
	0x2706, /*  446, 0xa7, U+00a7, KEY_section, SECTION SIGN */
	0xa545, /* 1733, 0x1002089, U+2089, KEY_ninesubscript, SUBSCRIPT NINE */
	0x9418, /* 1556, 0x10010d1, U+10d1, KEY_Georgian_ban, GEORGIAN LETTER BAN */
	0x0000,
	0xe7c6, /* 2356, 0x1004ff59, KEY_osfEndData */
	0x0000,
	0x96a4, /* 1581, 0x10010ea, U+10ea, KEY_Georgian_can, GEORGIAN LETTER CAN */
	0x3405, /*  601, 0x2b1, U+0127, KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */
	0x8f42, /* 1508, 0x1000540, U+0540, KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */
	0x1ed1, /*  332, 0xfd15, KEY_3270_Copy */
	0x1e1f, /*  325, 0xfd0e, KEY_3270_Attn */
	0xe53a, /* 2328, 0x100000af, KEY_hplira */
	0x5474, /*  937, 0x6d2, U+0440, KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */
	0xbdef, /* 1944, 0x10028b9, U+28b9, KEY_braille_dots_14568, BRAILLE PATTERN DOTS-14568 */
	0x6084, /* 1053, 0x7f6, U+03c6, KEY_Greek_phi, GREEK SMALL LETTER PHI */
	0x614d, /* 1061, 0x8a4, U+2320, KEY_topintegral, TOP HALF INTEGRAL */
	0xe18e, /* 2293, 0x1005ff74, KEY_SunPaste */
	0x9742, /* 1587, 0x10010f0, U+10f0, KEY_Georgian_hae, GEORGIAN LETTER HAE */
	0x9b65, /* 1631, 0x1001eb3, U+1eb3, KEY_abrevehook, LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
	0x0000,
	0x96d8, /* 1583, 0x10010ec, U+10ec, KEY_Georgian_cil, GEORGIAN LETTER CIL */
	0xa2f9, /* 1710, 0x10020a6, U+20a6, KEY_NairaSign, NAIRA SIGN */
	0x9432, /* 1557, 0x10010d2, U+10d2, KEY_Georgian_gan, GEORGIAN LETTER GAN */
	0x05c5, /*   69, 0xff96, KEY_KP_Left */
	0xc564, /* 2004, 0x10028f5, U+28f5, KEY_braille_dots_135678, BRAILLE PATTERN DOTS-135678 */
	0xa1be, /* 1695, 0x1001ef5, U+1ef5, KEY_ybelowdot, LATIN SMALL LETTER Y WITH DOT BELOW */
	0x0000,
	0x0603, /*   72, 0xff99, KEY_KP_Down */
	0x5fff, /* 1048, 0x7f1, U+03c1, KEY_Greek_rho, GREEK SMALL LETTER RHO */
	0x210b, /*  356, 0x2d, U+002d, KEY_minus, HYPHEN-MINUS */
	0x05b0, /*   68, 0xff95, KEY_KP_Home */
	0x20b8, /*  352, 0x29, U+0029, KEY_parenright, RIGHT PARENTHESIS */
	0xdbae, /* 2235, 0x1008ff9a, KEY_XF86Subtitle, cycle through subtitle */
	0x9775, /* 1589, 0x10010f2, U+10f2, KEY_Georgian_hie, GEORGIAN LETTER HIE */
	0x4d74, /*  869, 0x10004e3, U+04e3, KEY_Cyrillic_i_macron, CYRILLIC SMALL LETTER I WITH MACRON */
	0x0000,
	0x60b2, /* 1055, 0x7f8, U+03c8, KEY_Greek_psi, GREEK SMALL LETTER PSI */
	0x0000,
	0x0f9a, /*  193, 0xfe22, KEY_ISO_Move_Line_Down */
	0xd9ff, /* 2218, 0x1008ff89, KEY_XF86Word, Launch word processor */
	0x0000,
	0x64cb, /* 1093, 0x8cf, U+2261, KEY_identical, IDENTICAL TO */
	0xdd49, /* 2251, 0x1008ffb0, KEY_XF86TouchpadOn, The touchpad got switched on */
	0xd836, /* 2200, 0x1008ff76, KEY_XF86RotationKB, don't use */
	0xb94d, /* 1906, 0x1002893, U+2893, KEY_braille_dots_1258, BRAILLE PATTERN DOTS-1258 */
	0x97c2, /* 1592, 0x10010f5, U+10f5, KEY_Georgian_hoe, GEORGIAN LETTER HOE */
	0x951a, /* 1566, 0x10010db, U+10db, KEY_Georgian_man, GEORGIAN LETTER MAN */
	0x4c32, /*  859, 0x10004b3, U+04b3, KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */
	0x96be, /* 1582, 0x10010eb, U+10eb, KEY_Georgian_jil, GEORGIAN LETTER JIL */
	0x0000,
	0x0000,
	0x1dc6, /*  321, 0xfd0a, KEY_3270_PA1 */
	0x1ddc, /*  322, 0xfd0b, KEY_3270_PA2 */
	0x1df2, /*  323, 0xfd0c, KEY_3270_PA3 */
	0x63cc, /* 1082, 0x8bd, U+2260, KEY_notequal, NOT EQUAL TO */
	0x6ef2, /* 1198, 0xaee, U+2665, KEY_heart, BLACK HEART SUIT */
	0xb896, /* 1900, 0x100288d, U+288d, KEY_braille_dots_1348, BRAILLE PATTERN DOTS-1348 */
	0x959c, /* 1571, 0x10010e0, U+10e0, KEY_Georgian_rae, GEORGIAN LETTER RAE */
	0x2c99, /*  511, 0xe5, U+00e5, KEY_aring, LATIN SMALL LETTER A WITH RING ABOVE */
	0x0000,
	0x0000,
	0x2ed6, /*  538, 0xff, U+00ff, KEY_ydiaeresis, LATIN SMALL LETTER Y WITH DIAERESIS */
	0x1594, /*  244, 0xfe6d, KEY_dead_invertedbreve */
	0x0000,
	0x0000,
	0x0000,
	0x9654, /* 1578, 0x10010e7, U+10e7, KEY_Georgian_qar, GEORGIAN LETTER QAR */
	0x4b60, /*  853, 0x10004a3, U+04a3, KEY_Cyrillic_en_descender, CYRILLIC SMALL LETTER EN WITH DESCENDER */
	0xbdaf, /* 1942, 0x10028b7, U+28b7, KEY_braille_dots_123568, BRAILLE PATTERN DOTS-123568 */
	0xbb1f, /* 1921, 0x10028a2, U+28a2, KEY_braille_dots_268, BRAILLE PATTERN DOTS-268 */
	0x95b6, /* 1572, 0x10010e1, U+10e1, KEY_Georgian_san, GEORGIAN LETTER SAN */
	0x1ee8, /*  333, 0xfd16, KEY_3270_Play */
	0x2f03, /*  540, 0x1a2, U+02d8, KEY_breve, BREVE */
	0x0000,
	0x1e8b, /*  329, 0xfd12, KEY_3270_Jump */
	0x0646, /*   75, 0xff9b, KEY_KP_Next */
	0x0000,
	0x4f21, /*  885, 0x6a8, KEY_Serbian_je, deprecated */
	0x3326, /*  591, 0x1f8, U+0159, KEY_rcaron, LATIN SMALL LETTER R WITH CARON */
	0xb208, /* 1846, 0x1002857, U+2857, KEY_braille_dots_12357, BRAILLE PATTERN DOTS-12357 */
	0xbb7a, /* 1924, 0x10028a5, U+28a5, KEY_braille_dots_1368, BRAILLE PATTERN DOTS-1368 */
	0x0000,
	0xc6b1, /* 2014, 0x10028ff, U+28ff, KEY_braille_dots_12345678, BRAILLE PATTERN DOTS-12345678 */
	0x0000,
	0x0000,
	0x70fb, /* 1219, 0xbc0, KEY_overbar, (U+00AF MACRON) */
	0x0000,
	0x21db, /*  369, 0x3a, U+003a, KEY_colon, COLON */
	0x1cf8, /*  313, 0xfd02, KEY_3270_FieldMark */
	0x8766, /* 1438, 0xee1, KEY_Hangul_J_RieulPhieuf */
	0x376b, /*  641, 0x3d9, U+0172, KEY_Uogonek, LATIN CAPITAL LETTER U WITH OGONEK */
	0x0d82, /*  175, 0xfe04, KEY_ISO_Level3_Latch */
	0x645a, /* 1088, 0x8c5, U+2207, KEY_nabla, NABLA */
	0x3b1a, /*  684, 0x4a1, U+3002, KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */
	0x0000,
	0xb284, /* 1850, 0x100285b, U+285b, KEY_braille_dots_12457, BRAILLE PATTERN DOTS-12457 */
	0x0000,
	0xd437, /* 2158, 0x1008ff49, KEY_XF86Launch9, Launch Application */
	0x947f, /* 1560, 0x10010d5, U+10d5, KEY_Georgian_vin, GEORGIAN LETTER VIN */
	0xbfa8, /* 1958, 0x10028c7, U+28c7, KEY_braille_dots_12378, BRAILLE PATTERN DOTS-12378 */
	0x0000,
	0x0000,
	0x7868, /* 1295, 0xdb6, U+0e16, KEY_Thai_thothung, THAI CHARACTER THO THUNG */
	0x82bc, /* 1393, 0xeb4, KEY_Hangul_PieubSios */
	0xe646, /* 2340, 0x1004ff1b, KEY_osfEscape */
	0xe24d, /* 2300, 0x1005ff7b, KEY_SunVideoLowerBrightness */
	0x1e08, /*  324, 0xfd0d, KEY_3270_Test */
	0x2ff9, /*  552, 0x1b3, U+0142, KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */
	0x35a1, /*  619, 0x3a2, KEY_kappa, deprecated */
	0x0000,
	0x3049, /*  556, 0x1b9, U+0161, KEY_scaron, LATIN SMALL LETTER S WITH CARON */
	0x9d93, /* 1652, 0x1001ec8, U+1ec8, KEY_Ihook, LATIN CAPITAL LETTER I WITH HOOK ABOVE */
	0x0000,
	0xe0e3, /* 2285, 0xff65, KEY_SunUndo, Same as XK_Undo */
	0x176e, /*  263, 0xfed4, KEY_Last_Virtual_Screen */
	0x0000,
	0x0000,
	0xd482, /* 2161, 0x1008ff4c, KEY_XF86LaunchC, Launch Application */
	0x0000,
	0x2da9, /*  524, 0xf2, U+00f2, KEY_ograve, LATIN SMALL LETTER O WITH GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0xd4cd, /* 2164, 0x1008ff4f, KEY_XF86LaunchF, Launch Application */
	0xc281, /* 1981, 0x10028de, U+28de, KEY_braille_dots_234578, BRAILLE PATTERN DOTS-234578 */
	0x1eba, /*  331, 0xfd14, KEY_3270_Rule */
	0x1daf, /*  320, 0xfd09, KEY_3270_Quit */
	0x0000,
	0xdb8d, /* 2234, 0x1008ff99, KEY_XF86AudioRandomPlay, toggle shuffle mode */
	0x02f5, /*   33, 0xff37, KEY_Kanji_Bangou, Codeinput */
	0x0000,
	0xe1f5, /* 2297, 0x1005ff78, KEY_SunAudioMute */
	0x0000,
	0x0000,
	0xd6b4, /* 2184, 0x1008ff63, KEY_XF86Meeting, enter meeting in calendar */
	0x0000,
	0x211e, /*  357, 0x2e, U+002e, KEY_period, FULL STOP */
	0x0000,
	0x0000,
	0xa2b5, /* 1707, 0x10020a3, U+20a3, KEY_FFrancSign, FRENCH FRANC SIGN */
	0xc0e2, /* 1968, 0x10028d1, U+28d1, KEY_braille_dots_1578, BRAILLE PATTERN DOTS-1578 */
	0x2217, /*  372, 0x3d, U+003d, KEY_equal, EQUALS SIGN */
	0x3073, /*  558, 0x1bb, U+0165, KEY_tcaron, LATIN SMALL LETTER T WITH CARON */
	0x67cb, /* 1126, 0x9f4, U+251c, KEY_leftt, BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
	0xc481, /* 1997, 0x10028ee, U+28ee, KEY_braille_dots_234678, BRAILLE PATTERN DOTS-234678 */
	0x0000,
	0x8b6f, /* 1471, 0x100058a, U+058a, KEY_Armenian_yentamna, ARMENIAN HYPHEN */
	0x6370, /* 1079, 0x8b6, KEY_botrightsummation */
	0x6351, /* 1078, 0x8b5, KEY_toprightsummation */
	0xbc93, /* 1933, 0x10028ae, U+28ae, KEY_braille_dots_23468, BRAILLE PATTERN DOTS-23468 */
	0x60c9, /* 1056, 0x7f9, U+03c9, KEY_Greek_omega, GREEK SMALL LETTER OMEGA */
	0x0000,
	0x5180, /*  908, 0x6b8, KEY_Serbian_JE, deprecated */
	0x4a49, /*  845, 0x1000493, U+0493, KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */
	0x0000,
	0xc37f, /* 1989, 0x10028e6, U+28e6, KEY_braille_dots_23678, BRAILLE PATTERN DOTS-23678 */
	0x6bc9, /* 1169, 0xad0, U+2018, KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */
	0xcc8d, /* 2083, 0x1000dd6, U+0dd6, KEY_Sinh_uu2, SINHALA DIGA PAA-PILLA */
	0xc460, /* 1996, 0x10028ed, U+28ed, KEY_braille_dots_134678, BRAILLE PATTERN DOTS-134678 */
	0x0000,
	0x3755, /*  640, 0x3d3, U+0136, KEY_Kcedilla, LATIN CAPITAL LETTER K WITH CEDILLA */
	0xb64f, /* 1881, 0x100287a, U+287a, KEY_braille_dots_24567, BRAILLE PATTERN DOTS-24567 */
	0x675b, /* 1122, 0x9f0, U+23bb, KEY_horizlinescan3, HORIZONTAL SCAN LINE-3 */
	0x4e09, /*  874, 0x6a1, U+0452, KEY_Serbian_dje, CYRILLIC SMALL LETTER DJE */
	0x6777, /* 1123, 0x9f1, U+2500, KEY_horizlinescan5, BOX DRAWINGS LIGHT HORIZONTAL */
	0x0000,
	0x6793, /* 1124, 0x9f2, U+23bc, KEY_horizlinescan7, HORIZONTAL SCAN LINE-7 */
	0x93ff, /* 1555, 0x10010d0, U+10d0, KEY_Georgian_an, GEORGIAN LETTER AN */
	0x67af, /* 1125, 0x9f3, U+23bd, KEY_horizlinescan9, HORIZONTAL SCAN LINE-9 */
	0xaf33, /* 1822, 0x100283f, U+283f, KEY_braille_dots_123456, BRAILLE PATTERN DOTS-123456 */
	0x2792, /*  452, 0xad, U+00ad, KEY_hyphen, SOFT HYPHEN */
	0x2e6a, /*  533, 0xfa, U+00fa, KEY_uacute, LATIN SMALL LETTER U WITH ACUTE */
	0x975c, /* 1588, 0x10010f1, U+10f1, KEY_Georgian_he, GEORGIAN LETTER HE */
	0xbac3, /* 1918, 0x100289f, U+289f, KEY_braille_dots_123458, BRAILLE PATTERN DOTS-123458 */
	0x0000,
	0x9466, /* 1559, 0x10010d4, U+10d4, KEY_Georgian_en, GEORGIAN LETTER EN */
	0x7237, /* 1234, 0xcdf, U+2017, KEY_hebrew_doublelowline, DOUBLE LOW LINE */
	0x4f9f, /*  890, 0x6ab, U+045b, KEY_Serbian_tshe, CYRILLIC SMALL LETTER TSHE */
	0x0000,
	0x85e7, /* 1426, 0xed5, KEY_Hangul_J_SsangKiyeog */
	0x1539, /*  241, 0xfe6a, KEY_dead_belowtilde */
	0x130d, /*  221, 0xfe58, KEY_dead_abovering */
	0x6eb1, /* 1195, 0xaeb, KEY_rightpointer, (U+261E WHITE RIGHT POINTING INDEX) */
	0x94cd, /* 1563, 0x10010d8, U+10d8, KEY_Georgian_in, GEORGIAN LETTER IN */
	0xc585, /* 2005, 0x10028f6, U+28f6, KEY_braille_dots_235678, BRAILLE PATTERN DOTS-235678 */
	0xbc34, /* 1930, 0x10028ab, U+28ab, KEY_braille_dots_12468, BRAILLE PATTERN DOTS-12468 */
	0xd684, /* 2182, 0x1008ff61, KEY_XF86LogOff, Log off system */
	0xaf13, /* 1821, 0x100283e, U+283e, KEY_braille_dots_23456, BRAILLE PATTERN DOTS-23456 */
	0xa949, /* 1772, 0x100280d, U+280d, KEY_braille_dots_134, BRAILLE PATTERN DOTS-134 */
	0x7389, /* 1247, 0xce7, KEY_hebrew_het, deprecated */
	0x18c7, /*  274, 0xfe79, KEY_Overlay2_Enable */
	0xd2ac, /* 2143, 0x1008ff3a, KEY_XF86HotLinks, Show "hot" links */
	0x0000,
	0x7c8c, /* 1337, 0xde3, U+0e43, KEY_Thai_saraaimaimuan, THAI CHARACTER SARA AI MAIMUAN */
	0x0000,
	0x4f53, /*  887, 0x6a9, KEY_Serbian_lje, deprecated */
	0xa5f5, /* 1740, 0x100221b, U+221b, KEY_cuberoot, CUBE ROOT */
	0xc39f, /* 1990, 0x10028e7, U+28e7, KEY_braille_dots_123678, BRAILLE PATTERN DOTS-123678 */
	0x5c1e, /* 1007, 0x7c2, U+0392, KEY_Greek_BETA, GREEK CAPITAL LETTER BETA */
	0xb66f, /* 1882, 0x100287b, U+287b, KEY_braille_dots_124567, BRAILLE PATTERN DOTS-124567 */
	0xafe5, /* 1828, 0x1002845, U+2845, KEY_braille_dots_137, BRAILLE PATTERN DOTS-137 */
	0xbe2f, /* 1946, 0x10028bb, U+28bb, KEY_braille_dots_124568, BRAILLE PATTERN DOTS-124568 */
	0x978f, /* 1590, 0x10010f3, U+10f3, KEY_Georgian_we, GEORGIAN LETTER WE */
	0x4f86, /*  889, 0x6aa, KEY_Serbian_nje, deprecated */
	0xac8d, /* 1800, 0x1002829, U+2829, KEY_braille_dots_146, BRAILLE PATTERN DOTS-146 */
	0x4dea, /*  873, 0x10004ef, U+04ef, KEY_Cyrillic_u_macron, CYRILLIC SMALL LETTER U WITH MACRON */
	0xb4b3, /* 1868, 0x100286d, U+286d, KEY_braille_dots_13467, BRAILLE PATTERN DOTS-13467 */
	0x95ea, /* 1574, 0x10010e3, U+10e3, KEY_Georgian_un, GEORGIAN LETTER UN */
	0xce19, /* 2099, 0x1008ff05, KEY_XF86KbdBrightnessUp, Keyboards may be lit */
	0xbbf6, /* 1928, 0x10028a9, U+28a9, KEY_braille_dots_1468, BRAILLE PATTERN DOTS-1468 */
	0xe039, /* 2278, 0x1005ff11, KEY_SunF37, Labeled F12 */
	0x9bcb, /* 1635, 0x1001eb7, U+1eb7, KEY_abrevebelowdot, LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
	0xc68f, /* 2013, 0x10028fe, U+28fe, KEY_braille_dots_2345678, BRAILLE PATTERN DOTS-2345678 */
	0xc41f, /* 1994, 0x10028eb, U+28eb, KEY_braille_dots_124678, BRAILLE PATTERN DOTS-124678 */
	0x0000,
	0xc320, /* 1986, 0x10028e3, U+28e3, KEY_braille_dots_12678, BRAILLE PATTERN DOTS-12678 */
	0xb151, /* 1840, 0x1002851, U+2851, KEY_braille_dots_157, BRAILLE PATTERN DOTS-157 */
	0xeb32, /* 2393, 0x100000ee, KEY_IO */
	0x0000,
	0x0ddb, /*  178, 0xfe12, KEY_ISO_Level5_Latch */
	0xb7c3, /* 1893, 0x1002886, U+2886, KEY_braille_dots_238, BRAILLE PATTERN DOTS-238 */
	0x0000,
	0x30c8, /*  562, 0x1bf, U+017c, KEY_zabovedot, LATIN SMALL LETTER Z WITH DOT ABOVE */
	0x1287, /*  216, 0xfe53, KEY_dead_perispomeni, alias for dead_tilde */
	0x0c76, /*  163, 0xffe6, KEY_Shift_Lock, Shift lock */
	0x0000,
	0xa46d, /* 1725, 0x1002081, U+2081, KEY_onesubscript, SUBSCRIPT ONE */
	0xc15f, /* 1972, 0x10028d5, U+28d5, KEY_braille_dots_13578, BRAILLE PATTERN DOTS-13578 */
	0xa487, /* 1726, 0x1002082, U+2082, KEY_twosubscript, SUBSCRIPT TWO */
	0x9be7, /* 1636, 0x1001eb8, U+1eb8, KEY_Ebelowdot, LATIN CAPITAL LETTER E WITH DOT BELOW */
	0xb690, /* 1883, 0x100287c, U+287c, KEY_braille_dots_34567, BRAILLE PATTERN DOTS-34567 */
	0x2d95, /*  523, 0xf1, U+00f1, KEY_ntilde, LATIN SMALL LETTER N WITH TILDE */
	0x9e28, /* 1659, 0x1001ecf, U+1ecf, KEY_ohook, LATIN SMALL LETTER O WITH HOOK ABOVE */
	0x0d64, /*  174, 0xfe03, KEY_ISO_Level3_Shift */
	0x9902, /* 1607, 0x1000259, U+0259, KEY_schwa, LATIN SMALL LETTER SCHWA */
	0x3a60, /*  675, 0x1001e83, U+1e83, KEY_wacute, LATIN SMALL LETTER W WITH ACUTE */
	0x4a2b, /*  844, 0x1000492, U+0492, KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */
	0xc260, /* 1980, 0x10028dd, U+28dd, KEY_braille_dots_134578, BRAILLE PATTERN DOTS-134578 */
	0xc5a6, /* 2006, 0x10028f7, U+28f7, KEY_braille_dots_1235678, BRAILLE PATTERN DOTS-1235678 */
	0x0000,
	0x0000,
	0xa236, /* 1701, 0x10001a1, U+01a1, KEY_ohorn, LATIN SMALL LETTER O WITH HORN */
	0xb62f, /* 1880, 0x1002879, U+2879, KEY_braille_dots_14567, BRAILLE PATTERN DOTS-14567 */
	0xad44, /* 1806, 0x100282f, U+282f, KEY_braille_dots_12346, BRAILLE PATTERN DOTS-12346 */
	0xb878, /* 1899, 0x100288c, U+288c, KEY_braille_dots_348, BRAILLE PATTERN DOTS-348 */
	0x2b45, /*  495, 0xd7, U+00d7, KEY_multiply, MULTIPLICATION SIGN */
	0x9915, /* 1608, 0x10001b7, U+01b7, KEY_EZH, LATIN CAPITAL LETTER EZH */
	0x3563, /*  616, 0x2fd, U+016d, KEY_ubreve, LATIN SMALL LETTER U WITH BREVE */
	0x277d, /*  451, 0xac, U+00ac, KEY_notsign, NOT SIGN */
	0xa666, /* 1745, 0x1002248, U+2245, KEY_approxeq, ALMOST EQUAL TO */
	0xd36f, /* 2150, 0x1008ff41, KEY_XF86Launch1, Launch Application */
	0xd388, /* 2151, 0x1008ff42, KEY_XF86Launch2, Launch Application */
	0x3869, /*  653, 0x3fe, U+016b, KEY_umacron, LATIN SMALL LETTER U WITH MACRON */
	0xd3ba, /* 2153, 0x1008ff44, KEY_XF86Launch4, Launch Application */
	0x80a3, /* 1375, 0xea2, KEY_Hangul_SsangKiyeog */
	0xaeb4, /* 1818, 0x100283b, U+283b, KEY_braille_dots_12456, BRAILLE PATTERN DOTS-12456 */
	0xd405, /* 2156, 0x1008ff47, KEY_XF86Launch7, Launch Application */
	0xaed4, /* 1819, 0x100283c, U+283c, KEY_braille_dots_3456, BRAILLE PATTERN DOTS-3456 */
	0x704c, /* 1212, 0xafd, U+201a, KEY_singlelowquotemark, SINGLE LOW-9 QUOTATION MARK */
	0xba44, /* 1914, 0x100289b, U+289b, KEY_braille_dots_12458, BRAILLE PATTERN DOTS-12458 */
	0x2e2c, /*  530, 0xf8, U+00f8, KEY_oslash, LATIN SMALL LETTER O WITH STROKE */
	0xb474, /* 1866, 0x100286b, U+286b, KEY_braille_dots_12467, BRAILLE PATTERN DOTS-12467 */
	0xa5ab, /* 1737, 0x1002209, U+2209, KEY_notelementof, NOT AN ELEMENT OF */
	0x2dea, /*  527, 0xf5, U+00f5, KEY_otilde, LATIN SMALL LETTER O WITH TILDE */
	0xc609, /* 2009, 0x10028fa, U+28fa, KEY_braille_dots_245678, BRAILLE PATTERN DOTS-245678 */
	0xba64, /* 1915, 0x100289c, U+289c, KEY_braille_dots_3458, BRAILLE PATTERN DOTS-3458 */
	0xd450, /* 2159, 0x1008ff4a, KEY_XF86LaunchA, Launch Application */
	0xd469, /* 2160, 0x1008ff4b, KEY_XF86LaunchB, Launch Application */
	0x18e4, /*  275, 0xfe7a, KEY_AudibleBell_Enable */
	0xb570, /* 1874, 0x1002873, U+2873, KEY_braille_dots_12567, BRAILLE PATTERN DOTS-12567 */
	0xd4b4, /* 2163, 0x1008ff4e, KEY_XF86LaunchE, Launch Application */
	0xbd30, /* 1938, 0x10028b3, U+28b3, KEY_braille_dots_12568, BRAILLE PATTERN DOTS-12568 */
	0x0000,
	0xb2c3, /* 1852, 0x100285d, U+285d, KEY_braille_dots_13457, BRAILLE PATTERN DOTS-13457 */
	0x0710, /*   84, 0xffac, KEY_KP_Separator, Separator, often comma */
	0xc120, /* 1970, 0x10028d3, U+28d3, KEY_braille_dots_12578, BRAILLE PATTERN DOTS-12578 */
	0xd78b, /* 2193, 0x1008ff6d, KEY_XF86Paste, Paste */
	0x2132, /*  358, 0x2f, U+002f, KEY_slash, SOLIDUS */
	0x7d06, /* 1341, 0xde7, U+0e47, KEY_Thai_maitaikhu, THAI CHARACTER MAITAIKHU */
	0x3b35, /*  685, 0x4a2, U+300c, KEY_kana_openingbracket, LEFT CORNER BRACKET */
	0xaa71, /* 1782, 0x1002817, U+2817, KEY_braille_dots_1235, BRAILLE PATTERN DOTS-1235 */
	0xc044, /* 1963, 0x10028cc, U+28cc, KEY_braille_dots_3478, BRAILLE PATTERN DOTS-3478 */
	0xac51, /* 1798, 0x1002827, U+2827, KEY_braille_dots_1236, BRAILLE PATTERN DOTS-1236 */
	0x5c4f, /* 1009, 0x7c4, U+0394, KEY_Greek_DELTA, GREEK CAPITAL LETTER DELTA */
	0xb021, /* 1830, 0x1002847, U+2847, KEY_braille_dots_1237, BRAILLE PATTERN DOTS-1237 */
	0x0000,
	0xacc9, /* 1802, 0x100282b, U+282b, KEY_braille_dots_1246, BRAILLE PATTERN DOTS-1246 */
	0xbd6f, /* 1940, 0x10028b5, U+28b5, KEY_braille_dots_13568, BRAILLE PATTERN DOTS-13568 */
	0x24db, /*  414, 0x66, U+0066, KEY_f, LATIN SMALL LETTER F */
	0x3b04, /*  683, 0x47e, U+203e, KEY_overline, OVERLINE */
	0xadbd, /* 1810, 0x1002833, U+2833, KEY_braille_dots_1256, BRAILLE PATTERN DOTS-1256 */
	0x632a, /* 1077, 0x8b4, KEY_botvertsummationconnector */
	0xab26, /* 1788, 0x100281d, U+281d, KEY_braille_dots_1345, BRAILLE PATTERN DOTS-1345 */
	0x0000,
	0xad06, /* 1804, 0x100282d, U+282d, KEY_braille_dots_1346, BRAILLE PATTERN DOTS-1346 */
	0xb303, /* 1854, 0x100285f, U+285f, KEY_braille_dots_123457, BRAILLE PATTERN DOTS-123457 */
	0xb37d, /* 1858, 0x1002863, U+2863, KEY_braille_dots_1267, BRAILLE PATTERN DOTS-1267 */
	0x5233, /*  915, 0x6bd, U+0490, KEY_Ukrainian_GHE_WITH_UPTURN, CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
	0xadfa, /* 1812, 0x1002835, U+2835, KEY_braille_dots_1356, BRAILLE PATTERN DOTS-1356 */
	0x2eaf, /*  536, 0xfd, U+00fd, KEY_yacute, LATIN SMALL LETTER Y WITH ACUTE */
	0x4788, /*  820, 0x5e9, U+0649, KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */
	0xb5ef, /* 1878, 0x1002877, U+2877, KEY_braille_dots_123567, BRAILLE PATTERN DOTS-123567 */
	0xb98a, /* 1908, 0x1002895, U+2895, KEY_braille_dots_1358, BRAILLE PATTERN DOTS-1358 */
	0x8609, /* 1427, 0xed6, KEY_Hangul_J_KiyeogSios */
	0xb3ba, /* 1860, 0x1002865, U+2865, KEY_braille_dots_1367, BRAILLE PATTERN DOTS-1367 */
	0xb2e3, /* 1853, 0x100285e, U+285e, KEY_braille_dots_23457, BRAILLE PATTERN DOTS-23457 */
	0x6016, /* 1049, 0x7f2, U+03c3, KEY_Greek_sigma, GREEK SMALL LETTER SIGMA */
	0xc1df, /* 1976, 0x10028d9, U+28d9, KEY_braille_dots_14578, BRAILLE PATTERN DOTS-14578 */
	0xab45, /* 1789, 0x100281e, U+281e, KEY_braille_dots_2345, BRAILLE PATTERN DOTS-2345 */
	0x8a77, /* 1463, 0xefa, KEY_Hangul_J_YeorinHieuh */
	0xba06, /* 1912, 0x1002899, U+2899, KEY_braille_dots_1458, BRAILLE PATTERN DOTS-1458 */
	0x2e56, /*  532, 0xf9, U+00f9, KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */
	0x7151, /* 1223, 0xbc6, KEY_underbar, (U+005F LOW LINE) */
	0x16d2, /*  258, 0xfe8b, KEY_dead_capital_schwa */
	0xae19, /* 1813, 0x1002836, U+2836, KEY_braille_dots_2356, BRAILLE PATTERN DOTS-2356 */
	0xc3df, /* 1992, 0x10028e9, U+28e9, KEY_braille_dots_14678, BRAILLE PATTERN DOTS-14678 */
	0xc2c4, /* 1983, 0x10028e0, U+28e0, KEY_braille_dots_678, BRAILLE PATTERN DOTS-678 */
	0x0000,
	0x55c5, /*  950, 0x6df, U+044a, KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */
	0x0000,
	0xb532, /* 1872, 0x1002871, U+2871, KEY_braille_dots_1567, BRAILLE PATTERN DOTS-1567 */
	0x2ec3, /*  537, 0xfe, U+00fe, KEY_thorn, LATIN SMALL LETTER THORN */
	0xbb99, /* 1925, 0x10028a6, U+28a6, KEY_braille_dots_2368, BRAILLE PATTERN DOTS-2368 */
	0x0000,
	0xc523, /* 2002, 0x10028f3, U+28f3, KEY_braille_dots_125678, BRAILLE PATTERN DOTS-125678 */
	0xb6b0, /* 1884, 0x100287d, U+287d, KEY_braille_dots_134567, BRAILLE PATTERN DOTS-134567 */
	0xbe70, /* 1948, 0x10028bd, U+28bd, KEY_braille_dots_134568, BRAILLE PATTERN DOTS-134568 */
	0x0000,
	0xa0a0, /* 1683, 0x1001ee7, U+1ee7, KEY_uhook, LATIN SMALL LETTER U WITH HOOK ABOVE */
	0x6e98, /* 1194, 0xaea, KEY_leftpointer, (U+261C WHITE LEFT POINTING INDEX) */
	0xab64, /* 1790, 0x100281f, U+281f, KEY_braille_dots_12345, BRAILLE PATTERN DOTS-12345 */
	0x3087, /*  559, 0x1bc, U+017a, KEY_zacute, LATIN SMALL LETTER Z WITH ACUTE */
	0xb114, /* 1838, 0x100284f, U+284f, KEY_braille_dots_12347, BRAILLE PATTERN DOTS-12347 */
	0xae38, /* 1814, 0x1002837, U+2837, KEY_braille_dots_12356, BRAILLE PATTERN DOTS-12356 */
	0x30b4, /*  561, 0x1be, U+017e, KEY_zcaron, LATIN SMALL LETTER Z WITH CARON */
	0xb9c8, /* 1910, 0x1002897, U+2897, KEY_braille_dots_12358, BRAILLE PATTERN DOTS-12358 */
	0xb3f8, /* 1862, 0x1002867, U+2867, KEY_braille_dots_12367, BRAILLE PATTERN DOTS-12367 */
	0xa25c, /* 1703, 0x10001b0, U+01b0, KEY_uhorn, LATIN SMALL LETTER U WITH HORN */
	0x99d7, /* 1617, 0x1001ea5, U+1ea5, KEY_acircumflexacute, LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x748d, /* 1257, 0xcf0, U+05e0, KEY_hebrew_nun, HEBREW LETTER NUN */
	0x7527, /* 1263, 0xcf5, U+05e5, KEY_hebrew_finalzade, HEBREW LETTER FINAL TSADI */
	0x6816, /* 1130, 0x9f8, U+2502, KEY_vertbar, BOX DRAWINGS LIGHT VERTICAL */
	0x5ee0, /* 1036, 0x7e6, U+03b6, KEY_Greek_zeta, GREEK SMALL LETTER ZETA */
	0xc024, /* 1962, 0x10028cb, U+28cb, KEY_braille_dots_12478, BRAILLE PATTERN DOTS-12478 */
	0x7545, /* 1264, 0xcf5, KEY_hebrew_finalzadi, deprecated */
	0xaef3, /* 1820, 0x100283d, U+283d, KEY_braille_dots_13456, BRAILLE PATTERN DOTS-13456 */
	0x0e88, /*  184, 0xfe09, KEY_ISO_Next_Group_Lock */
	0xba83, /* 1916, 0x100289d, U+289d, KEY_braille_dots_13458, BRAILLE PATTERN DOTS-13458 */
	0x5f0f, /* 1038, 0x7e8, U+03b8, KEY_Greek_theta, GREEK SMALL LETTER THETA */
	0xbc73, /* 1932, 0x10028ad, U+28ad, KEY_braille_dots_13468, BRAILLE PATTERN DOTS-13468 */
	0x70e6, /* 1218, 0xba9, KEY_upcaret, (U+2227 LOGICAL AND) */
	0xc063, /* 1964, 0x10028cd, U+28cd, KEY_braille_dots_13478, BRAILLE PATTERN DOTS-13478 */
	0xb5af, /* 1876, 0x1002875, U+2875, KEY_braille_dots_13567, BRAILLE PATTERN DOTS-13567 */
	0x27e6, /*  456, 0xb1, U+00b1, KEY_plusminus, PLUS-MINUS SIGN */
	0x0000,
	0x653f, /* 1098, 0x8dd, U+222a, KEY_union, UNION */
	0xc5e8, /* 2008, 0x10028f9, U+28f9, KEY_braille_dots_145678, BRAILLE PATTERN DOTS-145678 */
	0xb6d1, /* 1885, 0x100287e, U+287e, KEY_braille_dots_234567, BRAILLE PATTERN DOTS-234567 */
	0xbe91, /* 1949, 0x10028be, U+28be, KEY_braille_dots_234568, BRAILLE PATTERN DOTS-234568 */
	0xc35f, /* 1988, 0x10028e5, U+28e5, KEY_braille_dots_13678, BRAILLE PATTERN DOTS-13678 */
	0x4262, /*  768, 0x1000688, U+0688, KEY_Arabic_ddal, ARABIC LETTER DDAL */
	0x0dbd, /*  177, 0xfe11, KEY_ISO_Level5_Shift */
	0x2c18, /*  505, 0xdf, U+00df, KEY_ssharp, LATIN SMALL LETTER SHARP S */
	0xbaa3, /* 1917, 0x100289e, U+289e, KEY_braille_dots_23458, BRAILLE PATTERN DOTS-23458 */
	0xb4d3, /* 1869, 0x100286e, U+286e, KEY_braille_dots_23467, BRAILLE PATTERN DOTS-23467 */
	0xa79d, /* 1757, 0xfff9, KEY_braille_dot_9 */
	0xc340, /* 1987, 0x10028e4, U+28e4, KEY_braille_dots_3678, BRAILLE PATTERN DOTS-3678 */
	0xc083, /* 1965, 0x10028ce, U+28ce, KEY_braille_dots_23478, BRAILLE PATTERN DOTS-23478 */
	0xb5cf, /* 1877, 0x1002876, U+2876, KEY_braille_dots_23567, BRAILLE PATTERN DOTS-23567 */
	0xbd8f, /* 1941, 0x10028b6, U+28b6, KEY_braille_dots_23568, BRAILLE PATTERN DOTS-23568 */
	0x0000,
	0xc17f, /* 1973, 0x10028d6, U+28d6, KEY_braille_dots_23578, BRAILLE PATTERN DOTS-23578 */
	0x6cf5, /* 1180, 0xadc, KEY_filledlefttribullet, (U+25C0 BLACK LEFT-POINTING TRIANGLE) */
	0x0000,
	0xc1c0, /* 1975, 0x10028d8, U+28d8, KEY_braille_dots_4578, BRAILLE PATTERN DOTS-4578 */
	0x3a38, /*  673, 0x1001e81, U+1e81, KEY_wgrave, LATIN SMALL LETTER W WITH GRAVE */
	0x7ceb, /* 1340, 0xde6, U+0e46, KEY_Thai_maiyamok, THAI CHARACTER MAIYAMOK */
	0xbe0f, /* 1945, 0x10028ba, U+28ba, KEY_braille_dots_24568, BRAILLE PATTERN DOTS-24568 */
	0x333a, /*  592, 0x1f9, U+016f, KEY_uring, LATIN SMALL LETTER U WITH RING ABOVE */
	0xc1ff, /* 1977, 0x10028da, U+28da, KEY_braille_dots_24578, BRAILLE PATTERN DOTS-24578 */
	0x44a2, /*  790, 0x5c7, U+0627, KEY_Arabic_alef, ARABIC LETTER ALEF */
	0x0000,
	0xc3c0, /* 1991, 0x10028e8, U+28e8, KEY_braille_dots_4678, BRAILLE PATTERN DOTS-4678 */
	0xc3ff, /* 1993, 0x10028ea, U+28ea, KEY_braille_dots_24678, BRAILLE PATTERN DOTS-24678 */
	0x0000,
	0xa63a, /* 1743, 0x100222d, U+222d, KEY_tintegral, TRIPLE INTEGRAL */
	0x0000,
	0x26ef, /*  445, 0xa6, U+00a6, KEY_brokenbar, BROKEN BAR */
	0xa767, /* 1755, 0xfff7, KEY_braille_dot_7 */
	0x0000,
	0x311b, /*  566, 0x1c6, U+0106, KEY_Cacute, LATIN CAPITAL LETTER C WITH ACUTE */
	0xc503, /* 2001, 0x10028f2, U+28f2, KEY_braille_dots_25678, BRAILLE PATTERN DOTS-25678 */
	0xa1e8, /* 1697, 0x1001ef7, U+1ef7, KEY_yhook, LATIN SMALL LETTER Y WITH HOOK ABOVE */
	0xbe50, /* 1947, 0x10028bc, U+28bc, KEY_braille_dots_34568, BRAILLE PATTERN DOTS-34568 */
	0x0000,
	0xc240, /* 1979, 0x10028dc, U+28dc, KEY_braille_dots_34578, BRAILLE PATTERN DOTS-34578 */
	0x0000,
	0x0000,
	0x0000,
	0xc440, /* 1995, 0x10028ec, U+28ec, KEY_braille_dots_34678, BRAILLE PATTERN DOTS-34678 */
	0x0000,
	0xd0c7, /* 2124, 0x1008ff27, KEY_XF86Forward, Like forward on a browser */
	0x58c4, /*  980, 0x6fd, U+0429, KEY_Cyrillic_SHCHA, CYRILLIC CAPITAL LETTER SHCHA */
	0xd10f, /* 2127, 0x1008ff2a, KEY_XF86PowerOff, Power off system entirely */
	0x6f4d, /* 1202, 0xaf3, U+2713, KEY_checkmark, CHECK MARK */
	0x0000,
	0xd25d, /* 2140, 0x1008ff37, KEY_XF86History, Show history of web surfing */
	0xc544, /* 2003, 0x10028f4, U+28f4, KEY_braille_dots_35678, BRAILLE PATTERN DOTS-35678 */
	0xa0b3, /* 1684, 0x1001ee8, U+1ee8, KEY_Uhornacute, LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
	0xa2cd, /* 1708, 0x10020a4, U+20a4, KEY_LiraSign, LIRA SIGN */
	0x0000,
	0x4b19, /*  851, 0x100049d, U+049d, KEY_Cyrillic_ka_vertstroke, CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
	0x4d1d, /*  866, 0x10004d8, U+04d8, KEY_Cyrillic_SCHWA, CYRILLIC CAPITAL LETTER SCHWA */
	0x0000,
	0x5b9a, /* 1003, 0x7b9, U+03cb, KEY_Greek_upsilondieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8bab, /* 1473, 0x100055c, U+055c, KEY_Armenian_amanak, ARMENIAN EXCLAMATION MARK */
	};
#endif /* NEEDKTABLE */

/*
 *  KeySymbol to object index.
 */
#ifdef NEEDVTABLE
#define VTABLESIZE 3142
#define VMAXHASH 12

static const unsigned short hashKeysym[VTABLESIZE] = {
	0x0001, /*    0, 0x0, KEY_VoidSymbol, Void symbol */
	0xc609, /* 2009, 0x10028fa, U+28fa, KEY_braille_dots_245678, BRAILLE PATTERN DOTS-245678 */
	0xc64c, /* 2011, 0x10028fc, U+28fc, KEY_braille_dots_345678, BRAILLE PATTERN DOTS-345678 */
	0xc62a, /* 2010, 0x10028fb, U+28fb, KEY_braille_dots_1245678, BRAILLE PATTERN DOTS-1245678 */
	0xc68f, /* 2013, 0x10028fe, U+28fe, KEY_braille_dots_2345678, BRAILLE PATTERN DOTS-2345678 */
	0xc6b1, /* 2014, 0x10028ff, U+28ff, KEY_braille_dots_12345678, BRAILLE PATTERN DOTS-12345678 */
	0x0000,
	0xc66d, /* 2012, 0x10028fd, U+28fd, KEY_braille_dots_1345678, BRAILLE PATTERN DOTS-1345678 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x1fdc, /*  342, 0x20, U+0020, KEY_space, SPACE */
	0x1fef, /*  343, 0x21, U+0021, KEY_exclam, EXCLAMATION MARK */
	0x2003, /*  344, 0x22, U+0022, KEY_quotedbl, QUOTATION MARK */
	0x2019, /*  345, 0x23, U+0023, KEY_numbersign, NUMBER SIGN */
	0x2031, /*  346, 0x24, U+0024, KEY_dollar, DOLLAR SIGN */
	0x2045, /*  347, 0x25, U+0025, KEY_percent, PERCENT SIGN */
	0x205a, /*  348, 0x26, U+0026, KEY_ampersand, AMPERSAND */
	0x2071, /*  349, 0x27, U+0027, KEY_apostrophe, APOSTROPHE */
	0x20a1, /*  351, 0x28, U+0028, KEY_parenleft, LEFT PARENTHESIS */
	0x20b8, /*  352, 0x29, U+0029, KEY_parenright, RIGHT PARENTHESIS */
	0x20d0, /*  353, 0x2a, U+002a, KEY_asterisk, ASTERISK */
	0x20e6, /*  354, 0x2b, U+002b, KEY_plus, PLUS SIGN */
	0x20f8, /*  355, 0x2c, U+002c, KEY_comma, COMMA */
	0x210b, /*  356, 0x2d, U+002d, KEY_minus, HYPHEN-MINUS */
	0x211e, /*  357, 0x2e, U+002e, KEY_period, FULL STOP */
	0x2132, /*  358, 0x2f, U+002f, KEY_slash, SOLIDUS */
	0x2145, /*  359, 0x30, U+0030, KEY_0, DIGIT ZERO */
	0x2154, /*  360, 0x31, U+0031, KEY_1, DIGIT ONE */
	0x2163, /*  361, 0x32, U+0032, KEY_2, DIGIT TWO */
	0x2172, /*  362, 0x33, U+0033, KEY_3, DIGIT THREE */
	0x2181, /*  363, 0x34, U+0034, KEY_4, DIGIT FOUR */
	0x2190, /*  364, 0x35, U+0035, KEY_5, DIGIT FIVE */
	0x219f, /*  365, 0x36, U+0036, KEY_6, DIGIT SIX */
	0x21ae, /*  366, 0x37, U+0037, KEY_7, DIGIT SEVEN */
	0x21bd, /*  367, 0x38, U+0038, KEY_8, DIGIT EIGHT */
	0x21cc, /*  368, 0x39, U+0039, KEY_9, DIGIT NINE */
	0x21db, /*  369, 0x3a, U+003a, KEY_colon, COLON */
	0x21ee, /*  370, 0x3b, U+003b, KEY_semicolon, SEMICOLON */
	0x2205, /*  371, 0x3c, U+003c, KEY_less, LESS-THAN SIGN */
	0x2217, /*  372, 0x3d, U+003d, KEY_equal, EQUALS SIGN */
	0x222a, /*  373, 0x3e, U+003e, KEY_greater, GREATER-THAN SIGN */
	0x223f, /*  374, 0x3f, U+003f, KEY_question, QUESTION MARK */
	0x2255, /*  375, 0x40, U+0040, KEY_at, COMMERCIAL AT */
	0x2265, /*  376, 0x41, U+0041, KEY_A, LATIN CAPITAL LETTER A */
	0x2274, /*  377, 0x42, U+0042, KEY_B, LATIN CAPITAL LETTER B */
	0x2283, /*  378, 0x43, U+0043, KEY_C, LATIN CAPITAL LETTER C */
	0x2292, /*  379, 0x44, U+0044, KEY_D, LATIN CAPITAL LETTER D */
	0x22a1, /*  380, 0x45, U+0045, KEY_E, LATIN CAPITAL LETTER E */
	0x22b0, /*  381, 0x46, U+0046, KEY_F, LATIN CAPITAL LETTER F */
	0x22bf, /*  382, 0x47, U+0047, KEY_G, LATIN CAPITAL LETTER G */
	0x22ce, /*  383, 0x48, U+0048, KEY_H, LATIN CAPITAL LETTER H */
	0x22dd, /*  384, 0x49, U+0049, KEY_I, LATIN CAPITAL LETTER I */
	0x22ec, /*  385, 0x4a, U+004a, KEY_J, LATIN CAPITAL LETTER J */
	0x22fb, /*  386, 0x4b, U+004b, KEY_K, LATIN CAPITAL LETTER K */
	0x230a, /*  387, 0x4c, U+004c, KEY_L, LATIN CAPITAL LETTER L */
	0x2319, /*  388, 0x4d, U+004d, KEY_M, LATIN CAPITAL LETTER M */
	0x2328, /*  389, 0x4e, U+004e, KEY_N, LATIN CAPITAL LETTER N */
	0x2337, /*  390, 0x4f, U+004f, KEY_O, LATIN CAPITAL LETTER O */
	0x2346, /*  391, 0x50, U+0050, KEY_P, LATIN CAPITAL LETTER P */
	0x2355, /*  392, 0x51, U+0051, KEY_Q, LATIN CAPITAL LETTER Q */
	0x2364, /*  393, 0x52, U+0052, KEY_R, LATIN CAPITAL LETTER R */
	0x2373, /*  394, 0x53, U+0053, KEY_S, LATIN CAPITAL LETTER S */
	0x2382, /*  395, 0x54, U+0054, KEY_T, LATIN CAPITAL LETTER T */
	0x2391, /*  396, 0x55, U+0055, KEY_U, LATIN CAPITAL LETTER U */
	0x23a0, /*  397, 0x56, U+0056, KEY_V, LATIN CAPITAL LETTER V */
	0x23af, /*  398, 0x57, U+0057, KEY_W, LATIN CAPITAL LETTER W */
	0x23be, /*  399, 0x58, U+0058, KEY_X, LATIN CAPITAL LETTER X */
	0x23cd, /*  400, 0x59, U+0059, KEY_Y, LATIN CAPITAL LETTER Y */
	0x23dc, /*  401, 0x5a, U+005a, KEY_Z, LATIN CAPITAL LETTER Z */
	0x23eb, /*  402, 0x5b, U+005b, KEY_bracketleft, LEFT SQUARE BRACKET */
	0x2404, /*  403, 0x5c, U+005c, KEY_backslash, REVERSE SOLIDUS */
	0x241b, /*  404, 0x5d, U+005d, KEY_bracketright, RIGHT SQUARE BRACKET */
	0x2435, /*  405, 0x5e, U+005e, KEY_asciicircum, CIRCUMFLEX ACCENT */
	0x244e, /*  406, 0x5f, U+005f, KEY_underscore, LOW LINE */
	0x2466, /*  407, 0x60, U+0060, KEY_grave, GRAVE ACCENT */
	0x2490, /*  409, 0x61, U+0061, KEY_a, LATIN SMALL LETTER A */
	0x249f, /*  410, 0x62, U+0062, KEY_b, LATIN SMALL LETTER B */
	0x24ae, /*  411, 0x63, U+0063, KEY_c, LATIN SMALL LETTER C */
	0x24bd, /*  412, 0x64, U+0064, KEY_d, LATIN SMALL LETTER D */
	0x24cc, /*  413, 0x65, U+0065, KEY_e, LATIN SMALL LETTER E */
	0x24db, /*  414, 0x66, U+0066, KEY_f, LATIN SMALL LETTER F */
	0x24ea, /*  415, 0x67, U+0067, KEY_g, LATIN SMALL LETTER G */
	0x24f9, /*  416, 0x68, U+0068, KEY_h, LATIN SMALL LETTER H */
	0x2508, /*  417, 0x69, U+0069, KEY_i, LATIN SMALL LETTER I */
	0x2517, /*  418, 0x6a, U+006a, KEY_j, LATIN SMALL LETTER J */
	0x2526, /*  419, 0x6b, U+006b, KEY_k, LATIN SMALL LETTER K */
	0x2535, /*  420, 0x6c, U+006c, KEY_l, LATIN SMALL LETTER L */
	0x2544, /*  421, 0x6d, U+006d, KEY_m, LATIN SMALL LETTER M */
	0x2553, /*  422, 0x6e, U+006e, KEY_n, LATIN SMALL LETTER N */
	0x2562, /*  423, 0x6f, U+006f, KEY_o, LATIN SMALL LETTER O */
	0x2571, /*  424, 0x70, U+0070, KEY_p, LATIN SMALL LETTER P */
	0x2580, /*  425, 0x71, U+0071, KEY_q, LATIN SMALL LETTER Q */
	0x258f, /*  426, 0x72, U+0072, KEY_r, LATIN SMALL LETTER R */
	0x259e, /*  427, 0x73, U+0073, KEY_s, LATIN SMALL LETTER S */
	0x25ad, /*  428, 0x74, U+0074, KEY_t, LATIN SMALL LETTER T */
	0x25bc, /*  429, 0x75, U+0075, KEY_u, LATIN SMALL LETTER U */
	0x25cb, /*  430, 0x76, U+0076, KEY_v, LATIN SMALL LETTER V */
	0x25da, /*  431, 0x77, U+0077, KEY_w, LATIN SMALL LETTER W */
	0x25e9, /*  432, 0x78, U+0078, KEY_x, LATIN SMALL LETTER X */
	0x25f8, /*  433, 0x79, U+0079, KEY_y, LATIN SMALL LETTER Y */
	0x2607, /*  434, 0x7a, U+007a, KEY_z, LATIN SMALL LETTER Z */
	0x2616, /*  435, 0x7b, U+007b, KEY_braceleft, LEFT CURLY BRACKET */
	0x262d, /*  436, 0x7c, U+007c, KEY_bar, VERTICAL LINE */
	0x263e, /*  437, 0x7d, U+007d, KEY_braceright, RIGHT CURLY BRACKET */
	0x2656, /*  438, 0x7e, U+007e, KEY_asciitilde, TILDE */
	0x96f2, /* 1584, 0x10010ed, U+10ed, KEY_Georgian_char, GEORGIAN LETTER CHAR */
	0x970d, /* 1585, 0x10010ee, U+10ee, KEY_Georgian_xan, GEORGIAN LETTER XAN */
	0x9727, /* 1586, 0x10010ef, U+10ef, KEY_Georgian_jhan, GEORGIAN LETTER JHAN */
	0x9742, /* 1587, 0x10010f0, U+10f0, KEY_Georgian_hae, GEORGIAN LETTER HAE */
	0x975c, /* 1588, 0x10010f1, U+10f1, KEY_Georgian_he, GEORGIAN LETTER HE */
	0x9775, /* 1589, 0x10010f2, U+10f2, KEY_Georgian_hie, GEORGIAN LETTER HIE */
	0x978f, /* 1590, 0x10010f3, U+10f3, KEY_Georgian_we, GEORGIAN LETTER WE */
	0x4b83, /*  854, 0x10004ae, U+04ae, KEY_Cyrillic_U_straight, CYRILLIC CAPITAL LETTER STRAIGHT U */
	0x4ba4, /*  855, 0x10004af, U+04af, KEY_Cyrillic_u_straight, CYRILLIC SMALL LETTER STRAIGHT U */
	0x4bc5, /*  856, 0x10004b0, U+04b0, KEY_Cyrillic_U_straight_bar, CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
	0x4bea, /*  857, 0x10004b1, U+04b1, KEY_Cyrillic_u_straight_bar, CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
	0x4c0f, /*  858, 0x10004b2, U+04b2, KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
	0x4c32, /*  859, 0x10004b3, U+04b3, KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */
	0x0000,
	0x0000,
	0x4c55, /*  860, 0x10004b6, U+04b6, KEY_Cyrillic_CHE_descender, CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
	0x4c79, /*  861, 0x10004b7, U+04b7, KEY_Cyrillic_che_descender, CYRILLIC SMALL LETTER CHE WITH DESCENDER */
	0x4c9d, /*  862, 0x10004b8, U+04b8, KEY_Cyrillic_CHE_vertstroke, CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
	0x4cc2, /*  863, 0x10004b9, U+04b9, KEY_Cyrillic_che_vertstroke, CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
	0x4ce7, /*  864, 0x10004ba, U+04ba, KEY_Cyrillic_SHHA, CYRILLIC CAPITAL LETTER SHHA */
	0x4d02, /*  865, 0x10004bb, U+04bb, KEY_Cyrillic_shha, CYRILLIC SMALL LETTER SHHA */
	0x0000,
	0x0000,
	0x0000,
	0x9849, /* 1598, 0x10001d1, U+01d2, KEY_Ocaron, LATIN CAPITAL LETTER O WITH CARON */
	0x8646, /* 1429, 0xed8, KEY_Hangul_J_NieunJieuj */
	0x7237, /* 1234, 0xcdf, U+2017, KEY_hebrew_doublelowline, DOUBLE LOW LINE */
	0x7259, /* 1235, 0xce0, U+05d0, KEY_hebrew_aleph, HEBREW LETTER ALEF */
	0x7273, /* 1236, 0xce1, U+05d1, KEY_hebrew_bet, HEBREW LETTER BET */
	0x72a4, /* 1238, 0xce2, U+05d2, KEY_hebrew_gimel, HEBREW LETTER GIMEL */
	0x72d9, /* 1240, 0xce3, U+05d3, KEY_hebrew_dalet, HEBREW LETTER DALET */
	0x730e, /* 1242, 0xce4, U+05d4, KEY_hebrew_he, HEBREW LETTER HE */
	0x7325, /* 1243, 0xce5, U+05d5, KEY_hebrew_waw, HEBREW LETTER VAV */
	0x266e, /*  439, 0xa0, U+00a0, KEY_nobreakspace, NO-BREAK SPACE */
	0x2688, /*  440, 0xa1, U+00a1, KEY_exclamdown, INVERTED EXCLAMATION MARK */
	0x26a0, /*  441, 0xa2, U+00a2, KEY_cent, CENT SIGN */
	0x26b2, /*  442, 0xa3, U+00a3, KEY_sterling, POUND SIGN */
	0x26c8, /*  443, 0xa4, U+00a4, KEY_currency, CURRENCY SIGN */
	0x26de, /*  444, 0xa5, U+00a5, KEY_yen, YEN SIGN */
	0x26ef, /*  445, 0xa6, U+00a6, KEY_brokenbar, BROKEN BAR */
	0x2706, /*  446, 0xa7, U+00a7, KEY_section, SECTION SIGN */
	0x271b, /*  447, 0xa8, U+00a8, KEY_diaeresis, DIAERESIS */
	0x2732, /*  448, 0xa9, U+00a9, KEY_copyright, COPYRIGHT SIGN */
	0x2749, /*  449, 0xaa, U+00aa, KEY_ordfeminine, FEMININE ORDINAL INDICATOR */
	0x2762, /*  450, 0xab, U+00ab, KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x277d, /*  451, 0xac, U+00ac, KEY_notsign, NOT SIGN */
	0x2792, /*  452, 0xad, U+00ad, KEY_hyphen, SOFT HYPHEN */
	0x27a6, /*  453, 0xae, U+00ae, KEY_registered, REGISTERED SIGN */
	0x27be, /*  454, 0xaf, U+00af, KEY_macron, MACRON */
	0x27d2, /*  455, 0xb0, U+00b0, KEY_degree, DEGREE SIGN */
	0x27e6, /*  456, 0xb1, U+00b1, KEY_plusminus, PLUS-MINUS SIGN */
	0x27fd, /*  457, 0xb2, U+00b2, KEY_twosuperior, SUPERSCRIPT TWO */
	0x2816, /*  458, 0xb3, U+00b3, KEY_threesuperior, SUPERSCRIPT THREE */
	0x2831, /*  459, 0xb4, U+00b4, KEY_acute, ACUTE ACCENT */
	0x2844, /*  460, 0xb5, U+00b5, KEY_mu, MICRO SIGN */
	0x2854, /*  461, 0xb6, U+00b6, KEY_paragraph, PILCROW SIGN */
	0x286b, /*  462, 0xb7, U+00b7, KEY_periodcentered, MIDDLE DOT */
	0x2887, /*  463, 0xb8, U+00b8, KEY_cedilla, CEDILLA */
	0x289c, /*  464, 0xb9, U+00b9, KEY_onesuperior, SUPERSCRIPT ONE */
	0x28b5, /*  465, 0xba, U+00ba, KEY_masculine, MASCULINE ORDINAL INDICATOR */
	0x28cc, /*  466, 0xbb, U+00bb, KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x28e8, /*  467, 0xbc, U+00bc, KEY_onequarter, VULGAR FRACTION ONE QUARTER */
	0x2900, /*  468, 0xbd, U+00bd, KEY_onehalf, VULGAR FRACTION ONE HALF */
	0x2915, /*  469, 0xbe, U+00be, KEY_threequarters, VULGAR FRACTION THREE QUARTERS */
	0x2930, /*  470, 0xbf, U+00bf, KEY_questiondown, INVERTED QUESTION MARK */
	0x294a, /*  471, 0xc0, U+00c0, KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */
	0x295e, /*  472, 0xc1, U+00c1, KEY_Aacute, LATIN CAPITAL LETTER A WITH ACUTE */
	0x2972, /*  473, 0xc2, U+00c2, KEY_Acircumflex, LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
	0x298b, /*  474, 0xc3, U+00c3, KEY_Atilde, LATIN CAPITAL LETTER A WITH TILDE */
	0x299f, /*  475, 0xc4, U+00c4, KEY_Adiaeresis, LATIN CAPITAL LETTER A WITH DIAERESIS */
	0x29b7, /*  476, 0xc5, U+00c5, KEY_Aring, LATIN CAPITAL LETTER A WITH RING ABOVE */
	0x29ca, /*  477, 0xc6, U+00c6, KEY_AE, LATIN CAPITAL LETTER AE */
	0x29da, /*  478, 0xc7, U+00c7, KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */
	0x29f0, /*  479, 0xc8, U+00c8, KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */
	0x2a04, /*  480, 0xc9, U+00c9, KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */
	0x2a18, /*  481, 0xca, U+00ca, KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
	0x2a31, /*  482, 0xcb, U+00cb, KEY_Ediaeresis, LATIN CAPITAL LETTER E WITH DIAERESIS */
	0x2a49, /*  483, 0xcc, U+00cc, KEY_Igrave, LATIN CAPITAL LETTER I WITH GRAVE */
	0x2a5d, /*  484, 0xcd, U+00cd, KEY_Iacute, LATIN CAPITAL LETTER I WITH ACUTE */
	0x2a71, /*  485, 0xce, U+00ce, KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
	0x2a8a, /*  486, 0xcf, U+00cf, KEY_Idiaeresis, LATIN CAPITAL LETTER I WITH DIAERESIS */
	0x2aa2, /*  487, 0xd0, U+00d0, KEY_ETH, LATIN CAPITAL LETTER ETH */
	0x2ac4, /*  489, 0xd1, U+00d1, KEY_Ntilde, LATIN CAPITAL LETTER N WITH TILDE */
	0x2ad8, /*  490, 0xd2, U+00d2, KEY_Ograve, LATIN CAPITAL LETTER O WITH GRAVE */
	0x2aec, /*  491, 0xd3, U+00d3, KEY_Oacute, LATIN CAPITAL LETTER O WITH ACUTE */
	0x2b00, /*  492, 0xd4, U+00d4, KEY_Ocircumflex, LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
	0x2b19, /*  493, 0xd5, U+00d5, KEY_Otilde, LATIN CAPITAL LETTER O WITH TILDE */
	0x2b2d, /*  494, 0xd6, U+00d6, KEY_Odiaeresis, LATIN CAPITAL LETTER O WITH DIAERESIS */
	0x2b45, /*  495, 0xd7, U+00d7, KEY_multiply, MULTIPLICATION SIGN */
	0x2b5b, /*  496, 0xd8, U+00d8, KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */
	0x2b85, /*  498, 0xd9, U+00d9, KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */
	0x2b99, /*  499, 0xda, U+00da, KEY_Uacute, LATIN CAPITAL LETTER U WITH ACUTE */
	0x2bad, /*  500, 0xdb, U+00db, KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
	0x2bc6, /*  501, 0xdc, U+00dc, KEY_Udiaeresis, LATIN CAPITAL LETTER U WITH DIAERESIS */
	0x2bde, /*  502, 0xdd, U+00dd, KEY_Yacute, LATIN CAPITAL LETTER Y WITH ACUTE */
	0x2bf2, /*  503, 0xde, U+00de, KEY_THORN, LATIN CAPITAL LETTER THORN */
	0x2c18, /*  505, 0xdf, U+00df, KEY_ssharp, LATIN SMALL LETTER SHARP S */
	0x2c2c, /*  506, 0xe0, U+00e0, KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */
	0x2c40, /*  507, 0xe1, U+00e1, KEY_aacute, LATIN SMALL LETTER A WITH ACUTE */
	0x2c54, /*  508, 0xe2, U+00e2, KEY_acircumflex, LATIN SMALL LETTER A WITH CIRCUMFLEX */
	0x2c6d, /*  509, 0xe3, U+00e3, KEY_atilde, LATIN SMALL LETTER A WITH TILDE */
	0x2c81, /*  510, 0xe4, U+00e4, KEY_adiaeresis, LATIN SMALL LETTER A WITH DIAERESIS */
	0x2c99, /*  511, 0xe5, U+00e5, KEY_aring, LATIN SMALL LETTER A WITH RING ABOVE */
	0x2cac, /*  512, 0xe6, U+00e6, KEY_ae, LATIN SMALL LETTER AE */
	0x2cbc, /*  513, 0xe7, U+00e7, KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */
	0x2cd2, /*  514, 0xe8, U+00e8, KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */
	0x2ce6, /*  515, 0xe9, U+00e9, KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */
	0x2cfa, /*  516, 0xea, U+00ea, KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */
	0x2d13, /*  517, 0xeb, U+00eb, KEY_ediaeresis, LATIN SMALL LETTER E WITH DIAERESIS */
	0x2d2b, /*  518, 0xec, U+00ec, KEY_igrave, LATIN SMALL LETTER I WITH GRAVE */
	0x2d3f, /*  519, 0xed, U+00ed, KEY_iacute, LATIN SMALL LETTER I WITH ACUTE */
	0x2d53, /*  520, 0xee, U+00ee, KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */
	0x2d6c, /*  521, 0xef, U+00ef, KEY_idiaeresis, LATIN SMALL LETTER I WITH DIAERESIS */
	0x2d84, /*  522, 0xf0, U+00f0, KEY_eth, LATIN SMALL LETTER ETH */
	0x2d95, /*  523, 0xf1, U+00f1, KEY_ntilde, LATIN SMALL LETTER N WITH TILDE */
	0x2da9, /*  524, 0xf2, U+00f2, KEY_ograve, LATIN SMALL LETTER O WITH GRAVE */
	0x2dbd, /*  525, 0xf3, U+00f3, KEY_oacute, LATIN SMALL LETTER O WITH ACUTE */
	0x2dd1, /*  526, 0xf4, U+00f4, KEY_ocircumflex, LATIN SMALL LETTER O WITH CIRCUMFLEX */
	0x2dea, /*  527, 0xf5, U+00f5, KEY_otilde, LATIN SMALL LETTER O WITH TILDE */
	0x2dfe, /*  528, 0xf6, U+00f6, KEY_odiaeresis, LATIN SMALL LETTER O WITH DIAERESIS */
	0x2e16, /*  529, 0xf7, U+00f7, KEY_division, DIVISION SIGN */
	0x2e2c, /*  530, 0xf8, U+00f8, KEY_oslash, LATIN SMALL LETTER O WITH STROKE */
	0x2e56, /*  532, 0xf9, U+00f9, KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */
	0x2e6a, /*  533, 0xfa, U+00fa, KEY_uacute, LATIN SMALL LETTER U WITH ACUTE */
	0x2e7e, /*  534, 0xfb, U+00fb, KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */
	0x2e97, /*  535, 0xfc, U+00fc, KEY_udiaeresis, LATIN SMALL LETTER U WITH DIAERESIS */
	0x2eaf, /*  536, 0xfd, U+00fd, KEY_yacute, LATIN SMALL LETTER Y WITH ACUTE */
	0x2ec3, /*  537, 0xfe, U+00fe, KEY_thorn, LATIN SMALL LETTER THORN */
	0x2ed6, /*  538, 0xff, U+00ff, KEY_ydiaeresis, LATIN SMALL LETTER Y WITH DIAERESIS */
	0x0000,
	0xc8a1, /* 2037, 0x1000d9c, U+0d9c, KEY_Sinh_ga, SINHALA GAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xc8b6, /* 2038, 0x1000d9d, U+0d9d, KEY_Sinh_gha, SINHALA MAHA. GAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x8c3e, /* 1478, 0x1000531, U+0531, KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */
	0x8c72, /* 1480, 0x1000532, U+0532, KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */
	0x8ca6, /* 1482, 0x1000533, U+0533, KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */
	0x8cda, /* 1484, 0x1000534, U+0534, KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */
	0x8d0c, /* 1486, 0x1000535, U+0535, KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */
	0x8d42, /* 1488, 0x1000536, U+0536, KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */
	0x8d74, /* 1490, 0x1000537, U+0537, KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */
	0x8da4, /* 1492, 0x1000538, U+0538, KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */
	0x8dd6, /* 1494, 0x1000539, U+0539, KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */
	0x8e08, /* 1496, 0x100053a, U+053a, KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */
	0x8e3c, /* 1498, 0x100053b, U+053b, KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */
	0x8e70, /* 1500, 0x100053c, U+053c, KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */
	0x8ea6, /* 1502, 0x100053d, U+053d, KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */
	0x8eda, /* 1504, 0x100053e, U+053e, KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */
	0x8f0e, /* 1506, 0x100053f, U+053f, KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */
	0x8f42, /* 1508, 0x1000540, U+0540, KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */
	0x8f74, /* 1510, 0x1000541, U+0541, KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */
	0x8fa8, /* 1512, 0x1000542, U+0542, KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */
	0x8fde, /* 1514, 0x1000543, U+0543, KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */
	0x9014, /* 1516, 0x1000544, U+0544, KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */
	0x9048, /* 1518, 0x1000545, U+0545, KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */
	0x907a, /* 1520, 0x1000546, U+0546, KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */
	0x90ac, /* 1522, 0x1000547, U+0547, KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */
	0x90e0, /* 1524, 0x1000548, U+0548, KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */
	0x9112, /* 1526, 0x1000549, U+0549, KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */
	0x9146, /* 1528, 0x100054a, U+054a, KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */
	0x9178, /* 1530, 0x100054b, U+054b, KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */
	0x91aa, /* 1532, 0x100054c, U+054c, KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */
	0x91dc, /* 1534, 0x100054d, U+054d, KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */
	0x920e, /* 1536, 0x100054e, U+054e, KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */
	0x9242, /* 1538, 0x100054f, U+054f, KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */
	0x9278, /* 1540, 0x1000550, U+0550, KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */
	0x92aa, /* 1542, 0x1000551, U+0551, KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */
	0x92de, /* 1544, 0x1000552, U+0552, KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */
	0x9314, /* 1546, 0x1000553, U+0553, KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */
	0x934a, /* 1548, 0x1000554, U+0554, KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */
	0x937c, /* 1550, 0x1000555, U+0555, KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */
	0x93ac, /* 1552, 0x1000556, U+0556, KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */
	0x0000,
	0x0000,
	0x944c, /* 1558, 0x10010d3, U+10d3, KEY_Georgian_don, GEORGIAN LETTER DON */
	0x93de, /* 1554, 0x100055a, U+055a, KEY_Armenian_apostrophe, ARMENIAN APOSTROPHE */
	0x8bc8, /* 1474, 0x100055b, U+055b, KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */
	0x8b8e, /* 1472, 0x100055c, U+055c, KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */
	0x8b12, /* 1468, 0x100055d, U+055d, KEY_Armenian_separation_mark, ARMENIAN COMMA */
	0x8c02, /* 1476, 0x100055e, U+055e, KEY_Armenian_question, ARMENIAN QUESTION MARK */
	0x947f, /* 1560, 0x10010d5, U+10d5, KEY_Georgian_vin, GEORGIAN LETTER VIN */
	0x0000,
	0x8c58, /* 1479, 0x1000561, U+0561, KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */
	0x8c8c, /* 1481, 0x1000562, U+0562, KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */
	0x8cc0, /* 1483, 0x1000563, U+0563, KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */
	0x8cf3, /* 1485, 0x1000564, U+0564, KEY_Armenian_da, ARMENIAN SMALL LETTER DA */
	0x8d27, /* 1487, 0x1000565, U+0565, KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */
	0x8d5b, /* 1489, 0x1000566, U+0566, KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */
	0x8d8c, /* 1491, 0x1000567, U+0567, KEY_Armenian_e, ARMENIAN SMALL LETTER EH */
	0x4a2b, /*  844, 0x1000492, U+0492, KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */
	0x733d, /* 1244, 0xce6, U+05d6, KEY_hebrew_zain, HEBREW LETTER ZAYIN */
	0x8e22, /* 1497, 0x100056a, U+056a, KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */
	0x4a49, /*  845, 0x1000493, U+0493, KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */
	0x8e8b, /* 1501, 0x100056c, U+056c, KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */
	0x73a1, /* 1248, 0xce8, U+05d8, KEY_hebrew_tet, HEBREW LETTER TET */
	0x8ef4, /* 1505, 0x100056e, U+056e, KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */
	0x73d2, /* 1250, 0xce9, U+05d9, KEY_hebrew_yod, HEBREW LETTER YOD */
	0x8f5b, /* 1509, 0x1000570, U+0570, KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */
	0x73ea, /* 1251, 0xcea, U+05da, KEY_hebrew_finalkaph, HEBREW LETTER FINAL KAF */
	0x8fc3, /* 1513, 0x1000572, U+0572, KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */
	0x7408, /* 1252, 0xceb, U+05db, KEY_hebrew_kaph, HEBREW LETTER KAF */
	0x4a67, /*  846, 0x1000496, U+0496, KEY_Cyrillic_ZHE_descender, CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
	0x7421, /* 1253, 0xcec, U+05dc, KEY_hebrew_lamed, HEBREW LETTER LAMED */
	0x38e2, /*  658, 0x1001e02, U+1e02, KEY_Babovedot, LATIN CAPITAL LETTER B WITH DOT ABOVE */
	0x38f9, /*  659, 0x1001e03, U+1e03, KEY_babovedot, LATIN SMALL LETTER B WITH DOT ABOVE */
	0x90f9, /* 1525, 0x1000578, U+0578, KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */
	0x7458, /* 1255, 0xcee, U+05de, KEY_hebrew_mem, HEBREW LETTER MEM */
	0x915f, /* 1529, 0x100057a, U+057a, KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */
	0x7470, /* 1256, 0xcef, U+05df, KEY_hebrew_finalnun, HEBREW LETTER FINAL NUN */
	0x91c3, /* 1533, 0x100057c, U+057c, KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */
	0x748d, /* 1257, 0xcf0, U+05e0, KEY_hebrew_nun, HEBREW LETTER NUN */
	0x3910, /*  660, 0x1001e0a, U+1e0a, KEY_Dabovedot, LATIN CAPITAL LETTER D WITH DOT ABOVE */
	0x3927, /*  661, 0x1001e0b, U+1e0b, KEY_dabovedot, LATIN SMALL LETTER D WITH DOT ABOVE */
	0x4aaf, /*  848, 0x100049a, U+049a, KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
	0x74db, /* 1260, 0xcf2, U+05e2, KEY_hebrew_ayin, HEBREW LETTER AYIN */
	0x92f9, /* 1545, 0x1000582, U+0582, KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */
	0x4ad2, /*  849, 0x100049b, U+049b, KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */
	0x765b, /* 1275, 0xda2, U+0e02, KEY_Thai_khokhai, THAI CHARACTER KHO KHAI */
	0x7510, /* 1262, 0xcf4, U+05e4, KEY_hebrew_pe, HEBREW LETTER PE */
	0x4af5, /*  850, 0x100049c, U+049c, KEY_Cyrillic_KA_vertstroke, CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
	0x7527, /* 1263, 0xcf5, U+05e5, KEY_hebrew_finalzade, HEBREW LETTER FINAL TSADI */
	0x76c5, /* 1279, 0xda6, U+0e06, KEY_Thai_khorakhang, THAI CHARACTER KHO RAKHANG */
	0x4b19, /*  851, 0x100049d, U+049d, KEY_Cyrillic_ka_vertstroke, CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
	0x76fb, /* 1281, 0xda8, U+0e08, KEY_Thai_chochan, THAI CHARACTER CHO CHAN */
	0x4d39, /*  867, 0x10004d9, U+04d9, KEY_Cyrillic_schwa, CYRILLIC SMALL LETTER SCHWA */
	0x7730, /* 1283, 0xdaa, U+0e0a, KEY_Thai_chochang, THAI CHARACTER CHO CHANG */
	0x75c6, /* 1269, 0xcf8, U+05e8, KEY_hebrew_resh, HEBREW LETTER RESH */
	0x7762, /* 1285, 0xdac, U+0e0c, KEY_Thai_chochoe, THAI CHARACTER CHO CHOE */
	0x75df, /* 1270, 0xcf9, U+05e9, KEY_hebrew_shin, HEBREW LETTER SHIN */
	0x7795, /* 1287, 0xdae, U+0e0e, KEY_Thai_dochada, THAI CHARACTER DO CHADA */
	0x75f8, /* 1271, 0xcfa, U+05ea, KEY_hebrew_taw, HEBREW LETTER TAV */
	0x393e, /*  662, 0x1001e1e, U+1e1e, KEY_Fabovedot, LATIN CAPITAL LETTER F WITH DOT ABOVE */
	0x3955, /*  663, 0x1001e1f, U+1e1f, KEY_fabovedot, LATIN SMALL LETTER F WITH DOT ABOVE */
	0x7803, /* 1291, 0xdb2, U+0e12, KEY_Thai_thophuthao, THAI CHARACTER THO PHUTHAO */
	0x7820, /* 1292, 0xdb3, U+0e13, KEY_Thai_nonen, THAI CHARACTER NO NEN */
	0x7838, /* 1293, 0xdb4, U+0e14, KEY_Thai_dodek, THAI CHARACTER DO DEK */
	0x7850, /* 1294, 0xdb5, U+0e15, KEY_Thai_totao, THAI CHARACTER TO TAO */
	0x4b3d, /*  852, 0x10004a2, U+04a2, KEY_Cyrillic_EN_descender, CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
	0x7883, /* 1296, 0xdb7, U+0e17, KEY_Thai_thothahan, THAI CHARACTER THO THAHAN */
	0x789f, /* 1297, 0xdb8, U+0e18, KEY_Thai_thothong, THAI CHARACTER THO THONG */
	0x4b60, /*  853, 0x10004a3, U+04a3, KEY_Cyrillic_en_descender, CYRILLIC SMALL LETTER EN WITH DESCENDER */
	0x78d1, /* 1299, 0xdba, U+0e1a, KEY_Thai_bobaimai, THAI CHARACTER BO BAIMAI */
	0x4d55, /*  868, 0x10004e2, U+04e2, KEY_Cyrillic_I_macron, CYRILLIC CAPITAL LETTER I WITH MACRON */
	0x7904, /* 1301, 0xdbc, U+0e1c, KEY_Thai_phophung, THAI CHARACTER PHO PHUNG */
	0x4d74, /*  869, 0x10004e3, U+04e3, KEY_Cyrillic_i_macron, CYRILLIC SMALL LETTER I WITH MACRON */
	0x7936, /* 1303, 0xdbe, U+0e1e, KEY_Thai_phophan, THAI CHARACTER PHO PHAN */
	0x55c5, /*  950, 0x6df, U+044a, KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */
	0x7968, /* 1305, 0xdc0, U+0e20, KEY_Thai_phosamphao, THAI CHARACTER PHO SAMPHAO */
	0x7985, /* 1306, 0xdc1, U+0e21, KEY_Thai_moma, THAI CHARACTER MO MA */
	0x799c, /* 1307, 0xdc2, U+0e22, KEY_Thai_yoyak, THAI CHARACTER YO YAK */
	0x55fd, /*  952, 0x6e1, U+0410, KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */
	0x79cc, /* 1309, 0xdc4, U+0e24, KEY_Thai_ru, THAI CHARACTER RU */
	0x79e1, /* 1310, 0xdc5, U+0e25, KEY_Thai_loling, THAI CHARACTER LO LING */
	0x79fa, /* 1311, 0xdc6, U+0e26, KEY_Thai_lu, THAI CHARACTER LU */
	0x4d93, /*  870, 0x10004e8, U+04e8, KEY_Cyrillic_O_bar, CYRILLIC CAPITAL LETTER BARRED O */
	0x7a28, /* 1313, 0xdc8, U+0e28, KEY_Thai_sosala, THAI CHARACTER SO SALA */
	0x4daf, /*  871, 0x10004e9, U+04e9, KEY_Cyrillic_o_bar, CYRILLIC SMALL LETTER BARRED O */
	0x7a5a, /* 1315, 0xdca, U+0e2a, KEY_Thai_sosua, THAI CHARACTER SO SUA */
	0x5661, /*  956, 0x6e5, U+0415, KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */
	0x7a8a, /* 1317, 0xdcc, U+0e2c, KEY_Thai_lochula, THAI CHARACTER LO CHULA */
	0x7aa4, /* 1318, 0xdcd, U+0e2d, KEY_Thai_oang, THAI CHARACTER O ANG */
	0x7abb, /* 1319, 0xdce, U+0e2e, KEY_Thai_honokhuk, THAI CHARACTER HO NOKHUK */
	0x7ad6, /* 1320, 0xdcf, U+0e2f, KEY_Thai_paiyannoi, THAI CHARACTER PAIYANNOI */
	0x7af2, /* 1321, 0xdd0, U+0e30, KEY_Thai_saraa, THAI CHARACTER SARA A */
	0x7b0a, /* 1322, 0xdd1, U+0e31, KEY_Thai_maihanakat, THAI CHARACTER MAI HAN-AKAT */
	0x396c, /*  664, 0x1001e40, U+1e40, KEY_Mabovedot, LATIN CAPITAL LETTER M WITH DOT ABOVE */
	0x3983, /*  665, 0x1001e41, U+1e41, KEY_mabovedot, LATIN SMALL LETTER M WITH DOT ABOVE */
	0x7b59, /* 1325, 0xdd4, U+0e34, KEY_Thai_sarai, THAI CHARACTER SARA I */
	0x4dea, /*  873, 0x10004ef, U+04ef, KEY_Cyrillic_u_macron, CYRILLIC SMALL LETTER U WITH MACRON */
	0x7b8a, /* 1327, 0xdd6, U+0e36, KEY_Thai_saraue, THAI CHARACTER SARA UE */
	0x7ba3, /* 1328, 0xdd7, U+0e37, KEY_Thai_sarauee, THAI CHARACTER SARA UEE */
	0x7bbd, /* 1329, 0xdd8, U+0e38, KEY_Thai_sarau, THAI CHARACTER SARA U */
	0x7bd5, /* 1330, 0xdd9, U+0e39, KEY_Thai_sarauu, THAI CHARACTER SARA UU */
	0x7bee, /* 1331, 0xdda, U+0e3a, KEY_Thai_phinthu, THAI CHARACTER PHINTHU */
	0x0000,
	0x0000,
	0x97c2, /* 1592, 0x10010f5, U+10f5, KEY_Georgian_hoe, GEORGIAN LETTER HOE */
	0x7c08, /* 1332, 0xdde, KEY_Thai_maihanakat_maitho */
	0x7c2c, /* 1333, 0xddf, U+0e3f, KEY_Thai_baht, THAI CURRENCY SYMBOL BAHT */
	0x7c43, /* 1334, 0xde0, U+0e40, KEY_Thai_sarae, THAI CHARACTER SARA E */
	0x7c5b, /* 1335, 0xde1, U+0e41, KEY_Thai_saraae, THAI CHARACTER SARA AE */
	0x7c74, /* 1336, 0xde2, U+0e42, KEY_Thai_sarao, THAI CHARACTER SARA O */
	0x7c8c, /* 1337, 0xde3, U+0e43, KEY_Thai_saraaimaimuan, THAI CHARACTER SARA AI MAIMUAN */
	0x7cac, /* 1338, 0xde4, U+0e44, KEY_Thai_saraaimaimalai, THAI CHARACTER SARA AI MAIMALAI */
	0x7ccd, /* 1339, 0xde5, U+0e45, KEY_Thai_lakkhangyao, THAI CHARACTER LAKKHANGYAO */
	0x7ceb, /* 1340, 0xde6, U+0e46, KEY_Thai_maiyamok, THAI CHARACTER MAIYAMOK */
	0x2eee, /*  539, 0x1a1, U+0104, KEY_Aogonek, LATIN CAPITAL LETTER A WITH OGONEK */
	0x2f03, /*  540, 0x1a2, U+02d8, KEY_breve, BREVE */
	0x2f16, /*  541, 0x1a3, U+0141, KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */
	0x7d53, /* 1344, 0xdea, U+0e4a, KEY_Thai_maitri, THAI CHARACTER MAI TRI */
	0x2f2b, /*  542, 0x1a5, U+013d, KEY_Lcaron, LATIN CAPITAL LETTER L WITH CARON */
	0x2f3f, /*  543, 0x1a6, U+015a, KEY_Sacute, LATIN CAPITAL LETTER S WITH ACUTE */
	0x7da8, /* 1347, 0xded, U+0e4d, KEY_Thai_nikhahit, THAI CHARACTER NIKHAHIT */
	0x0000,
	0x2f53, /*  544, 0x1a9, U+0160, KEY_Scaron, LATIN CAPITAL LETTER S WITH CARON */
	0x2f67, /*  545, 0x1aa, U+015e, KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */
	0x2f7d, /*  546, 0x1ab, U+0164, KEY_Tcaron, LATIN CAPITAL LETTER T WITH CARON */
	0x2f91, /*  547, 0x1ac, U+0179, KEY_Zacute, LATIN CAPITAL LETTER Z WITH ACUTE */
	0x39df, /*  669, 0x1001e61, U+1e61, KEY_sabovedot, LATIN SMALL LETTER S WITH DOT ABOVE */
	0x2fa5, /*  548, 0x1ae, U+017d, KEY_Zcaron, LATIN CAPITAL LETTER Z WITH CARON */
	0x2fb9, /*  549, 0x1af, U+017b, KEY_Zabovedot, LATIN CAPITAL LETTER Z WITH DOT ABOVE */
	0x7e59, /* 1354, 0xdf6, U+0e56, KEY_Thai_lekhok, THAI DIGIT SIX */
	0x2fd0, /*  550, 0x1b1, U+0105, KEY_aogonek, LATIN SMALL LETTER A WITH OGONEK */
	0x2fe5, /*  551, 0x1b2, U+02db, KEY_ogonek, OGONEK */
	0x2ff9, /*  552, 0x1b3, U+0142, KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */
	0x0000,
	0x300e, /*  553, 0x1b5, U+013e, KEY_lcaron, LATIN SMALL LETTER L WITH CARON */
	0x3022, /*  554, 0x1b6, U+015b, KEY_sacute, LATIN SMALL LETTER S WITH ACUTE */
	0x3036, /*  555, 0x1b7, U+02c7, KEY_caron, CARON */
	0x0000,
	0x3049, /*  556, 0x1b9, U+0161, KEY_scaron, LATIN SMALL LETTER S WITH CARON */
	0x305d, /*  557, 0x1ba, U+015f, KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */
	0x3073, /*  558, 0x1bb, U+0165, KEY_tcaron, LATIN SMALL LETTER T WITH CARON */
	0x3087, /*  559, 0x1bc, U+017a, KEY_zacute, LATIN SMALL LETTER Z WITH ACUTE */
	0x309b, /*  560, 0x1bd, U+02dd, KEY_doubleacute, DOUBLE ACUTE ACCENT */
	0x30b4, /*  561, 0x1be, U+017e, KEY_zcaron, LATIN SMALL LETTER Z WITH CARON */
	0x30c8, /*  562, 0x1bf, U+017c, KEY_zabovedot, LATIN SMALL LETTER Z WITH DOT ABOVE */
	0x30df, /*  563, 0x1c0, U+0154, KEY_Racute, LATIN CAPITAL LETTER R WITH ACUTE */
	0xddf6, /* 2257, 0x1008fe05, KEY_XF86Switch_VT_5 */
	0xde13, /* 2258, 0x1008fe06, KEY_XF86Switch_VT_6 */
	0x30f3, /*  564, 0x1c3, U+0102, KEY_Abreve, LATIN CAPITAL LETTER A WITH BREVE */
	0xde4d, /* 2260, 0x1008fe08, KEY_XF86Switch_VT_8 */
	0x3107, /*  565, 0x1c5, U+0139, KEY_Lacute, LATIN CAPITAL LETTER L WITH ACUTE */
	0x311b, /*  566, 0x1c6, U+0106, KEY_Cacute, LATIN CAPITAL LETTER C WITH ACUTE */
	0x9581, /* 1570, 0x10010df, U+10df, KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */
	0x312f, /*  567, 0x1c8, U+010c, KEY_Ccaron, LATIN CAPITAL LETTER C WITH CARON */
	0xe451, /* 2319, 0x1000ff49, KEY_hpModelock2 */
	0x3143, /*  568, 0x1ca, U+0118, KEY_Eogonek, LATIN CAPITAL LETTER E WITH OGONEK */
	0x959c, /* 1571, 0x10010e0, U+10e0, KEY_Georgian_rae, GEORGIAN LETTER RAE */
	0x3158, /*  569, 0x1cc, U+011a, KEY_Ecaron, LATIN CAPITAL LETTER E WITH CARON */
	0x3a38, /*  673, 0x1001e81, U+1e81, KEY_wgrave, LATIN SMALL LETTER W WITH GRAVE */
	0x3a4c, /*  674, 0x1001e82, U+1e82, KEY_Wacute, LATIN CAPITAL LETTER W WITH ACUTE */
	0x316c, /*  570, 0x1cf, U+010e, KEY_Dcaron, LATIN CAPITAL LETTER D WITH CARON */
	0x3180, /*  571, 0x1d0, U+0110, KEY_Dstroke, LATIN CAPITAL LETTER D WITH STROKE */
	0x3195, /*  572, 0x1d1, U+0143, KEY_Nacute, LATIN CAPITAL LETTER N WITH ACUTE */
	0x31a9, /*  573, 0x1d2, U+0147, KEY_Ncaron, LATIN CAPITAL LETTER N WITH CARON */
	0x95d0, /* 1573, 0x10010e2, U+10e2, KEY_Georgian_tar, GEORGIAN LETTER TAR */
	0x0000,
	0x31bd, /*  574, 0x1d5, U+0150, KEY_Odoubleacute, LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
	0x97f5, /* 1594, 0x1001e8a, U+1e8a, KEY_Xabovedot, LATIN CAPITAL LETTER X WITH DOT ABOVE */
	0x95ea, /* 1574, 0x10010e3, U+10e3, KEY_Georgian_un, GEORGIAN LETTER UN */
	0x31d7, /*  575, 0x1d8, U+0158, KEY_Rcaron, LATIN CAPITAL LETTER R WITH CARON */
	0x31eb, /*  576, 0x1d9, U+016e, KEY_Uring, LATIN CAPITAL LETTER U WITH RING ABOVE */
	0x0000,
	0x31fe, /*  577, 0x1db, U+0170, KEY_Udoubleacute, LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
	0xdee1, /* 2265, 0x1008fe20, KEY_XF86Ungrab, force ungrab */
	0xdef9, /* 2266, 0x1008fe21, KEY_XF86ClearGrab, kill application with grab */
	0x3218, /*  578, 0x1de, U+0162, KEY_Tcedilla, LATIN CAPITAL LETTER T WITH CEDILLA */
	0x961e, /* 1576, 0x10010e5, U+10e5, KEY_Georgian_khar, GEORGIAN LETTER KHAR */
	0x322e, /*  579, 0x1e0, U+0155, KEY_racute, LATIN SMALL LETTER R WITH ACUTE */
	0xdf6b, /* 2270, 0x1008fe25, KEY_XF86LogGrabInfo, print all active grabs to log */
	0x0000,
	0x3242, /*  580, 0x1e3, U+0103, KEY_abreve, LATIN SMALL LETTER A WITH BREVE */
	0x0000,
	0x3256, /*  581, 0x1e5, U+013a, KEY_lacute, LATIN SMALL LETTER L WITH ACUTE */
	0x326a, /*  582, 0x1e6, U+0107, KEY_cacute, LATIN SMALL LETTER C WITH ACUTE */
	0x9654, /* 1578, 0x10010e7, U+10e7, KEY_Georgian_qar, GEORGIAN LETTER QAR */
	0x327e, /*  583, 0x1e8, U+010d, KEY_ccaron, LATIN SMALL LETTER C WITH CARON */
	0xde6a, /* 2261, 0x1008fe09, KEY_XF86Switch_VT_9 */
	0x3292, /*  584, 0x1ea, U+0119, KEY_eogonek, LATIN SMALL LETTER E WITH OGONEK */
	0x966e, /* 1579, 0x10010e8, U+10e8, KEY_Georgian_shin, GEORGIAN LETTER SHIN */
	0x32a7, /*  585, 0x1ec, U+011b, KEY_ecaron, LATIN SMALL LETTER E WITH CARON */
	0x997c, /* 1613, 0x1001ea1, U+1ea1, KEY_abelowdot, LATIN SMALL LETTER A WITH DOT BELOW */
	0x93ff, /* 1555, 0x10010d0, U+10d0, KEY_Georgian_an, GEORGIAN LETTER AN */
	0x32bb, /*  586, 0x1ef, U+010f, KEY_dcaron, LATIN SMALL LETTER D WITH CARON */
	0x32cf, /*  587, 0x1f0, U+0111, KEY_dstroke, LATIN SMALL LETTER D WITH STROKE */
	0x32e4, /*  588, 0x1f1, U+0144, KEY_nacute, LATIN SMALL LETTER N WITH ACUTE */
	0x32f8, /*  589, 0x1f2, U+0148, KEY_ncaron, LATIN SMALL LETTER N WITH CARON */
	0x9418, /* 1556, 0x10010d1, U+10d1, KEY_Georgian_ban, GEORGIAN LETTER BAN */
	0x9a31, /* 1620, 0x1001ea8, U+1ea8, KEY_Acircumflexhook, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x330c, /*  590, 0x1f5, U+0151, KEY_odoubleacute, LATIN SMALL LETTER O WITH DOUBLE ACUTE */
	0x9a6b, /* 1622, 0x1001eaa, U+1eaa, KEY_Acircumflextilde, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x743b, /* 1254, 0xced, U+05dd, KEY_hebrew_finalmem, HEBREW LETTER FINAL MEM */
	0x3326, /*  591, 0x1f8, U+0159, KEY_rcaron, LATIN SMALL LETTER R WITH CARON */
	0x333a, /*  592, 0x1f9, U+016f, KEY_uring, LATIN SMALL LETTER U WITH RING ABOVE */
	0x9ae9, /* 1626, 0x1001eae, U+1eae, KEY_Abreveacute, LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
	0x334d, /*  593, 0x1fb, U+0171, KEY_udoubleacute, LATIN SMALL LETTER U WITH DOUBLE ACUTE */
	0x9b1b, /* 1628, 0x1001eb0, U+1eb0, KEY_Abrevegrave, LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
	0x9b34, /* 1629, 0x1001eb1, U+1eb1, KEY_abrevegrave, LATIN SMALL LETTER A WITH BREVE AND GRAVE */
	0x3367, /*  594, 0x1fe, U+0163, KEY_tcedilla, LATIN SMALL LETTER T WITH CEDILLA */
	0x337d, /*  595, 0x1ff, U+02d9, KEY_abovedot, DOT ABOVE */
	0x9b7d, /* 1632, 0x1001eb4, U+1eb4, KEY_Abrevetilde, LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
	0x9b96, /* 1633, 0x1001eb5, U+1eb5, KEY_abrevetilde, LATIN SMALL LETTER A WITH BREVE AND TILDE */
	0x9466, /* 1559, 0x10010d4, U+10d4, KEY_Georgian_en, GEORGIAN LETTER EN */
	0x74a5, /* 1258, 0xcf1, U+05e1, KEY_hebrew_samech, HEBREW LETTER SAMEKH */
	0x9be7, /* 1636, 0x1001eb8, U+1eb8, KEY_Ebelowdot, LATIN CAPITAL LETTER E WITH DOT BELOW */
	0x9bfe, /* 1637, 0x1001eb9, U+1eb9, KEY_ebelowdot, LATIN SMALL LETTER E WITH DOT BELOW */
	0x9c15, /* 1638, 0x1001eba, U+1eba, KEY_Ehook, LATIN CAPITAL LETTER E WITH HOOK ABOVE */
	0x9c28, /* 1639, 0x1001ebb, U+1ebb, KEY_ehook, LATIN SMALL LETTER E WITH HOOK ABOVE */
	0x9c3b, /* 1640, 0x1001ebc, U+1ebc, KEY_Etilde, LATIN CAPITAL LETTER E WITH TILDE */
	0x74f4, /* 1261, 0xcf3, U+05e3, KEY_hebrew_finalpe, HEBREW LETTER FINAL PE */
	0x9c63, /* 1642, 0x1001ebe, U+1ebe, KEY_Ecircumflexacute, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0x9c81, /* 1643, 0x1001ebf, U+1ebf, KEY_ecircumflexacute, LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0x9499, /* 1561, 0x10010d6, U+10d6, KEY_Georgian_zen, GEORGIAN LETTER ZEN */
	0x653f, /* 1098, 0x8dd, U+222a, KEY_union, UNION */
	0x9cdb, /* 1646, 0x1001ec2, U+1ec2, KEY_Ecircumflexhook, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9cf8, /* 1647, 0x1001ec3, U+1ec3, KEY_ecircumflexhook, LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9d15, /* 1648, 0x1001ec4, U+1ec4, KEY_Ecircumflextilde, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x94b3, /* 1562, 0x10010d7, U+10d7, KEY_Georgian_tan, GEORGIAN LETTER TAN */
	0x4d1d, /*  866, 0x10004d8, U+04d8, KEY_Cyrillic_SCHWA, CYRILLIC CAPITAL LETTER SCHWA */
	0x9d72, /* 1651, 0x1001ec7, U+1ec7, KEY_ecircumflexbelowdot, LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x9d93, /* 1652, 0x1001ec8, U+1ec8, KEY_Ihook, LATIN CAPITAL LETTER I WITH HOOK ABOVE */
	0x7595, /* 1267, 0xcf7, U+05e7, KEY_hebrew_qoph, HEBREW LETTER QOF */
	0x94cd, /* 1563, 0x10010d8, U+10d8, KEY_Georgian_in, GEORGIAN LETTER IN */
	0x9dd0, /* 1655, 0x1001ecb, U+1ecb, KEY_ibelowdot, LATIN SMALL LETTER I WITH DOT BELOW */
	0x9de7, /* 1656, 0x1001ecc, U+1ecc, KEY_Obelowdot, LATIN CAPITAL LETTER O WITH DOT BELOW */
	0x9dfe, /* 1657, 0x1001ecd, U+1ecd, KEY_obelowdot, LATIN SMALL LETTER O WITH DOT BELOW */
	0x9e15, /* 1658, 0x1001ece, U+1ece, KEY_Ohook, LATIN CAPITAL LETTER O WITH HOOK ABOVE */
	0x94e6, /* 1564, 0x10010d9, U+10d9, KEY_Georgian_kan, GEORGIAN LETTER KAN */
	0x9e3b, /* 1660, 0x1001ed0, U+1ed0, KEY_Ocircumflexacute, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x9e59, /* 1661, 0x1001ed1, U+1ed1, KEY_ocircumflexacute, LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x9e77, /* 1662, 0x1001ed2, U+1ed2, KEY_Ocircumflexgrave, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x9e95, /* 1663, 0x1001ed3, U+1ed3, KEY_ocircumflexgrave, LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x9500, /* 1565, 0x10010da, U+10da, KEY_Georgian_las, GEORGIAN LETTER LAS */
	0x9ed0, /* 1665, 0x1001ed5, U+1ed5, KEY_ocircumflexhook, LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9eed, /* 1666, 0x1001ed6, U+1ed6, KEY_Ocircumflextilde, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x97dc, /* 1593, 0x10010f6, U+10f6, KEY_Georgian_fi, GEORGIAN LETTER FI */
	0x9f29, /* 1668, 0x1001ed8, U+1ed8, KEY_Ocircumflexbelowdot, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x951a, /* 1566, 0x10010db, U+10db, KEY_Georgian_man, GEORGIAN LETTER MAN */
	0x9f6b, /* 1670, 0x1001eda, U+1eda, KEY_Ohornacute, LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
	0x9f83, /* 1671, 0x1001edb, U+1edb, KEY_ohornacute, LATIN SMALL LETTER O WITH HORN AND ACUTE */
	0x9f9b, /* 1672, 0x1001edc, U+1edc, KEY_Ohorngrave, LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
	0x9fb3, /* 1673, 0x1001edd, U+1edd, KEY_ohorngrave, LATIN SMALL LETTER O WITH HORN AND GRAVE */
	0x9534, /* 1567, 0x10010dc, U+10dc, KEY_Georgian_nar, GEORGIAN LETTER NAR */
	0x489a, /*  830, 0x1000653, U+0653, KEY_Arabic_madda_above, ARABIC MADDAH ABOVE */
	0x48ba, /*  831, 0x1000654, U+0654, KEY_Arabic_hamza_above, ARABIC HAMZA ABOVE */
	0x48da, /*  832, 0x1000655, U+0655, KEY_Arabic_hamza_below, ARABIC HAMZA BELOW */
	0xa029, /* 1678, 0x1001ee2, U+1ee2, KEY_Ohornbelowdot, LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
	0x4a8b, /*  847, 0x1000497, U+0497, KEY_Cyrillic_zhe_descender, CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
	0xa05f, /* 1680, 0x1001ee4, U+1ee4, KEY_Ubelowdot, LATIN CAPITAL LETTER U WITH DOT BELOW */
	0xa076, /* 1681, 0x1001ee5, U+1ee5, KEY_ubelowdot, LATIN SMALL LETTER U WITH DOT BELOW */
	0xa08d, /* 1682, 0x1001ee6, U+1ee6, KEY_Uhook, LATIN CAPITAL LETTER U WITH HOOK ABOVE */
	0xa0a0, /* 1683, 0x1001ee7, U+1ee7, KEY_uhook, LATIN SMALL LETTER U WITH HOOK ABOVE */
	0x9567, /* 1569, 0x10010de, U+10de, KEY_Georgian_par, GEORGIAN LETTER PAR */
	0xa0cb, /* 1685, 0x1001ee9, U+1ee9, KEY_uhornacute, LATIN SMALL LETTER U WITH HORN AND ACUTE */
	0xa0e3, /* 1686, 0x1001eea, U+1eea, KEY_Uhorngrave, LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
	0xa0fb, /* 1687, 0x1001eeb, U+1eeb, KEY_uhorngrave, LATIN SMALL LETTER U WITH HORN AND GRAVE */
	0x42cb, /*  772, 0x1000660, U+0660, KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */
	0x42e1, /*  773, 0x1000661, U+0661, KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */
	0x42f7, /*  774, 0x1000662, U+0662, KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */
	0x430d, /*  775, 0x1000663, U+0663, KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */
	0x4323, /*  776, 0x1000664, U+0664, KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */
	0x4339, /*  777, 0x1000665, U+0665, KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */
	0x3aa4, /*  678, 0x1001ef2, U+1ef2, KEY_Ygrave, LATIN CAPITAL LETTER Y WITH GRAVE */
	0x3ab8, /*  679, 0x1001ef3, U+1ef3, KEY_ygrave, LATIN SMALL LETTER Y WITH GRAVE */
	0x437b, /*  780, 0x1000668, U+0668, KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */
	0x4391, /*  781, 0x1000669, U+0669, KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */
	0x41d6, /*  763, 0x100066a, U+066a, KEY_Arabic_percent, ARABIC PERCENT SIGN */
	0x95b6, /* 1572, 0x10010e1, U+10e1, KEY_Georgian_san, GEORGIAN LETTER SAN */
	0xa1fb, /* 1698, 0x1001ef8, U+1ef8, KEY_Ytilde, LATIN CAPITAL LETTER Y WITH TILDE */
	0xa20f, /* 1699, 0x1001ef9, U+1ef9, KEY_ytilde, LATIN SMALL LETTER Y WITH TILDE */
	0x0000,
	0xe3ed, /* 2315, 0x1000ff73, KEY_hpDeleteChar */
	0x41f2, /*  764, 0x1000670, U+0670, KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */
	0x0000,
	0xe407, /* 2316, 0x1000ff74, KEY_hpBackTab */
	0xd158, /* 2130, 0x1008ff2d, KEY_XF86ScreenSaver, Invoke screensaver */
	0x0000,
	0xe41e, /* 2317, 0x1000ff75, KEY_hpKP_BackTab */
	0x0000,
	0x0000,
	0xea54, /* 2384, 0x1000ff76, KEY_Ext16bit_L */
	0x4217, /*  765, 0x1000679, U+0679, KEY_Arabic_tteh, ARABIC LETTER TTEH */
	0x9603, /* 1575, 0x10010e4, U+10e4, KEY_Georgian_phar, GEORGIAN LETTER PHAR */
	0xea6c, /* 2385, 0x1000ff77, KEY_Ext16bit_R */
	0x4dcb, /*  872, 0x10004ee, U+04ee, KEY_Cyrillic_U_macron, CYRILLIC CAPITAL LETTER U WITH MACRON */
	0x0000,
	0x4230, /*  766, 0x100067e, U+067e, KEY_Arabic_peh, ARABIC LETTER PEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8088, /* 1374, 0xea1, KEY_Hangul_Kiyeog */
	0x80a3, /* 1375, 0xea2, KEY_Hangul_SsangKiyeog */
	0x80c3, /* 1376, 0xea3, KEY_Hangul_KiyeogSios */
	0x4248, /*  767, 0x1000686, U+0686, KEY_Arabic_tcheh, ARABIC LETTER TCHEH */
	0x80fc, /* 1378, 0xea5, KEY_Hangul_NieunJieuj */
	0x4262, /*  768, 0x1000688, U+0688, KEY_Arabic_ddal, ARABIC LETTER DDAL */
	0x813a, /* 1380, 0xea7, KEY_Hangul_Dikeud */
	0x8155, /* 1381, 0xea8, KEY_Hangul_SsangDikeud */
	0x8175, /* 1382, 0xea9, KEY_Hangul_Rieul */
	0x818f, /* 1383, 0xeaa, KEY_Hangul_RieulKiyeog */
	0x81af, /* 1384, 0xeab, KEY_Hangul_RieulMieum */
	0x81ce, /* 1385, 0xeac, KEY_Hangul_RieulPieub */
	0x81ed, /* 1386, 0xead, KEY_Hangul_RieulSios */
	0x820b, /* 1387, 0xeae, KEY_Hangul_RieulTieut */
	0x427b, /*  769, 0x1000691, U+0691, KEY_Arabic_rreh, ARABIC LETTER RREH */
	0x824a, /* 1389, 0xeb0, KEY_Hangul_RieulHieuh */
	0x8269, /* 1390, 0xeb1, KEY_Hangul_Mieum */
	0x8283, /* 1391, 0xeb2, KEY_Hangul_Pieub */
	0x829d, /* 1392, 0xeb3, KEY_Hangul_SsangPieub */
	0x82bc, /* 1393, 0xeb4, KEY_Hangul_PieubSios */
	0x82da, /* 1394, 0xeb5, KEY_Hangul_Sios */
	0x48fa, /*  833, 0x1000698, U+0698, KEY_Arabic_jeh, ARABIC LETTER JEH */
	0x8311, /* 1396, 0xeb7, KEY_Hangul_Ieung */
	0x832b, /* 1397, 0xeb8, KEY_Hangul_Jieuj */
	0x8345, /* 1398, 0xeb9, KEY_Hangul_SsangJieuj */
	0x8364, /* 1399, 0xeba, KEY_Hangul_Cieuc */
	0x837e, /* 1400, 0xebb, KEY_Hangul_Khieuq */
	0x8399, /* 1401, 0xebc, KEY_Hangul_Tieut */
	0x83b3, /* 1402, 0xebd, KEY_Hangul_Phieuf */
	0x83ce, /* 1403, 0xebe, KEY_Hangul_Hieuh */
	0x83e8, /* 1404, 0xebf, KEY_Hangul_A */
	0x83fe, /* 1405, 0xec0, KEY_Hangul_AE */
	0x8415, /* 1406, 0xec1, KEY_Hangul_YA */
	0x4912, /*  834, 0x10006a4, U+06a4, KEY_Arabic_veh, ARABIC LETTER VEH */
	0x8444, /* 1408, 0xec3, KEY_Hangul_EO */
	0x845b, /* 1409, 0xec4, KEY_Hangul_E */
	0x8471, /* 1410, 0xec5, KEY_Hangul_YEO */
	0x8489, /* 1411, 0xec6, KEY_Hangul_YE */
	0x492a, /*  835, 0x10006a9, U+06a9, KEY_Arabic_keheh, ARABIC LETTER KEHEH */
	0x84b6, /* 1413, 0xec8, KEY_Hangul_WA */
	0x84cd, /* 1414, 0xec9, KEY_Hangul_WAE */
	0x84e5, /* 1415, 0xeca, KEY_Hangul_OE */
	0x84fc, /* 1416, 0xecb, KEY_Hangul_YO */
	0x8513, /* 1417, 0xecc, KEY_Hangul_U */
	0x4944, /*  836, 0x10006af, U+06af, KEY_Arabic_gaf, ARABIC LETTER GAF */
	0x8541, /* 1419, 0xece, KEY_Hangul_WE */
	0x8558, /* 1420, 0xecf, KEY_Hangul_WI */
	0x856f, /* 1421, 0xed0, KEY_Hangul_YU */
	0x8586, /* 1422, 0xed1, KEY_Hangul_EU */
	0x859d, /* 1423, 0xed2, KEY_Hangul_YI */
	0x85b4, /* 1424, 0xed3, KEY_Hangul_I */
	0x85ca, /* 1425, 0xed4, KEY_Hangul_J_Kiyeog */
	0x85e7, /* 1426, 0xed5, KEY_Hangul_J_SsangKiyeog */
	0x8609, /* 1427, 0xed6, KEY_Hangul_J_KiyeogSios */
	0x862a, /* 1428, 0xed7, KEY_Hangul_J_Nieun */
	0x495c, /*  837, 0x10006ba, U+06ba, KEY_Arabic_noon_ghunna, ARABIC LETTER NOON GHUNNA */
	0x8667, /* 1430, 0xed9, KEY_Hangul_J_NieunHieuh */
	0x8688, /* 1431, 0xeda, KEY_Hangul_J_Dikeud */
	0x86a5, /* 1432, 0xedb, KEY_Hangul_J_Rieul */
	0x497c, /*  838, 0x10006be, U+06be, KEY_Arabic_heh_doachashmee, ARABIC LETTER HEH DOACHASHMEE */
	0x86e3, /* 1434, 0xedd, KEY_Hangul_J_RieulMieum */
	0x8704, /* 1435, 0xede, KEY_Hangul_J_RieulPieub */
	0x49f3, /*  842, 0x10006c1, U+06c1, KEY_Arabic_heh_goal, ARABIC LETTER HEH GOAL */
	0x8745, /* 1437, 0xee0, KEY_Hangul_J_RieulTieut */
	0x8766, /* 1438, 0xee1, KEY_Hangul_J_RieulPhieuf */
	0x8788, /* 1439, 0xee2, KEY_Hangul_J_RieulHieuh */
	0x87a9, /* 1440, 0xee3, KEY_Hangul_J_Mieum */
	0x87c5, /* 1441, 0xee4, KEY_Hangul_J_Pieub */
	0x87e1, /* 1442, 0xee5, KEY_Hangul_J_PieubSios */
	0x8801, /* 1443, 0xee6, KEY_Hangul_J_Sios */
	0x3393, /*  596, 0x2a1, U+0126, KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */
	0x883c, /* 1445, 0xee8, KEY_Hangul_J_Ieung */
	0x8858, /* 1446, 0xee9, KEY_Hangul_J_Jieuj */
	0x49a0, /*  839, 0x10006cc, U+06cc, KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */
	0x8890, /* 1448, 0xeeb, KEY_Hangul_J_Khieuq */
	0x33a8, /*  597, 0x2a6, U+0124, KEY_Hcircumflex, LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
	0x88c9, /* 1450, 0xeed, KEY_Hangul_J_Phieuf */
	0x88e6, /* 1451, 0xeee, KEY_Hangul_J_Hieuh */
	0x33c1, /*  598, 0x2a9, U+0130, KEY_Iabovedot, LATIN CAPITAL LETTER I WITH DOT ABOVE */
	0x49d5, /*  841, 0x10006d2, U+06d2, KEY_Arabic_yeh_baree, ARABIC LETTER YEH BARREE */
	0x33d8, /*  599, 0x2ab, U+011e, KEY_Gbreve, LATIN CAPITAL LETTER G WITH BREVE */
	0x33ec, /*  600, 0x2ac, U+0134, KEY_Jcircumflex, LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
	0x898f, /* 1456, 0xef3, KEY_Hangul_KkogjiDalrinIeung */
	0x89b5, /* 1457, 0xef4, KEY_Hangul_SunkyeongeumPhieuf */
	0x89dc, /* 1458, 0xef5, KEY_Hangul_YeorinHieuh */
	0x89fc, /* 1459, 0xef6, KEY_Hangul_AraeA */
	0x3405, /*  601, 0x2b1, U+0127, KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */
	0x8a31, /* 1461, 0xef8, KEY_Hangul_J_PanSios */
	0x8a4f, /* 1462, 0xef9, KEY_Hangul_J_KkogjiDalrinIeung */
	0x8a77, /* 1463, 0xefa, KEY_Hangul_J_YeorinHieuh */
	0x0000,
	0x341a, /*  602, 0x2b6, U+0125, KEY_hcircumflex, LATIN SMALL LETTER H WITH CIRCUMFLEX */
	0x7643, /* 1274, 0xda1, U+0e01, KEY_Thai_kokai, THAI CHARACTER KO KAI */
	0x0000,
	0x3433, /*  603, 0x2b9, U+0131, KEY_idotless, LATIN SMALL LETTER DOTLESS I */
	0x0000,
	0x3449, /*  604, 0x2bb, U+011f, KEY_gbreve, LATIN SMALL LETTER G WITH BREVE */
	0x345d, /*  605, 0x2bc, U+0135, KEY_jcircumflex, LATIN SMALL LETTER J WITH CIRCUMFLEX */
	0x7690, /* 1277, 0xda4, U+0e04, KEY_Thai_khokhwai, THAI CHARACTER KHO KHWAI */
	0xcdb6, /* 2096, 0x1008ff02, KEY_XF86MonBrightnessUp, Monitor/panel brightness */
	0x76ab, /* 1278, 0xda5, U+0e05, KEY_Thai_khokhon, THAI CHARACTER KHO KHON */
	0xcdfa, /* 2098, 0x1008ff04, KEY_XF86KbdLightOnOff, Keyboards may be lit */
	0xce19, /* 2099, 0x1008ff05, KEY_XF86KbdBrightnessUp, Keyboards may be lit */
	0x9432, /* 1557, 0x10010d2, U+10d2, KEY_Georgian_gan, GEORGIAN LETTER GAN */
	0x7563, /* 1265, 0xcf6, U+05e6, KEY_hebrew_zade, HEBREW LETTER TSADI */
	0x0000,
	0x3476, /*  606, 0x2c5, U+010a, KEY_Cabovedot, LATIN CAPITAL LETTER C WITH DOT ABOVE */
	0x348d, /*  607, 0x2c6, U+0108, KEY_Ccircumflex, LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
	0x7715, /* 1282, 0xda9, U+0e09, KEY_Thai_choching, THAI CHARACTER CHO CHING */
	0x4104, /*  753, 0x10006f0, U+06f0, KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */
	0x4119, /*  754, 0x10006f1, U+06f1, KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */
	0x412e, /*  755, 0x10006f2, U+06f2, KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */
	0x4143, /*  756, 0x10006f3, U+06f3, KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */
	0x4158, /*  757, 0x10006f4, U+06f4, KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */
	0x416d, /*  758, 0x10006f5, U+06f5, KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */
	0x4182, /*  759, 0x10006f6, U+06f6, KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */
	0x4197, /*  760, 0x10006f7, U+06f7, KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */
	0x41ac, /*  761, 0x10006f8, U+06f8, KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */
	0x41c1, /*  762, 0x10006f9, U+06f9, KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */
	0xcf0b, /* 2107, 0x1008ff16, KEY_XF86AudioPrev, Previous track */
	0x77af, /* 1288, 0xdaf, U+0e0f, KEY_Thai_topatak, THAI CHARACTER TO PATAK */
	0xcf41, /* 2109, 0x1008ff18, KEY_XF86HomePage, Display user's home page */
	0x34a6, /*  608, 0x2d5, U+0120, KEY_Gabovedot, LATIN CAPITAL LETTER G WITH DOT ABOVE */
	0xcf71, /* 2111, 0x1008ff1a, KEY_XF86Start, Start application */
	0x77e3, /* 1290, 0xdb1, U+0e11, KEY_Thai_thonangmontho, THAI CHARACTER THO NANGMONTHO */
	0x34bd, /*  609, 0x2d8, U+011c, KEY_Gcircumflex, LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
	0xcfbd, /* 2114, 0x1008ff1d, KEY_XF86Calculator, Invoke calculator program */
	0xcfd9, /* 2115, 0x1008ff1e, KEY_XF86Memo, Invoke Memo taking program */
	0xcfef, /* 2116, 0x1008ff1f, KEY_XF86ToDoList, Invoke To Do List program */
	0xd009, /* 2117, 0x1008ff20, KEY_XF86Calendar, Invoke Calendar program */
	0x34d6, /*  610, 0x2dd, U+016c, KEY_Ubreve, LATIN CAPITAL LETTER U WITH BREVE */
	0x34ea, /*  611, 0x2de, U+015c, KEY_Scircumflex, LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
	0xd05e, /* 2120, 0x1008ff23, KEY_XF86RockerUp, Rocker switches exist up */
	0xd078, /* 2121, 0x1008ff24, KEY_XF86RockerDown, and down */
	0x7868, /* 1295, 0xdb6, U+0e16, KEY_Thai_thothung, THAI CHARACTER THO THUNG */
	0xd0b1, /* 2123, 0x1008ff26, KEY_XF86Back, Like back on a browser */
	0xd0c7, /* 2124, 0x1008ff27, KEY_XF86Forward, Like forward on a browser */
	0xd0e0, /* 2125, 0x1008ff28, KEY_XF86Stop, Stop current operation */
	0x3503, /*  612, 0x2e5, U+010b, KEY_cabovedot, LATIN SMALL LETTER C WITH DOT ABOVE */
	0x351a, /*  613, 0x2e6, U+0109, KEY_ccircumflex, LATIN SMALL LETTER C WITH CIRCUMFLEX */
	0x78ba, /* 1298, 0xdb9, U+0e19, KEY_Thai_nonu, THAI CHARACTER NO NU */
	0xd141, /* 2129, 0x1008ff2c, KEY_XF86Eject, Eject device (e.g. DVD) */
	0x8529, /* 1418, 0xecd, KEY_Hangul_WEO */
	0xd175, /* 2131, 0x1008ff2e, KEY_XF86WWW, Invoke web browser */
	0x78ec, /* 1300, 0xdbb, U+0e1b, KEY_Thai_popla, THAI CHARACTER PO PLA */
	0xd1a1, /* 2133, 0x1008ff30, KEY_XF86Favorites, Show favorite locations */
	0x96a4, /* 1581, 0x10010ea, U+10ea, KEY_Georgian_can, GEORGIAN LETTER CAN */
	0xd1d8, /* 2135, 0x1008ff32, KEY_XF86AudioMedia, Launch media collection app */
	0x791f, /* 1302, 0xdbd, U+0e1d, KEY_Thai_fofa, THAI CHARACTER FO FA */
	0xd210, /* 2137, 0x1008ff34, KEY_XF86VendorHome, Display vendor home web site */
	0x98c6, /* 1604, 0x10001d2, U+01d2, KEY_ocaron, LATIN SMALL LETTER O WITH CARON */
	0xd247, /* 2139, 0x1008ff36, KEY_XF86Shop, Display shopping web site */
	0x7950, /* 1304, 0xdbf, U+0e1f, KEY_Thai_fofan, THAI CHARACTER FO FAN */
	0xd276, /* 2141, 0x1008ff38, KEY_XF86OpenURL, Open selected URL */
	0x3533, /*  614, 0x2f5, U+0121, KEY_gabovedot, LATIN SMALL LETTER G WITH DOT ABOVE */
	0xd2ac, /* 2143, 0x1008ff3a, KEY_XF86HotLinks, Show "hot" links */
	0xd2c6, /* 2144, 0x1008ff3b, KEY_XF86BrightnessAdjust, Invoke brightness adj. UI */
	0x354a, /*  615, 0x2f8, U+011d, KEY_gcircumflex, LATIN SMALL LETTER G WITH CIRCUMFLEX */
	0x96d8, /* 1583, 0x10010ec, U+10ec, KEY_Georgian_cil, GEORGIAN LETTER CIL */
	0xd31c, /* 2147, 0x1008ff3e, KEY_XF86AudioRewind, "rewind" audio track */
	0x79b4, /* 1308, 0xdc3, U+0e23, KEY_Thai_rorua, THAI CHARACTER RO RUA */
	0xd356, /* 2149, 0x1008ff40, KEY_XF86Launch0, Launch Application */
	0x3563, /*  616, 0x2fd, U+016d, KEY_ubreve, LATIN SMALL LETTER U WITH BREVE */
	0x3577, /*  617, 0x2fe, U+015d, KEY_scircumflex, LATIN SMALL LETTER S WITH CIRCUMFLEX */
	0x5938, /*  984, 0x7a2, U+0388, KEY_Greek_EPSILONaccent, GREEK CAPITAL LETTER EPSILON WITH TONOS */
	0xd3ba, /* 2153, 0x1008ff44, KEY_XF86Launch4, Launch Application */
	0x5959, /*  985, 0x7a3, U+0389, KEY_Greek_ETAaccent, GREEK CAPITAL LETTER ETA WITH TONOS */
	0xd3ec, /* 2155, 0x1008ff46, KEY_XF86Launch6, Launch Application */
	0x5976, /*  986, 0x7a4, U+038a, KEY_Greek_IOTAaccent, GREEK CAPITAL LETTER IOTA WITH TONOS */
	0xd41e, /* 2157, 0x1008ff48, KEY_XF86Launch8, Launch Application */
	0x5994, /*  987, 0x7a5, U+03aa, KEY_Greek_IOTAdieresis, GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
	0xd450, /* 2159, 0x1008ff4a, KEY_XF86LaunchA, Launch Application */
	0x7a41, /* 1314, 0xdc9, U+0e29, KEY_Thai_sorusi, THAI CHARACTER SO RUSI */
	0xd482, /* 2161, 0x1008ff4c, KEY_XF86LaunchC, Launch Application */
	0xd49b, /* 2162, 0x1008ff4d, KEY_XF86LaunchD, Launch Application */
	0xd4b4, /* 2163, 0x1008ff4e, KEY_XF86LaunchE, Launch Application */
	0x7a72, /* 1316, 0xdcb, U+0e2b, KEY_Thai_hohip, THAI CHARACTER HO HIP */
	0xd4e6, /* 2165, 0x1008ff50, KEY_XF86ApplicationLeft, switch to application, left */
	0xd507, /* 2166, 0x1008ff51, KEY_XF86ApplicationRight, switch to application, right */
	0xd529, /* 2167, 0x1008ff52, KEY_XF86Book, Launch bookreader */
	0x954e, /* 1568, 0x10010dd, U+10dd, KEY_Georgian_on, GEORGIAN LETTER ON */
	0xd553, /* 2169, 0x1008ff54, KEY_XF86Calculater, Launch Calculater */
	0xd56f, /* 2170, 0x1008ff55, KEY_XF86Clear, Clear window, screen */
	0xd586, /* 2171, 0x1008ff56, KEY_XF86Close, Close window */
	0xd59d, /* 2172, 0x1008ff57, KEY_XF86Copy, Copy selection */
	0xd5b3, /* 2173, 0x1008ff58, KEY_XF86Cut, Cut selection */
	0xd5c8, /* 2174, 0x1008ff59, KEY_XF86Display, Output switch key */
	0xd5e1, /* 2175, 0x1008ff5a, KEY_XF86DOS, Launch DOS (emulation) */
	0xd5f6, /* 2176, 0x1008ff5b, KEY_XF86Documents, Open documents window */
	0xd611, /* 2177, 0x1008ff5c, KEY_XF86Excel, Launch spread sheet */
	0x7b27, /* 1323, 0xdd2, U+0e32, KEY_Thai_saraaa, THAI CHARACTER SARA AA */
	0xd642, /* 2179, 0x1008ff5e, KEY_XF86Game, Launch game */
	0x7b40, /* 1324, 0xdd3, U+0e33, KEY_Thai_saraam, THAI CHARACTER SARA AM */
	0xd66c, /* 2181, 0x1008ff60, KEY_XF86iTouch, Logitch iTouch- don't use */
	0xd684, /* 2182, 0x1008ff61, KEY_XF86LogOff, Log off system */
	0xd69c, /* 2183, 0x1008ff62, KEY_XF86Market, ?? */
	0x7b71, /* 1326, 0xdd5, U+0e35, KEY_Thai_saraii, THAI CHARACTER SARA II */
	0x0000,
	0xd6cd, /* 2185, 0x1008ff65, KEY_XF86MenuKB, distingush keyboard from PB */
	0xd6e5, /* 2186, 0x1008ff66, KEY_XF86MenuPB, distinuish PB from keyboard */
	0xd6fd, /* 2187, 0x1008ff67, KEY_XF86MySites, Favourites */
	0xd716, /* 2188, 0x1008ff68, KEY_XF86New, New (folder, document... */
	0xd72b, /* 2189, 0x1008ff69, KEY_XF86News, News */
	0xd741, /* 2190, 0x1008ff6a, KEY_XF86OfficeHome, Office home (old Staroffice) */
	0xd75d, /* 2191, 0x1008ff6b, KEY_XF86Open, Open */
	0xd773, /* 2192, 0x1008ff6c, KEY_XF86Option, ?? */
	0x7370, /* 1246, 0xce7, U+05d7, KEY_hebrew_chet, HEBREW LETTER HET */
	0xd7a2, /* 2194, 0x1008ff6e, KEY_XF86Phone, Launch phone; dial number */
	0xe65d, /* 2341, 0x1004ff31, KEY_osfAddMode */
	0xd7b9, /* 2195, 0x1008ff70, KEY_XF86Q, Compaq's Q - don't use */
	0x0000,
	0xd7cc, /* 2196, 0x1008ff72, KEY_XF86Reply, Reply e.g., mail */
	0xd7e3, /* 2197, 0x1008ff73, KEY_XF86Reload, Reload web page, file, etc. */
	0xd7fb, /* 2198, 0x1008ff74, KEY_XF86RotateWindows, Rotate windows e.g. xrandr */
	0xd81a, /* 2199, 0x1008ff75, KEY_XF86RotationPB, don't use */
	0xd836, /* 2200, 0x1008ff76, KEY_XF86RotationKB, don't use */
	0xd852, /* 2201, 0x1008ff77, KEY_XF86Save, Save (file, document, state */
	0xd868, /* 2202, 0x1008ff78, KEY_XF86ScrollUp, Scroll window/contents up */
	0xd882, /* 2203, 0x1008ff79, KEY_XF86ScrollDown, Scrool window/contentd down */
	0xd89e, /* 2204, 0x1008ff7a, KEY_XF86ScrollClick, Use XKB mousekeys instead */
	0xd8bb, /* 2205, 0x1008ff7b, KEY_XF86Send, Send mail, file, object */
	0xd8d1, /* 2206, 0x1008ff7c, KEY_XF86Spell, Spell checker */
	0xd8e8, /* 2207, 0x1008ff7d, KEY_XF86SplitScreen, Split window or screen */
	0xd905, /* 2208, 0x1008ff7e, KEY_XF86Support, Get support (??) */
	0xd91e, /* 2209, 0x1008ff7f, KEY_XF86TaskPane, Show tasks */
	0xd938, /* 2210, 0x1008ff80, KEY_XF86Terminal, Launch terminal emulator */
	0xd952, /* 2211, 0x1008ff81, KEY_XF86Tools, toolbox of desktop/app. */
	0xd969, /* 2212, 0x1008ff82, KEY_XF86Travel, ?? */
	0x0000,
	0xd981, /* 2213, 0x1008ff84, KEY_XF86UserPB, ?? */
	0xd999, /* 2214, 0x1008ff85, KEY_XF86User1KB, ?? */
	0xd9b2, /* 2215, 0x1008ff86, KEY_XF86User2KB, ?? */
	0x7d06, /* 1341, 0xde7, U+0e47, KEY_Thai_maitaikhu, THAI CHARACTER MAITAIKHU */
	0xd9e2, /* 2217, 0x1008ff88, KEY_XF86WheelButton, button from a mouse wheel */
	0x399a, /*  666, 0x1001e56, U+1e56, KEY_Pabovedot, LATIN CAPITAL LETTER P WITH DOT ABOVE */
	0xda15, /* 2219, 0x1008ff8a, KEY_XF86Xfer */
	0x39b1, /*  667, 0x1001e57, U+1e57, KEY_pabovedot, LATIN SMALL LETTER P WITH DOT ABOVE */
	0xda43, /* 2221, 0x1008ff8c, KEY_XF86ZoomOut, zoom out view, map, etc. */
	0xda5c, /* 2222, 0x1008ff8d, KEY_XF86Away, mark yourself as away */
	0xda72, /* 2223, 0x1008ff8e, KEY_XF86Messenger, as in instant messaging */
	0x7d6c, /* 1345, 0xdeb, U+0e4b, KEY_Thai_maichattawa, THAI CHARACTER MAI CHATTAWA */
	0xdaa5, /* 2225, 0x1008ff90, KEY_XF86MailForward, Forward in mail */
	0x7d8a, /* 1346, 0xdec, U+0e4c, KEY_Thai_thanthakhat, THAI CHARACTER THANTHAKHAT */
	0x9639, /* 1577, 0x10010e6, U+10e6, KEY_Georgian_ghan, GEORGIAN LETTER GHAN */
	0xdaf3, /* 2228, 0x1008ff93, KEY_XF86Battery, Display battery information */
	0xdb0c, /* 2229, 0x1008ff94, KEY_XF86Bluetooth, Enable/disable Bluetooth */
	0xdb27, /* 2230, 0x1008ff95, KEY_XF86WLAN, Enable/disable WLAN */
	0xdb3d, /* 2231, 0x1008ff96, KEY_XF86UWB, Enable/disable UWB	 */
	0xdb52, /* 2232, 0x1008ff97, KEY_XF86AudioForward, fast-forward audio track */
	0xdb70, /* 2233, 0x1008ff98, KEY_XF86AudioRepeat, toggle repeat mode */
	0x7dc3, /* 1348, 0xdf0, U+0e50, KEY_Thai_leksun, THAI DIGIT ZERO */
	0xdbae, /* 2235, 0x1008ff9a, KEY_XF86Subtitle, cycle through subtitle */
	0x7ddc, /* 1349, 0xdf1, U+0e51, KEY_Thai_leknung, THAI DIGIT ONE */
	0xdbe9, /* 2237, 0x1008ff9c, KEY_XF86CycleAngle, cycle through angles */
	0x39c8, /*  668, 0x1001e60, U+1e60, KEY_Sabovedot, LATIN CAPITAL LETTER S WITH DOT ABOVE */
	0xdc20, /* 2239, 0x1008ff9e, KEY_XF86FrameForward, video: go one frame forward */
	0x7e10, /* 1351, 0xdf3, U+0e53, KEY_Thai_leksam, THAI DIGIT THREE */
	0xdc54, /* 2241, 0x1008ffa0, KEY_XF86Select, Select button on joypads and remotes */
	0x7e29, /* 1352, 0xdf4, U+0e54, KEY_Thai_leksi, THAI DIGIT FOUR */
	0xdc82, /* 2243, 0x1008ffa2, KEY_XF86TopMenu, Go to a top-level menu in a video */
	0x7e41, /* 1353, 0xdf5, U+0e55, KEY_Thai_lekha, THAI DIGIT FIVE */
	0xdcb0, /* 2245, 0x1008ffa4, KEY_XF86Green, Green button */
	0xdcc7, /* 2246, 0x1008ffa5, KEY_XF86Yellow, Yellow button */
	0xdcdf, /* 2247, 0x1008ffa6, KEY_XF86Blue, Blue button */
	0x7e72, /* 1355, 0xdf7, U+0e57, KEY_Thai_lekchet, THAI DIGIT SEVEN */
	0xdd0e, /* 2249, 0x1008ffa8, KEY_XF86Hibernate, Sleep to disk */
	0x7e8c, /* 1356, 0xdf8, U+0e58, KEY_Thai_lekpaet, THAI DIGIT EIGHT */
	0x0000,
	0x7ea6, /* 1357, 0xdf9, U+0e59, KEY_Thai_lekkao, THAI DIGIT NINE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xdd49, /* 2251, 0x1008ffb0, KEY_XF86TouchpadOn, The touchpad got switched on */
	0x39f6, /*  670, 0x1001e6a, U+1e6a, KEY_Tabovedot, LATIN CAPITAL LETTER T WITH DOT ABOVE */
	0x0000,
	0x3a0d, /*  671, 0x1001e6b, U+1e6b, KEY_tabovedot, LATIN SMALL LETTER T WITH DOT ABOVE */
	0x0000,
	0x96be, /* 1582, 0x10010eb, U+10eb, KEY_Georgian_jil, GEORGIAN LETTER JIL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa2b5, /* 1707, 0x10020a3, U+20a3, KEY_FFrancSign, FRENCH FRANC SIGN */
	0x0000,
	0xdd82, /* 2253, 0x1008fe01, KEY_XF86Switch_VT_1 */
	0x0000,
	0xdd9f, /* 2254, 0x1008fe02, KEY_XF86Switch_VT_2 */
	0x0000,
	0xddbc, /* 2255, 0x1008fe03, KEY_XF86Switch_VT_3 */
	0xe5aa, /* 2333, 0x100000fc, KEY_hpblock */
	0xa2e3, /* 1709, 0x10020a5, U+20a5, KEY_MillSign, MILL SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x881c, /* 1444, 0xee7, KEY_Hangul_J_SsangSios */
	0x0000,
	0xde30, /* 2259, 0x1008fe07, KEY_XF86Switch_VT_7 */
	0xe359, /* 2309, 0x1000fe22, KEY_Ddiaeresis */
	0xa310, /* 1711, 0x10020a7, U+20a7, KEY_PesetaSign, PESETA SIGN */
	0x0000,
	0xd78b, /* 2193, 0x1008ff6d, KEY_XF86Paste, Paste */
	0x0000,
	0xde87, /* 2262, 0x1008fe0a, KEY_XF86Switch_VT_10 */
	0x0000,
	0xdea5, /* 2263, 0x1008fe0b, KEY_XF86Switch_VT_11 */
	0x0000,
	0xdec3, /* 2264, 0x1008fe0c, KEY_XF86Switch_VT_12 */
	0xe2f2, /* 2305, 0x1000fe2c, KEY_Dcedilla_accent */
	0x0000,
	0x0000,
	0xe88c, /* 2364, 0x1004ff65, KEY_osfUndo */
	0x0000,
	0x0000,
	0x0000,
	0x3a24, /*  672, 0x1001e80, U+1e80, KEY_Wgrave, LATIN CAPITAL LETTER W WITH GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0xe8a1, /* 2365, 0x1004ff67, KEY_osfMenu */
	0x0000,
	0x3a60, /*  675, 0x1001e83, U+1e83, KEY_wacute, LATIN SMALL LETTER W WITH ACUTE */
	0x0000,
	0x3a74, /*  676, 0x1001e84, U+1e84, KEY_Wdiaeresis, LATIN CAPITAL LETTER W WITH DIAERESIS */
	0x3590, /*  618, 0x3a2, U+0138, KEY_kra, LATIN SMALL LETTER KRA */
	0x35b4, /*  620, 0x3a3, U+0156, KEY_Rcedilla, LATIN CAPITAL LETTER R WITH CEDILLA */
	0x0000,
	0x35ca, /*  621, 0x3a5, U+0128, KEY_Itilde, LATIN CAPITAL LETTER I WITH TILDE */
	0x35de, /*  622, 0x3a6, U+013b, KEY_Lcedilla, LATIN CAPITAL LETTER L WITH CEDILLA */
	0xdf88, /* 2271, 0x1005ff00, KEY_SunFA_Grave */
	0x0000,
	0xdfa1, /* 2272, 0x1005ff01, KEY_SunFA_Circum */
	0x35f4, /*  623, 0x3aa, U+0112, KEY_Emacron, LATIN CAPITAL LETTER E WITH MACRON */
	0x3609, /*  624, 0x3ab, U+0122, KEY_Gcedilla, LATIN CAPITAL LETTER G WITH CEDILLA */
	0x361f, /*  625, 0x3ac, U+0166, KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */
	0xdfd4, /* 2274, 0x1005ff03, KEY_SunFA_Acute */
	0x0000,
	0x9872, /* 1600, 0x1001e8b, U+1e8b, KEY_xabovedot, LATIN SMALL LETTER X WITH DOT ABOVE */
	0x97a8, /* 1591, 0x10010f4, U+10f4, KEY_Georgian_har, GEORGIAN LETTER HAR */
	0x0000,
	0x0000,
	0x3633, /*  626, 0x3b3, U+0157, KEY_rcedilla, LATIN SMALL LETTER R WITH CEDILLA */
	0x0000,
	0x3649, /*  627, 0x3b5, U+0129, KEY_itilde, LATIN SMALL LETTER I WITH TILDE */
	0x365d, /*  628, 0x3b6, U+013c, KEY_lcedilla, LATIN SMALL LETTER L WITH CEDILLA */
	0x0000,
	0x0000,
	0x0000,
	0x3673, /*  629, 0x3ba, U+0113, KEY_emacron, LATIN SMALL LETTER E WITH MACRON */
	0x3688, /*  630, 0x3bb, U+0123, KEY_gcedilla, LATIN SMALL LETTER G WITH CEDILLA */
	0x369e, /*  631, 0x3bc, U+0167, KEY_tslash, LATIN SMALL LETTER T WITH STROKE */
	0x36b2, /*  632, 0x3bd, U+014a, KEY_ENG, LATIN CAPITAL LETTER ENG */
	0x0000,
	0x36c3, /*  633, 0x3bf, U+014b, KEY_eng, LATIN SMALL LETTER ENG */
	0x36d4, /*  634, 0x3c0, U+0100, KEY_Amacron, LATIN CAPITAL LETTER A WITH MACRON */
	0xa3cf, /* 1719, 0x1002075, U+2075, KEY_fivesuperior, SUPERSCRIPT FIVE */
	0x8dbd, /* 1493, 0x1000568, U+0568, KEY_Armenian_at, ARMENIAN SMALL LETTER ET */
	0xa402, /* 1721, 0x1002077, U+2077, KEY_sevensuperior, SUPERSCRIPT SEVEN */
	0xa41d, /* 1722, 0x1002078, U+2078, KEY_eightsuperior, SUPERSCRIPT EIGHT */
	0x8def, /* 1495, 0x1000569, U+0569, KEY_Armenian_to, ARMENIAN SMALL LETTER TO */
	0xe32a, /* 2307, 0x1000fe60, KEY_Dgrave_accent */
	0x36e9, /*  635, 0x3c7, U+012e, KEY_Iogonek, LATIN CAPITAL LETTER I WITH OGONEK */
	0x0000,
	0xe8fc, /* 2369, 0x1004ff72, KEY_osfDeselectAll */
	0x0000,
	0x8e56, /* 1499, 0x100056b, U+056b, KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */
	0x36fe, /*  636, 0x3cc, U+0116, KEY_Eabovedot, LATIN CAPITAL LETTER E WITH DOT ABOVE */
	0xa46d, /* 1725, 0x1002081, U+2081, KEY_onesubscript, SUBSCRIPT ONE */
	0xa487, /* 1726, 0x1002082, U+2082, KEY_twosubscript, SUBSCRIPT TWO */
	0x3715, /*  637, 0x3cf, U+012a, KEY_Imacron, LATIN CAPITAL LETTER I WITH MACRON */
	0xa4bd, /* 1728, 0x1002084, U+2084, KEY_foursubscript, SUBSCRIPT FOUR */
	0x372a, /*  638, 0x3d1, U+0145, KEY_Ncedilla, LATIN CAPITAL LETTER N WITH CEDILLA */
	0x3740, /*  639, 0x3d2, U+014c, KEY_Omacron, LATIN CAPITAL LETTER O WITH MACRON */
	0x3755, /*  640, 0x3d3, U+0136, KEY_Kcedilla, LATIN CAPITAL LETTER K WITH CEDILLA */
	0xa529, /* 1732, 0x1002088, U+2088, KEY_eightsubscript, SUBSCRIPT EIGHT */
	0xa545, /* 1733, 0x1002089, U+2089, KEY_ninesubscript, SUBSCRIPT NINE */
	0x0000,
	0x8f28, /* 1507, 0x100056f, U+056f, KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */
	0xc8cc, /* 2039, 0x1000d9e, U+0d9e, KEY_Sinh_ng2, SINHALA KANTAJA NAASIKYAYA */
	0x376b, /*  641, 0x3d9, U+0172, KEY_Uogonek, LATIN CAPITAL LETTER U WITH OGONEK */
	0x0000,
	0xc8e2, /* 2040, 0x1000d9f, U+0d9f, KEY_Sinh_nga, SINHALA SANYAKA GAYANNA */
	0x0000,
	0x3780, /*  642, 0x3dd, U+0168, KEY_Utilde, LATIN CAPITAL LETTER U WITH TILDE */
	0x3794, /*  643, 0x3de, U+016a, KEY_Umacron, LATIN CAPITAL LETTER U WITH MACRON */
	0x9689, /* 1580, 0x10010e9, U+10e9, KEY_Georgian_chin, GEORGIAN LETTER CHIN */
	0x37a9, /*  644, 0x3e0, U+0101, KEY_amacron, LATIN SMALL LETTER A WITH MACRON */
	0x99b9, /* 1616, 0x1001ea4, U+1ea4, KEY_Acircumflexacute, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x0000,
	0x8ff9, /* 1515, 0x1000573, U+0573, KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */
	0xc923, /* 2043, 0x1000da2, U+0da2, KEY_Sinh_ja, SINHALA JAYANNA */
	0x99f5, /* 1618, 0x1001ea6, U+1ea6, KEY_Acircumflexgrave, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x902e, /* 1517, 0x1000574, U+0574, KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */
	0x37be, /*  645, 0x3e7, U+012f, KEY_iogonek, LATIN SMALL LETTER I WITH OGONEK */
	0x0000,
	0x9061, /* 1519, 0x1000575, U+0575, KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */
	0xc94e, /* 2045, 0x1000da4, U+0da4, KEY_Sinh_nya, SINHALA TAALUJA NAASIKYAYA */
	0x9a4e, /* 1621, 0x1001ea9, U+1ea9, KEY_acircumflexhook, LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x37d3, /*  646, 0x3ec, U+0117, KEY_eabovedot, LATIN SMALL LETTER E WITH DOT ABOVE */
	0xa284, /* 1705, 0x10020a1, U+20a1, KEY_ColonSign, COLON SIGN */
	0xa29b, /* 1706, 0x10020a2, U+20a2, KEY_CruzeiroSign, CRUZEIRO SIGN */
	0x37ea, /*  647, 0x3ef, U+012b, KEY_imacron, LATIN SMALL LETTER I WITH MACRON */
	0xa2cd, /* 1708, 0x10020a4, U+20a4, KEY_LiraSign, LIRA SIGN */
	0x37ff, /*  648, 0x3f1, U+0146, KEY_ncedilla, LATIN SMALL LETTER N WITH CEDILLA */
	0x3815, /*  649, 0x3f2, U+014d, KEY_omacron, LATIN SMALL LETTER O WITH MACRON */
	0x382a, /*  650, 0x3f3, U+0137, KEY_kcedilla, LATIN SMALL LETTER K WITH CEDILLA */
	0xa328, /* 1712, 0x10020a8, U+20a8, KEY_RupeeSign, RUPEE SIGN */
	0x912c, /* 1527, 0x1000579, U+0579, KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */
	0xa354, /* 1714, 0x10020aa, U+20aa, KEY_NewSheqelSign, NEW SHEQEL SIGN */
	0x9b02, /* 1627, 0x1001eaf, U+1eaf, KEY_abreveacute, LATIN SMALL LETTER A WITH BREVE AND ACUTE */
	0x0000,
	0x3840, /*  651, 0x3f9, U+0173, KEY_uogonek, LATIN SMALL LETTER U WITH OGONEK */
	0x0000,
	0x9191, /* 1531, 0x100057b, U+057b, KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */
	0xc9d4, /* 2051, 0x1000daa, U+0daa, KEY_Sinh_ddha, SINHALA MAHA. DDAYANNA */
	0x3855, /*  652, 0x3fd, U+0169, KEY_utilde, LATIN SMALL LETTER U WITH TILDE */
	0x3869, /*  653, 0x3fe, U+016b, KEY_umacron, LATIN SMALL LETTER U WITH MACRON */
	0x9b65, /* 1631, 0x1001eb3, U+1eb3, KEY_abrevehook, LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
	0x0000,
	0x91f5, /* 1535, 0x100057d, U+057d, KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */
	0xca01, /* 2053, 0x1000dac, U+0dac, KEY_Sinh_ndda, SINHALA SANYAKA DDAYANNA */
	0x0000,
	0x9228, /* 1537, 0x100057e, U+057e, KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */
	0x9baf, /* 1634, 0x1001eb6, U+1eb6, KEY_Abrevebelowdot, LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
	0x0000,
	0x925d, /* 1539, 0x100057f, U+057f, KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */
	0x0000,
	0x0000,
	0x9291, /* 1541, 0x1000580, U+0580, KEY_Armenian_re, ARMENIAN SMALL LETTER REH */
	0x0000,
	0x0000,
	0x92c4, /* 1543, 0x1000581, U+0581, KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x932f, /* 1547, 0x1000583, U+0583, KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */
	0x0000,
	0xe2b8, /* 2303, 0x1000feb0, KEY_Dring_accent */
	0x9363, /* 1549, 0x1000584, U+0584, KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */
	0x0000,
	0x0000,
	0x7675, /* 1276, 0xda3, U+0e03, KEY_Thai_khokhuat, THAI CHARACTER KHO KHUAT */
	0x0000,
	0x9cbd, /* 1645, 0x1001ec1, U+1ec1, KEY_ecircumflexgrave, LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x93c5, /* 1553, 0x1000586, U+0586, KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */
	0x0000,
	0x0000,
	0x8ab1, /* 1465, 0x1000587, U+0587, KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */
	0x0000,
	0x0000,
	0x0000,
	0x9d33, /* 1649, 0x1001ec5, U+1ec5, KEY_ecircumflextilde, LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0x76e2, /* 1280, 0xda7, U+0e07, KEY_Thai_ngongu, THAI CHARACTER NGO NGU */
	0xcaf4, /* 2064, 0x1000db8, U+0db8, KEY_Sinh_ma, SINHALA MAYANNA */
	0xa63a, /* 1743, 0x100222d, U+222d, KEY_tintegral, TRIPLE INTEGRAL */
	0x8b52, /* 1470, 0x100058a, U+058a, KEY_Armenian_hyphen, ARMENIAN HYPHEN */
	0xcb09, /* 2065, 0x1000db9, U+0db9, KEY_Sinh_mba, SINHALA AMBA BAYANNA */
	0x0000,
	0x9da6, /* 1653, 0x1001ec9, U+1ec9, KEY_ihook, LATIN SMALL LETTER I WITH HOOK ABOVE */
	0xcb1f, /* 2066, 0x1000dba, U+0dba, KEY_Sinh_ya, SINHALA YAYANNA */
	0x9db9, /* 1654, 0x1001eca, U+1eca, KEY_Ibelowdot, LATIN CAPITAL LETTER I WITH DOT BELOW */
	0x0000,
	0xcb34, /* 2067, 0x1000dbb, U+0dbb, KEY_Sinh_ra, SINHALA RAYANNA */
	0x0000,
	0x774b, /* 1284, 0xdab, U+0e0b, KEY_Thai_soso, THAI CHARACTER SO SO */
	0x0000,
	0x0000,
	0x0000,
	0xcb49, /* 2068, 0x1000dbd, U+0dbd, KEY_Sinh_la, SINHALA DANTAJA LAYANNA */
	0x0000,
	0x777c, /* 1286, 0xdad, U+0e0d, KEY_Thai_yoying, THAI CHARACTER YO YING */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x77c9, /* 1289, 0xdb0, U+0e10, KEY_Thai_thothan, THAI CHARACTER THO THAN */
	0x9eb3, /* 1664, 0x1001ed4, U+1ed4, KEY_Ocircumflexhook, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9f0b, /* 1667, 0x1001ed7, U+1ed7, KEY_ocircumflextilde, LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0x0000,
	0xcbb5, /* 2073, 0x1000dc4, U+0dc4, KEY_Sinh_ha, SINHALA HAYANNA */
	0x9f4a, /* 1669, 0x1001ed9, U+1ed9, KEY_ocircumflexbelowdot, LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0xcbca, /* 2074, 0x1000dc5, U+0dc5, KEY_Sinh_lla, SINHALA MUURDHAJA LAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9fcb, /* 1674, 0x1001ede, U+1ede, KEY_Ohornhook, LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
	0x0000,
	0x9fe2, /* 1675, 0x1001edf, U+1edf, KEY_ohornhook, LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
	0x0000,
	0x9ff9, /* 1676, 0x1001ee0, U+1ee0, KEY_Ohorntilde, LATIN CAPITAL LETTER O WITH HORN AND TILDE */
	0x0000,
	0xa011, /* 1677, 0x1001ee1, U+1ee1, KEY_ohorntilde, LATIN SMALL LETTER O WITH HORN AND TILDE */
	0x0000,
	0x0000,
	0x0000,
	0xa044, /* 1679, 0x1001ee3, U+1ee3, KEY_ohornbelowdot, LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe371, /* 2310, 0x1000ff00, KEY_DRemove, Remove */
	0x0000,
	0x0000,
	0xa0b3, /* 1684, 0x1001ee8, U+1ee8, KEY_Uhornacute, LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcc20, /* 2078, 0x1000dd0, U+0dd0, KEY_Sinh_ae2, SINHALA AEDA-PILLA */
	0x0000,
	0x0000,
	0xa113, /* 1688, 0x1001eec, U+1eec, KEY_Uhornhook, LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
	0x0000,
	0xa12a, /* 1689, 0x1001eed, U+1eed, KEY_uhornhook, LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
	0x0000,
	0xa141, /* 1690, 0x1001eee, U+1eee, KEY_Uhorntilde, LATIN CAPITAL LETTER U WITH HORN AND TILDE */
	0x0000,
	0xa159, /* 1691, 0x1001eef, U+1eef, KEY_uhorntilde, LATIN SMALL LETTER U WITH HORN AND TILDE */
	0x0000,
	0xa171, /* 1692, 0x1001ef0, U+1ef0, KEY_Uhornbelowdot, LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
	0x0000,
	0xa18c, /* 1693, 0x1001ef1, U+1ef1, KEY_uhornbelowdot, LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
	0x0000,
	0x434f, /*  778, 0x1000666, U+0666, KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */
	0x3b04, /*  683, 0x47e, U+203e, KEY_overline, OVERLINE */
	0x4365, /*  779, 0x1000667, U+0667, KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */
	0x0000,
	0xa1a7, /* 1694, 0x1001ef4, U+1ef4, KEY_Ybelowdot, LATIN CAPITAL LETTER Y WITH DOT BELOW */
	0x0000,
	0xa1be, /* 1695, 0x1001ef5, U+1ef5, KEY_ybelowdot, LATIN SMALL LETTER Y WITH DOT BELOW */
	0x0000,
	0x7a0f, /* 1312, 0xdc7, U+0e27, KEY_Thai_wowaen, THAI CHARACTER WO WAEN */
	0x0000,
	0xa1e8, /* 1697, 0x1001ef7, U+1ef7, KEY_yhook, LATIN SMALL LETTER Y WITH HOOK ABOVE */
	0x9937, /* 1610, 0x1001e36, U+1e36, KEY_Lbelowdot, LATIN CAPITAL LETTER L WITH DOT BELOW */
	0xe3d3, /* 2314, 0x1000ff72, KEY_hpInsertChar */
	0x0000,
	0x994e, /* 1611, 0x1001e37, U+1e37, KEY_lbelowdot, LATIN SMALL LETTER L WITH DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0xdc6c, /* 2242, 0x1008ffa1, KEY_XF86View, Show a view options/properties */
	0x0000,
	0xe1a4, /* 2294, 0x1005ff75, KEY_SunCut */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe5bf, /* 2334, 0x1004ff02, KEY_osfCopy */
	0xdc9b, /* 2244, 0x1008ffa3, KEY_XF86Red, Red button */
	0x0000,
	0xe230, /* 2299, 0x1005ff7a, KEY_SunVideoDegauss */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3b1a, /*  684, 0x4a1, U+3002, KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */
	0x3b35, /*  685, 0x4a2, U+300c, KEY_kana_openingbracket, LEFT CORNER BRACKET */
	0x3b56, /*  686, 0x4a3, U+300d, KEY_kana_closingbracket, RIGHT CORNER BRACKET */
	0x3b77, /*  687, 0x4a4, U+3001, KEY_kana_comma, IDEOGRAPHIC COMMA */
	0x3b8f, /*  688, 0x4a5, U+30fb, KEY_kana_conjunctive, KATAKANA MIDDLE DOT */
	0x3bc9, /*  690, 0x4a6, U+30f2, KEY_kana_WO, KATAKANA LETTER WO */
	0x3bde, /*  691, 0x4a7, U+30a1, KEY_kana_a, KATAKANA LETTER SMALL A */
	0x3bf2, /*  692, 0x4a8, U+30a3, KEY_kana_i, KATAKANA LETTER SMALL I */
	0x3c06, /*  693, 0x4a9, U+30a5, KEY_kana_u, KATAKANA LETTER SMALL U */
	0x3c1a, /*  694, 0x4aa, U+30a7, KEY_kana_e, KATAKANA LETTER SMALL E */
	0x3c2e, /*  695, 0x4ab, U+30a9, KEY_kana_o, KATAKANA LETTER SMALL O */
	0x3c42, /*  696, 0x4ac, U+30e3, KEY_kana_ya, KATAKANA LETTER SMALL YA */
	0x3c57, /*  697, 0x4ad, U+30e5, KEY_kana_yu, KATAKANA LETTER SMALL YU */
	0x3c6c, /*  698, 0x4ae, U+30e7, KEY_kana_yo, KATAKANA LETTER SMALL YO */
	0x3c81, /*  699, 0x4af, U+30c3, KEY_kana_tsu, KATAKANA LETTER SMALL TU */
	0x3cac, /*  701, 0x4b0, U+30fc, KEY_prolongedsound, KATAKANA-HIRAGANA PROLONGED SOUND MARK */
	0x3cc8, /*  702, 0x4b1, U+30a2, KEY_kana_A, KATAKANA LETTER A */
	0x3cdc, /*  703, 0x4b2, U+30a4, KEY_kana_I, KATAKANA LETTER I */
	0x3cf0, /*  704, 0x4b3, U+30a6, KEY_kana_U, KATAKANA LETTER U */
	0x3d04, /*  705, 0x4b4, U+30a8, KEY_kana_E, KATAKANA LETTER E */
	0x3d18, /*  706, 0x4b5, U+30aa, KEY_kana_O, KATAKANA LETTER O */
	0x3d2c, /*  707, 0x4b6, U+30ab, KEY_kana_KA, KATAKANA LETTER KA */
	0x3d41, /*  708, 0x4b7, U+30ad, KEY_kana_KI, KATAKANA LETTER KI */
	0x3d56, /*  709, 0x4b8, U+30af, KEY_kana_KU, KATAKANA LETTER KU */
	0x3d6b, /*  710, 0x4b9, U+30b1, KEY_kana_KE, KATAKANA LETTER KE */
	0x3d80, /*  711, 0x4ba, U+30b3, KEY_kana_KO, KATAKANA LETTER KO */
	0x3d95, /*  712, 0x4bb, U+30b5, KEY_kana_SA, KATAKANA LETTER SA */
	0x3daa, /*  713, 0x4bc, U+30b7, KEY_kana_SHI, KATAKANA LETTER SI */
	0x3dc0, /*  714, 0x4bd, U+30b9, KEY_kana_SU, KATAKANA LETTER SU */
	0x3dd5, /*  715, 0x4be, U+30bb, KEY_kana_SE, KATAKANA LETTER SE */
	0x3dea, /*  716, 0x4bf, U+30bd, KEY_kana_SO, KATAKANA LETTER SO */
	0x3dff, /*  717, 0x4c0, U+30bf, KEY_kana_TA, KATAKANA LETTER TA */
	0x3e14, /*  718, 0x4c1, U+30c1, KEY_kana_CHI, KATAKANA LETTER TI */
	0x3e3f, /*  720, 0x4c2, U+30c4, KEY_kana_TSU, KATAKANA LETTER TU */
	0x3e6a, /*  722, 0x4c3, U+30c6, KEY_kana_TE, KATAKANA LETTER TE */
	0x3e7f, /*  723, 0x4c4, U+30c8, KEY_kana_TO, KATAKANA LETTER TO */
	0x3e94, /*  724, 0x4c5, U+30ca, KEY_kana_NA, KATAKANA LETTER NA */
	0x3ea9, /*  725, 0x4c6, U+30cb, KEY_kana_NI, KATAKANA LETTER NI */
	0x3ebe, /*  726, 0x4c7, U+30cc, KEY_kana_NU, KATAKANA LETTER NU */
	0x3ed3, /*  727, 0x4c8, U+30cd, KEY_kana_NE, KATAKANA LETTER NE */
	0x3ee8, /*  728, 0x4c9, U+30ce, KEY_kana_NO, KATAKANA LETTER NO */
	0x3efd, /*  729, 0x4ca, U+30cf, KEY_kana_HA, KATAKANA LETTER HA */
	0x3f12, /*  730, 0x4cb, U+30d2, KEY_kana_HI, KATAKANA LETTER HI */
	0x3f27, /*  731, 0x4cc, U+30d5, KEY_kana_FU, KATAKANA LETTER HU */
	0x3f51, /*  733, 0x4cd, U+30d8, KEY_kana_HE, KATAKANA LETTER HE */
	0x3f66, /*  734, 0x4ce, U+30db, KEY_kana_HO, KATAKANA LETTER HO */
	0x3f7b, /*  735, 0x4cf, U+30de, KEY_kana_MA, KATAKANA LETTER MA */
	0x3f90, /*  736, 0x4d0, U+30df, KEY_kana_MI, KATAKANA LETTER MI */
	0x3fa5, /*  737, 0x4d1, U+30e0, KEY_kana_MU, KATAKANA LETTER MU */
	0x3fba, /*  738, 0x4d2, U+30e1, KEY_kana_ME, KATAKANA LETTER ME */
	0x3fcf, /*  739, 0x4d3, U+30e2, KEY_kana_MO, KATAKANA LETTER MO */
	0x3fe4, /*  740, 0x4d4, U+30e4, KEY_kana_YA, KATAKANA LETTER YA */
	0x3ff9, /*  741, 0x4d5, U+30e6, KEY_kana_YU, KATAKANA LETTER YU */
	0x400e, /*  742, 0x4d6, U+30e8, KEY_kana_YO, KATAKANA LETTER YO */
	0x4023, /*  743, 0x4d7, U+30e9, KEY_kana_RA, KATAKANA LETTER RA */
	0x4038, /*  744, 0x4d8, U+30ea, KEY_kana_RI, KATAKANA LETTER RI */
	0x404d, /*  745, 0x4d9, U+30eb, KEY_kana_RU, KATAKANA LETTER RU */
	0x4062, /*  746, 0x4da, U+30ec, KEY_kana_RE, KATAKANA LETTER RE */
	0x4077, /*  747, 0x4db, U+30ed, KEY_kana_RO, KATAKANA LETTER RO */
	0x408c, /*  748, 0x4dc, U+30ef, KEY_kana_WA, KATAKANA LETTER WA */
	0x40a1, /*  749, 0x4dd, U+30f3, KEY_kana_N, KATAKANA LETTER N */
	0x40b5, /*  750, 0x4de, U+309b, KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */
	0x40ce, /*  751, 0x4df, U+309c, KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
	0x0000,
	0x82f3, /* 1395, 0xeb6, KEY_Hangul_SsangSios */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7d22, /* 1342, 0xde8, U+0e48, KEY_Thai_maiek, THAI CHARACTER MAI EK */
	0x0000,
	0x0000,
	0x7d3a, /* 1343, 0xde9, U+0e49, KEY_Thai_maitho, THAI CHARACTER MAI THO */
	0x0000,
	0xd023, /* 2118, 0x1008ff21, KEY_XF86PowerDown, Deep sleep the system */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x842c, /* 1407, 0xec2, KEY_Hangul_YAE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x84a0, /* 1412, 0xec7, KEY_Hangul_O */
	0x0000,
	0xc938, /* 2044, 0x1000da3, U+0da3, KEY_Sinh_jha, SINHALA MAHA. JAYANNA */
	0x7df6, /* 1350, 0xdf2, U+0e52, KEY_Thai_leksong, THAI DIGIT TWO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x61b8, /* 1065, 0x8a8, U+23a3, KEY_botleftsqbracket, LEFT SQUARE BRACKET LOWER CORNER */
	0x0000,
	0x61d6, /* 1066, 0x8a9, U+23a4, KEY_toprightsqbracket, RIGHT SQUARE BRACKET UPPER CORNER */
	0x0000,
	0x61f5, /* 1067, 0x8aa, U+23a6, KEY_botrightsqbracket, RIGHT SQUARE BRACKET LOWER CORNER */
	0x0000,
	0x6214, /* 1068, 0x8ab, U+239b, KEY_topleftparens, LEFT PARENTHESIS UPPER HOOK */
	0x0000,
	0x622f, /* 1069, 0x8ac, U+239d, KEY_botleftparens, LEFT PARENTHESIS LOWER HOOK */
	0x0000,
	0x624a, /* 1070, 0x8ad, U+239e, KEY_toprightparens, RIGHT PARENTHESIS UPPER HOOK */
	0x0000,
	0x6266, /* 1071, 0x8ae, U+23a0, KEY_botrightparens, RIGHT PARENTHESIS LOWER HOOK */
	0x0000,
	0x6282, /* 1072, 0x8af, U+23a8, KEY_leftmiddlecurlybrace, LEFT CURLY BRACKET MIDDLE PIECE */
	0xc97b, /* 2047, 0x1000da6, U+0da6, KEY_Sinh_nja, SINHALA SANYAKA JAYANNA */
	0x62a4, /* 1073, 0x8b0, U+23ac, KEY_rightmiddlecurlybrace, RIGHT CURLY BRACKET MIDDLE PIECE */
	0x0000,
	0x62c7, /* 1074, 0x8b1, KEY_topleftsummation */
	0x0000,
	0x62e5, /* 1075, 0x8b2, KEY_botleftsummation */
	0x0000,
	0x6303, /* 1076, 0x8b3, KEY_topvertsummationconnector */
	0x0000,
	0x632a, /* 1077, 0x8b4, KEY_botvertsummationconnector */
	0x0000,
	0x6351, /* 1078, 0x8b5, KEY_toprightsummation */
	0x0000,
	0x6370, /* 1079, 0x8b6, KEY_botrightsummation */
	0xc9a7, /* 2049, 0x1000da8, U+0da8, KEY_Sinh_ttha, SINHALA MAHA. TTAYANNA */
	0x638f, /* 1080, 0x8b7, KEY_rightmiddlesummation */
	0x0000,
	0xe692, /* 2343, 0x1004ff33, KEY_osfQuickPaste */
	0x0000,
	0x86c1, /* 1433, 0xedc, KEY_Hangul_J_RieulKiyeog */
	0x6698, /* 1114, 0x9e8, U+2424, KEY_nl, SYMBOL FOR NEWLINE */
	0xc9be, /* 2050, 0x1000da9, U+0da9, KEY_Sinh_dda, SINHALA DDAYANNA */
	0xe138, /* 2289, 0x1005ff70, KEY_SunProps */
	0x66a8, /* 1115, 0x9e9, U+240b, KEY_vt, SYMBOL FOR VERTICAL TABULATION */
	0x0000,
	0x63b1, /* 1081, 0x8bc, U+2264, KEY_lessthanequal, LESS-THAN OR EQUAL TO */
	0x66b8, /* 1116, 0x9ea, U+2518, KEY_lowrightcorner, BOX DRAWINGS LIGHT UP AND LEFT */
	0x0000,
	0x0000,
	0x66d4, /* 1117, 0x9eb, U+2510, KEY_uprightcorner, BOX DRAWINGS LIGHT DOWN AND LEFT */
	0x0000,
	0x0000,
	0x0000,
	0x9093, /* 1521, 0x1000576, U+0576, KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */
	0x0000,
	0x6709, /* 1119, 0x9ed, U+2514, KEY_lowleftcorner, BOX DRAWINGS LIGHT UP AND RIGHT */
	0x0000,
	0x90c6, /* 1523, 0x1000577, U+0577, KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */
	0x6724, /* 1120, 0x9ee, U+253c, KEY_crossinglines, BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
	0x0000,
	0xddd9, /* 2256, 0x1008fe04, KEY_XF86Switch_VT_4 */
	0x673f, /* 1121, 0x9ef, U+23ba, KEY_horizlinescan1, HORIZONTAL SCAN LINE-1 */
	0x0000,
	0x0000,
	0x675b, /* 1122, 0x9f0, U+23bb, KEY_horizlinescan3, HORIZONTAL SCAN LINE-3 */
	0x0000,
	0x0000,
	0x6777, /* 1123, 0x9f1, U+2500, KEY_horizlinescan5, BOX DRAWINGS LIGHT HORIZONTAL */
	0x0000,
	0x0000,
	0x6793, /* 1124, 0x9f2, U+23bc, KEY_horizlinescan7, HORIZONTAL SCAN LINE-7 */
	0x88ad, /* 1449, 0xeec, KEY_Hangul_J_Tieut */
	0xa560, /* 1734, 0x1002202, U+2202, KEY_partdifferential, PARTIAL DIFFERENTIAL */
	0x67af, /* 1125, 0x9f3, U+23bd, KEY_horizlinescan9, HORIZONTAL SCAN LINE-9 */
	0x0000,
	0xa57e, /* 1735, 0x1002205, U+2205, KEY_emptyset, NULL SET */
	0xe6ad, /* 2344, 0x1004ff40, KEY_osfPageLeft */
	0x8902, /* 1452, 0xeef, KEY_Hangul_RieulYeorinHieuh */
	0xa594, /* 1736, 0x1002208, U+2208, KEY_elementof, ELEMENT OF */
	0x8927, /* 1453, 0xef0, KEY_Hangul_SunkyeongeumMieum */
	0x0000,
	0x894d, /* 1454, 0xef1, KEY_Hangul_SunkyeongeumPieub */
	0xe6dd, /* 2346, 0x1004ff42, KEY_osfPageDown */
	0x42ae, /*  771, 0x10006d4, U+06d4, KEY_Arabic_fullstop, ARABIC FULL STOP */
	0x0000,
	0xe6f6, /* 2347, 0x1004ff43, KEY_osfPageRight */
	0x0000,
	0x0000,
	0xe710, /* 2348, 0x1004ff44, KEY_osfActivate */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8a16, /* 1460, 0xef7, KEY_Hangul_AraeAE */
	0x0000,
	0x0000,
	0xa5dd, /* 1739, 0x100221a, U+221a, KEY_squareroot, SQUARE ROOT */
	0xa5f5, /* 1740, 0x100221b, U+221b, KEY_cuberoot, CUBE ROOT */
	0xa60b, /* 1741, 0x100221c, U+221c, KEY_fourthroot, FOURTH ROOT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x64f7, /* 1095, 0x8da, U+2282, KEY_includedin, SUBSET OF */
	0x0000,
	0x650f, /* 1096, 0x8db, U+2283, KEY_includes, SUPERSET OF */
	0x0000,
	0x6525, /* 1097, 0x8dc, U+2229, KEY_intersection, INTERSECTION */
	0x0000,
	0x3a8c, /*  677, 0x1001e85, U+1e85, KEY_wdiaeresis, LATIN SMALL LETTER W WITH DIAERESIS */
	0x0000,
	0x6552, /* 1099, 0x8de, U+2227, KEY_logicaland, LOGICAL AND */
	0xa623, /* 1742, 0x100222c, U+222c, KEY_dintegral, DOUBLE INTEGRAL */
	0x656a, /* 1100, 0x8df, U+2228, KEY_logicalor, LOGICAL OR */
	0x0000,
	0xcd9c, /* 2095, 0x1008ff01, KEY_XF86ModeLock, Mode Switch Lock */
	0x0000,
	0xd28f, /* 2142, 0x1008ff39, KEY_XF86AddFavorite, Add URL to favorites list */
	0x0000,
	0xcdd7, /* 2097, 0x1008ff03, KEY_XF86MonBrightnessDown, Monitor/panel brightness */
	0x0000,
	0xa651, /* 1744, 0x1002235, U+2235, KEY_because, BECAUSE */
	0x0000,
	0x0000,
	0x0000,
	0xce3a, /* 2100, 0x1008ff06, KEY_XF86KbdBrightnessDown, Keyboards may be lit */
	0x0000,
	0x8ad3, /* 1466, 0x1000589, U+0589, KEY_Armenian_full_stop, ARMENIAN FULL STOP */
	0xe756, /* 2351, 0x1004ff52, KEY_osfUp */
	0xe4c3, /* 2324, 0x100000a9, KEY_hpmute_grave */
	0x0000,
	0xdbc8, /* 2236, 0x1008ff9b, KEY_XF86AudioCycleTrack, cycle through audio tracks */
	0x0000,
	0x0000,
	0xe77f, /* 2353, 0x1004ff54, KEY_osfDown */
	0xd2e8, /* 2145, 0x1008ff3c, KEY_XF86Finance, Display financial site */
	0x0000,
	0x0000,
	0x0000,
	0xa67c, /* 1746, 0x1002247, U+2247, KEY_notapproxeq, NOT ALMOST EQUAL TO */
	0xa666, /* 1745, 0x1002248, U+2245, KEY_approxeq, ALMOST EQUAL TO */
	0x0000,
	0x0000,
	0xe794, /* 2354, 0x1004ff57, KEY_osfEndLine */
	0x0000,
	0x6581, /* 1101, 0x8ef, U+2202, KEY_partialderivative, PARTIAL DIFFERENTIAL */
	0x0000,
	0xce76, /* 2102, 0x1008ff11, KEY_XF86AudioLowerVolume, Volume control down */
	0xdf14, /* 2267, 0x1008fe22, KEY_XF86Next_VMode, next video mode available */
	0xce98, /* 2103, 0x1008ff12, KEY_XF86AudioMute, Mute sound from the system */
	0x0000,
	0xceb3, /* 2104, 0x1008ff13, KEY_XF86AudioRaiseVolume, Volume control up */
	0x0000,
	0xced5, /* 2105, 0x1008ff14, KEY_XF86AudioPlay, Start playing of audio > */
	0xdf4c, /* 2269, 0x1008fe24, KEY_XF86LogWindowTree, print window tree to log */
	0xcef0, /* 2106, 0x1008ff15, KEY_XF86AudioStop, Stop playing audio */
	0x0000,
	0x0000,
	0x0000,
	0x65a0, /* 1102, 0x8f6, U+0192, KEY_function, LATIN SMALL LETTER F WITH HOOK */
	0x0000,
	0x0000,
	0x0000,
	0xcf5b, /* 2110, 0x1008ff19, KEY_XF86Mail, Invoke user's mail program */
	0x4294, /*  770, 0x5ac, U+060c, KEY_Arabic_comma, ARABIC COMMA */
	0x0000,
	0xa695, /* 1747, 0x1002262, U+2262, KEY_notidentical, NOT IDENTICAL TO */
	0xa6af, /* 1748, 0x1002263, U+2263, KEY_stricteq, STRICTLY EQUIVALENT TO */
	0x0000,
	0x65b6, /* 1103, 0x8fb, U+2190, KEY_leftarrow, LEFTWARDS ARROW */
	0x0000,
	0x65cd, /* 1104, 0x8fc, U+2191, KEY_uparrow, UPWARDS ARROW */
	0x0000,
	0x65e2, /* 1105, 0x8fd, U+2192, KEY_rightarrow, RIGHTWARDS ARROW */
	0x0000,
	0x65fa, /* 1106, 0x8fe, U+2193, KEY_downarrow, DOWNWARDS ARROW */
	0x0000,
	0x0000,
	0x0000,
	0x43a7, /*  782, 0x5bb, U+061b, KEY_Arabic_semicolon, ARABIC SEMICOLON */
	0x0000,
	0xd03e, /* 2119, 0x1008ff22, KEY_XF86ContrastAdjust, Adjust screen contrast */
	0x0000,
	0x43c5, /*  783, 0x5bf, U+061f, KEY_Arabic_question_mark, ARABIC QUESTION MARK */
	0x0000,
	0x43e7, /*  784, 0x5c1, U+0621, KEY_Arabic_hamza, ARABIC LETTER HAMZA */
	0x4401, /*  785, 0x5c2, U+0622, KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */
	0x4421, /*  786, 0x5c3, U+0623, KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */
	0x4441, /*  787, 0x5c4, U+0624, KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */
	0x4460, /*  788, 0x5c5, U+0625, KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */
	0x4483, /*  789, 0x5c6, U+0626, KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */
	0x44a2, /*  790, 0x5c7, U+0627, KEY_Arabic_alef, ARABIC LETTER ALEF */
	0x44bb, /*  791, 0x5c8, U+0628, KEY_Arabic_beh, ARABIC LETTER BEH */
	0x44d3, /*  792, 0x5c9, U+0629, KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */
	0x44f2, /*  793, 0x5ca, U+062a, KEY_Arabic_teh, ARABIC LETTER TEH */
	0x450a, /*  794, 0x5cb, U+062b, KEY_Arabic_theh, ARABIC LETTER THEH */
	0x4523, /*  795, 0x5cc, U+062c, KEY_Arabic_jeem, ARABIC LETTER JEEM */
	0x453c, /*  796, 0x5cd, U+062d, KEY_Arabic_hah, ARABIC LETTER HAH */
	0x4554, /*  797, 0x5ce, U+062e, KEY_Arabic_khah, ARABIC LETTER KHAH */
	0x456d, /*  798, 0x5cf, U+062f, KEY_Arabic_dal, ARABIC LETTER DAL */
	0x4585, /*  799, 0x5d0, U+0630, KEY_Arabic_thal, ARABIC LETTER THAL */
	0x459e, /*  800, 0x5d1, U+0631, KEY_Arabic_ra, ARABIC LETTER REH */
	0x45b5, /*  801, 0x5d2, U+0632, KEY_Arabic_zain, ARABIC LETTER ZAIN */
	0x45ce, /*  802, 0x5d3, U+0633, KEY_Arabic_seen, ARABIC LETTER SEEN */
	0x45e7, /*  803, 0x5d4, U+0634, KEY_Arabic_sheen, ARABIC LETTER SHEEN */
	0x4601, /*  804, 0x5d5, U+0635, KEY_Arabic_sad, ARABIC LETTER SAD */
	0x4619, /*  805, 0x5d6, U+0636, KEY_Arabic_dad, ARABIC LETTER DAD */
	0x4631, /*  806, 0x5d7, U+0637, KEY_Arabic_tah, ARABIC LETTER TAH */
	0x4649, /*  807, 0x5d8, U+0638, KEY_Arabic_zah, ARABIC LETTER ZAH */
	0x4661, /*  808, 0x5d9, U+0639, KEY_Arabic_ain, ARABIC LETTER AIN */
	0x4679, /*  809, 0x5da, U+063a, KEY_Arabic_ghain, ARABIC LETTER GHAIN */
	0x9a13, /* 1619, 0x1001ea7, U+1ea7, KEY_acircumflexgrave, LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x0000,
	0xd437, /* 2158, 0x1008ff49, KEY_XF86Launch9, Launch Application */
	0x0000,
	0xd1f4, /* 2136, 0x1008ff33, KEY_XF86MyComputer, Display "My Computer" window */
	0x4693, /*  810, 0x5e0, U+0640, KEY_Arabic_tatweel, ARABIC TATWEEL */
	0x46af, /*  811, 0x5e1, U+0641, KEY_Arabic_feh, ARABIC LETTER FEH */
	0x46c7, /*  812, 0x5e2, U+0642, KEY_Arabic_qaf, ARABIC LETTER QAF */
	0x46df, /*  813, 0x5e3, U+0643, KEY_Arabic_kaf, ARABIC LETTER KAF */
	0x46f7, /*  814, 0x5e4, U+0644, KEY_Arabic_lam, ARABIC LETTER LAM */
	0x470f, /*  815, 0x5e5, U+0645, KEY_Arabic_meem, ARABIC LETTER MEEM */
	0x4728, /*  816, 0x5e6, U+0646, KEY_Arabic_noon, ARABIC LETTER NOON */
	0x4741, /*  817, 0x5e7, U+0647, KEY_Arabic_ha, ARABIC LETTER HEH */
	0x4770, /*  819, 0x5e8, U+0648, KEY_Arabic_waw, ARABIC LETTER WAW */
	0x4788, /*  820, 0x5e9, U+0649, KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */
	0x47a8, /*  821, 0x5ea, U+064a, KEY_Arabic_yeh, ARABIC LETTER YEH */
	0x47c0, /*  822, 0x5eb, U+064b, KEY_Arabic_fathatan, ARABIC FATHATAN */
	0x47dd, /*  823, 0x5ec, U+064c, KEY_Arabic_dammatan, ARABIC DAMMATAN */
	0x47fa, /*  824, 0x5ed, U+064d, KEY_Arabic_kasratan, ARABIC KASRATAN */
	0x4817, /*  825, 0x5ee, U+064e, KEY_Arabic_fatha, ARABIC FATHA */
	0x4831, /*  826, 0x5ef, U+064f, KEY_Arabic_damma, ARABIC DAMMA */
	0x484b, /*  827, 0x5f0, U+0650, KEY_Arabic_kasra, ARABIC KASRA */
	0x4865, /*  828, 0x5f1, U+0651, KEY_Arabic_shadda, ARABIC SHADDA */
	0x4880, /*  829, 0x5f2, U+0652, KEY_Arabic_sukun, ARABIC SUKUN */
	0xd301, /* 2146, 0x1008ff3d, KEY_XF86Community, Display user's community */
	0x0000,
	0x0000,
	0x0000,
	0xd339, /* 2148, 0x1008ff3f, KEY_XF86BackForward, ??? */
	0x0000,
	0x0000,
	0x0000,
	0xd36f, /* 2150, 0x1008ff41, KEY_XF86Launch1, Launch Application */
	0x9b4d, /* 1630, 0x1001eb2, U+1eb2, KEY_Abrevehook, LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
	0xd388, /* 2151, 0x1008ff42, KEY_XF86Launch2, Launch Application */
	0x0000,
	0xd3a1, /* 2152, 0x1008ff43, KEY_XF86Launch3, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0xd3d3, /* 2154, 0x1008ff45, KEY_XF86Launch5, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0xd405, /* 2156, 0x1008ff47, KEY_XF86Launch7, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0x9bcb, /* 1635, 0x1001eb7, U+1eb7, KEY_abrevebelowdot, LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0xd469, /* 2160, 0x1008ff4b, KEY_XF86LaunchB, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd4cd, /* 2164, 0x1008ff4f, KEY_XF86LaunchF, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe54e, /* 2329, 0x100000be, KEY_hpguilder */
	0x9c4f, /* 1641, 0x1001ebd, U+1ebd, KEY_etilde, LATIN SMALL LETTER E WITH TILDE */
	0x0000,
	0xd53f, /* 2168, 0x1008ff53, KEY_XF86CD, Launch CD/DVD player */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9c9f, /* 1644, 0x1001ec0, U+1ec0, KEY_Ecircumflexgrave, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd628, /* 2178, 0x1008ff5d, KEY_XF86Explorer, Launch file explorer */
	0x0000,
	0x0000,
	0x0000,
	0xd658, /* 2180, 0x1008ff5f, KEY_XF86Go, Go to URL */
	0x9d51, /* 1650, 0x1001ec6, U+1ec6, KEY_Ecircumflexbelowdot, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd6b4, /* 2184, 0x1008ff63, KEY_XF86Meeting, enter meeting in calendar */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9e28, /* 1659, 0x1001ecf, U+1ecf, KEY_ohook, LATIN SMALL LETTER O WITH HOOK ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8ec0, /* 1503, 0x100056d, U+056d, KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc6d4, /* 2015, 0x1000d82, U+0d82, KEY_Sinh_ng, SINHALA ANUSVARAYA */
	0x0000,
	0x8f8e, /* 1511, 0x1000571, U+0571, KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */
	0x0000,
	0x0000,
	0x0000,
	0xc6fe, /* 2017, 0x1000d85, U+0d85, KEY_Sinh_a, SINHALA AYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc73c, /* 2020, 0x1000d88, U+0d88, KEY_Sinh_aee, SINHALA AEEYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc77b, /* 2023, 0x1000d8b, U+0d8b, KEY_Sinh_u, SINHALA UYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd9cb, /* 2216, 0x1008ff87, KEY_XF86Video, Launch video player */
	0x0000,
	0xe630, /* 2339, 0x1004ff0b, KEY_osfClear */
	0x0000,
	0xc7e4, /* 2028, 0x1000d90, U+0d90, KEY_Sinh_luu, SINHALA ILUUYANNA */
	0x0000,
	0xc7fa, /* 2029, 0x1000d91, U+0d91, KEY_Sinh_e, SINHALA EYANNA */
	0x0000,
	0xc80e, /* 2030, 0x1000d92, U+0d92, KEY_Sinh_ee, SINHALA EEYANNA */
	0x0000,
	0xc823, /* 2031, 0x1000d93, U+0d93, KEY_Sinh_ai, SINHALA AIYANNA */
	0xe2d2, /* 2304, 0x1000fe5e, KEY_Dcircumflex_accent */
	0xc838, /* 2032, 0x1000d94, U+0d94, KEY_Sinh_o, SINHALA OYANNA */
	0x0000,
	0xc84c, /* 2033, 0x1000d95, U+0d95, KEY_Sinh_oo, SINHALA OOYANNA */
	0x0000,
	0xc861, /* 2034, 0x1000d96, U+0d96, KEY_Sinh_au, SINHALA AUYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xdac2, /* 2226, 0x1008ff91, KEY_XF86Pictures, Show pictures */
	0x0000,
	0xdadc, /* 2227, 0x1008ff92, KEY_XF86Music, Launch music application */
	0x0000,
	0xc876, /* 2035, 0x1000d9a, U+0d9a, KEY_Sinh_ka, SINHALA KAYANNA */
	0x0000,
	0x4e09, /*  874, 0x6a1, U+0452, KEY_Serbian_dje, CYRILLIC SMALL LETTER DJE */
	0x4e22, /*  875, 0x6a2, U+0453, KEY_Macedonia_gje, CYRILLIC SMALL LETTER GJE */
	0x4e3d, /*  876, 0x6a3, U+0451, KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */
	0x4e56, /*  877, 0x6a4, U+0454, KEY_Ukrainian_ie, CYRILLIC SMALL LETTER UKRAINIAN IE */
	0x4e89, /*  879, 0x6a5, U+0455, KEY_Macedonia_dse, CYRILLIC SMALL LETTER DZE */
	0x4ea4, /*  880, 0x6a6, U+0456, KEY_Ukrainian_i, CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x4ed5, /*  882, 0x6a7, U+0457, KEY_Ukrainian_yi, CYRILLIC SMALL LETTER YI */
	0x4f08, /*  884, 0x6a8, U+0458, KEY_Cyrillic_je, CYRILLIC SMALL LETTER JE */
	0x4f39, /*  886, 0x6a9, U+0459, KEY_Cyrillic_lje, CYRILLIC SMALL LETTER LJE */
	0x4f6c, /*  888, 0x6aa, U+045a, KEY_Cyrillic_nje, CYRILLIC SMALL LETTER NJE */
	0x4f9f, /*  890, 0x6ab, U+045b, KEY_Serbian_tshe, CYRILLIC SMALL LETTER TSHE */
	0x4fb9, /*  891, 0x6ac, U+045c, KEY_Macedonia_kje, CYRILLIC SMALL LETTER KJE */
	0x4fd4, /*  892, 0x6ad, U+0491, KEY_Ukrainian_ghe_with_upturn, CYRILLIC SMALL LETTER GHE WITH UPTURN */
	0x4ffb, /*  893, 0x6ae, U+045e, KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */
	0x501c, /*  894, 0x6af, U+045f, KEY_Cyrillic_dzhe, CYRILLIC SMALL LETTER DZHE */
	0x5050, /*  896, 0x6b0, U+2116, KEY_numerosign, NUMERO SIGN */
	0x5068, /*  897, 0x6b1, U+0402, KEY_Serbian_DJE, CYRILLIC CAPITAL LETTER DJE */
	0x5081, /*  898, 0x6b2, U+0403, KEY_Macedonia_GJE, CYRILLIC CAPITAL LETTER GJE */
	0x509c, /*  899, 0x6b3, U+0401, KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */
	0x50b5, /*  900, 0x6b4, U+0404, KEY_Ukrainian_IE, CYRILLIC CAPITAL LETTER UKRAINIAN IE */
	0x50e8, /*  902, 0x6b5, U+0405, KEY_Macedonia_DSE, CYRILLIC CAPITAL LETTER DZE */
	0x5103, /*  903, 0x6b6, U+0406, KEY_Ukrainian_I, CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x5134, /*  905, 0x6b7, U+0407, KEY_Ukrainian_YI, CYRILLIC CAPITAL LETTER YI */
	0x5167, /*  907, 0x6b8, U+0408, KEY_Cyrillic_JE, CYRILLIC CAPITAL LETTER JE */
	0x5198, /*  909, 0x6b9, U+0409, KEY_Cyrillic_LJE, CYRILLIC CAPITAL LETTER LJE */
	0x51cb, /*  911, 0x6ba, U+040a, KEY_Cyrillic_NJE, CYRILLIC CAPITAL LETTER NJE */
	0x51fe, /*  913, 0x6bb, U+040b, KEY_Serbian_TSHE, CYRILLIC CAPITAL LETTER TSHE */
	0x5218, /*  914, 0x6bc, U+040c, KEY_Macedonia_KJE, CYRILLIC CAPITAL LETTER KJE */
	0x5233, /*  915, 0x6bd, U+0490, KEY_Ukrainian_GHE_WITH_UPTURN, CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
	0x525a, /*  916, 0x6be, U+040e, KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */
	0x527b, /*  917, 0x6bf, U+040f, KEY_Cyrillic_DZHE, CYRILLIC CAPITAL LETTER DZHE */
	0x52af, /*  919, 0x6c0, U+044e, KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */
	0x52c8, /*  920, 0x6c1, U+0430, KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */
	0x52e0, /*  921, 0x6c2, U+0431, KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */
	0x52f9, /*  922, 0x6c3, U+0446, KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */
	0x5313, /*  923, 0x6c4, U+0434, KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */
	0x532c, /*  924, 0x6c5, U+0435, KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */
	0x5345, /*  925, 0x6c6, U+0444, KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */
	0x535e, /*  926, 0x6c7, U+0433, KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */
	0x5378, /*  927, 0x6c8, U+0445, KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */
	0x5391, /*  928, 0x6c9, U+0438, KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */
	0x53a9, /*  929, 0x6ca, U+0439, KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */
	0x53c6, /*  930, 0x6cb, U+043a, KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */
	0x53df, /*  931, 0x6cc, U+043b, KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */
	0x53f8, /*  932, 0x6cd, U+043c, KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */
	0x5411, /*  933, 0x6ce, U+043d, KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */
	0x542a, /*  934, 0x6cf, U+043e, KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */
	0x5442, /*  935, 0x6d0, U+043f, KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */
	0x545b, /*  936, 0x6d1, U+044f, KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */
	0x5474, /*  937, 0x6d2, U+0440, KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */
	0x548d, /*  938, 0x6d3, U+0441, KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */
	0x54a6, /*  939, 0x6d4, U+0442, KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */
	0x54bf, /*  940, 0x6d5, U+0443, KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */
	0x54d7, /*  941, 0x6d6, U+0436, KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */
	0x54f1, /*  942, 0x6d7, U+0432, KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */
	0x550a, /*  943, 0x6d8, U+044c, KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */
	0x5529, /*  944, 0x6d9, U+044b, KEY_Cyrillic_yeru, CYRILLIC SMALL LETTER YERU */
	0x5544, /*  945, 0x6da, U+0437, KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */
	0x555d, /*  946, 0x6db, U+0448, KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */
	0x5577, /*  947, 0x6dc, U+044d, KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */
	0x558f, /*  948, 0x6dd, U+0449, KEY_Cyrillic_shcha, CYRILLIC SMALL LETTER SHCHA */
	0x55ab, /*  949, 0x6de, U+0447, KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */
	0x387e, /*  654, 0x1000174, U+0174, KEY_Wcircumflex, LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
	0x55e4, /*  951, 0x6e0, U+042e, KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */
	0x3897, /*  655, 0x1000175, U+0175, KEY_wcircumflex, LATIN SMALL LETTER W WITH CIRCUMFLEX */
	0x5615, /*  953, 0x6e2, U+0411, KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */
	0x562e, /*  954, 0x6e3, U+0426, KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */
	0x5648, /*  955, 0x6e4, U+0414, KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */
	0x38c9, /*  657, 0x1000177, U+0177, KEY_ycircumflex, LATIN SMALL LETTER Y WITH CIRCUMFLEX */
	0x567a, /*  957, 0x6e6, U+0424, KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */
	0x5693, /*  958, 0x6e7, U+0413, KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */
	0x56ad, /*  959, 0x6e8, U+0425, KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */
	0x56c6, /*  960, 0x6e9, U+0418, KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */
	0x56de, /*  961, 0x6ea, U+0419, KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */
	0x56fb, /*  962, 0x6eb, U+041a, KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */
	0x5714, /*  963, 0x6ec, U+041b, KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */
	0x572d, /*  964, 0x6ed, U+041c, KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */
	0x5746, /*  965, 0x6ee, U+041d, KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */
	0x575f, /*  966, 0x6ef, U+041e, KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */
	0x5777, /*  967, 0x6f0, U+041f, KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */
	0x5790, /*  968, 0x6f1, U+042f, KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */
	0x57a9, /*  969, 0x6f2, U+0420, KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */
	0x57c2, /*  970, 0x6f3, U+0421, KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */
	0x57db, /*  971, 0x6f4, U+0422, KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */
	0x57f4, /*  972, 0x6f5, U+0423, KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */
	0x580c, /*  973, 0x6f6, U+0416, KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */
	0x5826, /*  974, 0x6f7, U+0412, KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */
	0x583f, /*  975, 0x6f8, U+042c, KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */
	0x585e, /*  976, 0x6f9, U+042b, KEY_Cyrillic_YERU, CYRILLIC CAPITAL LETTER YERU */
	0x5879, /*  977, 0x6fa, U+0417, KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */
	0x5892, /*  978, 0x6fb, U+0428, KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */
	0x58ac, /*  979, 0x6fc, U+042d, KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */
	0x58c4, /*  980, 0x6fd, U+0429, KEY_Cyrillic_SHCHA, CYRILLIC CAPITAL LETTER SHCHA */
	0x58e0, /*  981, 0x6fe, U+0427, KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */
	0x58fa, /*  982, 0x6ff, U+042a, KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe47f, /* 2321, 0x1000ff6d, KEY_hpSystem */
	0x0000,
	0xaacb, /* 1785, 0x100281a, U+281a, KEY_braille_dots_245, BRAILLE PATTERN DOTS-245 */
	0x0000,
	0xcc36, /* 2079, 0x1000dd1, U+0dd1, KEY_Sinh_aee2, SINHALA DIGA AEDA-PILLA */
	0x0000,
	0xcc4d, /* 2080, 0x1000dd2, U+0dd2, KEY_Sinh_i2, SINHALA IS-PILLA */
	0x0000,
	0xcc62, /* 2081, 0x1000dd3, U+0dd3, KEY_Sinh_ii2, SINHALA DIGA IS-PILLA */
	0x0000,
	0xcc78, /* 2082, 0x1000dd4, U+0dd4, KEY_Sinh_u2, SINHALA PAA-PILLA */
	0x0000,
	0x98ef, /* 1606, 0x100018f, U+018f, KEY_SCHWA, LATIN CAPITAL LETTER SCHWA */
	0x0000,
	0xcc8d, /* 2083, 0x1000dd6, U+0dd6, KEY_Sinh_uu2, SINHALA DIGA PAA-PILLA */
	0xe025, /* 2277, 0x1005ff10, KEY_SunF36, Labeled F11 */
	0xe3b9, /* 2313, 0x1000ff71, KEY_hpDeleteLine */
	0x0000,
	0xcca3, /* 2084, 0x1000dd8, U+0dd8, KEY_Sinh_ru2, SINHALA GAETTA-PILLA */
	0x80e2, /* 1377, 0xea4, KEY_Hangul_Nieun */
	0xccb9, /* 2085, 0x1000dd9, U+0dd9, KEY_Sinh_e2, SINHALA KOMBUVA */
	0x0000,
	0xccce, /* 2086, 0x1000dda, U+0dda, KEY_Sinh_ee2, SINHALA DIGA KOMBUVA */
	0x0000,
	0xcce4, /* 2087, 0x1000ddb, U+0ddb, KEY_Sinh_ai2, SINHALA KOMBU DEKA */
	0x811b, /* 1379, 0xea6, KEY_Hangul_NieunHieuh */
	0xccfa, /* 2088, 0x1000ddc, U+0ddc, KEY_Sinh_o2, SINHALA KOMBUVA HAA AELA-PILLA */
	0x0000,
	0xcd0f, /* 2089, 0x1000ddd, U+0ddd, KEY_Sinh_oo2, SINHALA KOMBUVA HAA DIGA AELA-PILLA */
	0x0000,
	0xcd25, /* 2090, 0x1000dde, U+0dde, KEY_Sinh_au2, SINHALA KOMBUVA HAA GAYANUKITTA */
	0x0000,
	0xcd3b, /* 2091, 0x1000ddf, U+0ddf, KEY_Sinh_lu2, SINHALA GAYANUKITTA */
	0x0000,
	0xe5e8, /* 2336, 0x1004ff04, KEY_osfPaste */
	0x0000,
	0x0000,
	0x0000,
	0x98da, /* 1605, 0x1000275, U+0275, KEY_obarred, LATIN SMALL LETTER BARRED O */
	0x0000,
	0xe5fe, /* 2337, 0x1004ff07, KEY_osfBackTab */
	0xe345, /* 2308, 0x1000fe7e, KEY_Dtilde */
	0xe616, /* 2338, 0x1004ff08, KEY_osfBackSpace */
	0x0000,
	0x985d, /* 1599, 0x100019f, U+019f, KEY_Obarred, LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
	0x0000,
	0xa223, /* 1700, 0x10001a0, U+01a0, KEY_Ohorn, LATIN CAPITAL LETTER O WITH HORN */
	0x0000,
	0xa236, /* 1701, 0x10001a1, U+01a1, KEY_ohorn, LATIN SMALL LETTER O WITH HORN */
	0x0000,
	0x0000,
	0x0000,
	0x822a, /* 1388, 0xeaf, KEY_Hangul_RieulPhieuf */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe8b6, /* 2366, 0x1004ff69, KEY_osfCancel */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe8cd, /* 2367, 0x1004ff6a, KEY_osfHelp */
	0x0000,
	0x0000,
	0x0000,
	0xdfbb, /* 2273, 0x1005ff02, KEY_SunFA_Tilde */
	0x0000,
	0x0000,
	0xa26f, /* 1704, 0x10020a0, U+20a0, KEY_EcuSign, EURO-CURRENCY SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe30f, /* 2306, 0x1000fe27, KEY_Dacute_accent */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3acc, /*  680, 0x13bc, U+0152, KEY_OE, LATIN CAPITAL LIGATURE OE */
	0x3adc, /*  681, 0x13bd, U+0153, KEY_oe, LATIN SMALL LIGATURE OE */
	0x3aec, /*  682, 0x13be, U+0178, KEY_Ydiaeresis, LATIN CAPITAL LETTER Y WITH DIAERESIS */
	0x6611, /* 1107, 0x9df, KEY_blank */
	0x0000,
	0x6624, /* 1108, 0x9e0, U+25c6, KEY_soliddiamond, BLACK DIAMOND */
	0x0000,
	0x0000,
	0x0000,
	0xdf30, /* 2268, 0x1008fe23, KEY_XF86Prev_VMode, prev. video mode available */
	0x0000,
	0xa3b5, /* 1718, 0x1002074, U+2074, KEY_foursuperior, SUPERSCRIPT FOUR */
	0x0000,
	0x0000,
	0x0000,
	0xa3e9, /* 1720, 0x1002076, U+2076, KEY_sixsuperior, SUPERSCRIPT SIX */
	0x0000,
	0x0000,
	0x0000,
	0x1cdc, /*  312, 0xfd01, KEY_3270_Duplicate */
	0x1cf8, /*  313, 0xfd02, KEY_3270_FieldMark */
	0x1d14, /*  314, 0xfd03, KEY_3270_Right2 */
	0x1d2d, /*  315, 0xfd04, KEY_3270_Left2 */
	0x1d45, /*  316, 0xfd05, KEY_3270_BackTab */
	0x1d5f, /*  317, 0xfd06, KEY_3270_EraseEOF */
	0x1d7a, /*  318, 0xfd07, KEY_3270_EraseInput */
	0x1d97, /*  319, 0xfd08, KEY_3270_Reset */
	0x1daf, /*  320, 0xfd09, KEY_3270_Quit */
	0x1dc6, /*  321, 0xfd0a, KEY_3270_PA1 */
	0x1ddc, /*  322, 0xfd0b, KEY_3270_PA2 */
	0x1df2, /*  323, 0xfd0c, KEY_3270_PA3 */
	0x1e08, /*  324, 0xfd0d, KEY_3270_Test */
	0x1e1f, /*  325, 0xfd0e, KEY_3270_Attn */
	0x1e36, /*  326, 0xfd0f, KEY_3270_CursorBlink */
	0x1e54, /*  327, 0xfd10, KEY_3270_AltCursor */
	0x1e70, /*  328, 0xfd11, KEY_3270_KeyClick */
	0x1e8b, /*  329, 0xfd12, KEY_3270_Jump */
	0x1ea2, /*  330, 0xfd13, KEY_3270_Ident */
	0x1eba, /*  331, 0xfd14, KEY_3270_Rule */
	0x1ed1, /*  332, 0xfd15, KEY_3270_Copy */
	0x1ee8, /*  333, 0xfd16, KEY_3270_Play */
	0x1eff, /*  334, 0xfd17, KEY_3270_Setup */
	0x1f17, /*  335, 0xfd18, KEY_3270_Record */
	0x1f30, /*  336, 0xfd19, KEY_3270_ChangeScreen */
	0x1f4f, /*  337, 0xfd1a, KEY_3270_DeleteWord */
	0x1f6c, /*  338, 0xfd1b, KEY_3270_ExSelect */
	0x1f87, /*  339, 0xfd1c, KEY_3270_CursorSelect */
	0x1fa6, /*  340, 0xfd1d, KEY_3270_PrintScreen */
	0x1fc4, /*  341, 0xfd1e, KEY_3270_Enter */
	0x59d5, /*  989, 0x7a7, U+038c, KEY_Greek_OMICRONaccent, GREEK CAPITAL LETTER OMICRON WITH TONOS */
	0x59f6, /*  990, 0x7a8, U+038e, KEY_Greek_UPSILONaccent, GREEK CAPITAL LETTER UPSILON WITH TONOS */
	0x5a17, /*  991, 0x7a9, U+03ab, KEY_Greek_UPSILONdieresis, GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
	0x0000,
	0x5a3a, /*  992, 0x7ab, U+038f, KEY_Greek_OMEGAaccent, GREEK CAPITAL LETTER OMEGA WITH TONOS */
	0x0000,
	0x0000,
	0x5a59, /*  993, 0x7ae, U+0385, KEY_Greek_accentdieresis, GREEK DIALYTIKA TONOS */
	0x5a7b, /*  994, 0x7af, U+2015, KEY_Greek_horizbar, HORIZONTAL BAR */
	0x0000,
	0x5a97, /*  995, 0x7b1, U+03ac, KEY_Greek_alphaaccent, GREEK SMALL LETTER ALPHA WITH TONOS */
	0x5ab6, /*  996, 0x7b2, U+03ad, KEY_Greek_epsilonaccent, GREEK SMALL LETTER EPSILON WITH TONOS */
	0x5ad7, /*  997, 0x7b3, U+03ae, KEY_Greek_etaaccent, GREEK SMALL LETTER ETA WITH TONOS */
	0x5af4, /*  998, 0x7b4, U+03af, KEY_Greek_iotaaccent, GREEK SMALL LETTER IOTA WITH TONOS */
	0x5b12, /*  999, 0x7b5, U+03ca, KEY_Greek_iotadieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA */
	0x5b32, /* 1000, 0x7b6, U+0390, KEY_Greek_iotaaccentdieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
	0x5b58, /* 1001, 0x7b7, U+03cc, KEY_Greek_omicronaccent, GREEK SMALL LETTER OMICRON WITH TONOS */
	0x5b79, /* 1002, 0x7b8, U+03cd, KEY_Greek_upsilonaccent, GREEK SMALL LETTER UPSILON WITH TONOS */
	0x5b9a, /* 1003, 0x7b9, U+03cb, KEY_Greek_upsilondieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
	0x5bbd, /* 1004, 0x7ba, U+03b0, KEY_Greek_upsilonaccentdieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
	0x5be6, /* 1005, 0x7bb, U+03ce, KEY_Greek_omegaaccent, GREEK SMALL LETTER OMEGA WITH TONOS */
	0x0000,
	0x0000,
	0x0000,
	0x99a6, /* 1615, 0x1001ea3, U+1ea3, KEY_ahook, LATIN SMALL LETTER A WITH HOOK ABOVE */
	0x0000,
	0x5c05, /* 1006, 0x7c1, U+0391, KEY_Greek_ALPHA, GREEK CAPITAL LETTER ALPHA */
	0x5c1e, /* 1007, 0x7c2, U+0392, KEY_Greek_BETA, GREEK CAPITAL LETTER BETA */
	0x5c36, /* 1008, 0x7c3, U+0393, KEY_Greek_GAMMA, GREEK CAPITAL LETTER GAMMA */
	0x5c4f, /* 1009, 0x7c4, U+0394, KEY_Greek_DELTA, GREEK CAPITAL LETTER DELTA */
	0x5c68, /* 1010, 0x7c5, U+0395, KEY_Greek_EPSILON, GREEK CAPITAL LETTER EPSILON */
	0x5c83, /* 1011, 0x7c6, U+0396, KEY_Greek_ZETA, GREEK CAPITAL LETTER ZETA */
	0x5c9b, /* 1012, 0x7c7, U+0397, KEY_Greek_ETA, GREEK CAPITAL LETTER ETA */
	0x5cb2, /* 1013, 0x7c8, U+0398, KEY_Greek_THETA, GREEK CAPITAL LETTER THETA */
	0x5ccb, /* 1014, 0x7c9, U+0399, KEY_Greek_IOTA, GREEK CAPITAL LETTER IOTA */
	0x5ce3, /* 1015, 0x7ca, U+039a, KEY_Greek_KAPPA, GREEK CAPITAL LETTER KAPPA */
	0x5cfc, /* 1016, 0x7cb, U+039b, KEY_Greek_LAMDA, GREEK CAPITAL LETTER LAMDA */
	0x5d2f, /* 1018, 0x7cc, U+039c, KEY_Greek_MU, GREEK CAPITAL LETTER MU */
	0x5d45, /* 1019, 0x7cd, U+039d, KEY_Greek_NU, GREEK CAPITAL LETTER NU */
	0x5d5b, /* 1020, 0x7ce, U+039e, KEY_Greek_XI, GREEK CAPITAL LETTER XI */
	0x5d71, /* 1021, 0x7cf, U+039f, KEY_Greek_OMICRON, GREEK CAPITAL LETTER OMICRON */
	0x5d8c, /* 1022, 0x7d0, U+03a0, KEY_Greek_PI, GREEK CAPITAL LETTER PI */
	0x5da2, /* 1023, 0x7d1, U+03a1, KEY_Greek_RHO, GREEK CAPITAL LETTER RHO */
	0x5db9, /* 1024, 0x7d2, U+03a3, KEY_Greek_SIGMA, GREEK CAPITAL LETTER SIGMA */
	0xe53a, /* 2328, 0x100000af, KEY_hplira */
	0x5dd2, /* 1025, 0x7d4, U+03a4, KEY_Greek_TAU, GREEK CAPITAL LETTER TAU */
	0x5de9, /* 1026, 0x7d5, U+03a5, KEY_Greek_UPSILON, GREEK CAPITAL LETTER UPSILON */
	0x5e04, /* 1027, 0x7d6, U+03a6, KEY_Greek_PHI, GREEK CAPITAL LETTER PHI */
	0x5e1b, /* 1028, 0x7d7, U+03a7, KEY_Greek_CHI, GREEK CAPITAL LETTER CHI */
	0x5e32, /* 1029, 0x7d8, U+03a8, KEY_Greek_PSI, GREEK CAPITAL LETTER PSI */
	0x5e49, /* 1030, 0x7d9, U+03a9, KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */
	0x0000,
	0xc964, /* 2046, 0x1000da5, U+0da5, KEY_Sinh_jnya, SINHALA TAALUJA SANYOOGA NAASIKYAYA */
	0x0000,
	0xe82a, /* 2360, 0x1004ff5d, KEY_osfPrevField */
	0x0000,
	0x9a89, /* 1623, 0x1001eab, U+1eab, KEY_acircumflextilde, LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0x5e62, /* 1031, 0x7e1, U+03b1, KEY_Greek_alpha, GREEK SMALL LETTER ALPHA */
	0x5e7b, /* 1032, 0x7e2, U+03b2, KEY_Greek_beta, GREEK SMALL LETTER BETA */
	0x5e93, /* 1033, 0x7e3, U+03b3, KEY_Greek_gamma, GREEK SMALL LETTER GAMMA */
	0x5eac, /* 1034, 0x7e4, U+03b4, KEY_Greek_delta, GREEK SMALL LETTER DELTA */
	0x5ec5, /* 1035, 0x7e5, U+03b5, KEY_Greek_epsilon, GREEK SMALL LETTER EPSILON */
	0x5ee0, /* 1036, 0x7e6, U+03b6, KEY_Greek_zeta, GREEK SMALL LETTER ZETA */
	0x5ef8, /* 1037, 0x7e7, U+03b7, KEY_Greek_eta, GREEK SMALL LETTER ETA */
	0x5f0f, /* 1038, 0x7e8, U+03b8, KEY_Greek_theta, GREEK SMALL LETTER THETA */
	0x5f28, /* 1039, 0x7e9, U+03b9, KEY_Greek_iota, GREEK SMALL LETTER IOTA */
	0x5f40, /* 1040, 0x7ea, U+03ba, KEY_Greek_kappa, GREEK SMALL LETTER KAPPA */
	0x5f59, /* 1041, 0x7eb, U+03bb, KEY_Greek_lamda, GREEK SMALL LETTER LAMDA */
	0x5f8c, /* 1043, 0x7ec, U+03bc, KEY_Greek_mu, GREEK SMALL LETTER MU */
	0x5fa2, /* 1044, 0x7ed, U+03bd, KEY_Greek_nu, GREEK SMALL LETTER NU */
	0x5fb8, /* 1045, 0x7ee, U+03be, KEY_Greek_xi, GREEK SMALL LETTER XI */
	0x5fce, /* 1046, 0x7ef, U+03bf, KEY_Greek_omicron, GREEK SMALL LETTER OMICRON */
	0x5fe9, /* 1047, 0x7f0, U+03c0, KEY_Greek_pi, GREEK SMALL LETTER PI */
	0x5fff, /* 1048, 0x7f1, U+03c1, KEY_Greek_rho, GREEK SMALL LETTER RHO */
	0x6016, /* 1049, 0x7f2, U+03c3, KEY_Greek_sigma, GREEK SMALL LETTER SIGMA */
	0x602f, /* 1050, 0x7f3, U+03c2, KEY_Greek_finalsmallsigma, GREEK SMALL LETTER FINAL SIGMA */
	0x6052, /* 1051, 0x7f4, U+03c4, KEY_Greek_tau, GREEK SMALL LETTER TAU */
	0x6069, /* 1052, 0x7f5, U+03c5, KEY_Greek_upsilon, GREEK SMALL LETTER UPSILON */
	0x6084, /* 1053, 0x7f6, U+03c6, KEY_Greek_phi, GREEK SMALL LETTER PHI */
	0x609b, /* 1054, 0x7f7, U+03c7, KEY_Greek_chi, GREEK SMALL LETTER CHI */
	0x60b2, /* 1055, 0x7f8, U+03c8, KEY_Greek_psi, GREEK SMALL LETTER PSI */
	0x60c9, /* 1056, 0x7f9, U+03c9, KEY_Greek_omega, GREEK SMALL LETTER OMEGA */
	0xdfed, /* 2275, 0x1005ff04, KEY_SunFA_Diaeresis */
	0xe00a, /* 2276, 0x1005ff05, KEY_SunFA_Cedilla */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd0f6, /* 2126, 0x1008ff29, KEY_XF86Refresh, Refresh the page */
	0x0000,
	0xe8e2, /* 2368, 0x1004ff71, KEY_osfSelectAll */
	0x8973, /* 1455, 0xef2, KEY_Hangul_PanSios */
	0xe039, /* 2278, 0x1005ff11, KEY_SunF37, Labeled F12 */
	0x0000,
	0xe918, /* 2370, 0x1004ff73, KEY_osfReselect */
	0xd10f, /* 2127, 0x1008ff2a, KEY_XF86PowerOff, Power off system entirely */
	0xca18, /* 2054, 0x1000dad, U+0dad, KEY_Sinh_tha, SINHALA TAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd129, /* 2128, 0x1008ff2b, KEY_XF86WakeUp, Wake up system from sleep */
	0xe565, /* 2330, 0x100000ee, KEY_hpYdiaeresis */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe591, /* 2332, 0x100000f6, KEY_hplongminus */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xb76a, /* 1890, 0x1002883, U+2883, KEY_braille_dots_128, BRAILLE PATTERN DOTS-128 */
	0xa385, /* 1716, 0x20ac, U+20ac, KEY_EuroSign, EURO SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8a99, /* 1464, 0xeff, KEY_Korean_Won, (U+20A9 WON SIGN) */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9394, /* 1551, 0x1000585, U+0585, KEY_Armenian_o, ARMENIAN SMALL LETTER OH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd1bc, /* 2134, 0x1008ff31, KEY_XF86AudioPause, Pause audio playing */
	0x0000,
	0xb0d6, /* 1836, 0x100284d, U+284d, KEY_braille_dots_1347, BRAILLE PATTERN DOTS-1347 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xace8, /* 1803, 0x100282c, U+282c, KEY_braille_dots_346, BRAILLE PATTERN DOTS-346 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xdd65, /* 2252, 0x1008ffb1, KEY_XF86TouchpadOff, The touchpad got switched off */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe04d, /* 2279, 0x1005ff60, KEY_SunSys_Req */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe6c6, /* 2345, 0x1004ff41, KEY_osfPageUp */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd25d, /* 2140, 0x1008ff37, KEY_XF86History, Show history of web surfing */
	0xce5d, /* 2101, 0x1008ff10, KEY_XF86Standby, System into standby mode */
	0xe14e, /* 2290, 0x1005ff71, KEY_SunFront */
	0xe164, /* 2291, 0x1005ff72, KEY_SunCopy */
	0xe179, /* 2292, 0x1005ff73, KEY_SunOpen */
	0xe18e, /* 2293, 0x1005ff74, KEY_SunPaste */
	0xda8d, /* 2224, 0x1008ff8f, KEY_XF86WebCam, Launch web camera app. */
	0xe1b8, /* 2295, 0x1005ff76, KEY_SunPowerSwitch */
	0xe1d4, /* 2296, 0x1005ff77, KEY_SunAudioLowerVolume */
	0xe1f5, /* 2297, 0x1005ff78, KEY_SunAudioMute */
	0xe20f, /* 2298, 0x1005ff79, KEY_SunAudioRaiseVolume */
	0xb878, /* 1899, 0x100288c, U+288c, KEY_braille_dots_348, BRAILLE PATTERN DOTS-348 */
	0xe24d, /* 2300, 0x1005ff7b, KEY_SunVideoLowerBrightness */
	0xe272, /* 2301, 0x1005ff7c, KEY_SunVideoRaiseBrightness */
	0xe297, /* 2302, 0x1005ff7d, KEY_SunPowerSwitchShift */
	0x0000,
	0xa860, /* 1764, 0x1002805, U+2805, KEY_braille_dots_13, BRAILLE PATTERN DOTS-13 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcf26, /* 2108, 0x1008ff17, KEY_XF86AudioNext, Next track */
	0x0000,
	0xb714, /* 1887, 0x1002880, U+2880, KEY_braille_dots_8, BRAILLE PATTERN DOTS-8 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcf88, /* 2112, 0x1008ff1b, KEY_XF86Search, Search */
	0x0000,
	0x0d30, /*  172, 0xfe01, KEY_ISO_Lock */
	0x0d46, /*  173, 0xfe02, KEY_ISO_Level2_Latch */
	0x0d64, /*  174, 0xfe03, KEY_ISO_Level3_Shift */
	0x0d82, /*  175, 0xfe04, KEY_ISO_Level3_Latch */
	0x0da0, /*  176, 0xfe05, KEY_ISO_Level3_Lock */
	0x0e33, /*  181, 0xfe06, KEY_ISO_Group_Latch */
	0x0e50, /*  182, 0xfe07, KEY_ISO_Group_Lock */
	0x0e6c, /*  183, 0xfe08, KEY_ISO_Next_Group */
	0x0e88, /*  184, 0xfe09, KEY_ISO_Next_Group_Lock */
	0x0ea9, /*  185, 0xfe0a, KEY_ISO_Prev_Group */
	0x0ec5, /*  186, 0xfe0b, KEY_ISO_Prev_Group_Lock */
	0x0ee6, /*  187, 0xfe0c, KEY_ISO_First_Group */
	0x0f03, /*  188, 0xfe0d, KEY_ISO_First_Group_Lock */
	0x0f25, /*  189, 0xfe0e, KEY_ISO_Last_Group */
	0x0f41, /*  190, 0xfe0f, KEY_ISO_Last_Group_Lock */
	0x0000,
	0x0dbd, /*  177, 0xfe11, KEY_ISO_Level5_Shift */
	0x0ddb, /*  178, 0xfe12, KEY_ISO_Level5_Latch */
	0x0df9, /*  179, 0xfe13, KEY_ISO_Level5_Lock */
	0x0000,
	0xc88b, /* 2036, 0x1000d9b, U+0d9b, KEY_Sinh_kha, SINHALA MAHA. KAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x60fc, /* 1058, 0x8a1, U+23b7, KEY_leftradical, RADICAL SYMBOL BOTTOM */
	0x6115, /* 1059, 0x8a2, KEY_topleftradical, (U+250C BOX DRAWINGS LIGHT DOWN AND RIGHT) */
	0x6131, /* 1060, 0x8a3, KEY_horizconnector, (U+2500 BOX DRAWINGS LIGHT HORIZONTAL) */
	0x614d, /* 1061, 0x8a4, U+2320, KEY_topintegral, TOP HALF INTEGRAL */
	0x6166, /* 1062, 0x8a5, U+2321, KEY_botintegral, BOTTOM HALF INTEGRAL */
	0x617f, /* 1063, 0x8a6, KEY_vertconnector, (U+2502 BOX DRAWINGS LIGHT VERTICAL) */
	0x619a, /* 1064, 0x8a7, U+23a1, KEY_topleftsqbracket, LEFT SQUARE BRACKET UPPER CORNER */
	0x0f62, /*  191, 0xfe20, KEY_ISO_Left_Tab */
	0x0f7c, /*  192, 0xfe21, KEY_ISO_Move_Line_Up */
	0x0f9a, /*  193, 0xfe22, KEY_ISO_Move_Line_Down */
	0x0fba, /*  194, 0xfe23, KEY_ISO_Partial_Line_Up */
	0x0fdb, /*  195, 0xfe24, KEY_ISO_Partial_Line_Down */
	0x0ffe, /*  196, 0xfe25, KEY_ISO_Partial_Space_Left */
	0x1022, /*  197, 0xfe26, KEY_ISO_Partial_Space_Right */
	0x1047, /*  198, 0xfe27, KEY_ISO_Set_Margin_Left */
	0x1068, /*  199, 0xfe28, KEY_ISO_Set_Margin_Right */
	0x108a, /*  200, 0xfe29, KEY_ISO_Release_Margin_Left */
	0x10af, /*  201, 0xfe2a, KEY_ISO_Release_Margin_Right */
	0x10d5, /*  202, 0xfe2b, KEY_ISO_Release_Both_Margins */
	0x10fb, /*  203, 0xfe2c, KEY_ISO_Fast_Cursor_Left */
	0x111d, /*  204, 0xfe2d, KEY_ISO_Fast_Cursor_Right */
	0x1140, /*  205, 0xfe2e, KEY_ISO_Fast_Cursor_Up */
	0x1160, /*  206, 0xfe2f, KEY_ISO_Fast_Cursor_Down */
	0x1182, /*  207, 0xfe30, KEY_ISO_Continuous_Underline */
	0x11a8, /*  208, 0xfe31, KEY_ISO_Discontinuous_Underline */
	0x11d1, /*  209, 0xfe32, KEY_ISO_Emphasize */
	0x11ec, /*  210, 0xfe33, KEY_ISO_Center_Object */
	0x120b, /*  211, 0xfe34, KEY_ISO_Enter */
	0x63cc, /* 1082, 0x8bd, U+2260, KEY_notequal, NOT EQUAL TO */
	0x63e2, /* 1083, 0x8be, U+2265, KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */
	0x6400, /* 1084, 0x8bf, U+222b, KEY_integral, INTEGRAL */
	0x6416, /* 1085, 0x8c0, U+2234, KEY_therefore, THEREFORE */
	0x642d, /* 1086, 0x8c1, U+221d, KEY_variation, PROPORTIONAL TO */
	0x6444, /* 1087, 0x8c2, U+221e, KEY_infinity, INFINITY */
	0xd18a, /* 2132, 0x1008ff2f, KEY_XF86Sleep, Put system to sleep */
	0x0000,
	0x645a, /* 1088, 0x8c5, U+2207, KEY_nabla, NABLA */
	0x0000,
	0x0000,
	0x646d, /* 1089, 0x8c8, U+223c, KEY_approximate, TILDE OPERATOR */
	0x6486, /* 1090, 0x8c9, U+2243, KEY_similarequal, ASYMPTOTICALLY EQUAL TO */
	0x0000,
	0xe741, /* 2350, 0x1004ff51, KEY_osfLeft */
	0x0000,
	0x64a0, /* 1091, 0x8cd, U+21d4, KEY_ifonlyif, LEFT RIGHT DOUBLE ARROW */
	0x64b6, /* 1092, 0x8ce, U+21d2, KEY_implies, RIGHTWARDS DOUBLE ARROW */
	0x64cb, /* 1093, 0x8cf, U+2261, KEY_identical, IDENTICAL TO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd22c, /* 2138, 0x1008ff35, KEY_XF86LightBulb, Light bulb keys exist */
	0x64e2, /* 1094, 0x8d6, U+221a, KEY_radical, SQUARE ROOT */
	0x0000,
	0x1222, /*  212, 0xfe50, KEY_dead_grave */
	0x123a, /*  213, 0xfe51, KEY_dead_acute */
	0x1252, /*  214, 0xfe52, KEY_dead_circumflex */
	0x126f, /*  215, 0xfe53, KEY_dead_tilde */
	0x12a5, /*  217, 0xfe54, KEY_dead_macron */
	0x12be, /*  218, 0xfe55, KEY_dead_breve */
	0x12d6, /*  219, 0xfe56, KEY_dead_abovedot */
	0x12f1, /*  220, 0xfe57, KEY_dead_diaeresis */
	0x130d, /*  221, 0xfe58, KEY_dead_abovering */
	0x1329, /*  222, 0xfe59, KEY_dead_doubleacute */
	0x1347, /*  223, 0xfe5a, KEY_dead_caron */
	0x135f, /*  224, 0xfe5b, KEY_dead_cedilla */
	0x1379, /*  225, 0xfe5c, KEY_dead_ogonek */
	0x1392, /*  226, 0xfe5d, KEY_dead_iota */
	0x13a9, /*  227, 0xfe5e, KEY_dead_voiced_sound */
	0x13c8, /*  228, 0xfe5f, KEY_dead_semivoiced_sound */
	0x13eb, /*  229, 0xfe60, KEY_dead_belowdot */
	0x1406, /*  230, 0xfe61, KEY_dead_hook */
	0x141d, /*  231, 0xfe62, KEY_dead_horn */
	0x1434, /*  232, 0xfe63, KEY_dead_stroke */
	0x144d, /*  233, 0xfe64, KEY_dead_abovecomma */
	0x1482, /*  235, 0xfe65, KEY_dead_abovereversedcomma */
	0x14bf, /*  237, 0xfe66, KEY_dead_doublegrave */
	0x14dd, /*  238, 0xfe67, KEY_dead_belowring */
	0x14f9, /*  239, 0xfe68, KEY_dead_belowmacron */
	0x1517, /*  240, 0xfe69, KEY_dead_belowcircumflex */
	0x1539, /*  241, 0xfe6a, KEY_dead_belowtilde */
	0x1556, /*  242, 0xfe6b, KEY_dead_belowbreve */
	0x1573, /*  243, 0xfe6c, KEY_dead_belowdiaeresis */
	0x1594, /*  244, 0xfe6d, KEY_dead_invertedbreve */
	0x15b4, /*  245, 0xfe6e, KEY_dead_belowcomma */
	0x15d1, /*  246, 0xfe6f, KEY_dead_currency */
	0x17ad, /*  265, 0xfe70, KEY_AccessX_Enable */
	0x17c9, /*  266, 0xfe71, KEY_AccessX_Feedback_Enable */
	0x17ee, /*  267, 0xfe72, KEY_RepeatKeys_Enable */
	0x180d, /*  268, 0xfe73, KEY_SlowKeys_Enable */
	0x182a, /*  269, 0xfe74, KEY_BounceKeys_Enable */
	0x1849, /*  270, 0xfe75, KEY_StickyKeys_Enable */
	0x1868, /*  271, 0xfe76, KEY_MouseKeys_Enable */
	0x1886, /*  272, 0xfe77, KEY_MouseKeys_Accel_Enable */
	0x18aa, /*  273, 0xfe78, KEY_Overlay1_Enable */
	0x18c7, /*  274, 0xfe79, KEY_Overlay2_Enable */
	0x18e4, /*  275, 0xfe7a, KEY_AudibleBell_Enable */
	0xe7c6, /* 2356, 0x1004ff59, KEY_osfEndData */
	0xb74d, /* 1889, 0x1002882, U+2882, KEY_braille_dots_28, BRAILLE PATTERN DOTS-28 */
	0xac8d, /* 1800, 0x1002829, U+2829, KEY_braille_dots_146, BRAILLE PATTERN DOTS-146 */
	0x0000,
	0x0000,
	0x15ec, /*  247, 0xfe80, KEY_dead_a */
	0x1600, /*  248, 0xfe81, KEY_dead_A */
	0x1614, /*  249, 0xfe82, KEY_dead_e */
	0x1628, /*  250, 0xfe83, KEY_dead_E */
	0x163c, /*  251, 0xfe84, KEY_dead_i */
	0x1650, /*  252, 0xfe85, KEY_dead_I */
	0x1664, /*  253, 0xfe86, KEY_dead_o */
	0x1678, /*  254, 0xfe87, KEY_dead_O */
	0x168c, /*  255, 0xfe88, KEY_dead_u */
	0x16a0, /*  256, 0xfe89, KEY_dead_U */
	0x16b4, /*  257, 0xfe8a, KEY_dead_small_schwa */
	0x16d2, /*  258, 0xfe8b, KEY_dead_capital_schwa */
	0x16f2, /*  259, 0xfe8c, KEY_dead_greek */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa5c5, /* 1738, 0x100220b, U+220b, KEY_containsas, CONTAINS AS MEMBER */
	0x0000,
	0x9926, /* 1609, 0x1000292, U+0292, KEY_ezh, LATIN SMALL LETTER EZH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe960, /* 2373, 0x1004ffff, KEY_osfDelete */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x1c79, /*  306, 0xfea0, KEY_ch */
	0x1c89, /*  307, 0xfea1, KEY_Ch */
	0x1c99, /*  308, 0xfea2, KEY_CH */
	0x1ca9, /*  309, 0xfea3, KEY_c_h */
	0x1cba, /*  310, 0xfea4, KEY_C_h */
	0x1ccb, /*  311, 0xfea5, KEY_C_H */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe5d4, /* 2335, 0x1004ff03, KEY_osfCut */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe495, /* 2322, 0x1000ff6e, KEY_hpUser */
	0x0000,
	0x0000,
	0x0000,
	0x980c, /* 1595, 0x100012c, U+012c, KEY_Ibreve, LATIN CAPITAL LETTER I WITH BREVE */
	0x9889, /* 1601, 0x100012d, U+012d, KEY_ibreve, LATIN SMALL LETTER I WITH BREVE */
	0x0000,
	0xe386, /* 2311, 0x1000ff6f, KEY_hpClearLine */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe39f, /* 2312, 0x1000ff70, KEY_hpInsertLine */
	0x0000,
	0x0000,
	0x0000,
	0x170a, /*  260, 0xfed0, KEY_First_Virtual_Screen */
	0x172c, /*  261, 0xfed1, KEY_Prev_Virtual_Screen */
	0x174d, /*  262, 0xfed2, KEY_Next_Virtual_Screen */
	0xc6e9, /* 2016, 0x1000d83, U+0d83, KEY_Sinh_h2, SINHALA VISARGAYA */
	0x176e, /*  263, 0xfed4, KEY_Last_Virtual_Screen */
	0x178f, /*  264, 0xfed5, KEY_Terminate_Server */
	0xc712, /* 2018, 0x1000d86, U+0d86, KEY_Sinh_aa, SINHALA AAYANNA */
	0xc727, /* 2019, 0x1000d87, U+0d87, KEY_Sinh_ae, SINHALA AEYANNA */
	0xa80b, /* 1761, 0x1002802, U+2802, KEY_braille_dots_2, BRAILLE PATTERN DOTS-2 */
	0xc752, /* 2021, 0x1000d89, U+0d89, KEY_Sinh_i, SINHALA IYANNA */
	0xc766, /* 2022, 0x1000d8a, U+0d8a, KEY_Sinh_ii, SINHALA IIYANNA */
	0xb6d1, /* 1885, 0x100287e, U+287e, KEY_braille_dots_234567, BRAILLE PATTERN DOTS-234567 */
	0xc78f, /* 2024, 0x1000d8c, U+0d8c, KEY_Sinh_uu, SINHALA UUYANNA */
	0xc7a4, /* 2025, 0x1000d8d, U+0d8d, KEY_Sinh_ri, SINHALA IRUYANNA */
	0xc7b9, /* 2026, 0x1000d8e, U+0d8e, KEY_Sinh_rii, SINHALA IRUUYANNA */
	0xc7cf, /* 2027, 0x1000d8f, U+0d8f, KEY_Sinh_lu, SINHALA ILUYANNA */
	0x1904, /*  276, 0xfee0, KEY_Pointer_Left */
	0x191e, /*  277, 0xfee1, KEY_Pointer_Right */
	0x1939, /*  278, 0xfee2, KEY_Pointer_Up */
	0x1951, /*  279, 0xfee3, KEY_Pointer_Down */
	0x196b, /*  280, 0xfee4, KEY_Pointer_UpLeft */
	0x1987, /*  281, 0xfee5, KEY_Pointer_UpRight */
	0x19a4, /*  282, 0xfee6, KEY_Pointer_DownLeft */
	0x19c2, /*  283, 0xfee7, KEY_Pointer_DownRight */
	0x19e1, /*  284, 0xfee8, KEY_Pointer_Button_Dflt */
	0x1a02, /*  285, 0xfee9, KEY_Pointer_Button1 */
	0x1a1f, /*  286, 0xfeea, KEY_Pointer_Button2 */
	0x1a3c, /*  287, 0xfeeb, KEY_Pointer_Button3 */
	0x1a59, /*  288, 0xfeec, KEY_Pointer_Button4 */
	0x1a76, /*  289, 0xfeed, KEY_Pointer_Button5 */
	0x1a93, /*  290, 0xfeee, KEY_Pointer_DblClick_Dflt */
	0x1ab6, /*  291, 0xfeef, KEY_Pointer_DblClick1 */
	0x1ad5, /*  292, 0xfef0, KEY_Pointer_DblClick2 */
	0x1af4, /*  293, 0xfef1, KEY_Pointer_DblClick3 */
	0x1b13, /*  294, 0xfef2, KEY_Pointer_DblClick4 */
	0x1b32, /*  295, 0xfef3, KEY_Pointer_DblClick5 */
	0x1b51, /*  296, 0xfef4, KEY_Pointer_Drag_Dflt */
	0x1b70, /*  297, 0xfef5, KEY_Pointer_Drag1 */
	0x1b8b, /*  298, 0xfef6, KEY_Pointer_Drag2 */
	0x1ba6, /*  299, 0xfef7, KEY_Pointer_Drag3 */
	0x1bc1, /*  300, 0xfef8, KEY_Pointer_Drag4 */
	0x1bf7, /*  302, 0xfef9, KEY_Pointer_EnableKeys */
	0x1c17, /*  303, 0xfefa, KEY_Pointer_Accelerate */
	0x1c37, /*  304, 0xfefb, KEY_Pointer_DfltBtnNext */
	0x1c58, /*  305, 0xfefc, KEY_Pointer_DfltBtnPrev */
	0x1bdc, /*  301, 0xfefd, KEY_Pointer_Drag5 */
	0xca2e, /* 2055, 0x1000dae, U+0dae, KEY_Sinh_thha, SINHALA MAHA. TAYANNA */
	0xca45, /* 2056, 0x1000daf, U+0daf, KEY_Sinh_dha, SINHALA DAYANNA */
	0xca5b, /* 2057, 0x1000db0, U+0db0, KEY_Sinh_dhha, SINHALA MAHA. DAYANNA */
	0xca72, /* 2058, 0x1000db1, U+0db1, KEY_Sinh_na, SINHALA DANTAJA NAYANNA */
	0x0000,
	0xca87, /* 2059, 0x1000db3, U+0db3, KEY_Sinh_ndha, SINHALA SANYAKA DAYANNA */
	0xca9e, /* 2060, 0x1000db4, U+0db4, KEY_Sinh_pa, SINHALA PAYANNA */
	0xcab3, /* 2061, 0x1000db5, U+0db5, KEY_Sinh_pha, SINHALA MAHA. PAYANNA */
	0xcac9, /* 2062, 0x1000db6, U+0db6, KEY_Sinh_ba, SINHALA BAYANNA */
	0xcade, /* 2063, 0x1000db7, U+0db7, KEY_Sinh_bha, SINHALA MAHA. BAYANNA */
	0x0019, /*    1, 0xff08, KEY_BackSpace, Back space, back char */
	0x0030, /*    2, 0xff09, KEY_Tab */
	0x0041, /*    3, 0xff0a, KEY_Linefeed, Linefeed, LF */
	0x0057, /*    4, 0xff0b, KEY_Clear */
	0x38b0, /*  656, 0x1000176, U+0176, KEY_Ycircumflex, LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
	0x006a, /*    5, 0xff0d, KEY_Return, Return, enter */
	0x0000,
	0x0000,
	0xcb5e, /* 2069, 0x1000dc0, U+0dc0, KEY_Sinh_va, SINHALA VAYANNA */
	0xcb73, /* 2070, 0x1000dc1, U+0dc1, KEY_Sinh_sha, SINHALA TAALUJA SAYANNA */
	0xcb89, /* 2071, 0x1000dc2, U+0dc2, KEY_Sinh_ssha, SINHALA MUURDHAJA SAYANNA */
	0x007e, /*    6, 0xff13, KEY_Pause, Pause, hold */
	0x0091, /*    7, 0xff14, KEY_Scroll_Lock */
	0x00aa, /*    8, 0xff15, KEY_Sys_Req */
	0xcbe0, /* 2075, 0x1000dc6, U+0dc6, KEY_Sinh_fa, SINHALA FAYANNA */
	0xcfa0, /* 2113, 0x1008ff1c, KEY_XF86AudioRecord, Record audio application */
	0x9965, /* 1612, 0x1001ea0, U+1ea0, KEY_Abelowdot, LATIN CAPITAL LETTER A WITH DOT BELOW */
	0x0000,
	0xcbf5, /* 2076, 0x1000dca, U+0dca, KEY_Sinh_al, SINHALA AL-LAKUNA */
	0x00bf, /*    9, 0xff1b, KEY_Escape */
	0x0000,
	0xe46a, /* 2320, 0x1000ff6c, KEY_hpReset */
	0x0000,
	0xcc0a, /* 2077, 0x1000dcf, U+0dcf, KEY_Sinh_aa2, SINHALA AELA-PILLA */
	0x00e7, /*   11, 0xff20, KEY_Multi_key, Multi-key character compose */
	0x0170, /*   16, 0xff21, KEY_Kanji, Kanji, Kanji convert */
	0x0183, /*   17, 0xff22, KEY_Muhenkan, Cancel Conversion */
	0x0199, /*   18, 0xff23, KEY_Henkan_Mode, Start/Stop Conversion */
	0x01c6, /*   20, 0xff24, KEY_Romaji, to Romaji */
	0x01da, /*   21, 0xff25, KEY_Hiragana, to Hiragana */
	0x01f0, /*   22, 0xff26, KEY_Katakana, to Katakana */
	0x0206, /*   23, 0xff27, KEY_Hiragana_Katakana, Hiragana/Katakana toggle */
	0x0225, /*   24, 0xff28, KEY_Zenkaku, to Zenkaku */
	0x023a, /*   25, 0xff29, KEY_Hankaku, to Hankaku */
	0x024f, /*   26, 0xff2a, KEY_Zenkaku_Hankaku, Zenkaku/Hankaku toggle */
	0x026c, /*   27, 0xff2b, KEY_Touroku, Add to Dictionary */
	0x0281, /*   28, 0xff2c, KEY_Massyo, Delete from Dictionary */
	0x0295, /*   29, 0xff2d, KEY_Kana_Lock, Kana Lock */
	0x02ac, /*   30, 0xff2e, KEY_Kana_Shift, Kana Shift */
	0x02c4, /*   31, 0xff2f, KEY_Eisu_Shift, Alphanumeric Shift */
	0x02dc, /*   32, 0xff30, KEY_Eisu_toggle, Alphanumeric toggle */
	0x7ebf, /* 1358, 0xff31, KEY_Hangul, Hangul start/stop(toggle) */
	0x7ed3, /* 1359, 0xff32, KEY_Hangul_Start, Hangul start */
	0x7eed, /* 1360, 0xff33, KEY_Hangul_End, Hangul end, English start */
	0x7f05, /* 1361, 0xff34, KEY_Hangul_Hanja, Start Hangul->Hanja Conversion */
	0x7f1f, /* 1362, 0xff35, KEY_Hangul_Jamo, Hangul Jamo mode */
	0x7f38, /* 1363, 0xff36, KEY_Hangul_Romaja, Hangul Romaja mode */
	0x00fe, /*   12, 0xff37, KEY_Codeinput */
	0x7f71, /* 1365, 0xff38, KEY_Hangul_Jeonja, Jeonja mode */
	0x7f8c, /* 1366, 0xff39, KEY_Hangul_Banja, Banja mode */
	0x7fa6, /* 1367, 0xff3a, KEY_Hangul_PreHanja, Pre Hanja conversion */
	0x7fc3, /* 1368, 0xff3b, KEY_Hangul_PostHanja, Post Hanja conversion */
	0x0115, /*   13, 0xff3c, KEY_SingleCandidate */
	0x0132, /*   14, 0xff3d, KEY_MultipleCandidate */
	0x0151, /*   15, 0xff3e, KEY_PreviousCandidate */
	0x8051, /* 1372, 0xff3f, KEY_Hangul_Special, Special symbols */
	0x0000,
	0x0000,
	0xcd51, /* 2092, 0x1000df2, U+0df2, KEY_Sinh_ruu2, SINHALA DIGA GAETTA-PILLA */
	0xcd68, /* 2093, 0x1000df3, U+0df3, KEY_Sinh_luu2, SINHALA DIGA GAYANUKITTA */
	0xcd7f, /* 2094, 0x1000df4, U+0df4, KEY_Sinh_kunddaliya, SINHALA KUNDDALIYA */
	0xa249, /* 1702, 0x10001af, U+01af, KEY_Uhorn, LATIN CAPITAL LETTER U WITH HORN */
	0xa25c, /* 1703, 0x10001b0, U+01b0, KEY_uhorn, LATIN SMALL LETTER U WITH HORN */
	0xe646, /* 2340, 0x1004ff1b, KEY_osfEscape */
	0x0000,
	0xd9ff, /* 2218, 0x1008ff89, KEY_XF86Word, Launch word processor */
	0x0000,
	0x9820, /* 1596, 0x10001b5, U+01b5, KEY_Zstroke, LATIN CAPITAL LETTER Z WITH STROKE */
	0x989d, /* 1602, 0x10001b6, U+01b6, KEY_zstroke, LATIN SMALL LETTER Z WITH STROKE */
	0x9915, /* 1608, 0x10001b7, U+01b7, KEY_EZH, LATIN CAPITAL LETTER EZH */
	0x0000,
	0xda2b, /* 2220, 0x1008ff8b, KEY_XF86ZoomIn, zoom in view, map, etc. */
	0x033b, /*   36, 0xff50, KEY_Home */
	0x034d, /*   37, 0xff51, KEY_Left, Move left, left arrow */
	0x035f, /*   38, 0xff52, KEY_Up, Move up, up arrow */
	0x036f, /*   39, 0xff53, KEY_Right, Move right, right arrow */
	0x0382, /*   40, 0xff54, KEY_Down, Move down, down arrow */
	0x0394, /*   41, 0xff55, KEY_Prior, Prior, previous */
	0x03bc, /*   43, 0xff56, KEY_Next, Next */
	0x03e5, /*   45, 0xff57, KEY_End, EOL */
	0x03f6, /*   46, 0xff58, KEY_Begin, BOL */
	0x663e, /* 1109, 0x9e1, U+2592, KEY_checkerboard, MEDIUM SHADE */
	0x6658, /* 1110, 0x9e2, U+2409, KEY_ht, SYMBOL FOR HORIZONTAL TABULATION */
	0x6668, /* 1111, 0x9e3, U+240c, KEY_ff, SYMBOL FOR FORM FEED */
	0x6678, /* 1112, 0x9e4, U+240d, KEY_cr, SYMBOL FOR CARRIAGE RETURN */
	0x6688, /* 1113, 0x9e5, U+240a, KEY_lf, SYMBOL FOR LINE FEED */
	0xe675, /* 2342, 0x1004ff32, KEY_osfPrimaryPaste */
	0xad44, /* 1806, 0x100282f, U+282f, KEY_braille_dots_12346, BRAILLE PATTERN DOTS-12346 */
	0x0409, /*   47, 0xff60, KEY_Select, Select, mark */
	0x041d, /*   48, 0xff61, KEY_Print */
	0x0430, /*   49, 0xff62, KEY_Execute, Execute, run, do */
	0x0445, /*   50, 0xff63, KEY_Insert, Insert, insert here */
	0x66ef, /* 1118, 0x9ec, U+250c, KEY_upleftcorner, BOX DRAWINGS LIGHT DOWN AND RIGHT */
	0x0459, /*   51, 0xff65, KEY_Undo */
	0x046b, /*   52, 0xff66, KEY_Redo, Redo, again */
	0x047d, /*   53, 0xff67, KEY_Menu */
	0x048f, /*   54, 0xff68, KEY_Find, Find, search */
	0x04a1, /*   55, 0xff69, KEY_Cancel, Cancel, stop, abort, exit */
	0x04b5, /*   56, 0xff6a, KEY_Help, Help */
	0x04c7, /*   57, 0xff6b, KEY_Break */
	0x67cb, /* 1126, 0x9f4, U+251c, KEY_leftt, BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
	0x67de, /* 1127, 0x9f5, U+2524, KEY_rightt, BOX DRAWINGS LIGHT VERTICAL AND LEFT */
	0x67f2, /* 1128, 0x9f6, U+2534, KEY_bott, BOX DRAWINGS LIGHT UP AND HORIZONTAL */
	0x6804, /* 1129, 0x9f7, U+252c, KEY_topt, BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
	0x6816, /* 1130, 0x9f8, U+2502, KEY_vertbar, BOX DRAWINGS LIGHT VERTICAL */
	0xe729, /* 2349, 0x1004ff45, KEY_osfMenuBar */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xdb8d, /* 2234, 0x1008ff99, KEY_XF86AudioRandomPlay, toggle shuffle mode */
	0x0000,
	0x0000,
	0x9835, /* 1597, 0x10001e6, U+01e6, KEY_Gcaron, LATIN CAPITAL LETTER G WITH CARON */
	0x98b2, /* 1603, 0x10001e7, U+01e7, KEY_gcaron, LATIN SMALL LETTER G WITH CARON */
	0x04da, /*   58, 0xff7e, KEY_Mode_switch, Character set switch */
	0x050e, /*   60, 0xff7f, KEY_Num_Lock */
	0x0524, /*   61, 0xff80, KEY_KP_Space, Space */
	0x0000,
	0x0000,
	0xd094, /* 2122, 0x1008ff25, KEY_XF86RockerEnter, and let you press them */
	0xe7ac, /* 2355, 0x1004ff58, KEY_osfBeginLine */
	0xdc05, /* 2238, 0x1008ff9d, KEY_XF86FrameBack, video: go one frame back */
	0xe7de, /* 2357, 0x1004ff5a, KEY_osfBeginData */
	0xe7f8, /* 2358, 0x1004ff5b, KEY_osfPrevMenu */
	0xe811, /* 2359, 0x1004ff5c, KEY_osfNextMenu */
	0x053a, /*   62, 0xff89, KEY_KP_Tab */
	0xe844, /* 2361, 0x1004ff5e, KEY_osfNextField */
	0xdc3e, /* 2240, 0x1008ff9f, KEY_XF86Time, display, or shows an entry for time seeking */
	0xe85e, /* 2362, 0x1004ff60, KEY_osfSelect */
	0x054e, /*   63, 0xff8d, KEY_KP_Enter, Enter */
	0x0000,
	0xe875, /* 2363, 0x1004ff63, KEY_osfInsert */
	0x0000,
	0x0564, /*   64, 0xff91, KEY_KP_F1, PF1, KP_A, ... */
	0x0577, /*   65, 0xff92, KEY_KP_F2 */
	0x058a, /*   66, 0xff93, KEY_KP_F3 */
	0x059d, /*   67, 0xff94, KEY_KP_F4 */
	0x05b0, /*   68, 0xff95, KEY_KP_Home */
	0x05c5, /*   69, 0xff96, KEY_KP_Left */
	0x05da, /*   70, 0xff97, KEY_KP_Up */
	0x05ed, /*   71, 0xff98, KEY_KP_Right */
	0x0603, /*   72, 0xff99, KEY_KP_Down */
	0x0618, /*   73, 0xff9a, KEY_KP_Prior */
	0x0646, /*   75, 0xff9b, KEY_KP_Next */
	0x0675, /*   77, 0xff9c, KEY_KP_End */
	0x0689, /*   78, 0xff9d, KEY_KP_Begin */
	0x069f, /*   79, 0xff9e, KEY_KP_Insert */
	0x06b6, /*   80, 0xff9f, KEY_KP_Delete */
	0xe931, /* 2371, 0x1004ff74, KEY_osfExtend */
	0x0000,
	0x0000,
	0xdcf5, /* 2248, 0x1008ffa7, KEY_XF86Suspend, Sleep to RAM */
	0xe948, /* 2372, 0x1004ff78, KEY_osfRestore */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xdd29, /* 2250, 0x1008ffa9, KEY_XF86TouchpadToggle, Toggle between touchpad/trackstick */
	0x06e3, /*   82, 0xffaa, KEY_KP_Multiply */
	0x06fc, /*   83, 0xffab, KEY_KP_Add */
	0x0710, /*   84, 0xffac, KEY_KP_Separator, Separator, often comma */
	0x072a, /*   85, 0xffad, KEY_KP_Subtract */
	0x0743, /*   86, 0xffae, KEY_KP_Decimal */
	0x075b, /*   87, 0xffaf, KEY_KP_Divide */
	0x0772, /*   88, 0xffb0, KEY_KP_0 */
	0x0784, /*   89, 0xffb1, KEY_KP_1 */
	0x0796, /*   90, 0xffb2, KEY_KP_2 */
	0x07a8, /*   91, 0xffb3, KEY_KP_3 */
	0x07ba, /*   92, 0xffb4, KEY_KP_4 */
	0x07cc, /*   93, 0xffb5, KEY_KP_5 */
	0x07de, /*   94, 0xffb6, KEY_KP_6 */
	0x07f0, /*   95, 0xffb7, KEY_KP_7 */
	0x0802, /*   96, 0xffb8, KEY_KP_8 */
	0x0814, /*   97, 0xffb9, KEY_KP_9 */
	0x0000,
	0x0000,
	0x0000,
	0x06cd, /*   81, 0xffbd, KEY_KP_Equal, Equals */
	0x0826, /*   98, 0xffbe, KEY_F1 */
	0x0836, /*   99, 0xffbf, KEY_F2 */
	0x0846, /*  100, 0xffc0, KEY_F3 */
	0x0856, /*  101, 0xffc1, KEY_F4 */
	0x0866, /*  102, 0xffc2, KEY_F5 */
	0x0876, /*  103, 0xffc3, KEY_F6 */
	0x0886, /*  104, 0xffc4, KEY_F7 */
	0x0896, /*  105, 0xffc5, KEY_F8 */
	0x08a6, /*  106, 0xffc6, KEY_F9 */
	0x08b6, /*  107, 0xffc7, KEY_F10 */
	0x08c7, /*  108, 0xffc8, KEY_F11 */
	0x08e8, /*  110, 0xffc9, KEY_F12 */
	0x0909, /*  112, 0xffca, KEY_F13 */
	0x092a, /*  114, 0xffcb, KEY_F14 */
	0x094b, /*  116, 0xffcc, KEY_F15 */
	0x096c, /*  118, 0xffcd, KEY_F16 */
	0x098d, /*  120, 0xffce, KEY_F17 */
	0x09ae, /*  122, 0xffcf, KEY_F18 */
	0x09cf, /*  124, 0xffd0, KEY_F19 */
	0x09f0, /*  126, 0xffd1, KEY_F20 */
	0x0a12, /*  128, 0xffd2, KEY_F21 */
	0x0a33, /*  130, 0xffd3, KEY_F22 */
	0x0a54, /*  132, 0xffd4, KEY_F23 */
	0x0a75, /*  134, 0xffd5, KEY_F24 */
	0x0a96, /*  136, 0xffd6, KEY_F25 */
	0x0ab7, /*  138, 0xffd7, KEY_F26 */
	0x0ad8, /*  140, 0xffd8, KEY_F27 */
	0x0af9, /*  142, 0xffd9, KEY_F28 */
	0x0b1a, /*  144, 0xffda, KEY_F29 */
	0x0b3b, /*  146, 0xffdb, KEY_F30 */
	0x0b5d, /*  148, 0xffdc, KEY_F31 */
	0x0b7f, /*  150, 0xffdd, KEY_F32 */
	0x0ba1, /*  152, 0xffde, KEY_F33 */
	0x0bc3, /*  154, 0xffdf, KEY_F34 */
	0x0be5, /*  156, 0xffe0, KEY_F35 */
	0x0c07, /*  158, 0xffe1, KEY_Shift_L, Left shift */
	0x0c1c, /*  159, 0xffe2, KEY_Shift_R, Right shift */
	0x0c31, /*  160, 0xffe3, KEY_Control_L, Left control */
	0x0c48, /*  161, 0xffe4, KEY_Control_R, Right control */
	0x0c5f, /*  162, 0xffe5, KEY_Caps_Lock, Caps lock */
	0x0c76, /*  163, 0xffe6, KEY_Shift_Lock, Shift lock */
	0x0c8e, /*  164, 0xffe7, KEY_Meta_L, Left meta */
	0x0ca2, /*  165, 0xffe8, KEY_Meta_R, Right meta */
	0x0cb6, /*  166, 0xffe9, KEY_Alt_L, Left alt */
	0x0cc9, /*  167, 0xffea, KEY_Alt_R, Right alt */
	0x0cdc, /*  168, 0xffeb, KEY_Super_L, Left super */
	0x0cf1, /*  169, 0xffec, KEY_Super_R, Right super */
	0x0d06, /*  170, 0xffed, KEY_Hyper_L, Left hyper */
	0x0d1b, /*  171, 0xffee, KEY_Hyper_R, Right hyper */
	0x9902, /* 1607, 0x1000259, U+0259, KEY_schwa, LATIN SMALL LETTER SCHWA */
	0x0000,
	0xa6c5, /* 1749, 0xfff1, KEY_braille_dot_1 */
	0xa6e0, /* 1750, 0xfff2, KEY_braille_dot_2 */
	0xa6fb, /* 1751, 0xfff3, KEY_braille_dot_3 */
	0xa716, /* 1752, 0xfff4, KEY_braille_dot_4 */
	0xa731, /* 1753, 0xfff5, KEY_braille_dot_5 */
	0xa74c, /* 1754, 0xfff6, KEY_braille_dot_6 */
	0xa767, /* 1755, 0xfff7, KEY_braille_dot_7 */
	0xa782, /* 1756, 0xfff8, KEY_braille_dot_8 */
	0xa79d, /* 1757, 0xfff9, KEY_braille_dot_9 */
	0xa7b8, /* 1758, 0xfffa, KEY_braille_dot_10 */
	0x0000,
	0x0000,
	0xb81d, /* 1896, 0x1002889, U+2889, KEY_braille_dots_148, BRAILLE PATTERN DOTS-148 */
	0x0000,
	0x00d3, /*   10, 0xffff, KEY_Delete, Delete, rubout */
	0x0000,
	0xb83b, /* 1897, 0x100288a, U+288a, KEY_braille_dots_248, BRAILLE PATTERN DOTS-248 */
	0xc8f8, /* 2041, 0x1000da0, U+0da0, KEY_Sinh_ca, SINHALA CAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc90d, /* 2042, 0x1000da1, U+0da1, KEY_Sinh_cha, SINHALA MAHA. CAYANNA */
	0x0000,
	0xab64, /* 1790, 0x100281f, U+281f, KEY_braille_dots_12345, BRAILLE PATTERN DOTS-12345 */
	0x0000,
	0x8874, /* 1447, 0xeea, KEY_Hangul_J_Cieuc */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xabda, /* 1794, 0x1002823, U+2823, KEY_braille_dots_126, BRAILLE PATTERN DOTS-126 */
	0x0000,
	0x0000,
	0x0000,
	0xb8d4, /* 1902, 0x100288f, U+288f, KEY_braille_dots_12348, BRAILLE PATTERN DOTS-12348 */
	0x0000,
	0x5919, /*  983, 0x7a1, U+0386, KEY_Greek_ALPHAaccent, GREEK CAPITAL LETTER ALPHA WITH TONOS */
	0x0000,
	0x682b, /* 1131, 0xaa1, U+2003, KEY_emspace, EM SPACE */
	0x6840, /* 1132, 0xaa2, U+2002, KEY_enspace, EN SPACE */
	0x6855, /* 1133, 0xaa3, U+2004, KEY_em3space, THREE-PER-EM SPACE */
	0x686b, /* 1134, 0xaa4, U+2005, KEY_em4space, FOUR-PER-EM SPACE */
	0x6881, /* 1135, 0xaa5, U+2007, KEY_digitspace, FIGURE SPACE */
	0x6899, /* 1136, 0xaa6, U+2008, KEY_punctspace, PUNCTUATION SPACE */
	0x68b1, /* 1137, 0xaa7, U+2009, KEY_thinspace, THIN SPACE */
	0x68c8, /* 1138, 0xaa8, U+200a, KEY_hairspace, HAIR SPACE */
	0x68df, /* 1139, 0xaa9, U+2014, KEY_emdash, EM DASH */
	0x68f3, /* 1140, 0xaaa, U+2013, KEY_endash, EN DASH */
	0xa5ab, /* 1737, 0x1002209, U+2209, KEY_notelementof, NOT AN ELEMENT OF */
	0x6907, /* 1141, 0xaac, KEY_signifblank, (U+2423 OPEN BOX) */
	0xc991, /* 2048, 0x1000da7, U+0da7, KEY_Sinh_tta, SINHALA TTAYANNA */
	0x6920, /* 1142, 0xaae, U+2026, KEY_ellipsis, HORIZONTAL ELLIPSIS */
	0x6936, /* 1143, 0xaaf, U+2025, KEY_doubbaselinedot, TWO DOT LEADER */
	0x6953, /* 1144, 0xab0, U+2153, KEY_onethird, VULGAR FRACTION ONE THIRD */
	0x6969, /* 1145, 0xab1, U+2154, KEY_twothirds, VULGAR FRACTION TWO THIRDS */
	0x6980, /* 1146, 0xab2, U+2155, KEY_onefifth, VULGAR FRACTION ONE FIFTH */
	0x6996, /* 1147, 0xab3, U+2156, KEY_twofifths, VULGAR FRACTION TWO FIFTHS */
	0x69ad, /* 1148, 0xab4, U+2157, KEY_threefifths, VULGAR FRACTION THREE FIFTHS */
	0x69c6, /* 1149, 0xab5, U+2158, KEY_fourfifths, VULGAR FRACTION FOUR FIFTHS */
	0x69de, /* 1150, 0xab6, U+2159, KEY_onesixth, VULGAR FRACTION ONE SIXTH */
	0x69f4, /* 1151, 0xab7, U+215a, KEY_fivesixths, VULGAR FRACTION FIVE SIXTHS */
	0x6a0c, /* 1152, 0xab8, U+2105, KEY_careof, CARE OF */
	0x0000,
	0x0000,
	0x6a20, /* 1153, 0xabb, U+2012, KEY_figdash, FIGURE DASH */
	0x6a35, /* 1154, 0xabc, KEY_leftanglebracket, (U+27E8 MATHEMATICAL LEFT ANGLE BRACKET) */
	0x6a53, /* 1155, 0xabd, KEY_decimalpoint, (U+002E FULL STOP) */
	0x6a6d, /* 1156, 0xabe, KEY_rightanglebracket, (U+27E9 MATHEMATICAL RIGHT ANGLE BRACKET) */
	0x6a8c, /* 1157, 0xabf, KEY_marker */
	0x0000,
	0xc9eb, /* 2052, 0x1000dab, U+0dab, KEY_Sinh_nna, SINHALA MUURDHAJA NAYANNA */
	0x0000,
	0x6aa0, /* 1158, 0xac3, U+215b, KEY_oneeighth, VULGAR FRACTION ONE EIGHTH */
	0x6ab7, /* 1159, 0xac4, U+215c, KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */
	0x6ad1, /* 1160, 0xac5, U+215d, KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */
	0x6aea, /* 1161, 0xac6, U+215e, KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */
	0x0000,
	0x0000,
	0x6b04, /* 1162, 0xac9, U+2122, KEY_trademark, TRADE MARK SIGN */
	0x6b1b, /* 1163, 0xaca, KEY_signaturemark, (U+2613 SALTIRE) */
	0x6b36, /* 1164, 0xacb, KEY_trademarkincircle */
	0x6b55, /* 1165, 0xacc, KEY_leftopentriangle, (U+25C1 WHITE LEFT-POINTING TRIANGLE) */
	0x6b73, /* 1166, 0xacd, KEY_rightopentriangle, (U+25B7 WHITE RIGHT-POINTING TRIANGLE) */
	0x6b92, /* 1167, 0xace, KEY_emopencircle, (U+25CB WHITE CIRCLE) */
	0x6bac, /* 1168, 0xacf, KEY_emopenrectangle, (U+25AF WHITE VERTICAL RECTANGLE) */
	0x6bc9, /* 1169, 0xad0, U+2018, KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */
	0x6bea, /* 1170, 0xad1, U+2019, KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */
	0x6c0c, /* 1171, 0xad2, U+201c, KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */
	0x6c2d, /* 1172, 0xad3, U+201d, KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */
	0x6c4f, /* 1173, 0xad4, U+211e, KEY_prescription, PRESCRIPTION TAKE */
	0x6c69, /* 1174, 0xad5, U+2030, KEY_permille, PER MILLE SIGN */
	0x6c7f, /* 1175, 0xad6, U+2032, KEY_minutes, PRIME */
	0x6c94, /* 1176, 0xad7, U+2033, KEY_seconds, DOUBLE PRIME */
	0x0000,
	0x6ca9, /* 1177, 0xad9, U+271d, KEY_latincross, LATIN CROSS */
	0x6cc1, /* 1178, 0xada, KEY_hexagram */
	0x6cd7, /* 1179, 0xadb, KEY_filledrectbullet, (U+25AC BLACK RECTANGLE) */
	0x6cf5, /* 1180, 0xadc, KEY_filledlefttribullet, (U+25C0 BLACK LEFT-POINTING TRIANGLE) */
	0x6d16, /* 1181, 0xadd, KEY_filledrighttribullet, (U+25B6 BLACK RIGHT-POINTING TRIANGLE) */
	0x6d38, /* 1182, 0xade, KEY_emfilledcircle, (U+25CF BLACK CIRCLE) */
	0x6d54, /* 1183, 0xadf, KEY_emfilledrect, (U+25AE BLACK VERTICAL RECTANGLE) */
	0x6d6e, /* 1184, 0xae0, KEY_enopencircbullet, (U+25E6 WHITE BULLET) */
	0x6d8c, /* 1185, 0xae1, KEY_enopensquarebullet, (U+25AB WHITE SMALL SQUARE) */
	0x6dac, /* 1186, 0xae2, KEY_openrectbullet, (U+25AD WHITE RECTANGLE) */
	0x6dc8, /* 1187, 0xae3, KEY_opentribulletup, (U+25B3 WHITE UP-POINTING TRIANGLE) */
	0x6de5, /* 1188, 0xae4, KEY_opentribulletdown, (U+25BD WHITE DOWN-POINTING TRIANGLE) */
	0x6e04, /* 1189, 0xae5, KEY_openstar, (U+2606 WHITE STAR) */
	0x6e1a, /* 1190, 0xae6, KEY_enfilledcircbullet, (U+2022 BULLET) */
	0x6e3a, /* 1191, 0xae7, KEY_enfilledsqbullet, (U+25AA BLACK SMALL SQUARE) */
	0x6e58, /* 1192, 0xae8, KEY_filledtribulletup, (U+25B2 BLACK UP-POINTING TRIANGLE) */
	0x6e77, /* 1193, 0xae9, KEY_filledtribulletdown, (U+25BC BLACK DOWN-POINTING TRIANGLE) */
	0x6e98, /* 1194, 0xaea, KEY_leftpointer, (U+261C WHITE LEFT POINTING INDEX) */
	0x6eb1, /* 1195, 0xaeb, KEY_rightpointer, (U+261E WHITE RIGHT POINTING INDEX) */
	0x6ecb, /* 1196, 0xaec, U+2663, KEY_club, BLACK CLUB SUIT */
	0x6edd, /* 1197, 0xaed, U+2666, KEY_diamond, BLACK DIAMOND SUIT */
	0x6ef2, /* 1198, 0xaee, U+2665, KEY_heart, BLACK HEART SUIT */
	0xb7e1, /* 1894, 0x1002887, U+2887, KEY_braille_dots_1238, BRAILLE PATTERN DOTS-1238 */
	0x6f05, /* 1199, 0xaf0, U+2720, KEY_maltesecross, MALTESE CROSS */
	0x6f1f, /* 1200, 0xaf1, U+2020, KEY_dagger, DAGGER */
	0x6f33, /* 1201, 0xaf2, U+2021, KEY_doubledagger, DOUBLE DAGGER */
	0x6f4d, /* 1202, 0xaf3, U+2713, KEY_checkmark, CHECK MARK */
	0x6f64, /* 1203, 0xaf4, U+2717, KEY_ballotcross, BALLOT X */
	0x6f7d, /* 1204, 0xaf5, U+266f, KEY_musicalsharp, MUSIC SHARP SIGN */
	0x6f97, /* 1205, 0xaf6, U+266d, KEY_musicalflat, MUSIC FLAT SIGN */
	0x6fb0, /* 1206, 0xaf7, U+2642, KEY_malesymbol, MALE SIGN */
	0x6fc8, /* 1207, 0xaf8, U+2640, KEY_femalesymbol, FEMALE SIGN */
	0x6fe2, /* 1208, 0xaf9, U+260e, KEY_telephone, BLACK TELEPHONE */
	0x6ff9, /* 1209, 0xafa, U+2315, KEY_telephonerecorder, TELEPHONE RECORDER */
	0x7018, /* 1210, 0xafb, U+2117, KEY_phonographcopyright, SOUND RECORDING COPYRIGHT */
	0x7039, /* 1211, 0xafc, U+2038, KEY_caret, CARET */
	0x704c, /* 1212, 0xafd, U+201a, KEY_singlelowquotemark, SINGLE LOW-9 QUOTATION MARK */
	0x706c, /* 1213, 0xafe, U+201e, KEY_doublelowquotemark, DOUBLE LOW-9 QUOTATION MARK */
	0x708c, /* 1214, 0xaff, KEY_cursor */
	0x0000,
	0xb208, /* 1846, 0x1002857, U+2857, KEY_braille_dots_12357, BRAILLE PATTERN DOTS-12357 */
	0x0000,
	0x0000,
	0xb8b5, /* 1901, 0x100288e, U+288e, KEY_braille_dots_2348, BRAILLE PATTERN DOTS-2348 */
	0x0000,
	0x0000,
	0xb265, /* 1849, 0x100285a, U+285a, KEY_braille_dots_2457, BRAILLE PATTERN DOTS-2457 */
	0x0000,
	0x0000,
	0xb8f4, /* 1903, 0x1002890, U+2890, KEY_braille_dots_58, BRAILLE PATTERN DOTS-58 */
	0xb2a4, /* 1851, 0x100285c, U+285c, KEY_braille_dots_3457, BRAILLE PATTERN DOTS-3457 */
	0x0000,
	0xb2c3, /* 1852, 0x100285d, U+285d, KEY_braille_dots_13457, BRAILLE PATTERN DOTS-13457 */
	0x0000,
	0x0000,
	0x0000,
	0xb303, /* 1854, 0x100285f, U+285f, KEY_braille_dots_123457, BRAILLE PATTERN DOTS-123457 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe769, /* 2352, 0x1004ff53, KEY_osfRight */
	0x0000,
	0xb98a, /* 1908, 0x1002895, U+2895, KEY_braille_dots_1358, BRAILLE PATTERN DOTS-1358 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe4a9, /* 2323, 0x100000a8, KEY_hpmute_acute */
	0xbcd4, /* 1935, 0x10028b0, U+28b0, KEY_braille_dots_568, BRAILLE PATTERN DOTS-568 */
	0x0000,
	0x8725, /* 1436, 0xedf, KEY_Hangul_J_RieulSios */
	0xe438, /* 2318, 0x1000ff48, KEY_hpModelock1 */
	0x0000,
	0xe4dd, /* 2325, 0x100000aa, KEY_hpmute_asciicircum */
	0x0000,
	0x0000,
	0xe4fd, /* 2326, 0x100000ab, KEY_hpmute_diaeresis */
	0x0000,
	0xba44, /* 1914, 0x100289b, U+289b, KEY_braille_dots_12458, BRAILLE PATTERN DOTS-12458 */
	0xe51b, /* 2327, 0x100000ac, KEY_hpmute_asciitilde */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa39b, /* 1717, 0x1002070, U+2070, KEY_zerosuperior, SUPERSCRIPT ZERO */
	0x0000,
	0x0000,
	0xcba0, /* 2072, 0x1000dc3, U+0dc3, KEY_Sinh_sa, SINHALA DANTAJA SAYANNA */
	0x0000,
	0xb590, /* 1875, 0x1002874, U+2874, KEY_braille_dots_3567, BRAILLE PATTERN DOTS-3567 */
	0x0000,
	0x0000,
	0x0000,
	0xb5cf, /* 1877, 0x1002876, U+2876, KEY_braille_dots_23567, BRAILLE PATTERN DOTS-23567 */
	0x0000,
	0xb5ef, /* 1878, 0x1002877, U+2877, KEY_braille_dots_123567, BRAILLE PATTERN DOTS-123567 */
	0x0000,
	0xb610, /* 1879, 0x1002878, U+2878, KEY_braille_dots_4567, BRAILLE PATTERN DOTS-4567 */
	0x0000,
	0x0000,
	0x0000,
	0xb64f, /* 1881, 0x100287a, U+287a, KEY_braille_dots_24567, BRAILLE PATTERN DOTS-24567 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa7d4, /* 1759, 0x1002800, U+2800, KEY_braille_blank, BRAILLE PATTERN BLANK */
	0xa7ef, /* 1760, 0x1002801, U+2801, KEY_braille_dots_1, BRAILLE PATTERN DOTS-1 */
	0xa1d5, /* 1696, 0x1001ef6, U+1ef6, KEY_Yhook, LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
	0xa827, /* 1762, 0x1002803, U+2803, KEY_braille_dots_12, BRAILLE PATTERN DOTS-12 */
	0xa844, /* 1763, 0x1002804, U+2804, KEY_braille_dots_3, BRAILLE PATTERN DOTS-3 */
	0xa438, /* 1723, 0x1002079, U+2079, KEY_ninesuperior, SUPERSCRIPT NINE */
	0xa87d, /* 1765, 0x1002806, U+2806, KEY_braille_dots_23, BRAILLE PATTERN DOTS-23 */
	0xa89a, /* 1766, 0x1002807, U+2807, KEY_braille_dots_123, BRAILLE PATTERN DOTS-123 */
	0xa8b8, /* 1767, 0x1002808, U+2808, KEY_braille_dots_4, BRAILLE PATTERN DOTS-4 */
	0xa8d4, /* 1768, 0x1002809, U+2809, KEY_braille_dots_14, BRAILLE PATTERN DOTS-14 */
	0xa8f1, /* 1769, 0x100280a, U+280a, KEY_braille_dots_24, BRAILLE PATTERN DOTS-24 */
	0xa90e, /* 1770, 0x100280b, U+280b, KEY_braille_dots_124, BRAILLE PATTERN DOTS-124 */
	0xa92c, /* 1771, 0x100280c, U+280c, KEY_braille_dots_34, BRAILLE PATTERN DOTS-34 */
	0xa949, /* 1772, 0x100280d, U+280d, KEY_braille_dots_134, BRAILLE PATTERN DOTS-134 */
	0xa967, /* 1773, 0x100280e, U+280e, KEY_braille_dots_234, BRAILLE PATTERN DOTS-234 */
	0xa985, /* 1774, 0x100280f, U+280f, KEY_braille_dots_1234, BRAILLE PATTERN DOTS-1234 */
	0xa9a4, /* 1775, 0x1002810, U+2810, KEY_braille_dots_5, BRAILLE PATTERN DOTS-5 */
	0xa9c0, /* 1776, 0x1002811, U+2811, KEY_braille_dots_15, BRAILLE PATTERN DOTS-15 */
	0xa9dd, /* 1777, 0x1002812, U+2812, KEY_braille_dots_25, BRAILLE PATTERN DOTS-25 */
	0xa9fa, /* 1778, 0x1002813, U+2813, KEY_braille_dots_125, BRAILLE PATTERN DOTS-125 */
	0xaa18, /* 1779, 0x1002814, U+2814, KEY_braille_dots_35, BRAILLE PATTERN DOTS-35 */
	0xaa35, /* 1780, 0x1002815, U+2815, KEY_braille_dots_135, BRAILLE PATTERN DOTS-135 */
	0xaa53, /* 1781, 0x1002816, U+2816, KEY_braille_dots_235, BRAILLE PATTERN DOTS-235 */
	0xaa71, /* 1782, 0x1002817, U+2817, KEY_braille_dots_1235, BRAILLE PATTERN DOTS-1235 */
	0xaa90, /* 1783, 0x1002818, U+2818, KEY_braille_dots_45, BRAILLE PATTERN DOTS-45 */
	0xaaad, /* 1784, 0x1002819, U+2819, KEY_braille_dots_145, BRAILLE PATTERN DOTS-145 */
	0xa452, /* 1724, 0x1002080, U+2080, KEY_zerosubscript, SUBSCRIPT ZERO */
	0xaae9, /* 1786, 0x100281b, U+281b, KEY_braille_dots_1245, BRAILLE PATTERN DOTS-1245 */
	0xab08, /* 1787, 0x100281c, U+281c, KEY_braille_dots_345, BRAILLE PATTERN DOTS-345 */
	0xab26, /* 1788, 0x100281d, U+281d, KEY_braille_dots_1345, BRAILLE PATTERN DOTS-1345 */
	0xab45, /* 1789, 0x100281e, U+281e, KEY_braille_dots_2345, BRAILLE PATTERN DOTS-2345 */
	0xa2f9, /* 1710, 0x10020a6, U+20a6, KEY_NairaSign, NAIRA SIGN */
	0xab84, /* 1791, 0x1002820, U+2820, KEY_braille_dots_6, BRAILLE PATTERN DOTS-6 */
	0xaba0, /* 1792, 0x1002821, U+2821, KEY_braille_dots_16, BRAILLE PATTERN DOTS-16 */
	0xabbd, /* 1793, 0x1002822, U+2822, KEY_braille_dots_26, BRAILLE PATTERN DOTS-26 */
	0xa4a1, /* 1727, 0x1002083, U+2083, KEY_threesubscript, SUBSCRIPT THREE */
	0xabf8, /* 1795, 0x1002824, U+2824, KEY_braille_dots_36, BRAILLE PATTERN DOTS-36 */
	0xac15, /* 1796, 0x1002825, U+2825, KEY_braille_dots_136, BRAILLE PATTERN DOTS-136 */
	0xac33, /* 1797, 0x1002826, U+2826, KEY_braille_dots_236, BRAILLE PATTERN DOTS-236 */
	0xac51, /* 1798, 0x1002827, U+2827, KEY_braille_dots_1236, BRAILLE PATTERN DOTS-1236 */
	0xac70, /* 1799, 0x1002828, U+2828, KEY_braille_dots_46, BRAILLE PATTERN DOTS-46 */
	0xa4d8, /* 1729, 0x1002085, U+2085, KEY_fivesubscript, SUBSCRIPT FIVE */
	0xacab, /* 1801, 0x100282a, U+282a, KEY_braille_dots_246, BRAILLE PATTERN DOTS-246 */
	0xacc9, /* 1802, 0x100282b, U+282b, KEY_braille_dots_1246, BRAILLE PATTERN DOTS-1246 */
	0xa4f3, /* 1730, 0x1002086, U+2086, KEY_sixsubscript, SUBSCRIPT SIX */
	0xad06, /* 1804, 0x100282d, U+282d, KEY_braille_dots_1346, BRAILLE PATTERN DOTS-1346 */
	0xad25, /* 1805, 0x100282e, U+282e, KEY_braille_dots_2346, BRAILLE PATTERN DOTS-2346 */
	0xa50d, /* 1731, 0x1002087, U+2087, KEY_sevensubscript, SUBSCRIPT SEVEN */
	0xad64, /* 1807, 0x1002830, U+2830, KEY_braille_dots_56, BRAILLE PATTERN DOTS-56 */
	0xad81, /* 1808, 0x1002831, U+2831, KEY_braille_dots_156, BRAILLE PATTERN DOTS-156 */
	0xad9f, /* 1809, 0x1002832, U+2832, KEY_braille_dots_256, BRAILLE PATTERN DOTS-256 */
	0xadbd, /* 1810, 0x1002833, U+2833, KEY_braille_dots_1256, BRAILLE PATTERN DOTS-1256 */
	0xaddc, /* 1811, 0x1002834, U+2834, KEY_braille_dots_356, BRAILLE PATTERN DOTS-356 */
	0xadfa, /* 1812, 0x1002835, U+2835, KEY_braille_dots_1356, BRAILLE PATTERN DOTS-1356 */
	0xae19, /* 1813, 0x1002836, U+2836, KEY_braille_dots_2356, BRAILLE PATTERN DOTS-2356 */
	0xae38, /* 1814, 0x1002837, U+2837, KEY_braille_dots_12356, BRAILLE PATTERN DOTS-12356 */
	0xae58, /* 1815, 0x1002838, U+2838, KEY_braille_dots_456, BRAILLE PATTERN DOTS-456 */
	0xae76, /* 1816, 0x1002839, U+2839, KEY_braille_dots_1456, BRAILLE PATTERN DOTS-1456 */
	0xae95, /* 1817, 0x100283a, U+283a, KEY_braille_dots_2456, BRAILLE PATTERN DOTS-2456 */
	0xaeb4, /* 1818, 0x100283b, U+283b, KEY_braille_dots_12456, BRAILLE PATTERN DOTS-12456 */
	0xaed4, /* 1819, 0x100283c, U+283c, KEY_braille_dots_3456, BRAILLE PATTERN DOTS-3456 */
	0xaef3, /* 1820, 0x100283d, U+283d, KEY_braille_dots_13456, BRAILLE PATTERN DOTS-13456 */
	0xaf13, /* 1821, 0x100283e, U+283e, KEY_braille_dots_23456, BRAILLE PATTERN DOTS-23456 */
	0xaf33, /* 1822, 0x100283f, U+283f, KEY_braille_dots_123456, BRAILLE PATTERN DOTS-123456 */
	0xaf54, /* 1823, 0x1002840, U+2840, KEY_braille_dots_7, BRAILLE PATTERN DOTS-7 */
	0xaf70, /* 1824, 0x1002841, U+2841, KEY_braille_dots_17, BRAILLE PATTERN DOTS-17 */
	0xaf8d, /* 1825, 0x1002842, U+2842, KEY_braille_dots_27, BRAILLE PATTERN DOTS-27 */
	0xafaa, /* 1826, 0x1002843, U+2843, KEY_braille_dots_127, BRAILLE PATTERN DOTS-127 */
	0xafc8, /* 1827, 0x1002844, U+2844, KEY_braille_dots_37, BRAILLE PATTERN DOTS-37 */
	0xafe5, /* 1828, 0x1002845, U+2845, KEY_braille_dots_137, BRAILLE PATTERN DOTS-137 */
	0xb003, /* 1829, 0x1002846, U+2846, KEY_braille_dots_237, BRAILLE PATTERN DOTS-237 */
	0xb021, /* 1830, 0x1002847, U+2847, KEY_braille_dots_1237, BRAILLE PATTERN DOTS-1237 */
	0xb040, /* 1831, 0x1002848, U+2848, KEY_braille_dots_47, BRAILLE PATTERN DOTS-47 */
	0xb05d, /* 1832, 0x1002849, U+2849, KEY_braille_dots_147, BRAILLE PATTERN DOTS-147 */
	0xb07b, /* 1833, 0x100284a, U+284a, KEY_braille_dots_247, BRAILLE PATTERN DOTS-247 */
	0xb099, /* 1834, 0x100284b, U+284b, KEY_braille_dots_1247, BRAILLE PATTERN DOTS-1247 */
	0xb0b8, /* 1835, 0x100284c, U+284c, KEY_braille_dots_347, BRAILLE PATTERN DOTS-347 */
	0x9993, /* 1614, 0x1001ea2, U+1ea2, KEY_Ahook, LATIN CAPITAL LETTER A WITH HOOK ABOVE */
	0xb0f5, /* 1837, 0x100284e, U+284e, KEY_braille_dots_2347, BRAILLE PATTERN DOTS-2347 */
	0xb114, /* 1838, 0x100284f, U+284f, KEY_braille_dots_12347, BRAILLE PATTERN DOTS-12347 */
	0xb134, /* 1839, 0x1002850, U+2850, KEY_braille_dots_57, BRAILLE PATTERN DOTS-57 */
	0xb151, /* 1840, 0x1002851, U+2851, KEY_braille_dots_157, BRAILLE PATTERN DOTS-157 */
	0xb16f, /* 1841, 0x1002852, U+2852, KEY_braille_dots_257, BRAILLE PATTERN DOTS-257 */
	0xb18d, /* 1842, 0x1002853, U+2853, KEY_braille_dots_1257, BRAILLE PATTERN DOTS-1257 */
	0xb1ac, /* 1843, 0x1002854, U+2854, KEY_braille_dots_357, BRAILLE PATTERN DOTS-357 */
	0xb1ca, /* 1844, 0x1002855, U+2855, KEY_braille_dots_1357, BRAILLE PATTERN DOTS-1357 */
	0xb1e9, /* 1845, 0x1002856, U+2856, KEY_braille_dots_2357, BRAILLE PATTERN DOTS-2357 */
	0x70a0, /* 1215, 0xba3, KEY_leftcaret, (U+003C LESS-THAN SIGN) */
	0xb228, /* 1847, 0x1002858, U+2858, KEY_braille_dots_457, BRAILLE PATTERN DOTS-457 */
	0xb246, /* 1848, 0x1002859, U+2859, KEY_braille_dots_1457, BRAILLE PATTERN DOTS-1457 */
	0x70b7, /* 1216, 0xba6, KEY_rightcaret, (U+003E GREATER-THAN SIGN) */
	0xb284, /* 1850, 0x100285b, U+285b, KEY_braille_dots_12457, BRAILLE PATTERN DOTS-12457 */
	0x70cf, /* 1217, 0xba8, KEY_downcaret, (U+2228 LOGICAL OR) */
	0x70e6, /* 1218, 0xba9, KEY_upcaret, (U+2227 LOGICAL AND) */
	0xb2e3, /* 1853, 0x100285e, U+285e, KEY_braille_dots_23457, BRAILLE PATTERN DOTS-23457 */
	0x99d7, /* 1617, 0x1001ea5, U+1ea5, KEY_acircumflexacute, LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0xb324, /* 1855, 0x1002860, U+2860, KEY_braille_dots_67, BRAILLE PATTERN DOTS-67 */
	0xb341, /* 1856, 0x1002861, U+2861, KEY_braille_dots_167, BRAILLE PATTERN DOTS-167 */
	0xb35f, /* 1857, 0x1002862, U+2862, KEY_braille_dots_267, BRAILLE PATTERN DOTS-267 */
	0xb37d, /* 1858, 0x1002863, U+2863, KEY_braille_dots_1267, BRAILLE PATTERN DOTS-1267 */
	0xb39c, /* 1859, 0x1002864, U+2864, KEY_braille_dots_367, BRAILLE PATTERN DOTS-367 */
	0xb3ba, /* 1860, 0x1002865, U+2865, KEY_braille_dots_1367, BRAILLE PATTERN DOTS-1367 */
	0xb3d9, /* 1861, 0x1002866, U+2866, KEY_braille_dots_2367, BRAILLE PATTERN DOTS-2367 */
	0xb3f8, /* 1862, 0x1002867, U+2867, KEY_braille_dots_12367, BRAILLE PATTERN DOTS-12367 */
	0xb418, /* 1863, 0x1002868, U+2868, KEY_braille_dots_467, BRAILLE PATTERN DOTS-467 */
	0xb436, /* 1864, 0x1002869, U+2869, KEY_braille_dots_1467, BRAILLE PATTERN DOTS-1467 */
	0xb455, /* 1865, 0x100286a, U+286a, KEY_braille_dots_2467, BRAILLE PATTERN DOTS-2467 */
	0xb474, /* 1866, 0x100286b, U+286b, KEY_braille_dots_12467, BRAILLE PATTERN DOTS-12467 */
	0xb494, /* 1867, 0x100286c, U+286c, KEY_braille_dots_3467, BRAILLE PATTERN DOTS-3467 */
	0xb4b3, /* 1868, 0x100286d, U+286d, KEY_braille_dots_13467, BRAILLE PATTERN DOTS-13467 */
	0xb4d3, /* 1869, 0x100286e, U+286e, KEY_braille_dots_23467, BRAILLE PATTERN DOTS-23467 */
	0xb4f3, /* 1870, 0x100286f, U+286f, KEY_braille_dots_123467, BRAILLE PATTERN DOTS-123467 */
	0xb514, /* 1871, 0x1002870, U+2870, KEY_braille_dots_567, BRAILLE PATTERN DOTS-567 */
	0xb532, /* 1872, 0x1002871, U+2871, KEY_braille_dots_1567, BRAILLE PATTERN DOTS-1567 */
	0xb551, /* 1873, 0x1002872, U+2872, KEY_braille_dots_2567, BRAILLE PATTERN DOTS-2567 */
	0xb570, /* 1874, 0x1002873, U+2873, KEY_braille_dots_12567, BRAILLE PATTERN DOTS-12567 */
	0x70fb, /* 1219, 0xbc0, KEY_overbar, (U+00AF MACRON) */
	0xb5af, /* 1876, 0x1002875, U+2875, KEY_braille_dots_13567, BRAILLE PATTERN DOTS-13567 */
	0x7110, /* 1220, 0xbc2, U+22a4, KEY_downtack, DOWN TACK */
	0x7126, /* 1221, 0xbc3, KEY_upshoe, (U+2229 INTERSECTION) */
	0x713a, /* 1222, 0xbc4, U+230a, KEY_downstile, LEFT FLOOR */
	0xb62f, /* 1880, 0x1002879, U+2879, KEY_braille_dots_14567, BRAILLE PATTERN DOTS-14567 */
	0x7151, /* 1223, 0xbc6, KEY_underbar, (U+005F LOW LINE) */
	0xb66f, /* 1882, 0x100287b, U+287b, KEY_braille_dots_124567, BRAILLE PATTERN DOTS-124567 */
	0xb690, /* 1883, 0x100287c, U+287c, KEY_braille_dots_34567, BRAILLE PATTERN DOTS-34567 */
	0xb6b0, /* 1884, 0x100287d, U+287d, KEY_braille_dots_134567, BRAILLE PATTERN DOTS-134567 */
	0x7167, /* 1224, 0xbca, U+2218, KEY_jot, RING OPERATOR */
	0xb6f2, /* 1886, 0x100287f, U+287f, KEY_braille_dots_1234567, BRAILLE PATTERN DOTS-1234567 */
	0x7178, /* 1225, 0xbcc, U+2395, KEY_quad, APL FUNCTIONAL SYMBOL QUAD */
	0xb730, /* 1888, 0x1002881, U+2881, KEY_braille_dots_18, BRAILLE PATTERN DOTS-18 */
	0x718a, /* 1226, 0xbce, U+22a5, KEY_uptack, UP TACK */
	0x719e, /* 1227, 0xbcf, U+25cb, KEY_circle, WHITE CIRCLE */
	0xb788, /* 1891, 0x1002884, U+2884, KEY_braille_dots_38, BRAILLE PATTERN DOTS-38 */
	0xb7a5, /* 1892, 0x1002885, U+2885, KEY_braille_dots_138, BRAILLE PATTERN DOTS-138 */
	0xb7c3, /* 1893, 0x1002886, U+2886, KEY_braille_dots_238, BRAILLE PATTERN DOTS-238 */
	0x71b2, /* 1228, 0xbd3, U+2308, KEY_upstile, LEFT CEILING */
	0xb800, /* 1895, 0x1002888, U+2888, KEY_braille_dots_48, BRAILLE PATTERN DOTS-48 */
	0x9aa7, /* 1624, 0x1001eac, U+1eac, KEY_Acircumflexbelowdot, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x71c7, /* 1229, 0xbd6, KEY_downshoe, (U+222A UNION) */
	0xb859, /* 1898, 0x100288b, U+288b, KEY_braille_dots_1248, BRAILLE PATTERN DOTS-1248 */
	0x71dd, /* 1230, 0xbd8, KEY_rightshoe, (U+2283 SUPERSET OF) */
	0xb896, /* 1900, 0x100288d, U+288d, KEY_braille_dots_1348, BRAILLE PATTERN DOTS-1348 */
	0x71f4, /* 1231, 0xbda, KEY_leftshoe, (U+2282 SUBSET OF) */
	0x9ac8, /* 1625, 0x1001ead, U+1ead, KEY_acircumflexbelowdot, LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x720a, /* 1232, 0xbdc, U+22a3, KEY_lefttack, LEFT TACK */
	0xb911, /* 1904, 0x1002891, U+2891, KEY_braille_dots_158, BRAILLE PATTERN DOTS-158 */
	0xb92f, /* 1905, 0x1002892, U+2892, KEY_braille_dots_258, BRAILLE PATTERN DOTS-258 */
	0xb94d, /* 1906, 0x1002893, U+2893, KEY_braille_dots_1258, BRAILLE PATTERN DOTS-1258 */
	0xb96c, /* 1907, 0x1002894, U+2894, KEY_braille_dots_358, BRAILLE PATTERN DOTS-358 */
	0xa33f, /* 1713, 0x10020a9, U+20a9, KEY_WonSign, WON SIGN */
	0xb9a9, /* 1909, 0x1002896, U+2896, KEY_braille_dots_2358, BRAILLE PATTERN DOTS-2358 */
	0xb9c8, /* 1910, 0x1002897, U+2897, KEY_braille_dots_12358, BRAILLE PATTERN DOTS-12358 */
	0xb9e8, /* 1911, 0x1002898, U+2898, KEY_braille_dots_458, BRAILLE PATTERN DOTS-458 */
	0xba06, /* 1912, 0x1002899, U+2899, KEY_braille_dots_1458, BRAILLE PATTERN DOTS-1458 */
	0xba25, /* 1913, 0x100289a, U+289a, KEY_braille_dots_2458, BRAILLE PATTERN DOTS-2458 */
	0xa36f, /* 1715, 0x10020ab, U+20ab, KEY_DongSign, DONG SIGN */
	0xba64, /* 1915, 0x100289c, U+289c, KEY_braille_dots_3458, BRAILLE PATTERN DOTS-3458 */
	0xba83, /* 1916, 0x100289d, U+289d, KEY_braille_dots_13458, BRAILLE PATTERN DOTS-13458 */
	0xbaa3, /* 1917, 0x100289e, U+289e, KEY_braille_dots_23458, BRAILLE PATTERN DOTS-23458 */
	0xbac3, /* 1918, 0x100289f, U+289f, KEY_braille_dots_123458, BRAILLE PATTERN DOTS-123458 */
	0xbae4, /* 1919, 0x10028a0, U+28a0, KEY_braille_dots_68, BRAILLE PATTERN DOTS-68 */
	0xbb01, /* 1920, 0x10028a1, U+28a1, KEY_braille_dots_168, BRAILLE PATTERN DOTS-168 */
	0xbb1f, /* 1921, 0x10028a2, U+28a2, KEY_braille_dots_268, BRAILLE PATTERN DOTS-268 */
	0xbb3d, /* 1922, 0x10028a3, U+28a3, KEY_braille_dots_1268, BRAILLE PATTERN DOTS-1268 */
	0xbb5c, /* 1923, 0x10028a4, U+28a4, KEY_braille_dots_368, BRAILLE PATTERN DOTS-368 */
	0xbb7a, /* 1924, 0x10028a5, U+28a5, KEY_braille_dots_1368, BRAILLE PATTERN DOTS-1368 */
	0xbb99, /* 1925, 0x10028a6, U+28a6, KEY_braille_dots_2368, BRAILLE PATTERN DOTS-2368 */
	0xbbb8, /* 1926, 0x10028a7, U+28a7, KEY_braille_dots_12368, BRAILLE PATTERN DOTS-12368 */
	0xbbd8, /* 1927, 0x10028a8, U+28a8, KEY_braille_dots_468, BRAILLE PATTERN DOTS-468 */
	0xbbf6, /* 1928, 0x10028a9, U+28a9, KEY_braille_dots_1468, BRAILLE PATTERN DOTS-1468 */
	0xbc15, /* 1929, 0x10028aa, U+28aa, KEY_braille_dots_2468, BRAILLE PATTERN DOTS-2468 */
	0xbc34, /* 1930, 0x10028ab, U+28ab, KEY_braille_dots_12468, BRAILLE PATTERN DOTS-12468 */
	0xbc54, /* 1931, 0x10028ac, U+28ac, KEY_braille_dots_3468, BRAILLE PATTERN DOTS-3468 */
	0xbc73, /* 1932, 0x10028ad, U+28ad, KEY_braille_dots_13468, BRAILLE PATTERN DOTS-13468 */
	0xbc93, /* 1933, 0x10028ae, U+28ae, KEY_braille_dots_23468, BRAILLE PATTERN DOTS-23468 */
	0xbcb3, /* 1934, 0x10028af, U+28af, KEY_braille_dots_123468, BRAILLE PATTERN DOTS-123468 */
	0x7220, /* 1233, 0xbfc, U+22a2, KEY_righttack, RIGHT TACK */
	0xbcf2, /* 1936, 0x10028b1, U+28b1, KEY_braille_dots_1568, BRAILLE PATTERN DOTS-1568 */
	0xbd11, /* 1937, 0x10028b2, U+28b2, KEY_braille_dots_2568, BRAILLE PATTERN DOTS-2568 */
	0xbd30, /* 1938, 0x10028b3, U+28b3, KEY_braille_dots_12568, BRAILLE PATTERN DOTS-12568 */
	0xbd50, /* 1939, 0x10028b4, U+28b4, KEY_braille_dots_3568, BRAILLE PATTERN DOTS-3568 */
	0xbd6f, /* 1940, 0x10028b5, U+28b5, KEY_braille_dots_13568, BRAILLE PATTERN DOTS-13568 */
	0xbd8f, /* 1941, 0x10028b6, U+28b6, KEY_braille_dots_23568, BRAILLE PATTERN DOTS-23568 */
	0xbdaf, /* 1942, 0x10028b7, U+28b7, KEY_braille_dots_123568, BRAILLE PATTERN DOTS-123568 */
	0xbdd0, /* 1943, 0x10028b8, U+28b8, KEY_braille_dots_4568, BRAILLE PATTERN DOTS-4568 */
	0xbdef, /* 1944, 0x10028b9, U+28b9, KEY_braille_dots_14568, BRAILLE PATTERN DOTS-14568 */
	0xbe0f, /* 1945, 0x10028ba, U+28ba, KEY_braille_dots_24568, BRAILLE PATTERN DOTS-24568 */
	0xbe2f, /* 1946, 0x10028bb, U+28bb, KEY_braille_dots_124568, BRAILLE PATTERN DOTS-124568 */
	0xbe50, /* 1947, 0x10028bc, U+28bc, KEY_braille_dots_34568, BRAILLE PATTERN DOTS-34568 */
	0xbe70, /* 1948, 0x10028bd, U+28bd, KEY_braille_dots_134568, BRAILLE PATTERN DOTS-134568 */
	0xbe91, /* 1949, 0x10028be, U+28be, KEY_braille_dots_234568, BRAILLE PATTERN DOTS-234568 */
	0xbeb2, /* 1950, 0x10028bf, U+28bf, KEY_braille_dots_1234568, BRAILLE PATTERN DOTS-1234568 */
	0xbed4, /* 1951, 0x10028c0, U+28c0, KEY_braille_dots_78, BRAILLE PATTERN DOTS-78 */
	0xbef1, /* 1952, 0x10028c1, U+28c1, KEY_braille_dots_178, BRAILLE PATTERN DOTS-178 */
	0xbf0f, /* 1953, 0x10028c2, U+28c2, KEY_braille_dots_278, BRAILLE PATTERN DOTS-278 */
	0xbf2d, /* 1954, 0x10028c3, U+28c3, KEY_braille_dots_1278, BRAILLE PATTERN DOTS-1278 */
	0xbf4c, /* 1955, 0x10028c4, U+28c4, KEY_braille_dots_378, BRAILLE PATTERN DOTS-378 */
	0xbf6a, /* 1956, 0x10028c5, U+28c5, KEY_braille_dots_1378, BRAILLE PATTERN DOTS-1378 */
	0xbf89, /* 1957, 0x10028c6, U+28c6, KEY_braille_dots_2378, BRAILLE PATTERN DOTS-2378 */
	0xbfa8, /* 1958, 0x10028c7, U+28c7, KEY_braille_dots_12378, BRAILLE PATTERN DOTS-12378 */
	0xbfc8, /* 1959, 0x10028c8, U+28c8, KEY_braille_dots_478, BRAILLE PATTERN DOTS-478 */
	0xbfe6, /* 1960, 0x10028c9, U+28c9, KEY_braille_dots_1478, BRAILLE PATTERN DOTS-1478 */
	0xc005, /* 1961, 0x10028ca, U+28ca, KEY_braille_dots_2478, BRAILLE PATTERN DOTS-2478 */
	0xc024, /* 1962, 0x10028cb, U+28cb, KEY_braille_dots_12478, BRAILLE PATTERN DOTS-12478 */
	0xc044, /* 1963, 0x10028cc, U+28cc, KEY_braille_dots_3478, BRAILLE PATTERN DOTS-3478 */
	0xc063, /* 1964, 0x10028cd, U+28cd, KEY_braille_dots_13478, BRAILLE PATTERN DOTS-13478 */
	0xc083, /* 1965, 0x10028ce, U+28ce, KEY_braille_dots_23478, BRAILLE PATTERN DOTS-23478 */
	0xc0a3, /* 1966, 0x10028cf, U+28cf, KEY_braille_dots_123478, BRAILLE PATTERN DOTS-123478 */
	0xc0c4, /* 1967, 0x10028d0, U+28d0, KEY_braille_dots_578, BRAILLE PATTERN DOTS-578 */
	0xc0e2, /* 1968, 0x10028d1, U+28d1, KEY_braille_dots_1578, BRAILLE PATTERN DOTS-1578 */
	0xc101, /* 1969, 0x10028d2, U+28d2, KEY_braille_dots_2578, BRAILLE PATTERN DOTS-2578 */
	0xc120, /* 1970, 0x10028d3, U+28d3, KEY_braille_dots_12578, BRAILLE PATTERN DOTS-12578 */
	0xc140, /* 1971, 0x10028d4, U+28d4, KEY_braille_dots_3578, BRAILLE PATTERN DOTS-3578 */
	0xc15f, /* 1972, 0x10028d5, U+28d5, KEY_braille_dots_13578, BRAILLE PATTERN DOTS-13578 */
	0xc17f, /* 1973, 0x10028d6, U+28d6, KEY_braille_dots_23578, BRAILLE PATTERN DOTS-23578 */
	0xc19f, /* 1974, 0x10028d7, U+28d7, KEY_braille_dots_123578, BRAILLE PATTERN DOTS-123578 */
	0xc1c0, /* 1975, 0x10028d8, U+28d8, KEY_braille_dots_4578, BRAILLE PATTERN DOTS-4578 */
	0xc1df, /* 1976, 0x10028d9, U+28d9, KEY_braille_dots_14578, BRAILLE PATTERN DOTS-14578 */
	0xc1ff, /* 1977, 0x10028da, U+28da, KEY_braille_dots_24578, BRAILLE PATTERN DOTS-24578 */
	0xc21f, /* 1978, 0x10028db, U+28db, KEY_braille_dots_124578, BRAILLE PATTERN DOTS-124578 */
	0xc240, /* 1979, 0x10028dc, U+28dc, KEY_braille_dots_34578, BRAILLE PATTERN DOTS-34578 */
	0xc260, /* 1980, 0x10028dd, U+28dd, KEY_braille_dots_134578, BRAILLE PATTERN DOTS-134578 */
	0xc281, /* 1981, 0x10028de, U+28de, KEY_braille_dots_234578, BRAILLE PATTERN DOTS-234578 */
	0xc2a2, /* 1982, 0x10028df, U+28df, KEY_braille_dots_1234578, BRAILLE PATTERN DOTS-1234578 */
	0xc2c4, /* 1983, 0x10028e0, U+28e0, KEY_braille_dots_678, BRAILLE PATTERN DOTS-678 */
	0xc2e2, /* 1984, 0x10028e1, U+28e1, KEY_braille_dots_1678, BRAILLE PATTERN DOTS-1678 */
	0xc301, /* 1985, 0x10028e2, U+28e2, KEY_braille_dots_2678, BRAILLE PATTERN DOTS-2678 */
	0xc320, /* 1986, 0x10028e3, U+28e3, KEY_braille_dots_12678, BRAILLE PATTERN DOTS-12678 */
	0xc340, /* 1987, 0x10028e4, U+28e4, KEY_braille_dots_3678, BRAILLE PATTERN DOTS-3678 */
	0xc35f, /* 1988, 0x10028e5, U+28e5, KEY_braille_dots_13678, BRAILLE PATTERN DOTS-13678 */
	0xc37f, /* 1989, 0x10028e6, U+28e6, KEY_braille_dots_23678, BRAILLE PATTERN DOTS-23678 */
	0xc39f, /* 1990, 0x10028e7, U+28e7, KEY_braille_dots_123678, BRAILLE PATTERN DOTS-123678 */
	0xc3c0, /* 1991, 0x10028e8, U+28e8, KEY_braille_dots_4678, BRAILLE PATTERN DOTS-4678 */
	0xc3df, /* 1992, 0x10028e9, U+28e9, KEY_braille_dots_14678, BRAILLE PATTERN DOTS-14678 */
	0xc3ff, /* 1993, 0x10028ea, U+28ea, KEY_braille_dots_24678, BRAILLE PATTERN DOTS-24678 */
	0xc41f, /* 1994, 0x10028eb, U+28eb, KEY_braille_dots_124678, BRAILLE PATTERN DOTS-124678 */
	0xc440, /* 1995, 0x10028ec, U+28ec, KEY_braille_dots_34678, BRAILLE PATTERN DOTS-34678 */
	0xc460, /* 1996, 0x10028ed, U+28ed, KEY_braille_dots_134678, BRAILLE PATTERN DOTS-134678 */
	0xc481, /* 1997, 0x10028ee, U+28ee, KEY_braille_dots_234678, BRAILLE PATTERN DOTS-234678 */
	0xc4a2, /* 1998, 0x10028ef, U+28ef, KEY_braille_dots_1234678, BRAILLE PATTERN DOTS-1234678 */
	0xc4c4, /* 1999, 0x10028f0, U+28f0, KEY_braille_dots_5678, BRAILLE PATTERN DOTS-5678 */
	0xc4e3, /* 2000, 0x10028f1, U+28f1, KEY_braille_dots_15678, BRAILLE PATTERN DOTS-15678 */
	0xc503, /* 2001, 0x10028f2, U+28f2, KEY_braille_dots_25678, BRAILLE PATTERN DOTS-25678 */
	0xc523, /* 2002, 0x10028f3, U+28f3, KEY_braille_dots_125678, BRAILLE PATTERN DOTS-125678 */
	0xc544, /* 2003, 0x10028f4, U+28f4, KEY_braille_dots_35678, BRAILLE PATTERN DOTS-35678 */
	0xc564, /* 2004, 0x10028f5, U+28f5, KEY_braille_dots_135678, BRAILLE PATTERN DOTS-135678 */
	0xc585, /* 2005, 0x10028f6, U+28f6, KEY_braille_dots_235678, BRAILLE PATTERN DOTS-235678 */
	0xc5a6, /* 2006, 0x10028f7, U+28f7, KEY_braille_dots_1235678, BRAILLE PATTERN DOTS-1235678 */
	0xc5c8, /* 2007, 0x10028f8, U+28f8, KEY_braille_dots_45678, BRAILLE PATTERN DOTS-45678 */
	0xc5e8, /* 2008, 0x10028f9, U+28f9, KEY_braille_dots_145678, BRAILLE PATTERN DOTS-145678 */
	};
#endif /* NEEDVTABLE */

/*
 *  KeySymbol duplicate to object index.
 */
#ifdef NEEDDTABLE
#define DTABLESIZE 190
#define DMAXHASH 9
#define DMAXDUP 9
static const unsigned short hashDupsym[DTABLESIZE] = {
	0x0000,
	0x5037, /*  895, 0x6af, KEY_Serbian_dze, deprecated */
	0x0000,
	0x09bf, /*  123, 0xffcf, KEY_L8 */
	0x0000,
	0xe0b3, /* 2283, 0xff55, KEY_SunPageUp, Same as XK_Prior */
	0x50cf, /*  901, 0x6b4, KEY_Ukranian_JE, deprecated */
	0xe98a, /* 2375, 0x1000ff6d, KEY_System */
	0x511c, /*  904, 0x6b6, KEY_Ukranian_I, deprecated */
	0x514e, /*  906, 0x6b7, KEY_Ukranian_YI, deprecated */
	0x5180, /*  908, 0x6b8, KEY_Serbian_JE, deprecated */
	0x51b2, /*  910, 0x6b9, KEY_Serbian_LJE, deprecated */
	0x51e5, /*  912, 0x6ba, KEY_Serbian_NJE, deprecated */
	0x03ce, /*   44, 0xff56, KEY_Page_Down */
	0xea84, /* 2386, 0x100000a8, KEY_mute_acute */
	0xea9c, /* 2387, 0x100000a9, KEY_mute_grave */
	0x8bab, /* 1473, 0x100055c, U+055c, KEY_Armenian_amanak, ARMENIAN EXCLAMATION MARK */
	0x5296, /*  918, 0x6bf, KEY_Serbian_DZE, deprecated */
	0x2ab3, /*  488, 0xd0, KEY_Eth, deprecated */
	0x8b38, /* 1469, 0x100055d, U+055d, KEY_Armenian_but, ARMENIAN COMMA */
	0xe0ca, /* 2284, 0xff56, KEY_SunPageDown, Same as XK_Next */
	0xe0e3, /* 2285, 0xff65, KEY_SunUndo, Same as XK_Undo */
	0xe0f8, /* 2286, 0xff66, KEY_SunAgain, Same as XK_Redo */
	0x03a7, /*   42, 0xff55, KEY_Page_Up */
	0xe10e, /* 2287, 0xff68, KEY_SunFind, Same as XK_Find */
	0xe123, /* 2288, 0xff69, KEY_SunStop, Same as XK_Cancel */
	0x2b6f, /*  497, 0xd8, U+00d8, KEY_Ooblique, LATIN CAPITAL LETTER O WITH STROKE */
	0xe9b0, /* 2377, 0x1000ff6f, KEY_ClearLine */
	0xea27, /* 2382, 0x1000ff74, KEY_BackTab */
	0x0000,
	0x0000,
	0x0000,
	0x2c05, /*  504, 0xde, KEY_Thorn, deprecated */
	0xeab4, /* 2388, 0x100000aa, KEY_mute_asciicircum */
	0x0000,
	0xe065, /* 2280, 0xff61, KEY_SunPrint_Screen, Same as XK_Print */
	0x0b2b, /*  145, 0xffda, KEY_R9 */
	0xeaee, /* 2390, 0x100000ac, KEY_mute_asciitilde */
	0x0000,
	0x2089, /*  350, 0x27, KEY_quoteright, deprecated */
	0x0000,
	0x0000,
	0x60e2, /* 1057, 0xff7e, KEY_Greek_switch, Alias for mode_switch */
	0xeb0b, /* 2391, 0x100000af, KEY_lira */
	0x0e16, /*  180, 0xff7e, KEY_ISO_Group_Shift, Alias for mode_switch */
	0x0b90, /*  151, 0xffdd, KEY_R12 */
	0x7628, /* 1273, 0xff7e, KEY_Hebrew_switch, Alias for mode_switch */
	0x0000,
	0x0bb2, /*  153, 0xffde, KEY_R13 */
	0x3bad, /*  689, 0x4a5, KEY_kana_middledot, deprecated */
	0x0000,
	0x0000,
	0x0000,
	0xead2, /* 2389, 0x100000ab, KEY_mute_diaeresis */
	0x0000,
	0x0000,
	0x49b7, /*  840, 0x10006cc, U+06cc, KEY_Arabic_farsi_yeh, ARABIC LETTER FARSI YEH */
	0x59b4, /*  988, 0x7a5, KEY_Greek_IOTAdiaeresis, old typo */
	0x2e40, /*  531, 0xf8, U+00f8, KEY_ooblique, LATIN SMALL LETTER O WITH STROKE */
	0x3c97, /*  700, 0x4af, KEY_kana_tu, deprecated */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe977, /* 2374, 0x1000ff6c, KEY_Reset */
	0x1287, /*  216, 0xfe53, KEY_dead_perispomeni, alias for dead_tilde */
	0xe99e, /* 2376, 0x1000ff6e, KEY_User */
	0x728b, /* 1237, 0xce1, KEY_hebrew_beth, deprecated */
	0x72be, /* 1239, 0xce2, KEY_hebrew_gimmel, deprecated */
	0x72f3, /* 1241, 0xce3, KEY_hebrew_daleth, deprecated */
	0x8c21, /* 1477, 0x100055e, U+055e, KEY_Armenian_paruyk, ARMENIAN QUESTION MARK */
	0xea0f, /* 2381, 0x1000ff73, KEY_DeleteChar */
	0x7356, /* 1245, 0xce6, KEY_hebrew_zayin, deprecated */
	0x7389, /* 1247, 0xce7, KEY_hebrew_het, deprecated */
	0x73b9, /* 1249, 0xce8, KEY_hebrew_teth, deprecated */
	0x065b, /*   76, 0xff9b, KEY_KP_Page_Down */
	0x0000,
	0x3e2a, /*  719, 0x4c1, KEY_kana_TI, deprecated */
	0x3e55, /*  721, 0x4c2, KEY_kana_TU, deprecated */
	0x0000,
	0xeb42, /* 2394, 0x100000f6, KEY_longminus */
	0x8be5, /* 1475, 0x100055b, U+055b, KEY_Armenian_shesht, ARMENIAN EMPHASIS MARK */
	0x0000,
	0x74c0, /* 1259, 0xcf1, KEY_hebrew_samekh, deprecated */
	0xe57f, /* 2331, 0x100000ee, KEY_hpIO */
	0x0b6e, /*  149, 0xffdc, KEY_R11 */
	0x0000,
	0x7545, /* 1264, 0xcf5, KEY_hebrew_finalzadi, deprecated */
	0x3f3c, /*  732, 0x4cc, KEY_kana_HU, deprecated */
	0x75ae, /* 1268, 0xcf7, KEY_hebrew_kuf, deprecated */
	0x0000,
	0xe09a, /* 2282, 0xff7e, KEY_SunAltGraph, Same as XK_Mode_switch */
	0x7610, /* 1272, 0xcfa, KEY_hebrew_taf, deprecated */
	0x4a10, /*  843, 0xff7e, KEY_Arabic_switch, Alias for mode_switch */
	0x0000,
	0x5d15, /* 1017, 0x7cb, U+039b, KEY_Greek_LAMBDA, GREEK CAPITAL LETTER LAMDA */
	0x2479, /*  408, 0x60, KEY_quoteleft, deprecated */
	0x0000,
	0xeb59, /* 2395, 0x100000fc, KEY_block */
	0x0bf6, /*  157, 0xffe0, KEY_R15 */
	0x0000,
	0x01b2, /*   19, 0xff23, KEY_Henkan, Alias for Henkan_Mode */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xeb1d, /* 2392, 0x100000be, KEY_guilder */
	0x0000,
	0x0000,
	0x8af3, /* 1467, 0x1000589, U+0589, KEY_Armenian_verjaket, ARMENIAN FULL STOP */
	0x8b6f, /* 1471, 0x100058a, U+058a, KEY_Armenian_yentamna, ARMENIAN HYPHEN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x08d8, /*  109, 0xffc8, KEY_L1 */
	0x08f9, /*  111, 0xffc9, KEY_L2 */
	0x091a, /*  113, 0xffca, KEY_L3 */
	0x093b, /*  115, 0xffcb, KEY_L4 */
	0x095c, /*  117, 0xffcc, KEY_L5 */
	0x097d, /*  119, 0xffcd, KEY_L6 */
	0x099e, /*  121, 0xffce, KEY_L7 */
	0x5f72, /* 1042, 0x7eb, U+03bb, KEY_Greek_lambda, GREEK SMALL LETTER LAMDA */
	0x09e0, /*  125, 0xffd0, KEY_L9 */
	0x0a01, /*  127, 0xffd1, KEY_L10 */
	0x0a23, /*  129, 0xffd2, KEY_R1 */
	0x0a44, /*  131, 0xffd3, KEY_R2 */
	0x0a65, /*  133, 0xffd4, KEY_R3 */
	0x0a86, /*  135, 0xffd5, KEY_R4 */
	0x0aa7, /*  137, 0xffd6, KEY_R5 */
	0x0ac8, /*  139, 0xffd7, KEY_R6 */
	0x0ae9, /*  141, 0xffd8, KEY_R7 */
	0x0b0a, /*  143, 0xffd9, KEY_R8 */
	0x04f3, /*   59, 0xff7e, KEY_script_switch, Alias for mode_switch */
	0x0b4c, /*  147, 0xffdb, KEY_R10 */
	0x806d, /* 1373, 0xff7e, KEY_Hangul_switch, Alias for mode_switch */
	0x02f5, /*   33, 0xff37, KEY_Kanji_Bangou, Codeinput */
	0xe082, /* 2281, 0xff20, KEY_SunCompose, Same as XK_Multi_key */
	0x0bd4, /*  155, 0xffdf, KEY_R14 */
	0x146a, /*  234, 0xfe64, KEY_dead_psili, alias for dead_abovecomma */
	0x14a7, /*  236, 0xfe65, KEY_dead_dasia, alias for dead_abovereversedcomma */
	0x0000,
	0xea3c, /* 2383, 0x1000ff75, KEY_KP_BackTab */
	0x0000,
	0x062e, /*   74, 0xff9a, KEY_KP_Page_Up */
	0x0000,
	0x7fe1, /* 1369, 0xff3c, KEY_Hangul_SingleCandidate, Single candidate */
	0x0000,
	0x030f, /*   34, 0xff3d, KEY_Zen_Koho, Multiple/All Candidate(s) */
	0xe9c7, /* 2378, 0x1000ff70, KEY_InsertLine */
	0x0325, /*   35, 0xff3e, KEY_Mae_Koho, Previous Candidate */
	0x0000,
	0x0000,
	0x0000,
	0xe9df, /* 2379, 0x1000ff71, KEY_DeleteLine */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe9f7, /* 2380, 0x1000ff72, KEY_InsertChar */
	0x7f53, /* 1364, 0xff37, KEY_Hangul_Codeinput, Hangul code input mode */
	0x0000,
	0x0000,
	0x0000,
	0xeb32, /* 2393, 0x100000ee, KEY_IO */
	0x35a1, /*  619, 0x3a2, KEY_kappa, deprecated */
	0x8005, /* 1370, 0xff3d, KEY_Hangul_MultipleCandidate, Multiple candidate */
	0x802b, /* 1371, 0xff3e, KEY_Hangul_PreviousCandidate, Previous candidate */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x757c, /* 1266, 0xcf6, KEY_hebrew_zadi, deprecated */
	0x0000,
	0x0000,
	0x4e70, /*  878, 0x6a4, KEY_Ukranian_je, deprecated */
	0x4758, /*  818, 0x5e7, KEY_Arabic_heh, deprecated */
	0x4ebd, /*  881, 0x6a6, KEY_Ukranian_i, deprecated */
	0x4eef, /*  883, 0x6a7, KEY_Ukranian_yi, deprecated */
	0x4f21, /*  885, 0x6a8, KEY_Serbian_je, deprecated */
	0x4f53, /*  887, 0x6a9, KEY_Serbian_lje, deprecated */
	0x4f86, /*  889, 0x6aa, KEY_Serbian_nje, deprecated */
	0x40eb, /*  752, 0xff7e, KEY_kana_switch, Alias for mode_switch */
	0x0000,
	0x0000,
	};
#endif /* NEEDDTABLE */

/*
 *  KeyUnicode to object index.
 */
#ifdef NEEDUTABLE
#define UTABLESIZE 2400
#define UMAXHASH 8

static const unsigned short hashKeyuc[UTABLESIZE] = {
	0x0000,
	0x77c9, /* 1289, 0xdb0, U+0e10, KEY_Thai_thothan, THAI CHARACTER THO THAN */
	0x0000,
	0x77e3, /* 1290, 0xdb1, U+0e11, KEY_Thai_thonangmontho, THAI CHARACTER THO NANGMONTHO */
	0x0000,
	0x7803, /* 1291, 0xdb2, U+0e12, KEY_Thai_thophuthao, THAI CHARACTER THO PHUTHAO */
	0x0000,
	0x7820, /* 1292, 0xdb3, U+0e13, KEY_Thai_nonen, THAI CHARACTER NO NEN */
	0x0000,
	0x0000,
	0x0000,
	0xbb01, /* 1920, 0x10028a1, U+28a1, KEY_braille_dots_168, BRAILLE PATTERN DOTS-168 */
	0x0000,
	0x7868, /* 1295, 0xdb6, U+0e16, KEY_Thai_thothung, THAI CHARACTER THO THUNG */
	0x0000,
	0x7883, /* 1296, 0xdb7, U+0e17, KEY_Thai_thothahan, THAI CHARACTER THO THAHAN */
	0x0000,
	0x789f, /* 1297, 0xdb8, U+0e18, KEY_Thai_thothong, THAI CHARACTER THO THONG */
	0x663e, /* 1109, 0x9e1, U+2592, KEY_checkerboard, MEDIUM SHADE */
	0x78ba, /* 1298, 0xdb9, U+0e19, KEY_Thai_nonu, THAI CHARACTER NO NU */
	0x0000,
	0x78d1, /* 1299, 0xdba, U+0e1a, KEY_Thai_bobaimai, THAI CHARACTER BO BAIMAI */
	0x0000,
	0x78ec, /* 1300, 0xdbb, U+0e1b, KEY_Thai_popla, THAI CHARACTER PO PLA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xbbf6, /* 1928, 0x10028a9, U+28a9, KEY_braille_dots_1468, BRAILLE PATTERN DOTS-1468 */
	0x0000,
	0x0000,
	0x1fdc, /*  342, 0x20, U+0020, KEY_space, SPACE */
	0x1fef, /*  343, 0x21, U+0021, KEY_exclam, EXCLAMATION MARK */
	0x2003, /*  344, 0x22, U+0022, KEY_quotedbl, QUOTATION MARK */
	0x2019, /*  345, 0x23, U+0023, KEY_numbersign, NUMBER SIGN */
	0x2031, /*  346, 0x24, U+0024, KEY_dollar, DOLLAR SIGN */
	0x2045, /*  347, 0x25, U+0025, KEY_percent, PERCENT SIGN */
	0x205a, /*  348, 0x26, U+0026, KEY_ampersand, AMPERSAND */
	0x2071, /*  349, 0x27, U+0027, KEY_apostrophe, APOSTROPHE */
	0x20a1, /*  351, 0x28, U+0028, KEY_parenleft, LEFT PARENTHESIS */
	0x20b8, /*  352, 0x29, U+0029, KEY_parenright, RIGHT PARENTHESIS */
	0x20d0, /*  353, 0x2a, U+002a, KEY_asterisk, ASTERISK */
	0x20e6, /*  354, 0x2b, U+002b, KEY_plus, PLUS SIGN */
	0x20f8, /*  355, 0x2c, U+002c, KEY_comma, COMMA */
	0x210b, /*  356, 0x2d, U+002d, KEY_minus, HYPHEN-MINUS */
	0x211e, /*  357, 0x2e, U+002e, KEY_period, FULL STOP */
	0x2132, /*  358, 0x2f, U+002f, KEY_slash, SOLIDUS */
	0x2145, /*  359, 0x30, U+0030, KEY_0, DIGIT ZERO */
	0x2154, /*  360, 0x31, U+0031, KEY_1, DIGIT ONE */
	0x2163, /*  361, 0x32, U+0032, KEY_2, DIGIT TWO */
	0x2172, /*  362, 0x33, U+0033, KEY_3, DIGIT THREE */
	0x2181, /*  363, 0x34, U+0034, KEY_4, DIGIT FOUR */
	0x2190, /*  364, 0x35, U+0035, KEY_5, DIGIT FIVE */
	0x219f, /*  365, 0x36, U+0036, KEY_6, DIGIT SIX */
	0x21ae, /*  366, 0x37, U+0037, KEY_7, DIGIT SEVEN */
	0x21bd, /*  367, 0x38, U+0038, KEY_8, DIGIT EIGHT */
	0x21cc, /*  368, 0x39, U+0039, KEY_9, DIGIT NINE */
	0x21db, /*  369, 0x3a, U+003a, KEY_colon, COLON */
	0x21ee, /*  370, 0x3b, U+003b, KEY_semicolon, SEMICOLON */
	0x2205, /*  371, 0x3c, U+003c, KEY_less, LESS-THAN SIGN */
	0x2217, /*  372, 0x3d, U+003d, KEY_equal, EQUALS SIGN */
	0x222a, /*  373, 0x3e, U+003e, KEY_greater, GREATER-THAN SIGN */
	0x223f, /*  374, 0x3f, U+003f, KEY_question, QUESTION MARK */
	0x2255, /*  375, 0x40, U+0040, KEY_at, COMMERCIAL AT */
	0x2265, /*  376, 0x41, U+0041, KEY_A, LATIN CAPITAL LETTER A */
	0x2274, /*  377, 0x42, U+0042, KEY_B, LATIN CAPITAL LETTER B */
	0x2283, /*  378, 0x43, U+0043, KEY_C, LATIN CAPITAL LETTER C */
	0x2292, /*  379, 0x44, U+0044, KEY_D, LATIN CAPITAL LETTER D */
	0x22a1, /*  380, 0x45, U+0045, KEY_E, LATIN CAPITAL LETTER E */
	0x22b0, /*  381, 0x46, U+0046, KEY_F, LATIN CAPITAL LETTER F */
	0x22bf, /*  382, 0x47, U+0047, KEY_G, LATIN CAPITAL LETTER G */
	0x22ce, /*  383, 0x48, U+0048, KEY_H, LATIN CAPITAL LETTER H */
	0x22dd, /*  384, 0x49, U+0049, KEY_I, LATIN CAPITAL LETTER I */
	0x22ec, /*  385, 0x4a, U+004a, KEY_J, LATIN CAPITAL LETTER J */
	0x22fb, /*  386, 0x4b, U+004b, KEY_K, LATIN CAPITAL LETTER K */
	0x230a, /*  387, 0x4c, U+004c, KEY_L, LATIN CAPITAL LETTER L */
	0x2319, /*  388, 0x4d, U+004d, KEY_M, LATIN CAPITAL LETTER M */
	0x2328, /*  389, 0x4e, U+004e, KEY_N, LATIN CAPITAL LETTER N */
	0x2337, /*  390, 0x4f, U+004f, KEY_O, LATIN CAPITAL LETTER O */
	0x2346, /*  391, 0x50, U+0050, KEY_P, LATIN CAPITAL LETTER P */
	0x2355, /*  392, 0x51, U+0051, KEY_Q, LATIN CAPITAL LETTER Q */
	0x2364, /*  393, 0x52, U+0052, KEY_R, LATIN CAPITAL LETTER R */
	0x2373, /*  394, 0x53, U+0053, KEY_S, LATIN CAPITAL LETTER S */
	0x2382, /*  395, 0x54, U+0054, KEY_T, LATIN CAPITAL LETTER T */
	0x2391, /*  396, 0x55, U+0055, KEY_U, LATIN CAPITAL LETTER U */
	0x23a0, /*  397, 0x56, U+0056, KEY_V, LATIN CAPITAL LETTER V */
	0x23af, /*  398, 0x57, U+0057, KEY_W, LATIN CAPITAL LETTER W */
	0x23be, /*  399, 0x58, U+0058, KEY_X, LATIN CAPITAL LETTER X */
	0x23cd, /*  400, 0x59, U+0059, KEY_Y, LATIN CAPITAL LETTER Y */
	0x23dc, /*  401, 0x5a, U+005a, KEY_Z, LATIN CAPITAL LETTER Z */
	0x23eb, /*  402, 0x5b, U+005b, KEY_bracketleft, LEFT SQUARE BRACKET */
	0x2404, /*  403, 0x5c, U+005c, KEY_backslash, REVERSE SOLIDUS */
	0x241b, /*  404, 0x5d, U+005d, KEY_bracketright, RIGHT SQUARE BRACKET */
	0x2435, /*  405, 0x5e, U+005e, KEY_asciicircum, CIRCUMFLEX ACCENT */
	0x244e, /*  406, 0x5f, U+005f, KEY_underscore, LOW LINE */
	0x2466, /*  407, 0x60, U+0060, KEY_grave, GRAVE ACCENT */
	0x2490, /*  409, 0x61, U+0061, KEY_a, LATIN SMALL LETTER A */
	0x249f, /*  410, 0x62, U+0062, KEY_b, LATIN SMALL LETTER B */
	0x24ae, /*  411, 0x63, U+0063, KEY_c, LATIN SMALL LETTER C */
	0x24bd, /*  412, 0x64, U+0064, KEY_d, LATIN SMALL LETTER D */
	0x24cc, /*  413, 0x65, U+0065, KEY_e, LATIN SMALL LETTER E */
	0x24db, /*  414, 0x66, U+0066, KEY_f, LATIN SMALL LETTER F */
	0x24ea, /*  415, 0x67, U+0067, KEY_g, LATIN SMALL LETTER G */
	0x24f9, /*  416, 0x68, U+0068, KEY_h, LATIN SMALL LETTER H */
	0x2508, /*  417, 0x69, U+0069, KEY_i, LATIN SMALL LETTER I */
	0x2517, /*  418, 0x6a, U+006a, KEY_j, LATIN SMALL LETTER J */
	0x2526, /*  419, 0x6b, U+006b, KEY_k, LATIN SMALL LETTER K */
	0x2535, /*  420, 0x6c, U+006c, KEY_l, LATIN SMALL LETTER L */
	0x2544, /*  421, 0x6d, U+006d, KEY_m, LATIN SMALL LETTER M */
	0x2553, /*  422, 0x6e, U+006e, KEY_n, LATIN SMALL LETTER N */
	0x2562, /*  423, 0x6f, U+006f, KEY_o, LATIN SMALL LETTER O */
	0x2571, /*  424, 0x70, U+0070, KEY_p, LATIN SMALL LETTER P */
	0x2580, /*  425, 0x71, U+0071, KEY_q, LATIN SMALL LETTER Q */
	0x258f, /*  426, 0x72, U+0072, KEY_r, LATIN SMALL LETTER R */
	0x259e, /*  427, 0x73, U+0073, KEY_s, LATIN SMALL LETTER S */
	0x25ad, /*  428, 0x74, U+0074, KEY_t, LATIN SMALL LETTER T */
	0x25bc, /*  429, 0x75, U+0075, KEY_u, LATIN SMALL LETTER U */
	0x25cb, /*  430, 0x76, U+0076, KEY_v, LATIN SMALL LETTER V */
	0x25da, /*  431, 0x77, U+0077, KEY_w, LATIN SMALL LETTER W */
	0x25e9, /*  432, 0x78, U+0078, KEY_x, LATIN SMALL LETTER X */
	0x25f8, /*  433, 0x79, U+0079, KEY_y, LATIN SMALL LETTER Y */
	0x2607, /*  434, 0x7a, U+007a, KEY_z, LATIN SMALL LETTER Z */
	0x2616, /*  435, 0x7b, U+007b, KEY_braceleft, LEFT CURLY BRACKET */
	0x262d, /*  436, 0x7c, U+007c, KEY_bar, VERTICAL LINE */
	0x263e, /*  437, 0x7d, U+007d, KEY_braceright, RIGHT CURLY BRACKET */
	0x2656, /*  438, 0x7e, U+007e, KEY_asciitilde, TILDE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6624, /* 1108, 0x9e0, U+25c6, KEY_soliddiamond, BLACK DIAMOND */
	0x6fe2, /* 1208, 0xaf9, U+260e, KEY_telephone, BLACK TELEPHONE */
	0x7e72, /* 1355, 0xdf7, U+0e57, KEY_Thai_lekchet, THAI DIGIT SEVEN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x719e, /* 1227, 0xbcf, U+25cb, KEY_circle, WHITE CIRCLE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x266e, /*  439, 0xa0, U+00a0, KEY_nobreakspace, NO-BREAK SPACE */
	0x2688, /*  440, 0xa1, U+00a1, KEY_exclamdown, INVERTED EXCLAMATION MARK */
	0x26a0, /*  441, 0xa2, U+00a2, KEY_cent, CENT SIGN */
	0x26b2, /*  442, 0xa3, U+00a3, KEY_sterling, POUND SIGN */
	0x26c8, /*  443, 0xa4, U+00a4, KEY_currency, CURRENCY SIGN */
	0x26de, /*  444, 0xa5, U+00a5, KEY_yen, YEN SIGN */
	0x26ef, /*  445, 0xa6, U+00a6, KEY_brokenbar, BROKEN BAR */
	0x2706, /*  446, 0xa7, U+00a7, KEY_section, SECTION SIGN */
	0x271b, /*  447, 0xa8, U+00a8, KEY_diaeresis, DIAERESIS */
	0x2732, /*  448, 0xa9, U+00a9, KEY_copyright, COPYRIGHT SIGN */
	0x2749, /*  449, 0xaa, U+00aa, KEY_ordfeminine, FEMININE ORDINAL INDICATOR */
	0x2762, /*  450, 0xab, U+00ab, KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x277d, /*  451, 0xac, U+00ac, KEY_notsign, NOT SIGN */
	0x2792, /*  452, 0xad, U+00ad, KEY_hyphen, SOFT HYPHEN */
	0x27a6, /*  453, 0xae, U+00ae, KEY_registered, REGISTERED SIGN */
	0x27be, /*  454, 0xaf, U+00af, KEY_macron, MACRON */
	0x27d2, /*  455, 0xb0, U+00b0, KEY_degree, DEGREE SIGN */
	0x27e6, /*  456, 0xb1, U+00b1, KEY_plusminus, PLUS-MINUS SIGN */
	0x27fd, /*  457, 0xb2, U+00b2, KEY_twosuperior, SUPERSCRIPT TWO */
	0x2816, /*  458, 0xb3, U+00b3, KEY_threesuperior, SUPERSCRIPT THREE */
	0x2831, /*  459, 0xb4, U+00b4, KEY_acute, ACUTE ACCENT */
	0x2844, /*  460, 0xb5, U+00b5, KEY_mu, MICRO SIGN */
	0x2854, /*  461, 0xb6, U+00b6, KEY_paragraph, PILCROW SIGN */
	0x286b, /*  462, 0xb7, U+00b7, KEY_periodcentered, MIDDLE DOT */
	0x2887, /*  463, 0xb8, U+00b8, KEY_cedilla, CEDILLA */
	0x289c, /*  464, 0xb9, U+00b9, KEY_onesuperior, SUPERSCRIPT ONE */
	0x28b5, /*  465, 0xba, U+00ba, KEY_masculine, MASCULINE ORDINAL INDICATOR */
	0x28cc, /*  466, 0xbb, U+00bb, KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x28e8, /*  467, 0xbc, U+00bc, KEY_onequarter, VULGAR FRACTION ONE QUARTER */
	0x2900, /*  468, 0xbd, U+00bd, KEY_onehalf, VULGAR FRACTION ONE HALF */
	0x2915, /*  469, 0xbe, U+00be, KEY_threequarters, VULGAR FRACTION THREE QUARTERS */
	0x2930, /*  470, 0xbf, U+00bf, KEY_questiondown, INVERTED QUESTION MARK */
	0x294a, /*  471, 0xc0, U+00c0, KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */
	0x295e, /*  472, 0xc1, U+00c1, KEY_Aacute, LATIN CAPITAL LETTER A WITH ACUTE */
	0x2972, /*  473, 0xc2, U+00c2, KEY_Acircumflex, LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
	0x298b, /*  474, 0xc3, U+00c3, KEY_Atilde, LATIN CAPITAL LETTER A WITH TILDE */
	0x299f, /*  475, 0xc4, U+00c4, KEY_Adiaeresis, LATIN CAPITAL LETTER A WITH DIAERESIS */
	0x29b7, /*  476, 0xc5, U+00c5, KEY_Aring, LATIN CAPITAL LETTER A WITH RING ABOVE */
	0x29ca, /*  477, 0xc6, U+00c6, KEY_AE, LATIN CAPITAL LETTER AE */
	0x29da, /*  478, 0xc7, U+00c7, KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */
	0x29f0, /*  479, 0xc8, U+00c8, KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */
	0x2a04, /*  480, 0xc9, U+00c9, KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */
	0x2a18, /*  481, 0xca, U+00ca, KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
	0x2a31, /*  482, 0xcb, U+00cb, KEY_Ediaeresis, LATIN CAPITAL LETTER E WITH DIAERESIS */
	0x2a49, /*  483, 0xcc, U+00cc, KEY_Igrave, LATIN CAPITAL LETTER I WITH GRAVE */
	0x2a5d, /*  484, 0xcd, U+00cd, KEY_Iacute, LATIN CAPITAL LETTER I WITH ACUTE */
	0x2a71, /*  485, 0xce, U+00ce, KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
	0x2a8a, /*  486, 0xcf, U+00cf, KEY_Idiaeresis, LATIN CAPITAL LETTER I WITH DIAERESIS */
	0x2aa2, /*  487, 0xd0, U+00d0, KEY_ETH, LATIN CAPITAL LETTER ETH */
	0x2ac4, /*  489, 0xd1, U+00d1, KEY_Ntilde, LATIN CAPITAL LETTER N WITH TILDE */
	0x2ad8, /*  490, 0xd2, U+00d2, KEY_Ograve, LATIN CAPITAL LETTER O WITH GRAVE */
	0x2aec, /*  491, 0xd3, U+00d3, KEY_Oacute, LATIN CAPITAL LETTER O WITH ACUTE */
	0x2b00, /*  492, 0xd4, U+00d4, KEY_Ocircumflex, LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
	0x2b19, /*  493, 0xd5, U+00d5, KEY_Otilde, LATIN CAPITAL LETTER O WITH TILDE */
	0x2b2d, /*  494, 0xd6, U+00d6, KEY_Odiaeresis, LATIN CAPITAL LETTER O WITH DIAERESIS */
	0x2b45, /*  495, 0xd7, U+00d7, KEY_multiply, MULTIPLICATION SIGN */
	0x2b5b, /*  496, 0xd8, U+00d8, KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */
	0x2b85, /*  498, 0xd9, U+00d9, KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */
	0x2b99, /*  499, 0xda, U+00da, KEY_Uacute, LATIN CAPITAL LETTER U WITH ACUTE */
	0x2bad, /*  500, 0xdb, U+00db, KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
	0x2bc6, /*  501, 0xdc, U+00dc, KEY_Udiaeresis, LATIN CAPITAL LETTER U WITH DIAERESIS */
	0x2bde, /*  502, 0xdd, U+00dd, KEY_Yacute, LATIN CAPITAL LETTER Y WITH ACUTE */
	0x2bf2, /*  503, 0xde, U+00de, KEY_THORN, LATIN CAPITAL LETTER THORN */
	0x2c18, /*  505, 0xdf, U+00df, KEY_ssharp, LATIN SMALL LETTER SHARP S */
	0x2c2c, /*  506, 0xe0, U+00e0, KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */
	0x2c40, /*  507, 0xe1, U+00e1, KEY_aacute, LATIN SMALL LETTER A WITH ACUTE */
	0x2c54, /*  508, 0xe2, U+00e2, KEY_acircumflex, LATIN SMALL LETTER A WITH CIRCUMFLEX */
	0x2c6d, /*  509, 0xe3, U+00e3, KEY_atilde, LATIN SMALL LETTER A WITH TILDE */
	0x2c81, /*  510, 0xe4, U+00e4, KEY_adiaeresis, LATIN SMALL LETTER A WITH DIAERESIS */
	0x2c99, /*  511, 0xe5, U+00e5, KEY_aring, LATIN SMALL LETTER A WITH RING ABOVE */
	0x2cac, /*  512, 0xe6, U+00e6, KEY_ae, LATIN SMALL LETTER AE */
	0x2cbc, /*  513, 0xe7, U+00e7, KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */
	0x2cd2, /*  514, 0xe8, U+00e8, KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */
	0x2ce6, /*  515, 0xe9, U+00e9, KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */
	0x2cfa, /*  516, 0xea, U+00ea, KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */
	0x2d13, /*  517, 0xeb, U+00eb, KEY_ediaeresis, LATIN SMALL LETTER E WITH DIAERESIS */
	0x2d2b, /*  518, 0xec, U+00ec, KEY_igrave, LATIN SMALL LETTER I WITH GRAVE */
	0x2d3f, /*  519, 0xed, U+00ed, KEY_iacute, LATIN SMALL LETTER I WITH ACUTE */
	0x2d53, /*  520, 0xee, U+00ee, KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */
	0x2d6c, /*  521, 0xef, U+00ef, KEY_idiaeresis, LATIN SMALL LETTER I WITH DIAERESIS */
	0x2d84, /*  522, 0xf0, U+00f0, KEY_eth, LATIN SMALL LETTER ETH */
	0x2d95, /*  523, 0xf1, U+00f1, KEY_ntilde, LATIN SMALL LETTER N WITH TILDE */
	0x2da9, /*  524, 0xf2, U+00f2, KEY_ograve, LATIN SMALL LETTER O WITH GRAVE */
	0x2dbd, /*  525, 0xf3, U+00f3, KEY_oacute, LATIN SMALL LETTER O WITH ACUTE */
	0x2dd1, /*  526, 0xf4, U+00f4, KEY_ocircumflex, LATIN SMALL LETTER O WITH CIRCUMFLEX */
	0x2dea, /*  527, 0xf5, U+00f5, KEY_otilde, LATIN SMALL LETTER O WITH TILDE */
	0x2dfe, /*  528, 0xf6, U+00f6, KEY_odiaeresis, LATIN SMALL LETTER O WITH DIAERESIS */
	0x2e16, /*  529, 0xf7, U+00f7, KEY_division, DIVISION SIGN */
	0x2e2c, /*  530, 0xf8, U+00f8, KEY_oslash, LATIN SMALL LETTER O WITH STROKE */
	0x2e56, /*  532, 0xf9, U+00f9, KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */
	0x2e6a, /*  533, 0xfa, U+00fa, KEY_uacute, LATIN SMALL LETTER U WITH ACUTE */
	0x2e7e, /*  534, 0xfb, U+00fb, KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */
	0x2e97, /*  535, 0xfc, U+00fc, KEY_udiaeresis, LATIN SMALL LETTER U WITH DIAERESIS */
	0x2eaf, /*  536, 0xfd, U+00fd, KEY_yacute, LATIN SMALL LETTER Y WITH ACUTE */
	0x2ec3, /*  537, 0xfe, U+00fe, KEY_thorn, LATIN SMALL LETTER THORN */
	0x2ed6, /*  538, 0xff, U+00ff, KEY_ydiaeresis, LATIN SMALL LETTER Y WITH DIAERESIS */
	0x36d4, /*  634, 0x3c0, U+0100, KEY_Amacron, LATIN CAPITAL LETTER A WITH MACRON */
	0x37a9, /*  644, 0x3e0, U+0101, KEY_amacron, LATIN SMALL LETTER A WITH MACRON */
	0x30f3, /*  564, 0x1c3, U+0102, KEY_Abreve, LATIN CAPITAL LETTER A WITH BREVE */
	0x3242, /*  580, 0x1e3, U+0103, KEY_abreve, LATIN SMALL LETTER A WITH BREVE */
	0x2eee, /*  539, 0x1a1, U+0104, KEY_Aogonek, LATIN CAPITAL LETTER A WITH OGONEK */
	0x2fd0, /*  550, 0x1b1, U+0105, KEY_aogonek, LATIN SMALL LETTER A WITH OGONEK */
	0x311b, /*  566, 0x1c6, U+0106, KEY_Cacute, LATIN CAPITAL LETTER C WITH ACUTE */
	0x326a, /*  582, 0x1e6, U+0107, KEY_cacute, LATIN SMALL LETTER C WITH ACUTE */
	0x348d, /*  607, 0x2c6, U+0108, KEY_Ccircumflex, LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
	0x351a, /*  613, 0x2e6, U+0109, KEY_ccircumflex, LATIN SMALL LETTER C WITH CIRCUMFLEX */
	0x3476, /*  606, 0x2c5, U+010a, KEY_Cabovedot, LATIN CAPITAL LETTER C WITH DOT ABOVE */
	0x3503, /*  612, 0x2e5, U+010b, KEY_cabovedot, LATIN SMALL LETTER C WITH DOT ABOVE */
	0x312f, /*  567, 0x1c8, U+010c, KEY_Ccaron, LATIN CAPITAL LETTER C WITH CARON */
	0x327e, /*  583, 0x1e8, U+010d, KEY_ccaron, LATIN SMALL LETTER C WITH CARON */
	0x316c, /*  570, 0x1cf, U+010e, KEY_Dcaron, LATIN CAPITAL LETTER D WITH CARON */
	0x32bb, /*  586, 0x1ef, U+010f, KEY_dcaron, LATIN SMALL LETTER D WITH CARON */
	0x3180, /*  571, 0x1d0, U+0110, KEY_Dstroke, LATIN CAPITAL LETTER D WITH STROKE */
	0x32cf, /*  587, 0x1f0, U+0111, KEY_dstroke, LATIN SMALL LETTER D WITH STROKE */
	0x35f4, /*  623, 0x3aa, U+0112, KEY_Emacron, LATIN CAPITAL LETTER E WITH MACRON */
	0x3673, /*  629, 0x3ba, U+0113, KEY_emacron, LATIN SMALL LETTER E WITH MACRON */
	0x0000,
	0x8e08, /* 1496, 0x100053a, U+053a, KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */
	0x36fe, /*  636, 0x3cc, U+0116, KEY_Eabovedot, LATIN CAPITAL LETTER E WITH DOT ABOVE */
	0x37d3, /*  646, 0x3ec, U+0117, KEY_eabovedot, LATIN SMALL LETTER E WITH DOT ABOVE */
	0x3143, /*  568, 0x1ca, U+0118, KEY_Eogonek, LATIN CAPITAL LETTER E WITH OGONEK */
	0x3292, /*  584, 0x1ea, U+0119, KEY_eogonek, LATIN SMALL LETTER E WITH OGONEK */
	0x3158, /*  569, 0x1cc, U+011a, KEY_Ecaron, LATIN CAPITAL LETTER E WITH CARON */
	0x32a7, /*  585, 0x1ec, U+011b, KEY_ecaron, LATIN SMALL LETTER E WITH CARON */
	0x34bd, /*  609, 0x2d8, U+011c, KEY_Gcircumflex, LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
	0x354a, /*  615, 0x2f8, U+011d, KEY_gcircumflex, LATIN SMALL LETTER G WITH CIRCUMFLEX */
	0x33d8, /*  599, 0x2ab, U+011e, KEY_Gbreve, LATIN CAPITAL LETTER G WITH BREVE */
	0x3449, /*  604, 0x2bb, U+011f, KEY_gbreve, LATIN SMALL LETTER G WITH BREVE */
	0x34a6, /*  608, 0x2d5, U+0120, KEY_Gabovedot, LATIN CAPITAL LETTER G WITH DOT ABOVE */
	0x3533, /*  614, 0x2f5, U+0121, KEY_gabovedot, LATIN SMALL LETTER G WITH DOT ABOVE */
	0x3609, /*  624, 0x3ab, U+0122, KEY_Gcedilla, LATIN CAPITAL LETTER G WITH CEDILLA */
	0x3688, /*  630, 0x3bb, U+0123, KEY_gcedilla, LATIN SMALL LETTER G WITH CEDILLA */
	0x33a8, /*  597, 0x2a6, U+0124, KEY_Hcircumflex, LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
	0x341a, /*  602, 0x2b6, U+0125, KEY_hcircumflex, LATIN SMALL LETTER H WITH CIRCUMFLEX */
	0x3393, /*  596, 0x2a1, U+0126, KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */
	0x3405, /*  601, 0x2b1, U+0127, KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */
	0x35ca, /*  621, 0x3a5, U+0128, KEY_Itilde, LATIN CAPITAL LETTER I WITH TILDE */
	0x3649, /*  627, 0x3b5, U+0129, KEY_itilde, LATIN SMALL LETTER I WITH TILDE */
	0x3715, /*  637, 0x3cf, U+012a, KEY_Imacron, LATIN CAPITAL LETTER I WITH MACRON */
	0x37ea, /*  647, 0x3ef, U+012b, KEY_imacron, LATIN SMALL LETTER I WITH MACRON */
	0x3b35, /*  685, 0x4a2, U+300c, KEY_kana_openingbracket, LEFT CORNER BRACKET */
	0x3b56, /*  686, 0x4a3, U+300d, KEY_kana_closingbracket, RIGHT CORNER BRACKET */
	0x36e9, /*  635, 0x3c7, U+012e, KEY_Iogonek, LATIN CAPITAL LETTER I WITH OGONEK */
	0x37be, /*  645, 0x3e7, U+012f, KEY_iogonek, LATIN SMALL LETTER I WITH OGONEK */
	0x33c1, /*  598, 0x2a9, U+0130, KEY_Iabovedot, LATIN CAPITAL LETTER I WITH DOT ABOVE */
	0x3433, /*  603, 0x2b9, U+0131, KEY_idotless, LATIN SMALL LETTER DOTLESS I */
	0x0000,
	0x0000,
	0x33ec, /*  600, 0x2ac, U+0134, KEY_Jcircumflex, LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
	0x345d, /*  605, 0x2bc, U+0135, KEY_jcircumflex, LATIN SMALL LETTER J WITH CIRCUMFLEX */
	0x3755, /*  640, 0x3d3, U+0136, KEY_Kcedilla, LATIN CAPITAL LETTER K WITH CEDILLA */
	0x382a, /*  650, 0x3f3, U+0137, KEY_kcedilla, LATIN SMALL LETTER K WITH CEDILLA */
	0x3590, /*  618, 0x3a2, U+0138, KEY_kra, LATIN SMALL LETTER KRA */
	0x3107, /*  565, 0x1c5, U+0139, KEY_Lacute, LATIN CAPITAL LETTER L WITH ACUTE */
	0x3256, /*  581, 0x1e5, U+013a, KEY_lacute, LATIN SMALL LETTER L WITH ACUTE */
	0x35de, /*  622, 0x3a6, U+013b, KEY_Lcedilla, LATIN CAPITAL LETTER L WITH CEDILLA */
	0x365d, /*  628, 0x3b6, U+013c, KEY_lcedilla, LATIN SMALL LETTER L WITH CEDILLA */
	0x2f2b, /*  542, 0x1a5, U+013d, KEY_Lcaron, LATIN CAPITAL LETTER L WITH CARON */
	0x300e, /*  553, 0x1b5, U+013e, KEY_lcaron, LATIN SMALL LETTER L WITH CARON */
	0x0000,
	0x0000,
	0x2f16, /*  541, 0x1a3, U+0141, KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */
	0x2ff9, /*  552, 0x1b3, U+0142, KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */
	0x3195, /*  572, 0x1d1, U+0143, KEY_Nacute, LATIN CAPITAL LETTER N WITH ACUTE */
	0x32e4, /*  588, 0x1f1, U+0144, KEY_nacute, LATIN SMALL LETTER N WITH ACUTE */
	0x372a, /*  638, 0x3d1, U+0145, KEY_Ncedilla, LATIN CAPITAL LETTER N WITH CEDILLA */
	0x37ff, /*  648, 0x3f1, U+0146, KEY_ncedilla, LATIN SMALL LETTER N WITH CEDILLA */
	0x31a9, /*  573, 0x1d2, U+0147, KEY_Ncaron, LATIN CAPITAL LETTER N WITH CARON */
	0x32f8, /*  589, 0x1f2, U+0148, KEY_ncaron, LATIN SMALL LETTER N WITH CARON */
	0x0000,
	0x36b2, /*  632, 0x3bd, U+014a, KEY_ENG, LATIN CAPITAL LETTER ENG */
	0x36c3, /*  633, 0x3bf, U+014b, KEY_eng, LATIN SMALL LETTER ENG */
	0x3740, /*  639, 0x3d2, U+014c, KEY_Omacron, LATIN CAPITAL LETTER O WITH MACRON */
	0x3815, /*  649, 0x3f2, U+014d, KEY_omacron, LATIN SMALL LETTER O WITH MACRON */
	0x0000,
	0xacc9, /* 1802, 0x100282b, U+282b, KEY_braille_dots_1246, BRAILLE PATTERN DOTS-1246 */
	0x31bd, /*  574, 0x1d5, U+0150, KEY_Odoubleacute, LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
	0x330c, /*  590, 0x1f5, U+0151, KEY_odoubleacute, LATIN SMALL LETTER O WITH DOUBLE ACUTE */
	0x3acc, /*  680, 0x13bc, U+0152, KEY_OE, LATIN CAPITAL LIGATURE OE */
	0x3adc, /*  681, 0x13bd, U+0153, KEY_oe, LATIN SMALL LIGATURE OE */
	0x30df, /*  563, 0x1c0, U+0154, KEY_Racute, LATIN CAPITAL LETTER R WITH ACUTE */
	0x322e, /*  579, 0x1e0, U+0155, KEY_racute, LATIN SMALL LETTER R WITH ACUTE */
	0x35b4, /*  620, 0x3a3, U+0156, KEY_Rcedilla, LATIN CAPITAL LETTER R WITH CEDILLA */
	0x3633, /*  626, 0x3b3, U+0157, KEY_rcedilla, LATIN SMALL LETTER R WITH CEDILLA */
	0x31d7, /*  575, 0x1d8, U+0158, KEY_Rcaron, LATIN CAPITAL LETTER R WITH CARON */
	0x3326, /*  591, 0x1f8, U+0159, KEY_rcaron, LATIN SMALL LETTER R WITH CARON */
	0x2f3f, /*  543, 0x1a6, U+015a, KEY_Sacute, LATIN CAPITAL LETTER S WITH ACUTE */
	0x3022, /*  554, 0x1b6, U+015b, KEY_sacute, LATIN SMALL LETTER S WITH ACUTE */
	0x34ea, /*  611, 0x2de, U+015c, KEY_Scircumflex, LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
	0x3577, /*  617, 0x2fe, U+015d, KEY_scircumflex, LATIN SMALL LETTER S WITH CIRCUMFLEX */
	0x2f67, /*  545, 0x1aa, U+015e, KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */
	0x305d, /*  557, 0x1ba, U+015f, KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */
	0x2f53, /*  544, 0x1a9, U+0160, KEY_Scaron, LATIN CAPITAL LETTER S WITH CARON */
	0x3049, /*  556, 0x1b9, U+0161, KEY_scaron, LATIN SMALL LETTER S WITH CARON */
	0x3218, /*  578, 0x1de, U+0162, KEY_Tcedilla, LATIN CAPITAL LETTER T WITH CEDILLA */
	0x3367, /*  594, 0x1fe, U+0163, KEY_tcedilla, LATIN SMALL LETTER T WITH CEDILLA */
	0x2f7d, /*  546, 0x1ab, U+0164, KEY_Tcaron, LATIN CAPITAL LETTER T WITH CARON */
	0x3073, /*  558, 0x1bb, U+0165, KEY_tcaron, LATIN SMALL LETTER T WITH CARON */
	0x361f, /*  625, 0x3ac, U+0166, KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */
	0x369e, /*  631, 0x3bc, U+0167, KEY_tslash, LATIN SMALL LETTER T WITH STROKE */
	0x3780, /*  642, 0x3dd, U+0168, KEY_Utilde, LATIN CAPITAL LETTER U WITH TILDE */
	0x3855, /*  652, 0x3fd, U+0169, KEY_utilde, LATIN SMALL LETTER U WITH TILDE */
	0x3794, /*  643, 0x3de, U+016a, KEY_Umacron, LATIN CAPITAL LETTER U WITH MACRON */
	0x3869, /*  653, 0x3fe, U+016b, KEY_umacron, LATIN SMALL LETTER U WITH MACRON */
	0x34d6, /*  610, 0x2dd, U+016c, KEY_Ubreve, LATIN CAPITAL LETTER U WITH BREVE */
	0x3563, /*  616, 0x2fd, U+016d, KEY_ubreve, LATIN SMALL LETTER U WITH BREVE */
	0x31eb, /*  576, 0x1d9, U+016e, KEY_Uring, LATIN CAPITAL LETTER U WITH RING ABOVE */
	0x333a, /*  592, 0x1f9, U+016f, KEY_uring, LATIN SMALL LETTER U WITH RING ABOVE */
	0x31fe, /*  577, 0x1db, U+0170, KEY_Udoubleacute, LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
	0x334d, /*  593, 0x1fb, U+0171, KEY_udoubleacute, LATIN SMALL LETTER U WITH DOUBLE ACUTE */
	0x376b, /*  641, 0x3d9, U+0172, KEY_Uogonek, LATIN CAPITAL LETTER U WITH OGONEK */
	0x3840, /*  651, 0x3f9, U+0173, KEY_uogonek, LATIN SMALL LETTER U WITH OGONEK */
	0x387e, /*  654, 0x1000174, U+0174, KEY_Wcircumflex, LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
	0x3897, /*  655, 0x1000175, U+0175, KEY_wcircumflex, LATIN SMALL LETTER W WITH CIRCUMFLEX */
	0x38b0, /*  656, 0x1000176, U+0176, KEY_Ycircumflex, LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
	0x38c9, /*  657, 0x1000177, U+0177, KEY_ycircumflex, LATIN SMALL LETTER Y WITH CIRCUMFLEX */
	0x3aec, /*  682, 0x13be, U+0178, KEY_Ydiaeresis, LATIN CAPITAL LETTER Y WITH DIAERESIS */
	0x2f91, /*  547, 0x1ac, U+0179, KEY_Zacute, LATIN CAPITAL LETTER Z WITH ACUTE */
	0x3087, /*  559, 0x1bc, U+017a, KEY_zacute, LATIN SMALL LETTER Z WITH ACUTE */
	0x2fb9, /*  549, 0x1af, U+017b, KEY_Zabovedot, LATIN CAPITAL LETTER Z WITH DOT ABOVE */
	0x30c8, /*  562, 0x1bf, U+017c, KEY_zabovedot, LATIN SMALL LETTER Z WITH DOT ABOVE */
	0x2fa5, /*  548, 0x1ae, U+017d, KEY_Zcaron, LATIN CAPITAL LETTER Z WITH CARON */
	0x30b4, /*  561, 0x1be, U+017e, KEY_zcaron, LATIN SMALL LETTER Z WITH CARON */
	0xae38, /* 1814, 0x1002837, U+2837, KEY_braille_dots_12356, BRAILLE PATTERN DOTS-12356 */
	0x0000,
	0x6fc8, /* 1207, 0xaf8, U+2640, KEY_femalesymbol, FEMALE SIGN */
	0x0000,
	0x8f8e, /* 1511, 0x1000571, U+0571, KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */
	0x0000,
	0x6fb0, /* 1206, 0xaf7, U+2642, KEY_malesymbol, MALE SIGN */
	0x0000,
	0x8ff9, /* 1515, 0x1000573, U+0573, KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x98ef, /* 1606, 0x100018f, U+018f, KEY_SCHWA, LATIN CAPITAL LETTER SCHWA */
	0x0000,
	0x0000,
	0x65a0, /* 1102, 0x8f6, U+0192, KEY_function, LATIN SMALL LETTER F WITH HOOK */
	0x6f4d, /* 1202, 0xaf3, U+2713, KEY_checkmark, CHECK MARK */
	0x0000,
	0x0000,
	0x0000,
	0x6f64, /* 1203, 0xaf4, U+2717, KEY_ballotcross, BALLOT X */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6ca9, /* 1177, 0xad9, U+271d, KEY_latincross, LATIN CROSS */
	0x0000,
	0x985d, /* 1599, 0x100019f, U+019f, KEY_Obarred, LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
	0x6f05, /* 1199, 0xaf0, U+2720, KEY_maltesecross, MALTESE CROSS */
	0xa236, /* 1701, 0x10001a1, U+01a1, KEY_ohorn, LATIN SMALL LETTER O WITH HORN */
	0x0000,
	0xc35f, /* 1988, 0x10028e5, U+28e5, KEY_braille_dots_13678, BRAILLE PATTERN DOTS-13678 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9363, /* 1549, 0x1000584, U+0584, KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */
	0x0000,
	0xaf8d, /* 1825, 0x1002842, U+2842, KEY_braille_dots_27, BRAILLE PATTERN DOTS-27 */
	0x0000,
	0x0000,
	0x0000,
	0xa249, /* 1702, 0x10001af, U+01af, KEY_Uhorn, LATIN CAPITAL LETTER U WITH HORN */
	0xa25c, /* 1703, 0x10001b0, U+01b0, KEY_uhorn, LATIN SMALL LETTER U WITH HORN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9820, /* 1596, 0x10001b5, U+01b5, KEY_Zstroke, LATIN CAPITAL LETTER Z WITH STROKE */
	0x989d, /* 1602, 0x10001b6, U+01b6, KEY_zstroke, LATIN SMALL LETTER Z WITH STROKE */
	0x9915, /* 1608, 0x10001b7, U+01b7, KEY_EZH, LATIN CAPITAL LETTER EZH */
	0x0000,
	0x0000,
	0x0000,
	0x40b5, /*  750, 0x4de, U+309b, KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */
	0x40ce, /*  751, 0x4df, U+309c, KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3bde, /*  691, 0x4a7, U+30a1, KEY_kana_a, KATAKANA LETTER SMALL A */
	0x3cc8, /*  702, 0x4b1, U+30a2, KEY_kana_A, KATAKANA LETTER A */
	0x3bf2, /*  692, 0x4a8, U+30a3, KEY_kana_i, KATAKANA LETTER SMALL I */
	0x3cdc, /*  703, 0x4b2, U+30a4, KEY_kana_I, KATAKANA LETTER I */
	0x3c06, /*  693, 0x4a9, U+30a5, KEY_kana_u, KATAKANA LETTER SMALL U */
	0x3cf0, /*  704, 0x4b3, U+30a6, KEY_kana_U, KATAKANA LETTER U */
	0x3c1a, /*  694, 0x4aa, U+30a7, KEY_kana_e, KATAKANA LETTER SMALL E */
	0x3d04, /*  705, 0x4b4, U+30a8, KEY_kana_E, KATAKANA LETTER E */
	0x3c2e, /*  695, 0x4ab, U+30a9, KEY_kana_o, KATAKANA LETTER SMALL O */
	0x3d18, /*  706, 0x4b5, U+30aa, KEY_kana_O, KATAKANA LETTER O */
	0x3d2c, /*  707, 0x4b6, U+30ab, KEY_kana_KA, KATAKANA LETTER KA */
	0x0000,
	0x3d41, /*  708, 0x4b7, U+30ad, KEY_kana_KI, KATAKANA LETTER KI */
	0x0000,
	0x3d56, /*  709, 0x4b8, U+30af, KEY_kana_KU, KATAKANA LETTER KU */
	0xc97b, /* 2047, 0x1000da6, U+0da6, KEY_Sinh_nja, SINHALA SANYAKA JAYANNA */
	0x3d6b, /*  710, 0x4b9, U+30b1, KEY_kana_KE, KATAKANA LETTER KE */
	0x9849, /* 1598, 0x10001d1, U+01d2, KEY_Ocaron, LATIN CAPITAL LETTER O WITH CARON */
	0x3d80, /*  711, 0x4ba, U+30b3, KEY_kana_KO, KATAKANA LETTER KO */
	0x0000,
	0x3d95, /*  712, 0x4bb, U+30b5, KEY_kana_SA, KATAKANA LETTER SA */
	0x0000,
	0x3daa, /*  713, 0x4bc, U+30b7, KEY_kana_SHI, KATAKANA LETTER SI */
	0x0000,
	0x3dc0, /*  714, 0x4bd, U+30b9, KEY_kana_SU, KATAKANA LETTER SU */
	0x0000,
	0x3dd5, /*  715, 0x4be, U+30bb, KEY_kana_SE, KATAKANA LETTER SE */
	0x0000,
	0x3dea, /*  716, 0x4bf, U+30bd, KEY_kana_SO, KATAKANA LETTER SO */
	0x0000,
	0x3dff, /*  717, 0x4c0, U+30bf, KEY_kana_TA, KATAKANA LETTER TA */
	0x0000,
	0x3e14, /*  718, 0x4c1, U+30c1, KEY_kana_CHI, KATAKANA LETTER TI */
	0x38e2, /*  658, 0x1001e02, U+1e02, KEY_Babovedot, LATIN CAPITAL LETTER B WITH DOT ABOVE */
	0x38f9, /*  659, 0x1001e03, U+1e03, KEY_babovedot, LATIN SMALL LETTER B WITH DOT ABOVE */
	0x3e3f, /*  720, 0x4c2, U+30c4, KEY_kana_TSU, KATAKANA LETTER TU */
	0x0000,
	0x3e6a, /*  722, 0x4c3, U+30c6, KEY_kana_TE, KATAKANA LETTER TE */
	0x98b2, /* 1603, 0x10001e7, U+01e7, KEY_gcaron, LATIN SMALL LETTER G WITH CARON */
	0x3e7f, /*  723, 0x4c4, U+30c8, KEY_kana_TO, KATAKANA LETTER TO */
	0x0000,
	0x3910, /*  660, 0x1001e0a, U+1e0a, KEY_Dabovedot, LATIN CAPITAL LETTER D WITH DOT ABOVE */
	0x3927, /*  661, 0x1001e0b, U+1e0b, KEY_dabovedot, LATIN SMALL LETTER D WITH DOT ABOVE */
	0x3ebe, /*  726, 0x4c7, U+30cc, KEY_kana_NU, KATAKANA LETTER NU */
	0x3ed3, /*  727, 0x4c8, U+30cd, KEY_kana_NE, KATAKANA LETTER NE */
	0x3ee8, /*  728, 0x4c9, U+30ce, KEY_kana_NO, KATAKANA LETTER NO */
	0x3efd, /*  729, 0x4ca, U+30cf, KEY_kana_HA, KATAKANA LETTER HA */
	0x0000,
	0x0000,
	0x3f12, /*  730, 0x4cb, U+30d2, KEY_kana_HI, KATAKANA LETTER HI */
	0x0000,
	0x0000,
	0x3f27, /*  731, 0x4cc, U+30d5, KEY_kana_FU, KATAKANA LETTER HU */
	0x0000,
	0x0000,
	0x3f51, /*  733, 0x4cd, U+30d8, KEY_kana_HE, KATAKANA LETTER HE */
	0x0000,
	0x0000,
	0x3f66, /*  734, 0x4ce, U+30db, KEY_kana_HO, KATAKANA LETTER HO */
	0x0000,
	0x0000,
	0x393e, /*  662, 0x1001e1e, U+1e1e, KEY_Fabovedot, LATIN CAPITAL LETTER F WITH DOT ABOVE */
	0x3955, /*  663, 0x1001e1f, U+1e1f, KEY_fabovedot, LATIN SMALL LETTER F WITH DOT ABOVE */
	0x3fa5, /*  737, 0x4d1, U+30e0, KEY_kana_MU, KATAKANA LETTER MU */
	0x3fba, /*  738, 0x4d2, U+30e1, KEY_kana_ME, KATAKANA LETTER ME */
	0x3fcf, /*  739, 0x4d3, U+30e2, KEY_kana_MO, KATAKANA LETTER MO */
	0x3c42, /*  696, 0x4ac, U+30e3, KEY_kana_ya, KATAKANA LETTER SMALL YA */
	0x3fe4, /*  740, 0x4d4, U+30e4, KEY_kana_YA, KATAKANA LETTER YA */
	0x3c57, /*  697, 0x4ad, U+30e5, KEY_kana_yu, KATAKANA LETTER SMALL YU */
	0x3ff9, /*  741, 0x4d5, U+30e6, KEY_kana_YU, KATAKANA LETTER YU */
	0x3c6c, /*  698, 0x4ae, U+30e7, KEY_kana_yo, KATAKANA LETTER SMALL YO */
	0x400e, /*  742, 0x4d6, U+30e8, KEY_kana_YO, KATAKANA LETTER YO */
	0x4023, /*  743, 0x4d7, U+30e9, KEY_kana_RA, KATAKANA LETTER RA */
	0x4038, /*  744, 0x4d8, U+30ea, KEY_kana_RI, KATAKANA LETTER RI */
	0x404d, /*  745, 0x4d9, U+30eb, KEY_kana_RU, KATAKANA LETTER RU */
	0x4062, /*  746, 0x4da, U+30ec, KEY_kana_RE, KATAKANA LETTER RE */
	0x4077, /*  747, 0x4db, U+30ed, KEY_kana_RO, KATAKANA LETTER RO */
	0x0000,
	0x408c, /*  748, 0x4dc, U+30ef, KEY_kana_WA, KATAKANA LETTER WA */
	0x0000,
	0x0000,
	0x3bc9, /*  690, 0x4a6, U+30f2, KEY_kana_WO, KATAKANA LETTER WO */
	0x40a1, /*  749, 0x4dd, U+30f3, KEY_kana_N, KATAKANA LETTER N */
	0x0000,
	0x0000,
	0x9937, /* 1610, 0x1001e36, U+1e36, KEY_Lbelowdot, LATIN CAPITAL LETTER L WITH DOT BELOW */
	0x8d0c, /* 1486, 0x1000535, U+0535, KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */
	0x0000,
	0x0000,
	0x0000,
	0x3b8f, /*  688, 0x4a5, U+30fb, KEY_kana_conjunctive, KATAKANA MIDDLE DOT */
	0x3cac, /*  701, 0x4b0, U+30fc, KEY_prolongedsound, KATAKANA-HIRAGANA PROLONGED SOUND MARK */
	0x0000,
	0x0000,
	0x8d74, /* 1490, 0x1000537, U+0537, KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */
	0x396c, /*  664, 0x1001e40, U+1e40, KEY_Mabovedot, LATIN CAPITAL LETTER M WITH DOT ABOVE */
	0x3983, /*  665, 0x1001e41, U+1e41, KEY_mabovedot, LATIN SMALL LETTER M WITH DOT ABOVE */
	0x0000,
	0x8da4, /* 1492, 0x1000538, U+0538, KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */
	0x0000,
	0x0000,
	0x0000,
	0x8dd6, /* 1494, 0x1000539, U+0539, KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8e3c, /* 1498, 0x100053b, U+053b, KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x399a, /*  666, 0x1001e56, U+1e56, KEY_Pabovedot, LATIN CAPITAL LETTER P WITH DOT ABOVE */
	0x39b1, /*  667, 0x1001e57, U+1e57, KEY_pabovedot, LATIN SMALL LETTER P WITH DOT ABOVE */
	0x0000,
	0xcab3, /* 2061, 0x1000db5, U+0db5, KEY_Sinh_pha, SINHALA MAHA. PAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x39c8, /*  668, 0x1001e60, U+1e60, KEY_Sabovedot, LATIN CAPITAL LETTER S WITH DOT ABOVE */
	0x39df, /*  669, 0x1001e61, U+1e61, KEY_sabovedot, LATIN SMALL LETTER S WITH DOT ABOVE */
	0x0000,
	0x3b77, /*  687, 0x4a4, U+3001, KEY_kana_comma, IDEOGRAPHIC COMMA */
	0x0000,
	0x3b1a, /*  684, 0x4a1, U+3002, KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */
	0x0000,
	0x0000,
	0xc838, /* 2032, 0x1000d94, U+0d94, KEY_Sinh_o, SINHALA OYANNA */
	0x0000,
	0x39f6, /*  670, 0x1001e6a, U+1e6a, KEY_Tabovedot, LATIN CAPITAL LETTER T WITH DOT ABOVE */
	0x3a0d, /*  671, 0x1001e6b, U+1e6b, KEY_tabovedot, LATIN SMALL LETTER T WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x980c, /* 1595, 0x100012c, U+012c, KEY_Ibreve, LATIN CAPITAL LETTER I WITH BREVE */
	0x0000,
	0x9889, /* 1601, 0x100012d, U+012d, KEY_ibreve, LATIN SMALL LETTER I WITH BREVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3a24, /*  672, 0x1001e80, U+1e80, KEY_Wgrave, LATIN CAPITAL LETTER W WITH GRAVE */
	0x3a38, /*  673, 0x1001e81, U+1e81, KEY_wgrave, LATIN SMALL LETTER W WITH GRAVE */
	0x3a4c, /*  674, 0x1001e82, U+1e82, KEY_Wacute, LATIN CAPITAL LETTER W WITH ACUTE */
	0x3a60, /*  675, 0x1001e83, U+1e83, KEY_wacute, LATIN SMALL LETTER W WITH ACUTE */
	0x3a74, /*  676, 0x1001e84, U+1e84, KEY_Wdiaeresis, LATIN CAPITAL LETTER W WITH DIAERESIS */
	0x3a8c, /*  677, 0x1001e85, U+1e85, KEY_wdiaeresis, LATIN SMALL LETTER W WITH DIAERESIS */
	0xc876, /* 2035, 0x1000d9a, U+0d9a, KEY_Sinh_ka, SINHALA KAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x97f5, /* 1594, 0x1001e8a, U+1e8a, KEY_Xabovedot, LATIN CAPITAL LETTER X WITH DOT ABOVE */
	0x9872, /* 1600, 0x1001e8b, U+1e8b, KEY_xabovedot, LATIN SMALL LETTER X WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x7595, /* 1267, 0xcf7, U+05e7, KEY_hebrew_qoph, HEBREW LETTER QOF */
	0x0000,
	0xa594, /* 1736, 0x1002208, U+2208, KEY_elementof, ELEMENT OF */
	0x0000,
	0xa5ab, /* 1737, 0x1002209, U+2209, KEY_notelementof, NOT AN ELEMENT OF */
	0x0000,
	0x98da, /* 1605, 0x1000275, U+0275, KEY_obarred, LATIN SMALL LETTER BARRED O */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9965, /* 1612, 0x1001ea0, U+1ea0, KEY_Abelowdot, LATIN CAPITAL LETTER A WITH DOT BELOW */
	0x997c, /* 1613, 0x1001ea1, U+1ea1, KEY_abelowdot, LATIN SMALL LETTER A WITH DOT BELOW */
	0x9993, /* 1614, 0x1001ea2, U+1ea2, KEY_Ahook, LATIN CAPITAL LETTER A WITH HOOK ABOVE */
	0x99a6, /* 1615, 0x1001ea3, U+1ea3, KEY_ahook, LATIN SMALL LETTER A WITH HOOK ABOVE */
	0x99b9, /* 1616, 0x1001ea4, U+1ea4, KEY_Acircumflexacute, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x99d7, /* 1617, 0x1001ea5, U+1ea5, KEY_acircumflexacute, LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x99f5, /* 1618, 0x1001ea6, U+1ea6, KEY_Acircumflexgrave, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x9a13, /* 1619, 0x1001ea7, U+1ea7, KEY_acircumflexgrave, LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x9a31, /* 1620, 0x1001ea8, U+1ea8, KEY_Acircumflexhook, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9a4e, /* 1621, 0x1001ea9, U+1ea9, KEY_acircumflexhook, LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9a6b, /* 1622, 0x1001eaa, U+1eaa, KEY_Acircumflextilde, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x9a89, /* 1623, 0x1001eab, U+1eab, KEY_acircumflextilde, LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x9aa7, /* 1624, 0x1001eac, U+1eac, KEY_Acircumflexbelowdot, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x9ac8, /* 1625, 0x1001ead, U+1ead, KEY_acircumflexbelowdot, LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x9ae9, /* 1626, 0x1001eae, U+1eae, KEY_Abreveacute, LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
	0x9b02, /* 1627, 0x1001eaf, U+1eaf, KEY_abreveacute, LATIN SMALL LETTER A WITH BREVE AND ACUTE */
	0x9b1b, /* 1628, 0x1001eb0, U+1eb0, KEY_Abrevegrave, LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
	0x9b34, /* 1629, 0x1001eb1, U+1eb1, KEY_abrevegrave, LATIN SMALL LETTER A WITH BREVE AND GRAVE */
	0x9926, /* 1609, 0x1000292, U+0292, KEY_ezh, LATIN SMALL LETTER EZH */
	0x9b65, /* 1631, 0x1001eb3, U+1eb3, KEY_abrevehook, LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
	0x9b7d, /* 1632, 0x1001eb4, U+1eb4, KEY_Abrevetilde, LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
	0x9b96, /* 1633, 0x1001eb5, U+1eb5, KEY_abrevetilde, LATIN SMALL LETTER A WITH BREVE AND TILDE */
	0x9baf, /* 1634, 0x1001eb6, U+1eb6, KEY_Abrevebelowdot, LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
	0x9bcb, /* 1635, 0x1001eb7, U+1eb7, KEY_abrevebelowdot, LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
	0x9be7, /* 1636, 0x1001eb8, U+1eb8, KEY_Ebelowdot, LATIN CAPITAL LETTER E WITH DOT BELOW */
	0x9bfe, /* 1637, 0x1001eb9, U+1eb9, KEY_ebelowdot, LATIN SMALL LETTER E WITH DOT BELOW */
	0x9c15, /* 1638, 0x1001eba, U+1eba, KEY_Ehook, LATIN CAPITAL LETTER E WITH HOOK ABOVE */
	0x9c28, /* 1639, 0x1001ebb, U+1ebb, KEY_ehook, LATIN SMALL LETTER E WITH HOOK ABOVE */
	0x9c3b, /* 1640, 0x1001ebc, U+1ebc, KEY_Etilde, LATIN CAPITAL LETTER E WITH TILDE */
	0x9c4f, /* 1641, 0x1001ebd, U+1ebd, KEY_etilde, LATIN SMALL LETTER E WITH TILDE */
	0x9c63, /* 1642, 0x1001ebe, U+1ebe, KEY_Ecircumflexacute, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0x9c81, /* 1643, 0x1001ebf, U+1ebf, KEY_ecircumflexacute, LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0x9c9f, /* 1644, 0x1001ec0, U+1ec0, KEY_Ecircumflexgrave, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x9cbd, /* 1645, 0x1001ec1, U+1ec1, KEY_ecircumflexgrave, LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x9cdb, /* 1646, 0x1001ec2, U+1ec2, KEY_Ecircumflexhook, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9cf8, /* 1647, 0x1001ec3, U+1ec3, KEY_ecircumflexhook, LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9d15, /* 1648, 0x1001ec4, U+1ec4, KEY_Ecircumflextilde, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x9d33, /* 1649, 0x1001ec5, U+1ec5, KEY_ecircumflextilde, LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x9d51, /* 1650, 0x1001ec6, U+1ec6, KEY_Ecircumflexbelowdot, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x9d72, /* 1651, 0x1001ec7, U+1ec7, KEY_ecircumflexbelowdot, LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x9d93, /* 1652, 0x1001ec8, U+1ec8, KEY_Ihook, LATIN CAPITAL LETTER I WITH HOOK ABOVE */
	0x9da6, /* 1653, 0x1001ec9, U+1ec9, KEY_ihook, LATIN SMALL LETTER I WITH HOOK ABOVE */
	0x9db9, /* 1654, 0x1001eca, U+1eca, KEY_Ibelowdot, LATIN CAPITAL LETTER I WITH DOT BELOW */
	0x6ecb, /* 1196, 0xaec, U+2663, KEY_club, BLACK CLUB SUIT */
	0x9de7, /* 1656, 0x1001ecc, U+1ecc, KEY_Obelowdot, LATIN CAPITAL LETTER O WITH DOT BELOW */
	0x9dfe, /* 1657, 0x1001ecd, U+1ecd, KEY_obelowdot, LATIN SMALL LETTER O WITH DOT BELOW */
	0x9e15, /* 1658, 0x1001ece, U+1ece, KEY_Ohook, LATIN CAPITAL LETTER O WITH HOOK ABOVE */
	0x9e28, /* 1659, 0x1001ecf, U+1ecf, KEY_ohook, LATIN SMALL LETTER O WITH HOOK ABOVE */
	0x9e3b, /* 1660, 0x1001ed0, U+1ed0, KEY_Ocircumflexacute, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x6ef2, /* 1198, 0xaee, U+2665, KEY_heart, BLACK HEART SUIT */
	0x9e77, /* 1662, 0x1001ed2, U+1ed2, KEY_Ocircumflexgrave, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x9e95, /* 1663, 0x1001ed3, U+1ed3, KEY_ocircumflexgrave, LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x6edd, /* 1197, 0xaed, U+2666, KEY_diamond, BLACK DIAMOND SUIT */
	0x9ed0, /* 1665, 0x1001ed5, U+1ed5, KEY_ocircumflexhook, LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9eed, /* 1666, 0x1001ed6, U+1ed6, KEY_Ocircumflextilde, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x9f0b, /* 1667, 0x1001ed7, U+1ed7, KEY_ocircumflextilde, LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x9f29, /* 1668, 0x1001ed8, U+1ed8, KEY_Ocircumflexbelowdot, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x9f4a, /* 1669, 0x1001ed9, U+1ed9, KEY_ocircumflexbelowdot, LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x9f6b, /* 1670, 0x1001eda, U+1eda, KEY_Ohornacute, LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
	0x9f83, /* 1671, 0x1001edb, U+1edb, KEY_ohornacute, LATIN SMALL LETTER O WITH HORN AND ACUTE */
	0x9f9b, /* 1672, 0x1001edc, U+1edc, KEY_Ohorngrave, LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
	0x9fb3, /* 1673, 0x1001edd, U+1edd, KEY_ohorngrave, LATIN SMALL LETTER O WITH HORN AND GRAVE */
	0x9fcb, /* 1674, 0x1001ede, U+1ede, KEY_Ohornhook, LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
	0x9fe2, /* 1675, 0x1001edf, U+1edf, KEY_ohornhook, LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
	0x9ff9, /* 1676, 0x1001ee0, U+1ee0, KEY_Ohorntilde, LATIN CAPITAL LETTER O WITH HORN AND TILDE */
	0xa011, /* 1677, 0x1001ee1, U+1ee1, KEY_ohorntilde, LATIN SMALL LETTER O WITH HORN AND TILDE */
	0xa029, /* 1678, 0x1001ee2, U+1ee2, KEY_Ohornbelowdot, LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
	0xa044, /* 1679, 0x1001ee3, U+1ee3, KEY_ohornbelowdot, LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
	0xa05f, /* 1680, 0x1001ee4, U+1ee4, KEY_Ubelowdot, LATIN CAPITAL LETTER U WITH DOT BELOW */
	0xa076, /* 1681, 0x1001ee5, U+1ee5, KEY_ubelowdot, LATIN SMALL LETTER U WITH DOT BELOW */
	0xa08d, /* 1682, 0x1001ee6, U+1ee6, KEY_Uhook, LATIN CAPITAL LETTER U WITH HOOK ABOVE */
	0x3036, /*  555, 0x1b7, U+02c7, KEY_caron, CARON */
	0xa0b3, /* 1684, 0x1001ee8, U+1ee8, KEY_Uhornacute, LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
	0x6f97, /* 1205, 0xaf6, U+266d, KEY_musicalflat, MUSIC FLAT SIGN */
	0xa0e3, /* 1686, 0x1001eea, U+1eea, KEY_Uhorngrave, LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
	0xa0fb, /* 1687, 0x1001eeb, U+1eeb, KEY_uhorngrave, LATIN SMALL LETTER U WITH HORN AND GRAVE */
	0xa113, /* 1688, 0x1001eec, U+1eec, KEY_Uhornhook, LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
	0xa12a, /* 1689, 0x1001eed, U+1eed, KEY_uhornhook, LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
	0xa141, /* 1690, 0x1001eee, U+1eee, KEY_Uhorntilde, LATIN CAPITAL LETTER U WITH HORN AND TILDE */
	0x6f7d, /* 1204, 0xaf5, U+266f, KEY_musicalsharp, MUSIC SHARP SIGN */
	0xa171, /* 1692, 0x1001ef0, U+1ef0, KEY_Uhornbelowdot, LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
	0xa18c, /* 1693, 0x1001ef1, U+1ef1, KEY_uhornbelowdot, LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
	0x3aa4, /*  678, 0x1001ef2, U+1ef2, KEY_Ygrave, LATIN CAPITAL LETTER Y WITH GRAVE */
	0x3ab8, /*  679, 0x1001ef3, U+1ef3, KEY_ygrave, LATIN SMALL LETTER Y WITH GRAVE */
	0xa1a7, /* 1694, 0x1001ef4, U+1ef4, KEY_Ybelowdot, LATIN CAPITAL LETTER Y WITH DOT BELOW */
	0xa1be, /* 1695, 0x1001ef5, U+1ef5, KEY_ybelowdot, LATIN SMALL LETTER Y WITH DOT BELOW */
	0xa1d5, /* 1696, 0x1001ef6, U+1ef6, KEY_Yhook, LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
	0xa1e8, /* 1697, 0x1001ef7, U+1ef7, KEY_yhook, LATIN SMALL LETTER Y WITH HOOK ABOVE */
	0x2f03, /*  540, 0x1a2, U+02d8, KEY_breve, BREVE */
	0x337d, /*  595, 0x1ff, U+02d9, KEY_abovedot, DOT ABOVE */
	0xb265, /* 1849, 0x100285a, U+285a, KEY_braille_dots_2457, BRAILLE PATTERN DOTS-2457 */
	0x2fe5, /*  551, 0x1b2, U+02db, KEY_ogonek, OGONEK */
	0xb2a4, /* 1851, 0x100285c, U+285c, KEY_braille_dots_3457, BRAILLE PATTERN DOTS-3457 */
	0x309b, /*  560, 0x1bd, U+02dd, KEY_doubleacute, DOUBLE ACUTE ACCENT */
	0xb2e3, /* 1853, 0x100285e, U+285e, KEY_braille_dots_23457, BRAILLE PATTERN DOTS-23457 */
	0xb303, /* 1854, 0x100285f, U+285f, KEY_braille_dots_123457, BRAILLE PATTERN DOTS-123457 */
	0xb324, /* 1855, 0x1002860, U+2860, KEY_braille_dots_67, BRAILLE PATTERN DOTS-67 */
	0xb341, /* 1856, 0x1002861, U+2861, KEY_braille_dots_167, BRAILLE PATTERN DOTS-167 */
	0xb35f, /* 1857, 0x1002862, U+2862, KEY_braille_dots_267, BRAILLE PATTERN DOTS-267 */
	0xb37d, /* 1858, 0x1002863, U+2863, KEY_braille_dots_1267, BRAILLE PATTERN DOTS-1267 */
	0xb39c, /* 1859, 0x1002864, U+2864, KEY_braille_dots_367, BRAILLE PATTERN DOTS-367 */
	0xb3ba, /* 1860, 0x1002865, U+2865, KEY_braille_dots_1367, BRAILLE PATTERN DOTS-1367 */
	0xb3d9, /* 1861, 0x1002866, U+2866, KEY_braille_dots_2367, BRAILLE PATTERN DOTS-2367 */
	0x6486, /* 1090, 0x8c9, U+2243, KEY_similarequal, ASYMPTOTICALLY EQUAL TO */
	0xb418, /* 1863, 0x1002868, U+2868, KEY_braille_dots_467, BRAILLE PATTERN DOTS-467 */
	0xb436, /* 1864, 0x1002869, U+2869, KEY_braille_dots_1467, BRAILLE PATTERN DOTS-1467 */
	0xb455, /* 1865, 0x100286a, U+286a, KEY_braille_dots_2467, BRAILLE PATTERN DOTS-2467 */
	0xa666, /* 1745, 0x1002248, U+2245, KEY_approxeq, ALMOST EQUAL TO */
	0xb494, /* 1867, 0x100286c, U+286c, KEY_braille_dots_3467, BRAILLE PATTERN DOTS-3467 */
	0xb4b3, /* 1868, 0x100286d, U+286d, KEY_braille_dots_13467, BRAILLE PATTERN DOTS-13467 */
	0xb4d3, /* 1869, 0x100286e, U+286e, KEY_braille_dots_23467, BRAILLE PATTERN DOTS-23467 */
	0xa67c, /* 1746, 0x1002247, U+2247, KEY_notapproxeq, NOT ALMOST EQUAL TO */
	0xb514, /* 1871, 0x1002870, U+2870, KEY_braille_dots_567, BRAILLE PATTERN DOTS-567 */
	0xb532, /* 1872, 0x1002871, U+2871, KEY_braille_dots_1567, BRAILLE PATTERN DOTS-1567 */
	0xb551, /* 1873, 0x1002872, U+2872, KEY_braille_dots_2567, BRAILLE PATTERN DOTS-2567 */
	0xb570, /* 1874, 0x1002873, U+2873, KEY_braille_dots_12567, BRAILLE PATTERN DOTS-12567 */
	0xb590, /* 1875, 0x1002874, U+2874, KEY_braille_dots_3567, BRAILLE PATTERN DOTS-3567 */
	0xb5af, /* 1876, 0x1002875, U+2875, KEY_braille_dots_13567, BRAILLE PATTERN DOTS-13567 */
	0xb5cf, /* 1877, 0x1002876, U+2876, KEY_braille_dots_23567, BRAILLE PATTERN DOTS-23567 */
	0xb5ef, /* 1878, 0x1002877, U+2877, KEY_braille_dots_123567, BRAILLE PATTERN DOTS-123567 */
	0xb610, /* 1879, 0x1002878, U+2878, KEY_braille_dots_4567, BRAILLE PATTERN DOTS-4567 */
	0xb62f, /* 1880, 0x1002879, U+2879, KEY_braille_dots_14567, BRAILLE PATTERN DOTS-14567 */
	0xb64f, /* 1881, 0x100287a, U+287a, KEY_braille_dots_24567, BRAILLE PATTERN DOTS-24567 */
	0xb66f, /* 1882, 0x100287b, U+287b, KEY_braille_dots_124567, BRAILLE PATTERN DOTS-124567 */
	0xb690, /* 1883, 0x100287c, U+287c, KEY_braille_dots_34567, BRAILLE PATTERN DOTS-34567 */
	0xb6b0, /* 1884, 0x100287d, U+287d, KEY_braille_dots_134567, BRAILLE PATTERN DOTS-134567 */
	0xb6d1, /* 1885, 0x100287e, U+287e, KEY_braille_dots_234567, BRAILLE PATTERN DOTS-234567 */
	0xb6f2, /* 1886, 0x100287f, U+287f, KEY_braille_dots_1234567, BRAILLE PATTERN DOTS-1234567 */
	0xb714, /* 1887, 0x1002880, U+2880, KEY_braille_dots_8, BRAILLE PATTERN DOTS-8 */
	0xb730, /* 1888, 0x1002881, U+2881, KEY_braille_dots_18, BRAILLE PATTERN DOTS-18 */
	0xb74d, /* 1889, 0x1002882, U+2882, KEY_braille_dots_28, BRAILLE PATTERN DOTS-28 */
	0x8f5b, /* 1509, 0x1000570, U+0570, KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */
	0xb788, /* 1891, 0x1002884, U+2884, KEY_braille_dots_38, BRAILLE PATTERN DOTS-38 */
	0xb7a5, /* 1892, 0x1002885, U+2885, KEY_braille_dots_138, BRAILLE PATTERN DOTS-138 */
	0xb7c3, /* 1893, 0x1002886, U+2886, KEY_braille_dots_238, BRAILLE PATTERN DOTS-238 */
	0xb7e1, /* 1894, 0x1002887, U+2887, KEY_braille_dots_1238, BRAILLE PATTERN DOTS-1238 */
	0xb800, /* 1895, 0x1002888, U+2888, KEY_braille_dots_48, BRAILLE PATTERN DOTS-48 */
	0xb81d, /* 1896, 0x1002889, U+2889, KEY_braille_dots_148, BRAILLE PATTERN DOTS-148 */
	0xb83b, /* 1897, 0x100288a, U+288a, KEY_braille_dots_248, BRAILLE PATTERN DOTS-248 */
	0x8fc3, /* 1513, 0x1000572, U+0572, KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */
	0xb878, /* 1899, 0x100288c, U+288c, KEY_braille_dots_348, BRAILLE PATTERN DOTS-348 */
	0xb896, /* 1900, 0x100288d, U+288d, KEY_braille_dots_1348, BRAILLE PATTERN DOTS-1348 */
	0xb8b5, /* 1901, 0x100288e, U+288e, KEY_braille_dots_2348, BRAILLE PATTERN DOTS-2348 */
	0xb8d4, /* 1902, 0x100288f, U+288f, KEY_braille_dots_12348, BRAILLE PATTERN DOTS-12348 */
	0xb8f4, /* 1903, 0x1002890, U+2890, KEY_braille_dots_58, BRAILLE PATTERN DOTS-58 */
	0xb911, /* 1904, 0x1002891, U+2891, KEY_braille_dots_158, BRAILLE PATTERN DOTS-158 */
	0xb92f, /* 1905, 0x1002892, U+2892, KEY_braille_dots_258, BRAILLE PATTERN DOTS-258 */
	0xb94d, /* 1906, 0x1002893, U+2893, KEY_braille_dots_1258, BRAILLE PATTERN DOTS-1258 */
	0xb96c, /* 1907, 0x1002894, U+2894, KEY_braille_dots_358, BRAILLE PATTERN DOTS-358 */
	0xb98a, /* 1908, 0x1002895, U+2895, KEY_braille_dots_1358, BRAILLE PATTERN DOTS-1358 */
	0xb9a9, /* 1909, 0x1002896, U+2896, KEY_braille_dots_2358, BRAILLE PATTERN DOTS-2358 */
	0xb9c8, /* 1910, 0x1002897, U+2897, KEY_braille_dots_12358, BRAILLE PATTERN DOTS-12358 */
	0xb9e8, /* 1911, 0x1002898, U+2898, KEY_braille_dots_458, BRAILLE PATTERN DOTS-458 */
	0xba06, /* 1912, 0x1002899, U+2899, KEY_braille_dots_1458, BRAILLE PATTERN DOTS-1458 */
	0xba25, /* 1913, 0x100289a, U+289a, KEY_braille_dots_2458, BRAILLE PATTERN DOTS-2458 */
	0xba44, /* 1914, 0x100289b, U+289b, KEY_braille_dots_12458, BRAILLE PATTERN DOTS-12458 */
	0xba64, /* 1915, 0x100289c, U+289c, KEY_braille_dots_3458, BRAILLE PATTERN DOTS-3458 */
	0xba83, /* 1916, 0x100289d, U+289d, KEY_braille_dots_13458, BRAILLE PATTERN DOTS-13458 */
	0xbaa3, /* 1917, 0x100289e, U+289e, KEY_braille_dots_23458, BRAILLE PATTERN DOTS-23458 */
	0xbac3, /* 1918, 0x100289f, U+289f, KEY_braille_dots_123458, BRAILLE PATTERN DOTS-123458 */
	0xbae4, /* 1919, 0x10028a0, U+28a0, KEY_braille_dots_68, BRAILLE PATTERN DOTS-68 */
	0x63cc, /* 1082, 0x8bd, U+2260, KEY_notequal, NOT EQUAL TO */
	0xbb1f, /* 1921, 0x10028a2, U+28a2, KEY_braille_dots_268, BRAILLE PATTERN DOTS-268 */
	0x64cb, /* 1093, 0x8cf, U+2261, KEY_identical, IDENTICAL TO */
	0xbb5c, /* 1923, 0x10028a4, U+28a4, KEY_braille_dots_368, BRAILLE PATTERN DOTS-368 */
	0xa695, /* 1747, 0x1002262, U+2262, KEY_notidentical, NOT IDENTICAL TO */
	0xbb99, /* 1925, 0x10028a6, U+28a6, KEY_braille_dots_2368, BRAILLE PATTERN DOTS-2368 */
	0xa6af, /* 1748, 0x1002263, U+2263, KEY_stricteq, STRICTLY EQUIVALENT TO */
	0xbbd8, /* 1927, 0x10028a8, U+28a8, KEY_braille_dots_468, BRAILLE PATTERN DOTS-468 */
	0x63b1, /* 1081, 0x8bc, U+2264, KEY_lessthanequal, LESS-THAN OR EQUAL TO */
	0xbc15, /* 1929, 0x10028aa, U+28aa, KEY_braille_dots_2468, BRAILLE PATTERN DOTS-2468 */
	0x63e2, /* 1083, 0x8be, U+2265, KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */
	0xbc54, /* 1931, 0x10028ac, U+28ac, KEY_braille_dots_3468, BRAILLE PATTERN DOTS-3468 */
	0xbc73, /* 1932, 0x10028ad, U+28ad, KEY_braille_dots_13468, BRAILLE PATTERN DOTS-13468 */
	0xbc93, /* 1933, 0x10028ae, U+28ae, KEY_braille_dots_23468, BRAILLE PATTERN DOTS-23468 */
	0xbb3d, /* 1922, 0x10028a3, U+28a3, KEY_braille_dots_1268, BRAILLE PATTERN DOTS-1268 */
	0xbcd4, /* 1935, 0x10028b0, U+28b0, KEY_braille_dots_568, BRAILLE PATTERN DOTS-568 */
	0xbcf2, /* 1936, 0x10028b1, U+28b1, KEY_braille_dots_1568, BRAILLE PATTERN DOTS-1568 */
	0xbd11, /* 1937, 0x10028b2, U+28b2, KEY_braille_dots_2568, BRAILLE PATTERN DOTS-2568 */
	0xbd30, /* 1938, 0x10028b3, U+28b3, KEY_braille_dots_12568, BRAILLE PATTERN DOTS-12568 */
	0xbd50, /* 1939, 0x10028b4, U+28b4, KEY_braille_dots_3568, BRAILLE PATTERN DOTS-3568 */
	0xbd6f, /* 1940, 0x10028b5, U+28b5, KEY_braille_dots_13568, BRAILLE PATTERN DOTS-13568 */
	0xbd8f, /* 1941, 0x10028b6, U+28b6, KEY_braille_dots_23568, BRAILLE PATTERN DOTS-23568 */
	0xbb7a, /* 1924, 0x10028a5, U+28a5, KEY_braille_dots_1368, BRAILLE PATTERN DOTS-1368 */
	0xbdd0, /* 1943, 0x10028b8, U+28b8, KEY_braille_dots_4568, BRAILLE PATTERN DOTS-4568 */
	0xbdef, /* 1944, 0x10028b9, U+28b9, KEY_braille_dots_14568, BRAILLE PATTERN DOTS-14568 */
	0xbe0f, /* 1945, 0x10028ba, U+28ba, KEY_braille_dots_24568, BRAILLE PATTERN DOTS-24568 */
	0xbe2f, /* 1946, 0x10028bb, U+28bb, KEY_braille_dots_124568, BRAILLE PATTERN DOTS-124568 */
	0xbe50, /* 1947, 0x10028bc, U+28bc, KEY_braille_dots_34568, BRAILLE PATTERN DOTS-34568 */
	0xbe70, /* 1948, 0x10028bd, U+28bd, KEY_braille_dots_134568, BRAILLE PATTERN DOTS-134568 */
	0xbe91, /* 1949, 0x10028be, U+28be, KEY_braille_dots_234568, BRAILLE PATTERN DOTS-234568 */
	0xbbb8, /* 1926, 0x10028a7, U+28a7, KEY_braille_dots_12368, BRAILLE PATTERN DOTS-12368 */
	0xbed4, /* 1951, 0x10028c0, U+28c0, KEY_braille_dots_78, BRAILLE PATTERN DOTS-78 */
	0xa223, /* 1700, 0x10001a0, U+01a0, KEY_Ohorn, LATIN CAPITAL LETTER O WITH HORN */
	0xbf0f, /* 1953, 0x10028c2, U+28c2, KEY_braille_dots_278, BRAILLE PATTERN DOTS-278 */
	0xbf2d, /* 1954, 0x10028c3, U+28c3, KEY_braille_dots_1278, BRAILLE PATTERN DOTS-1278 */
	0xbf4c, /* 1955, 0x10028c4, U+28c4, KEY_braille_dots_378, BRAILLE PATTERN DOTS-378 */
	0xbf6a, /* 1956, 0x10028c5, U+28c5, KEY_braille_dots_1378, BRAILLE PATTERN DOTS-1378 */
	0xbf89, /* 1957, 0x10028c6, U+28c6, KEY_braille_dots_2378, BRAILLE PATTERN DOTS-2378 */
	0xbfa8, /* 1958, 0x10028c7, U+28c7, KEY_braille_dots_12378, BRAILLE PATTERN DOTS-12378 */
	0xbfc8, /* 1959, 0x10028c8, U+28c8, KEY_braille_dots_478, BRAILLE PATTERN DOTS-478 */
	0xbfe6, /* 1960, 0x10028c9, U+28c9, KEY_braille_dots_1478, BRAILLE PATTERN DOTS-1478 */
	0xc005, /* 1961, 0x10028ca, U+28ca, KEY_braille_dots_2478, BRAILLE PATTERN DOTS-2478 */
	0xc024, /* 1962, 0x10028cb, U+28cb, KEY_braille_dots_12478, BRAILLE PATTERN DOTS-12478 */
	0xc044, /* 1963, 0x10028cc, U+28cc, KEY_braille_dots_3478, BRAILLE PATTERN DOTS-3478 */
	0xc063, /* 1964, 0x10028cd, U+28cd, KEY_braille_dots_13478, BRAILLE PATTERN DOTS-13478 */
	0xc083, /* 1965, 0x10028ce, U+28ce, KEY_braille_dots_23478, BRAILLE PATTERN DOTS-23478 */
	0xc0a3, /* 1966, 0x10028cf, U+28cf, KEY_braille_dots_123478, BRAILLE PATTERN DOTS-123478 */
	0xc0c4, /* 1967, 0x10028d0, U+28d0, KEY_braille_dots_578, BRAILLE PATTERN DOTS-578 */
	0xc0e2, /* 1968, 0x10028d1, U+28d1, KEY_braille_dots_1578, BRAILLE PATTERN DOTS-1578 */
	0xc101, /* 1969, 0x10028d2, U+28d2, KEY_braille_dots_2578, BRAILLE PATTERN DOTS-2578 */
	0xc120, /* 1970, 0x10028d3, U+28d3, KEY_braille_dots_12578, BRAILLE PATTERN DOTS-12578 */
	0xc140, /* 1971, 0x10028d4, U+28d4, KEY_braille_dots_3578, BRAILLE PATTERN DOTS-3578 */
	0xc15f, /* 1972, 0x10028d5, U+28d5, KEY_braille_dots_13578, BRAILLE PATTERN DOTS-13578 */
	0xc17f, /* 1973, 0x10028d6, U+28d6, KEY_braille_dots_23578, BRAILLE PATTERN DOTS-23578 */
	0xc19f, /* 1974, 0x10028d7, U+28d7, KEY_braille_dots_123578, BRAILLE PATTERN DOTS-123578 */
	0xc1c0, /* 1975, 0x10028d8, U+28d8, KEY_braille_dots_4578, BRAILLE PATTERN DOTS-4578 */
	0xc1df, /* 1976, 0x10028d9, U+28d9, KEY_braille_dots_14578, BRAILLE PATTERN DOTS-14578 */
	0xc1ff, /* 1977, 0x10028da, U+28da, KEY_braille_dots_24578, BRAILLE PATTERN DOTS-24578 */
	0xc21f, /* 1978, 0x10028db, U+28db, KEY_braille_dots_124578, BRAILLE PATTERN DOTS-124578 */
	0xc240, /* 1979, 0x10028dc, U+28dc, KEY_braille_dots_34578, BRAILLE PATTERN DOTS-34578 */
	0xc260, /* 1980, 0x10028dd, U+28dd, KEY_braille_dots_134578, BRAILLE PATTERN DOTS-134578 */
	0xc281, /* 1981, 0x10028de, U+28de, KEY_braille_dots_234578, BRAILLE PATTERN DOTS-234578 */
	0xc2a2, /* 1982, 0x10028df, U+28df, KEY_braille_dots_1234578, BRAILLE PATTERN DOTS-1234578 */
	0xc2c4, /* 1983, 0x10028e0, U+28e0, KEY_braille_dots_678, BRAILLE PATTERN DOTS-678 */
	0xc2e2, /* 1984, 0x10028e1, U+28e1, KEY_braille_dots_1678, BRAILLE PATTERN DOTS-1678 */
	0xc301, /* 1985, 0x10028e2, U+28e2, KEY_braille_dots_2678, BRAILLE PATTERN DOTS-2678 */
	0xc320, /* 1986, 0x10028e3, U+28e3, KEY_braille_dots_12678, BRAILLE PATTERN DOTS-12678 */
	0xc340, /* 1987, 0x10028e4, U+28e4, KEY_braille_dots_3678, BRAILLE PATTERN DOTS-3678 */
	0x64f7, /* 1095, 0x8da, U+2282, KEY_includedin, SUBSET OF */
	0xc37f, /* 1989, 0x10028e6, U+28e6, KEY_braille_dots_23678, BRAILLE PATTERN DOTS-23678 */
	0x650f, /* 1096, 0x8db, U+2283, KEY_includes, SUPERSET OF */
	0xc3c0, /* 1991, 0x10028e8, U+28e8, KEY_braille_dots_4678, BRAILLE PATTERN DOTS-4678 */
	0xc3df, /* 1992, 0x10028e9, U+28e9, KEY_braille_dots_14678, BRAILLE PATTERN DOTS-14678 */
	0xc3ff, /* 1993, 0x10028ea, U+28ea, KEY_braille_dots_24678, BRAILLE PATTERN DOTS-24678 */
	0xc41f, /* 1994, 0x10028eb, U+28eb, KEY_braille_dots_124678, BRAILLE PATTERN DOTS-124678 */
	0xc440, /* 1995, 0x10028ec, U+28ec, KEY_braille_dots_34678, BRAILLE PATTERN DOTS-34678 */
	0xc460, /* 1996, 0x10028ed, U+28ed, KEY_braille_dots_134678, BRAILLE PATTERN DOTS-134678 */
	0xc481, /* 1997, 0x10028ee, U+28ee, KEY_braille_dots_234678, BRAILLE PATTERN DOTS-234678 */
	0xc4a2, /* 1998, 0x10028ef, U+28ef, KEY_braille_dots_1234678, BRAILLE PATTERN DOTS-1234678 */
	0xc4c4, /* 1999, 0x10028f0, U+28f0, KEY_braille_dots_5678, BRAILLE PATTERN DOTS-5678 */
	0xc4e3, /* 2000, 0x10028f1, U+28f1, KEY_braille_dots_15678, BRAILLE PATTERN DOTS-15678 */
	0xc503, /* 2001, 0x10028f2, U+28f2, KEY_braille_dots_25678, BRAILLE PATTERN DOTS-25678 */
	0xc523, /* 2002, 0x10028f3, U+28f3, KEY_braille_dots_125678, BRAILLE PATTERN DOTS-125678 */
	0xc544, /* 2003, 0x10028f4, U+28f4, KEY_braille_dots_35678, BRAILLE PATTERN DOTS-35678 */
	0xc564, /* 2004, 0x10028f5, U+28f5, KEY_braille_dots_135678, BRAILLE PATTERN DOTS-135678 */
	0xc585, /* 2005, 0x10028f6, U+28f6, KEY_braille_dots_235678, BRAILLE PATTERN DOTS-235678 */
	0xc5a6, /* 2006, 0x10028f7, U+28f7, KEY_braille_dots_1235678, BRAILLE PATTERN DOTS-1235678 */
	0xc5c8, /* 2007, 0x10028f8, U+28f8, KEY_braille_dots_45678, BRAILLE PATTERN DOTS-45678 */
	0xc5e8, /* 2008, 0x10028f9, U+28f9, KEY_braille_dots_145678, BRAILLE PATTERN DOTS-145678 */
	0xc609, /* 2009, 0x10028fa, U+28fa, KEY_braille_dots_245678, BRAILLE PATTERN DOTS-245678 */
	0xc62a, /* 2010, 0x10028fb, U+28fb, KEY_braille_dots_1245678, BRAILLE PATTERN DOTS-1245678 */
	0xc64c, /* 2011, 0x10028fc, U+28fc, KEY_braille_dots_345678, BRAILLE PATTERN DOTS-345678 */
	0xc66d, /* 2012, 0x10028fd, U+28fd, KEY_braille_dots_1345678, BRAILLE PATTERN DOTS-1345678 */
	0xc68f, /* 2013, 0x10028fe, U+28fe, KEY_braille_dots_2345678, BRAILLE PATTERN DOTS-2345678 */
	0xc6b1, /* 2014, 0x10028ff, U+28ff, KEY_braille_dots_12345678, BRAILLE PATTERN DOTS-12345678 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x5a59, /*  993, 0x7ae, U+0385, KEY_Greek_accentdieresis, GREEK DIALYTIKA TONOS */
	0x5919, /*  983, 0x7a1, U+0386, KEY_Greek_ALPHAaccent, GREEK CAPITAL LETTER ALPHA WITH TONOS */
	0x0000,
	0x5938, /*  984, 0x7a2, U+0388, KEY_Greek_EPSILONaccent, GREEK CAPITAL LETTER EPSILON WITH TONOS */
	0x5959, /*  985, 0x7a3, U+0389, KEY_Greek_ETAaccent, GREEK CAPITAL LETTER ETA WITH TONOS */
	0x5976, /*  986, 0x7a4, U+038a, KEY_Greek_IOTAaccent, GREEK CAPITAL LETTER IOTA WITH TONOS */
	0x0000,
	0x59d5, /*  989, 0x7a7, U+038c, KEY_Greek_OMICRONaccent, GREEK CAPITAL LETTER OMICRON WITH TONOS */
	0x0000,
	0x59f6, /*  990, 0x7a8, U+038e, KEY_Greek_UPSILONaccent, GREEK CAPITAL LETTER UPSILON WITH TONOS */
	0x5a3a, /*  992, 0x7ab, U+038f, KEY_Greek_OMEGAaccent, GREEK CAPITAL LETTER OMEGA WITH TONOS */
	0x5b32, /* 1000, 0x7b6, U+0390, KEY_Greek_iotaaccentdieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
	0x5c05, /* 1006, 0x7c1, U+0391, KEY_Greek_ALPHA, GREEK CAPITAL LETTER ALPHA */
	0x5c1e, /* 1007, 0x7c2, U+0392, KEY_Greek_BETA, GREEK CAPITAL LETTER BETA */
	0x5c36, /* 1008, 0x7c3, U+0393, KEY_Greek_GAMMA, GREEK CAPITAL LETTER GAMMA */
	0x5c4f, /* 1009, 0x7c4, U+0394, KEY_Greek_DELTA, GREEK CAPITAL LETTER DELTA */
	0x5c68, /* 1010, 0x7c5, U+0395, KEY_Greek_EPSILON, GREEK CAPITAL LETTER EPSILON */
	0x5c83, /* 1011, 0x7c6, U+0396, KEY_Greek_ZETA, GREEK CAPITAL LETTER ZETA */
	0x5c9b, /* 1012, 0x7c7, U+0397, KEY_Greek_ETA, GREEK CAPITAL LETTER ETA */
	0x5cb2, /* 1013, 0x7c8, U+0398, KEY_Greek_THETA, GREEK CAPITAL LETTER THETA */
	0x5ccb, /* 1014, 0x7c9, U+0399, KEY_Greek_IOTA, GREEK CAPITAL LETTER IOTA */
	0x5ce3, /* 1015, 0x7ca, U+039a, KEY_Greek_KAPPA, GREEK CAPITAL LETTER KAPPA */
	0x5cfc, /* 1016, 0x7cb, U+039b, KEY_Greek_LAMDA, GREEK CAPITAL LETTER LAMDA */
	0x5d2f, /* 1018, 0x7cc, U+039c, KEY_Greek_MU, GREEK CAPITAL LETTER MU */
	0x5d45, /* 1019, 0x7cd, U+039d, KEY_Greek_NU, GREEK CAPITAL LETTER NU */
	0x5d5b, /* 1020, 0x7ce, U+039e, KEY_Greek_XI, GREEK CAPITAL LETTER XI */
	0x5d71, /* 1021, 0x7cf, U+039f, KEY_Greek_OMICRON, GREEK CAPITAL LETTER OMICRON */
	0x5d8c, /* 1022, 0x7d0, U+03a0, KEY_Greek_PI, GREEK CAPITAL LETTER PI */
	0x5da2, /* 1023, 0x7d1, U+03a1, KEY_Greek_RHO, GREEK CAPITAL LETTER RHO */
	0x0000,
	0x5db9, /* 1024, 0x7d2, U+03a3, KEY_Greek_SIGMA, GREEK CAPITAL LETTER SIGMA */
	0x5dd2, /* 1025, 0x7d4, U+03a4, KEY_Greek_TAU, GREEK CAPITAL LETTER TAU */
	0x5de9, /* 1026, 0x7d5, U+03a5, KEY_Greek_UPSILON, GREEK CAPITAL LETTER UPSILON */
	0x5e04, /* 1027, 0x7d6, U+03a6, KEY_Greek_PHI, GREEK CAPITAL LETTER PHI */
	0x5e1b, /* 1028, 0x7d7, U+03a7, KEY_Greek_CHI, GREEK CAPITAL LETTER CHI */
	0x5e32, /* 1029, 0x7d8, U+03a8, KEY_Greek_PSI, GREEK CAPITAL LETTER PSI */
	0x5e49, /* 1030, 0x7d9, U+03a9, KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */
	0x5994, /*  987, 0x7a5, U+03aa, KEY_Greek_IOTAdieresis, GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
	0x5a17, /*  991, 0x7a9, U+03ab, KEY_Greek_UPSILONdieresis, GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
	0x5a97, /*  995, 0x7b1, U+03ac, KEY_Greek_alphaaccent, GREEK SMALL LETTER ALPHA WITH TONOS */
	0x5ab6, /*  996, 0x7b2, U+03ad, KEY_Greek_epsilonaccent, GREEK SMALL LETTER EPSILON WITH TONOS */
	0x5ad7, /*  997, 0x7b3, U+03ae, KEY_Greek_etaaccent, GREEK SMALL LETTER ETA WITH TONOS */
	0x5af4, /*  998, 0x7b4, U+03af, KEY_Greek_iotaaccent, GREEK SMALL LETTER IOTA WITH TONOS */
	0x5bbd, /* 1004, 0x7ba, U+03b0, KEY_Greek_upsilonaccentdieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
	0x5e62, /* 1031, 0x7e1, U+03b1, KEY_Greek_alpha, GREEK SMALL LETTER ALPHA */
	0x5e7b, /* 1032, 0x7e2, U+03b2, KEY_Greek_beta, GREEK SMALL LETTER BETA */
	0x5e93, /* 1033, 0x7e3, U+03b3, KEY_Greek_gamma, GREEK SMALL LETTER GAMMA */
	0x5eac, /* 1034, 0x7e4, U+03b4, KEY_Greek_delta, GREEK SMALL LETTER DELTA */
	0x5ec5, /* 1035, 0x7e5, U+03b5, KEY_Greek_epsilon, GREEK SMALL LETTER EPSILON */
	0x5ee0, /* 1036, 0x7e6, U+03b6, KEY_Greek_zeta, GREEK SMALL LETTER ZETA */
	0x5ef8, /* 1037, 0x7e7, U+03b7, KEY_Greek_eta, GREEK SMALL LETTER ETA */
	0x5f0f, /* 1038, 0x7e8, U+03b8, KEY_Greek_theta, GREEK SMALL LETTER THETA */
	0x5f28, /* 1039, 0x7e9, U+03b9, KEY_Greek_iota, GREEK SMALL LETTER IOTA */
	0x5f40, /* 1040, 0x7ea, U+03ba, KEY_Greek_kappa, GREEK SMALL LETTER KAPPA */
	0x5f59, /* 1041, 0x7eb, U+03bb, KEY_Greek_lamda, GREEK SMALL LETTER LAMDA */
	0x5f8c, /* 1043, 0x7ec, U+03bc, KEY_Greek_mu, GREEK SMALL LETTER MU */
	0x5fa2, /* 1044, 0x7ed, U+03bd, KEY_Greek_nu, GREEK SMALL LETTER NU */
	0x5fb8, /* 1045, 0x7ee, U+03be, KEY_Greek_xi, GREEK SMALL LETTER XI */
	0x5fce, /* 1046, 0x7ef, U+03bf, KEY_Greek_omicron, GREEK SMALL LETTER OMICRON */
	0x5fe9, /* 1047, 0x7f0, U+03c0, KEY_Greek_pi, GREEK SMALL LETTER PI */
	0x5fff, /* 1048, 0x7f1, U+03c1, KEY_Greek_rho, GREEK SMALL LETTER RHO */
	0x602f, /* 1050, 0x7f3, U+03c2, KEY_Greek_finalsmallsigma, GREEK SMALL LETTER FINAL SIGMA */
	0x6016, /* 1049, 0x7f2, U+03c3, KEY_Greek_sigma, GREEK SMALL LETTER SIGMA */
	0x6052, /* 1051, 0x7f4, U+03c4, KEY_Greek_tau, GREEK SMALL LETTER TAU */
	0x6069, /* 1052, 0x7f5, U+03c5, KEY_Greek_upsilon, GREEK SMALL LETTER UPSILON */
	0x6084, /* 1053, 0x7f6, U+03c6, KEY_Greek_phi, GREEK SMALL LETTER PHI */
	0x3c81, /*  699, 0x4af, U+30c3, KEY_kana_tsu, KATAKANA LETTER SMALL TU */
	0x60b2, /* 1055, 0x7f8, U+03c8, KEY_Greek_psi, GREEK SMALL LETTER PSI */
	0x60c9, /* 1056, 0x7f9, U+03c9, KEY_Greek_omega, GREEK SMALL LETTER OMEGA */
	0x5b12, /*  999, 0x7b5, U+03ca, KEY_Greek_iotadieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA */
	0x5b9a, /* 1003, 0x7b9, U+03cb, KEY_Greek_upsilondieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
	0x5b58, /* 1001, 0x7b7, U+03cc, KEY_Greek_omicronaccent, GREEK SMALL LETTER OMICRON WITH TONOS */
	0x5b79, /* 1002, 0x7b8, U+03cd, KEY_Greek_upsilonaccent, GREEK SMALL LETTER UPSILON WITH TONOS */
	0x5be6, /* 1005, 0x7bb, U+03ce, KEY_Greek_omegaaccent, GREEK SMALL LETTER OMEGA WITH TONOS */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xabda, /* 1794, 0x1002823, U+2823, KEY_braille_dots_126, BRAILLE PATTERN DOTS-126 */
	0x0000,
	0x3e94, /*  724, 0x4c5, U+30ca, KEY_kana_NA, KATAKANA LETTER NA */
	0x0000,
	0x3ea9, /*  725, 0x4c6, U+30cb, KEY_kana_NI, KATAKANA LETTER NI */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6840, /* 1132, 0xaa2, U+2002, KEY_enspace, EN SPACE */
	0x682b, /* 1131, 0xaa1, U+2003, KEY_emspace, EM SPACE */
	0x6855, /* 1133, 0xaa3, U+2004, KEY_em3space, THREE-PER-EM SPACE */
	0x686b, /* 1134, 0xaa4, U+2005, KEY_em4space, FOUR-PER-EM SPACE */
	0x0000,
	0x6881, /* 1135, 0xaa5, U+2007, KEY_digitspace, FIGURE SPACE */
	0x6899, /* 1136, 0xaa6, U+2008, KEY_punctspace, PUNCTUATION SPACE */
	0x68b1, /* 1137, 0xaa7, U+2009, KEY_thinspace, THIN SPACE */
	0x68c8, /* 1138, 0xaa8, U+200a, KEY_hairspace, HAIR SPACE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9835, /* 1597, 0x10001e6, U+01e6, KEY_Gcaron, LATIN CAPITAL LETTER G WITH CARON */
	0x0000,
	0x6a20, /* 1153, 0xabb, U+2012, KEY_figdash, FIGURE DASH */
	0x68f3, /* 1140, 0xaaa, U+2013, KEY_endash, EN DASH */
	0x68df, /* 1139, 0xaa9, U+2014, KEY_emdash, EM DASH */
	0x5a7b, /*  994, 0x7af, U+2015, KEY_Greek_horizbar, HORIZONTAL BAR */
	0x0000,
	0x7237, /* 1234, 0xcdf, U+2017, KEY_hebrew_doublelowline, DOUBLE LOW LINE */
	0x6bc9, /* 1169, 0xad0, U+2018, KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */
	0x6bea, /* 1170, 0xad1, U+2019, KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */
	0x704c, /* 1212, 0xafd, U+201a, KEY_singlelowquotemark, SINGLE LOW-9 QUOTATION MARK */
	0x0000,
	0x6c0c, /* 1171, 0xad2, U+201c, KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */
	0x3f7b, /*  735, 0x4cf, U+30de, KEY_kana_MA, KATAKANA LETTER MA */
	0x706c, /* 1213, 0xafe, U+201e, KEY_doublelowquotemark, DOUBLE LOW-9 QUOTATION MARK */
	0x3f90, /*  736, 0x4d0, U+30df, KEY_kana_MI, KATAKANA LETTER MI */
	0x6f1f, /* 1200, 0xaf1, U+2020, KEY_dagger, DAGGER */
	0x509c, /*  899, 0x6b3, U+0401, KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */
	0x5068, /*  897, 0x6b1, U+0402, KEY_Serbian_DJE, CYRILLIC CAPITAL LETTER DJE */
	0x5081, /*  898, 0x6b2, U+0403, KEY_Macedonia_GJE, CYRILLIC CAPITAL LETTER GJE */
	0x50b5, /*  900, 0x6b4, U+0404, KEY_Ukrainian_IE, CYRILLIC CAPITAL LETTER UKRAINIAN IE */
	0x50e8, /*  902, 0x6b5, U+0405, KEY_Macedonia_DSE, CYRILLIC CAPITAL LETTER DZE */
	0x5103, /*  903, 0x6b6, U+0406, KEY_Ukrainian_I, CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x5134, /*  905, 0x6b7, U+0407, KEY_Ukrainian_YI, CYRILLIC CAPITAL LETTER YI */
	0x5167, /*  907, 0x6b8, U+0408, KEY_Cyrillic_JE, CYRILLIC CAPITAL LETTER JE */
	0x5198, /*  909, 0x6b9, U+0409, KEY_Cyrillic_LJE, CYRILLIC CAPITAL LETTER LJE */
	0x51cb, /*  911, 0x6ba, U+040a, KEY_Cyrillic_NJE, CYRILLIC CAPITAL LETTER NJE */
	0x51fe, /*  913, 0x6bb, U+040b, KEY_Serbian_TSHE, CYRILLIC CAPITAL LETTER TSHE */
	0x5218, /*  914, 0x6bc, U+040c, KEY_Macedonia_KJE, CYRILLIC CAPITAL LETTER KJE */
	0x0000,
	0x525a, /*  916, 0x6be, U+040e, KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */
	0x527b, /*  917, 0x6bf, U+040f, KEY_Cyrillic_DZHE, CYRILLIC CAPITAL LETTER DZHE */
	0x55fd, /*  952, 0x6e1, U+0410, KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */
	0x5615, /*  953, 0x6e2, U+0411, KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */
	0x5826, /*  974, 0x6f7, U+0412, KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */
	0x5693, /*  958, 0x6e7, U+0413, KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */
	0x5648, /*  955, 0x6e4, U+0414, KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */
	0x5661, /*  956, 0x6e5, U+0415, KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */
	0x580c, /*  973, 0x6f6, U+0416, KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */
	0x5879, /*  977, 0x6fa, U+0417, KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */
	0x56c6, /*  960, 0x6e9, U+0418, KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */
	0x56de, /*  961, 0x6ea, U+0419, KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */
	0x56fb, /*  962, 0x6eb, U+041a, KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */
	0x5714, /*  963, 0x6ec, U+041b, KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */
	0x572d, /*  964, 0x6ed, U+041c, KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */
	0x5746, /*  965, 0x6ee, U+041d, KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */
	0x3b04, /*  683, 0x47e, U+203e, KEY_overline, OVERLINE */
	0x5777, /*  967, 0x6f0, U+041f, KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */
	0x57a9, /*  969, 0x6f2, U+0420, KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */
	0x57c2, /*  970, 0x6f3, U+0421, KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */
	0x57db, /*  971, 0x6f4, U+0422, KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */
	0x57f4, /*  972, 0x6f5, U+0423, KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */
	0x567a, /*  957, 0x6e6, U+0424, KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */
	0x56ad, /*  959, 0x6e8, U+0425, KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */
	0x562e, /*  954, 0x6e3, U+0426, KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */
	0x58e0, /*  981, 0x6fe, U+0427, KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */
	0x5892, /*  978, 0x6fb, U+0428, KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */
	0x58c4, /*  980, 0x6fd, U+0429, KEY_Cyrillic_SHCHA, CYRILLIC CAPITAL LETTER SHCHA */
	0x58fa, /*  982, 0x6ff, U+042a, KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */
	0x585e, /*  976, 0x6f9, U+042b, KEY_Cyrillic_YERU, CYRILLIC CAPITAL LETTER YERU */
	0x583f, /*  975, 0x6f8, U+042c, KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */
	0x58ac, /*  979, 0x6fc, U+042d, KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */
	0x55e4, /*  951, 0x6e0, U+042e, KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */
	0x5790, /*  968, 0x6f1, U+042f, KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */
	0x52c8, /*  920, 0x6c1, U+0430, KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */
	0x52e0, /*  921, 0x6c2, U+0431, KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */
	0x54f1, /*  942, 0x6d7, U+0432, KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */
	0x535e, /*  926, 0x6c7, U+0433, KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */
	0x5313, /*  923, 0x6c4, U+0434, KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */
	0x532c, /*  924, 0x6c5, U+0435, KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */
	0x54d7, /*  941, 0x6d6, U+0436, KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */
	0x5544, /*  945, 0x6da, U+0437, KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */
	0x5391, /*  928, 0x6c9, U+0438, KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */
	0x53a9, /*  929, 0x6ca, U+0439, KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */
	0x53c6, /*  930, 0x6cb, U+043a, KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */
	0x53df, /*  931, 0x6cc, U+043b, KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */
	0x53f8, /*  932, 0x6cd, U+043c, KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */
	0x5411, /*  933, 0x6ce, U+043d, KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */
	0x542a, /*  934, 0x6cf, U+043e, KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */
	0x5442, /*  935, 0x6d0, U+043f, KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */
	0x5474, /*  937, 0x6d2, U+0440, KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */
	0x548d, /*  938, 0x6d3, U+0441, KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */
	0x54a6, /*  939, 0x6d4, U+0442, KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */
	0x54bf, /*  940, 0x6d5, U+0443, KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */
	0x5345, /*  925, 0x6c6, U+0444, KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */
	0x5378, /*  927, 0x6c8, U+0445, KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */
	0x52f9, /*  922, 0x6c3, U+0446, KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */
	0x55ab, /*  949, 0x6de, U+0447, KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */
	0x555d, /*  946, 0x6db, U+0448, KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */
	0x558f, /*  948, 0x6dd, U+0449, KEY_Cyrillic_shcha, CYRILLIC SMALL LETTER SHCHA */
	0x55c5, /*  950, 0x6df, U+044a, KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */
	0x5529, /*  944, 0x6d9, U+044b, KEY_Cyrillic_yeru, CYRILLIC SMALL LETTER YERU */
	0x550a, /*  943, 0x6d8, U+044c, KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */
	0x5577, /*  947, 0x6dc, U+044d, KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */
	0x52af, /*  919, 0x6c0, U+044e, KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */
	0x545b, /*  936, 0x6d1, U+044f, KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */
	0xa39b, /* 1717, 0x1002070, U+2070, KEY_zerosuperior, SUPERSCRIPT ZERO */
	0x4e3d, /*  876, 0x6a3, U+0451, KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */
	0x4e09, /*  874, 0x6a1, U+0452, KEY_Serbian_dje, CYRILLIC SMALL LETTER DJE */
	0x4e22, /*  875, 0x6a2, U+0453, KEY_Macedonia_gje, CYRILLIC SMALL LETTER GJE */
	0x4e56, /*  877, 0x6a4, U+0454, KEY_Ukrainian_ie, CYRILLIC SMALL LETTER UKRAINIAN IE */
	0x4e89, /*  879, 0x6a5, U+0455, KEY_Macedonia_dse, CYRILLIC SMALL LETTER DZE */
	0x4ea4, /*  880, 0x6a6, U+0456, KEY_Ukrainian_i, CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x4ed5, /*  882, 0x6a7, U+0457, KEY_Ukrainian_yi, CYRILLIC SMALL LETTER YI */
	0x4f08, /*  884, 0x6a8, U+0458, KEY_Cyrillic_je, CYRILLIC SMALL LETTER JE */
	0x4f39, /*  886, 0x6a9, U+0459, KEY_Cyrillic_lje, CYRILLIC SMALL LETTER LJE */
	0x4f6c, /*  888, 0x6aa, U+045a, KEY_Cyrillic_nje, CYRILLIC SMALL LETTER NJE */
	0x4f9f, /*  890, 0x6ab, U+045b, KEY_Serbian_tshe, CYRILLIC SMALL LETTER TSHE */
	0x4fb9, /*  891, 0x6ac, U+045c, KEY_Macedonia_kje, CYRILLIC SMALL LETTER KJE */
	0xcb49, /* 2068, 0x1000dbd, U+0dbd, KEY_Sinh_la, SINHALA DANTAJA LAYANNA */
	0x4ffb, /*  893, 0x6ae, U+045e, KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */
	0x501c, /*  894, 0x6af, U+045f, KEY_Cyrillic_dzhe, CYRILLIC SMALL LETTER DZHE */
	0xa452, /* 1724, 0x1002080, U+2080, KEY_zerosubscript, SUBSCRIPT ZERO */
	0xa46d, /* 1725, 0x1002081, U+2081, KEY_onesubscript, SUBSCRIPT ONE */
	0xa487, /* 1726, 0x1002082, U+2082, KEY_twosubscript, SUBSCRIPT TWO */
	0xa4a1, /* 1727, 0x1002083, U+2083, KEY_threesubscript, SUBSCRIPT THREE */
	0xa4bd, /* 1728, 0x1002084, U+2084, KEY_foursubscript, SUBSCRIPT FOUR */
	0xa4d8, /* 1729, 0x1002085, U+2085, KEY_fivesubscript, SUBSCRIPT FIVE */
	0xa4f3, /* 1730, 0x1002086, U+2086, KEY_sixsubscript, SUBSCRIPT SIX */
	0xa50d, /* 1731, 0x1002087, U+2087, KEY_sevensubscript, SUBSCRIPT SEVEN */
	0xa529, /* 1732, 0x1002088, U+2088, KEY_eightsubscript, SUBSCRIPT EIGHT */
	0xa545, /* 1733, 0x1002089, U+2089, KEY_ninesubscript, SUBSCRIPT NINE */
	0xcbf5, /* 2076, 0x1000dca, U+0dca, KEY_Sinh_al, SINHALA AL-LAKUNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcc0a, /* 2077, 0x1000dcf, U+0dcf, KEY_Sinh_aa2, SINHALA AELA-PILLA */
	0xcc20, /* 2078, 0x1000dd0, U+0dd0, KEY_Sinh_ae2, SINHALA AEDA-PILLA */
	0xcc36, /* 2079, 0x1000dd1, U+0dd1, KEY_Sinh_aee2, SINHALA DIGA AEDA-PILLA */
	0xcc4d, /* 2080, 0x1000dd2, U+0dd2, KEY_Sinh_i2, SINHALA IS-PILLA */
	0xcc62, /* 2081, 0x1000dd3, U+0dd3, KEY_Sinh_ii2, SINHALA DIGA IS-PILLA */
	0xcc78, /* 2082, 0x1000dd4, U+0dd4, KEY_Sinh_u2, SINHALA PAA-PILLA */
	0x0000,
	0xcc8d, /* 2083, 0x1000dd6, U+0dd6, KEY_Sinh_uu2, SINHALA DIGA PAA-PILLA */
	0x0000,
	0xcca3, /* 2084, 0x1000dd8, U+0dd8, KEY_Sinh_ru2, SINHALA GAETTA-PILLA */
	0xccb9, /* 2085, 0x1000dd9, U+0dd9, KEY_Sinh_e2, SINHALA KOMBUVA */
	0xccce, /* 2086, 0x1000dda, U+0dda, KEY_Sinh_ee2, SINHALA DIGA KOMBUVA */
	0xcce4, /* 2087, 0x1000ddb, U+0ddb, KEY_Sinh_ai2, SINHALA KOMBU DEKA */
	0xccfa, /* 2088, 0x1000ddc, U+0ddc, KEY_Sinh_o2, SINHALA KOMBUVA HAA AELA-PILLA */
	0xafe5, /* 1828, 0x1002845, U+2845, KEY_braille_dots_137, BRAILLE PATTERN DOTS-137 */
	0xcd25, /* 2090, 0x1000dde, U+0dde, KEY_Sinh_au2, SINHALA KOMBUVA HAA GAYANUKITTA */
	0xcd3b, /* 2091, 0x1000ddf, U+0ddf, KEY_Sinh_lu2, SINHALA GAYANUKITTA */
	0xa26f, /* 1704, 0x10020a0, U+20a0, KEY_EcuSign, EURO-CURRENCY SIGN */
	0xa284, /* 1705, 0x10020a1, U+20a1, KEY_ColonSign, COLON SIGN */
	0xa29b, /* 1706, 0x10020a2, U+20a2, KEY_CruzeiroSign, CRUZEIRO SIGN */
	0xa2b5, /* 1707, 0x10020a3, U+20a3, KEY_FFrancSign, FRENCH FRANC SIGN */
	0xa2cd, /* 1708, 0x10020a4, U+20a4, KEY_LiraSign, LIRA SIGN */
	0xa2e3, /* 1709, 0x10020a5, U+20a5, KEY_MillSign, MILL SIGN */
	0xa2f9, /* 1710, 0x10020a6, U+20a6, KEY_NairaSign, NAIRA SIGN */
	0xa310, /* 1711, 0x10020a7, U+20a7, KEY_PesetaSign, PESETA SIGN */
	0xa328, /* 1712, 0x10020a8, U+20a8, KEY_RupeeSign, RUPEE SIGN */
	0xa33f, /* 1713, 0x10020a9, U+20a9, KEY_WonSign, WON SIGN */
	0xa354, /* 1714, 0x10020aa, U+20aa, KEY_NewSheqelSign, NEW SHEQEL SIGN */
	0x6ff9, /* 1209, 0xafa, U+2315, KEY_telephonerecorder, TELEPHONE RECORDER */
	0xa385, /* 1716, 0x20ac, U+20ac, KEY_EuroSign, EURO SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x5233, /*  915, 0x6bd, U+0490, KEY_Ukrainian_GHE_WITH_UPTURN, CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
	0x4fd4, /*  892, 0x6ad, U+0491, KEY_Ukrainian_ghe_with_upturn, CYRILLIC SMALL LETTER GHE WITH UPTURN */
	0x4a2b, /*  844, 0x1000492, U+0492, KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */
	0x4a49, /*  845, 0x1000493, U+0493, KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */
	0xcd7f, /* 2094, 0x1000df4, U+0df4, KEY_Sinh_kunddaliya, SINHALA KUNDDALIYA */
	0x0000,
	0x4a67, /*  846, 0x1000496, U+0496, KEY_Cyrillic_ZHE_descender, CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
	0x4a8b, /*  847, 0x1000497, U+0497, KEY_Cyrillic_zhe_descender, CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
	0x0000,
	0x0000,
	0x4aaf, /*  848, 0x100049a, U+049a, KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
	0x4ad2, /*  849, 0x100049b, U+049b, KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */
	0x4af5, /*  850, 0x100049c, U+049c, KEY_Cyrillic_KA_vertstroke, CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
	0x4b19, /*  851, 0x100049d, U+049d, KEY_Cyrillic_ka_vertstroke, CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
	0x0000,
	0x0000,
	0x0000,
	0x7643, /* 1274, 0xda1, U+0e01, KEY_Thai_kokai, THAI CHARACTER KO KAI */
	0x4b3d, /*  852, 0x10004a2, U+04a2, KEY_Cyrillic_EN_descender, CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
	0x4b60, /*  853, 0x10004a3, U+04a3, KEY_Cyrillic_en_descender, CYRILLIC SMALL LETTER EN WITH DESCENDER */
	0x7690, /* 1277, 0xda4, U+0e04, KEY_Thai_khokhwai, THAI CHARACTER KHO KHWAI */
	0x76ab, /* 1278, 0xda5, U+0e05, KEY_Thai_khokhon, THAI CHARACTER KHO KHON */
	0x76c5, /* 1279, 0xda6, U+0e06, KEY_Thai_khorakhang, THAI CHARACTER KHO RAKHANG */
	0x76e2, /* 1280, 0xda7, U+0e07, KEY_Thai_ngongu, THAI CHARACTER NGO NGU */
	0x76fb, /* 1281, 0xda8, U+0e08, KEY_Thai_chochan, THAI CHARACTER CHO CHAN */
	0x7715, /* 1282, 0xda9, U+0e09, KEY_Thai_choching, THAI CHARACTER CHO CHING */
	0x7730, /* 1283, 0xdaa, U+0e0a, KEY_Thai_chochang, THAI CHARACTER CHO CHANG */
	0x774b, /* 1284, 0xdab, U+0e0b, KEY_Thai_soso, THAI CHARACTER SO SO */
	0x7762, /* 1285, 0xdac, U+0e0c, KEY_Thai_chochoe, THAI CHARACTER CHO CHOE */
	0x777c, /* 1286, 0xdad, U+0e0d, KEY_Thai_yoying, THAI CHARACTER YO YING */
	0x4b83, /*  854, 0x10004ae, U+04ae, KEY_Cyrillic_U_straight, CYRILLIC CAPITAL LETTER STRAIGHT U */
	0x4ba4, /*  855, 0x10004af, U+04af, KEY_Cyrillic_u_straight, CYRILLIC SMALL LETTER STRAIGHT U */
	0x4bc5, /*  856, 0x10004b0, U+04b0, KEY_Cyrillic_U_straight_bar, CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
	0x4bea, /*  857, 0x10004b1, U+04b1, KEY_Cyrillic_u_straight_bar, CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
	0x4c0f, /*  858, 0x10004b2, U+04b2, KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
	0x4c32, /*  859, 0x10004b3, U+04b3, KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */
	0x7838, /* 1293, 0xdb4, U+0e14, KEY_Thai_dodek, THAI CHARACTER DO DEK */
	0x7850, /* 1294, 0xdb5, U+0e15, KEY_Thai_totao, THAI CHARACTER TO TAO */
	0x4c55, /*  860, 0x10004b6, U+04b6, KEY_Cyrillic_CHE_descender, CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
	0x4c79, /*  861, 0x10004b7, U+04b7, KEY_Cyrillic_che_descender, CYRILLIC SMALL LETTER CHE WITH DESCENDER */
	0x4c9d, /*  862, 0x10004b8, U+04b8, KEY_Cyrillic_CHE_vertstroke, CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
	0x4cc2, /*  863, 0x10004b9, U+04b9, KEY_Cyrillic_che_vertstroke, CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
	0x4ce7, /*  864, 0x10004ba, U+04ba, KEY_Cyrillic_SHHA, CYRILLIC CAPITAL LETTER SHHA */
	0x4d02, /*  865, 0x10004bb, U+04bb, KEY_Cyrillic_shha, CYRILLIC SMALL LETTER SHHA */
	0x7904, /* 1301, 0xdbc, U+0e1c, KEY_Thai_phophung, THAI CHARACTER PHO PHUNG */
	0x791f, /* 1302, 0xdbd, U+0e1d, KEY_Thai_fofa, THAI CHARACTER FO FA */
	0x7936, /* 1303, 0xdbe, U+0e1e, KEY_Thai_phophan, THAI CHARACTER PHO PHAN */
	0x7950, /* 1304, 0xdbf, U+0e1f, KEY_Thai_fofan, THAI CHARACTER FO FAN */
	0x7968, /* 1305, 0xdc0, U+0e20, KEY_Thai_phosamphao, THAI CHARACTER PHO SAMPHAO */
	0x7985, /* 1306, 0xdc1, U+0e21, KEY_Thai_moma, THAI CHARACTER MO MA */
	0x799c, /* 1307, 0xdc2, U+0e22, KEY_Thai_yoyak, THAI CHARACTER YO YAK */
	0x79b4, /* 1308, 0xdc3, U+0e23, KEY_Thai_rorua, THAI CHARACTER RO RUA */
	0x79cc, /* 1309, 0xdc4, U+0e24, KEY_Thai_ru, THAI CHARACTER RU */
	0x79e1, /* 1310, 0xdc5, U+0e25, KEY_Thai_loling, THAI CHARACTER LO LING */
	0x79fa, /* 1311, 0xdc6, U+0e26, KEY_Thai_lu, THAI CHARACTER LU */
	0x7a0f, /* 1312, 0xdc7, U+0e27, KEY_Thai_wowaen, THAI CHARACTER WO WAEN */
	0x7a28, /* 1313, 0xdc8, U+0e28, KEY_Thai_sosala, THAI CHARACTER SO SALA */
	0x7a41, /* 1314, 0xdc9, U+0e29, KEY_Thai_sorusi, THAI CHARACTER SO RUSI */
	0x7a5a, /* 1315, 0xdca, U+0e2a, KEY_Thai_sosua, THAI CHARACTER SO SUA */
	0x7a72, /* 1316, 0xdcb, U+0e2b, KEY_Thai_hohip, THAI CHARACTER HO HIP */
	0x7a8a, /* 1317, 0xdcc, U+0e2c, KEY_Thai_lochula, THAI CHARACTER LO CHULA */
	0x7aa4, /* 1318, 0xdcd, U+0e2d, KEY_Thai_oang, THAI CHARACTER O ANG */
	0x7abb, /* 1319, 0xdce, U+0e2e, KEY_Thai_honokhuk, THAI CHARACTER HO NOKHUK */
	0x7ad6, /* 1320, 0xdcf, U+0e2f, KEY_Thai_paiyannoi, THAI CHARACTER PAIYANNOI */
	0x7af2, /* 1321, 0xdd0, U+0e30, KEY_Thai_saraa, THAI CHARACTER SARA A */
	0x7b0a, /* 1322, 0xdd1, U+0e31, KEY_Thai_maihanakat, THAI CHARACTER MAI HAN-AKAT */
	0x7b27, /* 1323, 0xdd2, U+0e32, KEY_Thai_saraaa, THAI CHARACTER SARA AA */
	0x7b40, /* 1324, 0xdd3, U+0e33, KEY_Thai_saraam, THAI CHARACTER SARA AM */
	0x7b59, /* 1325, 0xdd4, U+0e34, KEY_Thai_sarai, THAI CHARACTER SARA I */
	0x7b71, /* 1326, 0xdd5, U+0e35, KEY_Thai_saraii, THAI CHARACTER SARA II */
	0x7b8a, /* 1327, 0xdd6, U+0e36, KEY_Thai_saraue, THAI CHARACTER SARA UE */
	0x7ba3, /* 1328, 0xdd7, U+0e37, KEY_Thai_sarauee, THAI CHARACTER SARA UEE */
	0x4d1d, /*  866, 0x10004d8, U+04d8, KEY_Cyrillic_SCHWA, CYRILLIC CAPITAL LETTER SCHWA */
	0x4d39, /*  867, 0x10004d9, U+04d9, KEY_Cyrillic_schwa, CYRILLIC SMALL LETTER SCHWA */
	0x7bee, /* 1331, 0xdda, U+0e3a, KEY_Thai_phinthu, THAI CHARACTER PHINTHU */
	0x0000,
	0xb228, /* 1847, 0x1002858, U+2858, KEY_braille_dots_457, BRAILLE PATTERN DOTS-457 */
	0x0000,
	0x0000,
	0x7c2c, /* 1333, 0xddf, U+0e3f, KEY_Thai_baht, THAI CURRENCY SYMBOL BAHT */
	0x7c43, /* 1334, 0xde0, U+0e40, KEY_Thai_sarae, THAI CHARACTER SARA E */
	0x7c5b, /* 1335, 0xde1, U+0e41, KEY_Thai_saraae, THAI CHARACTER SARA AE */
	0x4d55, /*  868, 0x10004e2, U+04e2, KEY_Cyrillic_I_macron, CYRILLIC CAPITAL LETTER I WITH MACRON */
	0x4d74, /*  869, 0x10004e3, U+04e3, KEY_Cyrillic_i_macron, CYRILLIC SMALL LETTER I WITH MACRON */
	0x7cac, /* 1338, 0xde4, U+0e44, KEY_Thai_saraaimaimalai, THAI CHARACTER SARA AI MAIMALAI */
	0x6a0c, /* 1152, 0xab8, U+2105, KEY_careof, CARE OF */
	0x7ceb, /* 1340, 0xde6, U+0e46, KEY_Thai_maiyamok, THAI CHARACTER MAIYAMOK */
	0x7d06, /* 1341, 0xde7, U+0e47, KEY_Thai_maitaikhu, THAI CHARACTER MAITAIKHU */
	0x4d93, /*  870, 0x10004e8, U+04e8, KEY_Cyrillic_O_bar, CYRILLIC CAPITAL LETTER BARRED O */
	0x4daf, /*  871, 0x10004e9, U+04e9, KEY_Cyrillic_o_bar, CYRILLIC SMALL LETTER BARRED O */
	0x7d53, /* 1344, 0xdea, U+0e4a, KEY_Thai_maitri, THAI CHARACTER MAI TRI */
	0x7d6c, /* 1345, 0xdeb, U+0e4b, KEY_Thai_maichattawa, THAI CHARACTER MAI CHATTAWA */
	0x7d8a, /* 1346, 0xdec, U+0e4c, KEY_Thai_thanthakhat, THAI CHARACTER THANTHAKHAT */
	0x7da8, /* 1347, 0xded, U+0e4d, KEY_Thai_nikhahit, THAI CHARACTER NIKHAHIT */
	0x4dcb, /*  872, 0x10004ee, U+04ee, KEY_Cyrillic_U_macron, CYRILLIC CAPITAL LETTER U WITH MACRON */
	0x4dea, /*  873, 0x10004ef, U+04ef, KEY_Cyrillic_u_macron, CYRILLIC SMALL LETTER U WITH MACRON */
	0x7dc3, /* 1348, 0xdf0, U+0e50, KEY_Thai_leksun, THAI DIGIT ZERO */
	0x7ddc, /* 1349, 0xdf1, U+0e51, KEY_Thai_leknung, THAI DIGIT ONE */
	0x7df6, /* 1350, 0xdf2, U+0e52, KEY_Thai_leksong, THAI DIGIT TWO */
	0x7e10, /* 1351, 0xdf3, U+0e53, KEY_Thai_leksam, THAI DIGIT THREE */
	0x7e29, /* 1352, 0xdf4, U+0e54, KEY_Thai_leksi, THAI DIGIT FOUR */
	0x7e41, /* 1353, 0xdf5, U+0e55, KEY_Thai_lekha, THAI DIGIT FIVE */
	0x5050, /*  896, 0x6b0, U+2116, KEY_numerosign, NUMERO SIGN */
	0x7018, /* 1210, 0xafb, U+2117, KEY_phonographcopyright, SOUND RECORDING COPYRIGHT */
	0x7e8c, /* 1356, 0xdf8, U+0e58, KEY_Thai_lekpaet, THAI DIGIT EIGHT */
	0x7ea6, /* 1357, 0xdf9, U+0e59, KEY_Thai_lekkao, THAI DIGIT NINE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6c4f, /* 1173, 0xad4, U+211e, KEY_prescription, PRESCRIPTION TAKE */
	0x0000,
	0x0000,
	0xa7d4, /* 1759, 0x1002800, U+2800, KEY_braille_blank, BRAILLE PATTERN BLANK */
	0x6b04, /* 1162, 0xac9, U+2122, KEY_trademark, TRADE MARK SIGN */
	0xa7ef, /* 1760, 0x1002801, U+2801, KEY_braille_dots_1, BRAILLE PATTERN DOTS-1 */
	0x0000,
	0xa80b, /* 1761, 0x1002802, U+2802, KEY_braille_dots_2, BRAILLE PATTERN DOTS-2 */
	0x0000,
	0xa827, /* 1762, 0x1002803, U+2803, KEY_braille_dots_12, BRAILLE PATTERN DOTS-12 */
	0x0000,
	0xa844, /* 1763, 0x1002804, U+2804, KEY_braille_dots_3, BRAILLE PATTERN DOTS-3 */
	0x0000,
	0xa860, /* 1764, 0x1002805, U+2805, KEY_braille_dots_13, BRAILLE PATTERN DOTS-13 */
	0x0000,
	0xa87d, /* 1765, 0x1002806, U+2806, KEY_braille_dots_23, BRAILLE PATTERN DOTS-23 */
	0x0000,
	0xa89a, /* 1766, 0x1002807, U+2807, KEY_braille_dots_123, BRAILLE PATTERN DOTS-123 */
	0x0000,
	0xa8b8, /* 1767, 0x1002808, U+2808, KEY_braille_dots_4, BRAILLE PATTERN DOTS-4 */
	0x0000,
	0xa8d4, /* 1768, 0x1002809, U+2809, KEY_braille_dots_14, BRAILLE PATTERN DOTS-14 */
	0x0000,
	0xa8f1, /* 1769, 0x100280a, U+280a, KEY_braille_dots_24, BRAILLE PATTERN DOTS-24 */
	0x0000,
	0xa90e, /* 1770, 0x100280b, U+280b, KEY_braille_dots_124, BRAILLE PATTERN DOTS-124 */
	0x0000,
	0xa92c, /* 1771, 0x100280c, U+280c, KEY_braille_dots_34, BRAILLE PATTERN DOTS-34 */
	0x0000,
	0xa949, /* 1772, 0x100280d, U+280d, KEY_braille_dots_134, BRAILLE PATTERN DOTS-134 */
	0x0000,
	0xa967, /* 1773, 0x100280e, U+280e, KEY_braille_dots_234, BRAILLE PATTERN DOTS-234 */
	0x0000,
	0xa985, /* 1774, 0x100280f, U+280f, KEY_braille_dots_1234, BRAILLE PATTERN DOTS-1234 */
	0x0000,
	0xa9a4, /* 1775, 0x1002810, U+2810, KEY_braille_dots_5, BRAILLE PATTERN DOTS-5 */
	0x0000,
	0xa9c0, /* 1776, 0x1002811, U+2811, KEY_braille_dots_15, BRAILLE PATTERN DOTS-15 */
	0x0000,
	0x9b4d, /* 1630, 0x1001eb2, U+1eb2, KEY_Abrevehook, LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
	0x0000,
	0xa9fa, /* 1778, 0x1002813, U+2813, KEY_braille_dots_125, BRAILLE PATTERN DOTS-125 */
	0x0000,
	0xaa18, /* 1779, 0x1002814, U+2814, KEY_braille_dots_35, BRAILLE PATTERN DOTS-35 */
	0x7bbd, /* 1329, 0xdd8, U+0e38, KEY_Thai_sarau, THAI CHARACTER SARA U */
	0xaa35, /* 1780, 0x1002815, U+2815, KEY_braille_dots_135, BRAILLE PATTERN DOTS-135 */
	0x0000,
	0x7bd5, /* 1330, 0xdd9, U+0e39, KEY_Thai_sarauu, THAI CHARACTER SARA UU */
	0x0000,
	0xaa71, /* 1782, 0x1002817, U+2817, KEY_braille_dots_1235, BRAILLE PATTERN DOTS-1235 */
	0x0000,
	0x8c3e, /* 1478, 0x1000531, U+0531, KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */
	0x8c72, /* 1480, 0x1000532, U+0532, KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */
	0x6953, /* 1144, 0xab0, U+2153, KEY_onethird, VULGAR FRACTION ONE THIRD */
	0x6969, /* 1145, 0xab1, U+2154, KEY_twothirds, VULGAR FRACTION TWO THIRDS */
	0x6980, /* 1146, 0xab2, U+2155, KEY_onefifth, VULGAR FRACTION ONE FIFTH */
	0x6996, /* 1147, 0xab3, U+2156, KEY_twofifths, VULGAR FRACTION TWO FIFTHS */
	0x69ad, /* 1148, 0xab4, U+2157, KEY_threefifths, VULGAR FRACTION THREE FIFTHS */
	0x69c6, /* 1149, 0xab5, U+2158, KEY_fourfifths, VULGAR FRACTION FOUR FIFTHS */
	0x69de, /* 1150, 0xab6, U+2159, KEY_onesixth, VULGAR FRACTION ONE SIXTH */
	0x69f4, /* 1151, 0xab7, U+215a, KEY_fivesixths, VULGAR FRACTION FIVE SIXTHS */
	0x6aa0, /* 1158, 0xac3, U+215b, KEY_oneeighth, VULGAR FRACTION ONE EIGHTH */
	0x6ab7, /* 1159, 0xac4, U+215c, KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */
	0x6ad1, /* 1160, 0xac5, U+215d, KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */
	0x6aea, /* 1161, 0xac6, U+215e, KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */
	0x8f0e, /* 1506, 0x100053f, U+053f, KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */
	0x8f42, /* 1508, 0x1000540, U+0540, KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */
	0x8f74, /* 1510, 0x1000541, U+0541, KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */
	0x8fa8, /* 1512, 0x1000542, U+0542, KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */
	0x8fde, /* 1514, 0x1000543, U+0543, KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */
	0x9014, /* 1516, 0x1000544, U+0544, KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */
	0x9048, /* 1518, 0x1000545, U+0545, KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */
	0x907a, /* 1520, 0x1000546, U+0546, KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */
	0x90ac, /* 1522, 0x1000547, U+0547, KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */
	0x7c74, /* 1336, 0xde2, U+0e42, KEY_Thai_sarao, THAI CHARACTER SARA O */
	0x9112, /* 1526, 0x1000549, U+0549, KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */
	0x9146, /* 1528, 0x100054a, U+054a, KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */
	0x7c8c, /* 1337, 0xde3, U+0e43, KEY_Thai_saraaimaimuan, THAI CHARACTER SARA AI MAIMUAN */
	0x91aa, /* 1532, 0x100054c, U+054c, KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */
	0x91dc, /* 1534, 0x100054d, U+054d, KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */
	0x920e, /* 1536, 0x100054e, U+054e, KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */
	0x9242, /* 1538, 0x100054f, U+054f, KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */
	0x9278, /* 1540, 0x1000550, U+0550, KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */
	0x7ccd, /* 1339, 0xde5, U+0e45, KEY_Thai_lakkhangyao, THAI CHARACTER LAKKHANGYAO */
	0x92de, /* 1544, 0x1000552, U+0552, KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */
	0x9314, /* 1546, 0x1000553, U+0553, KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */
	0x934a, /* 1548, 0x1000554, U+0554, KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */
	0x937c, /* 1550, 0x1000555, U+0555, KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */
	0x93ac, /* 1552, 0x1000556, U+0556, KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */
	0x9dd0, /* 1655, 0x1001ecb, U+1ecb, KEY_ibelowdot, LATIN SMALL LETTER I WITH DOT BELOW */
	0x0000,
	0xace8, /* 1803, 0x100282c, U+282c, KEY_braille_dots_346, BRAILLE PATTERN DOTS-346 */
	0x7d22, /* 1342, 0xde8, U+0e48, KEY_Thai_maiek, THAI CHARACTER MAI EK */
	0x8bc8, /* 1474, 0x100055b, U+055b, KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */
	0x8b8e, /* 1472, 0x100055c, U+055c, KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */
	0x7d3a, /* 1343, 0xde9, U+0e49, KEY_Thai_maitho, THAI CHARACTER MAI THO */
	0x8c02, /* 1476, 0x100055e, U+055e, KEY_Armenian_question, ARMENIAN QUESTION MARK */
	0xad44, /* 1806, 0x100282f, U+282f, KEY_braille_dots_12346, BRAILLE PATTERN DOTS-12346 */
	0x0000,
	0x8c58, /* 1479, 0x1000561, U+0561, KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */
	0x8c8c, /* 1481, 0x1000562, U+0562, KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */
	0x8cc0, /* 1483, 0x1000563, U+0563, KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */
	0x8cf3, /* 1485, 0x1000564, U+0564, KEY_Armenian_da, ARMENIAN SMALL LETTER DA */
	0x8d27, /* 1487, 0x1000565, U+0565, KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */
	0x8d5b, /* 1489, 0x1000566, U+0566, KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */
	0x8d8c, /* 1491, 0x1000567, U+0567, KEY_Armenian_e, ARMENIAN SMALL LETTER EH */
	0x8dbd, /* 1493, 0x1000568, U+0568, KEY_Armenian_at, ARMENIAN SMALL LETTER ET */
	0x8def, /* 1495, 0x1000569, U+0569, KEY_Armenian_to, ARMENIAN SMALL LETTER TO */
	0x8e22, /* 1497, 0x100056a, U+056a, KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */
	0x8e56, /* 1499, 0x100056b, U+056b, KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */
	0x8e8b, /* 1501, 0x100056c, U+056c, KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */
	0x8ec0, /* 1503, 0x100056d, U+056d, KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */
	0x8ef4, /* 1505, 0x100056e, U+056e, KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */
	0x8f28, /* 1507, 0x100056f, U+056f, KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */
	0x65b6, /* 1103, 0x8fb, U+2190, KEY_leftarrow, LEFTWARDS ARROW */
	0x65cd, /* 1104, 0x8fc, U+2191, KEY_uparrow, UPWARDS ARROW */
	0x65e2, /* 1105, 0x8fd, U+2192, KEY_rightarrow, RIGHTWARDS ARROW */
	0x65fa, /* 1106, 0x8fe, U+2193, KEY_downarrow, DOWNWARDS ARROW */
	0x902e, /* 1517, 0x1000574, U+0574, KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */
	0x9061, /* 1519, 0x1000575, U+0575, KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */
	0x9093, /* 1521, 0x1000576, U+0576, KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */
	0x90c6, /* 1523, 0x1000577, U+0577, KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */
	0x90f9, /* 1525, 0x1000578, U+0578, KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */
	0x912c, /* 1527, 0x1000579, U+0579, KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */
	0x915f, /* 1529, 0x100057a, U+057a, KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */
	0x9191, /* 1531, 0x100057b, U+057b, KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */
	0x91c3, /* 1533, 0x100057c, U+057c, KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */
	0x91f5, /* 1535, 0x100057d, U+057d, KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */
	0x9228, /* 1537, 0x100057e, U+057e, KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */
	0x925d, /* 1539, 0x100057f, U+057f, KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */
	0x9291, /* 1541, 0x1000580, U+0580, KEY_Armenian_re, ARMENIAN SMALL LETTER REH */
	0x92c4, /* 1543, 0x1000581, U+0581, KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */
	0x92f9, /* 1545, 0x1000582, U+0582, KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */
	0x932f, /* 1547, 0x1000583, U+0583, KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */
	0x7e59, /* 1354, 0xdf6, U+0e56, KEY_Thai_lekhok, THAI DIGIT SIX */
	0x9394, /* 1551, 0x1000585, U+0585, KEY_Armenian_o, ARMENIAN SMALL LETTER OH */
	0x93c5, /* 1553, 0x1000586, U+0586, KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */
	0x8ab1, /* 1465, 0x1000587, U+0587, KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */
	0x0000,
	0x8ad3, /* 1466, 0x1000589, U+0589, KEY_Armenian_full_stop, ARMENIAN FULL STOP */
	0x8b52, /* 1470, 0x100058a, U+058a, KEY_Armenian_hyphen, ARMENIAN HYPHEN */
	0x947f, /* 1560, 0x10010d5, U+10d5, KEY_Georgian_vin, GEORGIAN LETTER VIN */
	0x0000,
	0xb003, /* 1829, 0x1002846, U+2846, KEY_braille_dots_237, BRAILLE PATTERN DOTS-237 */
	0x0000,
	0xa0a0, /* 1683, 0x1001ee7, U+1ee7, KEY_uhook, LATIN SMALL LETTER U WITH HOOK ABOVE */
	0x0000,
	0xb040, /* 1831, 0x1002848, U+2848, KEY_braille_dots_47, BRAILLE PATTERN DOTS-47 */
	0x0000,
	0xa0cb, /* 1685, 0x1001ee9, U+1ee9, KEY_uhornacute, LATIN SMALL LETTER U WITH HORN AND ACUTE */
	0x0000,
	0xb07b, /* 1833, 0x100284a, U+284a, KEY_braille_dots_247, BRAILLE PATTERN DOTS-247 */
	0x0000,
	0x951a, /* 1566, 0x10010db, U+10db, KEY_Georgian_man, GEORGIAN LETTER MAN */
	0x0000,
	0xb0b8, /* 1835, 0x100284c, U+284c, KEY_braille_dots_347, BRAILLE PATTERN DOTS-347 */
	0x0000,
	0x954e, /* 1568, 0x10010dd, U+10dd, KEY_Georgian_on, GEORGIAN LETTER ON */
	0x0000,
	0x9567, /* 1569, 0x10010de, U+10de, KEY_Georgian_par, GEORGIAN LETTER PAR */
	0x0000,
	0xa159, /* 1691, 0x1001eef, U+1eef, KEY_uhorntilde, LATIN SMALL LETTER U WITH HORN AND TILDE */
	0x0000,
	0x959c, /* 1571, 0x10010e0, U+10e0, KEY_Georgian_rae, GEORGIAN LETTER RAE */
	0x0000,
	0x95b6, /* 1572, 0x10010e1, U+10e1, KEY_Georgian_san, GEORGIAN LETTER SAN */
	0x0000,
	0xb16f, /* 1841, 0x1002852, U+2852, KEY_braille_dots_257, BRAILLE PATTERN DOTS-257 */
	0x0000,
	0x95ea, /* 1574, 0x10010e3, U+10e3, KEY_Georgian_un, GEORGIAN LETTER UN */
	0x0000,
	0x9603, /* 1575, 0x10010e4, U+10e4, KEY_Georgian_phar, GEORGIAN LETTER PHAR */
	0x0000,
	0xb1ca, /* 1844, 0x1002855, U+2855, KEY_braille_dots_1357, BRAILLE PATTERN DOTS-1357 */
	0x0000,
	0x9639, /* 1577, 0x10010e6, U+10e6, KEY_Georgian_ghan, GEORGIAN LETTER GHAN */
	0x0000,
	0xb208, /* 1846, 0x1002857, U+2857, KEY_braille_dots_12357, BRAILLE PATTERN DOTS-12357 */
	0x0000,
	0x966e, /* 1579, 0x10010e8, U+10e8, KEY_Georgian_shin, GEORGIAN LETTER SHIN */
	0x64b6, /* 1092, 0x8ce, U+21d2, KEY_implies, RIGHTWARDS DOUBLE ARROW */
	0xa20f, /* 1699, 0x1001ef9, U+1ef9, KEY_ytilde, LATIN SMALL LETTER Y WITH TILDE */
	0x64a0, /* 1091, 0x8cd, U+21d4, KEY_ifonlyif, LEFT RIGHT DOUBLE ARROW */
	0x0000,
	0x0000,
	0xb284, /* 1850, 0x100285b, U+285b, KEY_braille_dots_12457, BRAILLE PATTERN DOTS-12457 */
	0x0000,
	0x96d8, /* 1583, 0x10010ec, U+10ec, KEY_Georgian_cil, GEORGIAN LETTER CIL */
	0x0000,
	0xb2c3, /* 1852, 0x100285d, U+285d, KEY_braille_dots_13457, BRAILLE PATTERN DOTS-13457 */
	0x0000,
	0x0000,
	0x0000,
	0x9727, /* 1586, 0x10010ef, U+10ef, KEY_Georgian_jhan, GEORGIAN LETTER JHAN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xb3f8, /* 1862, 0x1002867, U+2867, KEY_braille_dots_12367, BRAILLE PATTERN DOTS-12367 */
	0x7259, /* 1235, 0xce0, U+05d0, KEY_hebrew_aleph, HEBREW LETTER ALEF */
	0x7273, /* 1236, 0xce1, U+05d1, KEY_hebrew_bet, HEBREW LETTER BET */
	0x72a4, /* 1238, 0xce2, U+05d2, KEY_hebrew_gimel, HEBREW LETTER GIMEL */
	0x72d9, /* 1240, 0xce3, U+05d3, KEY_hebrew_dalet, HEBREW LETTER DALET */
	0x730e, /* 1242, 0xce4, U+05d4, KEY_hebrew_he, HEBREW LETTER HE */
	0x7325, /* 1243, 0xce5, U+05d5, KEY_hebrew_waw, HEBREW LETTER VAV */
	0x733d, /* 1244, 0xce6, U+05d6, KEY_hebrew_zain, HEBREW LETTER ZAYIN */
	0x7370, /* 1246, 0xce7, U+05d7, KEY_hebrew_chet, HEBREW LETTER HET */
	0x73a1, /* 1248, 0xce8, U+05d8, KEY_hebrew_tet, HEBREW LETTER TET */
	0x73d2, /* 1250, 0xce9, U+05d9, KEY_hebrew_yod, HEBREW LETTER YOD */
	0x73ea, /* 1251, 0xcea, U+05da, KEY_hebrew_finalkaph, HEBREW LETTER FINAL KAF */
	0x7408, /* 1252, 0xceb, U+05db, KEY_hebrew_kaph, HEBREW LETTER KAF */
	0x7421, /* 1253, 0xcec, U+05dc, KEY_hebrew_lamed, HEBREW LETTER LAMED */
	0x743b, /* 1254, 0xced, U+05dd, KEY_hebrew_finalmem, HEBREW LETTER FINAL MEM */
	0x7458, /* 1255, 0xcee, U+05de, KEY_hebrew_mem, HEBREW LETTER MEM */
	0x7470, /* 1256, 0xcef, U+05df, KEY_hebrew_finalnun, HEBREW LETTER FINAL NUN */
	0x748d, /* 1257, 0xcf0, U+05e0, KEY_hebrew_nun, HEBREW LETTER NUN */
	0x74a5, /* 1258, 0xcf1, U+05e1, KEY_hebrew_samech, HEBREW LETTER SAMEKH */
	0x6581, /* 1101, 0x8ef, U+2202, KEY_partialderivative, PARTIAL DIFFERENTIAL */
	0x74f4, /* 1261, 0xcf3, U+05e3, KEY_hebrew_finalpe, HEBREW LETTER FINAL PE */
	0x7510, /* 1262, 0xcf4, U+05e4, KEY_hebrew_pe, HEBREW LETTER PE */
	0x7527, /* 1263, 0xcf5, U+05e5, KEY_hebrew_finalzade, HEBREW LETTER FINAL TSADI */
	0x7563, /* 1265, 0xcf6, U+05e6, KEY_hebrew_zade, HEBREW LETTER TSADI */
	0x645a, /* 1088, 0x8c5, U+2207, KEY_nabla, NABLA */
	0x75c6, /* 1269, 0xcf8, U+05e8, KEY_hebrew_resh, HEBREW LETTER RESH */
	0x75df, /* 1270, 0xcf9, U+05e9, KEY_hebrew_shin, HEBREW LETTER SHIN */
	0x75f8, /* 1271, 0xcfa, U+05ea, KEY_hebrew_taw, HEBREW LETTER TAV */
	0xa5c5, /* 1738, 0x100220b, U+220b, KEY_containsas, CONTAINS AS MEMBER */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7167, /* 1224, 0xbca, U+2218, KEY_jot, RING OPERATOR */
	0x0000,
	0x64e2, /* 1094, 0x8d6, U+221a, KEY_radical, SQUARE ROOT */
	0xa5f5, /* 1740, 0x100221b, U+221b, KEY_cuberoot, CUBE ROOT */
	0xa60b, /* 1741, 0x100221c, U+221c, KEY_fourthroot, FOURTH ROOT */
	0x642d, /* 1086, 0x8c1, U+221d, KEY_variation, PROPORTIONAL TO */
	0x6444, /* 1087, 0x8c2, U+221e, KEY_infinity, INFINITY */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6552, /* 1099, 0x8de, U+2227, KEY_logicaland, LOGICAL AND */
	0x656a, /* 1100, 0x8df, U+2228, KEY_logicalor, LOGICAL OR */
	0x6525, /* 1097, 0x8dc, U+2229, KEY_intersection, INTERSECTION */
	0x653f, /* 1098, 0x8dd, U+222a, KEY_union, UNION */
	0x6400, /* 1084, 0x8bf, U+222b, KEY_integral, INTEGRAL */
	0x4294, /*  770, 0x5ac, U+060c, KEY_Arabic_comma, ARABIC COMMA */
	0xa63a, /* 1743, 0x100222d, U+222d, KEY_tintegral, TRIPLE INTEGRAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6416, /* 1085, 0x8c0, U+2234, KEY_therefore, THEREFORE */
	0xa651, /* 1744, 0x1002235, U+2235, KEY_because, BECAUSE */
	0x0000,
	0xb859, /* 1898, 0x100288b, U+288b, KEY_braille_dots_1248, BRAILLE PATTERN DOTS-1248 */
	0x0000,
	0x0000,
	0x0000,
	0x43a7, /*  782, 0x5bb, U+061b, KEY_Arabic_semicolon, ARABIC SEMICOLON */
	0x646d, /* 1089, 0x8c8, U+223c, KEY_approximate, TILDE OPERATOR */
	0x0000,
	0x0000,
	0x43c5, /*  783, 0x5bf, U+061f, KEY_Arabic_question_mark, ARABIC QUESTION MARK */
	0x0000,
	0x43e7, /*  784, 0x5c1, U+0621, KEY_Arabic_hamza, ARABIC LETTER HAMZA */
	0x4401, /*  785, 0x5c2, U+0622, KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */
	0x4421, /*  786, 0x5c3, U+0623, KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */
	0x4441, /*  787, 0x5c4, U+0624, KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */
	0x4460, /*  788, 0x5c5, U+0625, KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */
	0x4483, /*  789, 0x5c6, U+0626, KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */
	0x44a2, /*  790, 0x5c7, U+0627, KEY_Arabic_alef, ARABIC LETTER ALEF */
	0x44bb, /*  791, 0x5c8, U+0628, KEY_Arabic_beh, ARABIC LETTER BEH */
	0x44d3, /*  792, 0x5c9, U+0629, KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */
	0x44f2, /*  793, 0x5ca, U+062a, KEY_Arabic_teh, ARABIC LETTER TEH */
	0x450a, /*  794, 0x5cb, U+062b, KEY_Arabic_theh, ARABIC LETTER THEH */
	0x4523, /*  795, 0x5cc, U+062c, KEY_Arabic_jeem, ARABIC LETTER JEEM */
	0x453c, /*  796, 0x5cd, U+062d, KEY_Arabic_hah, ARABIC LETTER HAH */
	0x4554, /*  797, 0x5ce, U+062e, KEY_Arabic_khah, ARABIC LETTER KHAH */
	0x456d, /*  798, 0x5cf, U+062f, KEY_Arabic_dal, ARABIC LETTER DAL */
	0x4585, /*  799, 0x5d0, U+0630, KEY_Arabic_thal, ARABIC LETTER THAL */
	0x459e, /*  800, 0x5d1, U+0631, KEY_Arabic_ra, ARABIC LETTER REH */
	0x45b5, /*  801, 0x5d2, U+0632, KEY_Arabic_zain, ARABIC LETTER ZAIN */
	0x45ce, /*  802, 0x5d3, U+0633, KEY_Arabic_seen, ARABIC LETTER SEEN */
	0x45e7, /*  803, 0x5d4, U+0634, KEY_Arabic_sheen, ARABIC LETTER SHEEN */
	0x4601, /*  804, 0x5d5, U+0635, KEY_Arabic_sad, ARABIC LETTER SAD */
	0x4619, /*  805, 0x5d6, U+0636, KEY_Arabic_dad, ARABIC LETTER DAD */
	0x4631, /*  806, 0x5d7, U+0637, KEY_Arabic_tah, ARABIC LETTER TAH */
	0x4649, /*  807, 0x5d8, U+0638, KEY_Arabic_zah, ARABIC LETTER ZAH */
	0x4661, /*  808, 0x5d9, U+0639, KEY_Arabic_ain, ARABIC LETTER AIN */
	0x4679, /*  809, 0x5da, U+063a, KEY_Arabic_ghain, ARABIC LETTER GHAIN */
	0x8ca6, /* 1482, 0x1000533, U+0533, KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */
	0x0000,
	0x0000,
	0x8cda, /* 1484, 0x1000534, U+0534, KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */
	0x0000,
	0x4693, /*  810, 0x5e0, U+0640, KEY_Arabic_tatweel, ARABIC TATWEEL */
	0x46af, /*  811, 0x5e1, U+0641, KEY_Arabic_feh, ARABIC LETTER FEH */
	0x46c7, /*  812, 0x5e2, U+0642, KEY_Arabic_qaf, ARABIC LETTER QAF */
	0x46df, /*  813, 0x5e3, U+0643, KEY_Arabic_kaf, ARABIC LETTER KAF */
	0x46f7, /*  814, 0x5e4, U+0644, KEY_Arabic_lam, ARABIC LETTER LAM */
	0x470f, /*  815, 0x5e5, U+0645, KEY_Arabic_meem, ARABIC LETTER MEEM */
	0x4728, /*  816, 0x5e6, U+0646, KEY_Arabic_noon, ARABIC LETTER NOON */
	0x4741, /*  817, 0x5e7, U+0647, KEY_Arabic_ha, ARABIC LETTER HEH */
	0x4770, /*  819, 0x5e8, U+0648, KEY_Arabic_waw, ARABIC LETTER WAW */
	0x4788, /*  820, 0x5e9, U+0649, KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */
	0x47a8, /*  821, 0x5ea, U+064a, KEY_Arabic_yeh, ARABIC LETTER YEH */
	0x47c0, /*  822, 0x5eb, U+064b, KEY_Arabic_fathatan, ARABIC FATHATAN */
	0x47dd, /*  823, 0x5ec, U+064c, KEY_Arabic_dammatan, ARABIC DAMMATAN */
	0x47fa, /*  824, 0x5ed, U+064d, KEY_Arabic_kasratan, ARABIC KASRATAN */
	0x4817, /*  825, 0x5ee, U+064e, KEY_Arabic_fatha, ARABIC FATHA */
	0x4831, /*  826, 0x5ef, U+064f, KEY_Arabic_damma, ARABIC DAMMA */
	0x484b, /*  827, 0x5f0, U+0650, KEY_Arabic_kasra, ARABIC KASRA */
	0x4865, /*  828, 0x5f1, U+0651, KEY_Arabic_shadda, ARABIC SHADDA */
	0x4880, /*  829, 0x5f2, U+0652, KEY_Arabic_sukun, ARABIC SUKUN */
	0x489a, /*  830, 0x1000653, U+0653, KEY_Arabic_madda_above, ARABIC MADDAH ABOVE */
	0x48ba, /*  831, 0x1000654, U+0654, KEY_Arabic_hamza_above, ARABIC HAMZA ABOVE */
	0x48da, /*  832, 0x1000655, U+0655, KEY_Arabic_hamza_below, ARABIC HAMZA BELOW */
	0x8e70, /* 1500, 0x100053c, U+053c, KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */
	0xbc34, /* 1930, 0x10028ab, U+28ab, KEY_braille_dots_12468, BRAILLE PATTERN DOTS-12468 */
	0x0000,
	0x8ea6, /* 1502, 0x100053d, U+053d, KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */
	0x0000,
	0x0000,
	0x8eda, /* 1504, 0x100053e, U+053e, KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */
	0x0000,
	0x0000,
	0xbcb3, /* 1934, 0x10028af, U+28af, KEY_braille_dots_123468, BRAILLE PATTERN DOTS-123468 */
	0x42cb, /*  772, 0x1000660, U+0660, KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */
	0x42e1, /*  773, 0x1000661, U+0661, KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */
	0x42f7, /*  774, 0x1000662, U+0662, KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */
	0x430d, /*  775, 0x1000663, U+0663, KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */
	0x4323, /*  776, 0x1000664, U+0664, KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */
	0x4339, /*  777, 0x1000665, U+0665, KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */
	0x434f, /*  778, 0x1000666, U+0666, KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */
	0x4365, /*  779, 0x1000667, U+0667, KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */
	0x437b, /*  780, 0x1000668, U+0668, KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */
	0x4391, /*  781, 0x1000669, U+0669, KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */
	0x41d6, /*  763, 0x100066a, U+066a, KEY_Arabic_percent, ARABIC PERCENT SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xbdaf, /* 1942, 0x10028b7, U+28b7, KEY_braille_dots_123568, BRAILLE PATTERN DOTS-123568 */
	0x41f2, /*  764, 0x1000670, U+0670, KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4217, /*  765, 0x1000679, U+0679, KEY_Arabic_tteh, ARABIC LETTER TTEH */
	0x90e0, /* 1524, 0x1000548, U+0548, KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */
	0x0000,
	0x0000,
	0x0000,
	0x4230, /*  766, 0x100067e, U+067e, KEY_Arabic_peh, ARABIC LETTER PEH */
	0xbeb2, /* 1950, 0x10028bf, U+28bf, KEY_braille_dots_1234568, BRAILLE PATTERN DOTS-1234568 */
	0x0000,
	0x0000,
	0x7220, /* 1233, 0xbfc, U+22a2, KEY_righttack, RIGHT TACK */
	0x720a, /* 1232, 0xbdc, U+22a3, KEY_lefttack, LEFT TACK */
	0x7110, /* 1220, 0xbc2, U+22a4, KEY_downtack, DOWN TACK */
	0x718a, /* 1226, 0xbce, U+22a5, KEY_uptack, UP TACK */
	0x4248, /*  767, 0x1000686, U+0686, KEY_Arabic_tcheh, ARABIC LETTER TCHEH */
	0x0000,
	0x4262, /*  768, 0x1000688, U+0688, KEY_Arabic_ddal, ARABIC LETTER DDAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x427b, /*  769, 0x1000691, U+0691, KEY_Arabic_rreh, ARABIC LETTER RREH */
	0x0000,
	0x0000,
	0x0000,
	0x92aa, /* 1542, 0x1000551, U+0551, KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */
	0x0000,
	0x0000,
	0x48fa, /*  833, 0x1000698, U+0698, KEY_Arabic_jeh, ARABIC LETTER JEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4912, /*  834, 0x10006a4, U+06a4, KEY_Arabic_veh, ARABIC LETTER VEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x492a, /*  835, 0x10006a9, U+06a9, KEY_Arabic_keheh, ARABIC LETTER KEHEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4944, /*  836, 0x10006af, U+06af, KEY_Arabic_gaf, ARABIC LETTER GAF */
	0x93de, /* 1554, 0x100055a, U+055a, KEY_Armenian_apostrophe, ARMENIAN APOSTROPHE */
	0x0000,
	0x0000,
	0xc8b6, /* 2038, 0x1000d9d, U+0d9d, KEY_Sinh_gha, SINHALA MAHA. GAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8b12, /* 1468, 0x100055d, U+055d, KEY_Armenian_separation_mark, ARMENIAN COMMA */
	0x495c, /*  837, 0x10006ba, U+06ba, KEY_Arabic_noon_ghunna, ARABIC LETTER NOON GHUNNA */
	0x0000,
	0x0000,
	0x0000,
	0x497c, /*  838, 0x10006be, U+06be, KEY_Arabic_heh_doachashmee, ARABIC LETTER HEH DOACHASHMEE */
	0x0000,
	0x0000,
	0x49f3, /*  842, 0x10006c1, U+06c1, KEY_Arabic_heh_goal, ARABIC LETTER HEH GOAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xad81, /* 1808, 0x1002831, U+2831, KEY_braille_dots_156, BRAILLE PATTERN DOTS-156 */
	0x49a0, /*  839, 0x10006cc, U+06cc, KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */
	0x0000,
	0x0000,
	0xc39f, /* 1990, 0x10028e7, U+28e7, KEY_braille_dots_123678, BRAILLE PATTERN DOTS-123678 */
	0x0000,
	0x0000,
	0x49d5, /*  841, 0x10006d2, U+06d2, KEY_Arabic_yeh_baree, ARABIC LETTER YEH BARREE */
	0x0000,
	0x42ae, /*  771, 0x10006d4, U+06d4, KEY_Arabic_fullstop, ARABIC FULL STOP */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xaddc, /* 1811, 0x1002834, U+2834, KEY_braille_dots_356, BRAILLE PATTERN DOTS-356 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xadfa, /* 1812, 0x1002835, U+2835, KEY_braille_dots_1356, BRAILLE PATTERN DOTS-1356 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x71b2, /* 1228, 0xbd3, U+2308, KEY_upstile, LEFT CEILING */
	0xbef1, /* 1952, 0x10028c1, U+28c1, KEY_braille_dots_178, BRAILLE PATTERN DOTS-178 */
	0x713a, /* 1222, 0xbc4, U+230a, KEY_downstile, LEFT FLOOR */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcb73, /* 2070, 0x1000dc1, U+0dc1, KEY_Sinh_sha, SINHALA TAALUJA SAYANNA */
	0x4104, /*  753, 0x10006f0, U+06f0, KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */
	0x4119, /*  754, 0x10006f1, U+06f1, KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */
	0x412e, /*  755, 0x10006f2, U+06f2, KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */
	0x4143, /*  756, 0x10006f3, U+06f3, KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */
	0x4158, /*  757, 0x10006f4, U+06f4, KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */
	0x416d, /*  758, 0x10006f5, U+06f5, KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */
	0x4182, /*  759, 0x10006f6, U+06f6, KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */
	0x4197, /*  760, 0x10006f7, U+06f7, KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */
	0x41ac, /*  761, 0x10006f8, U+06f8, KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */
	0x41c1, /*  762, 0x10006f9, U+06f9, KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x614d, /* 1061, 0x8a4, U+2320, KEY_topintegral, TOP HALF INTEGRAL */
	0x6166, /* 1062, 0x8a5, U+2321, KEY_botintegral, BOTTOM HALF INTEGRAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9902, /* 1607, 0x1000259, U+0259, KEY_schwa, LATIN SMALL LETTER SCHWA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc6d4, /* 2015, 0x1000d82, U+0d82, KEY_Sinh_ng, SINHALA ANUSVARAYA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc6fe, /* 2017, 0x1000d85, U+0d85, KEY_Sinh_a, SINHALA AYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc73c, /* 2020, 0x1000d88, U+0d88, KEY_Sinh_aee, SINHALA AEEYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcac9, /* 2062, 0x1000db6, U+0db6, KEY_Sinh_ba, SINHALA BAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc77b, /* 2023, 0x1000d8b, U+0d8b, KEY_Sinh_u, SINHALA UYANNA */
	0x0000,
	0x0000,
	0x8d42, /* 1488, 0x1000536, U+0536, KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */
	0x0000,
	0x0000,
	0xcaf4, /* 2064, 0x1000db8, U+0db8, KEY_Sinh_ma, SINHALA MAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc7b9, /* 2026, 0x1000d8e, U+0d8e, KEY_Sinh_rii, SINHALA IRUUYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xc7cf, /* 2027, 0x1000d8f, U+0d8f, KEY_Sinh_lu, SINHALA ILUYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc7fa, /* 2029, 0x1000d91, U+0d91, KEY_Sinh_e, SINHALA EYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x93ff, /* 1555, 0x10010d0, U+10d0, KEY_Georgian_an, GEORGIAN LETTER AN */
	0x9418, /* 1556, 0x10010d1, U+10d1, KEY_Georgian_ban, GEORGIAN LETTER BAN */
	0x9432, /* 1557, 0x10010d2, U+10d2, KEY_Georgian_gan, GEORGIAN LETTER GAN */
	0x944c, /* 1558, 0x10010d3, U+10d3, KEY_Georgian_don, GEORGIAN LETTER DON */
	0x9466, /* 1559, 0x10010d4, U+10d4, KEY_Georgian_en, GEORGIAN LETTER EN */
	0x7178, /* 1225, 0xbcc, U+2395, KEY_quad, APL FUNCTIONAL SYMBOL QUAD */
	0x9499, /* 1561, 0x10010d6, U+10d6, KEY_Georgian_zen, GEORGIAN LETTER ZEN */
	0x94b3, /* 1562, 0x10010d7, U+10d7, KEY_Georgian_tan, GEORGIAN LETTER TAN */
	0x94cd, /* 1563, 0x10010d8, U+10d8, KEY_Georgian_in, GEORGIAN LETTER IN */
	0x94e6, /* 1564, 0x10010d9, U+10d9, KEY_Georgian_kan, GEORGIAN LETTER KAN */
	0x9500, /* 1565, 0x10010da, U+10da, KEY_Georgian_las, GEORGIAN LETTER LAS */
	0x6214, /* 1068, 0x8ab, U+239b, KEY_topleftparens, LEFT PARENTHESIS UPPER HOOK */
	0x9534, /* 1567, 0x10010dc, U+10dc, KEY_Georgian_nar, GEORGIAN LETTER NAR */
	0x622f, /* 1069, 0x8ac, U+239d, KEY_botleftparens, LEFT PARENTHESIS LOWER HOOK */
	0x624a, /* 1070, 0x8ad, U+239e, KEY_toprightparens, RIGHT PARENTHESIS UPPER HOOK */
	0x9581, /* 1570, 0x10010df, U+10df, KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */
	0x6266, /* 1071, 0x8ae, U+23a0, KEY_botrightparens, RIGHT PARENTHESIS LOWER HOOK */
	0x619a, /* 1064, 0x8a7, U+23a1, KEY_topleftsqbracket, LEFT SQUARE BRACKET UPPER CORNER */
	0x95d0, /* 1573, 0x10010e2, U+10e2, KEY_Georgian_tar, GEORGIAN LETTER TAR */
	0x61b8, /* 1065, 0x8a8, U+23a3, KEY_botleftsqbracket, LEFT SQUARE BRACKET LOWER CORNER */
	0x61d6, /* 1066, 0x8a9, U+23a4, KEY_toprightsqbracket, RIGHT SQUARE BRACKET UPPER CORNER */
	0x961e, /* 1576, 0x10010e5, U+10e5, KEY_Georgian_khar, GEORGIAN LETTER KHAR */
	0x61f5, /* 1067, 0x8aa, U+23a6, KEY_botrightsqbracket, RIGHT SQUARE BRACKET LOWER CORNER */
	0x9654, /* 1578, 0x10010e7, U+10e7, KEY_Georgian_qar, GEORGIAN LETTER QAR */
	0x6282, /* 1072, 0x8af, U+23a8, KEY_leftmiddlecurlybrace, LEFT CURLY BRACKET MIDDLE PIECE */
	0x9689, /* 1580, 0x10010e9, U+10e9, KEY_Georgian_chin, GEORGIAN LETTER CHIN */
	0x96a4, /* 1581, 0x10010ea, U+10ea, KEY_Georgian_can, GEORGIAN LETTER CAN */
	0x96be, /* 1582, 0x10010eb, U+10eb, KEY_Georgian_jil, GEORGIAN LETTER JIL */
	0x62a4, /* 1073, 0x8b0, U+23ac, KEY_rightmiddlecurlybrace, RIGHT CURLY BRACKET MIDDLE PIECE */
	0x96f2, /* 1584, 0x10010ed, U+10ed, KEY_Georgian_char, GEORGIAN LETTER CHAR */
	0x970d, /* 1585, 0x10010ee, U+10ee, KEY_Georgian_xan, GEORGIAN LETTER XAN */
	0x609b, /* 1054, 0x7f7, U+03c7, KEY_Greek_chi, GREEK SMALL LETTER CHI */
	0x9742, /* 1587, 0x10010f0, U+10f0, KEY_Georgian_hae, GEORGIAN LETTER HAE */
	0x975c, /* 1588, 0x10010f1, U+10f1, KEY_Georgian_he, GEORGIAN LETTER HE */
	0x9775, /* 1589, 0x10010f2, U+10f2, KEY_Georgian_hie, GEORGIAN LETTER HIE */
	0x978f, /* 1590, 0x10010f3, U+10f3, KEY_Georgian_we, GEORGIAN LETTER WE */
	0x97a8, /* 1591, 0x10010f4, U+10f4, KEY_Georgian_har, GEORGIAN LETTER HAR */
	0x97c2, /* 1592, 0x10010f5, U+10f5, KEY_Georgian_hoe, GEORGIAN LETTER HOE */
	0x97dc, /* 1593, 0x10010f6, U+10f6, KEY_Georgian_fi, GEORGIAN LETTER FI */
	0x60fc, /* 1058, 0x8a1, U+23b7, KEY_leftradical, RADICAL SYMBOL BOTTOM */
	0x0000,
	0x0000,
	0x673f, /* 1121, 0x9ef, U+23ba, KEY_horizlinescan1, HORIZONTAL SCAN LINE-1 */
	0x675b, /* 1122, 0x9f0, U+23bb, KEY_horizlinescan3, HORIZONTAL SCAN LINE-3 */
	0x6793, /* 1124, 0x9f2, U+23bc, KEY_horizlinescan7, HORIZONTAL SCAN LINE-7 */
	0x67af, /* 1125, 0x9f3, U+23bd, KEY_horizlinescan9, HORIZONTAL SCAN LINE-9 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa9dd, /* 1777, 0x1002812, U+2812, KEY_braille_dots_25, BRAILLE PATTERN DOTS-25 */
	0x0000,
	0x0000,
	0x9178, /* 1530, 0x100054b, U+054b, KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xaa53, /* 1781, 0x1002816, U+2816, KEY_braille_dots_235, BRAILLE PATTERN DOTS-235 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xaa90, /* 1783, 0x1002818, U+2818, KEY_braille_dots_45, BRAILLE PATTERN DOTS-45 */
	0x0000,
	0x0000,
	0xaaad, /* 1784, 0x1002819, U+2819, KEY_braille_dots_145, BRAILLE PATTERN DOTS-145 */
	0x0000,
	0x0000,
	0xaacb, /* 1785, 0x100281a, U+281a, KEY_braille_dots_245, BRAILLE PATTERN DOTS-245 */
	0x0000,
	0x0000,
	0xaae9, /* 1786, 0x100281b, U+281b, KEY_braille_dots_1245, BRAILLE PATTERN DOTS-1245 */
	0x0000,
	0x0000,
	0xab08, /* 1787, 0x100281c, U+281c, KEY_braille_dots_345, BRAILLE PATTERN DOTS-345 */
	0x0000,
	0x0000,
	0xab26, /* 1788, 0x100281d, U+281d, KEY_braille_dots_1345, BRAILLE PATTERN DOTS-1345 */
	0x0000,
	0x0000,
	0xab45, /* 1789, 0x100281e, U+281e, KEY_braille_dots_2345, BRAILLE PATTERN DOTS-2345 */
	0x0000,
	0x0000,
	0xab64, /* 1790, 0x100281f, U+281f, KEY_braille_dots_12345, BRAILLE PATTERN DOTS-12345 */
	0x0000,
	0x0000,
	0xab84, /* 1791, 0x1002820, U+2820, KEY_braille_dots_6, BRAILLE PATTERN DOTS-6 */
	0x0000,
	0x0000,
	0xaba0, /* 1792, 0x1002821, U+2821, KEY_braille_dots_16, BRAILLE PATTERN DOTS-16 */
	0x0000,
	0x0000,
	0xabbd, /* 1793, 0x1002822, U+2822, KEY_braille_dots_26, BRAILLE PATTERN DOTS-26 */
	0x6658, /* 1110, 0x9e2, U+2409, KEY_ht, SYMBOL FOR HORIZONTAL TABULATION */
	0x6688, /* 1113, 0x9e5, U+240a, KEY_lf, SYMBOL FOR LINE FEED */
	0x66a8, /* 1115, 0x9e9, U+240b, KEY_vt, SYMBOL FOR VERTICAL TABULATION */
	0x6668, /* 1111, 0x9e3, U+240c, KEY_ff, SYMBOL FOR FORM FEED */
	0x6678, /* 1112, 0x9e4, U+240d, KEY_cr, SYMBOL FOR CARRIAGE RETURN */
	0xabf8, /* 1795, 0x1002824, U+2824, KEY_braille_dots_36, BRAILLE PATTERN DOTS-36 */
	0x0000,
	0x0000,
	0xac15, /* 1796, 0x1002825, U+2825, KEY_braille_dots_136, BRAILLE PATTERN DOTS-136 */
	0x0000,
	0xca9e, /* 2060, 0x1000db4, U+0db4, KEY_Sinh_pa, SINHALA PAYANNA */
	0xac33, /* 1797, 0x1002826, U+2826, KEY_braille_dots_236, BRAILLE PATTERN DOTS-236 */
	0x0000,
	0x0000,
	0xac51, /* 1798, 0x1002827, U+2827, KEY_braille_dots_1236, BRAILLE PATTERN DOTS-1236 */
	0x0000,
	0x0000,
	0xac70, /* 1799, 0x1002828, U+2828, KEY_braille_dots_46, BRAILLE PATTERN DOTS-46 */
	0x6c2d, /* 1172, 0xad3, U+201d, KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */
	0x0000,
	0xac8d, /* 1800, 0x1002829, U+2829, KEY_braille_dots_146, BRAILLE PATTERN DOTS-146 */
	0x0000,
	0xcade, /* 2063, 0x1000db7, U+0db7, KEY_Sinh_bha, SINHALA MAHA. BAYANNA */
	0xacab, /* 1801, 0x100282a, U+282a, KEY_braille_dots_246, BRAILLE PATTERN DOTS-246 */
	0x0000,
	0x0000,
	0x6f33, /* 1201, 0xaf2, U+2021, KEY_doubledagger, DOUBLE DAGGER */
	0x6698, /* 1114, 0x9e8, U+2424, KEY_nl, SYMBOL FOR NEWLINE */
	0x0000,
	0x0000,
	0xcb09, /* 2065, 0x1000db9, U+0db9, KEY_Sinh_mba, SINHALA AMBA BAYANNA */
	0x0000,
	0xad06, /* 1804, 0x100282d, U+282d, KEY_braille_dots_1346, BRAILLE PATTERN DOTS-1346 */
	0x0000,
	0x6936, /* 1143, 0xaaf, U+2025, KEY_doubbaselinedot, TWO DOT LEADER */
	0xad25, /* 1805, 0x100282e, U+282e, KEY_braille_dots_2346, BRAILLE PATTERN DOTS-2346 */
	0x6920, /* 1142, 0xaae, U+2026, KEY_ellipsis, HORIZONTAL ELLIPSIS */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xad64, /* 1807, 0x1002830, U+2830, KEY_braille_dots_56, BRAILLE PATTERN DOTS-56 */
	0x0000,
	0x0000,
	0x9e59, /* 1661, 0x1001ed1, U+1ed1, KEY_ocircumflexacute, LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x0000,
	0x0000,
	0xad9f, /* 1809, 0x1002832, U+2832, KEY_braille_dots_256, BRAILLE PATTERN DOTS-256 */
	0x0000,
	0x0000,
	0xadbd, /* 1810, 0x1002833, U+2833, KEY_braille_dots_1256, BRAILLE PATTERN DOTS-1256 */
	0x0000,
	0x0000,
	0x9eb3, /* 1664, 0x1001ed4, U+1ed4, KEY_Ocircumflexhook, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x0000,
	0x0000,
	0x6c69, /* 1174, 0xad5, U+2030, KEY_permille, PER MILLE SIGN */
	0x0000,
	0x0000,
	0xae19, /* 1813, 0x1002836, U+2836, KEY_braille_dots_2356, BRAILLE PATTERN DOTS-2356 */
	0x6c7f, /* 1175, 0xad6, U+2032, KEY_minutes, PRIME */
	0x0000,
	0x6c94, /* 1176, 0xad7, U+2033, KEY_seconds, DOUBLE PRIME */
	0x0000,
	0x0000,
	0xae58, /* 1815, 0x1002838, U+2838, KEY_braille_dots_456, BRAILLE PATTERN DOTS-456 */
	0x0000,
	0x0000,
	0xae76, /* 1816, 0x1002839, U+2839, KEY_braille_dots_1456, BRAILLE PATTERN DOTS-1456 */
	0x0000,
	0x0000,
	0xae95, /* 1817, 0x100283a, U+283a, KEY_braille_dots_2456, BRAILLE PATTERN DOTS-2456 */
	0x7039, /* 1211, 0xafc, U+2038, KEY_caret, CARET */
	0x0000,
	0xaeb4, /* 1818, 0x100283b, U+283b, KEY_braille_dots_12456, BRAILLE PATTERN DOTS-12456 */
	0x0000,
	0x0000,
	0xaed4, /* 1819, 0x100283c, U+283c, KEY_braille_dots_3456, BRAILLE PATTERN DOTS-3456 */
	0x0000,
	0x0000,
	0xaef3, /* 1820, 0x100283d, U+283d, KEY_braille_dots_13456, BRAILLE PATTERN DOTS-13456 */
	0x0000,
	0x0000,
	0xaf13, /* 1821, 0x100283e, U+283e, KEY_braille_dots_23456, BRAILLE PATTERN DOTS-23456 */
	0x575f, /*  966, 0x6ef, U+041e, KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */
	0x0000,
	0xaf33, /* 1822, 0x100283f, U+283f, KEY_braille_dots_123456, BRAILLE PATTERN DOTS-123456 */
	0x0000,
	0x0000,
	0xaf54, /* 1823, 0x1002840, U+2840, KEY_braille_dots_7, BRAILLE PATTERN DOTS-7 */
	0x0000,
	0x0000,
	0xaf70, /* 1824, 0x1002841, U+2841, KEY_braille_dots_17, BRAILLE PATTERN DOTS-17 */
	0x0000,
	0xc6e9, /* 2016, 0x1000d83, U+0d83, KEY_Sinh_h2, SINHALA VISARGAYA */
	0x74db, /* 1260, 0xcf2, U+05e2, KEY_hebrew_ayin, HEBREW LETTER AYIN */
	0x0000,
	0x0000,
	0xafaa, /* 1826, 0x1002843, U+2843, KEY_braille_dots_127, BRAILLE PATTERN DOTS-127 */
	0x0000,
	0xc712, /* 2018, 0x1000d86, U+0d86, KEY_Sinh_aa, SINHALA AAYANNA */
	0xafc8, /* 1827, 0x1002844, U+2844, KEY_braille_dots_37, BRAILLE PATTERN DOTS-37 */
	0xc727, /* 2019, 0x1000d87, U+0d87, KEY_Sinh_ae, SINHALA AEYANNA */
	0x0000,
	0xa57e, /* 1735, 0x1002205, U+2205, KEY_emptyset, NULL SET */
	0x0000,
	0xc752, /* 2021, 0x1000d89, U+0d89, KEY_Sinh_i, SINHALA IYANNA */
	0x0000,
	0xc766, /* 2022, 0x1000d8a, U+0d8a, KEY_Sinh_ii, SINHALA IIYANNA */
	0x0000,
	0xb021, /* 1830, 0x1002847, U+2847, KEY_braille_dots_1237, BRAILLE PATTERN DOTS-1237 */
	0x0000,
	0xc78f, /* 2024, 0x1000d8c, U+0d8c, KEY_Sinh_uu, SINHALA UUYANNA */
	0x0000,
	0xc7a4, /* 2025, 0x1000d8d, U+0d8d, KEY_Sinh_ri, SINHALA IRUYANNA */
	0x0000,
	0xb05d, /* 1832, 0x1002849, U+2849, KEY_braille_dots_147, BRAILLE PATTERN DOTS-147 */
	0x0000,
	0x994e, /* 1611, 0x1001e37, U+1e37, KEY_lbelowdot, LATIN SMALL LETTER L WITH DOT BELOW */
	0x0000,
	0xc7e4, /* 2028, 0x1000d90, U+0d90, KEY_Sinh_luu, SINHALA ILUUYANNA */
	0x0000,
	0xb099, /* 1834, 0x100284b, U+284b, KEY_braille_dots_1247, BRAILLE PATTERN DOTS-1247 */
	0x0000,
	0xc80e, /* 2030, 0x1000d92, U+0d92, KEY_Sinh_ee, SINHALA EEYANNA */
	0x0000,
	0xc823, /* 2031, 0x1000d93, U+0d93, KEY_Sinh_ai, SINHALA AIYANNA */
	0x0000,
	0xb0d6, /* 1836, 0x100284d, U+284d, KEY_braille_dots_1347, BRAILLE PATTERN DOTS-1347 */
	0x0000,
	0xc84c, /* 2033, 0x1000d95, U+0d95, KEY_Sinh_oo, SINHALA OOYANNA */
	0xb0f5, /* 1837, 0x100284e, U+284e, KEY_braille_dots_2347, BRAILLE PATTERN DOTS-2347 */
	0xc861, /* 2034, 0x1000d96, U+0d96, KEY_Sinh_au, SINHALA AUYANNA */
	0x0000,
	0xb114, /* 1838, 0x100284f, U+284f, KEY_braille_dots_12347, BRAILLE PATTERN DOTS-12347 */
	0x0000,
	0x0000,
	0xb134, /* 1839, 0x1002850, U+2850, KEY_braille_dots_57, BRAILLE PATTERN DOTS-57 */
	0x0000,
	0x0000,
	0xb151, /* 1840, 0x1002851, U+2851, KEY_braille_dots_157, BRAILLE PATTERN DOTS-157 */
	0x0000,
	0xc88b, /* 2036, 0x1000d9b, U+0d9b, KEY_Sinh_kha, SINHALA MAHA. KAYANNA */
	0x0000,
	0xc8a1, /* 2037, 0x1000d9c, U+0d9c, KEY_Sinh_ga, SINHALA GAYANNA */
	0x0000,
	0xb18d, /* 1842, 0x1002853, U+2853, KEY_braille_dots_1257, BRAILLE PATTERN DOTS-1257 */
	0x0000,
	0xc8cc, /* 2039, 0x1000d9e, U+0d9e, KEY_Sinh_ng2, SINHALA KANTAJA NAASIKYAYA */
	0xb1ac, /* 1843, 0x1002854, U+2854, KEY_braille_dots_357, BRAILLE PATTERN DOTS-357 */
	0xc8e2, /* 2040, 0x1000d9f, U+0d9f, KEY_Sinh_nga, SINHALA SANYAKA GAYANNA */
	0x0000,
	0xc8f8, /* 2041, 0x1000da0, U+0da0, KEY_Sinh_ca, SINHALA CAYANNA */
	0x0000,
	0xc90d, /* 2042, 0x1000da1, U+0da1, KEY_Sinh_cha, SINHALA MAHA. CAYANNA */
	0xb1e9, /* 1845, 0x1002856, U+2856, KEY_braille_dots_2357, BRAILLE PATTERN DOTS-2357 */
	0xc923, /* 2043, 0x1000da2, U+0da2, KEY_Sinh_ja, SINHALA JAYANNA */
	0x0000,
	0xc938, /* 2044, 0x1000da3, U+0da3, KEY_Sinh_jha, SINHALA MAHA. JAYANNA */
	0x0000,
	0xc94e, /* 2045, 0x1000da4, U+0da4, KEY_Sinh_nya, SINHALA TAALUJA NAASIKYAYA */
	0xa1fb, /* 1698, 0x1001ef8, U+1ef8, KEY_Ytilde, LATIN CAPITAL LETTER Y WITH TILDE */
	0xc964, /* 2046, 0x1000da5, U+0da5, KEY_Sinh_jnya, SINHALA TAALUJA SANYOOGA NAASIKYAYA */
	0x0000,
	0xb246, /* 1848, 0x1002859, U+2859, KEY_braille_dots_1457, BRAILLE PATTERN DOTS-1457 */
	0x0000,
	0xc991, /* 2048, 0x1000da7, U+0da7, KEY_Sinh_tta, SINHALA TTAYANNA */
	0x0000,
	0xc9a7, /* 2049, 0x1000da8, U+0da8, KEY_Sinh_ttha, SINHALA MAHA. TTAYANNA */
	0x0000,
	0xc9be, /* 2050, 0x1000da9, U+0da9, KEY_Sinh_dda, SINHALA DDAYANNA */
	0x0000,
	0xc9d4, /* 2051, 0x1000daa, U+0daa, KEY_Sinh_ddha, SINHALA MAHA. DDAYANNA */
	0x0000,
	0xc9eb, /* 2052, 0x1000dab, U+0dab, KEY_Sinh_nna, SINHALA MUURDHAJA NAYANNA */
	0x0000,
	0xca01, /* 2053, 0x1000dac, U+0dac, KEY_Sinh_ndda, SINHALA SANYAKA DDAYANNA */
	0x0000,
	0xca18, /* 2054, 0x1000dad, U+0dad, KEY_Sinh_tha, SINHALA TAYANNA */
	0x0000,
	0xca2e, /* 2055, 0x1000dae, U+0dae, KEY_Sinh_thha, SINHALA MAHA. TAYANNA */
	0x0000,
	0xca45, /* 2056, 0x1000daf, U+0daf, KEY_Sinh_dha, SINHALA DAYANNA */
	0x0000,
	0xca5b, /* 2057, 0x1000db0, U+0db0, KEY_Sinh_dhha, SINHALA MAHA. DAYANNA */
	0x0000,
	0xca72, /* 2058, 0x1000db1, U+0db1, KEY_Sinh_na, SINHALA DANTAJA NAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xca87, /* 2059, 0x1000db3, U+0db3, KEY_Sinh_ndha, SINHALA SANYAKA DAYANNA */
	0x0000,
	0xa3b5, /* 1718, 0x1002074, U+2074, KEY_foursuperior, SUPERSCRIPT FOUR */
	0x0000,
	0xa3cf, /* 1719, 0x1002075, U+2075, KEY_fivesuperior, SUPERSCRIPT FIVE */
	0x0000,
	0xa3e9, /* 1720, 0x1002076, U+2076, KEY_sixsuperior, SUPERSCRIPT SIX */
	0x0000,
	0xa402, /* 1721, 0x1002077, U+2077, KEY_sevensuperior, SUPERSCRIPT SEVEN */
	0x0000,
	0xa41d, /* 1722, 0x1002078, U+2078, KEY_eightsuperior, SUPERSCRIPT EIGHT */
	0x0000,
	0xa438, /* 1723, 0x1002079, U+2079, KEY_ninesuperior, SUPERSCRIPT NINE */
	0x0000,
	0xcb1f, /* 2066, 0x1000dba, U+0dba, KEY_Sinh_ya, SINHALA YAYANNA */
	0x0000,
	0xcb34, /* 2067, 0x1000dbb, U+0dbb, KEY_Sinh_ra, SINHALA RAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcb5e, /* 2069, 0x1000dc0, U+0dc0, KEY_Sinh_va, SINHALA VAYANNA */
	0x0000,
	0xb474, /* 1866, 0x100286b, U+286b, KEY_braille_dots_12467, BRAILLE PATTERN DOTS-12467 */
	0x0000,
	0xcb89, /* 2071, 0x1000dc2, U+0dc2, KEY_Sinh_ssha, SINHALA MUURDHAJA SAYANNA */
	0xa623, /* 1742, 0x100222c, U+222c, KEY_dintegral, DOUBLE INTEGRAL */
	0xcba0, /* 2072, 0x1000dc3, U+0dc3, KEY_Sinh_sa, SINHALA DANTAJA SAYANNA */
	0x0000,
	0xcbb5, /* 2073, 0x1000dc4, U+0dc4, KEY_Sinh_ha, SINHALA HAYANNA */
	0x0000,
	0xcbca, /* 2074, 0x1000dc5, U+0dc5, KEY_Sinh_lla, SINHALA MUURDHAJA LAYANNA */
	0x0000,
	0xcbe0, /* 2075, 0x1000dc6, U+0dc6, KEY_Sinh_fa, SINHALA FAYANNA */
	0x0000,
	0xb4f3, /* 1870, 0x100286f, U+286f, KEY_braille_dots_123467, BRAILLE PATTERN DOTS-123467 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6777, /* 1123, 0x9f1, U+2500, KEY_horizlinescan5, BOX DRAWINGS LIGHT HORIZONTAL */
	0x0000,
	0x6816, /* 1130, 0x9f8, U+2502, KEY_vertbar, BOX DRAWINGS LIGHT VERTICAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x66ef, /* 1118, 0x9ec, U+250c, KEY_upleftcorner, BOX DRAWINGS LIGHT DOWN AND RIGHT */
	0x0000,
	0x0000,
	0x0000,
	0x66d4, /* 1117, 0x9eb, U+2510, KEY_uprightcorner, BOX DRAWINGS LIGHT DOWN AND LEFT */
	0x0000,
	0x0000,
	0x0000,
	0x6709, /* 1119, 0x9ed, U+2514, KEY_lowleftcorner, BOX DRAWINGS LIGHT UP AND RIGHT */
	0x0000,
	0x0000,
	0x0000,
	0x66b8, /* 1116, 0x9ea, U+2518, KEY_lowrightcorner, BOX DRAWINGS LIGHT UP AND LEFT */
	0x0000,
	0x0000,
	0xcd0f, /* 2089, 0x1000ddd, U+0ddd, KEY_Sinh_oo2, SINHALA KOMBUVA HAA DIGA AELA-PILLA */
	0x67cb, /* 1126, 0x9f4, U+251c, KEY_leftt, BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x67de, /* 1127, 0x9f5, U+2524, KEY_rightt, BOX DRAWINGS LIGHT VERTICAL AND LEFT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xb76a, /* 1890, 0x1002883, U+2883, KEY_braille_dots_128, BRAILLE PATTERN DOTS-128 */
	0x6804, /* 1129, 0x9f7, U+252c, KEY_topt, BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x67f2, /* 1128, 0x9f6, U+2534, KEY_bott, BOX DRAWINGS LIGHT UP AND HORIZONTAL */
	0x0000,
	0x0000,
	0xa36f, /* 1715, 0x10020ab, U+20ab, KEY_DongSign, DONG SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6724, /* 1120, 0x9ee, U+253c, KEY_crossinglines, BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcd51, /* 2092, 0x1000df2, U+0df2, KEY_Sinh_ruu2, SINHALA DIGA GAETTA-PILLA */
	0x0000,
	0xcd68, /* 2093, 0x1000df3, U+0df3, KEY_Sinh_luu2, SINHALA DIGA GAYANUKITTA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x765b, /* 1275, 0xda2, U+0e02, KEY_Thai_khokhai, THAI CHARACTER KHO KHAI */
	0x0000,
	0x7675, /* 1276, 0xda3, U+0e03, KEY_Thai_khokhuat, THAI CHARACTER KHO KHUAT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7795, /* 1287, 0xdae, U+0e0e, KEY_Thai_dochada, THAI CHARACTER DO CHADA */
	0x0000,
	0x77af, /* 1288, 0xdaf, U+0e0f, KEY_Thai_topatak, THAI CHARACTER TO PATAK */
	};
#endif /* NEEDUTABLE */
