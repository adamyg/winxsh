/* This file is generated from <mkkeys> on Thu May  7 12:32:38 2020 */
/* termemumkkeys: termemumkkeys.c,v 1.3 2020/04/29 11:54:24 cvsuser Exp  */
/* $Id: keysymdb.h,v 1.3 2020/05/07 11:49:43 cvsuser Exp $ */
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
0x10, 0x15, 0x00, 0x00, 0xfe, 0x90, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','l','o','w','l','i','n','e',0, /* 5638, 0xfe90, KEY_dead_lowline */
0xd2, 0x65, 0x00, 0x00, 0xfe, 0x91, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','a','b','o','v','e','v','e','r','t','i','c','a','l','l','i','n','e',0, /* 5674, 0xfe91, KEY_dead_aboveverticalline */
0xd2, 0x65, 0x00, 0x00, 0xfe, 0x92, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','b','e','l','o','w','v','e','r','t','i','c','a','l','l','i','n','e',0, /* 5710, 0xfe92, KEY_dead_belowverticalline */
0xc1, 0xcb, 0x00, 0x00, 0xfe, 0x93, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','l','o','n','g','s','o','l','i','d','u','s','o','v','e','r','l','a','y',0, /* 5747, 0xfe93, KEY_dead_longsolidusoverlay */
0x37, 0xc7, 0x00, 0x00, 0xfe, 0x80, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','a',0, /* 5767, 0xfe80, KEY_dead_a */
0x37, 0xa7, 0x00, 0x00, 0xfe, 0x81, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','A',0, /* 5787, 0xfe81, KEY_dead_A */
0x37, 0xcb, 0x00, 0x00, 0xfe, 0x82, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','e',0, /* 5807, 0xfe82, KEY_dead_e */
0x37, 0xab, 0x00, 0x00, 0xfe, 0x83, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','E',0, /* 5827, 0xfe83, KEY_dead_E */
0x37, 0xcf, 0x00, 0x00, 0xfe, 0x84, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','i',0, /* 5847, 0xfe84, KEY_dead_i */
0x37, 0xaf, 0x00, 0x00, 0xfe, 0x85, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','I',0, /* 5867, 0xfe85, KEY_dead_I */
0x37, 0xd5, 0x00, 0x00, 0xfe, 0x86, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','o',0, /* 5887, 0xfe86, KEY_dead_o */
0x37, 0xb5, 0x00, 0x00, 0xfe, 0x87, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','O',0, /* 5907, 0xfe87, KEY_dead_O */
0x37, 0xdb, 0x00, 0x00, 0xfe, 0x88, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','u',0, /* 5927, 0xfe88, KEY_dead_u */
0x37, 0xbb, 0x00, 0x00, 0xfe, 0x89, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','U',0, /* 5947, 0xfe89, KEY_dead_U */
0x09, 0x17, 0x00, 0x00, 0xfe, 0x8a, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','s','m','a','l','l','_','s','c','h','w','a',0, /* 5977, 0xfe8a, KEY_dead_small_schwa */
0x02, 0x97, 0x00, 0x00, 0xfe, 0x8b, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','c','a','p','i','t','a','l','_','s','c','h','w','a',0, /* 6009, 0xfe8b, KEY_dead_capital_schwa */
0x83, 0x29, 0x00, 0x00, 0xfe, 0x8c, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','a','d','_','g','r','e','e','k',0, /* 6033, 0xfe8c, KEY_dead_greek */
0x1f, 0xac, 0x00, 0x00, 0xfe, 0xd0, 0x00, 0x00, 0x00, 'K','E','Y','_','F','i','r','s','t','_','V','i','r','t','u','a','l','_','S','c','r','e','e','n',0, /* 6067, 0xfed0, KEY_First_Virtual_Screen */
0x1f, 0xac, 0x00, 0x00, 0xfe, 0xd1, 0x00, 0x00, 0x00, 'K','E','Y','_','P','r','e','v','_','V','i','r','t','u','a','l','_','S','c','r','e','e','n',0, /* 6100, 0xfed1, KEY_Prev_Virtual_Screen */
0x1f, 0xac, 0x00, 0x00, 0xfe, 0xd2, 0x00, 0x00, 0x00, 'K','E','Y','_','N','e','x','t','_','V','i','r','t','u','a','l','_','S','c','r','e','e','n',0, /* 6133, 0xfed2, KEY_Next_Virtual_Screen */
0x1f, 0xac, 0x00, 0x00, 0xfe, 0xd4, 0x00, 0x00, 0x00, 'K','E','Y','_','L','a','s','t','_','V','i','r','t','u','a','l','_','S','c','r','e','e','n',0, /* 6166, 0xfed4, KEY_Last_Virtual_Screen */
0xe7, 0x94, 0x00, 0x00, 0xfe, 0xd5, 0x00, 0x00, 0x00, 'K','E','Y','_','T','e','r','m','i','n','a','t','e','_','S','e','r','v','e','r',0, /* 6196, 0xfed5, KEY_Terminate_Server */
0xee, 0x0d, 0x00, 0x00, 0xfe, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','A','c','c','e','s','s','X','_','E','n','a','b','l','e',0, /* 6224, 0xfe70, KEY_AccessX_Enable */
0x1f, 0x8d, 0x00, 0x00, 0xfe, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','A','c','c','e','s','s','X','_','F','e','e','d','b','a','c','k','_','E','n','a','b','l','e',0, /* 6261, 0xfe71, KEY_AccessX_Feedback_Enable */
0xa5, 0x8d, 0x00, 0x00, 0xfe, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','R','e','p','e','a','t','K','e','y','s','_','E','n','a','b','l','e',0, /* 6292, 0xfe72, KEY_RepeatKeys_Enable */
0x3d, 0x8d, 0x00, 0x00, 0xfe, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','S','l','o','w','K','e','y','s','_','E','n','a','b','l','e',0, /* 6321, 0xfe73, KEY_SlowKeys_Enable */
0xad, 0x8d, 0x00, 0x00, 0xfe, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','B','o','u','n','c','e','K','e','y','s','_','E','n','a','b','l','e',0, /* 6352, 0xfe74, KEY_BounceKeys_Enable */
0xed, 0x8d, 0x00, 0x00, 0xfe, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','S','t','i','c','k','y','K','e','y','s','_','E','n','a','b','l','e',0, /* 6383, 0xfe75, KEY_StickyKeys_Enable */
0x0d, 0x8d, 0x00, 0x00, 0xfe, 0x76, 0x00, 0x00, 0x00, 'K','E','Y','_','M','o','u','s','e','K','e','y','s','_','E','n','a','b','l','e',0, /* 6413, 0xfe76, KEY_MouseKeys_Enable */
0x32, 0x0d, 0x00, 0x00, 0xfe, 0x77, 0x00, 0x00, 0x00, 'K','E','Y','_','M','o','u','s','e','K','e','y','s','_','A','c','c','e','l','_','E','n','a','b','l','e',0, /* 6449, 0xfe77, KEY_MouseKeys_Accel_Enable */
0x10, 0x8d, 0x00, 0x00, 0xfe, 0x78, 0x00, 0x00, 0x00, 'K','E','Y','_','O','v','e','r','l','a','y','1','_','E','n','a','b','l','e',0, /* 6478, 0xfe78, KEY_Overlay1_Enable */
0x11, 0x0d, 0x00, 0x00, 0xfe, 0x79, 0x00, 0x00, 0x00, 'K','E','Y','_','O','v','e','r','l','a','y','2','_','E','n','a','b','l','e',0, /* 6507, 0xfe79, KEY_Overlay2_Enable */
0x09, 0x0d, 0x00, 0x00, 0xfe, 0x7a, 0x00, 0x00, 0x00, 'K','E','Y','_','A','u','d','i','b','l','e','B','e','l','l','_','E','n','a','b','l','e',0, /* 6539, 0xfe7a, KEY_AudibleBell_Enable */
0xb8, 0xa4, 0x00, 0x00, 0xfe, 0xe0, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','L','e','f','t',0, /* 6565, 0xfee0, KEY_Pointer_Left */
0x72, 0x28, 0x00, 0x00, 0xfe, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','R','i','g','h','t',0, /* 6592, 0xfee1, KEY_Pointer_Right */
0x6d, 0xf6, 0x00, 0x00, 0xfe, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','U','p',0, /* 6616, 0xfee2, KEY_Pointer_Up */
0xb8, 0xa8, 0x00, 0x00, 0xfe, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','o','w','n',0, /* 6642, 0xfee3, KEY_Pointer_Down */
0xe4, 0x94, 0x00, 0x00, 0xfe, 0xe4, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','U','p','L','e','f','t',0, /* 6670, 0xfee4, KEY_Pointer_UpLeft */
0xca, 0x08, 0x00, 0x00, 0xfe, 0xe5, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','U','p','R','i','g','h','t',0, /* 6699, 0xfee5, KEY_Pointer_UpRight */
0x8f, 0xb4, 0x00, 0x00, 0xfe, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','o','w','n','L','e','f','t',0, /* 6729, 0xfee6, KEY_Pointer_DownLeft */
0x20, 0x48, 0x00, 0x00, 0xfe, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','o','w','n','R','i','g','h','t',0, /* 6760, 0xfee7, KEY_Pointer_DownRight */
0x8c, 0x74, 0x00, 0x00, 0xfe, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','_','D','f','l','t',0, /* 6793, 0xfee8, KEY_Pointer_Button_Dflt */
0xc8, 0x49, 0x00, 0x00, 0xfe, 0xe9, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','1',0, /* 6822, 0xfee9, KEY_Pointer_Button1 */
0xc8, 0x4a, 0x00, 0x00, 0xfe, 0xea, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','2',0, /* 6851, 0xfeea, KEY_Pointer_Button2 */
0xc8, 0x4b, 0x00, 0x00, 0xfe, 0xeb, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','3',0, /* 6880, 0xfeeb, KEY_Pointer_Button3 */
0xc8, 0x4c, 0x00, 0x00, 0xfe, 0xec, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','4',0, /* 6909, 0xfeec, KEY_Pointer_Button4 */
0xc8, 0x4d, 0x00, 0x00, 0xfe, 0xed, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','B','u','t','t','o','n','5',0, /* 6938, 0xfeed, KEY_Pointer_Button5 */
0x37, 0x94, 0x00, 0x00, 0xfe, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','_','D','f','l','t',0, /* 6973, 0xfeee, KEY_Pointer_DblClick_Dflt */
0x12, 0xfb, 0x00, 0x00, 0xfe, 0xef, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','1',0, /* 7004, 0xfeef, KEY_Pointer_DblClick1 */
0x12, 0xfc, 0x00, 0x00, 0xfe, 0xf0, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','2',0, /* 7035, 0xfef0, KEY_Pointer_DblClick2 */
0x12, 0xfd, 0x00, 0x00, 0xfe, 0xf1, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','3',0, /* 7066, 0xfef1, KEY_Pointer_DblClick3 */
0x12, 0xfe, 0x00, 0x00, 0xfe, 0xf2, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','4',0, /* 7097, 0xfef2, KEY_Pointer_DblClick4 */
0x12, 0xff, 0x00, 0x00, 0xfe, 0xf3, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','b','l','C','l','i','c','k','5',0, /* 7128, 0xfef3, KEY_Pointer_DblClick5 */
0x1b, 0x14, 0x00, 0x00, 0xfe, 0xf4, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','_','D','f','l','t',0, /* 7159, 0xfef4, KEY_Pointer_Drag_Dflt */
0x71, 0x33, 0x00, 0x00, 0xfe, 0xf5, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','1',0, /* 7186, 0xfef5, KEY_Pointer_Drag1 */
0x71, 0x34, 0x00, 0x00, 0xfe, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','2',0, /* 7213, 0xfef6, KEY_Pointer_Drag2 */
0x71, 0x35, 0x00, 0x00, 0xfe, 0xf7, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','3',0, /* 7240, 0xfef7, KEY_Pointer_Drag3 */
0x71, 0x36, 0x00, 0x00, 0xfe, 0xf8, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','4',0, /* 7267, 0xfef8, KEY_Pointer_Drag4 */
0x71, 0x37, 0x00, 0x00, 0xfe, 0xfd, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','r','a','g','5',0, /* 7294, 0xfefd, KEY_Pointer_Drag5 */
0x36, 0x21, 0x00, 0x00, 0xfe, 0xf9, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','E','n','a','b','l','e','K','e','y','s',0, /* 7326, 0xfef9, KEY_Pointer_EnableKeys */
0x25, 0xf1, 0x00, 0x00, 0xfe, 0xfa, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','A','c','c','e','l','e','r','a','t','e',0, /* 7358, 0xfefa, KEY_Pointer_Accelerate */
0x65, 0x48, 0x00, 0x00, 0xfe, 0xfb, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','f','l','t','B','t','n','N','e','x','t',0, /* 7391, 0xfefb, KEY_Pointer_DfltBtnNext */
0x65, 0x68, 0x00, 0x00, 0xfe, 0xfc, 0x00, 0x00, 0x00, 'K','E','Y','_','P','o','i','n','t','e','r','_','D','f','l','t','B','t','n','P','r','e','v',0, /* 7424, 0xfefc, KEY_Pointer_DfltBtnPrev */
0x13, 0x22, 0x00, 0x00, 0xfe, 0xa0, 0x00, 0x00, 0x00, 'K','E','Y','_','c','h',0, /* 7440, 0xfea0, KEY_ch */
0x12, 0xe2, 0x00, 0x00, 0xfe, 0xa1, 0x00, 0x00, 0x00, 'K','E','Y','_','C','h',0, /* 7456, 0xfea1, KEY_Ch */
0x12, 0xc2, 0x00, 0x00, 0xfe, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','C','H',0, /* 7472, 0xfea2, KEY_CH */
0x26, 0x9a, 0x00, 0x00, 0xfe, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','c','_','h',0, /* 7489, 0xfea3, KEY_c_h */
0x26, 0x1a, 0x00, 0x00, 0xfe, 0xa4, 0x00, 0x00, 0x00, 'K','E','Y','_','C','_','h',0, /* 7506, 0xfea4, KEY_C_h */
0x25, 0xfa, 0x00, 0x00, 0xfe, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','C','_','H',0, /* 7523, 0xfea5, KEY_C_H */
0xaa, 0x79, 0x00, 0x00, 0xfd, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','D','u','p','l','i','c','a','t','e',0, /* 7551, 0xfd01, KEY_3270_Duplicate */
0xa2, 0xbb, 0x00, 0x00, 0xfd, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','F','i','e','l','d','M','a','r','k',0, /* 7579, 0xfd02, KEY_3270_FieldMark */
0x95, 0x82, 0x00, 0x00, 0xfd, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','R','i','g','h','t','2',0, /* 7604, 0xfd03, KEY_3270_Right2 */
0xc9, 0xfa, 0x00, 0x00, 0xfd, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','L','e','f','t','2',0, /* 7628, 0xfd04, KEY_3270_Left2 */
0x26, 0x1c, 0x00, 0x00, 0xfd, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','B','a','c','k','T','a','b',0, /* 7654, 0xfd05, KEY_3270_BackTab */
0x52, 0x70, 0x00, 0x00, 0xfd, 0x06, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','E','r','a','s','e','E','O','F',0, /* 7681, 0xfd06, KEY_3270_EraseEOF */
0x4c, 0xfe, 0x00, 0x00, 0xfd, 0x07, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','E','r','a','s','e','I','n','p','u','t',0, /* 7710, 0xfd07, KEY_3270_EraseInput */
0xca, 0xb2, 0x00, 0x00, 0xfd, 0x08, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','R','e','s','e','t',0, /* 7734, 0xfd08, KEY_3270_Reset */
0x65, 0x52, 0x00, 0x00, 0xfd, 0x09, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','Q','u','i','t',0, /* 7757, 0xfd09, KEY_3270_Quit */
0xb1, 0xcb, 0x00, 0x00, 0xfd, 0x0a, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','A','1',0, /* 7779, 0xfd0a, KEY_3270_PA1 */
0xb1, 0xcc, 0x00, 0x00, 0xfd, 0x0b, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','A','2',0, /* 7801, 0xfd0b, KEY_3270_PA2 */
0xb1, 0xcd, 0x00, 0x00, 0xfd, 0x0c, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','A','3',0, /* 7823, 0xfd0c, KEY_3270_PA3 */
0x65, 0x3e, 0x00, 0x00, 0xfd, 0x0d, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','T','e','s','t',0, /* 7846, 0xfd0d, KEY_3270_Test */
0x64, 0xde, 0x00, 0x00, 0xfd, 0x0e, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','A','t','t','n',0, /* 7869, 0xfd0e, KEY_3270_Attn */
0xad, 0xeb, 0x00, 0x00, 0xfd, 0x0f, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','C','u','r','s','o','r','B','l','i','n','k',0, /* 7899, 0xfd0f, KEY_3270_CursorBlink */
0xa0, 0x5c, 0x00, 0x00, 0xfd, 0x10, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','A','l','t','C','u','r','s','o','r',0, /* 7927, 0xfd10, KEY_3270_AltCursor */
0x53, 0x45, 0x00, 0x00, 0xfd, 0x11, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','K','e','y','C','l','i','c','k',0, /* 7954, 0xfd11, KEY_3270_KeyClick */
0x65, 0x1e, 0x00, 0x00, 0xfd, 0x12, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','J','u','m','p',0, /* 7977, 0xfd12, KEY_3270_Jump */
0xc9, 0xf4, 0x00, 0x00, 0xfd, 0x13, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','I','d','e','n','t',0, /* 8001, 0xfd13, KEY_3270_Ident */
0x65, 0x51, 0x00, 0x00, 0xfd, 0x14, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','R','u','l','e',0, /* 8024, 0xfd14, KEY_3270_Rule */
0x64, 0xdd, 0x00, 0x00, 0xfd, 0x15, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','C','o','p','y',0, /* 8047, 0xfd15, KEY_3270_Copy */
0x65, 0x1b, 0x00, 0x00, 0xfd, 0x16, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','l','a','y',0, /* 8070, 0xfd16, KEY_3270_Play */
0xca, 0xe2, 0x00, 0x00, 0xfd, 0x17, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','S','e','t','u','p',0, /* 8094, 0xfd17, KEY_3270_Setup */
0x95, 0x6c, 0x00, 0x00, 0xfd, 0x18, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','R','e','c','o','r','d',0, /* 8119, 0xfd18, KEY_3270_Record */
0xfb, 0xac, 0x00, 0x00, 0xfd, 0x19, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','C','h','a','n','g','e','S','c','r','e','e','n',0, /* 8150, 0xfd19, KEY_3270_ChangeScreen */
0x42, 0xcc, 0x00, 0x00, 0xfd, 0x1a, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','D','e','l','e','t','e','W','o','r','d',0, /* 8179, 0xfd1a, KEY_3270_DeleteWord */
0x52, 0x5e, 0x00, 0x00, 0xfd, 0x1b, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','E','x','S','e','l','e','c','t',0, /* 8206, 0xfd1b, KEY_3270_ExSelect */
0x5d, 0xde, 0x00, 0x00, 0xfd, 0x1c, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','C','u','r','s','o','r','S','e','l','e','c','t',0, /* 8237, 0xfd1c, KEY_3270_CursorSelect */
0xcf, 0xec, 0x00, 0x00, 0xfd, 0x1d, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','P','r','i','n','t','S','c','r','e','e','n',0, /* 8267, 0xfd1d, KEY_3270_PrintScreen */
0xca, 0x2c, 0x00, 0x00, 0xfd, 0x1e, 0x00, 0x00, 0x00, 'K','E','Y','_','3','2','7','0','_','E','n','t','e','r',0, /* 8291, 0xfd1e, KEY_3270_Enter */
0x9c, 0xff, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 'K','E','Y','_','s','p','a','c','e',0, /* 8310, 0x20, U+0020, KEY_space, SPACE */
0x39, 0x57, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x21, 'K','E','Y','_','e','x','c','l','a','m',0, /* 8330, 0x21, U+0021, KEY_exclam, EXCLAMATION MARK */
0xed, 0xc8, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x22, 'K','E','Y','_','q','u','o','t','e','d','b','l',0, /* 8352, 0x22, U+0022, KEY_quotedbl, QUOTATION MARK */
0xae, 0x38, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x23, 'K','E','Y','_','n','u','m','b','e','r','s','i','g','n',0, /* 8376, 0x23, U+0023, KEY_numbersign, NUMBER SIGN */
0x38, 0xf4, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 'K','E','Y','_','d','o','l','l','a','r',0, /* 8396, 0x24, U+0024, KEY_dollar, DOLLAR SIGN */
0x74, 0x3c, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x25, 'K','E','Y','_','p','e','r','c','e','n','t',0, /* 8417, 0x25, U+0025, KEY_percent, PERCENT SIGN */
0xc7, 0x9c, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x26, 'K','E','Y','_','a','m','p','e','r','s','a','n','d',0, /* 8440, 0x26, U+0026, KEY_ampersand, AMPERSAND */
0x96, 0x4d, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x27, 'K','E','Y','_','a','p','o','s','t','r','o','p','h','e',0, /* 8464, 0x27, U+0027, KEY_apostrophe, APOSTROPHE */
0xb9, 0x68, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 'K','E','Y','_','q','u','o','t','e','r','i','g','h','t',0, /* 8488, 0x27, KEY_quoteright, deprecated */
0xd0, 0xb4, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x28, 'K','E','Y','_','p','a','r','e','n','l','e','f','t',0, /* 8511, 0x28, U+0028, KEY_parenleft, LEFT PARENTHESIS */
0xa2, 0x48, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x29, 'K','E','Y','_','p','a','r','e','n','r','i','g','h','t',0, /* 8535, 0x29, U+0029, KEY_parenright, RIGHT PARENTHESIS */
0xe5, 0x95, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x2a, 'K','E','Y','_','a','s','t','e','r','i','s','k',0, /* 8557, 0x2a, U+002a, KEY_asterisk, ASTERISK */
0x4e, 0x5d, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x2b, 'K','E','Y','_','p','l','u','s',0, /* 8575, 0x2b, U+002b, KEY_plus, PLUS SIGN */
0x9c, 0x37, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c, 'K','E','Y','_','c','o','m','m','a',0, /* 8594, 0x2c, U+002c, KEY_comma, COMMA */
0x9c, 0xcd, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x2d, 'K','E','Y','_','m','i','n','u','s',0, /* 8613, 0x2d, U+002d, KEY_minus, HYPHEN-MINUS */
0x3a, 0x06, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x2e, 'K','E','Y','_','p','e','r','i','o','d',0, /* 8633, 0x2e, U+002e, KEY_period, FULL STOP */
0x9d, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x2f, 'K','E','Y','_','s','l','a','s','h',0, /* 8652, 0x2f, U+002f, KEY_slash, SOLIDUS */
0x09, 0x2a, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 'K','E','Y','_','0',0, /* 8667, 0x30, U+0030, KEY_0, DIGIT ZERO */
0x09, 0x2b, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x31, 'K','E','Y','_','1',0, /* 8682, 0x31, U+0031, KEY_1, DIGIT ONE */
0x09, 0x2c, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x32, 'K','E','Y','_','2',0, /* 8697, 0x32, U+0032, KEY_2, DIGIT TWO */
0x09, 0x2d, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x33, 'K','E','Y','_','3',0, /* 8712, 0x33, U+0033, KEY_3, DIGIT THREE */
0x09, 0x2e, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x34, 'K','E','Y','_','4',0, /* 8727, 0x34, U+0034, KEY_4, DIGIT FOUR */
0x09, 0x2f, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x35, 'K','E','Y','_','5',0, /* 8742, 0x35, U+0035, KEY_5, DIGIT FIVE */
0x09, 0x30, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x36, 'K','E','Y','_','6',0, /* 8757, 0x36, U+0036, KEY_6, DIGIT SIX */
0x09, 0x31, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x37, 'K','E','Y','_','7',0, /* 8772, 0x37, U+0037, KEY_7, DIGIT SEVEN */
0x09, 0x32, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 'K','E','Y','_','8',0, /* 8787, 0x38, U+0038, KEY_8, DIGIT EIGHT */
0x09, 0x33, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x39, 'K','E','Y','_','9',0, /* 8802, 0x39, U+0039, KEY_9, DIGIT NINE */
0x9c, 0x44, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x3a, 'K','E','Y','_','c','o','l','o','n',0, /* 8821, 0x3a, U+003a, KEY_colon, COLON */
0xd4, 0x84, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x3b, 'K','E','Y','_','s','e','m','i','c','o','l','o','n',0, /* 8844, 0x3b, U+003b, KEY_semicolon, SEMICOLON */
0x4e, 0x1d, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 'K','E','Y','_','l','e','s','s',0, /* 8862, 0x3c, U+003c, KEY_less, LESS-THAN SIGN */
0x9c, 0x7a, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x3d, 'K','E','Y','_','e','q','u','a','l',0, /* 8881, 0x3d, U+003d, KEY_equal, EQUALS SIGN */
0x72, 0xe4, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x3e, 'K','E','Y','_','g','r','e','a','t','e','r',0, /* 8902, 0x3e, U+003e, KEY_greater, GREATER-THAN SIGN */
0xed, 0x20, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 'K','E','Y','_','q','u','e','s','t','i','o','n',0, /* 8924, 0x3f, U+003f, KEY_question, QUESTION MARK */
0x13, 0x2a, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x40, 'K','E','Y','_','a','t',0, /* 8940, 0x40, U+0040, KEY_at, COMMERCIAL AT */
0x09, 0x3b, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x41, 'K','E','Y','_','A',0, /* 8955, 0x41, U+0041, KEY_A, LATIN CAPITAL LETTER A */
0x09, 0x3c, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x42, 'K','E','Y','_','B',0, /* 8970, 0x42, U+0042, KEY_B, LATIN CAPITAL LETTER B */
0x09, 0x3d, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x43, 'K','E','Y','_','C',0, /* 8985, 0x43, U+0043, KEY_C, LATIN CAPITAL LETTER C */
0x09, 0x3e, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x44, 'K','E','Y','_','D',0, /* 9000, 0x44, U+0044, KEY_D, LATIN CAPITAL LETTER D */
0x09, 0x3f, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x45, 'K','E','Y','_','E',0, /* 9015, 0x45, U+0045, KEY_E, LATIN CAPITAL LETTER E */
0x09, 0x40, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x46, 'K','E','Y','_','F',0, /* 9030, 0x46, U+0046, KEY_F, LATIN CAPITAL LETTER F */
0x09, 0x41, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x47, 'K','E','Y','_','G',0, /* 9045, 0x47, U+0047, KEY_G, LATIN CAPITAL LETTER G */
0x09, 0x42, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x48, 'K','E','Y','_','H',0, /* 9060, 0x48, U+0048, KEY_H, LATIN CAPITAL LETTER H */
0x09, 0x43, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x49, 'K','E','Y','_','I',0, /* 9075, 0x49, U+0049, KEY_I, LATIN CAPITAL LETTER I */
0x09, 0x44, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x4a, 'K','E','Y','_','J',0, /* 9090, 0x4a, U+004a, KEY_J, LATIN CAPITAL LETTER J */
0x09, 0x45, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x4b, 'K','E','Y','_','K',0, /* 9105, 0x4b, U+004b, KEY_K, LATIN CAPITAL LETTER K */
0x09, 0x46, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x4c, 'K','E','Y','_','L',0, /* 9120, 0x4c, U+004c, KEY_L, LATIN CAPITAL LETTER L */
0x09, 0x47, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x4d, 'K','E','Y','_','M',0, /* 9135, 0x4d, U+004d, KEY_M, LATIN CAPITAL LETTER M */
0x09, 0x48, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x4e, 'K','E','Y','_','N',0, /* 9150, 0x4e, U+004e, KEY_N, LATIN CAPITAL LETTER N */
0x09, 0x49, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x4f, 'K','E','Y','_','O',0, /* 9165, 0x4f, U+004f, KEY_O, LATIN CAPITAL LETTER O */
0x09, 0x4a, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x50, 'K','E','Y','_','P',0, /* 9180, 0x50, U+0050, KEY_P, LATIN CAPITAL LETTER P */
0x09, 0x4b, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x51, 'K','E','Y','_','Q',0, /* 9195, 0x51, U+0051, KEY_Q, LATIN CAPITAL LETTER Q */
0x09, 0x4c, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x52, 'K','E','Y','_','R',0, /* 9210, 0x52, U+0052, KEY_R, LATIN CAPITAL LETTER R */
0x09, 0x4d, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x53, 'K','E','Y','_','S',0, /* 9225, 0x53, U+0053, KEY_S, LATIN CAPITAL LETTER S */
0x09, 0x4e, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x54, 'K','E','Y','_','T',0, /* 9240, 0x54, U+0054, KEY_T, LATIN CAPITAL LETTER T */
0x09, 0x4f, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x55, 'K','E','Y','_','U',0, /* 9255, 0x55, U+0055, KEY_U, LATIN CAPITAL LETTER U */
0x09, 0x50, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x56, 'K','E','Y','_','V',0, /* 9270, 0x56, U+0056, KEY_V, LATIN CAPITAL LETTER V */
0x09, 0x51, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x57, 'K','E','Y','_','W',0, /* 9285, 0x57, U+0057, KEY_W, LATIN CAPITAL LETTER W */
0x09, 0x52, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 'K','E','Y','_','X',0, /* 9300, 0x58, U+0058, KEY_X, LATIN CAPITAL LETTER X */
0x09, 0x53, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x59, 'K','E','Y','_','Y',0, /* 9315, 0x59, U+0059, KEY_Y, LATIN CAPITAL LETTER Y */
0x09, 0x54, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x5a, 'K','E','Y','_','Z',0, /* 9330, 0x5a, U+005a, KEY_Z, LATIN CAPITAL LETTER Z */
0x1b, 0x54, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x5b, 'K','E','Y','_','b','r','a','c','k','e','t','l','e','f','t',0, /* 9355, 0x5b, U+005b, KEY_bracketleft, LEFT SQUARE BRACKET */
0xc0, 0x02, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x5c, 'K','E','Y','_','b','a','c','k','s','l','a','s','h',0, /* 9378, 0x5c, U+005c, KEY_backslash, REVERSE SOLIDUS */
0x37, 0x88, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x5d, 'K','E','Y','_','b','r','a','c','k','e','t','r','i','g','h','t',0, /* 9404, 0x5d, U+005d, KEY_bracketright, RIGHT SQUARE BRACKET */
0x1d, 0x23, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x5e, 'K','E','Y','_','a','s','c','i','i','c','i','r','c','u','m',0, /* 9429, 0x5e, U+005e, KEY_asciicircum, CIRCUMFLEX ACCENT */
0xb2, 0xcd, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x5f, 'K','E','Y','_','u','n','d','e','r','s','c','o','r','e',0, /* 9453, 0x5f, U+005f, KEY_underscore, LOW LINE */
0x9c, 0x75, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 'K','E','Y','_','g','r','a','v','e',0, /* 9472, 0x60, U+0060, KEY_grave, GRAVE ACCENT */
0xdc, 0x44, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','q','u','o','t','e','l','e','f','t',0, /* 9495, 0x60, KEY_quoteleft, deprecated */
0x09, 0x5b, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x61, 'K','E','Y','_','a',0, /* 9510, 0x61, U+0061, KEY_a, LATIN SMALL LETTER A */
0x09, 0x5c, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x62, 'K','E','Y','_','b',0, /* 9525, 0x62, U+0062, KEY_b, LATIN SMALL LETTER B */
0x09, 0x5d, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x63, 'K','E','Y','_','c',0, /* 9540, 0x63, U+0063, KEY_c, LATIN SMALL LETTER C */
0x09, 0x5e, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x64, 'K','E','Y','_','d',0, /* 9555, 0x64, U+0064, KEY_d, LATIN SMALL LETTER D */
0x09, 0x5f, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x65, 'K','E','Y','_','e',0, /* 9570, 0x65, U+0065, KEY_e, LATIN SMALL LETTER E */
0x09, 0x60, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x66, 'K','E','Y','_','f',0, /* 9585, 0x66, U+0066, KEY_f, LATIN SMALL LETTER F */
0x09, 0x61, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x67, 'K','E','Y','_','g',0, /* 9600, 0x67, U+0067, KEY_g, LATIN SMALL LETTER G */
0x09, 0x62, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x68, 'K','E','Y','_','h',0, /* 9615, 0x68, U+0068, KEY_h, LATIN SMALL LETTER H */
0x09, 0x63, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x69, 'K','E','Y','_','i',0, /* 9630, 0x69, U+0069, KEY_i, LATIN SMALL LETTER I */
0x09, 0x64, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x6a, 'K','E','Y','_','j',0, /* 9645, 0x6a, U+006a, KEY_j, LATIN SMALL LETTER J */
0x09, 0x65, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x6b, 'K','E','Y','_','k',0, /* 9660, 0x6b, U+006b, KEY_k, LATIN SMALL LETTER K */
0x09, 0x66, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x6c, 'K','E','Y','_','l',0, /* 9675, 0x6c, U+006c, KEY_l, LATIN SMALL LETTER L */
0x09, 0x67, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x6d, 'K','E','Y','_','m',0, /* 9690, 0x6d, U+006d, KEY_m, LATIN SMALL LETTER M */
0x09, 0x68, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x6e, 'K','E','Y','_','n',0, /* 9705, 0x6e, U+006e, KEY_n, LATIN SMALL LETTER N */
0x09, 0x69, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x6f, 'K','E','Y','_','o',0, /* 9720, 0x6f, U+006f, KEY_o, LATIN SMALL LETTER O */
0x09, 0x6a, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 'K','E','Y','_','p',0, /* 9735, 0x70, U+0070, KEY_p, LATIN SMALL LETTER P */
0x09, 0x6b, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x71, 'K','E','Y','_','q',0, /* 9750, 0x71, U+0071, KEY_q, LATIN SMALL LETTER Q */
0x09, 0x6c, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x72, 'K','E','Y','_','r',0, /* 9765, 0x72, U+0072, KEY_r, LATIN SMALL LETTER R */
0x09, 0x6d, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x73, 'K','E','Y','_','s',0, /* 9780, 0x73, U+0073, KEY_s, LATIN SMALL LETTER S */
0x09, 0x6e, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x74, 'K','E','Y','_','t',0, /* 9795, 0x74, U+0074, KEY_t, LATIN SMALL LETTER T */
0x09, 0x6f, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x75, 'K','E','Y','_','u',0, /* 9810, 0x75, U+0075, KEY_u, LATIN SMALL LETTER U */
0x09, 0x70, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x76, 'K','E','Y','_','v',0, /* 9825, 0x76, U+0076, KEY_v, LATIN SMALL LETTER V */
0x09, 0x71, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x77, 'K','E','Y','_','w',0, /* 9840, 0x77, U+0077, KEY_w, LATIN SMALL LETTER W */
0x09, 0x72, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x78, 'K','E','Y','_','x',0, /* 9855, 0x78, U+0078, KEY_x, LATIN SMALL LETTER X */
0x09, 0x73, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x79, 'K','E','Y','_','y',0, /* 9870, 0x79, U+0079, KEY_y, LATIN SMALL LETTER Y */
0x09, 0x74, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x7a, 'K','E','Y','_','z',0, /* 9885, 0x7a, U+007a, KEY_z, LATIN SMALL LETTER Z */
0xc6, 0x24, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x7b, 'K','E','Y','_','b','r','a','c','e','l','e','f','t',0, /* 9908, 0x7b, U+007b, KEY_braceleft, LEFT CURLY BRACKET */
0x26, 0xa4, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 'K','E','Y','_','b','a','r',0, /* 9925, 0x7c, U+007c, KEY_bar, VERTICAL LINE */
0x8d, 0x28, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x7d, 'K','E','Y','_','b','r','a','c','e','r','i','g','h','t',0, /* 9949, 0x7d, U+007d, KEY_braceright, RIGHT CURLY BRACKET */
0x8f, 0x45, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7e, 'K','E','Y','_','a','s','c','i','i','t','i','l','d','e',0, /* 9973, 0x7e, U+007e, KEY_asciitilde, TILDE */
0x97, 0x7f, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0xa0, 'K','E','Y','_','n','o','b','r','e','a','k','s','p','a','c','e',0, /* 9999, 0xa0, U+00a0, KEY_nobreakspace, NO-BREAK SPACE */
0x9b, 0xa8, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0xa1, 'K','E','Y','_','e','x','c','l','a','m','d','o','w','n',0, /* 10023, 0xa1, U+00a1, KEY_exclamdown, INVERTED EXCLAMATION MARK */
0x4d, 0xcc, 0x00, 0x00, 0x00, 0xa2, 0x00, 0x00, 0xa2, 'K','E','Y','_','c','e','n','t',0, /* 10041, 0xa2, U+00a2, KEY_cent, CENT SIGN */
0xed, 0x87, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0xa3, 'K','E','Y','_','s','t','e','r','l','i','n','g',0, /* 10063, 0xa3, U+00a3, KEY_sterling, POUND SIGN */
0xe7, 0x3f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0xa4, 'K','E','Y','_','c','u','r','r','e','n','c','y',0, /* 10085, 0xa4, U+00a4, KEY_currency, CURRENCY SIGN */
0x27, 0x04, 0x00, 0x00, 0x00, 0xa5, 0x00, 0x00, 0xa5, 'K','E','Y','_','y','e','n',0, /* 10102, 0xa5, U+00a5, KEY_yen, YEN SIGN */
0xca, 0x9c, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0xa6, 'K','E','Y','_','b','r','o','k','e','n','b','a','r',0, /* 10125, 0xa6, U+00a6, KEY_brokenbar, BROKEN BAR */
0x74, 0xa0, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0xa7, 'K','E','Y','_','s','e','c','t','i','o','n',0, /* 10146, 0xa7, U+00a7, KEY_section, SECTION SIGN */
0xc4, 0xb9, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0xa8, 'K','E','Y','_','d','i','a','e','r','e','s','i','s',0, /* 10169, 0xa8, U+00a8, KEY_diaeresis, DIAERESIS */
0xcc, 0xe8, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0xa9, 'K','E','Y','_','c','o','p','y','r','i','g','h','t',0, /* 10192, 0xa9, U+00a9, KEY_copyright, COPYRIGHT SIGN */
0x52, 0xc5, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0xaa, 'K','E','Y','_','o','r','d','f','e','m','i','n','i','n','e',0, /* 10217, 0xaa, U+00aa, KEY_ordfeminine, FEMININE ORDINAL INDICATOR */
0x09, 0x14, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0xab, 'K','E','Y','_','g','u','i','l','l','e','m','o','t','l','e','f','t',0, /* 10244, 0xab, U+00ab, KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
0x75, 0x98, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0xac, 'K','E','Y','_','n','o','t','s','i','g','n',0, /* 10265, 0xac, U+00ac, KEY_notsign, NOT SIGN */
0x3a, 0x28, 0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0xad, 'K','E','Y','_','h','y','p','h','e','n',0, /* 10285, 0xad, U+00ad, KEY_hyphen, SOFT HYPHEN */
0xa6, 0x7e, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, 0xae, 'K','E','Y','_','r','e','g','i','s','t','e','r','e','d',0, /* 10309, 0xae, U+00ae, KEY_registered, REGISTERED SIGN */
0x39, 0x1c, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0xaf, 'K','E','Y','_','m','a','c','r','o','n',0, /* 10329, 0xaf, U+00af, KEY_macron, MACRON */
0x38, 0x3f, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0xb0, 'K','E','Y','_','d','e','g','r','e','e',0, /* 10349, 0xb0, U+00b0, KEY_degree, DEGREE SIGN */
0xd8, 0xcd, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0xb1, 'K','E','Y','_','p','l','u','s','m','i','n','u','s',0, /* 10372, 0xb1, U+00b1, KEY_plusminus, PLUS-MINUS SIGN */
0x86, 0x94, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0xb2, 'K','E','Y','_','t','w','o','s','u','p','e','r','i','o','r',0, /* 10397, 0xb2, U+00b2, KEY_twosuperior, SUPERSCRIPT TWO */
0x88, 0x94, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0xb3, 'K','E','Y','_','t','h','r','e','e','s','u','p','e','r','i','o','r',0, /* 10424, 0xb3, U+00b3, KEY_threesuperior, SUPERSCRIPT THREE */
0x9b, 0xe9, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0xb4, 'K','E','Y','_','a','c','u','t','e',0, /* 10443, 0xb4, U+00b4, KEY_acute, ACUTE ACCENT */
0x13, 0x43, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0xb5, 'K','E','Y','_','m','u',0, /* 10459, 0xb5, U+00b5, KEY_mu, MICRO SIGN */
0xcf, 0xec, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0xb6, 'K','E','Y','_','p','a','r','a','g','r','a','p','h',0, /* 10482, 0xb6, U+00b6, KEY_paragraph, PILCROW SIGN */
0x6b, 0xde, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0xb7, 'K','E','Y','_','p','e','r','i','o','d','c','e','n','t','e','r','e','d',0, /* 10510, 0xb7, U+00b7, KEY_periodcentered, MIDDLE DOT */
0x70, 0x51, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0xb8, 'K','E','Y','_','c','e','d','i','l','l','a',0, /* 10531, 0xb8, U+00b8, KEY_cedilla, CEDILLA */
0x56, 0x94, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0xb9, 'K','E','Y','_','o','n','e','s','u','p','e','r','i','o','r',0, /* 10556, 0xb9, U+00b9, KEY_onesuperior, SUPERSCRIPT ONE */
0xce, 0x35, 0x00, 0x00, 0x00, 0xba, 0x00, 0x00, 0xba, 'K','E','Y','_','m','a','s','c','u','l','i','n','e',0, /* 10579, 0xba, U+00ba, KEY_masculine, MASCULINE ORDINAL INDICATOR */
0x13, 0x08, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0xbb, 'K','E','Y','_','g','u','i','l','l','e','m','o','t','r','i','g','h','t',0, /* 10607, 0xbb, U+00bb, KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
0xaa, 0x0c, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0xbc, 'K','E','Y','_','o','n','e','q','u','a','r','t','e','r',0, /* 10631, 0xbc, U+00bc, KEY_onequarter, VULGAR FRACTION ONE QUARTER */
0x74, 0x52, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0xbd, 'K','E','Y','_','o','n','e','h','a','l','f',0, /* 10652, 0xbd, U+00bd, KEY_onehalf, VULGAR FRACTION ONE HALF */
0x86, 0x8b, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0xbe, 'K','E','Y','_','t','h','r','e','e','q','u','a','r','t','e','r','s',0, /* 10679, 0xbe, U+00be, KEY_threequarters, VULGAR FRACTION THREE QUARTERS */
0xd8, 0x38, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0xbf, 'K','E','Y','_','q','u','e','s','t','i','o','n','d','o','w','n',0, /* 10705, 0xbf, U+00bf, KEY_questiondown, INVERTED QUESTION MARK */
0x34, 0x35, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0xc0, 'K','E','Y','_','A','g','r','a','v','e',0, /* 10725, 0xc0, U+00c0, KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */
0x33, 0xa9, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1, 'K','E','Y','_','A','a','c','u','t','e',0, /* 10745, 0xc1, U+00c1, KEY_Aacute, LATIN CAPITAL LETTER A WITH ACUTE */
0x88, 0x52, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0xc2, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x',0, /* 10770, 0xc2, U+00c2, KEY_Acircumflex, LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
0x34, 0xc5, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0xc3, 'K','E','Y','_','A','t','i','l','d','e',0, /* 10790, 0xc3, U+00c3, KEY_Atilde, LATIN CAPITAL LETTER A WITH TILDE */
0x40, 0xb9, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0xc4, 'K','E','Y','_','A','d','i','a','e','r','e','s','i','s',0, /* 10814, 0xc4, U+00c4, KEY_Adiaeresis, LATIN CAPITAL LETTER A WITH DIAERESIS */
0x9a, 0x27, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0xc5, 'K','E','Y','_','A','r','i','n','g',0, /* 10833, 0xc5, U+00c5, KEY_Aring, LATIN CAPITAL LETTER A WITH RING ABOVE */
0x12, 0xbb, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0xc6, 'K','E','Y','_','A','E',0, /* 10849, 0xc6, U+00c6, KEY_AE, LATIN CAPITAL LETTER AE */
0xd0, 0x51, 0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0xc7, 'K','E','Y','_','C','c','e','d','i','l','l','a',0, /* 10871, 0xc7, U+00c7, KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */
0x34, 0xb5, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0xc8, 'K','E','Y','_','E','g','r','a','v','e',0, /* 10891, 0xc8, U+00c8, KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */
0x34, 0x29, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0xc9, 'K','E','Y','_','E','a','c','u','t','e',0, /* 10911, 0xc9, U+00c9, KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */
0x98, 0x52, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0xca, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x',0, /* 10936, 0xca, U+00ca, KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
0x48, 0xb9, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0xcb, 'K','E','Y','_','E','d','i','a','e','r','e','s','i','s',0, /* 10960, 0xcb, U+00cb, KEY_Ediaeresis, LATIN CAPITAL LETTER E WITH DIAERESIS */
0x35, 0x35, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0xcc, 'K','E','Y','_','I','g','r','a','v','e',0, /* 10980, 0xcc, U+00cc, KEY_Igrave, LATIN CAPITAL LETTER I WITH GRAVE */
0x34, 0xa9, 0x00, 0x00, 0x00, 0xcd, 0x00, 0x00, 0xcd, 'K','E','Y','_','I','a','c','u','t','e',0, /* 11000, 0xcd, U+00cd, KEY_Iacute, LATIN CAPITAL LETTER I WITH ACUTE */
0xa8, 0x52, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0xce, 'K','E','Y','_','I','c','i','r','c','u','m','f','l','e','x',0, /* 11025, 0xce, U+00ce, KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
0x50, 0xb9, 0x00, 0x00, 0x00, 0xcf, 0x00, 0x00, 0xcf, 'K','E','Y','_','I','d','i','a','e','r','e','s','i','s',0, /* 11049, 0xcf, U+00cf, KEY_Idiaeresis, LATIN CAPITAL LETTER I WITH DIAERESIS */
0x25, 0xec, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0xd0, 'K','E','Y','_','E','T','H',0, /* 11066, 0xd0, U+00d0, KEY_ETH, LATIN CAPITAL LETTER ETH */
0x26, 0x4c, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 'K','E','Y','_','E','t','h',0, /* 11083, 0xd0, KEY_Eth, deprecated */
0x36, 0x65, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0xd1, 'K','E','Y','_','N','t','i','l','d','e',0, /* 11103, 0xd1, U+00d1, KEY_Ntilde, LATIN CAPITAL LETTER N WITH TILDE */
0x35, 0xf5, 0x00, 0x00, 0x00, 0xd2, 0x00, 0x00, 0xd2, 'K','E','Y','_','O','g','r','a','v','e',0, /* 11123, 0xd2, U+00d2, KEY_Ograve, LATIN CAPITAL LETTER O WITH GRAVE */
0x35, 0x69, 0x00, 0x00, 0x00, 0xd3, 0x00, 0x00, 0xd3, 'K','E','Y','_','O','a','c','u','t','e',0, /* 11143, 0xd3, U+00d3, KEY_Oacute, LATIN CAPITAL LETTER O WITH ACUTE */
0xc0, 0x52, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0xd4, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x',0, /* 11168, 0xd4, U+00d4, KEY_Ocircumflex, LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
0x36, 0x85, 0x00, 0x00, 0x00, 0xd5, 0x00, 0x00, 0xd5, 'K','E','Y','_','O','t','i','l','d','e',0, /* 11188, 0xd5, U+00d5, KEY_Otilde, LATIN CAPITAL LETTER O WITH TILDE */
0x5c, 0xb9, 0x00, 0x00, 0x00, 0xd6, 0x00, 0x00, 0xd6, 'K','E','Y','_','O','d','i','a','e','r','e','s','i','s',0, /* 11212, 0xd6, U+00d6, KEY_Odiaeresis, LATIN CAPITAL LETTER O WITH DIAERESIS */
0xeb, 0xd9, 0x00, 0x00, 0x00, 0xd7, 0x00, 0x00, 0xd7, 'K','E','Y','_','m','u','l','t','i','p','l','y',0, /* 11234, 0xd7, U+00d7, KEY_multiply, MULTIPLICATION SIGN */
0x36, 0x82, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0xd8, 'K','E','Y','_','O','s','l','a','s','h',0, /* 11254, 0xd8, U+00d8, KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */
0xd9, 0x9b, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0xd8, 'K','E','Y','_','O','o','b','l','i','q','u','e',0, /* 11276, 0xd8, U+00d8, KEY_Ooblique, LATIN CAPITAL LETTER O WITH STROKE */
0x36, 0xb5, 0x00, 0x00, 0x00, 0xd9, 0x00, 0x00, 0xd9, 'K','E','Y','_','U','g','r','a','v','e',0, /* 11296, 0xd9, U+00d9, KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */
0x36, 0x29, 0x00, 0x00, 0x00, 0xda, 0x00, 0x00, 0xda, 'K','E','Y','_','U','a','c','u','t','e',0, /* 11316, 0xda, U+00da, KEY_Uacute, LATIN CAPITAL LETTER U WITH ACUTE */
0xd8, 0x52, 0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0xdb, 'K','E','Y','_','U','c','i','r','c','u','m','f','l','e','x',0, /* 11341, 0xdb, U+00db, KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
0x68, 0xb9, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0xdc, 'K','E','Y','_','U','d','i','a','e','r','e','s','i','s',0, /* 11365, 0xdc, U+00dc, KEY_Udiaeresis, LATIN CAPITAL LETTER U WITH DIAERESIS */
0x36, 0xa9, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0xdd, 'K','E','Y','_','Y','a','c','u','t','e',0, /* 11385, 0xdd, U+00dd, KEY_Yacute, LATIN CAPITAL LETTER Y WITH ACUTE */
0x99, 0x4e, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0xde, 'K','E','Y','_','T','H','O','R','N',0, /* 11404, 0xde, U+00de, KEY_THORN, LATIN CAPITAL LETTER THORN */
0x9b, 0x2e, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','T','h','o','r','n',0, /* 11423, 0xde, KEY_Thorn, deprecated */
0x3a, 0xe8, 0x00, 0x00, 0x00, 0xdf, 0x00, 0x00, 0xdf, 'K','E','Y','_','s','s','h','a','r','p',0, /* 11443, 0xdf, U+00df, KEY_ssharp, LATIN SMALL LETTER SHARP S */
0x38, 0x35, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xe0, 'K','E','Y','_','a','g','r','a','v','e',0, /* 11463, 0xe0, U+00e0, KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */
0x37, 0xa9, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0xe1, 'K','E','Y','_','a','a','c','u','t','e',0, /* 11483, 0xe1, U+00e1, KEY_aacute, LATIN SMALL LETTER A WITH ACUTE */
0x08, 0x52, 0x00, 0x00, 0x00, 0xe2, 0x00, 0x00, 0xe2, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x',0, /* 11508, 0xe2, U+00e2, KEY_acircumflex, LATIN SMALL LETTER A WITH CIRCUMFLEX */
0x38, 0xc5, 0x00, 0x00, 0x00, 0xe3, 0x00, 0x00, 0xe3, 'K','E','Y','_','a','t','i','l','d','e',0, /* 11528, 0xe3, U+00e3, KEY_atilde, LATIN SMALL LETTER A WITH TILDE */
0x80, 0xb9, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0xe4, 'K','E','Y','_','a','d','i','a','e','r','e','s','i','s',0, /* 11552, 0xe4, U+00e4, KEY_adiaeresis, LATIN SMALL LETTER A WITH DIAERESIS */
0x9c, 0x27, 0x00, 0x00, 0x00, 0xe5, 0x00, 0x00, 0xe5, 'K','E','Y','_','a','r','i','n','g',0, /* 11571, 0xe5, U+00e5, KEY_aring, LATIN SMALL LETTER A WITH RING ABOVE */
0x13, 0x1b, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0xe6, 'K','E','Y','_','a','e',0, /* 11587, 0xe6, U+00e6, KEY_ae, LATIN SMALL LETTER AE */
0xe0, 0x51, 0x00, 0x00, 0x00, 0xe7, 0x00, 0x00, 0xe7, 'K','E','Y','_','c','c','e','d','i','l','l','a',0, /* 11609, 0xe7, U+00e7, KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */
0x38, 0xb5, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0xe8, 'K','E','Y','_','e','g','r','a','v','e',0, /* 11629, 0xe8, U+00e8, KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */
0x38, 0x29, 0x00, 0x00, 0x00, 0xe9, 0x00, 0x00, 0xe9, 'K','E','Y','_','e','a','c','u','t','e',0, /* 11649, 0xe9, U+00e9, KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */
0x18, 0x52, 0x00, 0x00, 0x00, 0xea, 0x00, 0x00, 0xea, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x',0, /* 11674, 0xea, U+00ea, KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */
0x88, 0xb9, 0x00, 0x00, 0x00, 0xeb, 0x00, 0x00, 0xeb, 'K','E','Y','_','e','d','i','a','e','r','e','s','i','s',0, /* 11698, 0xeb, U+00eb, KEY_ediaeresis, LATIN SMALL LETTER E WITH DIAERESIS */
0x39, 0x35, 0x00, 0x00, 0x00, 0xec, 0x00, 0x00, 0xec, 'K','E','Y','_','i','g','r','a','v','e',0, /* 11718, 0xec, U+00ec, KEY_igrave, LATIN SMALL LETTER I WITH GRAVE */
0x38, 0xa9, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0xed, 'K','E','Y','_','i','a','c','u','t','e',0, /* 11738, 0xed, U+00ed, KEY_iacute, LATIN SMALL LETTER I WITH ACUTE */
0x28, 0x52, 0x00, 0x00, 0x00, 0xee, 0x00, 0x00, 0xee, 'K','E','Y','_','i','c','i','r','c','u','m','f','l','e','x',0, /* 11763, 0xee, U+00ee, KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */
0x90, 0xb9, 0x00, 0x00, 0x00, 0xef, 0x00, 0x00, 0xef, 'K','E','Y','_','i','d','i','a','e','r','e','s','i','s',0, /* 11787, 0xef, U+00ef, KEY_idiaeresis, LATIN SMALL LETTER I WITH DIAERESIS */
0x26, 0xcc, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 'K','E','Y','_','e','t','h',0, /* 11804, 0xf0, U+00f0, KEY_eth, LATIN SMALL LETTER ETH */
0x3a, 0x65, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0xf1, 'K','E','Y','_','n','t','i','l','d','e',0, /* 11824, 0xf1, U+00f1, KEY_ntilde, LATIN SMALL LETTER N WITH TILDE */
0x39, 0xf5, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0xf2, 'K','E','Y','_','o','g','r','a','v','e',0, /* 11844, 0xf2, U+00f2, KEY_ograve, LATIN SMALL LETTER O WITH GRAVE */
0x39, 0x69, 0x00, 0x00, 0x00, 0xf3, 0x00, 0x00, 0xf3, 'K','E','Y','_','o','a','c','u','t','e',0, /* 11864, 0xf3, U+00f3, KEY_oacute, LATIN SMALL LETTER O WITH ACUTE */
0x40, 0x52, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0xf4, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x',0, /* 11889, 0xf4, U+00f4, KEY_ocircumflex, LATIN SMALL LETTER O WITH CIRCUMFLEX */
0x3a, 0x85, 0x00, 0x00, 0x00, 0xf5, 0x00, 0x00, 0xf5, 'K','E','Y','_','o','t','i','l','d','e',0, /* 11909, 0xf5, U+00f5, KEY_otilde, LATIN SMALL LETTER O WITH TILDE */
0x9c, 0xb9, 0x00, 0x00, 0x00, 0xf6, 0x00, 0x00, 0xf6, 'K','E','Y','_','o','d','i','a','e','r','e','s','i','s',0, /* 11933, 0xf6, U+00f6, KEY_odiaeresis, LATIN SMALL LETTER O WITH DIAERESIS */
0xe5, 0x18, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0xf7, 'K','E','Y','_','d','i','v','i','s','i','o','n',0, /* 11955, 0xf7, U+00f7, KEY_division, DIVISION SIGN */
0x3a, 0x82, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf8, 'K','E','Y','_','o','s','l','a','s','h',0, /* 11975, 0xf8, U+00f8, KEY_oslash, LATIN SMALL LETTER O WITH STROKE */
0xe9, 0x9b, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf8, 'K','E','Y','_','o','o','b','l','i','q','u','e',0, /* 11997, 0xf8, U+00f8, KEY_ooblique, LATIN SMALL LETTER O WITH STROKE */
0x3a, 0xb5, 0x00, 0x00, 0x00, 0xf9, 0x00, 0x00, 0xf9, 'K','E','Y','_','u','g','r','a','v','e',0, /* 12017, 0xf9, U+00f9, KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */
0x3a, 0x29, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x00, 0xfa, 'K','E','Y','_','u','a','c','u','t','e',0, /* 12037, 0xfa, U+00fa, KEY_uacute, LATIN SMALL LETTER U WITH ACUTE */
0x58, 0x52, 0x00, 0x00, 0x00, 0xfb, 0x00, 0x00, 0xfb, 'K','E','Y','_','u','c','i','r','c','u','m','f','l','e','x',0, /* 12062, 0xfb, U+00fb, KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */
0xa8, 0xb9, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xfc, 'K','E','Y','_','u','d','i','a','e','r','e','s','i','s',0, /* 12086, 0xfc, U+00fc, KEY_udiaeresis, LATIN SMALL LETTER U WITH DIAERESIS */
0x3a, 0xa9, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x00, 0xfd, 'K','E','Y','_','y','a','c','u','t','e',0, /* 12106, 0xfd, U+00fd, KEY_yacute, LATIN SMALL LETTER Y WITH ACUTE */
0x9d, 0x2e, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0xfe, 'K','E','Y','_','t','h','o','r','n',0, /* 12125, 0xfe, U+00fe, KEY_thorn, LATIN SMALL LETTER THORN */
0xb0, 0xb9, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 'K','E','Y','_','y','d','i','a','e','r','e','s','i','s',0, /* 12149, 0xff, U+00ff, KEY_ydiaeresis, LATIN SMALL LETTER Y WITH DIAERESIS */
0x69, 0x75, 0x00, 0x00, 0x01, 0xa1, 0x00, 0x01, 0x04, 'K','E','Y','_','A','o','g','o','n','e','k',0, /* 12170, 0x1a1, U+0104, KEY_Aogonek, LATIN CAPITAL LETTER A WITH OGONEK */
0x9c, 0x35, 0x00, 0x00, 0x01, 0xa2, 0x00, 0x02, 0xd8, 'K','E','Y','_','b','r','e','v','e',0, /* 12189, 0x1a2, U+02d8, KEY_breve, BREVE */
0x6d, 0xa7, 0x00, 0x00, 0x01, 0xa3, 0x00, 0x01, 0x41, 'K','E','Y','_','L','s','t','r','o','k','e',0, /* 12210, 0x1a3, U+0141, KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */
0x35, 0x0c, 0x00, 0x00, 0x01, 0xa5, 0x00, 0x01, 0x3d, 'K','E','Y','_','L','c','a','r','o','n',0, /* 12230, 0x1a5, U+013d, KEY_Lcaron, LATIN CAPITAL LETTER L WITH CARON */
0x35, 0xe9, 0x00, 0x00, 0x01, 0xa6, 0x00, 0x01, 0x5a, 'K','E','Y','_','S','a','c','u','t','e',0, /* 12250, 0x1a6, U+015a, KEY_Sacute, LATIN CAPITAL LETTER S WITH ACUTE */
0x35, 0xec, 0x00, 0x00, 0x01, 0xa9, 0x00, 0x01, 0x60, 'K','E','Y','_','S','c','a','r','o','n',0, /* 12270, 0x1a9, U+0160, KEY_Scaron, LATIN CAPITAL LETTER S WITH CARON */
0xd8, 0x51, 0x00, 0x00, 0x01, 0xaa, 0x00, 0x01, 0x5e, 'K','E','Y','_','S','c','e','d','i','l','l','a',0, /* 12292, 0x1aa, U+015e, KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */
0x36, 0x0c, 0x00, 0x00, 0x01, 0xab, 0x00, 0x01, 0x64, 'K','E','Y','_','T','c','a','r','o','n',0, /* 12312, 0x1ab, U+0164, KEY_Tcaron, LATIN CAPITAL LETTER T WITH CARON */
0x36, 0xc9, 0x00, 0x00, 0x01, 0xac, 0x00, 0x01, 0x79, 'K','E','Y','_','Z','a','c','u','t','e',0, /* 12332, 0x1ac, U+0179, KEY_Zacute, LATIN CAPITAL LETTER Z WITH ACUTE */
0x36, 0xcc, 0x00, 0x00, 0x01, 0xae, 0x00, 0x01, 0x7d, 'K','E','Y','_','Z','c','a','r','o','n',0, /* 12352, 0x1ae, U+017d, KEY_Zcaron, LATIN CAPITAL LETTER Z WITH CARON */
0xb8, 0x4a, 0x00, 0x00, 0x01, 0xaf, 0x00, 0x01, 0x7b, 'K','E','Y','_','Z','a','b','o','v','e','d','o','t',0, /* 12375, 0x1af, U+017b, KEY_Zabovedot, LATIN CAPITAL LETTER Z WITH DOT ABOVE */
0x71, 0x75, 0x00, 0x00, 0x01, 0xb1, 0x00, 0x01, 0x05, 'K','E','Y','_','a','o','g','o','n','e','k',0, /* 12396, 0x1b1, U+0105, KEY_aogonek, LATIN SMALL LETTER A WITH OGONEK */
0x39, 0xf5, 0x00, 0x00, 0x01, 0xb2, 0x00, 0x02, 0xdb, 'K','E','Y','_','o','g','o','n','e','k',0, /* 12416, 0x1b2, U+02db, KEY_ogonek, OGONEK */
0x75, 0xa7, 0x00, 0x00, 0x01, 0xb3, 0x00, 0x01, 0x42, 'K','E','Y','_','l','s','t','r','o','k','e',0, /* 12437, 0x1b3, U+0142, KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */
0x39, 0x0c, 0x00, 0x00, 0x01, 0xb5, 0x00, 0x01, 0x3e, 'K','E','Y','_','l','c','a','r','o','n',0, /* 12457, 0x1b5, U+013e, KEY_lcaron, LATIN SMALL LETTER L WITH CARON */
0x39, 0xe9, 0x00, 0x00, 0x01, 0xb6, 0x00, 0x01, 0x5b, 'K','E','Y','_','s','a','c','u','t','e',0, /* 12477, 0x1b6, U+015b, KEY_sacute, LATIN SMALL LETTER S WITH ACUTE */
0x9b, 0xec, 0x00, 0x00, 0x01, 0xb7, 0x00, 0x02, 0xc7, 'K','E','Y','_','c','a','r','o','n',0, /* 12496, 0x1b7, U+02c7, KEY_caron, CARON */
0x39, 0xec, 0x00, 0x00, 0x01, 0xb9, 0x00, 0x01, 0x61, 'K','E','Y','_','s','c','a','r','o','n',0, /* 12516, 0x1b9, U+0161, KEY_scaron, LATIN SMALL LETTER S WITH CARON */
0xe8, 0x51, 0x00, 0x00, 0x01, 0xba, 0x00, 0x01, 0x5f, 'K','E','Y','_','s','c','e','d','i','l','l','a',0, /* 12538, 0x1ba, U+015f, KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */
0x3a, 0x0c, 0x00, 0x00, 0x01, 0xbb, 0x00, 0x01, 0x65, 'K','E','Y','_','t','c','a','r','o','n',0, /* 12558, 0x1bb, U+0165, KEY_tcaron, LATIN SMALL LETTER T WITH CARON */
0x3a, 0xc9, 0x00, 0x00, 0x01, 0xbc, 0x00, 0x01, 0x7a, 'K','E','Y','_','z','a','c','u','t','e',0, /* 12578, 0x1bc, U+017a, KEY_zacute, LATIN SMALL LETTER Z WITH ACUTE */
0x2f, 0xe9, 0x00, 0x00, 0x01, 0xbd, 0x00, 0x02, 0xdd, 'K','E','Y','_','d','o','u','b','l','e','a','c','u','t','e',0, /* 12603, 0x1bd, U+02dd, KEY_doubleacute, DOUBLE ACUTE ACCENT */
0x3a, 0xcc, 0x00, 0x00, 0x01, 0xbe, 0x00, 0x01, 0x7e, 'K','E','Y','_','z','c','a','r','o','n',0, /* 12623, 0x1be, U+017e, KEY_zcaron, LATIN SMALL LETTER Z WITH CARON */
0xd8, 0x4a, 0x00, 0x00, 0x01, 0xbf, 0x00, 0x01, 0x7c, 'K','E','Y','_','z','a','b','o','v','e','d','o','t',0, /* 12646, 0x1bf, U+017c, KEY_zabovedot, LATIN SMALL LETTER Z WITH DOT ABOVE */
0x35, 0xc9, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x01, 0x54, 'K','E','Y','_','R','a','c','u','t','e',0, /* 12666, 0x1c0, U+0154, KEY_Racute, LATIN CAPITAL LETTER R WITH ACUTE */
0x33, 0xf5, 0x00, 0x00, 0x01, 0xc3, 0x00, 0x01, 0x02, 'K','E','Y','_','A','b','r','e','v','e',0, /* 12686, 0x1c3, U+0102, KEY_Abreve, LATIN CAPITAL LETTER A WITH BREVE */
0x35, 0x09, 0x00, 0x00, 0x01, 0xc5, 0x00, 0x01, 0x39, 'K','E','Y','_','L','a','c','u','t','e',0, /* 12706, 0x1c5, U+0139, KEY_Lacute, LATIN CAPITAL LETTER L WITH ACUTE */
0x33, 0xe9, 0x00, 0x00, 0x01, 0xc6, 0x00, 0x01, 0x06, 'K','E','Y','_','C','a','c','u','t','e',0, /* 12726, 0x1c6, U+0106, KEY_Cacute, LATIN CAPITAL LETTER C WITH ACUTE */
0x33, 0xec, 0x00, 0x00, 0x01, 0xc8, 0x00, 0x01, 0x0c, 'K','E','Y','_','C','c','a','r','o','n',0, /* 12746, 0x1c8, U+010c, KEY_Ccaron, LATIN CAPITAL LETTER C WITH CARON */
0x6a, 0x75, 0x00, 0x00, 0x01, 0xca, 0x00, 0x01, 0x18, 'K','E','Y','_','E','o','g','o','n','e','k',0, /* 12767, 0x1ca, U+0118, KEY_Eogonek, LATIN CAPITAL LETTER E WITH OGONEK */
0x34, 0x2c, 0x00, 0x00, 0x01, 0xcc, 0x00, 0x01, 0x1a, 'K','E','Y','_','E','c','a','r','o','n',0, /* 12787, 0x1cc, U+011a, KEY_Ecaron, LATIN CAPITAL LETTER E WITH CARON */
0x34, 0x0c, 0x00, 0x00, 0x01, 0xcf, 0x00, 0x01, 0x0e, 'K','E','Y','_','D','c','a','r','o','n',0, /* 12807, 0x1cf, U+010e, KEY_Dcaron, LATIN CAPITAL LETTER D WITH CARON */
0x6b, 0xa7, 0x00, 0x00, 0x01, 0xd0, 0x00, 0x01, 0x10, 'K','E','Y','_','D','s','t','r','o','k','e',0, /* 12828, 0x1d0, U+0110, KEY_Dstroke, LATIN CAPITAL LETTER D WITH STROKE */
0x35, 0x49, 0x00, 0x00, 0x01, 0xd1, 0x00, 0x01, 0x43, 'K','E','Y','_','N','a','c','u','t','e',0, /* 12848, 0x1d1, U+0143, KEY_Nacute, LATIN CAPITAL LETTER N WITH ACUTE */
0x35, 0x4c, 0x00, 0x00, 0x01, 0xd2, 0x00, 0x01, 0x47, 'K','E','Y','_','N','c','a','r','o','n',0, /* 12868, 0x1d2, U+0147, KEY_Ncaron, LATIN CAPITAL LETTER N WITH CARON */
0x8f, 0xe9, 0x00, 0x00, 0x01, 0xd5, 0x00, 0x01, 0x50, 'K','E','Y','_','O','d','o','u','b','l','e','a','c','u','t','e',0, /* 12894, 0x1d5, U+0150, KEY_Odoubleacute, LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
0x35, 0xcc, 0x00, 0x00, 0x01, 0xd8, 0x00, 0x01, 0x58, 'K','E','Y','_','R','c','a','r','o','n',0, /* 12914, 0x1d8, U+0158, KEY_Rcaron, LATIN CAPITAL LETTER R WITH CARON */
0x9b, 0x67, 0x00, 0x00, 0x01, 0xd9, 0x00, 0x01, 0x6e, 'K','E','Y','_','U','r','i','n','g',0, /* 12933, 0x1d9, U+016e, KEY_Uring, LATIN CAPITAL LETTER U WITH RING ABOVE */
0xbf, 0xe9, 0x00, 0x00, 0x01, 0xdb, 0x00, 0x01, 0x70, 'K','E','Y','_','U','d','o','u','b','l','e','a','c','u','t','e',0, /* 12959, 0x1db, U+0170, KEY_Udoubleacute, LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
0xd8, 0xd1, 0x00, 0x00, 0x01, 0xde, 0x00, 0x01, 0x62, 'K','E','Y','_','T','c','e','d','i','l','l','a',0, /* 12981, 0x1de, U+0162, KEY_Tcedilla, LATIN CAPITAL LETTER T WITH CEDILLA */
0x39, 0xc9, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x01, 0x55, 'K','E','Y','_','r','a','c','u','t','e',0, /* 13001, 0x1e0, U+0155, KEY_racute, LATIN SMALL LETTER R WITH ACUTE */
0x37, 0xf5, 0x00, 0x00, 0x01, 0xe3, 0x00, 0x01, 0x03, 'K','E','Y','_','a','b','r','e','v','e',0, /* 13021, 0x1e3, U+0103, KEY_abreve, LATIN SMALL LETTER A WITH BREVE */
0x39, 0x09, 0x00, 0x00, 0x01, 0xe5, 0x00, 0x01, 0x3a, 'K','E','Y','_','l','a','c','u','t','e',0, /* 13041, 0x1e5, U+013a, KEY_lacute, LATIN SMALL LETTER L WITH ACUTE */
0x37, 0xe9, 0x00, 0x00, 0x01, 0xe6, 0x00, 0x01, 0x07, 'K','E','Y','_','c','a','c','u','t','e',0, /* 13061, 0x1e6, U+0107, KEY_cacute, LATIN SMALL LETTER C WITH ACUTE */
0x37, 0xec, 0x00, 0x00, 0x01, 0xe8, 0x00, 0x01, 0x0d, 'K','E','Y','_','c','c','a','r','o','n',0, /* 13081, 0x1e8, U+010d, KEY_ccaron, LATIN SMALL LETTER C WITH CARON */
0x72, 0x75, 0x00, 0x00, 0x01, 0xea, 0x00, 0x01, 0x19, 'K','E','Y','_','e','o','g','o','n','e','k',0, /* 13102, 0x1ea, U+0119, KEY_eogonek, LATIN SMALL LETTER E WITH OGONEK */
0x38, 0x2c, 0x00, 0x00, 0x01, 0xec, 0x00, 0x01, 0x1b, 'K','E','Y','_','e','c','a','r','o','n',0, /* 13122, 0x1ec, U+011b, KEY_ecaron, LATIN SMALL LETTER E WITH CARON */
0x38, 0x0c, 0x00, 0x00, 0x01, 0xef, 0x00, 0x01, 0x0f, 'K','E','Y','_','d','c','a','r','o','n',0, /* 13142, 0x1ef, U+010f, KEY_dcaron, LATIN SMALL LETTER D WITH CARON */
0x73, 0xa7, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x01, 0x11, 'K','E','Y','_','d','s','t','r','o','k','e',0, /* 13163, 0x1f0, U+0111, KEY_dstroke, LATIN SMALL LETTER D WITH STROKE */
0x39, 0x49, 0x00, 0x00, 0x01, 0xf1, 0x00, 0x01, 0x44, 'K','E','Y','_','n','a','c','u','t','e',0, /* 13183, 0x1f1, U+0144, KEY_nacute, LATIN SMALL LETTER N WITH ACUTE */
0x39, 0x4c, 0x00, 0x00, 0x01, 0xf2, 0x00, 0x01, 0x48, 'K','E','Y','_','n','c','a','r','o','n',0, /* 13203, 0x1f2, U+0148, KEY_ncaron, LATIN SMALL LETTER N WITH CARON */
0x8f, 0xe9, 0x00, 0x00, 0x01, 0xf5, 0x00, 0x01, 0x51, 'K','E','Y','_','o','d','o','u','b','l','e','a','c','u','t','e',0, /* 13229, 0x1f5, U+0151, KEY_odoubleacute, LATIN SMALL LETTER O WITH DOUBLE ACUTE */
0x39, 0xcc, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x01, 0x59, 'K','E','Y','_','r','c','a','r','o','n',0, /* 13249, 0x1f8, U+0159, KEY_rcaron, LATIN SMALL LETTER R WITH CARON */
0x9d, 0x67, 0x00, 0x00, 0x01, 0xf9, 0x00, 0x01, 0x6f, 'K','E','Y','_','u','r','i','n','g',0, /* 13268, 0x1f9, U+016f, KEY_uring, LATIN SMALL LETTER U WITH RING ABOVE */
0xbf, 0xe9, 0x00, 0x00, 0x01, 0xfb, 0x00, 0x01, 0x71, 'K','E','Y','_','u','d','o','u','b','l','e','a','c','u','t','e',0, /* 13294, 0x1fb, U+0171, KEY_udoubleacute, LATIN SMALL LETTER U WITH DOUBLE ACUTE */
0xe8, 0xd1, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x01, 0x63, 'K','E','Y','_','t','c','e','d','i','l','l','a',0, /* 13316, 0x1fe, U+0163, KEY_tcedilla, LATIN SMALL LETTER T WITH CEDILLA */
0xe1, 0x4a, 0x00, 0x00, 0x01, 0xff, 0x00, 0x02, 0xd9, 'K','E','Y','_','a','b','o','v','e','d','o','t',0, /* 13338, 0x1ff, U+02d9, KEY_abovedot, DOT ABOVE */
0x6c, 0xa7, 0x00, 0x00, 0x02, 0xa1, 0x00, 0x01, 0x26, 'K','E','Y','_','H','s','t','r','o','k','e',0, /* 13359, 0x2a1, U+0126, KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */
0xa4, 0x52, 0x00, 0x00, 0x02, 0xa6, 0x00, 0x01, 0x24, 'K','E','Y','_','H','c','i','r','c','u','m','f','l','e','x',0, /* 13384, 0x2a6, U+0124, KEY_Hcircumflex, LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
0xa7, 0x4a, 0x00, 0x00, 0x02, 0xa9, 0x00, 0x01, 0x30, 'K','E','Y','_','I','a','b','o','v','e','d','o','t',0, /* 13407, 0x2a9, U+0130, KEY_Iabovedot, LATIN CAPITAL LETTER I WITH DOT ABOVE */
0x34, 0xb5, 0x00, 0x00, 0x02, 0xab, 0x00, 0x01, 0x1e, 'K','E','Y','_','G','b','r','e','v','e',0, /* 13427, 0x2ab, U+011e, KEY_Gbreve, LATIN CAPITAL LETTER G WITH BREVE */
0xac, 0x52, 0x00, 0x00, 0x02, 0xac, 0x00, 0x01, 0x34, 'K','E','Y','_','J','c','i','r','c','u','m','f','l','e','x',0, /* 13452, 0x2ac, U+0134, KEY_Jcircumflex, LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
0x74, 0xa7, 0x00, 0x00, 0x02, 0xb1, 0x00, 0x01, 0x27, 'K','E','Y','_','h','s','t','r','o','k','e',0, /* 13473, 0x2b1, U+0127, KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */
0x24, 0x52, 0x00, 0x00, 0x02, 0xb6, 0x00, 0x01, 0x25, 'K','E','Y','_','h','c','i','r','c','u','m','f','l','e','x',0, /* 13498, 0x2b6, U+0125, KEY_hcircumflex, LATIN SMALL LETTER H WITH CIRCUMFLEX */
0xe5, 0xed, 0x00, 0x00, 0x02, 0xb9, 0x00, 0x01, 0x31, 'K','E','Y','_','i','d','o','t','l','e','s','s',0, /* 13520, 0x2b9, U+0131, KEY_idotless, LATIN SMALL LETTER DOTLESS I */
0x38, 0xb5, 0x00, 0x00, 0x02, 0xbb, 0x00, 0x01, 0x1f, 'K','E','Y','_','g','b','r','e','v','e',0, /* 13540, 0x2bb, U+011f, KEY_gbreve, LATIN SMALL LETTER G WITH BREVE */
0x2c, 0x52, 0x00, 0x00, 0x02, 0xbc, 0x00, 0x01, 0x35, 'K','E','Y','_','j','c','i','r','c','u','m','f','l','e','x',0, /* 13565, 0x2bc, U+0135, KEY_jcircumflex, LATIN SMALL LETTER J WITH CIRCUMFLEX */
0xa1, 0x4a, 0x00, 0x00, 0x02, 0xc5, 0x00, 0x01, 0x0a, 'K','E','Y','_','C','a','b','o','v','e','d','o','t',0, /* 13588, 0x2c5, U+010a, KEY_Cabovedot, LATIN CAPITAL LETTER C WITH DOT ABOVE */
0x90, 0x52, 0x00, 0x00, 0x02, 0xc6, 0x00, 0x01, 0x08, 'K','E','Y','_','C','c','i','r','c','u','m','f','l','e','x',0, /* 13613, 0x2c6, U+0108, KEY_Ccircumflex, LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
0xa5, 0x4a, 0x00, 0x00, 0x02, 0xd5, 0x00, 0x01, 0x20, 'K','E','Y','_','G','a','b','o','v','e','d','o','t',0, /* 13636, 0x2d5, U+0120, KEY_Gabovedot, LATIN CAPITAL LETTER G WITH DOT ABOVE */
0xa0, 0x52, 0x00, 0x00, 0x02, 0xd8, 0x00, 0x01, 0x1c, 'K','E','Y','_','G','c','i','r','c','u','m','f','l','e','x',0, /* 13661, 0x2d8, U+011c, KEY_Gcircumflex, LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
0x36, 0x75, 0x00, 0x00, 0x02, 0xdd, 0x00, 0x01, 0x6c, 'K','E','Y','_','U','b','r','e','v','e',0, /* 13681, 0x2dd, U+016c, KEY_Ubreve, LATIN CAPITAL LETTER U WITH BREVE */
0xd0, 0x52, 0x00, 0x00, 0x02, 0xde, 0x00, 0x01, 0x5c, 'K','E','Y','_','S','c','i','r','c','u','m','f','l','e','x',0, /* 13706, 0x2de, U+015c, KEY_Scircumflex, LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
0xc1, 0x4a, 0x00, 0x00, 0x02, 0xe5, 0x00, 0x01, 0x0b, 'K','E','Y','_','c','a','b','o','v','e','d','o','t',0, /* 13729, 0x2e5, U+010b, KEY_cabovedot, LATIN SMALL LETTER C WITH DOT ABOVE */
0x10, 0x52, 0x00, 0x00, 0x02, 0xe6, 0x00, 0x01, 0x09, 'K','E','Y','_','c','c','i','r','c','u','m','f','l','e','x',0, /* 13754, 0x2e6, U+0109, KEY_ccircumflex, LATIN SMALL LETTER C WITH CIRCUMFLEX */
0xc5, 0x4a, 0x00, 0x00, 0x02, 0xf5, 0x00, 0x01, 0x21, 'K','E','Y','_','g','a','b','o','v','e','d','o','t',0, /* 13777, 0x2f5, U+0121, KEY_gabovedot, LATIN SMALL LETTER G WITH DOT ABOVE */
0x20, 0x52, 0x00, 0x00, 0x02, 0xf8, 0x00, 0x01, 0x1d, 'K','E','Y','_','g','c','i','r','c','u','m','f','l','e','x',0, /* 13802, 0x2f8, U+011d, KEY_gcircumflex, LATIN SMALL LETTER G WITH CIRCUMFLEX */
0x3a, 0x75, 0x00, 0x00, 0x02, 0xfd, 0x00, 0x01, 0x6d, 'K','E','Y','_','u','b','r','e','v','e',0, /* 13822, 0x2fd, U+016d, KEY_ubreve, LATIN SMALL LETTER U WITH BREVE */
0x50, 0x52, 0x00, 0x00, 0x02, 0xfe, 0x00, 0x01, 0x5d, 'K','E','Y','_','s','c','i','r','c','u','m','f','l','e','x',0, /* 13847, 0x2fe, U+015d, KEY_scircumflex, LATIN SMALL LETTER S WITH CIRCUMFLEX */
0x26, 0xd9, 0x00, 0x00, 0x03, 0xa2, 0x00, 0x01, 0x38, 'K','E','Y','_','k','r','a',0, /* 13864, 0x3a2, U+0138, KEY_kra, LATIN SMALL LETTER KRA */
0x9c, 0x59, 0x00, 0x00, 0x03, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','p','p','a',0, /* 13883, 0x3a2, KEY_kappa, deprecated */
0xd7, 0xd1, 0x00, 0x00, 0x03, 0xa3, 0x00, 0x01, 0x56, 'K','E','Y','_','R','c','e','d','i','l','l','a',0, /* 13905, 0x3a3, U+0156, KEY_Rcedilla, LATIN CAPITAL LETTER R WITH CEDILLA */
0x35, 0xc5, 0x00, 0x00, 0x03, 0xa5, 0x00, 0x01, 0x28, 'K','E','Y','_','I','t','i','l','d','e',0, /* 13925, 0x3a5, U+0128, KEY_Itilde, LATIN CAPITAL LETTER I WITH TILDE */
0xd4, 0xd1, 0x00, 0x00, 0x03, 0xa6, 0x00, 0x01, 0x3b, 'K','E','Y','_','L','c','e','d','i','l','l','a',0, /* 13947, 0x3a6, U+013b, KEY_Lcedilla, LATIN CAPITAL LETTER L WITH CEDILLA */
0x69, 0x9c, 0x00, 0x00, 0x03, 0xaa, 0x00, 0x01, 0x12, 'K','E','Y','_','E','m','a','c','r','o','n',0, /* 13968, 0x3aa, U+0112, KEY_Emacron, LATIN CAPITAL LETTER E WITH MACRON */
0xd2, 0x51, 0x00, 0x00, 0x03, 0xab, 0x00, 0x01, 0x22, 'K','E','Y','_','G','c','e','d','i','l','l','a',0, /* 13990, 0x3ab, U+0122, KEY_Gcedilla, LATIN CAPITAL LETTER G WITH CEDILLA */
0x37, 0x22, 0x00, 0x00, 0x03, 0xac, 0x00, 0x01, 0x66, 'K','E','Y','_','T','s','l','a','s','h',0, /* 14010, 0x3ac, U+0166, KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */
0xe7, 0xd1, 0x00, 0x00, 0x03, 0xb3, 0x00, 0x01, 0x57, 'K','E','Y','_','r','c','e','d','i','l','l','a',0, /* 14032, 0x3b3, U+0157, KEY_rcedilla, LATIN SMALL LETTER R WITH CEDILLA */
0x39, 0xc5, 0x00, 0x00, 0x03, 0xb5, 0x00, 0x01, 0x29, 'K','E','Y','_','i','t','i','l','d','e',0, /* 14052, 0x3b5, U+0129, KEY_itilde, LATIN SMALL LETTER I WITH TILDE */
0xe4, 0xd1, 0x00, 0x00, 0x03, 0xb6, 0x00, 0x01, 0x3c, 'K','E','Y','_','l','c','e','d','i','l','l','a',0, /* 14074, 0x3b6, U+013c, KEY_lcedilla, LATIN SMALL LETTER L WITH CEDILLA */
0x71, 0x9c, 0x00, 0x00, 0x03, 0xba, 0x00, 0x01, 0x13, 'K','E','Y','_','e','m','a','c','r','o','n',0, /* 14095, 0x3ba, U+0113, KEY_emacron, LATIN SMALL LETTER E WITH MACRON */
0xe2, 0x51, 0x00, 0x00, 0x03, 0xbb, 0x00, 0x01, 0x23, 'K','E','Y','_','g','c','e','d','i','l','l','a',0, /* 14117, 0x3bb, U+0123, KEY_gcedilla, LATIN SMALL LETTER G WITH CEDILLA */
0x3b, 0x22, 0x00, 0x00, 0x03, 0xbc, 0x00, 0x01, 0x67, 'K','E','Y','_','t','s','l','a','s','h',0, /* 14137, 0x3bc, U+0167, KEY_tslash, LATIN SMALL LETTER T WITH STROKE */
0x25, 0xdf, 0x00, 0x00, 0x03, 0xbd, 0x00, 0x01, 0x4a, 'K','E','Y','_','E','N','G',0, /* 14154, 0x3bd, U+014a, KEY_ENG, LATIN CAPITAL LETTER ENG */
0x26, 0xbf, 0x00, 0x00, 0x03, 0xbf, 0x00, 0x01, 0x4b, 'K','E','Y','_','e','n','g',0, /* 14171, 0x3bf, U+014b, KEY_eng, LATIN SMALL LETTER ENG */
0x68, 0x9c, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x01, 0x00, 'K','E','Y','_','A','m','a','c','r','o','n',0, /* 14192, 0x3c0, U+0100, KEY_Amacron, LATIN CAPITAL LETTER A WITH MACRON */
0x6b, 0x75, 0x00, 0x00, 0x03, 0xc7, 0x00, 0x01, 0x2e, 'K','E','Y','_','I','o','g','o','n','e','k',0, /* 14213, 0x3c7, U+012e, KEY_Iogonek, LATIN CAPITAL LETTER I WITH OGONEK */
0xa3, 0x4a, 0x00, 0x00, 0x03, 0xcc, 0x00, 0x01, 0x16, 'K','E','Y','_','E','a','b','o','v','e','d','o','t',0, /* 14236, 0x3cc, U+0116, KEY_Eabovedot, LATIN CAPITAL LETTER E WITH DOT ABOVE */
0x6a, 0x9c, 0x00, 0x00, 0x03, 0xcf, 0x00, 0x01, 0x2a, 'K','E','Y','_','I','m','a','c','r','o','n',0, /* 14257, 0x3cf, U+012a, KEY_Imacron, LATIN CAPITAL LETTER I WITH MACRON */
0xd5, 0xd1, 0x00, 0x00, 0x03, 0xd1, 0x00, 0x01, 0x45, 'K','E','Y','_','N','c','e','d','i','l','l','a',0, /* 14279, 0x3d1, U+0145, KEY_Ncedilla, LATIN CAPITAL LETTER N WITH CEDILLA */
0x6c, 0x1c, 0x00, 0x00, 0x03, 0xd2, 0x00, 0x01, 0x4c, 'K','E','Y','_','O','m','a','c','r','o','n',0, /* 14300, 0x3d2, U+014c, KEY_Omacron, LATIN CAPITAL LETTER O WITH MACRON */
0xd4, 0x51, 0x00, 0x00, 0x03, 0xd3, 0x00, 0x01, 0x36, 'K','E','Y','_','K','c','e','d','i','l','l','a',0, /* 14322, 0x3d3, U+0136, KEY_Kcedilla, LATIN CAPITAL LETTER K WITH CEDILLA */
0x6e, 0x75, 0x00, 0x00, 0x03, 0xd9, 0x00, 0x01, 0x72, 'K','E','Y','_','U','o','g','o','n','e','k',0, /* 14343, 0x3d9, U+0172, KEY_Uogonek, LATIN CAPITAL LETTER U WITH OGONEK */
0x37, 0x45, 0x00, 0x00, 0x03, 0xdd, 0x00, 0x01, 0x68, 'K','E','Y','_','U','t','i','l','d','e',0, /* 14363, 0x3dd, U+0168, KEY_Utilde, LATIN CAPITAL LETTER U WITH TILDE */
0x6d, 0x9c, 0x00, 0x00, 0x03, 0xde, 0x00, 0x01, 0x6a, 'K','E','Y','_','U','m','a','c','r','o','n',0, /* 14384, 0x3de, U+016a, KEY_Umacron, LATIN CAPITAL LETTER U WITH MACRON */
0x70, 0x9c, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x01, 0x01, 'K','E','Y','_','a','m','a','c','r','o','n',0, /* 14405, 0x3e0, U+0101, KEY_amacron, LATIN SMALL LETTER A WITH MACRON */
0x73, 0x75, 0x00, 0x00, 0x03, 0xe7, 0x00, 0x01, 0x2f, 'K','E','Y','_','i','o','g','o','n','e','k',0, /* 14426, 0x3e7, U+012f, KEY_iogonek, LATIN SMALL LETTER I WITH OGONEK */
0xc3, 0x4a, 0x00, 0x00, 0x03, 0xec, 0x00, 0x01, 0x17, 'K','E','Y','_','e','a','b','o','v','e','d','o','t',0, /* 14449, 0x3ec, U+0117, KEY_eabovedot, LATIN SMALL LETTER E WITH DOT ABOVE */
0x72, 0x9c, 0x00, 0x00, 0x03, 0xef, 0x00, 0x01, 0x2b, 'K','E','Y','_','i','m','a','c','r','o','n',0, /* 14470, 0x3ef, U+012b, KEY_imacron, LATIN SMALL LETTER I WITH MACRON */
0xe5, 0xd1, 0x00, 0x00, 0x03, 0xf1, 0x00, 0x01, 0x46, 'K','E','Y','_','n','c','e','d','i','l','l','a',0, /* 14492, 0x3f1, U+0146, KEY_ncedilla, LATIN SMALL LETTER N WITH CEDILLA */
0x74, 0x1c, 0x00, 0x00, 0x03, 0xf2, 0x00, 0x01, 0x4d, 'K','E','Y','_','o','m','a','c','r','o','n',0, /* 14513, 0x3f2, U+014d, KEY_omacron, LATIN SMALL LETTER O WITH MACRON */
0xe4, 0x51, 0x00, 0x00, 0x03, 0xf3, 0x00, 0x01, 0x37, 'K','E','Y','_','k','c','e','d','i','l','l','a',0, /* 14535, 0x3f3, U+0137, KEY_kcedilla, LATIN SMALL LETTER K WITH CEDILLA */
0x76, 0x75, 0x00, 0x00, 0x03, 0xf9, 0x00, 0x01, 0x73, 'K','E','Y','_','u','o','g','o','n','e','k',0, /* 14556, 0x3f9, U+0173, KEY_uogonek, LATIN SMALL LETTER U WITH OGONEK */
0x3b, 0x45, 0x00, 0x00, 0x03, 0xfd, 0x00, 0x01, 0x69, 'K','E','Y','_','u','t','i','l','d','e',0, /* 14576, 0x3fd, U+0169, KEY_utilde, LATIN SMALL LETTER U WITH TILDE */
0x75, 0x9c, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x01, 0x6b, 'K','E','Y','_','u','m','a','c','r','o','n',0, /* 14597, 0x3fe, U+016b, KEY_umacron, LATIN SMALL LETTER U WITH MACRON */
0xe0, 0x52, 0x01, 0x00, 0x01, 0x74, 0x00, 0x01, 0x74, 'K','E','Y','_','W','c','i','r','c','u','m','f','l','e','x',0, /* 14622, 0x1000174, U+0174, KEY_Wcircumflex, LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
0x60, 0x52, 0x01, 0x00, 0x01, 0x75, 0x00, 0x01, 0x75, 'K','E','Y','_','w','c','i','r','c','u','m','f','l','e','x',0, /* 14647, 0x1000175, U+0175, KEY_wcircumflex, LATIN SMALL LETTER W WITH CIRCUMFLEX */
0xe8, 0x52, 0x01, 0x00, 0x01, 0x76, 0x00, 0x01, 0x76, 'K','E','Y','_','Y','c','i','r','c','u','m','f','l','e','x',0, /* 14672, 0x1000176, U+0176, KEY_Ycircumflex, LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
0x68, 0x52, 0x01, 0x00, 0x01, 0x77, 0x00, 0x01, 0x77, 'K','E','Y','_','y','c','i','r','c','u','m','f','l','e','x',0, /* 14697, 0x1000177, U+0177, KEY_ycircumflex, LATIN SMALL LETTER Y WITH CIRCUMFLEX */
0xa0, 0x4a, 0x01, 0x00, 0x1e, 0x02, 0x00, 0x1e, 0x02, 'K','E','Y','_','B','a','b','o','v','e','d','o','t',0, /* 14720, 0x1001e02, U+1e02, KEY_Babovedot, LATIN CAPITAL LETTER B WITH DOT ABOVE */
0xc0, 0x4a, 0x01, 0x00, 0x1e, 0x03, 0x00, 0x1e, 0x03, 'K','E','Y','_','b','a','b','o','v','e','d','o','t',0, /* 14743, 0x1001e03, U+1e03, KEY_babovedot, LATIN SMALL LETTER B WITH DOT ABOVE */
0xa2, 0x4a, 0x01, 0x00, 0x1e, 0x0a, 0x00, 0x1e, 0x0a, 'K','E','Y','_','D','a','b','o','v','e','d','o','t',0, /* 14766, 0x1001e0a, U+1e0a, KEY_Dabovedot, LATIN CAPITAL LETTER D WITH DOT ABOVE */
0xc2, 0x4a, 0x01, 0x00, 0x1e, 0x0b, 0x00, 0x1e, 0x0b, 'K','E','Y','_','d','a','b','o','v','e','d','o','t',0, /* 14789, 0x1001e0b, U+1e0b, KEY_dabovedot, LATIN SMALL LETTER D WITH DOT ABOVE */
0xa4, 0x4a, 0x01, 0x00, 0x1e, 0x1e, 0x00, 0x1e, 0x1e, 'K','E','Y','_','F','a','b','o','v','e','d','o','t',0, /* 14812, 0x1001e1e, U+1e1e, KEY_Fabovedot, LATIN CAPITAL LETTER F WITH DOT ABOVE */
0xc4, 0x4a, 0x01, 0x00, 0x1e, 0x1f, 0x00, 0x1e, 0x1f, 'K','E','Y','_','f','a','b','o','v','e','d','o','t',0, /* 14835, 0x1001e1f, U+1e1f, KEY_fabovedot, LATIN SMALL LETTER F WITH DOT ABOVE */
0xab, 0x4a, 0x01, 0x00, 0x1e, 0x40, 0x00, 0x1e, 0x40, 'K','E','Y','_','M','a','b','o','v','e','d','o','t',0, /* 14858, 0x1001e40, U+1e40, KEY_Mabovedot, LATIN CAPITAL LETTER M WITH DOT ABOVE */
0xcb, 0x4a, 0x01, 0x00, 0x1e, 0x41, 0x00, 0x1e, 0x41, 'K','E','Y','_','m','a','b','o','v','e','d','o','t',0, /* 14881, 0x1001e41, U+1e41, KEY_mabovedot, LATIN SMALL LETTER M WITH DOT ABOVE */
0xae, 0x4a, 0x01, 0x00, 0x1e, 0x56, 0x00, 0x1e, 0x56, 'K','E','Y','_','P','a','b','o','v','e','d','o','t',0, /* 14904, 0x1001e56, U+1e56, KEY_Pabovedot, LATIN CAPITAL LETTER P WITH DOT ABOVE */
0xce, 0x4a, 0x01, 0x00, 0x1e, 0x57, 0x00, 0x1e, 0x57, 'K','E','Y','_','p','a','b','o','v','e','d','o','t',0, /* 14927, 0x1001e57, U+1e57, KEY_pabovedot, LATIN SMALL LETTER P WITH DOT ABOVE */
0xb1, 0x4a, 0x01, 0x00, 0x1e, 0x60, 0x00, 0x1e, 0x60, 'K','E','Y','_','S','a','b','o','v','e','d','o','t',0, /* 14950, 0x1001e60, U+1e60, KEY_Sabovedot, LATIN CAPITAL LETTER S WITH DOT ABOVE */
0xd1, 0x4a, 0x01, 0x00, 0x1e, 0x61, 0x00, 0x1e, 0x61, 'K','E','Y','_','s','a','b','o','v','e','d','o','t',0, /* 14973, 0x1001e61, U+1e61, KEY_sabovedot, LATIN SMALL LETTER S WITH DOT ABOVE */
0xb2, 0x4a, 0x01, 0x00, 0x1e, 0x6a, 0x00, 0x1e, 0x6a, 'K','E','Y','_','T','a','b','o','v','e','d','o','t',0, /* 14996, 0x1001e6a, U+1e6a, KEY_Tabovedot, LATIN CAPITAL LETTER T WITH DOT ABOVE */
0xd2, 0x4a, 0x01, 0x00, 0x1e, 0x6b, 0x00, 0x1e, 0x6b, 'K','E','Y','_','t','a','b','o','v','e','d','o','t',0, /* 15019, 0x1001e6b, U+1e6b, KEY_tabovedot, LATIN SMALL LETTER T WITH DOT ABOVE */
0x36, 0xf5, 0x01, 0x00, 0x1e, 0x80, 0x00, 0x1e, 0x80, 'K','E','Y','_','W','g','r','a','v','e',0, /* 15039, 0x1001e80, U+1e80, KEY_Wgrave, LATIN CAPITAL LETTER W WITH GRAVE */
0x3a, 0xf5, 0x01, 0x00, 0x1e, 0x81, 0x00, 0x1e, 0x81, 'K','E','Y','_','w','g','r','a','v','e',0, /* 15059, 0x1001e81, U+1e81, KEY_wgrave, LATIN SMALL LETTER W WITH GRAVE */
0x36, 0x69, 0x01, 0x00, 0x1e, 0x82, 0x00, 0x1e, 0x82, 'K','E','Y','_','W','a','c','u','t','e',0, /* 15079, 0x1001e82, U+1e82, KEY_Wacute, LATIN CAPITAL LETTER W WITH ACUTE */
0x3a, 0x69, 0x01, 0x00, 0x1e, 0x83, 0x00, 0x1e, 0x83, 'K','E','Y','_','w','a','c','u','t','e',0, /* 15099, 0x1001e83, U+1e83, KEY_wacute, LATIN SMALL LETTER W WITH ACUTE */
0x6c, 0xb9, 0x01, 0x00, 0x1e, 0x84, 0x00, 0x1e, 0x84, 'K','E','Y','_','W','d','i','a','e','r','e','s','i','s',0, /* 15123, 0x1001e84, U+1e84, KEY_Wdiaeresis, LATIN CAPITAL LETTER W WITH DIAERESIS */
0xac, 0xb9, 0x01, 0x00, 0x1e, 0x85, 0x00, 0x1e, 0x85, 'K','E','Y','_','w','d','i','a','e','r','e','s','i','s',0, /* 15147, 0x1001e85, U+1e85, KEY_wdiaeresis, LATIN SMALL LETTER W WITH DIAERESIS */
0x37, 0x35, 0x01, 0x00, 0x1e, 0xf2, 0x00, 0x1e, 0xf2, 'K','E','Y','_','Y','g','r','a','v','e',0, /* 15167, 0x1001ef2, U+1ef2, KEY_Ygrave, LATIN CAPITAL LETTER Y WITH GRAVE */
0x3b, 0x35, 0x01, 0x00, 0x1e, 0xf3, 0x00, 0x1e, 0xf3, 'K','E','Y','_','y','g','r','a','v','e',0, /* 15187, 0x1001ef3, U+1ef3, KEY_ygrave, LATIN SMALL LETTER Y WITH GRAVE */
0x12, 0xd7, 0x00, 0x00, 0x13, 0xbc, 0x00, 0x01, 0x52, 'K','E','Y','_','O','E',0, /* 15203, 0x13bc, U+0152, KEY_OE, LATIN CAPITAL LIGATURE OE */
0x13, 0x37, 0x00, 0x00, 0x13, 0xbd, 0x00, 0x01, 0x53, 'K','E','Y','_','o','e',0, /* 15219, 0x13bd, U+0153, KEY_oe, LATIN SMALL LIGATURE OE */
0x70, 0xb9, 0x00, 0x00, 0x13, 0xbe, 0x00, 0x01, 0x78, 'K','E','Y','_','Y','d','i','a','e','r','e','s','i','s',0, /* 15243, 0x13be, U+0178, KEY_Ydiaeresis, LATIN CAPITAL LETTER Y WITH DIAERESIS */
0xec, 0x05, 0x00, 0x00, 0x04, 0x7e, 0x00, 0x20, 0x3e, 'K','E','Y','_','o','v','e','r','l','i','n','e',0, /* 15265, 0x47e, U+203e, KEY_overline, OVERLINE */
0x9c, 0x36, 0x00, 0x00, 0x04, 0xa1, 0x00, 0x30, 0x02, 'K','E','Y','_','k','a','n','a','_','f','u','l','l','s','t','o','p',0, /* 15292, 0x4a1, U+3002, KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */
0xa6, 0x52, 0x00, 0x00, 0x04, 0xa2, 0x00, 0x30, 0x0c, 'K','E','Y','_','k','a','n','a','_','o','p','e','n','i','n','g','b','r','a','c','k','e','t',0, /* 15325, 0x4a2, U+300c, KEY_kana_openingbracket, LEFT CORNER BRACKET */
0x4a, 0x52, 0x00, 0x00, 0x04, 0xa3, 0x00, 0x30, 0x0d, 'K','E','Y','_','k','a','n','a','_','c','l','o','s','i','n','g','b','r','a','c','k','e','t',0, /* 15358, 0x4a3, U+300d, KEY_kana_closingbracket, RIGHT CORNER BRACKET */
0x92, 0xb7, 0x00, 0x00, 0x04, 0xa4, 0x00, 0x30, 0x01, 'K','E','Y','_','k','a','n','a','_','c','o','m','m','a',0, /* 15382, 0x4a4, U+3001, KEY_kana_comma, IDEOGRAPHIC COMMA */
0xcc, 0xc5, 0x00, 0x00, 0x04, 0xa5, 0x00, 0x30, 0xfb, 'K','E','Y','_','k','a','n','a','_','c','o','n','j','u','n','c','t','i','v','e',0, /* 15412, 0x4a5, U+30fb, KEY_kana_conjunctive, KATAKANA MIDDLE DOT */
0x35, 0xca, 0x00, 0x00, 0x04, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','m','i','d','d','l','e','d','o','t',0, /* 15440, 0x4a5, KEY_kana_middledot, deprecated */
0x71, 0xc1, 0x00, 0x00, 0x04, 0xa6, 0x00, 0x30, 0xf2, 'K','E','Y','_','k','a','n','a','_','W','O',0, /* 15461, 0x4a6, U+30f2, KEY_kana_WO, KATAKANA LETTER WO */
0x38, 0xc3, 0x00, 0x00, 0x04, 0xa7, 0x00, 0x30, 0xa1, 'K','E','Y','_','k','a','n','a','_','a',0, /* 15481, 0x4a7, U+30a1, KEY_kana_a, KATAKANA LETTER SMALL A */
0x38, 0xcb, 0x00, 0x00, 0x04, 0xa8, 0x00, 0x30, 0xa3, 'K','E','Y','_','k','a','n','a','_','i',0, /* 15501, 0x4a8, U+30a3, KEY_kana_i, KATAKANA LETTER SMALL I */
0x38, 0xd7, 0x00, 0x00, 0x04, 0xa9, 0x00, 0x30, 0xa5, 'K','E','Y','_','k','a','n','a','_','u',0, /* 15521, 0x4a9, U+30a5, KEY_kana_u, KATAKANA LETTER SMALL U */
0x38, 0xc7, 0x00, 0x00, 0x04, 0xaa, 0x00, 0x30, 0xa7, 'K','E','Y','_','k','a','n','a','_','e',0, /* 15541, 0x4aa, U+30a7, KEY_kana_e, KATAKANA LETTER SMALL E */
0x38, 0xd1, 0x00, 0x00, 0x04, 0xab, 0x00, 0x30, 0xa9, 'K','E','Y','_','k','a','n','a','_','o',0, /* 15561, 0x4ab, U+30a9, KEY_kana_o, KATAKANA LETTER SMALL O */
0x72, 0x17, 0x00, 0x00, 0x04, 0xac, 0x00, 0x30, 0xe3, 'K','E','Y','_','k','a','n','a','_','y','a',0, /* 15582, 0x4ac, U+30e3, KEY_kana_ya, KATAKANA LETTER SMALL YA */
0x72, 0x2b, 0x00, 0x00, 0x04, 0xad, 0x00, 0x30, 0xe5, 'K','E','Y','_','k','a','n','a','_','y','u',0, /* 15603, 0x4ad, U+30e5, KEY_kana_yu, KATAKANA LETTER SMALL YU */
0x72, 0x25, 0x00, 0x00, 0x04, 0xae, 0x00, 0x30, 0xe7, 'K','E','Y','_','k','a','n','a','_','y','o',0, /* 15624, 0x4ae, U+30e7, KEY_kana_yo, KATAKANA LETTER SMALL YO */
0xe4, 0xb3, 0x00, 0x00, 0x04, 0xaf, 0x00, 0x30, 0xc3, 'K','E','Y','_','k','a','n','a','_','t','s','u',0, /* 15646, 0x4af, U+30c3, KEY_kana_tsu, KATAKANA LETTER SMALL TU */
0x72, 0x21, 0x00, 0x00, 0x04, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','t','u',0, /* 15667, 0x4af, KEY_kana_tu, deprecated */
0x3a, 0xfc, 0x00, 0x00, 0x04, 0xb0, 0x00, 0x30, 0xfc, 'K','E','Y','_','p','r','o','l','o','n','g','e','d','s','o','u','n','d',0, /* 15695, 0x4b0, U+30fc, KEY_prolongedsound, KATAKANA-HIRAGANA PROLONGED SOUND MARK */
0x38, 0xa3, 0x00, 0x00, 0x04, 0xb1, 0x00, 0x30, 0xa2, 'K','E','Y','_','k','a','n','a','_','A',0, /* 15715, 0x4b1, U+30a2, KEY_kana_A, KATAKANA LETTER A */
0x38, 0xab, 0x00, 0x00, 0x04, 0xb2, 0x00, 0x30, 0xa4, 'K','E','Y','_','k','a','n','a','_','I',0, /* 15735, 0x4b2, U+30a4, KEY_kana_I, KATAKANA LETTER I */
0x38, 0xb7, 0x00, 0x00, 0x04, 0xb3, 0x00, 0x30, 0xa6, 'K','E','Y','_','k','a','n','a','_','U',0, /* 15755, 0x4b3, U+30a6, KEY_kana_U, KATAKANA LETTER U */
0x38, 0xa7, 0x00, 0x00, 0x04, 0xb4, 0x00, 0x30, 0xa8, 'K','E','Y','_','k','a','n','a','_','E',0, /* 15775, 0x4b4, U+30a8, KEY_kana_E, KATAKANA LETTER E */
0x38, 0xb1, 0x00, 0x00, 0x04, 0xb5, 0x00, 0x30, 0xaa, 'K','E','Y','_','k','a','n','a','_','O',0, /* 15795, 0x4b5, U+30aa, KEY_kana_O, KATAKANA LETTER O */
0x71, 0x9b, 0x00, 0x00, 0x04, 0xb6, 0x00, 0x30, 0xab, 'K','E','Y','_','k','a','n','a','_','K','A',0, /* 15816, 0x4b6, U+30ab, KEY_kana_KA, KATAKANA LETTER KA */
0x71, 0xa3, 0x00, 0x00, 0x04, 0xb7, 0x00, 0x30, 0xad, 'K','E','Y','_','k','a','n','a','_','K','I',0, /* 15837, 0x4b7, U+30ad, KEY_kana_KI, KATAKANA LETTER KI */
0x71, 0xaf, 0x00, 0x00, 0x04, 0xb8, 0x00, 0x30, 0xaf, 'K','E','Y','_','k','a','n','a','_','K','U',0, /* 15858, 0x4b8, U+30af, KEY_kana_KU, KATAKANA LETTER KU */
0x71, 0x9f, 0x00, 0x00, 0x04, 0xb9, 0x00, 0x30, 0xb1, 'K','E','Y','_','k','a','n','a','_','K','E',0, /* 15879, 0x4b9, U+30b1, KEY_kana_KE, KATAKANA LETTER KE */
0x71, 0xa9, 0x00, 0x00, 0x04, 0xba, 0x00, 0x30, 0xb3, 'K','E','Y','_','k','a','n','a','_','K','O',0, /* 15900, 0x4ba, U+30b3, KEY_kana_KO, KATAKANA LETTER KO */
0x71, 0xab, 0x00, 0x00, 0x04, 0xbb, 0x00, 0x30, 0xb5, 'K','E','Y','_','k','a','n','a','_','S','A',0, /* 15921, 0x4bb, U+30b5, KEY_kana_SA, KATAKANA LETTER SA */
0xe3, 0xad, 0x00, 0x00, 0x04, 0xbc, 0x00, 0x30, 0xb7, 'K','E','Y','_','k','a','n','a','_','S','H','I',0, /* 15943, 0x4bc, U+30b7, KEY_kana_SHI, KATAKANA LETTER SI */
0x71, 0xbf, 0x00, 0x00, 0x04, 0xbd, 0x00, 0x30, 0xb9, 'K','E','Y','_','k','a','n','a','_','S','U',0, /* 15964, 0x4bd, U+30b9, KEY_kana_SU, KATAKANA LETTER SU */
0x71, 0xaf, 0x00, 0x00, 0x04, 0xbe, 0x00, 0x30, 0xbb, 'K','E','Y','_','k','a','n','a','_','S','E',0, /* 15985, 0x4be, U+30bb, KEY_kana_SE, KATAKANA LETTER SE */
0x71, 0xb9, 0x00, 0x00, 0x04, 0xbf, 0x00, 0x30, 0xbd, 'K','E','Y','_','k','a','n','a','_','S','O',0, /* 16006, 0x4bf, U+30bd, KEY_kana_SO, KATAKANA LETTER SO */
0x71, 0xad, 0x00, 0x00, 0x04, 0xc0, 0x00, 0x30, 0xbf, 'K','E','Y','_','k','a','n','a','_','T','A',0, /* 16027, 0x4c0, U+30bf, KEY_kana_TA, KATAKANA LETTER TA */
0xe3, 0x6d, 0x00, 0x00, 0x04, 0xc1, 0x00, 0x30, 0xc1, 'K','E','Y','_','k','a','n','a','_','C','H','I',0, /* 16049, 0x4c1, U+30c1, KEY_kana_CHI, KATAKANA LETTER TI */
0x71, 0xb5, 0x00, 0x00, 0x04, 0xc1, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','T','I',0, /* 16070, 0x4c1, KEY_kana_TI, deprecated */
0xe3, 0xd3, 0x00, 0x00, 0x04, 0xc2, 0x00, 0x30, 0xc4, 'K','E','Y','_','k','a','n','a','_','T','S','U',0, /* 16092, 0x4c2, U+30c4, KEY_kana_TSU, KATAKANA LETTER TU */
0x71, 0xc1, 0x00, 0x00, 0x04, 0xc2, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','T','U',0, /* 16113, 0x4c2, KEY_kana_TU, deprecated */
0x71, 0xb1, 0x00, 0x00, 0x04, 0xc3, 0x00, 0x30, 0xc6, 'K','E','Y','_','k','a','n','a','_','T','E',0, /* 16134, 0x4c3, U+30c6, KEY_kana_TE, KATAKANA LETTER TE */
0x71, 0xbb, 0x00, 0x00, 0x04, 0xc4, 0x00, 0x30, 0xc8, 'K','E','Y','_','k','a','n','a','_','T','O',0, /* 16155, 0x4c4, U+30c8, KEY_kana_TO, KATAKANA LETTER TO */
0x71, 0xa1, 0x00, 0x00, 0x04, 0xc5, 0x00, 0x30, 0xca, 'K','E','Y','_','k','a','n','a','_','N','A',0, /* 16176, 0x4c5, U+30ca, KEY_kana_NA, KATAKANA LETTER NA */
0x71, 0xa9, 0x00, 0x00, 0x04, 0xc6, 0x00, 0x30, 0xcb, 'K','E','Y','_','k','a','n','a','_','N','I',0, /* 16197, 0x4c6, U+30cb, KEY_kana_NI, KATAKANA LETTER NI */
0x71, 0xb5, 0x00, 0x00, 0x04, 0xc7, 0x00, 0x30, 0xcc, 'K','E','Y','_','k','a','n','a','_','N','U',0, /* 16218, 0x4c7, U+30cc, KEY_kana_NU, KATAKANA LETTER NU */
0x71, 0xa5, 0x00, 0x00, 0x04, 0xc8, 0x00, 0x30, 0xcd, 'K','E','Y','_','k','a','n','a','_','N','E',0, /* 16239, 0x4c8, U+30cd, KEY_kana_NE, KATAKANA LETTER NE */
0x71, 0xaf, 0x00, 0x00, 0x04, 0xc9, 0x00, 0x30, 0xce, 'K','E','Y','_','k','a','n','a','_','N','O',0, /* 16260, 0x4c9, U+30ce, KEY_kana_NO, KATAKANA LETTER NO */
0x71, 0x95, 0x00, 0x00, 0x04, 0xca, 0x00, 0x30, 0xcf, 'K','E','Y','_','k','a','n','a','_','H','A',0, /* 16281, 0x4ca, U+30cf, KEY_kana_HA, KATAKANA LETTER HA */
0x71, 0x9d, 0x00, 0x00, 0x04, 0xcb, 0x00, 0x30, 0xd2, 'K','E','Y','_','k','a','n','a','_','H','I',0, /* 16302, 0x4cb, U+30d2, KEY_kana_HI, KATAKANA LETTER HI */
0x71, 0xa5, 0x00, 0x00, 0x04, 0xcc, 0x00, 0x30, 0xd5, 'K','E','Y','_','k','a','n','a','_','F','U',0, /* 16323, 0x4cc, U+30d5, KEY_kana_FU, KATAKANA LETTER HU */
0x71, 0xa9, 0x00, 0x00, 0x04, 0xcc, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','H','U',0, /* 16344, 0x4cc, KEY_kana_HU, deprecated */
0x71, 0x99, 0x00, 0x00, 0x04, 0xcd, 0x00, 0x30, 0xd8, 'K','E','Y','_','k','a','n','a','_','H','E',0, /* 16365, 0x4cd, U+30d8, KEY_kana_HE, KATAKANA LETTER HE */
0x71, 0xa3, 0x00, 0x00, 0x04, 0xce, 0x00, 0x30, 0xdb, 'K','E','Y','_','k','a','n','a','_','H','O',0, /* 16386, 0x4ce, U+30db, KEY_kana_HO, KATAKANA LETTER HO */
0x71, 0x9f, 0x00, 0x00, 0x04, 0xcf, 0x00, 0x30, 0xde, 'K','E','Y','_','k','a','n','a','_','M','A',0, /* 16407, 0x4cf, U+30de, KEY_kana_MA, KATAKANA LETTER MA */
0x71, 0xa7, 0x00, 0x00, 0x04, 0xd0, 0x00, 0x30, 0xdf, 'K','E','Y','_','k','a','n','a','_','M','I',0, /* 16428, 0x4d0, U+30df, KEY_kana_MI, KATAKANA LETTER MI */
0x71, 0xb3, 0x00, 0x00, 0x04, 0xd1, 0x00, 0x30, 0xe0, 'K','E','Y','_','k','a','n','a','_','M','U',0, /* 16449, 0x4d1, U+30e0, KEY_kana_MU, KATAKANA LETTER MU */
0x71, 0xa3, 0x00, 0x00, 0x04, 0xd2, 0x00, 0x30, 0xe1, 'K','E','Y','_','k','a','n','a','_','M','E',0, /* 16470, 0x4d2, U+30e1, KEY_kana_ME, KATAKANA LETTER ME */
0x71, 0xad, 0x00, 0x00, 0x04, 0xd3, 0x00, 0x30, 0xe2, 'K','E','Y','_','k','a','n','a','_','M','O',0, /* 16491, 0x4d3, U+30e2, KEY_kana_MO, KATAKANA LETTER MO */
0x71, 0xb7, 0x00, 0x00, 0x04, 0xd4, 0x00, 0x30, 0xe4, 'K','E','Y','_','k','a','n','a','_','Y','A',0, /* 16512, 0x4d4, U+30e4, KEY_kana_YA, KATAKANA LETTER YA */
0x71, 0xcb, 0x00, 0x00, 0x04, 0xd5, 0x00, 0x30, 0xe6, 'K','E','Y','_','k','a','n','a','_','Y','U',0, /* 16533, 0x4d5, U+30e6, KEY_kana_YU, KATAKANA LETTER YU */
0x71, 0xc5, 0x00, 0x00, 0x04, 0xd6, 0x00, 0x30, 0xe8, 'K','E','Y','_','k','a','n','a','_','Y','O',0, /* 16554, 0x4d6, U+30e8, KEY_kana_YO, KATAKANA LETTER YO */
0x71, 0xa9, 0x00, 0x00, 0x04, 0xd7, 0x00, 0x30, 0xe9, 'K','E','Y','_','k','a','n','a','_','R','A',0, /* 16575, 0x4d7, U+30e9, KEY_kana_RA, KATAKANA LETTER RA */
0x71, 0xb1, 0x00, 0x00, 0x04, 0xd8, 0x00, 0x30, 0xea, 'K','E','Y','_','k','a','n','a','_','R','I',0, /* 16596, 0x4d8, U+30ea, KEY_kana_RI, KATAKANA LETTER RI */
0x71, 0xbd, 0x00, 0x00, 0x04, 0xd9, 0x00, 0x30, 0xeb, 'K','E','Y','_','k','a','n','a','_','R','U',0, /* 16617, 0x4d9, U+30eb, KEY_kana_RU, KATAKANA LETTER RU */
0x71, 0xad, 0x00, 0x00, 0x04, 0xda, 0x00, 0x30, 0xec, 'K','E','Y','_','k','a','n','a','_','R','E',0, /* 16638, 0x4da, U+30ec, KEY_kana_RE, KATAKANA LETTER RE */
0x71, 0xb7, 0x00, 0x00, 0x04, 0xdb, 0x00, 0x30, 0xed, 'K','E','Y','_','k','a','n','a','_','R','O',0, /* 16659, 0x4db, U+30ed, KEY_kana_RO, KATAKANA LETTER RO */
0x71, 0xb3, 0x00, 0x00, 0x04, 0xdc, 0x00, 0x30, 0xef, 'K','E','Y','_','k','a','n','a','_','W','A',0, /* 16680, 0x4dc, U+30ef, KEY_kana_WA, KATAKANA LETTER WA */
0x38, 0xb0, 0x00, 0x00, 0x04, 0xdd, 0x00, 0x30, 0xf3, 'K','E','Y','_','k','a','n','a','_','N',0, /* 16700, 0x4dd, U+30f3, KEY_kana_N, KATAKANA LETTER N */
0x6b, 0xfc, 0x00, 0x00, 0x04, 0xde, 0x00, 0x30, 0x9b, 'K','E','Y','_','v','o','i','c','e','d','s','o','u','n','d',0, /* 16725, 0x4de, U+309b, KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */
0x7b, 0xfc, 0x00, 0x00, 0x04, 0xdf, 0x00, 0x30, 0x9c, 'K','E','Y','_','s','e','m','i','v','o','i','c','e','d','s','o','u','n','d',0, /* 16754, 0x4df, U+309c, KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
0x28, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','k','a','n','a','_','s','w','i','t','c','h',0, /* 16779, 0xff7e, KEY_kana_switch, Alias for mode_switch */
0x69, 0x6a, 0x01, 0x00, 0x06, 0xf0, 0x00, 0x06, 0xf0, 'K','E','Y','_','F','a','r','s','i','_','0',0, /* 16800, 0x10006f0, U+06f0, KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */
0x69, 0x6b, 0x01, 0x00, 0x06, 0xf1, 0x00, 0x06, 0xf1, 'K','E','Y','_','F','a','r','s','i','_','1',0, /* 16821, 0x10006f1, U+06f1, KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */
0x69, 0x6c, 0x01, 0x00, 0x06, 0xf2, 0x00, 0x06, 0xf2, 'K','E','Y','_','F','a','r','s','i','_','2',0, /* 16842, 0x10006f2, U+06f2, KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */
0x69, 0x6d, 0x01, 0x00, 0x06, 0xf3, 0x00, 0x06, 0xf3, 'K','E','Y','_','F','a','r','s','i','_','3',0, /* 16863, 0x10006f3, U+06f3, KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */
0x69, 0x6e, 0x01, 0x00, 0x06, 0xf4, 0x00, 0x06, 0xf4, 'K','E','Y','_','F','a','r','s','i','_','4',0, /* 16884, 0x10006f4, U+06f4, KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */
0x69, 0x6f, 0x01, 0x00, 0x06, 0xf5, 0x00, 0x06, 0xf5, 'K','E','Y','_','F','a','r','s','i','_','5',0, /* 16905, 0x10006f5, U+06f5, KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */
0x69, 0x70, 0x01, 0x00, 0x06, 0xf6, 0x00, 0x06, 0xf6, 'K','E','Y','_','F','a','r','s','i','_','6',0, /* 16926, 0x10006f6, U+06f6, KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */
0x69, 0x71, 0x01, 0x00, 0x06, 0xf7, 0x00, 0x06, 0xf7, 'K','E','Y','_','F','a','r','s','i','_','7',0, /* 16947, 0x10006f7, U+06f7, KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */
0x69, 0x72, 0x01, 0x00, 0x06, 0xf8, 0x00, 0x06, 0xf8, 'K','E','Y','_','F','a','r','s','i','_','8',0, /* 16968, 0x10006f8, U+06f8, KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */
0x69, 0x73, 0x01, 0x00, 0x06, 0xf9, 0x00, 0x06, 0xf9, 'K','E','Y','_','F','a','r','s','i','_','9',0, /* 16989, 0x10006f9, U+06f9, KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */
0xaa, 0x3c, 0x01, 0x00, 0x06, 0x6a, 0x00, 0x06, 0x6a, 'K','E','Y','_','A','r','a','b','i','c','_','p','e','r','c','e','n','t',0, /* 17017, 0x100066a, U+066a, KEY_Arabic_percent, ARABIC PERCENT SIGN */
0x0e, 0xd8, 0x01, 0x00, 0x06, 0x70, 0x00, 0x06, 0x70, 'K','E','Y','_','A','r','a','b','i','c','_','s','u','p','e','r','s','c','r','i','p','t','_','a','l','e','f',0, /* 17054, 0x1000670, U+0670, KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */
0x95, 0x32, 0x01, 0x00, 0x06, 0x79, 0x00, 0x06, 0x79, 'K','E','Y','_','A','r','a','b','i','c','_','t','t','e','h',0, /* 17079, 0x1000679, U+0679, KEY_Arabic_tteh, ARABIC LETTER TTEH */
0x4a, 0x3a, 0x01, 0x00, 0x06, 0x7e, 0x00, 0x06, 0x7e, 'K','E','Y','_','A','r','a','b','i','c','_','p','e','h',0, /* 17103, 0x100067e, U+067e, KEY_Arabic_peh, ARABIC LETTER PEH */
0x2a, 0x4a, 0x01, 0x00, 0x06, 0x86, 0x00, 0x06, 0x86, 'K','E','Y','_','A','r','a','b','i','c','_','t','c','h','e','h',0, /* 17129, 0x1000686, U+0686, KEY_Arabic_tcheh, ARABIC LETTER TCHEH */
0x94, 0x6e, 0x01, 0x00, 0x06, 0x88, 0x00, 0x06, 0x88, 'K','E','Y','_','A','r','a','b','i','c','_','d','d','a','l',0, /* 17154, 0x1000688, U+0688, KEY_Arabic_ddal, ARABIC LETTER DDAL */
0x95, 0x1a, 0x01, 0x00, 0x06, 0x91, 0x00, 0x06, 0x91, 'K','E','Y','_','A','r','a','b','i','c','_','r','r','e','h',0, /* 17179, 0x1000691, U+0691, KEY_Arabic_rreh, ARABIC LETTER RREH */
0x29, 0xb7, 0x00, 0x00, 0x05, 0xac, 0x00, 0x06, 0x0c, 'K','E','Y','_','A','r','a','b','i','c','_','c','o','m','m','a',0, /* 17205, 0x5ac, U+060c, KEY_Arabic_comma, ARABIC COMMA */
0x54, 0x36, 0x01, 0x00, 0x06, 0xd4, 0x00, 0x06, 0xd4, 'K','E','Y','_','A','r','a','b','i','c','_','f','u','l','l','s','t','o','p',0, /* 17234, 0x10006d4, U+06d4, KEY_Arabic_fullstop, ARABIC FULL STOP */
0xd2, 0x02, 0x01, 0x00, 0x06, 0x60, 0x00, 0x06, 0x60, 'K','E','Y','_','A','r','a','b','i','c','_','0',0, /* 17256, 0x1000660, U+0660, KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */
0xd2, 0x03, 0x01, 0x00, 0x06, 0x61, 0x00, 0x06, 0x61, 'K','E','Y','_','A','r','a','b','i','c','_','1',0, /* 17278, 0x1000661, U+0661, KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */
0xd2, 0x04, 0x01, 0x00, 0x06, 0x62, 0x00, 0x06, 0x62, 'K','E','Y','_','A','r','a','b','i','c','_','2',0, /* 17300, 0x1000662, U+0662, KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */
0xd2, 0x05, 0x01, 0x00, 0x06, 0x63, 0x00, 0x06, 0x63, 'K','E','Y','_','A','r','a','b','i','c','_','3',0, /* 17322, 0x1000663, U+0663, KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */
0xd2, 0x06, 0x01, 0x00, 0x06, 0x64, 0x00, 0x06, 0x64, 'K','E','Y','_','A','r','a','b','i','c','_','4',0, /* 17344, 0x1000664, U+0664, KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */
0xd2, 0x07, 0x01, 0x00, 0x06, 0x65, 0x00, 0x06, 0x65, 'K','E','Y','_','A','r','a','b','i','c','_','5',0, /* 17366, 0x1000665, U+0665, KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */
0xd2, 0x08, 0x01, 0x00, 0x06, 0x66, 0x00, 0x06, 0x66, 'K','E','Y','_','A','r','a','b','i','c','_','6',0, /* 17388, 0x1000666, U+0666, KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */
0xd2, 0x09, 0x01, 0x00, 0x06, 0x67, 0x00, 0x06, 0x67, 'K','E','Y','_','A','r','a','b','i','c','_','7',0, /* 17410, 0x1000667, U+0667, KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */
0xd2, 0x0a, 0x01, 0x00, 0x06, 0x68, 0x00, 0x06, 0x68, 'K','E','Y','_','A','r','a','b','i','c','_','8',0, /* 17432, 0x1000668, U+0668, KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */
0xd2, 0x0b, 0x01, 0x00, 0x06, 0x69, 0x00, 0x06, 0x69, 'K','E','Y','_','A','r','a','b','i','c','_','9',0, /* 17454, 0x1000669, U+0669, KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */
0xac, 0x84, 0x00, 0x00, 0x05, 0xbb, 0x00, 0x06, 0x1b, 'K','E','Y','_','A','r','a','b','i','c','_','s','e','m','i','c','o','l','o','n',0, /* 17484, 0x5bb, U+061b, KEY_Arabic_semicolon, ARABIC SEMICOLON */
0x30, 0x2b, 0x00, 0x00, 0x05, 0xbf, 0x00, 0x06, 0x1f, 'K','E','Y','_','A','r','a','b','i','c','_','q','u','e','s','t','i','o','n','_','m','a','r','k',0, /* 17518, 0x5bf, U+061f, KEY_Arabic_question_mark, ARABIC QUESTION MARK */
0x29, 0xb1, 0x00, 0x00, 0x05, 0xc1, 0x00, 0x06, 0x21, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a',0, /* 17544, 0x5c1, U+0621, KEY_Arabic_hamza, ARABIC LETTER HAMZA */
0x86, 0xe8, 0x00, 0x00, 0x05, 0xc2, 0x00, 0x06, 0x22, 'K','E','Y','_','A','r','a','b','i','c','_','m','a','d','d','a','o','n','a','l','e','f',0, /* 17576, 0x5c2, U+0622, KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */
0x86, 0xe8, 0x00, 0x00, 0x05, 0xc3, 0x00, 0x06, 0x23, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','o','n','a','l','e','f',0, /* 17608, 0x5c3, U+0623, KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */
0x43, 0x95, 0x00, 0x00, 0x05, 0xc4, 0x00, 0x06, 0x24, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','o','n','w','a','w',0, /* 17639, 0x5c4, U+0624, KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */
0x40, 0xa8, 0x00, 0x00, 0x05, 0xc5, 0x00, 0x06, 0x25, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','u','n','d','e','r','a','l','e','f',0, /* 17674, 0x5c5, U+0625, KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */
0x43, 0x96, 0x00, 0x00, 0x05, 0xc6, 0x00, 0x06, 0x26, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','o','n','y','e','h',0, /* 17705, 0x5c6, U+0626, KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */
0x94, 0x78, 0x00, 0x00, 0x05, 0xc7, 0x00, 0x06, 0x27, 'K','E','Y','_','A','r','a','b','i','c','_','a','l','e','f',0, /* 17730, 0x5c7, U+0627, KEY_Arabic_alef, ARABIC LETTER ALEF */
0x4a, 0x02, 0x00, 0x00, 0x05, 0xc8, 0x00, 0x06, 0x28, 'K','E','Y','_','A','r','a','b','i','c','_','b','e','h',0, /* 17754, 0x5c8, U+0628, KEY_Arabic_beh, ARABIC LETTER BEH */
0x59, 0xad, 0x00, 0x00, 0x05, 0xc9, 0x00, 0x06, 0x29, 'K','E','Y','_','A','r','a','b','i','c','_','t','e','h','m','a','r','b','u','t','a',0, /* 17785, 0x5c9, U+0629, KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */
0x4a, 0x4a, 0x00, 0x00, 0x05, 0xca, 0x00, 0x06, 0x2a, 'K','E','Y','_','A','r','a','b','i','c','_','t','e','h',0, /* 17809, 0x5ca, U+062a, KEY_Arabic_teh, ARABIC LETTER TEH */
0x95, 0x02, 0x00, 0x00, 0x05, 0xcb, 0x00, 0x06, 0x2b, 'K','E','Y','_','A','r','a','b','i','c','_','t','h','e','h',0, /* 17834, 0x5cb, U+062b, KEY_Arabic_theh, ARABIC LETTER THEH */
0x94, 0xab, 0x00, 0x00, 0x05, 0xcc, 0x00, 0x06, 0x2c, 'K','E','Y','_','A','r','a','b','i','c','_','j','e','e','m',0, /* 17859, 0x5cc, U+062c, KEY_Arabic_jeem, ARABIC LETTER JEEM */
0x4a, 0x12, 0x00, 0x00, 0x05, 0xcd, 0x00, 0x06, 0x2d, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','h',0, /* 17883, 0x5cd, U+062d, KEY_Arabic_hah, ARABIC LETTER HAH */
0x94, 0xb2, 0x00, 0x00, 0x05, 0xce, 0x00, 0x06, 0x2e, 'K','E','Y','_','A','r','a','b','i','c','_','k','h','a','h',0, /* 17908, 0x5ce, U+062e, KEY_Arabic_khah, ARABIC LETTER KHAH */
0x4a, 0x06, 0x00, 0x00, 0x05, 0xcf, 0x00, 0x06, 0x2f, 'K','E','Y','_','A','r','a','b','i','c','_','d','a','l',0, /* 17932, 0x5cf, U+062f, KEY_Arabic_dal, ARABIC LETTER DAL */
0x94, 0xfe, 0x00, 0x00, 0x05, 0xd0, 0x00, 0x06, 0x30, 'K','E','Y','_','A','r','a','b','i','c','_','t','h','a','l',0, /* 17957, 0x5d0, U+0630, KEY_Arabic_thal, ARABIC LETTER THAL */
0xa4, 0xe9, 0x00, 0x00, 0x05, 0xd1, 0x00, 0x06, 0x31, 'K','E','Y','_','A','r','a','b','i','c','_','r','a',0, /* 17980, 0x5d1, U+0631, KEY_Arabic_ra, ARABIC LETTER REH */
0x95, 0x24, 0x00, 0x00, 0x05, 0xd2, 0x00, 0x06, 0x32, 'K','E','Y','_','A','r','a','b','i','c','_','z','a','i','n',0, /* 18005, 0x5d2, U+0632, KEY_Arabic_zain, ARABIC LETTER ZAIN */
0x94, 0xf4, 0x00, 0x00, 0x05, 0xd3, 0x00, 0x06, 0x33, 'K','E','Y','_','A','r','a','b','i','c','_','s','e','e','n',0, /* 18030, 0x5d3, U+0633, KEY_Arabic_seen, ARABIC LETTER SEEN */
0x2a, 0x5c, 0x00, 0x00, 0x05, 0xd4, 0x00, 0x06, 0x34, 'K','E','Y','_','A','r','a','b','i','c','_','s','h','e','e','n',0, /* 18056, 0x5d4, U+0634, KEY_Arabic_sheen, ARABIC LETTER SHEEN */
0x4a, 0x3a, 0x00, 0x00, 0x05, 0xd5, 0x00, 0x06, 0x35, 'K','E','Y','_','A','r','a','b','i','c','_','s','a','d',0, /* 18080, 0x5d5, U+0635, KEY_Arabic_sad, ARABIC LETTER SAD */
0x49, 0xfe, 0x00, 0x00, 0x05, 0xd6, 0x00, 0x06, 0x36, 'K','E','Y','_','A','r','a','b','i','c','_','d','a','d',0, /* 18104, 0x5d6, U+0636, KEY_Arabic_dad, ARABIC LETTER DAD */
0x4a, 0x42, 0x00, 0x00, 0x05, 0xd7, 0x00, 0x06, 0x37, 'K','E','Y','_','A','r','a','b','i','c','_','t','a','h',0, /* 18128, 0x5d7, U+0637, KEY_Arabic_tah, ARABIC LETTER TAH */
0x4a, 0x5a, 0x00, 0x00, 0x05, 0xd8, 0x00, 0x06, 0x38, 'K','E','Y','_','A','r','a','b','i','c','_','z','a','h',0, /* 18152, 0x5d8, U+0638, KEY_Arabic_zah, ARABIC LETTER ZAH */
0x4a, 0x0c, 0x00, 0x00, 0x05, 0xd9, 0x00, 0x06, 0x39, 'K','E','Y','_','A','r','a','b','i','c','_','a','i','n',0, /* 18176, 0x5d9, U+0639, KEY_Arabic_ain, ARABIC LETTER AIN */
0x29, 0x94, 0x00, 0x00, 0x05, 0xda, 0x00, 0x06, 0x3a, 'K','E','Y','_','A','r','a','b','i','c','_','g','h','a','i','n',0, /* 18202, 0x5da, U+063a, KEY_Arabic_ghain, ARABIC LETTER GHAIN */
0xab, 0x62, 0x00, 0x00, 0x05, 0xe0, 0x00, 0x06, 0x40, 'K','E','Y','_','A','r','a','b','i','c','_','t','a','t','w','e','e','l',0, /* 18230, 0x5e0, U+0640, KEY_Arabic_tatweel, ARABIC TATWEEL */
0x4a, 0x12, 0x00, 0x00, 0x05, 0xe1, 0x00, 0x06, 0x41, 'K','E','Y','_','A','r','a','b','i','c','_','f','e','h',0, /* 18254, 0x5e1, U+0641, KEY_Arabic_feh, ARABIC LETTER FEH */
0x4a, 0x34, 0x00, 0x00, 0x05, 0xe2, 0x00, 0x06, 0x42, 'K','E','Y','_','A','r','a','b','i','c','_','q','a','f',0, /* 18278, 0x5e2, U+0642, KEY_Arabic_qaf, ARABIC LETTER QAF */
0x4a, 0x1c, 0x00, 0x00, 0x05, 0xe3, 0x00, 0x06, 0x43, 'K','E','Y','_','A','r','a','b','i','c','_','k','a','f',0, /* 18302, 0x5e3, U+0643, KEY_Arabic_kaf, ARABIC LETTER KAF */
0x4a, 0x27, 0x00, 0x00, 0x05, 0xe4, 0x00, 0x06, 0x44, 'K','E','Y','_','A','r','a','b','i','c','_','l','a','m',0, /* 18326, 0x5e4, U+0644, KEY_Arabic_lam, ARABIC LETTER LAM */
0x94, 0xc3, 0x00, 0x00, 0x05, 0xe5, 0x00, 0x06, 0x45, 'K','E','Y','_','A','r','a','b','i','c','_','m','e','e','m',0, /* 18351, 0x5e5, U+0645, KEY_Arabic_meem, ARABIC LETTER MEEM */
0x95, 0x08, 0x00, 0x00, 0x05, 0xe6, 0x00, 0x06, 0x46, 'K','E','Y','_','A','r','a','b','i','c','_','n','o','o','n',0, /* 18376, 0x5e6, U+0646, KEY_Arabic_noon, ARABIC LETTER NOON */
0xa4, 0xd5, 0x00, 0x00, 0x05, 0xe7, 0x00, 0x06, 0x47, 'K','E','Y','_','A','r','a','b','i','c','_','h','a',0, /* 18399, 0x5e7, U+0647, KEY_Arabic_ha, ARABIC LETTER HEH */
0x4a, 0x1a, 0x00, 0x00, 0x05, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','A','r','a','b','i','c','_','h','e','h',0, /* 18423, 0x5e7, KEY_Arabic_heh, deprecated */
0x4a, 0x5d, 0x00, 0x00, 0x05, 0xe8, 0x00, 0x06, 0x48, 'K','E','Y','_','A','r','a','b','i','c','_','w','a','w',0, /* 18447, 0x5e8, U+0648, KEY_Arabic_waw, ARABIC LETTER WAW */
0x70, 0xc1, 0x00, 0x00, 0x05, 0xe9, 0x00, 0x06, 0x49, 'K','E','Y','_','A','r','a','b','i','c','_','a','l','e','f','m','a','k','s','u','r','a',0, /* 18479, 0x5e9, U+0649, KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */
0x4a, 0x5e, 0x00, 0x00, 0x05, 0xea, 0x00, 0x06, 0x4a, 'K','E','Y','_','A','r','a','b','i','c','_','y','e','h',0, /* 18503, 0x5ea, U+064a, KEY_Arabic_yeh, ARABIC LETTER YEH */
0x4f, 0x48, 0x00, 0x00, 0x05, 0xeb, 0x00, 0x06, 0x4b, 'K','E','Y','_','A','r','a','b','i','c','_','f','a','t','h','a','t','a','n',0, /* 18532, 0x5eb, U+064b, KEY_Arabic_fathatan, ARABIC FATHATAN */
0x4d, 0xb8, 0x00, 0x00, 0x05, 0xec, 0x00, 0x06, 0x4c, 'K','E','Y','_','A','r','a','b','i','c','_','d','a','m','m','a','t','a','n',0, /* 18561, 0x5ec, U+064c, KEY_Arabic_dammatan, ARABIC DAMMATAN */
0x52, 0x48, 0x00, 0x00, 0x05, 0xed, 0x00, 0x06, 0x4d, 'K','E','Y','_','A','r','a','b','i','c','_','k','a','s','r','a','t','a','n',0, /* 18590, 0x5ed, U+064d, KEY_Arabic_kasratan, ARABIC KASRATAN */
0x29, 0x89, 0x00, 0x00, 0x05, 0xee, 0x00, 0x06, 0x4e, 'K','E','Y','_','A','r','a','b','i','c','_','f','a','t','h','a',0, /* 18616, 0x5ee, U+064e, KEY_Arabic_fatha, ARABIC FATHA */
0x29, 0x57, 0x00, 0x00, 0x05, 0xef, 0x00, 0x06, 0x4f, 'K','E','Y','_','A','r','a','b','i','c','_','d','a','m','m','a',0, /* 18642, 0x5ef, U+064f, KEY_Arabic_damma, ARABIC DAMMA */
0x29, 0xe9, 0x00, 0x00, 0x05, 0xf0, 0x00, 0x06, 0x50, 'K','E','Y','_','A','r','a','b','i','c','_','k','a','s','r','a',0, /* 18668, 0x5f0, U+0650, KEY_Arabic_kasra, ARABIC KASRA */
0x54, 0xe1, 0x00, 0x00, 0x05, 0xf1, 0x00, 0x06, 0x51, 'K','E','Y','_','A','r','a','b','i','c','_','s','h','a','d','d','a',0, /* 18695, 0x5f1, U+0651, KEY_Arabic_shadda, ARABIC SHADDA */
0x2a, 0xfc, 0x00, 0x00, 0x05, 0xf2, 0x00, 0x06, 0x52, 'K','E','Y','_','A','r','a','b','i','c','_','s','u','k','u','n',0, /* 18721, 0x5f2, U+0652, KEY_Arabic_sukun, ARABIC SUKUN */
0x84, 0x4d, 0x01, 0x00, 0x06, 0x53, 0x00, 0x06, 0x53, 'K','E','Y','_','A','r','a','b','i','c','_','m','a','d','d','a','_','a','b','o','v','e',0, /* 18753, 0x1000653, U+0653, KEY_Arabic_madda_above, ARABIC MADDAH ABOVE */
0x84, 0x4d, 0x01, 0x00, 0x06, 0x54, 0x00, 0x06, 0x54, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','_','a','b','o','v','e',0, /* 18785, 0x1000654, U+0654, KEY_Arabic_hamza_above, ARABIC HAMZA ABOVE */
0x84, 0x6d, 0x01, 0x00, 0x06, 0x55, 0x00, 0x06, 0x55, 'K','E','Y','_','A','r','a','b','i','c','_','h','a','m','z','a','_','b','e','l','o','w',0, /* 18817, 0x1000655, U+0655, KEY_Arabic_hamza_below, ARABIC HAMZA BELOW */
0x4a, 0x22, 0x01, 0x00, 0x06, 0x98, 0x00, 0x06, 0x98, 'K','E','Y','_','A','r','a','b','i','c','_','j','e','h',0, /* 18841, 0x1000698, U+0698, KEY_Arabic_jeh, ARABIC LETTER JEH */
0x4a, 0x52, 0x01, 0x00, 0x06, 0xa4, 0x00, 0x06, 0xa4, 'K','E','Y','_','A','r','a','b','i','c','_','v','e','h',0, /* 18865, 0x10006a4, U+06a4, KEY_Arabic_veh, ARABIC LETTER VEH */
0x29, 0xca, 0x01, 0x00, 0x06, 0xa9, 0x00, 0x06, 0xa9, 'K','E','Y','_','A','r','a','b','i','c','_','k','e','h','e','h',0, /* 18891, 0x10006a9, U+06a9, KEY_Arabic_keheh, ARABIC LETTER KEHEH */
0x4a, 0x0c, 0x01, 0x00, 0x06, 0xaf, 0x00, 0x06, 0xaf, 'K','E','Y','_','A','r','a','b','i','c','_','g','a','f',0, /* 18915, 0x10006af, U+06af, KEY_Arabic_gaf, ARABIC LETTER GAF */
0xb5, 0xbd, 0x01, 0x00, 0x06, 0xba, 0x00, 0x06, 0xba, 'K','E','Y','_','A','r','a','b','i','c','_','n','o','o','n','_','g','h','u','n','n','a',0, /* 18947, 0x10006ba, U+06ba, KEY_Arabic_noon_ghunna, ARABIC LETTER NOON GHUNNA */
0xcb, 0xf3, 0x01, 0x00, 0x06, 0xbe, 0x00, 0x06, 0xbe, 'K','E','Y','_','A','r','a','b','i','c','_','h','e','h','_','d','o','a','c','h','a','s','h','m','e','e',0, /* 18983, 0x10006be, U+06be, KEY_Arabic_heh_doachashmee, ARABIC LETTER HEH DOACHASHMEE */
0xa7, 0xfe, 0x01, 0x00, 0x06, 0xcc, 0x00, 0x06, 0xcc, 'K','E','Y','_','F','a','r','s','i','_','y','e','h',0, /* 19006, 0x10006cc, U+06cc, KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */
0x9f, 0xfe, 0x01, 0x00, 0x06, 0xcc, 0x00, 0x06, 0xcc, 'K','E','Y','_','A','r','a','b','i','c','_','f','a','r','s','i','_','y','e','h',0, /* 19036, 0x10006cc, U+06cc, KEY_Arabic_farsi_yeh, ARABIC LETTER FARSI YEH */
0xaf, 0x7f, 0x01, 0x00, 0x06, 0xd2, 0x00, 0x06, 0xd2, 'K','E','Y','_','A','r','a','b','i','c','_','y','e','h','_','b','a','r','e','e',0, /* 19066, 0x10006d2, U+06d2, KEY_Arabic_yeh_baree, ARABIC LETTER YEH BARREE */
0x4f, 0x52, 0x01, 0x00, 0x06, 0xc1, 0x00, 0x06, 0xc1, 'K','E','Y','_','A','r','a','b','i','c','_','h','e','h','_','g','o','a','l',0, /* 19095, 0x10006c1, U+06c1, KEY_Arabic_heh_goal, ARABIC LETTER HEH GOAL */
0x56, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','A','r','a','b','i','c','_','s','w','i','t','c','h',0, /* 19122, 0xff7e, KEY_Arabic_switch, Alias for mode_switch */
0x29, 0x44, 0x01, 0x00, 0x04, 0x92, 0x00, 0x04, 0x92, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','G','H','E','_','b','a','r',0, /* 19152, 0x1000492, U+0492, KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */
0x37, 0x44, 0x01, 0x00, 0x04, 0x93, 0x00, 0x04, 0x93, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','g','h','e','_','b','a','r',0, /* 19182, 0x1000493, U+0493, KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */
0x9e, 0x2c, 0x01, 0x00, 0x04, 0x96, 0x00, 0x04, 0x96, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Z','H','E','_','d','e','s','c','e','n','d','e','r',0, /* 19218, 0x1000496, U+0496, KEY_Cyrillic_ZHE_descender, CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
0x1e, 0x2c, 0x01, 0x00, 0x04, 0x97, 0x00, 0x04, 0x97, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','z','h','e','_','d','e','s','c','e','n','d','e','r',0, /* 19254, 0x1000497, U+0497, KEY_Cyrillic_zhe_descender, CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
0x76, 0x2c, 0x01, 0x00, 0x04, 0x9a, 0x00, 0x04, 0x9a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','K','A','_','d','e','s','c','e','n','d','e','r',0, /* 19289, 0x100049a, U+049a, KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
0xf6, 0x2c, 0x01, 0x00, 0x04, 0x9b, 0x00, 0x04, 0x9b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','k','a','_','d','e','s','c','e','n','d','e','r',0, /* 19324, 0x100049b, U+049b, KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */
0x17, 0x27, 0x01, 0x00, 0x04, 0x9c, 0x00, 0x04, 0x9c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','K','A','_','v','e','r','t','s','t','r','o','k','e',0, /* 19360, 0x100049c, U+049c, KEY_Cyrillic_KA_vertstroke, CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
0x17, 0x27, 0x01, 0x00, 0x04, 0x9d, 0x00, 0x04, 0x9d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','k','a','_','v','e','r','t','s','t','r','o','k','e',0, /* 19396, 0x100049d, U+049d, KEY_Cyrillic_ka_vertstroke, CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
0x7a, 0x2c, 0x01, 0x00, 0x04, 0xa2, 0x00, 0x04, 0xa2, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','N','_','d','e','s','c','e','n','d','e','r',0, /* 19431, 0x10004a2, U+04a2, KEY_Cyrillic_EN_descender, CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
0xfa, 0x2c, 0x01, 0x00, 0x04, 0xa3, 0x00, 0x04, 0xa3, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','n','_','d','e','s','c','e','n','d','e','r',0, /* 19466, 0x10004a3, U+04a3, KEY_Cyrillic_en_descender, CYRILLIC SMALL LETTER EN WITH DESCENDER */
0x9d, 0xf8, 0x01, 0x00, 0x04, 0xae, 0x00, 0x04, 0xae, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','U','_','s','t','r','a','i','g','h','t',0, /* 19499, 0x10004ae, U+04ae, KEY_Cyrillic_U_straight, CYRILLIC CAPITAL LETTER STRAIGHT U */
0xdd, 0xf8, 0x01, 0x00, 0x04, 0xaf, 0x00, 0x04, 0xaf, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','u','_','s','t','r','a','i','g','h','t',0, /* 19532, 0x10004af, U+04af, KEY_Cyrillic_u_straight, CYRILLIC SMALL LETTER STRAIGHT U */
0xe5, 0x34, 0x01, 0x00, 0x04, 0xb0, 0x00, 0x04, 0xb0, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','U','_','s','t','r','a','i','g','h','t','_','b','a','r',0, /* 19569, 0x10004b0, U+04b0, KEY_Cyrillic_U_straight_bar, CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
0xe5, 0x34, 0x01, 0x00, 0x04, 0xb1, 0x00, 0x04, 0xb1, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','u','_','s','t','r','a','i','g','h','t','_','b','a','r',0, /* 19606, 0x10004b1, U+04b1, KEY_Cyrillic_u_straight_bar, CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
0x5e, 0x2c, 0x01, 0x00, 0x04, 0xb2, 0x00, 0x04, 0xb2, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','H','A','_','d','e','s','c','e','n','d','e','r',0, /* 19641, 0x10004b2, U+04b2, KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
0xde, 0x2c, 0x01, 0x00, 0x04, 0xb3, 0x00, 0x04, 0xb3, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','h','a','_','d','e','s','c','e','n','d','e','r',0, /* 19676, 0x10004b3, U+04b3, KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */
0x2e, 0x2c, 0x01, 0x00, 0x04, 0xb6, 0x00, 0x04, 0xb6, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','C','H','E','_','d','e','s','c','e','n','d','e','r',0, /* 19712, 0x10004b6, U+04b6, KEY_Cyrillic_CHE_descender, CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
0xae, 0x2c, 0x01, 0x00, 0x04, 0xb7, 0x00, 0x04, 0xb7, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','c','h','e','_','d','e','s','c','e','n','d','e','r',0, /* 19748, 0x10004b7, U+04b7, KEY_Cyrillic_che_descender, CYRILLIC SMALL LETTER CHE WITH DESCENDER */
0x87, 0x27, 0x01, 0x00, 0x04, 0xb8, 0x00, 0x04, 0xb8, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','C','H','E','_','v','e','r','t','s','t','r','o','k','e',0, /* 19785, 0x10004b8, U+04b8, KEY_Cyrillic_CHE_vertstroke, CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
0x87, 0x27, 0x01, 0x00, 0x04, 0xb9, 0x00, 0x04, 0xb9, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','c','h','e','_','v','e','r','t','s','t','r','o','k','e',0, /* 19822, 0x10004b9, U+04b9, KEY_Cyrillic_che_vertstroke, CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
0x05, 0x19, 0x01, 0x00, 0x04, 0xba, 0x00, 0x04, 0xba, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','H','H','A',0, /* 19849, 0x10004ba, U+04ba, KEY_Cyrillic_SHHA, CYRILLIC CAPITAL LETTER SHHA */
0x06, 0xf9, 0x01, 0x00, 0x04, 0xbb, 0x00, 0x04, 0xbb, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','h','h','a',0, /* 19876, 0x10004bb, U+04bb, KEY_Cyrillic_shha, CYRILLIC SMALL LETTER SHHA */
0x0a, 0x77, 0x01, 0x00, 0x04, 0xd8, 0x00, 0x04, 0xd8, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','C','H','W','A',0, /* 19904, 0x10004d8, U+04d8, KEY_Cyrillic_SCHWA, CYRILLIC CAPITAL LETTER SCHWA */
0x0e, 0x57, 0x01, 0x00, 0x04, 0xd9, 0x00, 0x04, 0xd9, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','c','h','w','a',0, /* 19932, 0x10004d9, U+04d9, KEY_Cyrillic_schwa, CYRILLIC SMALL LETTER SCHWA */
0x5f, 0x1c, 0x01, 0x00, 0x04, 0xe2, 0x00, 0x04, 0xe2, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','I','_','m','a','c','r','o','n',0, /* 19963, 0x10004e2, U+04e2, KEY_Cyrillic_I_macron, CYRILLIC CAPITAL LETTER I WITH MACRON */
0x6f, 0x1c, 0x01, 0x00, 0x04, 0xe3, 0x00, 0x04, 0xe3, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','i','_','m','a','c','r','o','n',0, /* 19994, 0x10004e3, U+04e3, KEY_Cyrillic_i_macron, CYRILLIC SMALL LETTER I WITH MACRON */
0x0b, 0xc4, 0x01, 0x00, 0x04, 0xe8, 0x00, 0x04, 0xe8, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','O','_','b','a','r',0, /* 20022, 0x10004e8, U+04e8, KEY_Cyrillic_O_bar, CYRILLIC CAPITAL LETTER BARRED O */
0x0d, 0xc4, 0x01, 0x00, 0x04, 0xe9, 0x00, 0x04, 0xe9, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','o','_','b','a','r',0, /* 20050, 0x10004e9, U+04e9, KEY_Cyrillic_o_bar, CYRILLIC SMALL LETTER BARRED O */
0x65, 0x1c, 0x01, 0x00, 0x04, 0xee, 0x00, 0x04, 0xee, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','U','_','m','a','c','r','o','n',0, /* 20081, 0x10004ee, U+04ee, KEY_Cyrillic_U_macron, CYRILLIC CAPITAL LETTER U WITH MACRON */
0x75, 0x1c, 0x01, 0x00, 0x04, 0xef, 0x00, 0x04, 0xef, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','u','_','m','a','c','r','o','n',0, /* 20112, 0x10004ef, U+04ef, KEY_Cyrillic_u_macron, CYRILLIC SMALL LETTER U WITH MACRON */
0xd4, 0x01, 0x00, 0x00, 0x06, 0xa1, 0x00, 0x04, 0x52, 'K','E','Y','_','S','e','r','b','i','a','n','_','d','j','e',0, /* 20137, 0x6a1, U+0452, KEY_Serbian_dje, CYRILLIC SMALL LETTER DJE */
0x9d, 0xfd, 0x00, 0x00, 0x06, 0xa2, 0x00, 0x04, 0x53, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','g','j','e',0, /* 20164, 0x6a2, U+0453, KEY_Macedonia_gje, CYRILLIC SMALL LETTER GJE */
0xc1, 0x65, 0x00, 0x00, 0x06, 0xa3, 0x00, 0x04, 0x51, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','i','o',0, /* 20189, 0x6a3, U+0451, KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */
0xd2, 0x53, 0x00, 0x00, 0x06, 0xa4, 0x00, 0x04, 0x54, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','i','e',0, /* 20215, 0x6a4, U+0454, KEY_Ukrainian_ie, CYRILLIC SMALL LETTER UKRAINIAN IE */
0xe9, 0x55, 0x00, 0x00, 0x06, 0xa4, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','j','e',0, /* 20240, 0x6a4, KEY_Ukranian_je, deprecated */
0x9e, 0x03, 0x00, 0x00, 0x06, 0xa5, 0x00, 0x04, 0x55, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','d','s','e',0, /* 20267, 0x6a5, U+0455, KEY_Macedonia_dse, CYRILLIC SMALL LETTER DZE */
0xe8, 0xf7, 0x00, 0x00, 0x06, 0xa6, 0x00, 0x04, 0x56, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','i',0, /* 20292, 0x6a6, U+0456, KEY_Ukrainian_i, CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
0x74, 0x77, 0x00, 0x00, 0x06, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','i',0, /* 20316, 0x6a6, KEY_Ukranian_i, deprecated */
0xd2, 0x77, 0x00, 0x00, 0x06, 0xa7, 0x00, 0x04, 0x57, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','y','i',0, /* 20342, 0x6a7, U+0457, KEY_Ukrainian_yi, CYRILLIC SMALL LETTER YI */
0xe9, 0x77, 0x00, 0x00, 0x06, 0xa7, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','y','i',0, /* 20367, 0x6a7, KEY_Ukranian_yi, deprecated */
0xc1, 0x5d, 0x00, 0x00, 0x06, 0xa8, 0x00, 0x04, 0x58, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','j','e',0, /* 20392, 0x6a8, U+0458, KEY_Cyrillic_je, CYRILLIC SMALL LETTER JE */
0x69, 0xd5, 0x00, 0x00, 0x06, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','j','e',0, /* 20416, 0x6a8, KEY_Serbian_je, deprecated */
0x83, 0x31, 0x00, 0x00, 0x06, 0xa9, 0x00, 0x04, 0x59, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','l','j','e',0, /* 20442, 0x6a9, U+0459, KEY_Cyrillic_lje, CYRILLIC SMALL LETTER LJE */
0xd4, 0x21, 0x00, 0x00, 0x06, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','l','j','e',0, /* 20467, 0x6a9, KEY_Serbian_lje, deprecated */
0x83, 0x39, 0x00, 0x00, 0x06, 0xaa, 0x00, 0x04, 0x5a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','n','j','e',0, /* 20493, 0x6aa, U+045a, KEY_Cyrillic_nje, CYRILLIC SMALL LETTER NJE */
0xd4, 0x29, 0x00, 0x00, 0x06, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','n','j','e',0, /* 20518, 0x6aa, KEY_Serbian_nje, deprecated */
0xa9, 0x11, 0x00, 0x00, 0x06, 0xab, 0x00, 0x04, 0x5b, 'K','E','Y','_','S','e','r','b','i','a','n','_','t','s','h','e',0, /* 20544, 0x6ab, U+045b, KEY_Serbian_tshe, CYRILLIC SMALL LETTER TSHE */
0x9e, 0x0d, 0x00, 0x00, 0x06, 0xac, 0x00, 0x04, 0x5c, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','k','j','e',0, /* 20571, 0x6ac, U+045c, KEY_Macedonia_kje, CYRILLIC SMALL LETTER KJE */
0x12, 0x26, 0x00, 0x00, 0x06, 0xad, 0x00, 0x04, 0x91, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','g','h','e','_','w','i','t','h','_','u','p','t','u','r','n',0, /* 20610, 0x6ad, U+0491, KEY_Ukrainian_ghe_with_upturn, CYRILLIC SMALL LETTER GHE WITH UPTURN */
0x51, 0x3d, 0x00, 0x00, 0x06, 0xae, 0x00, 0x04, 0x5e, 'K','E','Y','_','B','y','e','l','o','r','u','s','s','i','a','n','_','s','h','o','r','t','u',0, /* 20643, 0x6ae, U+045e, KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */
0x06, 0xcd, 0x00, 0x00, 0x06, 0xaf, 0x00, 0x04, 0x5f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','d','z','h','e',0, /* 20670, 0x6af, U+045f, KEY_Cyrillic_dzhe, CYRILLIC SMALL LETTER DZHE */
0xd4, 0x21, 0x00, 0x00, 0x06, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','d','z','e',0, /* 20695, 0x6af, KEY_Serbian_dze, deprecated */
0xb0, 0x68, 0x00, 0x00, 0x06, 0xb0, 0x00, 0x21, 0x16, 'K','E','Y','_','n','u','m','e','r','o','s','i','g','n',0, /* 20719, 0x6b0, U+2116, KEY_numerosign, NUMERO SIGN */
0xd3, 0x21, 0x00, 0x00, 0x06, 0xb1, 0x00, 0x04, 0x02, 'K','E','Y','_','S','e','r','b','i','a','n','_','D','J','E',0, /* 20744, 0x6b1, U+0402, KEY_Serbian_DJE, CYRILLIC CAPITAL LETTER DJE */
0x9d, 0x1d, 0x00, 0x00, 0x06, 0xb2, 0x00, 0x04, 0x03, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','G','J','E',0, /* 20771, 0x6b2, U+0403, KEY_Macedonia_GJE, CYRILLIC CAPITAL LETTER GJE */
0xc1, 0x05, 0x00, 0x00, 0x06, 0xb3, 0x00, 0x04, 0x01, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','I','O',0, /* 20796, 0x6b3, U+0401, KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */
0xd1, 0xf3, 0x00, 0x00, 0x06, 0xb4, 0x00, 0x04, 0x04, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','I','E',0, /* 20822, 0x6b4, U+0404, KEY_Ukrainian_IE, CYRILLIC CAPITAL LETTER UKRAINIAN IE */
0xe8, 0xf5, 0x00, 0x00, 0x06, 0xb4, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','J','E',0, /* 20847, 0x6b4, KEY_Ukranian_JE, deprecated */
0x9d, 0x23, 0x00, 0x00, 0x06, 0xb5, 0x00, 0x04, 0x05, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','D','S','E',0, /* 20874, 0x6b5, U+0405, KEY_Macedonia_DSE, CYRILLIC CAPITAL LETTER DZE */
0xe8, 0xd7, 0x00, 0x00, 0x06, 0xb6, 0x00, 0x04, 0x06, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','I',0, /* 20899, 0x6b6, U+0406, KEY_Ukrainian_I, CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
0x74, 0x57, 0x00, 0x00, 0x06, 0xb6, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','I',0, /* 20923, 0x6b6, KEY_Ukranian_I, deprecated */
0xd2, 0x17, 0x00, 0x00, 0x06, 0xb7, 0x00, 0x04, 0x07, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','Y','I',0, /* 20949, 0x6b7, U+0407, KEY_Ukrainian_YI, CYRILLIC CAPITAL LETTER YI */
0xe9, 0x17, 0x00, 0x00, 0x06, 0xb7, 0x00, 0x00, 0x00, 'K','E','Y','_','U','k','r','a','n','i','a','n','_','Y','I',0, /* 20974, 0x6b7, KEY_Ukranian_YI, deprecated */
0xc0, 0xfd, 0x00, 0x00, 0x06, 0xb8, 0x00, 0x04, 0x08, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','J','E',0, /* 20999, 0x6b8, U+0408, KEY_Cyrillic_JE, CYRILLIC CAPITAL LETTER JE */
0x69, 0x75, 0x00, 0x00, 0x06, 0xb8, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','J','E',0, /* 21023, 0x6b8, KEY_Serbian_JE, deprecated */
0x82, 0x51, 0x00, 0x00, 0x06, 0xb9, 0x00, 0x04, 0x09, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','L','J','E',0, /* 21049, 0x6b9, U+0409, KEY_Cyrillic_LJE, CYRILLIC CAPITAL LETTER LJE */
0xd3, 0x41, 0x00, 0x00, 0x06, 0xb9, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','L','J','E',0, /* 21074, 0x6b9, KEY_Serbian_LJE, deprecated */
0x82, 0x59, 0x00, 0x00, 0x06, 0xba, 0x00, 0x04, 0x0a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','N','J','E',0, /* 21100, 0x6ba, U+040a, KEY_Cyrillic_NJE, CYRILLIC CAPITAL LETTER NJE */
0xd3, 0x49, 0x00, 0x00, 0x06, 0xba, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','N','J','E',0, /* 21125, 0x6ba, KEY_Serbian_NJE, deprecated */
0xa7, 0x31, 0x00, 0x00, 0x06, 0xbb, 0x00, 0x04, 0x0b, 'K','E','Y','_','S','e','r','b','i','a','n','_','T','S','H','E',0, /* 21151, 0x6bb, U+040b, KEY_Serbian_TSHE, CYRILLIC CAPITAL LETTER TSHE */
0x9d, 0x2d, 0x00, 0x00, 0x06, 0xbc, 0x00, 0x04, 0x0c, 'K','E','Y','_','M','a','c','e','d','o','n','i','a','_','K','J','E',0, /* 21178, 0x6bc, U+040c, KEY_Macedonia_KJE, CYRILLIC CAPITAL LETTER KJE */
0x1a, 0x46, 0x00, 0x00, 0x06, 0xbd, 0x00, 0x04, 0x90, 'K','E','Y','_','U','k','r','a','i','n','i','a','n','_','G','H','E','_','W','I','T','H','_','U','P','T','U','R','N',0, /* 21217, 0x6bd, U+0490, KEY_Ukrainian_GHE_WITH_UPTURN, CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
0x49, 0x5d, 0x00, 0x00, 0x06, 0xbe, 0x00, 0x04, 0x0e, 'K','E','Y','_','B','y','e','l','o','r','u','s','s','i','a','n','_','S','H','O','R','T','U',0, /* 21250, 0x6be, U+040e, KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */
0x04, 0xed, 0x00, 0x00, 0x06, 0xbf, 0x00, 0x04, 0x0f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','D','Z','H','E',0, /* 21277, 0x6bf, U+040f, KEY_Cyrillic_DZHE, CYRILLIC CAPITAL LETTER DZHE */
0xd3, 0x41, 0x00, 0x00, 0x06, 0xbf, 0x00, 0x00, 0x00, 'K','E','Y','_','S','e','r','b','i','a','n','_','D','Z','E',0, /* 21302, 0x6bf, KEY_Serbian_DZE, deprecated */
0xc1, 0x8b, 0x00, 0x00, 0x06, 0xc0, 0x00, 0x04, 0x4e, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','y','u',0, /* 21327, 0x6c0, U+044e, KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */
0x60, 0x73, 0x00, 0x00, 0x06, 0xc1, 0x00, 0x04, 0x30, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','a',0, /* 21351, 0x6c1, U+0430, KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */
0xc1, 0x4d, 0x00, 0x00, 0x06, 0xc2, 0x00, 0x04, 0x31, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','b','e',0, /* 21376, 0x6c2, U+0431, KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */
0x83, 0x63, 0x00, 0x00, 0x06, 0xc3, 0x00, 0x04, 0x46, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','t','s','e',0, /* 21402, 0x6c3, U+0446, KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */
0xc1, 0x51, 0x00, 0x00, 0x06, 0xc4, 0x00, 0x04, 0x34, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','d','e',0, /* 21427, 0x6c4, U+0434, KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */
0xc1, 0x5b, 0x00, 0x00, 0x06, 0xc5, 0x00, 0x04, 0x35, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','i','e',0, /* 21452, 0x6c5, U+0435, KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */
0xc1, 0x54, 0x00, 0x00, 0x06, 0xc6, 0x00, 0x04, 0x44, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','f',0, /* 21477, 0x6c6, U+0444, KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */
0x83, 0x19, 0x00, 0x00, 0x06, 0xc7, 0x00, 0x04, 0x33, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','g','h','e',0, /* 21503, 0x6c7, U+0433, KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */
0xc1, 0x55, 0x00, 0x00, 0x06, 0xc8, 0x00, 0x04, 0x45, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','h','a',0, /* 21528, 0x6c8, U+0445, KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */
0x60, 0x7b, 0x00, 0x00, 0x06, 0xc9, 0x00, 0x04, 0x38, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','i',0, /* 21552, 0x6c9, U+0438, KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */
0x1d, 0xb1, 0x00, 0x00, 0x06, 0xca, 0x00, 0x04, 0x39, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','h','o','r','t','i',0, /* 21581, 0x6ca, U+0439, KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */
0xc1, 0x5b, 0x00, 0x00, 0x06, 0xcb, 0x00, 0x04, 0x3a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','k','a',0, /* 21606, 0x6cb, U+043a, KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */
0xc1, 0x5a, 0x00, 0x00, 0x06, 0xcc, 0x00, 0x04, 0x3b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','l',0, /* 21631, 0x6cc, U+043b, KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */
0xc1, 0x5b, 0x00, 0x00, 0x06, 0xcd, 0x00, 0x04, 0x3c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','m',0, /* 21656, 0x6cd, U+043c, KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */
0xc1, 0x5c, 0x00, 0x00, 0x06, 0xce, 0x00, 0x04, 0x3d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','n',0, /* 21681, 0x6ce, U+043d, KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */
0x60, 0x81, 0x00, 0x00, 0x06, 0xcf, 0x00, 0x04, 0x3e, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','o',0, /* 21705, 0x6cf, U+043e, KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */
0xc1, 0x69, 0x00, 0x00, 0x06, 0xd0, 0x00, 0x04, 0x3f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','p','e',0, /* 21730, 0x6d0, U+043f, KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */
0xc1, 0x77, 0x00, 0x00, 0x06, 0xd1, 0x00, 0x04, 0x4f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','y','a',0, /* 21755, 0x6d1, U+044f, KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */
0xc1, 0x60, 0x00, 0x00, 0x06, 0xd2, 0x00, 0x04, 0x40, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','r',0, /* 21780, 0x6d2, U+0440, KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */
0xc1, 0x61, 0x00, 0x00, 0x06, 0xd3, 0x00, 0x04, 0x41, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e','s',0, /* 21805, 0x6d3, U+0441, KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */
0xc1, 0x71, 0x00, 0x00, 0x06, 0xd4, 0x00, 0x04, 0x42, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','t','e',0, /* 21830, 0x6d4, U+0442, KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */
0x60, 0x87, 0x00, 0x00, 0x06, 0xd5, 0x00, 0x04, 0x43, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','u',0, /* 21854, 0x6d5, U+0443, KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */
0x83, 0x65, 0x00, 0x00, 0x06, 0xd6, 0x00, 0x04, 0x36, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','z','h','e',0, /* 21880, 0x6d6, U+0436, KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */
0xc1, 0x75, 0x00, 0x00, 0x06, 0xd7, 0x00, 0x04, 0x32, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','v','e',0, /* 21905, 0x6d7, U+0432, KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */
0x78, 0xb8, 0x00, 0x00, 0x06, 0xd8, 0x00, 0x04, 0x4c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','o','f','t','s','i','g','n',0, /* 21936, 0x6d8, U+044c, KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */
0x07, 0x45, 0x00, 0x00, 0x06, 0xd9, 0x00, 0x04, 0x4b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','y','e','r','u',0, /* 21963, 0x6d9, U+044b, KEY_Cyrillic_yeru, CYRILLIC SMALL LETTER YERU */
0xc1, 0x7d, 0x00, 0x00, 0x06, 0xda, 0x00, 0x04, 0x37, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','z','e',0, /* 21988, 0x6da, U+0437, KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */
0x83, 0x45, 0x00, 0x00, 0x06, 0xdb, 0x00, 0x04, 0x48, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','h','a',0, /* 22014, 0x6db, U+0448, KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */
0x60, 0x77, 0x00, 0x00, 0x06, 0xdc, 0x00, 0x04, 0x4d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','e',0, /* 22038, 0x6dc, U+044d, KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */
0x0e, 0x4d, 0x00, 0x00, 0x06, 0xdd, 0x00, 0x04, 0x49, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','s','h','c','h','a',0, /* 22066, 0x6dd, U+0449, KEY_Cyrillic_shcha, CYRILLIC SMALL LETTER SHCHA */
0x83, 0x09, 0x00, 0x00, 0x06, 0xde, 0x00, 0x04, 0x47, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','c','h','e',0, /* 22092, 0x6de, U+0447, KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */
0x70, 0x38, 0x00, 0x00, 0x06, 0xdf, 0x00, 0x04, 0x4a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','h','a','r','d','s','i','g','n',0, /* 22123, 0x6df, U+044a, KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */
0xc1, 0x2b, 0x00, 0x00, 0x06, 0xe0, 0x00, 0x04, 0x2e, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Y','U',0, /* 22148, 0x6e0, U+042e, KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */
0x60, 0x53, 0x00, 0x00, 0x06, 0xe1, 0x00, 0x04, 0x10, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','A',0, /* 22172, 0x6e1, U+0410, KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */
0xc0, 0xed, 0x00, 0x00, 0x06, 0xe2, 0x00, 0x04, 0x11, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','B','E',0, /* 22197, 0x6e2, U+0411, KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */
0x82, 0x83, 0x00, 0x00, 0x06, 0xe3, 0x00, 0x04, 0x26, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','T','S','E',0, /* 22223, 0x6e3, U+0426, KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */
0xc0, 0xf1, 0x00, 0x00, 0x06, 0xe4, 0x00, 0x04, 0x14, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','D','E',0, /* 22248, 0x6e4, U+0414, KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */
0xc0, 0xfb, 0x00, 0x00, 0x06, 0xe5, 0x00, 0x04, 0x15, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','I','E',0, /* 22273, 0x6e5, U+0415, KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */
0xc0, 0xf4, 0x00, 0x00, 0x06, 0xe6, 0x00, 0x04, 0x24, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','F',0, /* 22298, 0x6e6, U+0424, KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */
0x82, 0x39, 0x00, 0x00, 0x06, 0xe7, 0x00, 0x04, 0x13, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','G','H','E',0, /* 22324, 0x6e7, U+0413, KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */
0xc0, 0xf5, 0x00, 0x00, 0x06, 0xe8, 0x00, 0x04, 0x25, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','H','A',0, /* 22349, 0x6e8, U+0425, KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */
0x60, 0x5b, 0x00, 0x00, 0x06, 0xe9, 0x00, 0x04, 0x18, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','I',0, /* 22373, 0x6e9, U+0418, KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */
0x15, 0xd1, 0x00, 0x00, 0x06, 0xea, 0x00, 0x04, 0x19, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','H','O','R','T','I',0, /* 22402, 0x6ea, U+0419, KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */
0xc0, 0xfb, 0x00, 0x00, 0x06, 0xeb, 0x00, 0x04, 0x1a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','K','A',0, /* 22427, 0x6eb, U+041a, KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */
0xc0, 0xfa, 0x00, 0x00, 0x06, 0xec, 0x00, 0x04, 0x1b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','L',0, /* 22452, 0x6ec, U+041b, KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */
0xc0, 0xfb, 0x00, 0x00, 0x06, 0xed, 0x00, 0x04, 0x1c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','M',0, /* 22477, 0x6ed, U+041c, KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */
0xc0, 0xfc, 0x00, 0x00, 0x06, 0xee, 0x00, 0x04, 0x1d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','N',0, /* 22502, 0x6ee, U+041d, KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */
0x60, 0x61, 0x00, 0x00, 0x06, 0xef, 0x00, 0x04, 0x1e, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','O',0, /* 22526, 0x6ef, U+041e, KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */
0xc1, 0x09, 0x00, 0x00, 0x06, 0xf0, 0x00, 0x04, 0x1f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','P','E',0, /* 22551, 0x6f0, U+041f, KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */
0xc1, 0x17, 0x00, 0x00, 0x06, 0xf1, 0x00, 0x04, 0x2f, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Y','A',0, /* 22576, 0x6f1, U+042f, KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */
0xc1, 0x00, 0x00, 0x00, 0x06, 0xf2, 0x00, 0x04, 0x20, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','R',0, /* 22601, 0x6f2, U+0420, KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */
0xc1, 0x01, 0x00, 0x00, 0x06, 0xf3, 0x00, 0x04, 0x21, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E','S',0, /* 22626, 0x6f3, U+0421, KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */
0xc1, 0x11, 0x00, 0x00, 0x06, 0xf4, 0x00, 0x04, 0x22, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','T','E',0, /* 22651, 0x6f4, U+0422, KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */
0x60, 0x67, 0x00, 0x00, 0x06, 0xf5, 0x00, 0x04, 0x23, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','U',0, /* 22675, 0x6f5, U+0423, KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */
0x82, 0x85, 0x00, 0x00, 0x06, 0xf6, 0x00, 0x04, 0x16, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Z','H','E',0, /* 22701, 0x6f6, U+0416, KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */
0xc1, 0x15, 0x00, 0x00, 0x06, 0xf7, 0x00, 0x04, 0x12, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','V','E',0, /* 22726, 0x6f7, U+0412, KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */
0x58, 0xd8, 0x00, 0x00, 0x06, 0xf8, 0x00, 0x04, 0x2c, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','O','F','T','S','I','G','N',0, /* 22757, 0x6f8, U+042c, KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */
0x05, 0x65, 0x00, 0x00, 0x06, 0xf9, 0x00, 0x04, 0x2b, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Y','E','R','U',0, /* 22784, 0x6f9, U+042b, KEY_Cyrillic_YERU, CYRILLIC CAPITAL LETTER YERU */
0xc1, 0x1d, 0x00, 0x00, 0x06, 0xfa, 0x00, 0x04, 0x17, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','Z','E',0, /* 22809, 0x6fa, U+0417, KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */
0x82, 0x65, 0x00, 0x00, 0x06, 0xfb, 0x00, 0x04, 0x28, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','H','A',0, /* 22835, 0x6fb, U+0428, KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */
0x60, 0x57, 0x00, 0x00, 0x06, 0xfc, 0x00, 0x04, 0x2d, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','E',0, /* 22859, 0x6fc, U+042d, KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */
0x0a, 0x6d, 0x00, 0x00, 0x06, 0xfd, 0x00, 0x04, 0x29, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','S','H','C','H','A',0, /* 22887, 0x6fd, U+0429, KEY_Cyrillic_SHCHA, CYRILLIC CAPITAL LETTER SHCHA */
0x82, 0x29, 0x00, 0x00, 0x06, 0xfe, 0x00, 0x04, 0x27, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','C','H','E',0, /* 22913, 0x6fe, U+0427, KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */
0x50, 0x58, 0x00, 0x00, 0x06, 0xff, 0x00, 0x04, 0x2a, 'K','E','Y','_','C','y','r','i','l','l','i','c','_','H','A','R','D','S','I','G','N',0, /* 22944, 0x6ff, U+042a, KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */
0xc0, 0x8c, 0x00, 0x00, 0x07, 0xa1, 0x00, 0x03, 0x86, 'K','E','Y','_','G','r','e','e','k','_','A','L','P','H','A','a','c','c','e','n','t',0, /* 22975, 0x7a1, U+0386, KEY_Greek_ALPHAaccent, GREEK CAPITAL LETTER ALPHA WITH TONOS */
0x6d, 0x4c, 0x00, 0x00, 0x07, 0xa2, 0x00, 0x03, 0x88, 'K','E','Y','_','G','r','e','e','k','_','E','P','S','I','L','O','N','a','c','c','e','n','t',0, /* 23008, 0x7a2, U+0388, KEY_Greek_EPSILONaccent, GREEK CAPITAL LETTER EPSILON WITH TONOS */
0xf9, 0x8c, 0x00, 0x00, 0x07, 0xa3, 0x00, 0x03, 0x89, 'K','E','Y','_','G','r','e','e','k','_','E','T','A','a','c','c','e','n','t',0, /* 23037, 0x7a3, U+0389, KEY_Greek_ETAaccent, GREEK CAPITAL LETTER ETA WITH TONOS */
0xf7, 0x8c, 0x00, 0x00, 0x07, 0xa4, 0x00, 0x03, 0x8a, 'K','E','Y','_','G','r','e','e','k','_','I','O','T','A','a','c','c','e','n','t',0, /* 23067, 0x7a4, U+038a, KEY_Greek_IOTAaccent, GREEK CAPITAL LETTER IOTA WITH TONOS */
0xe3, 0x39, 0x00, 0x00, 0x07, 0xa5, 0x00, 0x03, 0xaa, 'K','E','Y','_','G','r','e','e','k','_','I','O','T','A','d','i','e','r','e','s','i','s',0, /* 23099, 0x7a5, U+03aa, KEY_Greek_IOTAdieresis, GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
0xc4, 0xb9, 0x00, 0x00, 0x07, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','G','r','e','e','k','_','I','O','T','A','d','i','a','e','r','e','s','i','s',0, /* 23132, 0x7a5, KEY_Greek_IOTAdiaeresis, old typo */
0xc7, 0x4c, 0x00, 0x00, 0x07, 0xa7, 0x00, 0x03, 0x8c, 'K','E','Y','_','G','r','e','e','k','_','O','M','I','C','R','O','N','a','c','c','e','n','t',0, /* 23165, 0x7a7, U+038c, KEY_Greek_OMICRONaccent, GREEK CAPITAL LETTER OMICRON WITH TONOS */
0x6d, 0x4c, 0x00, 0x00, 0x07, 0xa8, 0x00, 0x03, 0x8e, 'K','E','Y','_','G','r','e','e','k','_','U','P','S','I','L','O','N','a','c','c','e','n','t',0, /* 23198, 0x7a8, U+038e, KEY_Greek_UPSILONaccent, GREEK CAPITAL LETTER UPSILON WITH TONOS */
0xba, 0x39, 0x00, 0x00, 0x07, 0xa9, 0x00, 0x03, 0xab, 'K','E','Y','_','G','r','e','e','k','_','U','P','S','I','L','O','N','d','i','e','r','e','s','i','s',0, /* 23233, 0x7a9, U+03ab, KEY_Greek_UPSILONdieresis, GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
0xef, 0x0c, 0x00, 0x00, 0x07, 0xab, 0x00, 0x03, 0x8f, 'K','E','Y','_','G','r','e','e','k','_','O','M','E','G','A','a','c','c','e','n','t',0, /* 23264, 0x7ab, U+038f, KEY_Greek_OMEGAaccent, GREEK CAPITAL LETTER OMEGA WITH TONOS */
0xf2, 0x39, 0x00, 0x00, 0x07, 0xae, 0x00, 0x03, 0x85, 'K','E','Y','_','G','r','e','e','k','_','a','c','c','e','n','t','d','i','e','r','e','s','i','s',0, /* 23298, 0x7ae, U+0385, KEY_Greek_accentdieresis, GREEK DIALYTIKA TONOS */
0x9c, 0x1c, 0x00, 0x00, 0x07, 0xaf, 0x00, 0x20, 0x15, 'K','E','Y','_','G','r','e','e','k','_','h','o','r','i','z','b','a','r',0, /* 23326, 0x7af, U+2015, KEY_Greek_horizbar, HORIZONTAL BAR */
0xb8, 0x8c, 0x00, 0x00, 0x07, 0xb1, 0x00, 0x03, 0xac, 'K','E','Y','_','G','r','e','e','k','_','a','l','p','h','a','a','c','c','e','n','t',0, /* 23357, 0x7b1, U+03ac, KEY_Greek_alphaaccent, GREEK SMALL LETTER ALPHA WITH TONOS */
0x65, 0x4c, 0x00, 0x00, 0x07, 0xb2, 0x00, 0x03, 0xad, 'K','E','Y','_','G','r','e','e','k','_','e','p','s','i','l','o','n','a','c','c','e','n','t',0, /* 23390, 0x7b2, U+03ad, KEY_Greek_epsilonaccent, GREEK SMALL LETTER EPSILON WITH TONOS */
0x31, 0x8c, 0x00, 0x00, 0x07, 0xb3, 0x00, 0x03, 0xae, 'K','E','Y','_','G','r','e','e','k','_','e','t','a','a','c','c','e','n','t',0, /* 23419, 0x7b3, U+03ae, KEY_Greek_etaaccent, GREEK SMALL LETTER ETA WITH TONOS */
0x6f, 0x8c, 0x00, 0x00, 0x07, 0xb4, 0x00, 0x03, 0xaf, 'K','E','Y','_','G','r','e','e','k','_','i','o','t','a','a','c','c','e','n','t',0, /* 23449, 0x7b4, U+03af, KEY_Greek_iotaaccent, GREEK SMALL LETTER IOTA WITH TONOS */
0xc3, 0x39, 0x00, 0x00, 0x07, 0xb5, 0x00, 0x03, 0xca, 'K','E','Y','_','G','r','e','e','k','_','i','o','t','a','d','i','e','r','e','s','i','s',0, /* 23481, 0x7b5, U+03ca, KEY_Greek_iotadieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA */
0xf2, 0x39, 0x00, 0x00, 0x07, 0xb6, 0x00, 0x03, 0x90, 'K','E','Y','_','G','r','e','e','k','_','i','o','t','a','a','c','c','e','n','t','d','i','e','r','e','s','i','s',0, /* 23519, 0x7b6, U+0390, KEY_Greek_iotaaccentdieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
0xbf, 0x4c, 0x00, 0x00, 0x07, 0xb7, 0x00, 0x03, 0xcc, 'K','E','Y','_','G','r','e','e','k','_','o','m','i','c','r','o','n','a','c','c','e','n','t',0, /* 23552, 0x7b7, U+03cc, KEY_Greek_omicronaccent, GREEK SMALL LETTER OMICRON WITH TONOS */
0x65, 0x4c, 0x00, 0x00, 0x07, 0xb8, 0x00, 0x03, 0xcd, 'K','E','Y','_','G','r','e','e','k','_','u','p','s','i','l','o','n','a','c','c','e','n','t',0, /* 23585, 0x7b8, U+03cd, KEY_Greek_upsilonaccent, GREEK SMALL LETTER UPSILON WITH TONOS */
0x9a, 0x39, 0x00, 0x00, 0x07, 0xb9, 0x00, 0x03, 0xcb, 'K','E','Y','_','G','r','e','e','k','_','u','p','s','i','l','o','n','d','i','e','r','e','s','i','s',0, /* 23620, 0x7b9, U+03cb, KEY_Greek_upsilondieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
0xb2, 0x39, 0x00, 0x00, 0x07, 0xba, 0x00, 0x03, 0xb0, 'K','E','Y','_','G','r','e','e','k','_','u','p','s','i','l','o','n','a','c','c','e','n','t','d','i','e','r','e','s','i','s',0, /* 23661, 0x7ba, U+03b0, KEY_Greek_upsilonaccentdieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
0xe7, 0x0c, 0x00, 0x00, 0x07, 0xbb, 0x00, 0x03, 0xce, 'K','E','Y','_','G','r','e','e','k','_','o','m','e','g','a','a','c','c','e','n','t',0, /* 23692, 0x7bb, U+03ce, KEY_Greek_omegaaccent, GREEK SMALL LETTER OMEGA WITH TONOS */
0xae, 0xa1, 0x00, 0x00, 0x07, 0xc1, 0x00, 0x03, 0x91, 'K','E','Y','_','G','r','e','e','k','_','A','L','P','H','A',0, /* 23717, 0x7c1, U+0391, KEY_Greek_ALPHA, GREEK CAPITAL LETTER ALPHA */
0x57, 0x1d, 0x00, 0x00, 0x07, 0xc2, 0x00, 0x03, 0x92, 'K','E','Y','_','G','r','e','e','k','_','B','E','T','A',0, /* 23741, 0x7c2, U+0392, KEY_Greek_BETA, GREEK CAPITAL LETTER BETA */
0xae, 0xa7, 0x00, 0x00, 0x07, 0xc3, 0x00, 0x03, 0x93, 'K','E','Y','_','G','r','e','e','k','_','G','A','M','M','A',0, /* 23766, 0x7c3, U+0393, KEY_Greek_GAMMA, GREEK CAPITAL LETTER GAMMA */
0xae, 0xa1, 0x00, 0x00, 0x07, 0xc4, 0x00, 0x03, 0x94, 'K','E','Y','_','G','r','e','e','k','_','D','E','L','T','A',0, /* 23791, 0x7c4, U+0394, KEY_Greek_DELTA, GREEK CAPITAL LETTER DELTA */
0xbd, 0x54, 0x00, 0x00, 0x07, 0xc5, 0x00, 0x03, 0x95, 'K','E','Y','_','G','r','e','e','k','_','E','P','S','I','L','O','N',0, /* 23818, 0x7c5, U+0395, KEY_Greek_EPSILON, GREEK CAPITAL LETTER EPSILON */
0x57, 0xdd, 0x00, 0x00, 0x07, 0xc6, 0x00, 0x03, 0x96, 'K','E','Y','_','G','r','e','e','k','_','Z','E','T','A',0, /* 23842, 0x7c6, U+0396, KEY_Greek_ZETA, GREEK CAPITAL LETTER ZETA */
0xab, 0x85, 0x00, 0x00, 0x07, 0xc7, 0x00, 0x03, 0x97, 'K','E','Y','_','G','r','e','e','k','_','E','T','A',0, /* 23865, 0x7c7, U+0397, KEY_Greek_ETA, GREEK CAPITAL LETTER ETA */
0xaf, 0x9d, 0x00, 0x00, 0x07, 0xc8, 0x00, 0x03, 0x98, 'K','E','Y','_','G','r','e','e','k','_','T','H','E','T','A',0, /* 23890, 0x7c8, U+0398, KEY_Greek_THETA, GREEK CAPITAL LETTER THETA */
0x57, 0x7d, 0x00, 0x00, 0x07, 0xc9, 0x00, 0x03, 0x99, 'K','E','Y','_','G','r','e','e','k','_','I','O','T','A',0, /* 23914, 0x7c9, U+0399, KEY_Greek_IOTA, GREEK CAPITAL LETTER IOTA */
0xae, 0xf9, 0x00, 0x00, 0x07, 0xca, 0x00, 0x03, 0x9a, 'K','E','Y','_','G','r','e','e','k','_','K','A','P','P','A',0, /* 23939, 0x7ca, U+039a, KEY_Greek_KAPPA, GREEK CAPITAL LETTER KAPPA */
0xae, 0xe5, 0x00, 0x00, 0x07, 0xcb, 0x00, 0x03, 0x9b, 'K','E','Y','_','G','r','e','e','k','_','L','A','M','D','A',0, /* 23964, 0x7cb, U+039b, KEY_Greek_LAMDA, GREEK CAPITAL LETTER LAMDA */
0x5e, 0x09, 0x00, 0x00, 0x07, 0xcb, 0x00, 0x03, 0x9b, 'K','E','Y','_','G','r','e','e','k','_','L','A','M','B','D','A',0, /* 23990, 0x7cb, U+039b, KEY_Greek_LAMBDA, GREEK CAPITAL LETTER LAMDA */
0xd5, 0xb3, 0x00, 0x00, 0x07, 0xcc, 0x00, 0x03, 0x9c, 'K','E','Y','_','G','r','e','e','k','_','M','U',0, /* 24012, 0x7cc, U+039c, KEY_Greek_MU, GREEK CAPITAL LETTER MU */
0xd5, 0xb5, 0x00, 0x00, 0x07, 0xcd, 0x00, 0x03, 0x9d, 'K','E','Y','_','G','r','e','e','k','_','N','U',0, /* 24034, 0x7cd, U+039d, KEY_Greek_NU, GREEK CAPITAL LETTER NU */
0xd5, 0xbd, 0x00, 0x00, 0x07, 0xce, 0x00, 0x03, 0x9e, 'K','E','Y','_','G','r','e','e','k','_','X','I',0, /* 24056, 0x7ce, U+039e, KEY_Greek_XI, GREEK CAPITAL LETTER XI */
0xbe, 0xbc, 0x00, 0x00, 0x07, 0xcf, 0x00, 0x03, 0x9f, 'K','E','Y','_','G','r','e','e','k','_','O','M','I','C','R','O','N',0, /* 24083, 0x7cf, U+039f, KEY_Greek_OMICRON, GREEK CAPITAL LETTER OMICRON */
0xd5, 0xad, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x03, 0xa0, 'K','E','Y','_','G','r','e','e','k','_','P','I',0, /* 24105, 0x7d0, U+03a0, KEY_Greek_PI, GREEK CAPITAL LETTER PI */
0xab, 0xaf, 0x00, 0x00, 0x07, 0xd1, 0x00, 0x03, 0xa1, 'K','E','Y','_','G','r','e','e','k','_','R','H','O',0, /* 24128, 0x7d1, U+03a1, KEY_Greek_RHO, GREEK CAPITAL LETTER RHO */
0xaf, 0x8f, 0x00, 0x00, 0x07, 0xd2, 0x00, 0x03, 0xa3, 'K','E','Y','_','G','r','e','e','k','_','S','I','G','M','A',0, /* 24153, 0x7d2, U+03a3, KEY_Greek_SIGMA, GREEK CAPITAL LETTER SIGMA */
0xab, 0xaf, 0x00, 0x00, 0x07, 0xd4, 0x00, 0x03, 0xa4, 'K','E','Y','_','G','r','e','e','k','_','T','A','U',0, /* 24176, 0x7d4, U+03a4, KEY_Greek_TAU, GREEK CAPITAL LETTER TAU */
0xc1, 0x54, 0x00, 0x00, 0x07, 0xd5, 0x00, 0x03, 0xa5, 'K','E','Y','_','G','r','e','e','k','_','U','P','S','I','L','O','N',0, /* 24203, 0x7d5, U+03a5, KEY_Greek_UPSILON, GREEK CAPITAL LETTER UPSILON */
0xab, 0xa1, 0x00, 0x00, 0x07, 0xd6, 0x00, 0x03, 0xa6, 'K','E','Y','_','G','r','e','e','k','_','P','H','I',0, /* 24226, 0x7d6, U+03a6, KEY_Greek_PHI, GREEK CAPITAL LETTER PHI */
0xab, 0x6d, 0x00, 0x00, 0x07, 0xd7, 0x00, 0x03, 0xa7, 'K','E','Y','_','G','r','e','e','k','_','C','H','I',0, /* 24249, 0x7d7, U+03a7, KEY_Greek_CHI, GREEK CAPITAL LETTER CHI */
0xab, 0xb7, 0x00, 0x00, 0x07, 0xd8, 0x00, 0x03, 0xa8, 'K','E','Y','_','G','r','e','e','k','_','P','S','I',0, /* 24272, 0x7d8, U+03a8, KEY_Greek_PSI, GREEK CAPITAL LETTER PSI */
0xaf, 0x5b, 0x00, 0x00, 0x07, 0xd9, 0x00, 0x03, 0xa9, 'K','E','Y','_','G','r','e','e','k','_','O','M','E','G','A',0, /* 24297, 0x7d9, U+03a9, KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */
0xb2, 0x81, 0x00, 0x00, 0x07, 0xe1, 0x00, 0x03, 0xb1, 'K','E','Y','_','G','r','e','e','k','_','a','l','p','h','a',0, /* 24322, 0x7e1, U+03b1, KEY_Greek_alpha, GREEK SMALL LETTER ALPHA */
0x58, 0xfd, 0x00, 0x00, 0x07, 0xe2, 0x00, 0x03, 0xb2, 'K','E','Y','_','G','r','e','e','k','_','b','e','t','a',0, /* 24346, 0x7e2, U+03b2, KEY_Greek_beta, GREEK SMALL LETTER BETA */
0xb2, 0x87, 0x00, 0x00, 0x07, 0xe3, 0x00, 0x03, 0xb3, 'K','E','Y','_','G','r','e','e','k','_','g','a','m','m','a',0, /* 24371, 0x7e3, U+03b3, KEY_Greek_gamma, GREEK SMALL LETTER GAMMA */
0xb2, 0x81, 0x00, 0x00, 0x07, 0xe4, 0x00, 0x03, 0xb4, 'K','E','Y','_','G','r','e','e','k','_','d','e','l','t','a',0, /* 24396, 0x7e4, U+03b4, KEY_Greek_delta, GREEK SMALL LETTER DELTA */
0xcd, 0x34, 0x00, 0x00, 0x07, 0xe5, 0x00, 0x03, 0xb5, 'K','E','Y','_','G','r','e','e','k','_','e','p','s','i','l','o','n',0, /* 24423, 0x7e5, U+03b5, KEY_Greek_epsilon, GREEK SMALL LETTER EPSILON */
0x59, 0xbd, 0x00, 0x00, 0x07, 0xe6, 0x00, 0x03, 0xb6, 'K','E','Y','_','G','r','e','e','k','_','z','e','t','a',0, /* 24447, 0x7e6, U+03b6, KEY_Greek_zeta, GREEK SMALL LETTER ZETA */
0xac, 0x65, 0x00, 0x00, 0x07, 0xe7, 0x00, 0x03, 0xb7, 'K','E','Y','_','G','r','e','e','k','_','e','t','a',0, /* 24470, 0x7e7, U+03b7, KEY_Greek_eta, GREEK SMALL LETTER ETA */
0xb3, 0x7d, 0x00, 0x00, 0x07, 0xe8, 0x00, 0x03, 0xb8, 'K','E','Y','_','G','r','e','e','k','_','t','h','e','t','a',0, /* 24495, 0x7e8, U+03b8, KEY_Greek_theta, GREEK SMALL LETTER THETA */
0x59, 0x5d, 0x00, 0x00, 0x07, 0xe9, 0x00, 0x03, 0xb9, 'K','E','Y','_','G','r','e','e','k','_','i','o','t','a',0, /* 24519, 0x7e9, U+03b9, KEY_Greek_iota, GREEK SMALL LETTER IOTA */
0xb2, 0xd9, 0x00, 0x00, 0x07, 0xea, 0x00, 0x03, 0xba, 'K','E','Y','_','G','r','e','e','k','_','k','a','p','p','a',0, /* 24544, 0x7ea, U+03ba, KEY_Greek_kappa, GREEK SMALL LETTER KAPPA */
0xb2, 0xc5, 0x00, 0x00, 0x07, 0xeb, 0x00, 0x03, 0xbb, 'K','E','Y','_','G','r','e','e','k','_','l','a','m','d','a',0, /* 24569, 0x7eb, U+03bb, KEY_Greek_lamda, GREEK SMALL LETTER LAMDA */
0x65, 0xe9, 0x00, 0x00, 0x07, 0xeb, 0x00, 0x03, 0xbb, 'K','E','Y','_','G','r','e','e','k','_','l','a','m','b','d','a',0, /* 24595, 0x7eb, U+03bb, KEY_Greek_lambda, GREEK SMALL LETTER LAMDA */
0xd6, 0x13, 0x00, 0x00, 0x07, 0xec, 0x00, 0x03, 0xbc, 'K','E','Y','_','G','r','e','e','k','_','m','u',0, /* 24617, 0x7ec, U+03bc, KEY_Greek_mu, GREEK SMALL LETTER MU */
0xd6, 0x15, 0x00, 0x00, 0x07, 0xed, 0x00, 0x03, 0xbd, 'K','E','Y','_','G','r','e','e','k','_','n','u',0, /* 24639, 0x7ed, U+03bd, KEY_Greek_nu, GREEK SMALL LETTER NU */
0xd6, 0x1d, 0x00, 0x00, 0x07, 0xee, 0x00, 0x03, 0xbe, 'K','E','Y','_','G','r','e','e','k','_','x','i',0, /* 24661, 0x7ee, U+03be, KEY_Greek_xi, GREEK SMALL LETTER XI */
0xce, 0x9c, 0x00, 0x00, 0x07, 0xef, 0x00, 0x03, 0xbf, 'K','E','Y','_','G','r','e','e','k','_','o','m','i','c','r','o','n',0, /* 24688, 0x7ef, U+03bf, KEY_Greek_omicron, GREEK SMALL LETTER OMICRON */
0xd6, 0x0d, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x03, 0xc0, 'K','E','Y','_','G','r','e','e','k','_','p','i',0, /* 24710, 0x7f0, U+03c0, KEY_Greek_pi, GREEK SMALL LETTER PI */
0xac, 0x8f, 0x00, 0x00, 0x07, 0xf1, 0x00, 0x03, 0xc1, 'K','E','Y','_','G','r','e','e','k','_','r','h','o',0, /* 24733, 0x7f1, U+03c1, KEY_Greek_rho, GREEK SMALL LETTER RHO */
0xb3, 0x6f, 0x00, 0x00, 0x07, 0xf2, 0x00, 0x03, 0xc3, 'K','E','Y','_','G','r','e','e','k','_','s','i','g','m','a',0, /* 24758, 0x7f2, U+03c3, KEY_Greek_sigma, GREEK SMALL LETTER SIGMA */
0x71, 0x4f, 0x00, 0x00, 0x07, 0xf3, 0x00, 0x03, 0xc2, 'K','E','Y','_','G','r','e','e','k','_','f','i','n','a','l','s','m','a','l','l','s','i','g','m','a',0, /* 24793, 0x7f3, U+03c2, KEY_Greek_finalsmallsigma, GREEK SMALL LETTER FINAL SIGMA */
0xac, 0x8f, 0x00, 0x00, 0x07, 0xf4, 0x00, 0x03, 0xc4, 'K','E','Y','_','G','r','e','e','k','_','t','a','u',0, /* 24816, 0x7f4, U+03c4, KEY_Greek_tau, GREEK SMALL LETTER TAU */
0xd1, 0x34, 0x00, 0x00, 0x07, 0xf5, 0x00, 0x03, 0xc5, 'K','E','Y','_','G','r','e','e','k','_','u','p','s','i','l','o','n',0, /* 24843, 0x7f5, U+03c5, KEY_Greek_upsilon, GREEK SMALL LETTER UPSILON */
0xac, 0x81, 0x00, 0x00, 0x07, 0xf6, 0x00, 0x03, 0xc6, 'K','E','Y','_','G','r','e','e','k','_','p','h','i',0, /* 24866, 0x7f6, U+03c6, KEY_Greek_phi, GREEK SMALL LETTER PHI */
0xac, 0x4d, 0x00, 0x00, 0x07, 0xf7, 0x00, 0x03, 0xc7, 'K','E','Y','_','G','r','e','e','k','_','c','h','i',0, /* 24889, 0x7f7, U+03c7, KEY_Greek_chi, GREEK SMALL LETTER CHI */
0xac, 0x97, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x03, 0xc8, 'K','E','Y','_','G','r','e','e','k','_','p','s','i',0, /* 24912, 0x7f8, U+03c8, KEY_Greek_psi, GREEK SMALL LETTER PSI */
0xb3, 0x3b, 0x00, 0x00, 0x07, 0xf9, 0x00, 0x03, 0xc9, 'K','E','Y','_','G','r','e','e','k','_','o','m','e','g','a',0, /* 24937, 0x7f9, U+03c9, KEY_Greek_omega, GREEK SMALL LETTER OMEGA */
0x68, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','G','r','e','e','k','_','s','w','i','t','c','h',0, /* 24963, 0xff7e, KEY_Greek_switch, Alias for mode_switch */
0x36, 0xe2, 0x00, 0x00, 0x08, 0xa1, 0x00, 0x23, 0xb7, 'K','E','Y','_','l','e','f','t','r','a','d','i','c','a','l',0, /* 24988, 0x8a1, U+23b7, KEY_leftradical, RADICAL SYMBOL BOTTOM */
0x7e, 0xe2, 0x00, 0x00, 0x08, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','t','o','p','l','e','f','t','r','a','d','i','c','a','l',0, /* 25016, 0x8a2, KEY_topleftradical, (U+250C BOX DRAWINGS LIGHT DOWN AND RIGHT) */
0x28, 0x48, 0x00, 0x00, 0x08, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','h','o','r','i','z','c','o','n','n','e','c','t','o','r',0, /* 25044, 0x8a3, KEY_horizconnector, (U+2500 BOX DRAWINGS LIGHT HORIZONTAL) */
0x70, 0xfe, 0x00, 0x00, 0x08, 0xa4, 0x00, 0x23, 0x20, 'K','E','Y','_','t','o','p','i','n','t','e','g','r','a','l',0, /* 25069, 0x8a4, U+2320, KEY_topintegral, TOP HALF INTEGRAL */
0x2c, 0xfe, 0x00, 0x00, 0x08, 0xa5, 0x00, 0x23, 0x21, 'K','E','Y','_','b','o','t','i','n','t','e','g','r','a','l',0, /* 25094, 0x8a5, U+2321, KEY_botintegral, BOTTOM HALF INTEGRAL */
0xa8, 0x48, 0x00, 0x00, 0x08, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','v','e','r','t','c','o','n','n','e','c','t','o','r',0, /* 25121, 0x8a6, KEY_vertconnector, (U+2502 BOX DRAWINGS LIGHT VERTICAL) */
0x06, 0x52, 0x00, 0x00, 0x08, 0xa7, 0x00, 0x23, 0xa1, 'K','E','Y','_','t','o','p','l','e','f','t','s','q','b','r','a','c','k','e','t',0, /* 25151, 0x8a7, U+23a1, KEY_topleftsqbracket, LEFT SQUARE BRACKET UPPER CORNER */
0x86, 0x52, 0x00, 0x00, 0x08, 0xa8, 0x00, 0x23, 0xa3, 'K','E','Y','_','b','o','t','l','e','f','t','s','q','b','r','a','c','k','e','t',0, /* 25181, 0x8a8, U+23a3, KEY_botleftsqbracket, LEFT SQUARE BRACKET LOWER CORNER */
0xee, 0x52, 0x00, 0x00, 0x08, 0xa9, 0x00, 0x23, 0xa4, 'K','E','Y','_','t','o','p','r','i','g','h','t','s','q','b','r','a','c','k','e','t',0, /* 25212, 0x8a9, U+23a4, KEY_toprightsqbracket, RIGHT SQUARE BRACKET UPPER CORNER */
0xee, 0x52, 0x00, 0x00, 0x08, 0xaa, 0x00, 0x23, 0xa6, 'K','E','Y','_','b','o','t','r','i','g','h','t','s','q','b','r','a','c','k','e','t',0, /* 25243, 0x8aa, U+23a6, KEY_botrightsqbracket, RIGHT SQUARE BRACKET LOWER CORNER */
0xbf, 0x83, 0x00, 0x00, 0x08, 0xab, 0x00, 0x23, 0x9b, 'K','E','Y','_','t','o','p','l','e','f','t','p','a','r','e','n','s',0, /* 25270, 0x8ab, U+239b, KEY_topleftparens, LEFT PARENTHESIS UPPER HOOK */
0xaf, 0x83, 0x00, 0x00, 0x08, 0xac, 0x00, 0x23, 0x9d, 'K','E','Y','_','b','o','t','l','e','f','t','p','a','r','e','n','s',0, /* 25297, 0x8ac, U+239d, KEY_botleftparens, LEFT PARENTHESIS LOWER HOOK */
0x9c, 0x83, 0x00, 0x00, 0x08, 0xad, 0x00, 0x23, 0x9e, 'K','E','Y','_','t','o','p','r','i','g','h','t','p','a','r','e','n','s',0, /* 25325, 0x8ad, U+239e, KEY_toprightparens, RIGHT PARENTHESIS UPPER HOOK */
0x7c, 0x83, 0x00, 0x00, 0x08, 0xae, 0x00, 0x23, 0xa0, 'K','E','Y','_','b','o','t','r','i','g','h','t','p','a','r','e','n','s',0, /* 25353, 0x8ae, U+23a0, KEY_botrightparens, RIGHT PARENTHESIS LOWER HOOK */
0x1e, 0x7f, 0x00, 0x00, 0x08, 0xaf, 0x00, 0x23, 0xa8, 'K','E','Y','_','l','e','f','t','m','i','d','d','l','e','c','u','r','l','y','b','r','a','c','e',0, /* 25387, 0x8af, U+23a8, KEY_leftmiddlecurlybrace, LEFT CURLY BRACKET MIDDLE PIECE */
0x1e, 0x7f, 0x00, 0x00, 0x08, 0xb0, 0x00, 0x23, 0xac, 'K','E','Y','_','r','i','g','h','t','m','i','d','d','l','e','c','u','r','l','y','b','r','a','c','e',0, /* 25422, 0x8b0, U+23ac, KEY_rightmiddlecurlybrace, RIGHT CURLY BRACKET MIDDLE PIECE */
0x0b, 0x00, 0x00, 0x00, 0x08, 0xb1, 0x00, 0x00, 0x00, 'K','E','Y','_','t','o','p','l','e','f','t','s','u','m','m','a','t','i','o','n',0, /* 25452, 0x8b1, KEY_topleftsummation */
0x8b, 0x00, 0x00, 0x00, 0x08, 0xb2, 0x00, 0x00, 0x00, 'K','E','Y','_','b','o','t','l','e','f','t','s','u','m','m','a','t','i','o','n',0, /* 25482, 0x8b2, KEY_botleftsummation */
0xd0, 0x48, 0x00, 0x00, 0x08, 0xb3, 0x00, 0x00, 0x00, 'K','E','Y','_','t','o','p','v','e','r','t','s','u','m','m','a','t','i','o','n','c','o','n','n','e','c','t','o','r',0, /* 25521, 0x8b3, KEY_topvertsummationconnector */
0xd0, 0x48, 0x00, 0x00, 0x08, 0xb4, 0x00, 0x00, 0x00, 'K','E','Y','_','b','o','t','v','e','r','t','s','u','m','m','a','t','i','o','n','c','o','n','n','e','c','t','o','r',0, /* 25560, 0x8b4, KEY_botvertsummationconnector */
0xf3, 0x00, 0x00, 0x00, 0x08, 0xb5, 0x00, 0x00, 0x00, 'K','E','Y','_','t','o','p','r','i','g','h','t','s','u','m','m','a','t','i','o','n',0, /* 25591, 0x8b5, KEY_toprightsummation */
0xf3, 0x00, 0x00, 0x00, 0x08, 0xb6, 0x00, 0x00, 0x00, 'K','E','Y','_','b','o','t','r','i','g','h','t','s','u','m','m','a','t','i','o','n',0, /* 25622, 0x8b6, KEY_botrightsummation */
0x1d, 0x00, 0x00, 0x00, 0x08, 0xb7, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','m','i','d','d','l','e','s','u','m','m','a','t','i','o','n',0, /* 25656, 0x8b7, KEY_rightmiddlesummation */
0x14, 0xda, 0x00, 0x00, 0x08, 0xbc, 0x00, 0x22, 0x64, 'K','E','Y','_','l','e','s','s','t','h','a','n','e','q','u','a','l',0, /* 25683, 0x8bc, U+2264, KEY_lessthanequal, LESS-THAN OR EQUAL TO */
0xeb, 0x1a, 0x00, 0x00, 0x08, 0xbd, 0x00, 0x22, 0x60, 'K','E','Y','_','n','o','t','e','q','u','a','l',0, /* 25705, 0x8bd, U+2260, KEY_notequal, NOT EQUAL TO */
0xa2, 0xda, 0x00, 0x00, 0x08, 0xbe, 0x00, 0x22, 0x65, 'K','E','Y','_','g','r','e','a','t','e','r','t','h','a','n','e','q','u','a','l',0, /* 25735, 0x8be, U+2265, KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */
0xe7, 0xfe, 0x00, 0x00, 0x08, 0xbf, 0x00, 0x22, 0x2b, 'K','E','Y','_','i','n','t','e','g','r','a','l',0, /* 25757, 0x8bf, U+222b, KEY_integral, INTEGRAL */
0xd6, 0x05, 0x00, 0x00, 0x08, 0xc0, 0x00, 0x22, 0x34, 'K','E','Y','_','t','h','e','r','e','f','o','r','e',0, /* 25780, 0x8c0, U+2234, KEY_therefore, THEREFORE */
0xd6, 0xc0, 0x00, 0x00, 0x08, 0xc1, 0x00, 0x22, 0x1d, 'K','E','Y','_','v','a','r','i','a','t','i','o','n',0, /* 25803, 0x8c1, U+221d, KEY_variation, PROPORTIONAL TO */
0xe6, 0xc5, 0x00, 0x00, 0x08, 0xc2, 0x00, 0x22, 0x1e, 'K','E','Y','_','i','n','f','i','n','i','t','y',0, /* 25825, 0x8c2, U+221e, KEY_infinity, INFINITY */
0x9c, 0x49, 0x00, 0x00, 0x08, 0xc5, 0x00, 0x22, 0x07, 'K','E','Y','_','n','a','b','l','a',0, /* 25844, 0x8c5, U+2207, KEY_nabla, NABLA */
0x2c, 0x89, 0x00, 0x00, 0x08, 0xc8, 0x00, 0x22, 0x3c, 'K','E','Y','_','a','p','p','r','o','x','i','m','a','t','e',0, /* 25869, 0x8c8, U+223c, KEY_approximate, TILDE OPERATOR */
0xb8, 0x5a, 0x00, 0x00, 0x08, 0xc9, 0x00, 0x22, 0x43, 'K','E','Y','_','s','i','m','i','l','a','r','e','q','u','a','l',0, /* 25895, 0x8c9, U+2243, KEY_similarequal, ASYMPTOTICALLY EQUAL TO */
0xe6, 0x3c, 0x00, 0x00, 0x08, 0xcd, 0x00, 0x21, 0xd4, 'K','E','Y','_','i','f','o','n','l','y','i','f',0, /* 25917, 0x8cd, U+21d4, KEY_ifonlyif, LEFT RIGHT DOUBLE ARROW */
0x73, 0xa1, 0x00, 0x00, 0x08, 0xce, 0x00, 0x21, 0xd2, 'K','E','Y','_','i','m','p','l','i','e','s',0, /* 25938, 0x8ce, U+21d2, KEY_implies, RIGHTWARDS DOUBLE ARROW */
0xc9, 0x42, 0x00, 0x00, 0x08, 0xcf, 0x00, 0x22, 0x61, 'K','E','Y','_','i','d','e','n','t','i','c','a','l',0, /* 25961, 0x8cf, U+2261, KEY_identical, IDENTICAL TO */
0x73, 0x62, 0x00, 0x00, 0x08, 0xd6, 0x00, 0x22, 0x1a, 'K','E','Y','_','r','a','d','i','c','a','l',0, /* 25982, 0x8d6, U+221a, KEY_radical, SQUARE ROOT */
0x9b, 0x58, 0x00, 0x00, 0x08, 0xda, 0x00, 0x22, 0x82, 'K','E','Y','_','i','n','c','l','u','d','e','d','i','n',0, /* 26006, 0x8da, U+2282, KEY_includedin, SUBSET OF */
0xe6, 0x95, 0x00, 0x00, 0x08, 0xdb, 0x00, 0x22, 0x83, 'K','E','Y','_','i','n','c','l','u','d','e','s',0, /* 26028, 0x8db, U+2283, KEY_includes, SUPERSET OF */
0x8c, 0x20, 0x00, 0x00, 0x08, 0xdc, 0x00, 0x22, 0x29, 'K','E','Y','_','i','n','t','e','r','s','e','c','t','i','o','n',0, /* 26054, 0x8dc, U+2229, KEY_intersection, INTERSECTION */
0x9d, 0x50, 0x00, 0x00, 0x08, 0xdd, 0x00, 0x22, 0x2a, 'K','E','Y','_','u','n','i','o','n',0, /* 26073, 0x8dd, U+222a, KEY_union, UNION */
0xa1, 0x54, 0x00, 0x00, 0x08, 0xde, 0x00, 0x22, 0x27, 'K','E','Y','_','l','o','g','i','c','a','l','a','n','d',0, /* 26097, 0x8de, U+2227, KEY_logicaland, LOGICAL AND */
0xd0, 0x98, 0x00, 0x00, 0x08, 0xdf, 0x00, 0x22, 0x28, 'K','E','Y','_','l','o','g','i','c','a','l','o','r',0, /* 26120, 0x8df, U+2228, KEY_logicalor, LOGICAL OR */
0x63, 0xa5, 0x00, 0x00, 0x08, 0xef, 0x00, 0x22, 0x02, 'K','E','Y','_','p','a','r','t','i','a','l','d','e','r','i','v','a','t','i','v','e',0, /* 26151, 0x8ef, U+2202, KEY_partialderivative, PARTIAL DIFFERENTIAL */
0xe7, 0xc0, 0x00, 0x00, 0x08, 0xf6, 0x00, 0x01, 0x92, 'K','E','Y','_','f','u','n','c','t','i','o','n',0, /* 26173, 0x8f6, U+0192, KEY_function, LATIN SMALL LETTER F WITH HOOK */
0xcd, 0x3d, 0x00, 0x00, 0x08, 0xfb, 0x00, 0x21, 0x90, 'K','E','Y','_','l','e','f','t','a','r','r','o','w',0, /* 26196, 0x8fb, U+2190, KEY_leftarrow, LEFTWARDS ARROW */
0x76, 0x7d, 0x00, 0x00, 0x08, 0xfc, 0x00, 0x21, 0x91, 'K','E','Y','_','u','p','a','r','r','o','w',0, /* 26217, 0x8fc, U+2191, KEY_uparrow, UPWARDS ARROW */
0xa9, 0xbd, 0x00, 0x00, 0x08, 0xfd, 0x00, 0x21, 0x92, 'K','E','Y','_','r','i','g','h','t','a','r','r','o','w',0, /* 26241, 0x8fd, U+2192, KEY_rightarrow, RIGHTWARDS ARROW */
0xcd, 0xbd, 0x00, 0x00, 0x08, 0xfe, 0x00, 0x21, 0x93, 'K','E','Y','_','d','o','w','n','a','r','r','o','w',0, /* 26264, 0x8fe, U+2193, KEY_downarrow, DOWNWARDS ARROW */
0x9b, 0xeb, 0x00, 0x00, 0x09, 0xdf, 0x00, 0x00, 0x00, 'K','E','Y','_','b','l','a','n','k',0, /* 26283, 0x9df, KEY_blank */
0xc9, 0x94, 0x00, 0x00, 0x09, 0xe0, 0x00, 0x25, 0xc6, 'K','E','Y','_','s','o','l','i','d','d','i','a','m','o','n','d',0, /* 26309, 0x9e0, U+25c6, KEY_soliddiamond, BLACK DIAMOND */
0x1e, 0x64, 0x00, 0x00, 0x09, 0xe1, 0x00, 0x25, 0x92, 'K','E','Y','_','c','h','e','c','k','e','r','b','o','a','r','d',0, /* 26335, 0x9e1, U+2592, KEY_checkerboard, MEDIUM SHADE */
0x13, 0x38, 0x00, 0x00, 0x09, 0xe2, 0x00, 0x24, 0x09, 'K','E','Y','_','h','t',0, /* 26351, 0x9e2, U+2409, KEY_ht, SYMBOL FOR HORIZONTAL TABULATION */
0x13, 0x26, 0x00, 0x00, 0x09, 0xe3, 0x00, 0x24, 0x0c, 'K','E','Y','_','f','f',0, /* 26367, 0x9e3, U+240c, KEY_ff, SYMBOL FOR FORM FEED */
0x13, 0x2c, 0x00, 0x00, 0x09, 0xe4, 0x00, 0x24, 0x0d, 'K','E','Y','_','c','r',0, /* 26383, 0x9e4, U+240d, KEY_cr, SYMBOL FOR CARRIAGE RETURN */
0x13, 0x32, 0x00, 0x00, 0x09, 0xe5, 0x00, 0x24, 0x0a, 'K','E','Y','_','l','f',0, /* 26399, 0x9e5, U+240a, KEY_lf, SYMBOL FOR LINE FEED */
0x13, 0x3c, 0x00, 0x00, 0x09, 0xe8, 0x00, 0x24, 0x24, 'K','E','Y','_','n','l',0, /* 26415, 0x9e8, U+2424, KEY_nl, SYMBOL FOR NEWLINE */
0x13, 0x54, 0x00, 0x00, 0x09, 0xe9, 0x00, 0x24, 0x0b, 'K','E','Y','_','v','t',0, /* 26431, 0x9e9, U+240b, KEY_vt, SYMBOL FOR VERTICAL TABULATION */
0xd3, 0xd4, 0x00, 0x00, 0x09, 0xea, 0x00, 0x25, 0x18, 'K','E','Y','_','l','o','w','r','i','g','h','t','c','o','r','n','e','r',0, /* 26459, 0x9ea, U+2518, KEY_lowrightcorner, BOX DRAWINGS LIGHT UP AND LEFT */
0xdb, 0xd4, 0x00, 0x00, 0x09, 0xeb, 0x00, 0x25, 0x10, 'K','E','Y','_','u','p','r','i','g','h','t','c','o','r','n','e','r',0, /* 26486, 0x9eb, U+2510, KEY_uprightcorner, BOX DRAWINGS LIGHT DOWN AND LEFT */
0xde, 0xd4, 0x00, 0x00, 0x09, 0xec, 0x00, 0x25, 0x0c, 'K','E','Y','_','u','p','l','e','f','t','c','o','r','n','e','r',0, /* 26512, 0x9ec, U+250c, KEY_upleftcorner, BOX DRAWINGS LIGHT DOWN AND RIGHT */
0x5a, 0xd4, 0x00, 0x00, 0x09, 0xed, 0x00, 0x25, 0x14, 'K','E','Y','_','l','o','w','l','e','f','t','c','o','r','n','e','r',0, /* 26539, 0x9ed, U+2514, KEY_lowleftcorner, BOX DRAWINGS LIGHT UP AND RIGHT */
0xde, 0xdd, 0x00, 0x00, 0x09, 0xee, 0x00, 0x25, 0x3c, 'K','E','Y','_','c','r','o','s','s','i','n','g','l','i','n','e','s',0, /* 26566, 0x9ee, U+253c, KEY_crossinglines, BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
0x2d, 0x79, 0x00, 0x00, 0x09, 0xef, 0x00, 0x23, 0xba, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','1',0, /* 26594, 0x9ef, U+23ba, KEY_horizlinescan1, HORIZONTAL SCAN LINE-1 */
0x2d, 0x7b, 0x00, 0x00, 0x09, 0xf0, 0x00, 0x23, 0xbb, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','3',0, /* 26622, 0x9f0, U+23bb, KEY_horizlinescan3, HORIZONTAL SCAN LINE-3 */
0x2d, 0x7d, 0x00, 0x00, 0x09, 0xf1, 0x00, 0x25, 0x00, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','5',0, /* 26650, 0x9f1, U+2500, KEY_horizlinescan5, BOX DRAWINGS LIGHT HORIZONTAL */
0x2d, 0x7f, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x23, 0xbc, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','7',0, /* 26678, 0x9f2, U+23bc, KEY_horizlinescan7, HORIZONTAL SCAN LINE-7 */
0x2d, 0x81, 0x00, 0x00, 0x09, 0xf3, 0x00, 0x23, 0xbd, 'K','E','Y','_','h','o','r','i','z','l','i','n','e','s','c','a','n','9',0, /* 26706, 0x9f3, U+23bd, KEY_horizlinescan9, HORIZONTAL SCAN LINE-9 */
0x9c, 0x7c, 0x00, 0x00, 0x09, 0xf4, 0x00, 0x25, 0x1c, 'K','E','Y','_','l','e','f','t','t',0, /* 26725, 0x9f4, U+251c, KEY_leftt, BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
0x3a, 0x44, 0x00, 0x00, 0x09, 0xf5, 0x00, 0x25, 0x24, 'K','E','Y','_','r','i','g','h','t','t',0, /* 26745, 0x9f5, U+2524, KEY_rightt, BOX DRAWINGS LIGHT VERTICAL AND LEFT */
0x4d, 0xf8, 0x00, 0x00, 0x09, 0xf6, 0x00, 0x25, 0x34, 'K','E','Y','_','b','o','t','t',0, /* 26763, 0x9f6, U+2534, KEY_bott, BOX DRAWINGS LIGHT UP AND HORIZONTAL */
0x4e, 0x80, 0x00, 0x00, 0x09, 0xf7, 0x00, 0x25, 0x2c, 'K','E','Y','_','t','o','p','t',0, /* 26781, 0x9f7, U+252c, KEY_topt, BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
0x76, 0x1c, 0x00, 0x00, 0x09, 0xf8, 0x00, 0x25, 0x02, 'K','E','Y','_','v','e','r','t','b','a','r',0, /* 26802, 0x9f8, U+2502, KEY_vertbar, BOX DRAWINGS LIGHT VERTICAL */
0x72, 0xbf, 0x00, 0x00, 0x0a, 0xa1, 0x00, 0x20, 0x03, 'K','E','Y','_','e','m','s','p','a','c','e',0, /* 26823, 0xaa1, U+2003, KEY_emspace, EM SPACE */
0x72, 0xdf, 0x00, 0x00, 0x0a, 0xa2, 0x00, 0x20, 0x02, 'K','E','Y','_','e','n','s','p','a','c','e',0, /* 26844, 0xaa2, U+2002, KEY_enspace, EN SPACE */
0xde, 0x7f, 0x00, 0x00, 0x0a, 0xa3, 0x00, 0x20, 0x04, 'K','E','Y','_','e','m','3','s','p','a','c','e',0, /* 26866, 0xaa3, U+2004, KEY_em3space, THREE-PER-EM SPACE */
0xde, 0x9f, 0x00, 0x00, 0x0a, 0xa4, 0x00, 0x20, 0x05, 'K','E','Y','_','e','m','4','s','p','a','c','e',0, /* 26888, 0xaa4, U+2005, KEY_em4space, FOUR-PER-EM SPACE */
0x8e, 0x9f, 0x00, 0x00, 0x0a, 0xa5, 0x00, 0x20, 0x07, 'K','E','Y','_','d','i','g','i','t','s','p','a','c','e',0, /* 26912, 0xaa5, U+2007, KEY_digitspace, FIGURE SPACE */
0xb4, 0x9f, 0x00, 0x00, 0x0a, 0xa6, 0x00, 0x20, 0x08, 'K','E','Y','_','p','u','n','c','t','s','p','a','c','e',0, /* 26936, 0xaa6, U+2008, KEY_punctspace, PUNCTUATION SPACE */
0xd7, 0x5f, 0x00, 0x00, 0x0a, 0xa7, 0x00, 0x20, 0x09, 'K','E','Y','_','t','h','i','n','s','p','a','c','e',0, /* 26959, 0xaa7, U+2009, KEY_thinspace, THIN SPACE */
0xc8, 0x5f, 0x00, 0x00, 0x0a, 0xa8, 0x00, 0x20, 0x0a, 'K','E','Y','_','h','a','i','r','s','p','a','c','e',0, /* 26982, 0xaa8, U+200a, KEY_hairspace, HAIR SPACE */
0x38, 0xa2, 0x00, 0x00, 0x0a, 0xa9, 0x00, 0x20, 0x14, 'K','E','Y','_','e','m','d','a','s','h',0, /* 27002, 0xaa9, U+2014, KEY_emdash, EM DASH */
0x38, 0xb2, 0x00, 0x00, 0x0a, 0xaa, 0x00, 0x20, 0x13, 'K','E','Y','_','e','n','d','a','s','h',0, /* 27022, 0xaaa, U+2013, KEY_endash, EN DASH */
0x57, 0x4b, 0x00, 0x00, 0x0a, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','s','i','g','n','i','f','b','l','a','n','k',0, /* 27047, 0xaac, KEY_signifblank, (U+2423 OPEN BOX) */
0xe5, 0x21, 0x00, 0x00, 0x0a, 0xae, 0x00, 0x20, 0x26, 'K','E','Y','_','e','l','l','i','p','s','i','s',0, /* 27069, 0xaae, U+2026, KEY_ellipsis, HORIZONTAL ELLIPSIS */
0xe4, 0x8a, 0x00, 0x00, 0x0a, 0xaf, 0x00, 0x20, 0x25, 'K','E','Y','_','d','o','u','b','b','a','s','e','l','i','n','e','d','o','t',0, /* 27098, 0xaaf, U+2025, KEY_doubbaselinedot, TWO DOT LEADER */
0xea, 0x0c, 0x00, 0x00, 0x0a, 0xb0, 0x00, 0x21, 0x53, 'K','E','Y','_','o','n','e','t','h','i','r','d',0, /* 27120, 0xab0, U+2153, KEY_onethird, VULGAR FRACTION ONE THIRD */
0xe0, 0x8b, 0x00, 0x00, 0x0a, 0xb1, 0x00, 0x21, 0x54, 'K','E','Y','_','t','w','o','t','h','i','r','d','s',0, /* 27143, 0xab1, U+2154, KEY_twothirds, VULGAR FRACTION TWO THIRDS */
0xe9, 0x30, 0x00, 0x00, 0x0a, 0xb2, 0x00, 0x21, 0x55, 'K','E','Y','_','o','n','e','f','i','f','t','h',0, /* 27165, 0xab2, U+2155, KEY_onefifth, VULGAR FRACTION ONE FIFTH */
0xde, 0xd3, 0x00, 0x00, 0x0a, 0xb3, 0x00, 0x21, 0x56, 'K','E','Y','_','t','w','o','f','i','f','t','h','s',0, /* 27188, 0xab3, U+2156, KEY_twofifths, VULGAR FRACTION TWO FIFTHS */
0x5f, 0x53, 0x00, 0x00, 0x0a, 0xb4, 0x00, 0x21, 0x57, 'K','E','Y','_','t','h','r','e','e','f','i','f','t','h','s',0, /* 27213, 0xab4, U+2157, KEY_threefifths, VULGAR FRACTION THREE FIFTHS */
0x9f, 0x93, 0x00, 0x00, 0x0a, 0xb5, 0x00, 0x21, 0x58, 'K','E','Y','_','f','o','u','r','f','i','f','t','h','s',0, /* 27237, 0xab5, U+2158, KEY_fourfifths, VULGAR FRACTION FOUR FIFTHS */
0xea, 0x48, 0x00, 0x00, 0x0a, 0xb6, 0x00, 0x21, 0x59, 'K','E','Y','_','o','n','e','s','i','x','t','h',0, /* 27259, 0xab6, U+2159, KEY_onesixth, VULGAR FRACTION ONE SIXTH */
0x99, 0x03, 0x00, 0x00, 0x0a, 0xb7, 0x00, 0x21, 0x5a, 'K','E','Y','_','f','i','v','e','s','i','x','t','h','s',0, /* 27283, 0xab7, U+215a, KEY_fivesixths, VULGAR FRACTION FIVE SIXTHS */
0x38, 0x18, 0x00, 0x00, 0x0a, 0xb8, 0x00, 0x21, 0x05, 'K','E','Y','_','c','a','r','e','o','f',0, /* 27303, 0xab8, U+2105, KEY_careof, CARE OF */
0x71, 0x82, 0x00, 0x00, 0x0a, 0xbb, 0x00, 0x20, 0x12, 'K','E','Y','_','f','i','g','d','a','s','h',0, /* 27324, 0xabb, U+2012, KEY_figdash, FIGURE DASH */
0x9f, 0x52, 0x00, 0x00, 0x0a, 0xbc, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','a','n','g','l','e','b','r','a','c','k','e','t',0, /* 27354, 0xabc, KEY_leftanglebracket, (U+27E8 MATHEMATICAL LEFT ANGLE BRACKET) */
0x1c, 0xac, 0x00, 0x00, 0x0a, 0xbd, 0x00, 0x00, 0x00, 'K','E','Y','_','d','e','c','i','m','a','l','p','o','i','n','t',0, /* 27380, 0xabd, KEY_decimalpoint, (U+002E FULL STOP) */
0xdf, 0x52, 0x00, 0x00, 0x0a, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','a','n','g','l','e','b','r','a','c','k','e','t',0, /* 27411, 0xabe, KEY_rightanglebracket, (U+27E9 MATHEMATICAL RIGHT ANGLE BRACKET) */
0x39, 0x68, 0x00, 0x00, 0x0a, 0xbf, 0x00, 0x00, 0x00, 'K','E','Y','_','m','a','r','k','e','r',0, /* 27431, 0xabf, KEY_marker */
0xd2, 0x98, 0x00, 0x00, 0x0a, 0xc3, 0x00, 0x21, 0x5b, 'K','E','Y','_','o','n','e','e','i','g','h','t','h',0, /* 27454, 0xac3, U+215b, KEY_oneeighth, VULGAR FRACTION ONE EIGHTH */
0xbe, 0xa3, 0x00, 0x00, 0x0a, 0xc4, 0x00, 0x21, 0x5c, 'K','E','Y','_','t','h','r','e','e','e','i','g','h','t','h','s',0, /* 27480, 0xac4, U+215c, KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */
0x2d, 0xa3, 0x00, 0x00, 0x0a, 0xc5, 0x00, 0x21, 0x5d, 'K','E','Y','_','f','i','v','e','e','i','g','h','t','h','s',0, /* 27505, 0xac5, U+215d, KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */
0xb7, 0x23, 0x00, 0x00, 0x0a, 0xc6, 0x00, 0x21, 0x5e, 'K','E','Y','_','s','e','v','e','n','e','i','g','h','t','h','s',0, /* 27531, 0xac6, U+215e, KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */
0xd8, 0x4b, 0x00, 0x00, 0x0a, 0xc9, 0x00, 0x21, 0x22, 'K','E','Y','_','t','r','a','d','e','m','a','r','k',0, /* 27554, 0xac9, U+2122, KEY_trademark, TRADE MARK SIGN */
0x63, 0x0b, 0x00, 0x00, 0x0a, 0xca, 0x00, 0x00, 0x00, 'K','E','Y','_','s','i','g','n','a','t','u','r','e','m','a','r','k',0, /* 27581, 0xaca, KEY_signaturemark, (U+2613 SALTIRE) */
0xb4, 0x49, 0x00, 0x00, 0x0a, 0xcb, 0x00, 0x00, 0x00, 'K','E','Y','_','t','r','a','d','e','m','a','r','k','i','n','c','i','r','c','l','e',0, /* 27612, 0xacb, KEY_trademarkincircle */
0x1f, 0xf9, 0x00, 0x00, 0x0a, 0xcc, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','o','p','e','n','t','r','i','a','n','g','l','e',0, /* 27642, 0xacc, KEY_leftopentriangle, (U+25C1 WHITE LEFT-POINTING TRIANGLE) */
0x5f, 0xf9, 0x00, 0x00, 0x0a, 0xcd, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','o','p','e','n','t','r','i','a','n','g','l','e',0, /* 27673, 0xacd, KEY_rightopentriangle, (U+25B7 WHITE RIGHT-POINTING TRIANGLE) */
0x61, 0x49, 0x00, 0x00, 0x0a, 0xce, 0x00, 0x00, 0x00, 'K','E','Y','_','e','m','o','p','e','n','c','i','r','c','l','e',0, /* 27699, 0xace, KEY_emopencircle, (U+25CB WHITE CIRCLE) */
0x18, 0x19, 0x00, 0x00, 0x0a, 0xcf, 0x00, 0x00, 0x00, 'K','E','Y','_','e','m','o','p','e','n','r','e','c','t','a','n','g','l','e',0, /* 27728, 0xacf, KEY_emopenrectangle, (U+25AF WHITE VERTICAL RECTANGLE) */
0x54, 0x4b, 0x00, 0x00, 0x0a, 0xd0, 0x00, 0x20, 0x18, 'K','E','Y','_','l','e','f','t','s','i','n','g','l','e','q','u','o','t','e','m','a','r','k',0, /* 27761, 0xad0, U+2018, KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */
0x54, 0x4b, 0x00, 0x00, 0x0a, 0xd1, 0x00, 0x20, 0x19, 'K','E','Y','_','r','i','g','h','t','s','i','n','g','l','e','q','u','o','t','e','m','a','r','k',0, /* 27795, 0xad1, U+2019, KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */
0x9c, 0x4b, 0x00, 0x00, 0x0a, 0xd2, 0x00, 0x20, 0x1c, 'K','E','Y','_','l','e','f','t','d','o','u','b','l','e','q','u','o','t','e','m','a','r','k',0, /* 27828, 0xad2, U+201c, KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */
0x9c, 0x4b, 0x00, 0x00, 0x0a, 0xd3, 0x00, 0x20, 0x1d, 'K','E','Y','_','r','i','g','h','t','d','o','u','b','l','e','q','u','o','t','e','m','a','r','k',0, /* 27862, 0xad3, U+201d, KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */
0xbd, 0xb0, 0x00, 0x00, 0x0a, 0xd4, 0x00, 0x21, 0x1e, 'K','E','Y','_','p','r','e','s','c','r','i','p','t','i','o','n',0, /* 27888, 0xad4, U+211e, KEY_prescription, PRESCRIPTION TAKE */
0xe9, 0x85, 0x00, 0x00, 0x0a, 0xd5, 0x00, 0x20, 0x30, 'K','E','Y','_','p','e','r','m','i','l','l','e',0, /* 27910, 0xad5, U+2030, KEY_permille, PER MILLE SIGN */
0x74, 0x75, 0x00, 0x00, 0x0a, 0xd6, 0x00, 0x20, 0x32, 'K','E','Y','_','m','i','n','u','t','e','s',0, /* 27931, 0xad6, U+2032, KEY_minutes, PRIME */
0x74, 0x7b, 0x00, 0x00, 0x0a, 0xd7, 0x00, 0x20, 0x33, 'K','E','Y','_','s','e','c','o','n','d','s',0, /* 27952, 0xad7, U+2033, KEY_seconds, DOUBLE PRIME */
0x9b, 0xd5, 0x00, 0x00, 0x0a, 0xd9, 0x00, 0x27, 0x1d, 'K','E','Y','_','l','a','t','i','n','c','r','o','s','s',0, /* 27976, 0xad9, U+271d, KEY_latincross, LATIN CROSS */
0xe5, 0x7f, 0x00, 0x00, 0x0a, 0xda, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','x','a','g','r','a','m',0, /* 27998, 0xada, KEY_hexagram */
0xe9, 0x5e, 0x00, 0x00, 0x0a, 0xdb, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','r','e','c','t','b','u','l','l','e','t',0, /* 28028, 0xadb, KEY_filledrectbullet, (U+25AC BLACK RECTANGLE) */
0x09, 0x1e, 0x00, 0x00, 0x0a, 0xdc, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','l','e','f','t','t','r','i','b','u','l','l','e','t',0, /* 28061, 0xadc, KEY_filledlefttribullet, (U+25C0 BLACK LEFT-POINTING TRIANGLE) */
0xf1, 0x1e, 0x00, 0x00, 0x0a, 0xdd, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','r','i','g','h','t','t','r','i','b','u','l','l','e','t',0, /* 28095, 0xadd, KEY_filledrighttribullet, (U+25B6 BLACK RIGHT-POINTING TRIANGLE) */
0x2c, 0xc9, 0x00, 0x00, 0x0a, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','e','m','f','i','l','l','e','d','c','i','r','c','l','e',0, /* 28123, 0xade, KEY_emfilledcircle, (U+25CF BLACK CIRCLE) */
0x4b, 0x3e, 0x00, 0x00, 0x0a, 0xdf, 0x00, 0x00, 0x00, 'K','E','Y','_','e','m','f','i','l','l','e','d','r','e','c','t',0, /* 28149, 0xadf, KEY_emfilledrect, (U+25AE BLACK VERTICAL RECTANGLE) */
0x5a, 0x9e, 0x00, 0x00, 0x0a, 0xe0, 0x00, 0x00, 0x00, 'K','E','Y','_','e','n','o','p','e','n','c','i','r','c','b','u','l','l','e','t',0, /* 28179, 0xae0, KEY_enopencircbullet, (U+25E6 WHITE BULLET) */
0x13, 0x1e, 0x00, 0x00, 0x0a, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','e','n','o','p','e','n','s','q','u','a','r','e','b','u','l','l','e','t',0, /* 28211, 0xae1, KEY_enopensquarebullet, (U+25AB WHITE SMALL SQUARE) */
0xb1, 0x5e, 0x00, 0x00, 0x0a, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','o','p','e','n','r','e','c','t','b','u','l','l','e','t',0, /* 28239, 0xae2, KEY_openrectbullet, (U+25AD WHITE RECTANGLE) */
0x85, 0xd2, 0x00, 0x00, 0x0a, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','o','p','e','n','t','r','i','b','u','l','l','e','t','u','p',0, /* 28268, 0xae3, KEY_opentribulletup, (U+25B3 WHITE UP-POINTING TRIANGLE) */
0x18, 0x18, 0x00, 0x00, 0x0a, 0xe4, 0x00, 0x00, 0x00, 'K','E','Y','_','o','p','e','n','t','r','i','b','u','l','l','e','t','d','o','w','n',0, /* 28299, 0xae4, KEY_opentribulletdown, (U+25BD WHITE DOWN-POINTING TRIANGLE) */
0xea, 0x9c, 0x00, 0x00, 0x0a, 0xe5, 0x00, 0x00, 0x00, 'K','E','Y','_','o','p','e','n','s','t','a','r',0, /* 28321, 0xae5, KEY_openstar, (U+2606 WHITE STAR) */
0xd2, 0x9e, 0x00, 0x00, 0x0a, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','e','n','f','i','l','l','e','d','c','i','r','c','b','u','l','l','e','t',0, /* 28353, 0xae6, KEY_enfilledcircbullet, (U+2022 BULLET) */
0xfd, 0x9e, 0x00, 0x00, 0x0a, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','e','n','f','i','l','l','e','d','s','q','b','u','l','l','e','t',0, /* 28383, 0xae7, KEY_enfilledsqbullet, (U+25AA BLACK SMALL SQUARE) */
0xf5, 0xd2, 0x00, 0x00, 0x0a, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','t','r','i','b','u','l','l','e','t','u','p',0, /* 28414, 0xae8, KEY_filledtribulletup, (U+25B2 BLACK UP-POINTING TRIANGLE) */
0xd8, 0x18, 0x00, 0x00, 0x0a, 0xe9, 0x00, 0x00, 0x00, 'K','E','Y','_','f','i','l','l','e','d','t','r','i','b','u','l','l','e','t','d','o','w','n',0, /* 28447, 0xae9, KEY_filledtribulletdown, (U+25BC BLACK DOWN-POINTING TRIANGLE) */
0x38, 0xec, 0x00, 0x00, 0x0a, 0xea, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','p','o','i','n','t','e','r',0, /* 28472, 0xaea, KEY_leftpointer, (U+261C WHITE LEFT POINTING INDEX) */
0xaa, 0xec, 0x00, 0x00, 0x0a, 0xeb, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','p','o','i','n','t','e','r',0, /* 28498, 0xaeb, KEY_rightpointer, (U+261E WHITE RIGHT POINTING INDEX) */
0x4d, 0xe4, 0x00, 0x00, 0x0a, 0xec, 0x00, 0x26, 0x63, 'K','E','Y','_','c','l','u','b',0, /* 28516, 0xaec, U+2663, KEY_club, BLACK CLUB SUIT */
0x71, 0x14, 0x00, 0x00, 0x0a, 0xed, 0x00, 0x26, 0x66, 'K','E','Y','_','d','i','a','m','o','n','d',0, /* 28537, 0xaed, U+2666, KEY_diamond, BLACK DIAMOND SUIT */
0x9c, 0x24, 0x00, 0x00, 0x0a, 0xee, 0x00, 0x26, 0x65, 'K','E','Y','_','h','e','a','r','t',0, /* 28556, 0xaee, U+2665, KEY_heart, BLACK HEART SUIT */
0x70, 0xb5, 0x00, 0x00, 0x0a, 0xf0, 0x00, 0x27, 0x20, 'K','E','Y','_','m','a','l','t','e','s','e','c','r','o','s','s',0, /* 28582, 0xaf0, U+2720, KEY_maltesecross, MALTESE CROSS */
0x37, 0xe0, 0x00, 0x00, 0x0a, 0xf1, 0x00, 0x20, 0x20, 'K','E','Y','_','d','a','g','g','e','r',0, /* 28602, 0xaf1, U+2020, KEY_dagger, DAGGER */
0x5f, 0xe0, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x20, 0x21, 'K','E','Y','_','d','o','u','b','l','e','d','a','g','g','e','r',0, /* 28628, 0xaf2, U+2021, KEY_doubledagger, DOUBLE DAGGER */
0xc3, 0x8b, 0x00, 0x00, 0x0a, 0xf3, 0x00, 0x27, 0x13, 'K','E','Y','_','c','h','e','c','k','m','a','r','k',0, /* 28651, 0xaf3, U+2713, KEY_checkmark, CHECK MARK */
0x0b, 0x15, 0x00, 0x00, 0x0a, 0xf4, 0x00, 0x27, 0x17, 'K','E','Y','_','b','a','l','l','o','t','c','r','o','s','s',0, /* 28676, 0xaf4, U+2717, KEY_ballotcross, BALLOT X */
0xbf, 0x88, 0x00, 0x00, 0x0a, 0xf5, 0x00, 0x26, 0x6f, 'K','E','Y','_','m','u','s','i','c','a','l','s','h','a','r','p',0, /* 28702, 0xaf5, U+266f, KEY_musicalsharp, MUSIC SHARP SIGN */
0x5f, 0x36, 0x00, 0x00, 0x0a, 0xf6, 0x00, 0x26, 0x6d, 'K','E','Y','_','m','u','s','i','c','a','l','f','l','a','t',0, /* 28727, 0xaf6, U+266d, KEY_musicalflat, MUSIC FLAT SIGN */
0x9a, 0x6a, 0x00, 0x00, 0x0a, 0xf7, 0x00, 0x26, 0x42, 'K','E','Y','_','m','a','l','e','s','y','m','b','o','l',0, /* 28751, 0xaf7, U+2642, KEY_malesymbol, MALE SIGN */
0x3a, 0x6a, 0x00, 0x00, 0x0a, 0xf8, 0x00, 0x26, 0x40, 'K','E','Y','_','f','e','m','a','l','e','s','y','m','b','o','l',0, /* 28777, 0xaf8, U+2640, KEY_femalesymbol, FEMALE SIGN */
0xd5, 0x5d, 0x00, 0x00, 0x0a, 0xf9, 0x00, 0x26, 0x0e, 'K','E','Y','_','t','e','l','e','p','h','o','n','e',0, /* 28800, 0xaf9, U+260e, KEY_telephone, BLACK TELEPHONE */
0xc8, 0xec, 0x00, 0x00, 0x0a, 0xfa, 0x00, 0x23, 0x15, 'K','E','Y','_','t','e','l','e','p','h','o','n','e','r','e','c','o','r','d','e','r',0, /* 28831, 0xafa, U+2315, KEY_telephonerecorder, TELEPHONE RECORDER */
0x2a, 0xe8, 0x00, 0x00, 0x0a, 0xfb, 0x00, 0x21, 0x17, 'K','E','Y','_','p','h','o','n','o','g','r','a','p','h','c','o','p','y','r','i','g','h','t',0, /* 28864, 0xafb, U+2117, KEY_phonographcopyright, SOUND RECORDING COPYRIGHT */
0x9b, 0xde, 0x00, 0x00, 0x0a, 0xfc, 0x00, 0x20, 0x38, 'K','E','Y','_','c','a','r','e','t',0, /* 28883, 0xafc, U+2038, KEY_caret, CARET */
0x7c, 0x4b, 0x00, 0x00, 0x0a, 0xfd, 0x00, 0x20, 0x1a, 'K','E','Y','_','s','i','n','g','l','e','l','o','w','q','u','o','t','e','m','a','r','k',0, /* 28915, 0xafd, U+201a, KEY_singlelowquotemark, SINGLE LOW-9 QUOTATION MARK */
0xbc, 0x4b, 0x00, 0x00, 0x0a, 0xfe, 0x00, 0x20, 0x1e, 'K','E','Y','_','d','o','u','b','l','e','l','o','w','q','u','o','t','e','m','a','r','k',0, /* 28947, 0xafe, U+201e, KEY_doublelowquotemark, DOUBLE LOW-9 QUOTATION MARK */
0x39, 0x9c, 0x00, 0x00, 0x0a, 0xff, 0x00, 0x00, 0x00, 'K','E','Y','_','c','u','r','s','o','r',0, /* 28967, 0xaff, KEY_cursor */
0xcc, 0xbe, 0x00, 0x00, 0x0b, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','c','a','r','e','t',0, /* 28990, 0xba3, KEY_leftcaret, (U+003C LESS-THAN SIGN) */
0xa9, 0x3e, 0x00, 0x00, 0x0b, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','c','a','r','e','t',0, /* 29014, 0xba6, KEY_rightcaret, (U+003E GREATER-THAN SIGN) */
0xcd, 0x3e, 0x00, 0x00, 0x0b, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','d','o','w','n','c','a','r','e','t',0, /* 29037, 0xba8, KEY_downcaret, (U+2228 LOGICAL OR) */
0x75, 0xfe, 0x00, 0x00, 0x0b, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','u','p','c','a','r','e','t',0, /* 29058, 0xba9, KEY_upcaret, (U+2227 LOGICAL AND) */
0x75, 0x9c, 0x00, 0x00, 0x0b, 0xc0, 0x00, 0x00, 0x00, 'K','E','Y','_','o','v','e','r','b','a','r',0, /* 29079, 0xbc0, KEY_overbar, (U+00AF MACRON) */
0xe6, 0xd5, 0x00, 0x00, 0x0b, 0xc2, 0x00, 0x22, 0xa4, 'K','E','Y','_','d','o','w','n','t','a','c','k',0, /* 29101, 0xbc2, U+22a4, KEY_downtack, DOWN TACK */
0x3b, 0x5b, 0x00, 0x00, 0x0b, 0xc3, 0x00, 0x00, 0x00, 'K','E','Y','_','u','p','s','h','o','e',0, /* 29121, 0xbc3, KEY_upshoe, (U+2229 INTERSECTION) */
0xce, 0xb1, 0x00, 0x00, 0x0b, 0xc4, 0x00, 0x23, 0x0a, 'K','E','Y','_','d','o','w','n','s','t','i','l','e',0, /* 29144, 0xbc4, U+230a, KEY_downstile, LEFT FLOOR */
0xec, 0x1c, 0x00, 0x00, 0x0b, 0xc6, 0x00, 0x00, 0x00, 'K','E','Y','_','u','n','d','e','r','b','a','r',0, /* 29166, 0xbc6, KEY_underbar, (U+005F LOW LINE) */
0x26, 0xe2, 0x00, 0x00, 0x0b, 0xca, 0x00, 0x22, 0x18, 'K','E','Y','_','j','o','t',0, /* 29183, 0xbca, U+2218, KEY_jot, RING OPERATOR */
0x4e, 0x52, 0x00, 0x00, 0x0b, 0xcc, 0x00, 0x23, 0x95, 'K','E','Y','_','q','u','a','d',0, /* 29201, 0xbcc, U+2395, KEY_quad, APL FUNCTIONAL SYMBOL QUAD */
0x3b, 0x35, 0x00, 0x00, 0x0b, 0xce, 0x00, 0x22, 0xa5, 'K','E','Y','_','u','p','t','a','c','k',0, /* 29221, 0xbce, U+22a5, KEY_uptack, UP TACK */
0x38, 0x89, 0x00, 0x00, 0x0b, 0xcf, 0x00, 0x25, 0xcb, 'K','E','Y','_','c','i','r','c','l','e',0, /* 29241, 0xbcf, U+25cb, KEY_circle, WHITE CIRCLE */
0x77, 0x71, 0x00, 0x00, 0x0b, 0xd3, 0x00, 0x23, 0x08, 'K','E','Y','_','u','p','s','t','i','l','e',0, /* 29262, 0xbd3, U+2308, KEY_upstile, LEFT CEILING */
0xe6, 0xfb, 0x00, 0x00, 0x0b, 0xd6, 0x00, 0x00, 0x00, 'K','E','Y','_','d','o','w','n','s','h','o','e',0, /* 29284, 0xbd6, KEY_downshoe, (U+222A UNION) */
0xd4, 0xfb, 0x00, 0x00, 0x0b, 0xd8, 0x00, 0x00, 0x00, 'K','E','Y','_','r','i','g','h','t','s','h','o','e',0, /* 29307, 0xbd8, KEY_rightshoe, (U+2283 SUPERSET OF) */
0xe6, 0xbb, 0x00, 0x00, 0x0b, 0xda, 0x00, 0x00, 0x00, 'K','E','Y','_','l','e','f','t','s','h','o','e',0, /* 29329, 0xbda, KEY_leftshoe, (U+2282 SUBSET OF) */
0xe6, 0x95, 0x00, 0x00, 0x0b, 0xdc, 0x00, 0x22, 0xa3, 'K','E','Y','_','l','e','f','t','t','a','c','k',0, /* 29351, 0xbdc, U+22a3, KEY_lefttack, LEFT TACK */
0xd4, 0xd5, 0x00, 0x00, 0x0b, 0xfc, 0x00, 0x22, 0xa2, 'K','E','Y','_','r','i','g','h','t','t','a','c','k',0, /* 29374, 0xbfc, U+22a2, KEY_righttack, RIGHT TACK */
0x45, 0x15, 0x00, 0x00, 0x0c, 0xdf, 0x00, 0x20, 0x17, 'K','E','Y','_','h','e','b','r','e','w','_','d','o','u','b','l','e','l','o','w','l','i','n','e',0, /* 29408, 0xcdf, U+2017, KEY_hebrew_doublelowline, DOUBLE LOW LINE */
0x42, 0x6c, 0x00, 0x00, 0x0c, 0xe0, 0x00, 0x05, 0xd0, 'K','E','Y','_','h','e','b','r','e','w','_','a','l','e','p','h',0, /* 29434, 0xce0, U+05d0, KEY_hebrew_aleph, HEBREW LETTER ALEF */
0x90, 0x4e, 0x00, 0x00, 0x0c, 0xe1, 0x00, 0x05, 0xd1, 'K','E','Y','_','h','e','b','r','e','w','_','b','e','t',0, /* 29458, 0xce1, U+05d1, KEY_hebrew_bet, HEBREW LETTER BET */
0x21, 0x04, 0x00, 0x00, 0x0c, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','b','e','t','h',0, /* 29483, 0xce1, KEY_hebrew_beth, deprecated */
0x42, 0xc2, 0x00, 0x00, 0x0c, 0xe2, 0x00, 0x05, 0xd2, 'K','E','Y','_','h','e','b','r','e','w','_','g','i','m','e','l',0, /* 29509, 0xce2, U+05d2, KEY_hebrew_gimel, HEBREW LETTER GIMEL */
0x86, 0x02, 0x00, 0x00, 0x0c, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','g','i','m','m','e','l',0, /* 29536, 0xce2, KEY_hebrew_gimmel, deprecated */
0x42, 0x56, 0x00, 0x00, 0x0c, 0xe3, 0x00, 0x05, 0xd3, 'K','E','Y','_','h','e','b','r','e','w','_','d','a','l','e','t',0, /* 29562, 0xce3, U+05d3, KEY_hebrew_dalet, HEBREW LETTER DALET */
0x85, 0x14, 0x00, 0x00, 0x0c, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','d','a','l','e','t','h',0, /* 29589, 0xce3, KEY_hebrew_daleth, deprecated */
0xc7, 0xf9, 0x00, 0x00, 0x0c, 0xe4, 0x00, 0x05, 0xd4, 'K','E','Y','_','h','e','b','r','e','w','_','h','e',0, /* 29612, 0xce4, U+05d4, KEY_hebrew_he, HEBREW LETTER HE */
0x90, 0x9d, 0x00, 0x00, 0x0c, 0xe5, 0x00, 0x05, 0xd5, 'K','E','Y','_','h','e','b','r','e','w','_','w','a','w',0, /* 29636, 0xce5, U+05d5, KEY_hebrew_waw, HEBREW LETTER VAV */
0x21, 0xa4, 0x00, 0x00, 0x0c, 0xe6, 0x00, 0x05, 0xd6, 'K','E','Y','_','h','e','b','r','e','w','_','z','a','i','n',0, /* 29661, 0xce6, U+05d6, KEY_hebrew_zain, HEBREW LETTER ZAYIN */
0x43, 0xec, 0x00, 0x00, 0x0c, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','z','a','y','i','n',0, /* 29687, 0xce6, KEY_hebrew_zayin, deprecated */
0x21, 0x06, 0x00, 0x00, 0x0c, 0xe7, 0x00, 0x05, 0xd7, 'K','E','Y','_','h','e','b','r','e','w','_','c','h','e','t',0, /* 29712, 0xce7, U+05d7, KEY_hebrew_chet, HEBREW LETTER HET */
0x90, 0x66, 0x00, 0x00, 0x0c, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','h','e','t',0, /* 29736, 0xce7, KEY_hebrew_het, deprecated */
0x90, 0x96, 0x00, 0x00, 0x0c, 0xe8, 0x00, 0x05, 0xd8, 'K','E','Y','_','h','e','b','r','e','w','_','t','e','t',0, /* 29760, 0xce8, U+05d8, KEY_hebrew_tet, HEBREW LETTER TET */
0x21, 0x94, 0x00, 0x00, 0x0c, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','t','e','t','h',0, /* 29785, 0xce8, KEY_hebrew_teth, deprecated */
0x90, 0xae, 0x00, 0x00, 0x0c, 0xe9, 0x00, 0x05, 0xd9, 'K','E','Y','_','h','e','b','r','e','w','_','y','o','d',0, /* 29809, 0xce9, U+05d9, KEY_hebrew_yod, HEBREW LETTER YOD */
0x31, 0x04, 0x00, 0x00, 0x0c, 0xea, 0x00, 0x05, 0xda, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','k','a','p','h',0, /* 29839, 0xcea, U+05da, KEY_hebrew_finalkaph, HEBREW LETTER FINAL KAF */
0x21, 0x34, 0x00, 0x00, 0x0c, 0xeb, 0x00, 0x05, 0xdb, 'K','E','Y','_','h','e','b','r','e','w','_','k','a','p','h',0, /* 29864, 0xceb, U+05db, KEY_hebrew_kaph, HEBREW LETTER KAF */
0x42, 0xca, 0x00, 0x00, 0x0c, 0xec, 0x00, 0x05, 0xdc, 'K','E','Y','_','h','e','b','r','e','w','_','l','a','m','e','d',0, /* 29890, 0xcec, U+05dc, KEY_hebrew_lamed, HEBREW LETTER LAMED */
0x18, 0x5b, 0x00, 0x00, 0x0c, 0xed, 0x00, 0x05, 0xdd, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','m','e','m',0, /* 29919, 0xced, U+05dd, KEY_hebrew_finalmem, HEBREW LETTER FINAL MEM */
0x90, 0x73, 0x00, 0x00, 0x0c, 0xee, 0x00, 0x05, 0xde, 'K','E','Y','_','h','e','b','r','e','w','_','m','e','m',0, /* 29943, 0xcee, U+05de, KEY_hebrew_mem, HEBREW LETTER MEM */
0x18, 0x80, 0x00, 0x00, 0x0c, 0xef, 0x00, 0x05, 0xdf, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','n','u','n',0, /* 29972, 0xcef, U+05df, KEY_hebrew_finalnun, HEBREW LETTER FINAL NUN */
0x90, 0x98, 0x00, 0x00, 0x0c, 0xf0, 0x00, 0x05, 0xe0, 'K','E','Y','_','h','e','b','r','e','w','_','n','u','n',0, /* 29996, 0xcf0, U+05e0, KEY_hebrew_nun, HEBREW LETTER NUN */
0x86, 0xda, 0x00, 0x00, 0x0c, 0xf1, 0x00, 0x05, 0xe1, 'K','E','Y','_','h','e','b','r','e','w','_','s','a','m','e','c','h',0, /* 30023, 0xcf1, U+05e1, KEY_hebrew_samech, HEBREW LETTER SAMEKH */
0x86, 0xea, 0x00, 0x00, 0x0c, 0xf1, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','s','a','m','e','k','h',0, /* 30050, 0xcf1, KEY_hebrew_samekh, deprecated */
0x21, 0x3c, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x05, 0xe2, 'K','E','Y','_','h','e','b','r','e','w','_','a','y','i','n',0, /* 30075, 0xcf2, U+05e2, KEY_hebrew_ayin, HEBREW LETTER AYIN */
0x0b, 0xfd, 0x00, 0x00, 0x0c, 0xf3, 0x00, 0x05, 0xe3, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','p','e',0, /* 30103, 0xcf3, U+05e3, KEY_hebrew_finalpe, HEBREW LETTER FINAL PE */
0xc8, 0x09, 0x00, 0x00, 0x0c, 0xf4, 0x00, 0x05, 0xe4, 'K','E','Y','_','h','e','b','r','e','w','_','p','e',0, /* 30126, 0xcf4, U+05e4, KEY_hebrew_pe, HEBREW LETTER PE */
0x31, 0x61, 0x00, 0x00, 0x0c, 0xf5, 0x00, 0x05, 0xe5, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','z','a','d','e',0, /* 30156, 0xcf5, U+05e5, KEY_hebrew_finalzade, HEBREW LETTER FINAL TSADI */
0x31, 0x65, 0x00, 0x00, 0x0c, 0xf5, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','f','i','n','a','l','z','a','d','i',0, /* 30186, 0xcf5, KEY_hebrew_finalzadi, deprecated */
0x21, 0x91, 0x00, 0x00, 0x0c, 0xf6, 0x00, 0x05, 0xe6, 'K','E','Y','_','h','e','b','r','e','w','_','z','a','d','e',0, /* 30211, 0xcf6, U+05e6, KEY_hebrew_zade, HEBREW LETTER TSADI */
0x21, 0x95, 0x00, 0x00, 0x0c, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','z','a','d','i',0, /* 30236, 0xcf6, KEY_hebrew_zadi, deprecated */
0x21, 0x9c, 0x00, 0x00, 0x0c, 0xf7, 0x00, 0x05, 0xe7, 'K','E','Y','_','h','e','b','r','e','w','_','q','o','p','h',0, /* 30261, 0xcf7, U+05e7, KEY_hebrew_qoph, HEBREW LETTER QOF */
0x90, 0x84, 0x00, 0x00, 0x0c, 0xf7, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','k','u','f',0, /* 30285, 0xcf7, KEY_hebrew_kuf, deprecated */
0x21, 0x82, 0x00, 0x00, 0x0c, 0xf8, 0x00, 0x05, 0xe8, 'K','E','Y','_','h','e','b','r','e','w','_','r','e','s','h',0, /* 30310, 0xcf8, U+05e8, KEY_hebrew_resh, HEBREW LETTER RESH */
0x21, 0x88, 0x00, 0x00, 0x0c, 0xf9, 0x00, 0x05, 0xe9, 'K','E','Y','_','h','e','b','r','e','w','_','s','h','i','n',0, /* 30335, 0xcf9, U+05e9, KEY_hebrew_shin, HEBREW LETTER SHIN */
0x90, 0x91, 0x00, 0x00, 0x0c, 0xfa, 0x00, 0x05, 0xea, 'K','E','Y','_','h','e','b','r','e','w','_','t','a','w',0, /* 30359, 0xcfa, U+05ea, KEY_hebrew_taw, HEBREW LETTER TAV */
0x90, 0x80, 0x00, 0x00, 0x0c, 0xfa, 0x00, 0x00, 0x00, 'K','E','Y','_','h','e','b','r','e','w','_','t','a','f',0, /* 30383, 0xcfa, KEY_hebrew_taf, deprecated */
0x88, 0x56, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','H','e','b','r','e','w','_','s','w','i','t','c','h',0, /* 30410, 0xff7e, KEY_Hebrew_switch, Alias for mode_switch */
0x67, 0x9f, 0x00, 0x00, 0x0d, 0xa1, 0x00, 0x0e, 0x01, 'K','E','Y','_','T','h','a','i','_','k','o','k','a','i',0, /* 30434, 0xda1, U+0e01, KEY_Thai_kokai, THAI CHARACTER KO KAI */
0x9f, 0x53, 0x00, 0x00, 0x0d, 0xa2, 0x00, 0x0e, 0x02, 'K','E','Y','_','T','h','a','i','_','k','h','o','k','h','a','i',0, /* 30460, 0xda2, U+0e02, KEY_Thai_khokhai, THAI CHARACTER KHO KHAI */
0x3f, 0x5a, 0x00, 0x00, 0x0d, 0xa3, 0x00, 0x0e, 0x03, 'K','E','Y','_','T','h','a','i','_','k','h','o','k','h','u','a','t',0, /* 30487, 0xda3, U+0e03, KEY_Thai_khokhuat, THAI CHARACTER KHO KHUAT */
0x3f, 0x57, 0x00, 0x00, 0x0d, 0xa4, 0x00, 0x0e, 0x04, 'K','E','Y','_','T','h','a','i','_','k','h','o','k','h','w','a','i',0, /* 30514, 0xda4, U+0e04, KEY_Thai_khokhwai, THAI CHARACTER KHO KHWAI */
0x9f, 0x74, 0x00, 0x00, 0x0d, 0xa5, 0x00, 0x0e, 0x05, 'K','E','Y','_','T','h','a','i','_','k','h','o','k','h','o','n',0, /* 30540, 0xda5, U+0e05, KEY_Thai_khokhon, THAI CHARACTER KHO KHON */
0xfe, 0xd7, 0x00, 0x00, 0x0d, 0xa6, 0x00, 0x0e, 0x06, 'K','E','Y','_','T','h','a','i','_','k','h','o','r','a','k','h','a','n','g',0, /* 30569, 0xda6, U+0e06, KEY_Thai_khorakhang, THAI CHARACTER KHO RAKHANG */
0xcf, 0xe3, 0x00, 0x00, 0x0d, 0xa7, 0x00, 0x0e, 0x07, 'K','E','Y','_','T','h','a','i','_','n','g','o','n','g','u',0, /* 30594, 0xda7, U+0e07, KEY_Thai_ngongu, THAI CHARACTER NGO NGU */
0x9d, 0x18, 0x00, 0x00, 0x0d, 0xa8, 0x00, 0x0e, 0x08, 'K','E','Y','_','T','h','a','i','_','c','h','o','c','h','a','n',0, /* 30620, 0xda8, U+0e08, KEY_Thai_chochan, THAI CHARACTER CHO CHAN */
0x3a, 0xb7, 0x00, 0x00, 0x0d, 0xa9, 0x00, 0x0e, 0x09, 'K','E','Y','_','T','h','a','i','_','c','h','o','c','h','i','n','g',0, /* 30647, 0xda9, U+0e09, KEY_Thai_choching, THAI CHARACTER CHO CHING */
0x3a, 0x97, 0x00, 0x00, 0x0d, 0xaa, 0x00, 0x0e, 0x0a, 'K','E','Y','_','T','h','a','i','_','c','h','o','c','h','a','n','g',0, /* 30674, 0xdaa, U+0e0a, KEY_Thai_chochang, THAI CHARACTER CHO CHANG */
0xb3, 0xf9, 0x00, 0x00, 0x0d, 0xab, 0x00, 0x0e, 0x0b, 'K','E','Y','_','T','h','a','i','_','s','o','s','o',0, /* 30697, 0xdab, U+0e0b, KEY_Thai_soso, THAI CHARACTER SO SO */
0x9d, 0x2b, 0x00, 0x00, 0x0d, 0xac, 0x00, 0x0e, 0x0c, 'K','E','Y','_','T','h','a','i','_','c','h','o','c','h','o','e',0, /* 30723, 0xdac, U+0e0c, KEY_Thai_chochoe, THAI CHARACTER CHO CHOE */
0xd1, 0xff, 0x00, 0x00, 0x0d, 0xad, 0x00, 0x0e, 0x0d, 'K','E','Y','_','T','h','a','i','_','y','o','y','i','n','g',0, /* 30748, 0xdad, U+0e0d, KEY_Thai_yoying, THAI CHARACTER YO YING */
0x9d, 0x7d, 0x00, 0x00, 0x0d, 0xae, 0x00, 0x0e, 0x0e, 'K','E','Y','_','T','h','a','i','_','d','o','c','h','a','d','a',0, /* 30774, 0xdae, U+0e0e, KEY_Thai_dochada, THAI CHARACTER DO CHADA */
0xa2, 0x65, 0x00, 0x00, 0x0d, 0xaf, 0x00, 0x0e, 0x0f, 'K','E','Y','_','T','h','a','i','_','t','o','p','a','t','a','k',0, /* 30800, 0xdaf, U+0e0f, KEY_Thai_topatak, THAI CHARACTER TO PATAK */
0xa1, 0xe0, 0x00, 0x00, 0x0d, 0xb0, 0x00, 0x0e, 0x10, 'K','E','Y','_','T','h','a','i','_','t','h','o','t','h','a','n',0, /* 30826, 0xdb0, U+0e10, KEY_Thai_thothan, THAI CHARACTER THO THAN */
0x84, 0xcf, 0x00, 0x00, 0x0d, 0xb1, 0x00, 0x0e, 0x11, 'K','E','Y','_','T','h','a','i','_','t','h','o','n','a','n','g','m','o','n','t','h','o',0, /* 30858, 0xdb1, U+0e11, KEY_Thai_thonangmontho, THAI CHARACTER THO NANGMONTHO */
0x12, 0x41, 0x00, 0x00, 0x0d, 0xb2, 0x00, 0x0e, 0x12, 'K','E','Y','_','T','h','a','i','_','t','h','o','p','h','u','t','h','a','o',0, /* 30887, 0xdb2, U+0e12, KEY_Thai_thophuthao, THAI CHARACTER THO PHUTHAO */
0x67, 0xe8, 0x00, 0x00, 0x0d, 0xb3, 0x00, 0x0e, 0x13, 'K','E','Y','_','T','h','a','i','_','n','o','n','e','n',0, /* 30911, 0xdb3, U+0e13, KEY_Thai_nonen, THAI CHARACTER NO NEN */
0x67, 0x1d, 0x00, 0x00, 0x0d, 0xb4, 0x00, 0x0e, 0x14, 'K','E','Y','_','T','h','a','i','_','d','o','d','e','k',0, /* 30935, 0xdb4, U+0e14, KEY_Thai_dodek, THAI CHARACTER DO DEK */
0x68, 0x59, 0x00, 0x00, 0x0d, 0xb5, 0x00, 0x0e, 0x15, 'K','E','Y','_','T','h','a','i','_','t','o','t','a','o',0, /* 30959, 0xdb5, U+0e15, KEY_Thai_totao, THAI CHARACTER TO TAO */
0x44, 0x77, 0x00, 0x00, 0x0d, 0xb6, 0x00, 0x0e, 0x16, 'K','E','Y','_','T','h','a','i','_','t','h','o','t','h','u','n','g',0, /* 30986, 0xdb6, U+0e16, KEY_Thai_thothung, THAI CHARACTER THO THUNG */
0x88, 0x98, 0x00, 0x00, 0x0d, 0xb7, 0x00, 0x0e, 0x17, 'K','E','Y','_','T','h','a','i','_','t','h','o','t','h','a','h','a','n',0, /* 31014, 0xdb7, U+0e17, KEY_Thai_thothahan, THAI CHARACTER THO THAHAN */
0x44, 0x5f, 0x00, 0x00, 0x0d, 0xb8, 0x00, 0x0e, 0x18, 'K','E','Y','_','T','h','a','i','_','t','h','o','t','h','o','n','g',0, /* 31041, 0xdb8, U+0e18, KEY_Thai_thothong, THAI CHARACTER THO THONG */
0xb3, 0xcd, 0x00, 0x00, 0x0d, 0xb9, 0x00, 0x0e, 0x19, 'K','E','Y','_','T','h','a','i','_','n','o','n','u',0, /* 31064, 0xdb9, U+0e19, KEY_Thai_nonu, THAI CHARACTER NO NU */
0x3a, 0x37, 0x00, 0x00, 0x0d, 0xba, 0x00, 0x0e, 0x1a, 'K','E','Y','_','T','h','a','i','_','b','o','b','a','i','m','a','i',0, /* 31091, 0xdba, U+0e1a, KEY_Thai_bobaimai, THAI CHARACTER BO BAIMAI */
0x68, 0x11, 0x00, 0x00, 0x0d, 0xbb, 0x00, 0x0e, 0x1b, 'K','E','Y','_','T','h','a','i','_','p','o','p','l','a',0, /* 31115, 0xdbb, U+0e1b, KEY_Thai_popla, THAI CHARACTER PO PLA */
0x42, 0x37, 0x00, 0x00, 0x0d, 0xbc, 0x00, 0x0e, 0x1c, 'K','E','Y','_','T','h','a','i','_','p','h','o','p','h','u','n','g',0, /* 31142, 0xdbc, U+0e1c, KEY_Thai_phophung, THAI CHARACTER PHO PHUNG */
0xb3, 0x69, 0x00, 0x00, 0x0d, 0xbd, 0x00, 0x0e, 0x1d, 'K','E','Y','_','T','h','a','i','_','f','o','f','a',0, /* 31165, 0xdbd, U+0e1d, KEY_Thai_fofa, THAI CHARACTER FO FA */
0xa0, 0xc0, 0x00, 0x00, 0x0d, 0xbe, 0x00, 0x0e, 0x1e, 'K','E','Y','_','T','h','a','i','_','p','h','o','p','h','a','n',0, /* 31191, 0xdbe, U+0e1e, KEY_Thai_phophan, THAI CHARACTER PHO PHAN */
0x67, 0x40, 0x00, 0x00, 0x0d, 0xbf, 0x00, 0x0e, 0x1f, 'K','E','Y','_','T','h','a','i','_','f','o','f','a','n',0, /* 31215, 0xdbf, U+0e1f, KEY_Thai_fofan, THAI CHARACTER FO FAN */
0x09, 0x81, 0x00, 0x00, 0x0d, 0xc0, 0x00, 0x0e, 0x20, 'K','E','Y','_','T','h','a','i','_','p','h','o','s','a','m','p','h','a','o',0, /* 31244, 0xdc0, U+0e20, KEY_Thai_phosamphao, THAI CHARACTER PHO SAMPHAO */
0xb3, 0xaf, 0x00, 0x00, 0x0d, 0xc1, 0x00, 0x0e, 0x21, 'K','E','Y','_','T','h','a','i','_','m','o','m','a',0, /* 31267, 0xdc1, U+0e21, KEY_Thai_moma, THAI CHARACTER MO MA */
0x68, 0xb9, 0x00, 0x00, 0x0d, 0xc2, 0x00, 0x0e, 0x22, 'K','E','Y','_','T','h','a','i','_','y','o','y','a','k',0, /* 31291, 0xdc2, U+0e22, KEY_Thai_yoyak, THAI CHARACTER YO YAK */
0x68, 0x4b, 0x00, 0x00, 0x0d, 0xc3, 0x00, 0x0e, 0x23, 'K','E','Y','_','T','h','a','i','_','r','o','r','u','a',0, /* 31315, 0xdc3, U+0e23, KEY_Thai_rorua, THAI CHARACTER RO RUA */
0x6c, 0xad, 0x00, 0x00, 0x0d, 0xc4, 0x00, 0x0e, 0x24, 'K','E','Y','_','T','h','a','i','_','r','u',0, /* 31336, 0xdc4, U+0e24, KEY_Thai_ru, THAI CHARACTER RU */
0xcf, 0xf7, 0x00, 0x00, 0x0d, 0xc5, 0x00, 0x0e, 0x25, 'K','E','Y','_','T','h','a','i','_','l','o','l','i','n','g',0, /* 31361, 0xdc5, U+0e25, KEY_Thai_loling, THAI CHARACTER LO LING */
0x6c, 0xa1, 0x00, 0x00, 0x0d, 0xc6, 0x00, 0x0e, 0x26, 'K','E','Y','_','T','h','a','i','_','l','u',0, /* 31382, 0xdc6, U+0e26, KEY_Thai_lu, THAI CHARACTER LU */
0xd1, 0x84, 0x00, 0x00, 0x0d, 0xc7, 0x00, 0x0e, 0x27, 'K','E','Y','_','T','h','a','i','_','w','o','w','a','e','n',0, /* 31407, 0xdc7, U+0e27, KEY_Thai_wowaen, THAI CHARACTER WO WAEN */
0xd0, 0xe5, 0x00, 0x00, 0x0d, 0xc8, 0x00, 0x0e, 0x28, 'K','E','Y','_','T','h','a','i','_','s','o','s','a','l','a',0, /* 31432, 0xdc8, U+0e28, KEY_Thai_sosala, THAI CHARACTER SO SALA */
0xd1, 0x43, 0x00, 0x00, 0x0d, 0xc9, 0x00, 0x0e, 0x29, 'K','E','Y','_','T','h','a','i','_','s','o','r','u','s','i',0, /* 31457, 0xdc9, U+0e29, KEY_Thai_sorusi, THAI CHARACTER SO RUSI */
0x68, 0x5f, 0x00, 0x00, 0x0d, 0xca, 0x00, 0x0e, 0x2a, 'K','E','Y','_','T','h','a','i','_','s','o','s','u','a',0, /* 31481, 0xdca, U+0e2a, KEY_Thai_sosua, THAI CHARACTER SO SUA */
0x67, 0x7a, 0x00, 0x00, 0x0d, 0xcb, 0x00, 0x0e, 0x2b, 'K','E','Y','_','T','h','a','i','_','h','o','h','i','p',0, /* 31505, 0xdcb, U+0e2b, KEY_Thai_hohip, THAI CHARACTER HO HIP */
0x9f, 0xdd, 0x00, 0x00, 0x0d, 0xcc, 0x00, 0x0e, 0x2c, 'K','E','Y','_','T','h','a','i','_','l','o','c','h','u','l','a',0, /* 31531, 0xdcc, U+0e2c, KEY_Thai_lochula, THAI CHARACTER LO CHULA */
0xb3, 0x8f, 0x00, 0x00, 0x0d, 0xcd, 0x00, 0x0e, 0x2d, 'K','E','Y','_','T','h','a','i','_','o','a','n','g',0, /* 31554, 0xdcd, U+0e2d, KEY_Thai_oang, THAI CHARACTER O ANG */
0x3f, 0xbd, 0x00, 0x00, 0x0d, 0xce, 0x00, 0x0e, 0x2e, 'K','E','Y','_','T','h','a','i','_','h','o','n','o','k','h','u','k',0, /* 31581, 0xdce, U+0e2e, KEY_Thai_honokhuk, THAI CHARACTER HO NOKHUK */
0x80, 0x5f, 0x00, 0x00, 0x0d, 0xcf, 0x00, 0x0e, 0x2f, 'K','E','Y','_','T','h','a','i','_','p','a','i','y','a','n','n','o','i',0, /* 31609, 0xdcf, U+0e2f, KEY_Thai_paiyannoi, THAI CHARACTER PAIYANNOI */
0x67, 0xc3, 0x00, 0x00, 0x0d, 0xd0, 0x00, 0x0e, 0x30, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a',0, /* 31633, 0xdd0, U+0e30, KEY_Thai_saraa, THAI CHARACTER SARA A */
0xf6, 0x6a, 0x00, 0x00, 0x0d, 0xd1, 0x00, 0x0e, 0x31, 'K','E','Y','_','T','h','a','i','_','m','a','i','h','a','n','a','k','a','t',0, /* 31662, 0xdd1, U+0e31, KEY_Thai_maihanakat, THAI CHARACTER MAI HAN-AKAT */
0xcf, 0xe7, 0x00, 0x00, 0x0d, 0xd2, 0x00, 0x0e, 0x32, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','a',0, /* 31687, 0xdd2, U+0e32, KEY_Thai_saraaa, THAI CHARACTER SARA AA */
0xcf, 0xf3, 0x00, 0x00, 0x0d, 0xd3, 0x00, 0x0e, 0x33, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','m',0, /* 31712, 0xdd3, U+0e33, KEY_Thai_saraam, THAI CHARACTER SARA AM */
0x67, 0xcb, 0x00, 0x00, 0x0d, 0xd4, 0x00, 0x0e, 0x34, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','i',0, /* 31736, 0xdd4, U+0e34, KEY_Thai_sarai, THAI CHARACTER SARA I */
0xcf, 0xff, 0x00, 0x00, 0x0d, 0xd5, 0x00, 0x0e, 0x35, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','i','i',0, /* 31761, 0xdd5, U+0e35, KEY_Thai_saraii, THAI CHARACTER SARA II */
0xd0, 0x13, 0x00, 0x00, 0x0d, 0xd6, 0x00, 0x0e, 0x36, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','u','e',0, /* 31786, 0xdd6, U+0e36, KEY_Thai_saraue, THAI CHARACTER SARA UE */
0xa0, 0x8b, 0x00, 0x00, 0x0d, 0xd7, 0x00, 0x0e, 0x37, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','u','e','e',0, /* 31812, 0xdd7, U+0e37, KEY_Thai_sarauee, THAI CHARACTER SARA UEE */
0x67, 0xd7, 0x00, 0x00, 0x0d, 0xd8, 0x00, 0x0e, 0x38, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','u',0, /* 31836, 0xdd8, U+0e38, KEY_Thai_sarau, THAI CHARACTER SARA U */
0xd0, 0x23, 0x00, 0x00, 0x0d, 0xd9, 0x00, 0x0e, 0x39, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','u','u',0, /* 31861, 0xdd9, U+0e39, KEY_Thai_sarauu, THAI CHARACTER SARA UU */
0xa0, 0x95, 0x00, 0x00, 0x0d, 0xda, 0x00, 0x0e, 0x3a, 'K','E','Y','_','T','h','a','i','_','p','h','i','n','t','h','u',0, /* 31887, 0xdda, U+0e3a, KEY_Thai_phinthu, THAI CHARACTER PHINTHU */
0x66, 0xc7, 0x00, 0x00, 0x0d, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','T','h','a','i','_','m','a','i','h','a','n','a','k','a','t','_','m','a','i','t','h','o',0, /* 31923, 0xdde, KEY_Thai_maihanakat_maitho */
0xb3, 0x28, 0x00, 0x00, 0x0d, 0xdf, 0x00, 0x0e, 0x3f, 'K','E','Y','_','T','h','a','i','_','b','a','h','t',0, /* 31946, 0xddf, U+0e3f, KEY_Thai_baht, THAI CURRENCY SYMBOL BAHT */
0x67, 0xc7, 0x00, 0x00, 0x0d, 0xe0, 0x00, 0x0e, 0x40, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','e',0, /* 31970, 0xde0, U+0e40, KEY_Thai_sarae, THAI CHARACTER SARA E */
0xcf, 0xeb, 0x00, 0x00, 0x0d, 0xe1, 0x00, 0x0e, 0x41, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','e',0, /* 31995, 0xde1, U+0e41, KEY_Thai_saraae, THAI CHARACTER SARA AE */
0x67, 0xd1, 0x00, 0x00, 0x0d, 0xe2, 0x00, 0x0e, 0x42, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','o',0, /* 32019, 0xde2, U+0e42, KEY_Thai_sarao, THAI CHARACTER SARA O */
0x2b, 0xdc, 0x00, 0x00, 0x0d, 0xe3, 0x00, 0x0e, 0x43, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','i','m','a','i','m','u','a','n',0, /* 32051, 0xde3, U+0e43, KEY_Thai_saraaimaimuan, THAI CHARACTER SARA AI MAIMUAN */
0x57, 0x93, 0x00, 0x00, 0x0d, 0xe4, 0x00, 0x0e, 0x44, 'K','E','Y','_','T','h','a','i','_','s','a','r','a','a','i','m','a','i','m','a','l','a','i',0, /* 32084, 0xde4, U+0e44, KEY_Thai_saraaimaimalai, THAI CHARACTER SARA AI MAIMALAI */
0xed, 0xcd, 0x00, 0x00, 0x0d, 0xe5, 0x00, 0x0e, 0x45, 'K','E','Y','_','T','h','a','i','_','l','a','k','k','h','a','n','g','y','a','o',0, /* 32114, 0xde5, U+0e45, KEY_Thai_lakkhangyao, THAI CHARACTER LAKKHANGYAO */
0x3e, 0x75, 0x00, 0x00, 0x0d, 0xe6, 0x00, 0x0e, 0x46, 'K','E','Y','_','T','h','a','i','_','m','a','i','y','a','m','o','k',0, /* 32141, 0xde6, U+0e46, KEY_Thai_maiyamok, THAI CHARACTER MAIYAMOK */
0x7c, 0x89, 0x00, 0x00, 0x0d, 0xe7, 0x00, 0x0e, 0x47, 'K','E','Y','_','T','h','a','i','_','m','a','i','t','a','i','k','h','u',0, /* 32169, 0xde7, U+0e47, KEY_Thai_maitaikhu, THAI CHARACTER MAITAIKHU */
0x67, 0x51, 0x00, 0x00, 0x0d, 0xe8, 0x00, 0x0e, 0x48, 'K','E','Y','_','T','h','a','i','_','m','a','i','e','k',0, /* 32193, 0xde8, U+0e48, KEY_Thai_maiek, THAI CHARACTER MAI EK */
0xcf, 0x47, 0x00, 0x00, 0x0d, 0xe9, 0x00, 0x0e, 0x49, 'K','E','Y','_','T','h','a','i','_','m','a','i','t','h','o',0, /* 32218, 0xde9, U+0e49, KEY_Thai_maitho, THAI CHARACTER MAI THO */
0xcf, 0x55, 0x00, 0x00, 0x0d, 0xea, 0x00, 0x0e, 0x4a, 'K','E','Y','_','T','h','a','i','_','m','a','i','t','r','i',0, /* 32243, 0xdea, U+0e4a, KEY_Thai_maitri, THAI CHARACTER MAI TRI */
0xec, 0x53, 0x00, 0x00, 0x0d, 0xeb, 0x00, 0x0e, 0x4b, 'K','E','Y','_','T','h','a','i','_','m','a','i','c','h','a','t','t','a','w','a',0, /* 32273, 0xdeb, U+0e4b, KEY_Thai_maichattawa, THAI CHARACTER MAI CHATTAWA */
0x16, 0x3e, 0x00, 0x00, 0x0d, 0xec, 0x00, 0x0e, 0x4c, 'K','E','Y','_','T','h','a','i','_','t','h','a','n','t','h','a','k','h','a','t',0, /* 32303, 0xdec, U+0e4c, KEY_Thai_thanthakhat, THAI CHARACTER THANTHAKHAT */
0x40, 0x0e, 0x00, 0x00, 0x0d, 0xed, 0x00, 0x0e, 0x4d, 'K','E','Y','_','T','h','a','i','_','n','i','k','h','a','h','i','t',0, /* 32330, 0xded, U+0e4d, KEY_Thai_nikhahit, THAI CHARACTER NIKHAHIT */
0xcf, 0x8c, 0x00, 0x00, 0x0d, 0xf0, 0x00, 0x0e, 0x50, 'K','E','Y','_','T','h','a','i','_','l','e','k','s','u','n',0, /* 32355, 0xdf0, U+0e50, KEY_Thai_leksun, THAI DIGIT ZERO */
0x9f, 0x57, 0x00, 0x00, 0x0d, 0xf1, 0x00, 0x0e, 0x51, 'K','E','Y','_','T','h','a','i','_','l','e','k','n','u','n','g',0, /* 32381, 0xdf1, U+0e51, KEY_Thai_leknung, THAI DIGIT ONE */
0x9f, 0x67, 0x00, 0x00, 0x0d, 0xf2, 0x00, 0x0e, 0x52, 'K','E','Y','_','T','h','a','i','_','l','e','k','s','o','n','g',0, /* 32407, 0xdf2, U+0e52, KEY_Thai_leksong, THAI DIGIT TWO */
0xcf, 0x63, 0x00, 0x00, 0x0d, 0xf3, 0x00, 0x0e, 0x53, 'K','E','Y','_','T','h','a','i','_','l','e','k','s','a','m',0, /* 32432, 0xdf3, U+0e53, KEY_Thai_leksam, THAI DIGIT THREE */
0x67, 0x83, 0x00, 0x00, 0x0d, 0xf4, 0x00, 0x0e, 0x54, 'K','E','Y','_','T','h','a','i','_','l','e','k','s','i',0, /* 32456, 0xdf4, U+0e54, KEY_Thai_leksi, THAI DIGIT FOUR */
0x67, 0x65, 0x00, 0x00, 0x0d, 0xf5, 0x00, 0x0e, 0x55, 'K','E','Y','_','T','h','a','i','_','l','e','k','h','a',0, /* 32480, 0xdf5, U+0e55, KEY_Thai_lekha, THAI DIGIT FIVE */
0xcf, 0x51, 0x00, 0x00, 0x0d, 0xf6, 0x00, 0x0e, 0x56, 'K','E','Y','_','T','h','a','i','_','l','e','k','h','o','k',0, /* 32505, 0xdf6, U+0e56, KEY_Thai_lekhok, THAI DIGIT SIX */
0x9e, 0xc6, 0x00, 0x00, 0x0d, 0xf7, 0x00, 0x0e, 0x57, 'K','E','Y','_','T','h','a','i','_','l','e','k','c','h','e','t',0, /* 32531, 0xdf7, U+0e57, KEY_Thai_lekchet, THAI DIGIT SEVEN */
0x9f, 0x12, 0x00, 0x00, 0x0d, 0xf8, 0x00, 0x0e, 0x58, 'K','E','Y','_','T','h','a','i','_','l','e','k','p','a','e','t',0, /* 32557, 0xdf8, U+0e58, KEY_Thai_lekpaet, THAI DIGIT EIGHT */
0xcf, 0x45, 0x00, 0x00, 0x0d, 0xf9, 0x00, 0x0e, 0x59, 'K','E','Y','_','T','h','a','i','_','l','e','k','k','a','o',0, /* 32582, 0xdf9, U+0e59, KEY_Thai_lekkao, THAI DIGIT NINE */
0x34, 0xb2, 0x00, 0x00, 0xff, 0x31, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l',0, /* 32602, 0xff31, KEY_Hangul, Hangul start/stop(toggle) */
0x44, 0x0c, 0x00, 0x00, 0xff, 0x32, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','t','a','r','t',0, /* 32628, 0xff32, KEY_Hangul_Start, Hangul start */
0x50, 0x6c, 0x00, 0x00, 0xff, 0x33, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','E','n','d',0, /* 32652, 0xff33, KEY_Hangul_End, Hangul end, English start */
0x42, 0xd5, 0x00, 0x00, 0xff, 0x34, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','H','a','n','j','a',0, /* 32678, 0xff34, KEY_Hangul_Hanja, Start Hangul->Hanja Conversion */
0xa1, 0x4d, 0x00, 0x00, 0xff, 0x35, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','a','m','o',0, /* 32703, 0xff35, KEY_Hangul_Jamo, Hangul Jamo mode */
0x88, 0x11, 0x00, 0x00, 0xff, 0x36, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','o','m','a','j','a',0, /* 32730, 0xff36, KEY_Hangul_Romaja, Hangul Romaja mode */
0x33, 0x3e, 0x00, 0x00, 0xff, 0x37, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','C','o','d','e','i','n','p','u','t',0, /* 32760, 0xff37, KEY_Hangul_Codeinput, Hangul code input mode */
0x86, 0xb5, 0x00, 0x00, 0xff, 0x38, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','e','o','n','j','a',0, /* 32787, 0xff38, KEY_Hangul_Jeonja, Jeonja mode */
0x42, 0x75, 0x00, 0x00, 0xff, 0x39, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','B','a','n','j','a',0, /* 32813, 0xff39, KEY_Hangul_Banja, Banja mode */
0x1e, 0x95, 0x00, 0x00, 0xff, 0x3a, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','r','e','H','a','n','j','a',0, /* 32842, 0xff3a, KEY_Hangul_PreHanja, Pre Hanja conversion */
0x43, 0x35, 0x00, 0x00, 0xff, 0x3b, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','o','s','t','H','a','n','j','a',0, /* 32872, 0xff3b, KEY_Hangul_PostHanja, Post Hanja conversion */
0x9a, 0x01, 0x00, 0x00, 0xff, 0x3c, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','i','n','g','l','e','C','a','n','d','i','d','a','t','e',0, /* 32908, 0xff3c, KEY_Hangul_SingleCandidate, Single candidate */
0x32, 0x01, 0x00, 0x00, 0xff, 0x3d, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','M','u','l','t','i','p','l','e','C','a','n','d','i','d','a','t','e',0, /* 32946, 0xff3d, KEY_Hangul_MultipleCandidate, Multiple candidate */
0x6a, 0x01, 0x00, 0x00, 0xff, 0x3e, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','r','e','v','i','o','u','s','C','a','n','d','i','d','a','t','e',0, /* 32984, 0xff3e, KEY_Hangul_PreviousCandidate, Previous candidate */
0x10, 0x7a, 0x00, 0x00, 0xff, 0x3f, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','p','e','c','i','a','l',0, /* 33012, 0xff3f, KEY_Hangul_Special, Special symbols */
0x8c, 0xd6, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','s','w','i','t','c','h',0, /* 33039, 0xff7e, KEY_Hangul_switch, Alias for mode_switch */
0x87, 0x51, 0x00, 0x00, 0x0e, 0xa1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','K','i','y','e','o','g',0, /* 33066, 0xea1, KEY_Hangul_Kiyeog */
0x12, 0x51, 0x00, 0x00, 0x0e, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','K','i','y','e','o','g',0, /* 33098, 0xea2, KEY_Hangul_SsangKiyeog */
0x7a, 0x9d, 0x00, 0x00, 0x0e, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','K','i','y','e','o','g','S','i','o','s',0, /* 33129, 0xea3, KEY_Hangul_KiyeogSios */
0x43, 0x74, 0x00, 0x00, 0x0e, 0xa4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','N','i','e','u','n',0, /* 33155, 0xea4, KEY_Hangul_Nieun */
0x79, 0x50, 0x00, 0x00, 0x0e, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','N','i','e','u','n','J','i','e','u','j',0, /* 33186, 0xea5, KEY_Hangul_NieunJieuj */
0x79, 0x2e, 0x00, 0x00, 0x0e, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','N','i','e','u','n','H','i','e','u','h',0, /* 33217, 0xea6, KEY_Hangul_NieunHieuh */
0x86, 0x0a, 0x00, 0x00, 0x0e, 0xa7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','D','i','k','e','u','d',0, /* 33244, 0xea7, KEY_Hangul_Dikeud */
0x11, 0x0a, 0x00, 0x00, 0x0e, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','D','i','k','e','u','d',0, /* 33276, 0xea8, KEY_Hangul_SsangDikeud */
0x43, 0xb2, 0x00, 0x00, 0x0e, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l',0, /* 33302, 0xea9, KEY_Hangul_Rieul */
0x03, 0x11, 0x00, 0x00, 0x0e, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','K','i','y','e','o','g',0, /* 33334, 0xeaa, KEY_Hangul_RieulKiyeog */
0x81, 0x43, 0x00, 0x00, 0x0e, 0xab, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','M','i','e','u','m',0, /* 33365, 0xeab, KEY_Hangul_RieulMieum */
0x81, 0x68, 0x00, 0x00, 0x0e, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','P','i','e','u','b',0, /* 33396, 0xeac, KEY_Hangul_RieulPieub */
0x40, 0xad, 0x00, 0x00, 0x0e, 0xad, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','S','i','o','s',0, /* 33426, 0xead, KEY_Hangul_RieulSios */
0x81, 0xba, 0x00, 0x00, 0x0e, 0xae, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','T','i','e','u','t',0, /* 33457, 0xeae, KEY_Hangul_RieulTieut */
0x03, 0x2c, 0x00, 0x00, 0x0e, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','P','h','i','e','u','f',0, /* 33489, 0xeaf, KEY_Hangul_RieulPhieuf */
0x80, 0xee, 0x00, 0x00, 0x0e, 0xb0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','H','i','e','u','h',0, /* 33520, 0xeb0, KEY_Hangul_RieulHieuh */
0x43, 0x63, 0x00, 0x00, 0x0e, 0xb1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','M','i','e','u','m',0, /* 33546, 0xeb1, KEY_Hangul_Mieum */
0x43, 0x88, 0x00, 0x00, 0x0e, 0xb2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','i','e','u','b',0, /* 33572, 0xeb2, KEY_Hangul_Pieub */
0x89, 0x08, 0x00, 0x00, 0x0e, 0xb3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','P','i','e','u','b',0, /* 33603, 0xeb3, KEY_Hangul_SsangPieub */
0x3e, 0x0d, 0x00, 0x00, 0x0e, 0xb4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','i','e','u','b','S','i','o','s',0, /* 33633, 0xeb4, KEY_Hangul_PieubSios */
0xa1, 0xbd, 0x00, 0x00, 0x0e, 0xb5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','i','o','s',0, /* 33658, 0xeb5, KEY_Hangul_Sios */
0x44, 0x7d, 0x00, 0x00, 0x0e, 0xb6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','S','i','o','s',0, /* 33688, 0xeb6, KEY_Hangul_SsangSios */
0x43, 0x2f, 0x00, 0x00, 0x0e, 0xb7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','I','e','u','n','g',0, /* 33714, 0xeb7, KEY_Hangul_Ieung */
0x43, 0x30, 0x00, 0x00, 0x0e, 0xb8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','i','e','u','j',0, /* 33740, 0xeb8, KEY_Hangul_Jieuj */
0x88, 0xb0, 0x00, 0x00, 0x0e, 0xb9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','s','a','n','g','J','i','e','u','j',0, /* 33771, 0xeb9, KEY_Hangul_SsangJieuj */
0x42, 0xb9, 0x00, 0x00, 0x0e, 0xba, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','C','i','e','u','c',0, /* 33797, 0xeba, KEY_Hangul_Cieuc */
0x86, 0xd7, 0x00, 0x00, 0x0e, 0xbb, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','K','h','i','e','u','q',0, /* 33824, 0xebb, KEY_Hangul_Khieuq */
0x43, 0xda, 0x00, 0x00, 0x0e, 0xbc, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','T','i','e','u','t',0, /* 33850, 0xebc, KEY_Hangul_Tieut */
0x87, 0x6c, 0x00, 0x00, 0x0e, 0xbd, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','h','i','e','u','f',0, /* 33877, 0xebd, KEY_Hangul_Phieuf */
0x43, 0x0e, 0x00, 0x00, 0x0e, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','H','i','e','u','h',0, /* 33903, 0xebe, KEY_Hangul_Hieuh */
0xd3, 0xc7, 0x00, 0x00, 0x0e, 0xbf, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','A',0, /* 33925, 0xebf, KEY_Hangul_A */
0xa7, 0xd3, 0x00, 0x00, 0x0e, 0xc0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','A','E',0, /* 33948, 0xec0, KEY_Hangul_AE */
0xa7, 0xff, 0x00, 0x00, 0x0e, 0xc1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','A',0, /* 33971, 0xec1, KEY_Hangul_YA */
0x50, 0x43, 0x00, 0x00, 0x0e, 0xc2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','A','E',0, /* 33995, 0xec2, KEY_Hangul_YAE */
0xa7, 0xe5, 0x00, 0x00, 0x0e, 0xc3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','E','O',0, /* 34018, 0xec3, KEY_Hangul_EO */
0xd3, 0xcb, 0x00, 0x00, 0x0e, 0xc4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','E',0, /* 34040, 0xec4, KEY_Hangul_E */
0x50, 0x55, 0x00, 0x00, 0x0e, 0xc5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','E','O',0, /* 34064, 0xec5, KEY_Hangul_YEO */
0xa8, 0x03, 0x00, 0x00, 0x0e, 0xc6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','E',0, /* 34087, 0xec6, KEY_Hangul_YE */
0xd3, 0xd5, 0x00, 0x00, 0x0e, 0xc7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','O',0, /* 34109, 0xec7, KEY_Hangul_O */
0xa7, 0xfb, 0x00, 0x00, 0x0e, 0xc8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','A',0, /* 34132, 0xec8, KEY_Hangul_WA */
0x50, 0x3b, 0x00, 0x00, 0x0e, 0xc9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','A','E',0, /* 34156, 0xec9, KEY_Hangul_WAE */
0xa7, 0xef, 0x00, 0x00, 0x0e, 0xca, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','O','E',0, /* 34179, 0xeca, KEY_Hangul_OE */
0xa8, 0x0d, 0x00, 0x00, 0x0e, 0xcb, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','O',0, /* 34202, 0xecb, KEY_Hangul_YO */
0xd3, 0xdb, 0x00, 0x00, 0x0e, 0xcc, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','U',0, /* 34224, 0xecc, KEY_Hangul_U */
0x50, 0x4d, 0x00, 0x00, 0x0e, 0xcd, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','E','O',0, /* 34248, 0xecd, KEY_Hangul_WEO */
0xa7, 0xff, 0x00, 0x00, 0x0e, 0xce, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','E',0, /* 34271, 0xece, KEY_Hangul_WE */
0xa8, 0x03, 0x00, 0x00, 0x0e, 0xcf, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','W','I',0, /* 34294, 0xecf, KEY_Hangul_WI */
0xa8, 0x13, 0x00, 0x00, 0x0e, 0xd0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','U',0, /* 34317, 0xed0, KEY_Hangul_YU */
0xa7, 0xeb, 0x00, 0x00, 0x0e, 0xd1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','E','U',0, /* 34340, 0xed1, KEY_Hangul_EU */
0xa8, 0x07, 0x00, 0x00, 0x0e, 0xd2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','I',0, /* 34363, 0xed2, KEY_Hangul_YI */
0xd3, 0xcf, 0x00, 0x00, 0x0e, 0xd3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','I',0, /* 34385, 0xed3, KEY_Hangul_I */
0x16, 0x51, 0x00, 0x00, 0x0e, 0xd4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','K','i','y','e','o','g',0, /* 34414, 0xed4, KEY_Hangul_J_Kiyeog */
0xf2, 0x51, 0x00, 0x00, 0x0e, 0xd5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','S','s','a','n','g','K','i','y','e','o','g',0, /* 34448, 0xed5, KEY_Hangul_J_SsangKiyeog */
0x6a, 0x9d, 0x00, 0x00, 0x0e, 0xd6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','K','i','y','e','o','g','S','i','o','s',0, /* 34481, 0xed6, KEY_Hangul_J_KiyeogSios */
0x0a, 0xf4, 0x00, 0x00, 0x0e, 0xd7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','N','i','e','u','n',0, /* 34509, 0xed7, KEY_Hangul_J_Nieun */
0x69, 0x50, 0x00, 0x00, 0x0e, 0xd8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','N','i','e','u','n','J','i','e','u','j',0, /* 34542, 0xed8, KEY_Hangul_J_NieunJieuj */
0x69, 0x2e, 0x00, 0x00, 0x0e, 0xd9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','N','i','e','u','n','H','i','e','u','h',0, /* 34575, 0xed9, KEY_Hangul_J_NieunHieuh */
0x15, 0x0a, 0x00, 0x00, 0x0e, 0xda, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','D','i','k','e','u','d',0, /* 34604, 0xeda, KEY_Hangul_J_Dikeud */
0x0b, 0x32, 0x00, 0x00, 0x0e, 0xdb, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l',0, /* 34632, 0xedb, KEY_Hangul_J_Rieul */
0xe3, 0x11, 0x00, 0x00, 0x0e, 0xdc, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','K','i','y','e','o','g',0, /* 34666, 0xedc, KEY_Hangul_J_RieulKiyeog */
0x71, 0x43, 0x00, 0x00, 0x0e, 0xdd, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','M','i','e','u','m',0, /* 34699, 0xedd, KEY_Hangul_J_RieulMieum */
0x71, 0x68, 0x00, 0x00, 0x0e, 0xde, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','P','i','e','u','b',0, /* 34732, 0xede, KEY_Hangul_J_RieulPieub */
0xb8, 0xad, 0x00, 0x00, 0x0e, 0xdf, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','S','i','o','s',0, /* 34764, 0xedf, KEY_Hangul_J_RieulSios */
0x71, 0xba, 0x00, 0x00, 0x0e, 0xe0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','T','i','e','u','t',0, /* 34797, 0xee0, KEY_Hangul_J_RieulTieut */
0xe3, 0x2c, 0x00, 0x00, 0x0e, 0xe1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','P','h','i','e','u','f',0, /* 34831, 0xee1, KEY_Hangul_J_RieulPhieuf */
0x70, 0xee, 0x00, 0x00, 0x0e, 0xe2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','R','i','e','u','l','H','i','e','u','h',0, /* 34864, 0xee2, KEY_Hangul_J_RieulHieuh */
0x0a, 0xe3, 0x00, 0x00, 0x0e, 0xe3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','M','i','e','u','m',0, /* 34892, 0xee3, KEY_Hangul_J_Mieum */
0x0b, 0x08, 0x00, 0x00, 0x0e, 0xe4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','P','i','e','u','b',0, /* 34920, 0xee4, KEY_Hangul_J_Pieub */
0xb6, 0x0d, 0x00, 0x00, 0x0e, 0xe5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','P','i','e','u','b','S','i','o','s',0, /* 34952, 0xee5, KEY_Hangul_J_PieubSios */
0x85, 0x7d, 0x00, 0x00, 0x0e, 0xe6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','S','i','o','s',0, /* 34979, 0xee6, KEY_Hangul_J_Sios */
0xbc, 0x7d, 0x00, 0x00, 0x0e, 0xe7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','S','s','a','n','g','S','i','o','s',0, /* 35011, 0xee7, KEY_Hangul_J_SsangSios */
0x0a, 0xaf, 0x00, 0x00, 0x0e, 0xe8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','I','e','u','n','g',0, /* 35039, 0xee8, KEY_Hangul_J_Ieung */
0x0a, 0xb0, 0x00, 0x00, 0x0e, 0xe9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','J','i','e','u','j',0, /* 35067, 0xee9, KEY_Hangul_J_Jieuj */
0x0a, 0x39, 0x00, 0x00, 0x0e, 0xea, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','C','i','e','u','c',0, /* 35095, 0xeea, KEY_Hangul_J_Cieuc */
0x15, 0xd7, 0x00, 0x00, 0x0e, 0xeb, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','K','h','i','e','u','q',0, /* 35124, 0xeeb, KEY_Hangul_J_Khieuq */
0x0b, 0x5a, 0x00, 0x00, 0x0e, 0xec, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','T','i','e','u','t',0, /* 35152, 0xeec, KEY_Hangul_J_Tieut */
0x16, 0x6c, 0x00, 0x00, 0x0e, 0xed, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','P','h','i','e','u','f',0, /* 35181, 0xeed, KEY_Hangul_J_Phieuf */
0x0a, 0x8e, 0x00, 0x00, 0x0e, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','H','i','e','u','h',0, /* 35209, 0xeee, KEY_Hangul_J_Hieuh */
0x98, 0xae, 0x00, 0x00, 0x0e, 0xef, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','R','i','e','u','l','Y','e','o','r','i','n','H','i','e','u','h',0, /* 35246, 0xeef, KEY_Hangul_RieulYeorinHieuh */
0x7f, 0x63, 0x00, 0x00, 0x0e, 0xf0, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','u','n','k','y','e','o','n','g','e','u','m','M','i','e','u','m',0, /* 35284, 0xef0, KEY_Hangul_SunkyeongeumMieum */
0x7f, 0x88, 0x00, 0x00, 0x0e, 0xf1, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','u','n','k','y','e','o','n','g','e','u','m','P','i','e','u','b',0, /* 35322, 0xef1, KEY_Hangul_SunkyeongeumPieub */
0x0e, 0x0d, 0x00, 0x00, 0x0e, 0xf2, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','P','a','n','S','i','o','s',0, /* 35350, 0xef2, KEY_Hangul_PanSios */
0xb1, 0xcf, 0x00, 0x00, 0x0e, 0xf3, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','K','k','o','g','j','i','D','a','l','r','i','n','I','e','u','n','g',0, /* 35388, 0xef3, KEY_Hangul_KkogjiDalrinIeung */
0xff, 0x6c, 0x00, 0x00, 0x0e, 0xf4, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','S','u','n','k','y','e','o','n','g','e','u','m','P','h','i','e','u','f',0, /* 35427, 0xef4, KEY_Hangul_SunkyeongeumPhieuf */
0x20, 0xae, 0x00, 0x00, 0x0e, 0xf5, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','Y','e','o','r','i','n','H','i','e','u','h',0, /* 35459, 0xef5, KEY_Hangul_YeorinHieuh */
0x42, 0x8f, 0x00, 0x00, 0x0e, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','A','r','a','e','A',0, /* 35485, 0xef6, KEY_Hangul_AraeA */
0x85, 0x63, 0x00, 0x00, 0x0e, 0xf7, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','A','r','a','e','A','E',0, /* 35512, 0xef7, KEY_Hangul_AraeAE */
0x2c, 0x0d, 0x00, 0x00, 0x0e, 0xf8, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','P','a','n','S','i','o','s',0, /* 35542, 0xef8, KEY_Hangul_J_PanSios */
0xb1, 0xcf, 0x00, 0x00, 0x0e, 0xf9, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','K','k','o','g','j','i','D','a','l','r','i','n','I','e','u','n','g',0, /* 35582, 0xef9, KEY_Hangul_J_KkogjiDalrinIeung */
0x00, 0xae, 0x00, 0x00, 0x0e, 0xfa, 0x00, 0x00, 0x00, 'K','E','Y','_','H','a','n','g','u','l','_','J','_','Y','e','o','r','i','n','H','i','e','u','h',0, /* 35616, 0xefa, KEY_Hangul_J_YeorinHieuh */
0x63, 0xe0, 0x00, 0x00, 0x0e, 0xff, 0x00, 0x00, 0x00, 'K','E','Y','_','K','o','r','e','a','n','_','W','o','n',0, /* 35640, 0xeff, KEY_Korean_Won, (U+20A9 WON SIGN) */
0x8a, 0x25, 0x01, 0x00, 0x05, 0x87, 0x00, 0x05, 0x87, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','l','i','g','a','t','u','r','e','_','e','w',0, /* 35674, 0x1000587, U+0587, KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */
0x63, 0xa6, 0x01, 0x00, 0x05, 0x89, 0x00, 0x05, 0x89, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','f','u','l','l','_','s','t','o','p',0, /* 35706, 0x1000589, U+0589, KEY_Armenian_full_stop, ARMENIAN FULL STOP */
0x36, 0x12, 0x01, 0x00, 0x05, 0x89, 0x00, 0x05, 0x89, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','v','e','r','j','a','k','e','t',0, /* 35737, 0x1000589, U+0589, KEY_Armenian_verjaket, ARMENIAN FULL STOP */
0x50, 0x2b, 0x01, 0x00, 0x05, 0x5d, 0x00, 0x05, 0x5d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','s','e','p','a','r','a','t','i','o','n','_','m','a','r','k',0, /* 35775, 0x100055d, U+055d, KEY_Armenian_separation_mark, ARMENIAN COMMA */
0x49, 0x1e, 0x01, 0x00, 0x05, 0x5d, 0x00, 0x05, 0x5d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','b','u','t',0, /* 35801, 0x100055d, U+055d, KEY_Armenian_but, ARMENIAN COMMA */
0x4c, 0xa8, 0x01, 0x00, 0x05, 0x8a, 0x00, 0x05, 0x8a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','h','y','p','h','e','n',0, /* 35830, 0x100058a, U+058a, KEY_Armenian_hyphen, ARMENIAN HYPHEN */
0x37, 0xb9, 0x01, 0x00, 0x05, 0x8a, 0x00, 0x05, 0x8a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','y','e','n','t','a','m','n','a',0, /* 35861, 0x100058a, U+058a, KEY_Armenian_yentamna, ARMENIAN HYPHEN */
0x4b, 0xd7, 0x01, 0x00, 0x05, 0x5c, 0x00, 0x05, 0x5c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','e','x','c','l','a','m',0, /* 35890, 0x100055c, U+055c, KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */
0x4a, 0x9d, 0x01, 0x00, 0x05, 0x5c, 0x00, 0x05, 0x5c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','m','a','n','a','k',0, /* 35919, 0x100055c, U+055c, KEY_Armenian_amanak, ARMENIAN EXCLAMATION MARK */
0x4a, 0x0c, 0x01, 0x00, 0x05, 0x5b, 0x00, 0x05, 0x5b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','c','c','e','n','t',0, /* 35948, 0x100055b, U+055b, KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */
0x4c, 0xd8, 0x01, 0x00, 0x05, 0x5b, 0x00, 0x05, 0x5b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','s','h','e','s','h','t',0, /* 35977, 0x100055b, U+055b, KEY_Armenian_shesht, ARMENIAN EMPHASIS MARK */
0x37, 0x20, 0x01, 0x00, 0x05, 0x5e, 0x00, 0x05, 0x5e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','q','u','e','s','t','i','o','n',0, /* 36008, 0x100055e, U+055e, KEY_Armenian_question, ARMENIAN QUESTION MARK */
0x4c, 0x91, 0x01, 0x00, 0x05, 0x5e, 0x00, 0x05, 0x5e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','p','a','r','u','y','k',0, /* 36037, 0x100055e, U+055e, KEY_Armenian_paruyk, ARMENIAN QUESTION MARK */
0x48, 0x30, 0x01, 0x00, 0x05, 0x31, 0x00, 0x05, 0x31, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','A','Y','B',0, /* 36063, 0x1000531, U+0531, KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */
0x49, 0x10, 0x01, 0x00, 0x05, 0x61, 0x00, 0x05, 0x61, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','y','b',0, /* 36089, 0x1000561, U+0561, KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */
0x48, 0x18, 0x01, 0x00, 0x05, 0x32, 0x00, 0x05, 0x32, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','B','E','N',0, /* 36115, 0x1000532, U+0532, KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */
0x48, 0xf8, 0x01, 0x00, 0x05, 0x62, 0x00, 0x05, 0x62, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','b','e','n',0, /* 36141, 0x1000562, U+0562, KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */
0x48, 0x33, 0x01, 0x00, 0x05, 0x33, 0x00, 0x05, 0x33, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','G','I','M',0, /* 36167, 0x1000533, U+0533, KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */
0x49, 0x13, 0x01, 0x00, 0x05, 0x63, 0x00, 0x05, 0x63, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','g','i','m',0, /* 36193, 0x1000563, U+0563, KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */
0xa3, 0xe5, 0x01, 0x00, 0x05, 0x34, 0x00, 0x05, 0x34, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','D','A',0, /* 36218, 0x1000534, U+0534, KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */
0xa4, 0x45, 0x01, 0x00, 0x05, 0x64, 0x00, 0x05, 0x64, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','d','a',0, /* 36243, 0x1000564, U+0564, KEY_Armenian_da, ARMENIAN SMALL LETTER DA */
0x91, 0x1a, 0x01, 0x00, 0x05, 0x35, 0x00, 0x05, 0x35, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','Y','E','C','H',0, /* 36270, 0x1000535, U+0535, KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */
0x92, 0xfa, 0x01, 0x00, 0x05, 0x65, 0x00, 0x05, 0x65, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','y','e','c','h',0, /* 36297, 0x1000565, U+0565, KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */
0xa4, 0x11, 0x01, 0x00, 0x05, 0x36, 0x00, 0x05, 0x36, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','Z','A',0, /* 36322, 0x1000536, U+0536, KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */
0xa4, 0x71, 0x01, 0x00, 0x05, 0x66, 0x00, 0x05, 0x66, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','z','a',0, /* 36347, 0x1000566, U+0566, KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */
0x51, 0xd3, 0x01, 0x00, 0x05, 0x37, 0x00, 0x05, 0x37, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','E',0, /* 36371, 0x1000537, U+0537, KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */
0x51, 0xf3, 0x01, 0x00, 0x05, 0x67, 0x00, 0x05, 0x67, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','e',0, /* 36395, 0x1000567, U+0567, KEY_Armenian_e, ARMENIAN SMALL LETTER EH */
0xa3, 0xf2, 0x01, 0x00, 0x05, 0x38, 0x00, 0x05, 0x38, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','A','T',0, /* 36420, 0x1000538, U+0538, KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */
0xa4, 0x52, 0x01, 0x00, 0x05, 0x68, 0x00, 0x05, 0x68, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','t',0, /* 36445, 0x1000568, U+0568, KEY_Armenian_at, ARMENIAN SMALL LETTER ET */
0xa4, 0x13, 0x01, 0x00, 0x05, 0x39, 0x00, 0x05, 0x39, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','O',0, /* 36470, 0x1000539, U+0539, KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */
0xa4, 0x73, 0x01, 0x00, 0x05, 0x69, 0x00, 0x05, 0x69, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','o',0, /* 36495, 0x1000569, U+0569, KEY_Armenian_to, ARMENIAN SMALL LETTER TO */
0x48, 0x75, 0x01, 0x00, 0x05, 0x3a, 0x00, 0x05, 0x3a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','Z','H','E',0, /* 36521, 0x100053a, U+053a, KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */
0x49, 0x55, 0x01, 0x00, 0x05, 0x6a, 0x00, 0x05, 0x6a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','z','h','e',0, /* 36547, 0x100056a, U+056a, KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */
0x48, 0x41, 0x01, 0x00, 0x05, 0x3b, 0x00, 0x05, 0x3b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','I','N','I',0, /* 36573, 0x100053b, U+053b, KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */
0x49, 0x21, 0x01, 0x00, 0x05, 0x6b, 0x00, 0x05, 0x6b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','i','n','i',0, /* 36599, 0x100056b, U+056b, KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */
0x91, 0x2c, 0x01, 0x00, 0x05, 0x3c, 0x00, 0x05, 0x3c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','L','Y','U','N',0, /* 36626, 0x100053c, U+053c, KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */
0x93, 0x0c, 0x01, 0x00, 0x05, 0x6c, 0x00, 0x05, 0x6c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','l','y','u','n',0, /* 36653, 0x100056c, U+056c, KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */
0x48, 0x39, 0x01, 0x00, 0x05, 0x3d, 0x00, 0x05, 0x3d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','K','H','E',0, /* 36679, 0x100053d, U+053d, KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */
0x49, 0x19, 0x01, 0x00, 0x05, 0x6d, 0x00, 0x05, 0x6d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','k','h','e',0, /* 36705, 0x100056d, U+056d, KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */
0x48, 0x6f, 0x01, 0x00, 0x05, 0x3e, 0x00, 0x05, 0x3e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','S','A',0, /* 36731, 0x100053e, U+053e, KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */
0x49, 0x4f, 0x01, 0x00, 0x05, 0x6e, 0x00, 0x05, 0x6e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','s','a',0, /* 36757, 0x100056e, U+056e, KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */
0x48, 0x3c, 0x01, 0x00, 0x05, 0x3f, 0x00, 0x05, 0x3f, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','K','E','N',0, /* 36783, 0x100053f, U+053f, KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */
0x49, 0x1c, 0x01, 0x00, 0x05, 0x6f, 0x00, 0x05, 0x6f, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','k','e','n',0, /* 36809, 0x100056f, U+056f, KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */
0xa3, 0xfb, 0x01, 0x00, 0x05, 0x40, 0x00, 0x05, 0x40, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','H','O',0, /* 36834, 0x1000540, U+0540, KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */
0xa4, 0x5b, 0x01, 0x00, 0x05, 0x70, 0x00, 0x05, 0x70, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','h','o',0, /* 36859, 0x1000570, U+0570, KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */
0x48, 0x3d, 0x01, 0x00, 0x05, 0x41, 0x00, 0x05, 0x41, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','D','Z','A',0, /* 36885, 0x1000541, U+0541, KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */
0x49, 0x1d, 0x01, 0x00, 0x05, 0x71, 0x00, 0x05, 0x71, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','d','z','a',0, /* 36911, 0x1000571, U+0571, KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */
0x90, 0x9e, 0x01, 0x00, 0x05, 0x42, 0x00, 0x05, 0x42, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','G','H','A','T',0, /* 36938, 0x1000542, U+0542, KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */
0x92, 0x7e, 0x01, 0x00, 0x05, 0x72, 0x00, 0x05, 0x72, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','g','h','a','t',0, /* 36965, 0x1000572, U+0572, KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */
0x90, 0xf1, 0x01, 0x00, 0x05, 0x43, 0x00, 0x05, 0x43, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','C','H','E',0, /* 36992, 0x1000543, U+0543, KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */
0x92, 0xd1, 0x01, 0x00, 0x05, 0x73, 0x00, 0x05, 0x73, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','c','h','e',0, /* 37019, 0x1000573, U+0573, KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */
0x48, 0x44, 0x01, 0x00, 0x05, 0x44, 0x00, 0x05, 0x44, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','M','E','N',0, /* 37045, 0x1000544, U+0544, KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */
0x49, 0x24, 0x01, 0x00, 0x05, 0x74, 0x00, 0x05, 0x74, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','m','e','n',0, /* 37071, 0x1000574, U+0574, KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */
0xa3, 0xf5, 0x01, 0x00, 0x05, 0x45, 0x00, 0x05, 0x45, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','H','I',0, /* 37096, 0x1000545, U+0545, KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */
0xa4, 0x55, 0x01, 0x00, 0x05, 0x75, 0x00, 0x05, 0x75, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','h','i',0, /* 37121, 0x1000575, U+0575, KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */
0xa4, 0x0d, 0x01, 0x00, 0x05, 0x46, 0x00, 0x05, 0x46, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','N','U',0, /* 37146, 0x1000546, U+0546, KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */
0xa4, 0x6d, 0x01, 0x00, 0x05, 0x76, 0x00, 0x05, 0x76, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','n','u',0, /* 37171, 0x1000576, U+0576, KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */
0x48, 0x55, 0x01, 0x00, 0x05, 0x47, 0x00, 0x05, 0x47, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','S','H','A',0, /* 37197, 0x1000547, U+0547, KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */
0x49, 0x35, 0x01, 0x00, 0x05, 0x77, 0x00, 0x05, 0x77, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','s','h','a',0, /* 37223, 0x1000577, U+0577, KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */
0xa4, 0x17, 0x01, 0x00, 0x05, 0x48, 0x00, 0x05, 0x48, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','V','O',0, /* 37248, 0x1000548, U+0548, KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */
0xa4, 0x77, 0x01, 0x00, 0x05, 0x78, 0x00, 0x05, 0x78, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','v','o',0, /* 37273, 0x1000578, U+0578, KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */
0x48, 0x15, 0x01, 0x00, 0x05, 0x49, 0x00, 0x05, 0x49, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','C','H','A',0, /* 37299, 0x1000549, U+0549, KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */
0x48, 0xf5, 0x01, 0x00, 0x05, 0x79, 0x00, 0x05, 0x79, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','c','h','a',0, /* 37325, 0x1000579, U+0579, KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */
0xa4, 0x01, 0x01, 0x00, 0x05, 0x4a, 0x00, 0x05, 0x4a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','P','E',0, /* 37350, 0x100054a, U+054a, KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */
0xa4, 0x61, 0x01, 0x00, 0x05, 0x7a, 0x00, 0x05, 0x7a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','p','e',0, /* 37375, 0x100057a, U+057a, KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */
0xa3, 0xf5, 0x01, 0x00, 0x05, 0x4b, 0x00, 0x05, 0x4b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','J','E',0, /* 37400, 0x100054b, U+054b, KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */
0xa4, 0x55, 0x01, 0x00, 0x05, 0x7b, 0x00, 0x05, 0x7b, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','j','e',0, /* 37425, 0x100057b, U+057b, KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */
0xa4, 0x01, 0x01, 0x00, 0x05, 0x4c, 0x00, 0x05, 0x4c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','R','A',0, /* 37450, 0x100054c, U+054c, KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */
0xa4, 0x61, 0x01, 0x00, 0x05, 0x7c, 0x00, 0x05, 0x7c, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','r','a',0, /* 37475, 0x100057c, U+057c, KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */
0xa4, 0x07, 0x01, 0x00, 0x05, 0x4d, 0x00, 0x05, 0x4d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','S','E',0, /* 37500, 0x100054d, U+054d, KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */
0xa4, 0x67, 0x01, 0x00, 0x05, 0x7d, 0x00, 0x05, 0x7d, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','s','e',0, /* 37525, 0x100057d, U+057d, KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */
0x48, 0x70, 0x01, 0x00, 0x05, 0x4e, 0x00, 0x05, 0x4e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','V','E','V',0, /* 37551, 0x100054e, U+054e, KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */
0x49, 0x50, 0x01, 0x00, 0x05, 0x7e, 0x00, 0x05, 0x7e, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','v','e','v',0, /* 37577, 0x100057e, U+057e, KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */
0x91, 0x6c, 0x01, 0x00, 0x05, 0x4f, 0x00, 0x05, 0x4f, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','Y','U','N',0, /* 37604, 0x100054f, U+054f, KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */
0x93, 0x4c, 0x01, 0x00, 0x05, 0x7f, 0x00, 0x05, 0x7f, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','y','u','n',0, /* 37631, 0x100057f, U+057f, KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */
0xa4, 0x05, 0x01, 0x00, 0x05, 0x50, 0x00, 0x05, 0x50, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','R','E',0, /* 37656, 0x1000550, U+0550, KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */
0xa4, 0x65, 0x01, 0x00, 0x05, 0x80, 0x00, 0x05, 0x80, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','r','e',0, /* 37681, 0x1000580, U+0580, KEY_Armenian_re, ARMENIAN SMALL LETTER REH */
0x48, 0x7d, 0x01, 0x00, 0x05, 0x51, 0x00, 0x05, 0x51, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','T','S','O',0, /* 37707, 0x1000551, U+0551, KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */
0x49, 0x5d, 0x01, 0x00, 0x05, 0x81, 0x00, 0x05, 0x81, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','t','s','o',0, /* 37733, 0x1000581, U+0581, KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */
0x91, 0x7c, 0x01, 0x00, 0x05, 0x52, 0x00, 0x05, 0x52, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','V','Y','U','N',0, /* 37760, 0x1000552, U+0552, KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */
0x93, 0x5c, 0x01, 0x00, 0x05, 0x82, 0x00, 0x05, 0x82, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','v','y','u','n',0, /* 37787, 0x1000582, U+0582, KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */
0x91, 0x50, 0x01, 0x00, 0x05, 0x53, 0x00, 0x05, 0x53, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','P','Y','U','R',0, /* 37814, 0x1000553, U+0553, KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */
0x93, 0x30, 0x01, 0x00, 0x05, 0x83, 0x00, 0x05, 0x83, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','p','y','u','r',0, /* 37841, 0x1000583, U+0583, KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */
0xa3, 0xf7, 0x01, 0x00, 0x05, 0x54, 0x00, 0x05, 0x54, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','K','E',0, /* 37866, 0x1000554, U+0554, KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */
0xa4, 0x57, 0x01, 0x00, 0x05, 0x84, 0x00, 0x05, 0x84, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','k','e',0, /* 37891, 0x1000584, U+0584, KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */
0x51, 0xdd, 0x01, 0x00, 0x05, 0x55, 0x00, 0x05, 0x55, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','O',0, /* 37915, 0x1000555, U+0555, KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */
0x51, 0xfd, 0x01, 0x00, 0x05, 0x85, 0x00, 0x05, 0x85, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','o',0, /* 37939, 0x1000585, U+0585, KEY_Armenian_o, ARMENIAN SMALL LETTER OH */
0xa3, 0xed, 0x01, 0x00, 0x05, 0x56, 0x00, 0x05, 0x56, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','F','E',0, /* 37964, 0x1000556, U+0556, KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */
0xa4, 0x4d, 0x01, 0x00, 0x05, 0x86, 0x00, 0x05, 0x86, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','f','e',0, /* 37989, 0x1000586, U+0586, KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */
0xbe, 0x4d, 0x01, 0x00, 0x05, 0x5a, 0x00, 0x05, 0x5a, 'K','E','Y','_','A','r','m','e','n','i','a','n','_','a','p','o','s','t','r','o','p','h','e',0, /* 38022, 0x100055a, U+055a, KEY_Armenian_apostrophe, ARMENIAN APOSTROPHE */
0xa9, 0x0c, 0x01, 0x00, 0x10, 0xd0, 0x00, 0x10, 0xd0, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','a','n',0, /* 38047, 0x10010d0, U+10d0, KEY_Georgian_an, GEORGIAN LETTER AN */
0x52, 0x70, 0x01, 0x00, 0x10, 0xd1, 0x00, 0x10, 0xd1, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','b','a','n',0, /* 38073, 0x10010d1, U+10d1, KEY_Georgian_ban, GEORGIAN LETTER BAN */
0x52, 0x84, 0x01, 0x00, 0x10, 0xd2, 0x00, 0x10, 0xd2, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','g','a','n',0, /* 38099, 0x10010d2, U+10d2, KEY_Georgian_gan, GEORGIAN LETTER GAN */
0x52, 0x94, 0x01, 0x00, 0x10, 0xd3, 0x00, 0x10, 0xd3, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','d','o','n',0, /* 38125, 0x10010d3, U+10d3, KEY_Georgian_don, GEORGIAN LETTER DON */
0xa9, 0x14, 0x01, 0x00, 0x10, 0xd4, 0x00, 0x10, 0xd4, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','e','n',0, /* 38150, 0x10010d4, U+10d4, KEY_Georgian_en, GEORGIAN LETTER EN */
0x52, 0xd0, 0x01, 0x00, 0x10, 0xd5, 0x00, 0x10, 0xd5, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','v','i','n',0, /* 38176, 0x10010d5, U+10d5, KEY_Georgian_vin, GEORGIAN LETTER VIN */
0x52, 0xd8, 0x01, 0x00, 0x10, 0xd6, 0x00, 0x10, 0xd6, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','z','e','n',0, /* 38202, 0x10010d6, U+10d6, KEY_Georgian_zen, GEORGIAN LETTER ZEN */
0x52, 0xb8, 0x01, 0x00, 0x10, 0xd7, 0x00, 0x10, 0xd7, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','t','a','n',0, /* 38228, 0x10010d7, U+10d7, KEY_Georgian_tan, GEORGIAN LETTER TAN */
0xa9, 0x1c, 0x01, 0x00, 0x10, 0xd8, 0x00, 0x10, 0xd8, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','i','n',0, /* 38253, 0x10010d8, U+10d8, KEY_Georgian_in, GEORGIAN LETTER IN */
0x52, 0x94, 0x01, 0x00, 0x10, 0xd9, 0x00, 0x10, 0xd9, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','k','a','n',0, /* 38279, 0x10010d9, U+10d9, KEY_Georgian_kan, GEORGIAN LETTER KAN */
0x52, 0x9d, 0x01, 0x00, 0x10, 0xda, 0x00, 0x10, 0xda, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','l','a','s',0, /* 38305, 0x10010da, U+10da, KEY_Georgian_las, GEORGIAN LETTER LAS */
0x52, 0x9c, 0x01, 0x00, 0x10, 0xdb, 0x00, 0x10, 0xdb, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','m','a','n',0, /* 38331, 0x10010db, U+10db, KEY_Georgian_man, GEORGIAN LETTER MAN */
0x52, 0xa4, 0x01, 0x00, 0x10, 0xdc, 0x00, 0x10, 0xdc, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','n','a','r',0, /* 38357, 0x10010dc, U+10dc, KEY_Georgian_nar, GEORGIAN LETTER NAR */
0xa9, 0x28, 0x01, 0x00, 0x10, 0xdd, 0x00, 0x10, 0xdd, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','o','n',0, /* 38382, 0x10010dd, U+10dd, KEY_Georgian_on, GEORGIAN LETTER ON */
0x52, 0xac, 0x01, 0x00, 0x10, 0xde, 0x00, 0x10, 0xde, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','p','a','r',0, /* 38408, 0x10010de, U+10de, KEY_Georgian_par, GEORGIAN LETTER PAR */
0xa6, 0x14, 0x01, 0x00, 0x10, 0xdf, 0x00, 0x10, 0xdf, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','z','h','a','r',0, /* 38435, 0x10010df, U+10df, KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */
0x52, 0xa7, 0x01, 0x00, 0x10, 0xe0, 0x00, 0x10, 0xe0, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','r','a','e',0, /* 38461, 0x10010e0, U+10e0, KEY_Georgian_rae, GEORGIAN LETTER RAE */
0x52, 0xb4, 0x01, 0x00, 0x10, 0xe1, 0x00, 0x10, 0xe1, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','s','a','n',0, /* 38487, 0x10010e1, U+10e1, KEY_Georgian_san, GEORGIAN LETTER SAN */
0x52, 0xbc, 0x01, 0x00, 0x10, 0xe2, 0x00, 0x10, 0xe2, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','t','a','r',0, /* 38513, 0x10010e2, U+10e2, KEY_Georgian_tar, GEORGIAN LETTER TAR */
0xa9, 0x34, 0x01, 0x00, 0x10, 0xe3, 0x00, 0x10, 0xe3, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','u','n',0, /* 38538, 0x10010e3, U+10e3, KEY_Georgian_un, GEORGIAN LETTER UN */
0xa5, 0xc4, 0x01, 0x00, 0x10, 0xe4, 0x00, 0x10, 0xe4, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','p','h','a','r',0, /* 38565, 0x10010e4, U+10e4, KEY_Georgian_phar, GEORGIAN LETTER PHAR */
0xa5, 0x9c, 0x01, 0x00, 0x10, 0xe5, 0x00, 0x10, 0xe5, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','k','h','a','r',0, /* 38592, 0x10010e5, U+10e5, KEY_Georgian_khar, GEORGIAN LETTER KHAR */
0xa5, 0x78, 0x01, 0x00, 0x10, 0xe6, 0x00, 0x10, 0xe6, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','g','h','a','n',0, /* 38619, 0x10010e6, U+10e6, KEY_Georgian_ghan, GEORGIAN LETTER GHAN */
0x52, 0xb0, 0x01, 0x00, 0x10, 0xe7, 0x00, 0x10, 0xe7, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','q','a','r',0, /* 38645, 0x10010e7, U+10e7, KEY_Georgian_qar, GEORGIAN LETTER QAR */
0xa5, 0xe8, 0x01, 0x00, 0x10, 0xe8, 0x00, 0x10, 0xe8, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','s','h','i','n',0, /* 38672, 0x10010e8, U+10e8, KEY_Georgian_shin, GEORGIAN LETTER SHIN */
0xa5, 0x68, 0x01, 0x00, 0x10, 0xe9, 0x00, 0x10, 0xe9, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','c','h','i','n',0, /* 38699, 0x10010e9, U+10e9, KEY_Georgian_chin, GEORGIAN LETTER CHIN */
0x52, 0x74, 0x01, 0x00, 0x10, 0xea, 0x00, 0x10, 0xea, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','c','a','n',0, /* 38725, 0x10010ea, U+10ea, KEY_Georgian_can, GEORGIAN LETTER CAN */
0x52, 0x9e, 0x01, 0x00, 0x10, 0xeb, 0x00, 0x10, 0xeb, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','j','i','l',0, /* 38751, 0x10010eb, U+10eb, KEY_Georgian_jil, GEORGIAN LETTER JIL */
0x52, 0x82, 0x01, 0x00, 0x10, 0xec, 0x00, 0x10, 0xec, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','c','i','l',0, /* 38777, 0x10010ec, U+10ec, KEY_Georgian_cil, GEORGIAN LETTER CIL */
0xa5, 0x5c, 0x01, 0x00, 0x10, 0xed, 0x00, 0x10, 0xed, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','c','h','a','r',0, /* 38804, 0x10010ed, U+10ed, KEY_Georgian_char, GEORGIAN LETTER CHAR */
0x52, 0xc8, 0x01, 0x00, 0x10, 0xee, 0x00, 0x10, 0xee, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','x','a','n',0, /* 38830, 0x10010ee, U+10ee, KEY_Georgian_xan, GEORGIAN LETTER XAN */
0xa5, 0x90, 0x01, 0x00, 0x10, 0xef, 0x00, 0x10, 0xef, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','j','h','a','n',0, /* 38857, 0x10010ef, U+10ef, KEY_Georgian_jhan, GEORGIAN LETTER JHAN */
0x52, 0x7f, 0x01, 0x00, 0x10, 0xf0, 0x00, 0x10, 0xf0, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','a','e',0, /* 38883, 0x10010f0, U+10f0, KEY_Georgian_hae, GEORGIAN LETTER HAE */
0xa9, 0x11, 0x01, 0x00, 0x10, 0xf1, 0x00, 0x10, 0xf1, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','e',0, /* 38908, 0x10010f1, U+10f1, KEY_Georgian_he, GEORGIAN LETTER HE */
0x52, 0x8f, 0x01, 0x00, 0x10, 0xf2, 0x00, 0x10, 0xf2, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','i','e',0, /* 38934, 0x10010f2, U+10f2, KEY_Georgian_hie, GEORGIAN LETTER HIE */
0xa9, 0x2f, 0x01, 0x00, 0x10, 0xf3, 0x00, 0x10, 0xf3, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','w','e',0, /* 38959, 0x10010f3, U+10f3, KEY_Georgian_we, GEORGIAN LETTER WE */
0x52, 0x8c, 0x01, 0x00, 0x10, 0xf4, 0x00, 0x10, 0xf4, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','a','r',0, /* 38985, 0x10010f4, U+10f4, KEY_Georgian_har, GEORGIAN LETTER HAR */
0x52, 0x9b, 0x01, 0x00, 0x10, 0xf5, 0x00, 0x10, 0xf5, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','h','o','e',0, /* 39011, 0x10010f5, U+10f5, KEY_Georgian_hoe, GEORGIAN LETTER HOE */
0xa9, 0x11, 0x01, 0x00, 0x10, 0xf6, 0x00, 0x10, 0xf6, 'K','E','Y','_','G','e','o','r','g','i','a','n','_','f','i',0, /* 39036, 0x10010f6, U+10f6, KEY_Georgian_fi, GEORGIAN LETTER FI */
0xb6, 0x4a, 0x01, 0x00, 0x1e, 0x8a, 0x00, 0x1e, 0x8a, 'K','E','Y','_','X','a','b','o','v','e','d','o','t',0, /* 39059, 0x1001e8a, U+1e8a, KEY_Xabovedot, LATIN CAPITAL LETTER X WITH DOT ABOVE */
0x34, 0xf5, 0x01, 0x00, 0x01, 0x2c, 0x00, 0x01, 0x2c, 'K','E','Y','_','I','b','r','e','v','e',0, /* 39079, 0x100012c, U+012c, KEY_Ibreve, LATIN CAPITAL LETTER I WITH BREVE */
0x71, 0x27, 0x01, 0x00, 0x01, 0xb5, 0x00, 0x01, 0xb5, 'K','E','Y','_','Z','s','t','r','o','k','e',0, /* 39100, 0x10001b5, U+01b5, KEY_Zstroke, LATIN CAPITAL LETTER Z WITH STROKE */
0x34, 0x6c, 0x01, 0x00, 0x01, 0xe6, 0x00, 0x01, 0xe6, 'K','E','Y','_','G','c','a','r','o','n',0, /* 39120, 0x10001e6, U+01e6, KEY_Gcaron, LATIN CAPITAL LETTER G WITH CARON */
0x35, 0x6c, 0x01, 0x00, 0x01, 0xd1, 0x00, 0x01, 0xd1, 'K','E','Y','_','O','c','a','r','o','n',0, /* 39140, 0x10001d1, U+01d1, KEY_Ocaron, LATIN CAPITAL LETTER O WITH CARON */
0x6b, 0x16, 0x01, 0x00, 0x01, 0x9f, 0x00, 0x01, 0x9f, 'K','E','Y','_','O','b','a','r','r','e','d',0, /* 39161, 0x100019f, U+019f, KEY_Obarred, LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
0xd6, 0x4a, 0x01, 0x00, 0x1e, 0x8b, 0x00, 0x1e, 0x8b, 'K','E','Y','_','x','a','b','o','v','e','d','o','t',0, /* 39184, 0x1001e8b, U+1e8b, KEY_xabovedot, LATIN SMALL LETTER X WITH DOT ABOVE */
0x38, 0xf5, 0x01, 0x00, 0x01, 0x2d, 0x00, 0x01, 0x2d, 'K','E','Y','_','i','b','r','e','v','e',0, /* 39204, 0x100012d, U+012d, KEY_ibreve, LATIN SMALL LETTER I WITH BREVE */
0x79, 0x27, 0x01, 0x00, 0x01, 0xb6, 0x00, 0x01, 0xb6, 'K','E','Y','_','z','s','t','r','o','k','e',0, /* 39225, 0x10001b6, U+01b6, KEY_zstroke, LATIN SMALL LETTER Z WITH STROKE */
0x38, 0x6c, 0x01, 0x00, 0x01, 0xe7, 0x00, 0x01, 0xe7, 'K','E','Y','_','g','c','a','r','o','n',0, /* 39245, 0x10001e7, U+01e7, KEY_gcaron, LATIN SMALL LETTER G WITH CARON */
0x39, 0x6c, 0x01, 0x00, 0x01, 0xd2, 0x00, 0x01, 0xd2, 'K','E','Y','_','o','c','a','r','o','n',0, /* 39265, 0x10001d2, U+01d2, KEY_ocaron, LATIN SMALL LETTER O WITH CARON */
0x73, 0x16, 0x01, 0x00, 0x02, 0x75, 0x00, 0x02, 0x75, 'K','E','Y','_','o','b','a','r','r','e','d',0, /* 39286, 0x1000275, U+0275, KEY_obarred, LATIN SMALL LETTER BARRED O */
0x98, 0xf7, 0x01, 0x00, 0x01, 0x8f, 0x00, 0x01, 0x8f, 'K','E','Y','_','S','C','H','W','A',0, /* 39305, 0x100018f, U+018f, KEY_SCHWA, LATIN CAPITAL LETTER SCHWA */
0x9c, 0xd7, 0x01, 0x00, 0x02, 0x59, 0x00, 0x02, 0x59, 'K','E','Y','_','s','c','h','w','a',0, /* 39324, 0x1000259, U+0259, KEY_schwa, LATIN SMALL LETTER SCHWA */
0x25, 0xf8, 0x01, 0x00, 0x01, 0xb7, 0x00, 0x01, 0xb7, 'K','E','Y','_','E','Z','H',0, /* 39341, 0x10001b7, U+01b7, KEY_EZH, LATIN CAPITAL LETTER EZH */
0x26, 0xd8, 0x01, 0x00, 0x02, 0x92, 0x00, 0x02, 0x92, 'K','E','Y','_','e','z','h',0, /* 39358, 0x1000292, U+0292, KEY_ezh, LATIN SMALL LETTER EZH */
0xab, 0x4a, 0x01, 0x00, 0x1e, 0x36, 0x00, 0x1e, 0x36, 'K','E','Y','_','L','b','e','l','o','w','d','o','t',0, /* 39381, 0x1001e36, U+1e36, KEY_Lbelowdot, LATIN CAPITAL LETTER L WITH DOT BELOW */
0xcb, 0x4a, 0x01, 0x00, 0x1e, 0x37, 0x00, 0x1e, 0x37, 'K','E','Y','_','l','b','e','l','o','w','d','o','t',0, /* 39404, 0x1001e37, U+1e37, KEY_lbelowdot, LATIN SMALL LETTER L WITH DOT BELOW */
0xa0, 0x4a, 0x01, 0x00, 0x1e, 0xa0, 0x00, 0x1e, 0xa0, 'K','E','Y','_','A','b','e','l','o','w','d','o','t',0, /* 39427, 0x1001ea0, U+1ea0, KEY_Abelowdot, LATIN CAPITAL LETTER A WITH DOT BELOW */
0xc0, 0x4a, 0x01, 0x00, 0x1e, 0xa1, 0x00, 0x1e, 0xa1, 'K','E','Y','_','a','b','e','l','o','w','d','o','t',0, /* 39450, 0x1001ea1, U+1ea1, KEY_abelowdot, LATIN SMALL LETTER A WITH DOT BELOW */
0x99, 0xf5, 0x01, 0x00, 0x1e, 0xa2, 0x00, 0x1e, 0xa2, 'K','E','Y','_','A','h','o','o','k',0, /* 39469, 0x1001ea2, U+1ea2, KEY_Ahook, LATIN CAPITAL LETTER A WITH HOOK ABOVE */
0x9b, 0xf5, 0x01, 0x00, 0x1e, 0xa3, 0x00, 0x1e, 0xa3, 'K','E','Y','_','a','h','o','o','k',0, /* 39488, 0x1001ea3, U+1ea3, KEY_ahook, LATIN SMALL LETTER A WITH HOOK ABOVE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xa4, 0x00, 0x1e, 0xa4, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 39518, 0x1001ea4, U+1ea4, KEY_Acircumflexacute, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xa5, 0x00, 0x1e, 0xa5, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 39548, 0x1001ea5, U+1ea5, KEY_acircumflexacute, LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xa6, 0x00, 0x1e, 0xa6, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 39578, 0x1001ea6, U+1ea6, KEY_Acircumflexgrave, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xa7, 0x00, 0x1e, 0xa7, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 39608, 0x1001ea7, U+1ea7, KEY_acircumflexgrave, LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
0x8b, 0x65, 0x01, 0x00, 0x1e, 0xa8, 0x00, 0x1e, 0xa8, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 39637, 0x1001ea8, U+1ea8, KEY_Acircumflexhook, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
0x8b, 0x65, 0x01, 0x00, 0x1e, 0xa9, 0x00, 0x1e, 0xa9, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 39666, 0x1001ea9, U+1ea9, KEY_acircumflexhook, LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xaa, 0x00, 0x1e, 0xaa, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 39696, 0x1001eaa, U+1eaa, KEY_Acircumflextilde, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xab, 0x00, 0x1e, 0xab, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 39726, 0x1001eab, U+1eab, KEY_acircumflextilde, LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xac, 0x00, 0x1e, 0xac, 'K','E','Y','_','A','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 39759, 0x1001eac, U+1eac, KEY_Acircumflexbelowdot, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xad, 0x00, 0x1e, 0xad, 'K','E','Y','_','a','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 39792, 0x1001ead, U+1ead, KEY_acircumflexbelowdot, LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
0x8a, 0xe9, 0x01, 0x00, 0x1e, 0xae, 0x00, 0x1e, 0xae, 'K','E','Y','_','A','b','r','e','v','e','a','c','u','t','e',0, /* 39817, 0x1001eae, U+1eae, KEY_Abreveacute, LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
0x0a, 0xe9, 0x01, 0x00, 0x1e, 0xaf, 0x00, 0x1e, 0xaf, 'K','E','Y','_','a','b','r','e','v','e','a','c','u','t','e',0, /* 39842, 0x1001eaf, U+1eaf, KEY_abreveacute, LATIN SMALL LETTER A WITH BREVE AND ACUTE */
0x8b, 0x75, 0x01, 0x00, 0x1e, 0xb0, 0x00, 0x1e, 0xb0, 'K','E','Y','_','A','b','r','e','v','e','g','r','a','v','e',0, /* 39867, 0x1001eb0, U+1eb0, KEY_Abrevegrave, LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
0x0b, 0x75, 0x01, 0x00, 0x1e, 0xb1, 0x00, 0x1e, 0xb1, 'K','E','Y','_','a','b','r','e','v','e','g','r','a','v','e',0, /* 39892, 0x1001eb1, U+1eb1, KEY_abrevegrave, LATIN SMALL LETTER A WITH BREVE AND GRAVE */
0x45, 0x95, 0x01, 0x00, 0x1e, 0xb2, 0x00, 0x1e, 0xb2, 'K','E','Y','_','A','b','r','e','v','e','h','o','o','k',0, /* 39916, 0x1001eb2, U+1eb2, KEY_Abrevehook, LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
0x85, 0x95, 0x01, 0x00, 0x1e, 0xb3, 0x00, 0x1e, 0xb3, 'K','E','Y','_','a','b','r','e','v','e','h','o','o','k',0, /* 39940, 0x1001eb3, U+1eb3, KEY_abrevehook, LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
0x8c, 0x05, 0x01, 0x00, 0x1e, 0xb4, 0x00, 0x1e, 0xb4, 'K','E','Y','_','A','b','r','e','v','e','t','i','l','d','e',0, /* 39965, 0x1001eb4, U+1eb4, KEY_Abrevetilde, LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
0x0c, 0x05, 0x01, 0x00, 0x1e, 0xb5, 0x00, 0x1e, 0xb5, 'K','E','Y','_','a','b','r','e','v','e','t','i','l','d','e',0, /* 39990, 0x1001eb5, U+1eb5, KEY_abrevetilde, LATIN SMALL LETTER A WITH BREVE AND TILDE */
0x5a, 0x4a, 0x01, 0x00, 0x1e, 0xb6, 0x00, 0x1e, 0xb6, 'K','E','Y','_','A','b','r','e','v','e','b','e','l','o','w','d','o','t',0, /* 40018, 0x1001eb6, U+1eb6, KEY_Abrevebelowdot, LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
0x5a, 0x4a, 0x01, 0x00, 0x1e, 0xb7, 0x00, 0x1e, 0xb7, 'K','E','Y','_','a','b','r','e','v','e','b','e','l','o','w','d','o','t',0, /* 40046, 0x1001eb7, U+1eb7, KEY_abrevebelowdot, LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
0xa4, 0x4a, 0x01, 0x00, 0x1e, 0xb8, 0x00, 0x1e, 0xb8, 'K','E','Y','_','E','b','e','l','o','w','d','o','t',0, /* 40069, 0x1001eb8, U+1eb8, KEY_Ebelowdot, LATIN CAPITAL LETTER E WITH DOT BELOW */
0xc4, 0x4a, 0x01, 0x00, 0x1e, 0xb9, 0x00, 0x1e, 0xb9, 'K','E','Y','_','e','b','e','l','o','w','d','o','t',0, /* 40092, 0x1001eb9, U+1eb9, KEY_ebelowdot, LATIN SMALL LETTER E WITH DOT BELOW */
0x9a, 0x35, 0x01, 0x00, 0x1e, 0xba, 0x00, 0x1e, 0xba, 'K','E','Y','_','E','h','o','o','k',0, /* 40111, 0x1001eba, U+1eba, KEY_Ehook, LATIN CAPITAL LETTER E WITH HOOK ABOVE */
0x9c, 0x35, 0x01, 0x00, 0x1e, 0xbb, 0x00, 0x1e, 0xbb, 'K','E','Y','_','e','h','o','o','k',0, /* 40130, 0x1001ebb, U+1ebb, KEY_ehook, LATIN SMALL LETTER E WITH HOOK ABOVE */
0x35, 0x45, 0x01, 0x00, 0x1e, 0xbc, 0x00, 0x1e, 0xbc, 'K','E','Y','_','E','t','i','l','d','e',0, /* 40150, 0x1001ebc, U+1ebc, KEY_Etilde, LATIN CAPITAL LETTER E WITH TILDE */
0x39, 0x45, 0x01, 0x00, 0x1e, 0xbd, 0x00, 0x1e, 0xbd, 'K','E','Y','_','e','t','i','l','d','e',0, /* 40170, 0x1001ebd, U+1ebd, KEY_etilde, LATIN SMALL LETTER E WITH TILDE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xbe, 0x00, 0x1e, 0xbe, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 40200, 0x1001ebe, U+1ebe, KEY_Ecircumflexacute, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xbf, 0x00, 0x1e, 0xbf, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 40230, 0x1001ebf, U+1ebf, KEY_ecircumflexacute, LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xc0, 0x00, 0x1e, 0xc0, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 40260, 0x1001ec0, U+1ec0, KEY_Ecircumflexgrave, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xc1, 0x00, 0x1e, 0xc1, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 40290, 0x1001ec1, U+1ec1, KEY_ecircumflexgrave, LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
0x8b, 0x65, 0x01, 0x00, 0x1e, 0xc2, 0x00, 0x1e, 0xc2, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 40319, 0x1001ec2, U+1ec2, KEY_Ecircumflexhook, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
0x8b, 0x65, 0x01, 0x00, 0x1e, 0xc3, 0x00, 0x1e, 0xc3, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 40348, 0x1001ec3, U+1ec3, KEY_ecircumflexhook, LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xc4, 0x00, 0x1e, 0xc4, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 40378, 0x1001ec4, U+1ec4, KEY_Ecircumflextilde, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xc5, 0x00, 0x1e, 0xc5, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 40408, 0x1001ec5, U+1ec5, KEY_ecircumflextilde, LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xc6, 0x00, 0x1e, 0xc6, 'K','E','Y','_','E','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 40441, 0x1001ec6, U+1ec6, KEY_Ecircumflexbelowdot, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xc7, 0x00, 0x1e, 0xc7, 'K','E','Y','_','e','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 40474, 0x1001ec7, U+1ec7, KEY_ecircumflexbelowdot, LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
0x9a, 0x75, 0x01, 0x00, 0x1e, 0xc8, 0x00, 0x1e, 0xc8, 'K','E','Y','_','I','h','o','o','k',0, /* 40493, 0x1001ec8, U+1ec8, KEY_Ihook, LATIN CAPITAL LETTER I WITH HOOK ABOVE */
0x9c, 0x75, 0x01, 0x00, 0x1e, 0xc9, 0x00, 0x1e, 0xc9, 'K','E','Y','_','i','h','o','o','k',0, /* 40512, 0x1001ec9, U+1ec9, KEY_ihook, LATIN SMALL LETTER I WITH HOOK ABOVE */
0xa8, 0x4a, 0x01, 0x00, 0x1e, 0xca, 0x00, 0x1e, 0xca, 'K','E','Y','_','I','b','e','l','o','w','d','o','t',0, /* 40535, 0x1001eca, U+1eca, KEY_Ibelowdot, LATIN CAPITAL LETTER I WITH DOT BELOW */
0xc8, 0x4a, 0x01, 0x00, 0x1e, 0xcb, 0x00, 0x1e, 0xcb, 'K','E','Y','_','i','b','e','l','o','w','d','o','t',0, /* 40558, 0x1001ecb, U+1ecb, KEY_ibelowdot, LATIN SMALL LETTER I WITH DOT BELOW */
0xae, 0x4a, 0x01, 0x00, 0x1e, 0xcc, 0x00, 0x1e, 0xcc, 'K','E','Y','_','O','b','e','l','o','w','d','o','t',0, /* 40581, 0x1001ecc, U+1ecc, KEY_Obelowdot, LATIN CAPITAL LETTER O WITH DOT BELOW */
0xce, 0x4a, 0x01, 0x00, 0x1e, 0xcd, 0x00, 0x1e, 0xcd, 'K','E','Y','_','o','b','e','l','o','w','d','o','t',0, /* 40604, 0x1001ecd, U+1ecd, KEY_obelowdot, LATIN SMALL LETTER O WITH DOT BELOW */
0x9a, 0xd5, 0x01, 0x00, 0x1e, 0xce, 0x00, 0x1e, 0xce, 'K','E','Y','_','O','h','o','o','k',0, /* 40623, 0x1001ece, U+1ece, KEY_Ohook, LATIN CAPITAL LETTER O WITH HOOK ABOVE */
0x9c, 0xd5, 0x01, 0x00, 0x1e, 0xcf, 0x00, 0x1e, 0xcf, 'K','E','Y','_','o','h','o','o','k',0, /* 40642, 0x1001ecf, U+1ecf, KEY_ohook, LATIN SMALL LETTER O WITH HOOK ABOVE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xd0, 0x00, 0x1e, 0xd0, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 40672, 0x1001ed0, U+1ed0, KEY_Ocircumflexacute, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
0x16, 0x89, 0x01, 0x00, 0x1e, 0xd1, 0x00, 0x1e, 0xd1, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','a','c','u','t','e',0, /* 40702, 0x1001ed1, U+1ed1, KEY_ocircumflexacute, LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xd2, 0x00, 0x1e, 0xd2, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 40732, 0x1001ed2, U+1ed2, KEY_Ocircumflexgrave, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
0x17, 0x15, 0x01, 0x00, 0x1e, 0xd3, 0x00, 0x1e, 0xd3, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','g','r','a','v','e',0, /* 40762, 0x1001ed3, U+1ed3, KEY_ocircumflexgrave, LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
0x0b, 0x65, 0x01, 0x00, 0x1e, 0xd4, 0x00, 0x1e, 0xd4, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 40791, 0x1001ed4, U+1ed4, KEY_Ocircumflexhook, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
0x0b, 0x65, 0x01, 0x00, 0x1e, 0xd5, 0x00, 0x1e, 0xd5, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','h','o','o','k',0, /* 40820, 0x1001ed5, U+1ed5, KEY_ocircumflexhook, LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xd6, 0x00, 0x1e, 0xd6, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 40850, 0x1001ed6, U+1ed6, KEY_Ocircumflextilde, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
0x17, 0xa5, 0x01, 0x00, 0x1e, 0xd7, 0x00, 0x1e, 0xd7, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','t','i','l','d','e',0, /* 40880, 0x1001ed7, U+1ed7, KEY_ocircumflextilde, LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xd8, 0x00, 0x1e, 0xd8, 'K','E','Y','_','O','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 40913, 0x1001ed8, U+1ed8, KEY_Ocircumflexbelowdot, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
0xb7, 0x4a, 0x01, 0x00, 0x1e, 0xd9, 0x00, 0x1e, 0xd9, 'K','E','Y','_','o','c','i','r','c','u','m','f','l','e','x','b','e','l','o','w','d','o','t',0, /* 40946, 0x1001ed9, U+1ed9, KEY_ocircumflexbelowdot, LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
0x68, 0x09, 0x01, 0x00, 0x1e, 0xda, 0x00, 0x1e, 0xda, 'K','E','Y','_','O','h','o','r','n','a','c','u','t','e',0, /* 40970, 0x1001eda, U+1eda, KEY_Ohornacute, LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
0xa8, 0x09, 0x01, 0x00, 0x1e, 0xdb, 0x00, 0x1e, 0xdb, 'K','E','Y','_','o','h','o','r','n','a','c','u','t','e',0, /* 40994, 0x1001edb, U+1edb, KEY_ohornacute, LATIN SMALL LETTER O WITH HORN AND ACUTE */
0x68, 0x95, 0x01, 0x00, 0x1e, 0xdc, 0x00, 0x1e, 0xdc, 'K','E','Y','_','O','h','o','r','n','g','r','a','v','e',0, /* 41018, 0x1001edc, U+1edc, KEY_Ohorngrave, LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
0xa8, 0x95, 0x01, 0x00, 0x1e, 0xdd, 0x00, 0x1e, 0xdd, 'K','E','Y','_','o','h','o','r','n','g','r','a','v','e',0, /* 41042, 0x1001edd, U+1edd, KEY_ohorngrave, LATIN SMALL LETTER O WITH HORN AND GRAVE */
0xb4, 0x25, 0x01, 0x00, 0x1e, 0xde, 0x00, 0x1e, 0xde, 'K','E','Y','_','O','h','o','r','n','h','o','o','k',0, /* 41065, 0x1001ede, U+1ede, KEY_Ohornhook, LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
0xd4, 0x25, 0x01, 0x00, 0x1e, 0xdf, 0x00, 0x1e, 0xdf, 'K','E','Y','_','o','h','o','r','n','h','o','o','k',0, /* 41088, 0x1001edf, U+1edf, KEY_ohornhook, LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
0x69, 0x25, 0x01, 0x00, 0x1e, 0xe0, 0x00, 0x1e, 0xe0, 'K','E','Y','_','O','h','o','r','n','t','i','l','d','e',0, /* 41112, 0x1001ee0, U+1ee0, KEY_Ohorntilde, LATIN CAPITAL LETTER O WITH HORN AND TILDE */
0xa9, 0x25, 0x01, 0x00, 0x1e, 0xe1, 0x00, 0x1e, 0xe1, 'K','E','Y','_','o','h','o','r','n','t','i','l','d','e',0, /* 41136, 0x1001ee1, U+1ee1, KEY_ohorntilde, LATIN SMALL LETTER O WITH HORN AND TILDE */
0x43, 0x4a, 0x01, 0x00, 0x1e, 0xe2, 0x00, 0x1e, 0xe2, 'K','E','Y','_','O','h','o','r','n','b','e','l','o','w','d','o','t',0, /* 41163, 0x1001ee2, U+1ee2, KEY_Ohornbelowdot, LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
0x43, 0x4a, 0x01, 0x00, 0x1e, 0xe3, 0x00, 0x1e, 0xe3, 'K','E','Y','_','o','h','o','r','n','b','e','l','o','w','d','o','t',0, /* 41190, 0x1001ee3, U+1ee3, KEY_ohornbelowdot, LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
0xb4, 0x4a, 0x01, 0x00, 0x1e, 0xe4, 0x00, 0x1e, 0xe4, 'K','E','Y','_','U','b','e','l','o','w','d','o','t',0, /* 41213, 0x1001ee4, U+1ee4, KEY_Ubelowdot, LATIN CAPITAL LETTER U WITH DOT BELOW */
0xd4, 0x4a, 0x01, 0x00, 0x1e, 0xe5, 0x00, 0x1e, 0xe5, 'K','E','Y','_','u','b','e','l','o','w','d','o','t',0, /* 41236, 0x1001ee5, U+1ee5, KEY_ubelowdot, LATIN SMALL LETTER U WITH DOT BELOW */
0x9b, 0x35, 0x01, 0x00, 0x1e, 0xe6, 0x00, 0x1e, 0xe6, 'K','E','Y','_','U','h','o','o','k',0, /* 41255, 0x1001ee6, U+1ee6, KEY_Uhook, LATIN CAPITAL LETTER U WITH HOOK ABOVE */
0x9d, 0x35, 0x01, 0x00, 0x1e, 0xe7, 0x00, 0x1e, 0xe7, 'K','E','Y','_','u','h','o','o','k',0, /* 41274, 0x1001ee7, U+1ee7, KEY_uhook, LATIN SMALL LETTER U WITH HOOK ABOVE */
0x74, 0x09, 0x01, 0x00, 0x1e, 0xe8, 0x00, 0x1e, 0xe8, 'K','E','Y','_','U','h','o','r','n','a','c','u','t','e',0, /* 41298, 0x1001ee8, U+1ee8, KEY_Uhornacute, LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
0xb4, 0x09, 0x01, 0x00, 0x1e, 0xe9, 0x00, 0x1e, 0xe9, 'K','E','Y','_','u','h','o','r','n','a','c','u','t','e',0, /* 41322, 0x1001ee9, U+1ee9, KEY_uhornacute, LATIN SMALL LETTER U WITH HORN AND ACUTE */
0x74, 0x95, 0x01, 0x00, 0x1e, 0xea, 0x00, 0x1e, 0xea, 'K','E','Y','_','U','h','o','r','n','g','r','a','v','e',0, /* 41346, 0x1001eea, U+1eea, KEY_Uhorngrave, LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
0xb4, 0x95, 0x01, 0x00, 0x1e, 0xeb, 0x00, 0x1e, 0xeb, 'K','E','Y','_','u','h','o','r','n','g','r','a','v','e',0, /* 41370, 0x1001eeb, U+1eeb, KEY_uhorngrave, LATIN SMALL LETTER U WITH HORN AND GRAVE */
0xba, 0x25, 0x01, 0x00, 0x1e, 0xec, 0x00, 0x1e, 0xec, 'K','E','Y','_','U','h','o','r','n','h','o','o','k',0, /* 41393, 0x1001eec, U+1eec, KEY_Uhornhook, LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
0xda, 0x25, 0x01, 0x00, 0x1e, 0xed, 0x00, 0x1e, 0xed, 'K','E','Y','_','u','h','o','r','n','h','o','o','k',0, /* 41416, 0x1001eed, U+1eed, KEY_uhornhook, LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
0x75, 0x25, 0x01, 0x00, 0x1e, 0xee, 0x00, 0x1e, 0xee, 'K','E','Y','_','U','h','o','r','n','t','i','l','d','e',0, /* 41440, 0x1001eee, U+1eee, KEY_Uhorntilde, LATIN CAPITAL LETTER U WITH HORN AND TILDE */
0xb5, 0x25, 0x01, 0x00, 0x1e, 0xef, 0x00, 0x1e, 0xef, 'K','E','Y','_','u','h','o','r','n','t','i','l','d','e',0, /* 41464, 0x1001eef, U+1eef, KEY_uhorntilde, LATIN SMALL LETTER U WITH HORN AND TILDE */
0xa3, 0x4a, 0x01, 0x00, 0x1e, 0xf0, 0x00, 0x1e, 0xf0, 'K','E','Y','_','U','h','o','r','n','b','e','l','o','w','d','o','t',0, /* 41491, 0x1001ef0, U+1ef0, KEY_Uhornbelowdot, LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
0xa3, 0x4a, 0x01, 0x00, 0x1e, 0xf1, 0x00, 0x1e, 0xf1, 'K','E','Y','_','u','h','o','r','n','b','e','l','o','w','d','o','t',0, /* 41518, 0x1001ef1, U+1ef1, KEY_uhornbelowdot, LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
0xb8, 0x4a, 0x01, 0x00, 0x1e, 0xf4, 0x00, 0x1e, 0xf4, 'K','E','Y','_','Y','b','e','l','o','w','d','o','t',0, /* 41541, 0x1001ef4, U+1ef4, KEY_Ybelowdot, LATIN CAPITAL LETTER Y WITH DOT BELOW */
0xd8, 0x4a, 0x01, 0x00, 0x1e, 0xf5, 0x00, 0x1e, 0xf5, 'K','E','Y','_','y','b','e','l','o','w','d','o','t',0, /* 41564, 0x1001ef5, U+1ef5, KEY_ybelowdot, LATIN SMALL LETTER Y WITH DOT BELOW */
0x9b, 0x75, 0x01, 0x00, 0x1e, 0xf6, 0x00, 0x1e, 0xf6, 'K','E','Y','_','Y','h','o','o','k',0, /* 41583, 0x1001ef6, U+1ef6, KEY_Yhook, LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
0x9d, 0x75, 0x01, 0x00, 0x1e, 0xf7, 0x00, 0x1e, 0xf7, 'K','E','Y','_','y','h','o','o','k',0, /* 41602, 0x1001ef7, U+1ef7, KEY_yhook, LATIN SMALL LETTER Y WITH HOOK ABOVE */
0x37, 0xc5, 0x01, 0x00, 0x1e, 0xf8, 0x00, 0x1e, 0xf8, 'K','E','Y','_','Y','t','i','l','d','e',0, /* 41622, 0x1001ef8, U+1ef8, KEY_Ytilde, LATIN CAPITAL LETTER Y WITH TILDE */
0x3b, 0xc5, 0x01, 0x00, 0x1e, 0xf9, 0x00, 0x1e, 0xf9, 'K','E','Y','_','y','t','i','l','d','e',0, /* 41642, 0x1001ef9, U+1ef9, KEY_ytilde, LATIN SMALL LETTER Y WITH TILDE */
0x9a, 0xde, 0x01, 0x00, 0x01, 0xa0, 0x00, 0x01, 0xa0, 'K','E','Y','_','O','h','o','r','n',0, /* 41661, 0x10001a0, U+01a0, KEY_Ohorn, LATIN CAPITAL LETTER O WITH HORN */
0x9c, 0xde, 0x01, 0x00, 0x01, 0xa1, 0x00, 0x01, 0xa1, 'K','E','Y','_','o','h','o','r','n',0, /* 41680, 0x10001a1, U+01a1, KEY_ohorn, LATIN SMALL LETTER O WITH HORN */
0x9b, 0x3e, 0x01, 0x00, 0x01, 0xaf, 0x00, 0x01, 0xaf, 'K','E','Y','_','U','h','o','r','n',0, /* 41699, 0x10001af, U+01af, KEY_Uhorn, LATIN CAPITAL LETTER U WITH HORN */
0x9d, 0x3e, 0x01, 0x00, 0x01, 0xb0, 0x00, 0x01, 0xb0, 'K','E','Y','_','u','h','o','r','n',0, /* 41718, 0x10001b0, U+01b0, KEY_uhorn, LATIN SMALL LETTER U WITH HORN */
0x68, 0xe8, 0x01, 0x00, 0x20, 0xa0, 0x00, 0x20, 0xa0, 'K','E','Y','_','E','c','u','S','i','g','n',0, /* 41739, 0x10020a0, U+20a0, KEY_EcuSign, EURO-CURRENCY SIGN */
0xa9, 0xb8, 0x01, 0x00, 0x20, 0xa1, 0x00, 0x20, 0xa1, 'K','E','Y','_','C','o','l','o','n','S','i','g','n',0, /* 41762, 0x10020a1, U+20a1, KEY_ColonSign, COLON SIGN */
0x7b, 0x68, 0x01, 0x00, 0x20, 0xa2, 0x00, 0x20, 0xa2, 'K','E','Y','_','C','r','u','z','e','i','r','o','S','i','g','n',0, /* 41788, 0x10020a2, U+20a2, KEY_CruzeiroSign, CRUZEIRO SIGN */
0x30, 0xa8, 0x01, 0x00, 0x20, 0xa3, 0x00, 0x20, 0xa3, 'K','E','Y','_','F','F','r','a','n','c','S','i','g','n',0, /* 41812, 0x10020a3, U+20a3, KEY_FFrancSign, FRENCH FRANC SIGN */
0xd7, 0x08, 0x01, 0x00, 0x20, 0xa4, 0x00, 0x20, 0xa4, 'K','E','Y','_','L','i','r','a','S','i','g','n',0, /* 41834, 0x10020a4, U+20a4, KEY_LiraSign, LIRA SIGN */
0xd7, 0x78, 0x01, 0x00, 0x20, 0xa5, 0x00, 0x20, 0xa5, 'K','E','Y','_','M','i','l','l','S','i','g','n',0, /* 41856, 0x10020a5, U+20a5, KEY_MillSign, MILL SIGN */
0xac, 0x88, 0x01, 0x00, 0x20, 0xa6, 0x00, 0x20, 0xa6, 'K','E','Y','_','N','a','i','r','a','S','i','g','n',0, /* 41879, 0x10020a6, U+20a6, KEY_NairaSign, NAIRA SIGN */
0x65, 0xc8, 0x01, 0x00, 0x20, 0xa7, 0x00, 0x20, 0xa7, 'K','E','Y','_','P','e','s','e','t','a','S','i','g','n',0, /* 41903, 0x10020a7, U+20a7, KEY_PesetaSign, PESETA SIGN */
0xba, 0xe8, 0x01, 0x00, 0x20, 0xa8, 0x00, 0x20, 0xa8, 'K','E','Y','_','R','u','p','e','e','S','i','g','n',0, /* 41926, 0x10020a8, U+20a8, KEY_RupeeSign, RUPEE SIGN */
0x6e, 0x78, 0x01, 0x00, 0x20, 0xa9, 0x00, 0x20, 0xa9, 'K','E','Y','_','W','o','n','S','i','g','n',0, /* 41947, 0x10020a9, U+20a9, KEY_WonSign, WON SIGN */
0xf9, 0x98, 0x01, 0x00, 0x20, 0xaa, 0x00, 0x20, 0xaa, 'K','E','Y','_','N','e','w','S','h','e','q','e','l','S','i','g','n',0, /* 41974, 0x10020aa, U+20aa, KEY_NewSheqelSign, NEW SHEQEL SIGN */
0xd4, 0x68, 0x01, 0x00, 0x20, 0xab, 0x00, 0x20, 0xab, 'K','E','Y','_','D','o','n','g','S','i','g','n',0, /* 41996, 0x10020ab, U+20ab, KEY_DongSign, DONG SIGN */
0xd7, 0x68, 0x00, 0x00, 0x20, 0xac, 0x00, 0x20, 0xac, 'K','E','Y','_','E','u','r','o','S','i','g','n',0, /* 42018, 0x20ac, U+20ac, KEY_EuroSign, EURO SIGN */
0xf8, 0x94, 0x01, 0x00, 0x20, 0x70, 0x00, 0x20, 0x70, 'K','E','Y','_','z','e','r','o','s','u','p','e','r','i','o','r',0, /* 42044, 0x1002070, U+2070, KEY_zerosuperior, SUPERSCRIPT ZERO */
0x89, 0x94, 0x01, 0x00, 0x20, 0x74, 0x00, 0x20, 0x74, 'K','E','Y','_','f','o','u','r','s','u','p','e','r','i','o','r',0, /* 42070, 0x1002074, U+2074, KEY_foursuperior, SUPERSCRIPT FOUR */
0x66, 0x94, 0x01, 0x00, 0x20, 0x75, 0x00, 0x20, 0x75, 'K','E','Y','_','f','i','v','e','s','u','p','e','r','i','o','r',0, /* 42096, 0x1002075, U+2075, KEY_fivesuperior, SUPERSCRIPT FIVE */
0x6f, 0x94, 0x01, 0x00, 0x20, 0x76, 0x00, 0x20, 0x76, 'K','E','Y','_','s','i','x','s','u','p','e','r','i','o','r',0, /* 42121, 0x1002076, U+2076, KEY_sixsuperior, SUPERSCRIPT SIX */
0x79, 0x94, 0x01, 0x00, 0x20, 0x77, 0x00, 0x20, 0x77, 'K','E','Y','_','s','e','v','e','n','s','u','p','e','r','i','o','r',0, /* 42148, 0x1002077, U+2077, KEY_sevensuperior, SUPERSCRIPT SEVEN */
0x89, 0x94, 0x01, 0x00, 0x20, 0x78, 0x00, 0x20, 0x78, 'K','E','Y','_','e','i','g','h','t','s','u','p','e','r','i','o','r',0, /* 42175, 0x1002078, U+2078, KEY_eightsuperior, SUPERSCRIPT EIGHT */
0x96, 0x94, 0x01, 0x00, 0x20, 0x79, 0x00, 0x20, 0x79, 'K','E','Y','_','n','i','n','e','s','u','p','e','r','i','o','r',0, /* 42201, 0x1002079, U+2079, KEY_ninesuperior, SUPERSCRIPT NINE */
0xef, 0x18, 0x01, 0x00, 0x20, 0x80, 0x00, 0x20, 0x80, 'K','E','Y','_','z','e','r','o','s','u','b','s','c','r','i','p','t',0, /* 42228, 0x1002080, U+2080, KEY_zerosubscript, SUBSCRIPT ZERO */
0xab, 0x18, 0x01, 0x00, 0x20, 0x81, 0x00, 0x20, 0x81, 'K','E','Y','_','o','n','e','s','u','b','s','c','r','i','p','t',0, /* 42254, 0x1002081, U+2081, KEY_onesubscript, SUBSCRIPT ONE */
0x0b, 0x18, 0x01, 0x00, 0x20, 0x82, 0x00, 0x20, 0x82, 'K','E','Y','_','t','w','o','s','u','b','s','c','r','i','p','t',0, /* 42280, 0x1002082, U+2082, KEY_twosubscript, SUBSCRIPT TWO */
0x0f, 0x18, 0x01, 0x00, 0x20, 0x83, 0x00, 0x20, 0x83, 'K','E','Y','_','t','h','r','e','e','s','u','b','s','c','r','i','p','t',0, /* 42308, 0x1002083, U+2083, KEY_threesubscript, SUBSCRIPT THREE */
0x11, 0x18, 0x01, 0x00, 0x20, 0x84, 0x00, 0x20, 0x84, 'K','E','Y','_','f','o','u','r','s','u','b','s','c','r','i','p','t',0, /* 42335, 0x1002084, U+2084, KEY_foursubscript, SUBSCRIPT FOUR */
0xcb, 0x18, 0x01, 0x00, 0x20, 0x85, 0x00, 0x20, 0x85, 'K','E','Y','_','f','i','v','e','s','u','b','s','c','r','i','p','t',0, /* 42362, 0x1002085, U+2085, KEY_fivesubscript, SUBSCRIPT FIVE */
0xdd, 0x18, 0x01, 0x00, 0x20, 0x86, 0x00, 0x20, 0x86, 'K','E','Y','_','s','i','x','s','u','b','s','c','r','i','p','t',0, /* 42388, 0x1002086, U+2086, KEY_sixsubscript, SUBSCRIPT SIX */
0xf1, 0x18, 0x01, 0x00, 0x20, 0x87, 0x00, 0x20, 0x87, 'K','E','Y','_','s','e','v','e','n','s','u','b','s','c','r','i','p','t',0, /* 42416, 0x1002087, U+2087, KEY_sevensubscript, SUBSCRIPT SEVEN */
0x11, 0x18, 0x01, 0x00, 0x20, 0x88, 0x00, 0x20, 0x88, 'K','E','Y','_','e','i','g','h','t','s','u','b','s','c','r','i','p','t',0, /* 42444, 0x1002088, U+2088, KEY_eightsubscript, SUBSCRIPT EIGHT */
0x2b, 0x18, 0x01, 0x00, 0x20, 0x89, 0x00, 0x20, 0x89, 'K','E','Y','_','n','i','n','e','s','u','b','s','c','r','i','p','t',0, /* 42471, 0x1002089, U+2089, KEY_ninesubscript, SUBSCRIPT NINE */
0x1e, 0xf2, 0x01, 0x00, 0x22, 0x02, 0x00, 0x22, 0x02, 'K','E','Y','_','p','a','r','t','d','i','f','f','e','r','e','n','t','i','a','l',0, /* 42501, 0x1002202, U+2202, KEY_partdifferential, PARTIAL DIFFERENTIAL */
0xe6, 0xd2, 0x01, 0x00, 0x22, 0x05, 0x00, 0x22, 0x05, 'K','E','Y','_','e','m','p','t','y','s','e','t',0, /* 42523, 0x1002205, U+2205, KEY_emptyset, NULL SET */
0xc8, 0xb4, 0x01, 0x00, 0x22, 0x08, 0x00, 0x22, 0x08, 'K','E','Y','_','e','l','e','m','e','n','t','o','f',0, /* 42546, 0x1002208, U+2208, KEY_elementof, ELEMENT OF */
0xb2, 0xb4, 0x01, 0x00, 0x22, 0x09, 0x00, 0x22, 0x09, 'K','E','Y','_','n','o','t','e','l','e','m','e','n','t','o','f',0, /* 42572, 0x1002209, U+2209, KEY_notelementof, NOT AN ELEMENT OF */
0x96, 0x21, 0x01, 0x00, 0x22, 0x0b, 0x00, 0x22, 0x0b, 'K','E','Y','_','c','o','n','t','a','i','n','s','a','s',0, /* 42596, 0x100220b, U+220b, KEY_containsas, CONTAINS AS MEMBER */
0xb8, 0xee, 0x01, 0x00, 0x22, 0x1a, 0x00, 0x22, 0x1a, 'K','E','Y','_','s','q','u','a','r','e','r','o','o','t',0, /* 42620, 0x100221a, U+221a, KEY_squareroot, SQUARE ROOT */
0xe4, 0xee, 0x01, 0x00, 0x22, 0x1b, 0x00, 0x22, 0x1b, 'K','E','Y','_','c','u','b','e','r','o','o','t',0, /* 42642, 0x100221b, U+221b, KEY_cuberoot, CUBE ROOT */
0xa1, 0x9e, 0x01, 0x00, 0x22, 0x1c, 0x00, 0x22, 0x1c, 'K','E','Y','_','f','o','u','r','t','h','r','o','o','t',0, /* 42666, 0x100221c, U+221c, KEY_fourthroot, FOURTH ROOT */
0xc8, 0xfe, 0x01, 0x00, 0x22, 0x2c, 0x00, 0x22, 0x2c, 'K','E','Y','_','d','i','n','t','e','g','r','a','l',0, /* 42689, 0x100222c, U+222c, KEY_dintegral, DOUBLE INTEGRAL */
0xd8, 0xfe, 0x01, 0x00, 0x22, 0x2d, 0x00, 0x22, 0x2d, 'K','E','Y','_','t','i','n','t','e','g','r','a','l',0, /* 42712, 0x100222d, U+222d, KEY_tintegral, TRIPLE INTEGRAL */
0x6f, 0xf7, 0x01, 0x00, 0x22, 0x35, 0x00, 0x22, 0x35, 'K','E','Y','_','b','e','c','a','u','s','e',0, /* 42733, 0x1002235, U+2235, KEY_because, BECAUSE */
0xe5, 0x33, 0x01, 0x00, 0x22, 0x48, 0x00, 0x22, 0x45, 'K','E','Y','_','a','p','p','r','o','x','e','q',0, /* 42755, 0x1002248, U+2245, KEY_approxeq, ALMOST EQUAL TO */
0x5a, 0x33, 0x01, 0x00, 0x22, 0x47, 0x00, 0x22, 0x47, 'K','E','Y','_','n','o','t','a','p','p','r','o','x','e','q',0, /* 42780, 0x1002247, U+2247, KEY_notapproxeq, NOT ALMOST EQUAL TO */
0xb3, 0x42, 0x01, 0x00, 0x22, 0x62, 0x00, 0x22, 0x62, 'K','E','Y','_','n','o','t','i','d','e','n','t','i','c','a','l',0, /* 42806, 0x1002262, U+2262, KEY_notidentical, NOT IDENTICAL TO */
0xee, 0x73, 0x01, 0x00, 0x22, 0x63, 0x00, 0x22, 0x63, 'K','E','Y','_','s','t','r','i','c','t','e','q',0, /* 42828, 0x1002263, U+2263, KEY_stricteq, STRICTLY EQUIVALENT TO */
0x79, 0x97, 0x00, 0x00, 0xff, 0xf1, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','1',0, /* 42855, 0xfff1, KEY_braille_dot_1 */
0x79, 0x98, 0x00, 0x00, 0xff, 0xf2, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','2',0, /* 42882, 0xfff2, KEY_braille_dot_2 */
0x79, 0x99, 0x00, 0x00, 0xff, 0xf3, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','3',0, /* 42909, 0xfff3, KEY_braille_dot_3 */
0x79, 0x9a, 0x00, 0x00, 0xff, 0xf4, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','4',0, /* 42936, 0xfff4, KEY_braille_dot_4 */
0x79, 0x9b, 0x00, 0x00, 0xff, 0xf5, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','5',0, /* 42963, 0xfff5, KEY_braille_dot_5 */
0x79, 0x9c, 0x00, 0x00, 0xff, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','6',0, /* 42990, 0xfff6, KEY_braille_dot_6 */
0x79, 0x9d, 0x00, 0x00, 0xff, 0xf7, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','7',0, /* 43017, 0xfff7, KEY_braille_dot_7 */
0x79, 0x9e, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','8',0, /* 43044, 0xfff8, KEY_braille_dot_8 */
0x79, 0x9f, 0x00, 0x00, 0xff, 0xf9, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','9',0, /* 43071, 0xfff9, KEY_braille_dot_9 */
0xf3, 0x5e, 0x00, 0x00, 0xff, 0xfa, 0x00, 0x00, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','_','1','0',0, /* 43099, 0xfffa, KEY_braille_dot_10 */
0x79, 0x6b, 0x01, 0x00, 0x28, 0x00, 0x00, 0x28, 0x00, 'K','E','Y','_','b','r','a','i','l','l','e','_','b','l','a','n','k',0, /* 43126, 0x1002800, U+2800, KEY_braille_blank, BRAILLE PATTERN BLANK */
0xf4, 0x0b, 0x01, 0x00, 0x28, 0x01, 0x00, 0x28, 0x01, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1',0, /* 43154, 0x1002801, U+2801, KEY_braille_dots_1, BRAILLE PATTERN DOTS-1 */
0xf4, 0x0c, 0x01, 0x00, 0x28, 0x02, 0x00, 0x28, 0x02, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2',0, /* 43182, 0x1002802, U+2802, KEY_braille_dots_2, BRAILLE PATTERN DOTS-2 */
0xe8, 0x48, 0x01, 0x00, 0x28, 0x03, 0x00, 0x28, 0x03, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2',0, /* 43211, 0x1002803, U+2803, KEY_braille_dots_12, BRAILLE PATTERN DOTS-12 */
0xf4, 0x0d, 0x01, 0x00, 0x28, 0x04, 0x00, 0x28, 0x04, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3',0, /* 43239, 0x1002804, U+2804, KEY_braille_dots_3, BRAILLE PATTERN DOTS-3 */
0xe8, 0x49, 0x01, 0x00, 0x28, 0x05, 0x00, 0x28, 0x05, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3',0, /* 43268, 0x1002805, U+2805, KEY_braille_dots_13, BRAILLE PATTERN DOTS-13 */
0xe8, 0x4b, 0x01, 0x00, 0x28, 0x06, 0x00, 0x28, 0x06, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3',0, /* 43297, 0x1002806, U+2806, KEY_braille_dots_23, BRAILLE PATTERN DOTS-23 */
0xd0, 0xc3, 0x01, 0x00, 0x28, 0x07, 0x00, 0x28, 0x07, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3',0, /* 43327, 0x1002807, U+2807, KEY_braille_dots_123, BRAILLE PATTERN DOTS-123 */
0xf4, 0x0e, 0x01, 0x00, 0x28, 0x08, 0x00, 0x28, 0x08, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4',0, /* 43355, 0x1002808, U+2808, KEY_braille_dots_4, BRAILLE PATTERN DOTS-4 */
0xe8, 0x4a, 0x01, 0x00, 0x28, 0x09, 0x00, 0x28, 0x09, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4',0, /* 43384, 0x1002809, U+2809, KEY_braille_dots_14, BRAILLE PATTERN DOTS-14 */
0xe8, 0x4c, 0x01, 0x00, 0x28, 0x0a, 0x00, 0x28, 0x0a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4',0, /* 43413, 0x100280a, U+280a, KEY_braille_dots_24, BRAILLE PATTERN DOTS-24 */
0xd0, 0xc4, 0x01, 0x00, 0x28, 0x0b, 0x00, 0x28, 0x0b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4',0, /* 43443, 0x100280b, U+280b, KEY_braille_dots_124, BRAILLE PATTERN DOTS-124 */
0xe8, 0x4e, 0x01, 0x00, 0x28, 0x0c, 0x00, 0x28, 0x0c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4',0, /* 43472, 0x100280c, U+280c, KEY_braille_dots_34, BRAILLE PATTERN DOTS-34 */
0xd0, 0xc6, 0x01, 0x00, 0x28, 0x0d, 0x00, 0x28, 0x0d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4',0, /* 43502, 0x100280d, U+280d, KEY_braille_dots_134, BRAILLE PATTERN DOTS-134 */
0xd0, 0xca, 0x01, 0x00, 0x28, 0x0e, 0x00, 0x28, 0x0e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4',0, /* 43532, 0x100280e, U+280e, KEY_braille_dots_234, BRAILLE PATTERN DOTS-234 */
0xa1, 0xba, 0x01, 0x00, 0x28, 0x0f, 0x00, 0x28, 0x0f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4',0, /* 43563, 0x100280f, U+280f, KEY_braille_dots_1234, BRAILLE PATTERN DOTS-1234 */
0xf4, 0x0f, 0x01, 0x00, 0x28, 0x10, 0x00, 0x28, 0x10, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5',0, /* 43591, 0x1002810, U+2810, KEY_braille_dots_5, BRAILLE PATTERN DOTS-5 */
0xe8, 0x4b, 0x01, 0x00, 0x28, 0x11, 0x00, 0x28, 0x11, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5',0, /* 43620, 0x1002811, U+2811, KEY_braille_dots_15, BRAILLE PATTERN DOTS-15 */
0xe8, 0x4d, 0x01, 0x00, 0x28, 0x12, 0x00, 0x28, 0x12, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5',0, /* 43649, 0x1002812, U+2812, KEY_braille_dots_25, BRAILLE PATTERN DOTS-25 */
0xd0, 0xc5, 0x01, 0x00, 0x28, 0x13, 0x00, 0x28, 0x13, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5',0, /* 43679, 0x1002813, U+2813, KEY_braille_dots_125, BRAILLE PATTERN DOTS-125 */
0xe8, 0x4f, 0x01, 0x00, 0x28, 0x14, 0x00, 0x28, 0x14, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5',0, /* 43708, 0x1002814, U+2814, KEY_braille_dots_35, BRAILLE PATTERN DOTS-35 */
0xd0, 0xc7, 0x01, 0x00, 0x28, 0x15, 0x00, 0x28, 0x15, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5',0, /* 43738, 0x1002815, U+2815, KEY_braille_dots_135, BRAILLE PATTERN DOTS-135 */
0xd0, 0xcb, 0x01, 0x00, 0x28, 0x16, 0x00, 0x28, 0x16, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5',0, /* 43768, 0x1002816, U+2816, KEY_braille_dots_235, BRAILLE PATTERN DOTS-235 */
0xa1, 0xbb, 0x01, 0x00, 0x28, 0x17, 0x00, 0x28, 0x17, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5',0, /* 43799, 0x1002817, U+2817, KEY_braille_dots_1235, BRAILLE PATTERN DOTS-1235 */
0xe8, 0x51, 0x01, 0x00, 0x28, 0x18, 0x00, 0x28, 0x18, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5',0, /* 43828, 0x1002818, U+2818, KEY_braille_dots_45, BRAILLE PATTERN DOTS-45 */
0xd0, 0xc9, 0x01, 0x00, 0x28, 0x19, 0x00, 0x28, 0x19, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5',0, /* 43858, 0x1002819, U+2819, KEY_braille_dots_145, BRAILLE PATTERN DOTS-145 */
0xd0, 0xcd, 0x01, 0x00, 0x28, 0x1a, 0x00, 0x28, 0x1a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5',0, /* 43888, 0x100281a, U+281a, KEY_braille_dots_245, BRAILLE PATTERN DOTS-245 */
0xa1, 0xbd, 0x01, 0x00, 0x28, 0x1b, 0x00, 0x28, 0x1b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5',0, /* 43919, 0x100281b, U+281b, KEY_braille_dots_1245, BRAILLE PATTERN DOTS-1245 */
0xd0, 0xd1, 0x01, 0x00, 0x28, 0x1c, 0x00, 0x28, 0x1c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5',0, /* 43949, 0x100281c, U+281c, KEY_braille_dots_345, BRAILLE PATTERN DOTS-345 */
0xa1, 0xc1, 0x01, 0x00, 0x28, 0x1d, 0x00, 0x28, 0x1d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5',0, /* 43980, 0x100281d, U+281d, KEY_braille_dots_1345, BRAILLE PATTERN DOTS-1345 */
0xa1, 0xc9, 0x01, 0x00, 0x28, 0x1e, 0x00, 0x28, 0x1e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5',0, /* 44011, 0x100281e, U+281e, KEY_braille_dots_2345, BRAILLE PATTERN DOTS-2345 */
0x43, 0xa9, 0x01, 0x00, 0x28, 0x1f, 0x00, 0x28, 0x1f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5',0, /* 44043, 0x100281f, U+281f, KEY_braille_dots_12345, BRAILLE PATTERN DOTS-12345 */
0xf4, 0x10, 0x01, 0x00, 0x28, 0x20, 0x00, 0x28, 0x20, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','6',0, /* 44071, 0x1002820, U+2820, KEY_braille_dots_6, BRAILLE PATTERN DOTS-6 */
0xe8, 0x4c, 0x01, 0x00, 0x28, 0x21, 0x00, 0x28, 0x21, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','6',0, /* 44100, 0x1002821, U+2821, KEY_braille_dots_16, BRAILLE PATTERN DOTS-16 */
0xe8, 0x4e, 0x01, 0x00, 0x28, 0x22, 0x00, 0x28, 0x22, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','6',0, /* 44129, 0x1002822, U+2822, KEY_braille_dots_26, BRAILLE PATTERN DOTS-26 */
0xd0, 0xc6, 0x01, 0x00, 0x28, 0x23, 0x00, 0x28, 0x23, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','6',0, /* 44159, 0x1002823, U+2823, KEY_braille_dots_126, BRAILLE PATTERN DOTS-126 */
0xe8, 0x50, 0x01, 0x00, 0x28, 0x24, 0x00, 0x28, 0x24, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','6',0, /* 44188, 0x1002824, U+2824, KEY_braille_dots_36, BRAILLE PATTERN DOTS-36 */
0xd0, 0xc8, 0x01, 0x00, 0x28, 0x25, 0x00, 0x28, 0x25, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','6',0, /* 44218, 0x1002825, U+2825, KEY_braille_dots_136, BRAILLE PATTERN DOTS-136 */
0xd0, 0xcc, 0x01, 0x00, 0x28, 0x26, 0x00, 0x28, 0x26, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','6',0, /* 44248, 0x1002826, U+2826, KEY_braille_dots_236, BRAILLE PATTERN DOTS-236 */
0xa1, 0xbc, 0x01, 0x00, 0x28, 0x27, 0x00, 0x28, 0x27, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','6',0, /* 44279, 0x1002827, U+2827, KEY_braille_dots_1236, BRAILLE PATTERN DOTS-1236 */
0xe8, 0x52, 0x01, 0x00, 0x28, 0x28, 0x00, 0x28, 0x28, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','6',0, /* 44308, 0x1002828, U+2828, KEY_braille_dots_46, BRAILLE PATTERN DOTS-46 */
0xd0, 0xca, 0x01, 0x00, 0x28, 0x29, 0x00, 0x28, 0x29, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','6',0, /* 44338, 0x1002829, U+2829, KEY_braille_dots_146, BRAILLE PATTERN DOTS-146 */
0xd0, 0xce, 0x01, 0x00, 0x28, 0x2a, 0x00, 0x28, 0x2a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','6',0, /* 44368, 0x100282a, U+282a, KEY_braille_dots_246, BRAILLE PATTERN DOTS-246 */
0xa1, 0xbe, 0x01, 0x00, 0x28, 0x2b, 0x00, 0x28, 0x2b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','6',0, /* 44399, 0x100282b, U+282b, KEY_braille_dots_1246, BRAILLE PATTERN DOTS-1246 */
0xd0, 0xd2, 0x01, 0x00, 0x28, 0x2c, 0x00, 0x28, 0x2c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','6',0, /* 44429, 0x100282c, U+282c, KEY_braille_dots_346, BRAILLE PATTERN DOTS-346 */
0xa1, 0xc2, 0x01, 0x00, 0x28, 0x2d, 0x00, 0x28, 0x2d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','6',0, /* 44460, 0x100282d, U+282d, KEY_braille_dots_1346, BRAILLE PATTERN DOTS-1346 */
0xa1, 0xca, 0x01, 0x00, 0x28, 0x2e, 0x00, 0x28, 0x2e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','6',0, /* 44491, 0x100282e, U+282e, KEY_braille_dots_2346, BRAILLE PATTERN DOTS-2346 */
0x43, 0xaa, 0x01, 0x00, 0x28, 0x2f, 0x00, 0x28, 0x2f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','6',0, /* 44523, 0x100282f, U+282f, KEY_braille_dots_12346, BRAILLE PATTERN DOTS-12346 */
0xe8, 0x54, 0x01, 0x00, 0x28, 0x30, 0x00, 0x28, 0x30, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','6',0, /* 44552, 0x1002830, U+2830, KEY_braille_dots_56, BRAILLE PATTERN DOTS-56 */
0xd0, 0xcc, 0x01, 0x00, 0x28, 0x31, 0x00, 0x28, 0x31, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','6',0, /* 44582, 0x1002831, U+2831, KEY_braille_dots_156, BRAILLE PATTERN DOTS-156 */
0xd0, 0xd0, 0x01, 0x00, 0x28, 0x32, 0x00, 0x28, 0x32, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','6',0, /* 44612, 0x1002832, U+2832, KEY_braille_dots_256, BRAILLE PATTERN DOTS-256 */
0xa1, 0xc0, 0x01, 0x00, 0x28, 0x33, 0x00, 0x28, 0x33, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','6',0, /* 44643, 0x1002833, U+2833, KEY_braille_dots_1256, BRAILLE PATTERN DOTS-1256 */
0xd0, 0xd4, 0x01, 0x00, 0x28, 0x34, 0x00, 0x28, 0x34, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','6',0, /* 44673, 0x1002834, U+2834, KEY_braille_dots_356, BRAILLE PATTERN DOTS-356 */
0xa1, 0xc4, 0x01, 0x00, 0x28, 0x35, 0x00, 0x28, 0x35, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','6',0, /* 44704, 0x1002835, U+2835, KEY_braille_dots_1356, BRAILLE PATTERN DOTS-1356 */
0xa1, 0xcc, 0x01, 0x00, 0x28, 0x36, 0x00, 0x28, 0x36, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','6',0, /* 44735, 0x1002836, U+2836, KEY_braille_dots_2356, BRAILLE PATTERN DOTS-2356 */
0x43, 0xac, 0x01, 0x00, 0x28, 0x37, 0x00, 0x28, 0x37, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','6',0, /* 44767, 0x1002837, U+2837, KEY_braille_dots_12356, BRAILLE PATTERN DOTS-12356 */
0xd0, 0xd8, 0x01, 0x00, 0x28, 0x38, 0x00, 0x28, 0x38, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','6',0, /* 44797, 0x1002838, U+2838, KEY_braille_dots_456, BRAILLE PATTERN DOTS-456 */
0xa1, 0xc8, 0x01, 0x00, 0x28, 0x39, 0x00, 0x28, 0x39, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','6',0, /* 44828, 0x1002839, U+2839, KEY_braille_dots_1456, BRAILLE PATTERN DOTS-1456 */
0xa1, 0xd0, 0x01, 0x00, 0x28, 0x3a, 0x00, 0x28, 0x3a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','6',0, /* 44859, 0x100283a, U+283a, KEY_braille_dots_2456, BRAILLE PATTERN DOTS-2456 */
0x43, 0xb0, 0x01, 0x00, 0x28, 0x3b, 0x00, 0x28, 0x3b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','6',0, /* 44891, 0x100283b, U+283b, KEY_braille_dots_12456, BRAILLE PATTERN DOTS-12456 */
0xa1, 0xd8, 0x01, 0x00, 0x28, 0x3c, 0x00, 0x28, 0x3c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','6',0, /* 44922, 0x100283c, U+283c, KEY_braille_dots_3456, BRAILLE PATTERN DOTS-3456 */
0x43, 0xb8, 0x01, 0x00, 0x28, 0x3d, 0x00, 0x28, 0x3d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','6',0, /* 44954, 0x100283d, U+283d, KEY_braille_dots_13456, BRAILLE PATTERN DOTS-13456 */
0x43, 0xc8, 0x01, 0x00, 0x28, 0x3e, 0x00, 0x28, 0x3e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','6',0, /* 44986, 0x100283e, U+283e, KEY_braille_dots_23456, BRAILLE PATTERN DOTS-23456 */
0x87, 0x88, 0x01, 0x00, 0x28, 0x3f, 0x00, 0x28, 0x3f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','6',0, /* 45019, 0x100283f, U+283f, KEY_braille_dots_123456, BRAILLE PATTERN DOTS-123456 */
0xf4, 0x11, 0x01, 0x00, 0x28, 0x40, 0x00, 0x28, 0x40, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','7',0, /* 45047, 0x1002840, U+2840, KEY_braille_dots_7, BRAILLE PATTERN DOTS-7 */
0xe8, 0x4d, 0x01, 0x00, 0x28, 0x41, 0x00, 0x28, 0x41, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','7',0, /* 45076, 0x1002841, U+2841, KEY_braille_dots_17, BRAILLE PATTERN DOTS-17 */
0xe8, 0x4f, 0x01, 0x00, 0x28, 0x42, 0x00, 0x28, 0x42, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','7',0, /* 45105, 0x1002842, U+2842, KEY_braille_dots_27, BRAILLE PATTERN DOTS-27 */
0xd0, 0xc7, 0x01, 0x00, 0x28, 0x43, 0x00, 0x28, 0x43, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','7',0, /* 45135, 0x1002843, U+2843, KEY_braille_dots_127, BRAILLE PATTERN DOTS-127 */
0xe8, 0x51, 0x01, 0x00, 0x28, 0x44, 0x00, 0x28, 0x44, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','7',0, /* 45164, 0x1002844, U+2844, KEY_braille_dots_37, BRAILLE PATTERN DOTS-37 */
0xd0, 0xc9, 0x01, 0x00, 0x28, 0x45, 0x00, 0x28, 0x45, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','7',0, /* 45194, 0x1002845, U+2845, KEY_braille_dots_137, BRAILLE PATTERN DOTS-137 */
0xd0, 0xcd, 0x01, 0x00, 0x28, 0x46, 0x00, 0x28, 0x46, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','7',0, /* 45224, 0x1002846, U+2846, KEY_braille_dots_237, BRAILLE PATTERN DOTS-237 */
0xa1, 0xbd, 0x01, 0x00, 0x28, 0x47, 0x00, 0x28, 0x47, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','7',0, /* 45255, 0x1002847, U+2847, KEY_braille_dots_1237, BRAILLE PATTERN DOTS-1237 */
0xe8, 0x53, 0x01, 0x00, 0x28, 0x48, 0x00, 0x28, 0x48, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','7',0, /* 45284, 0x1002848, U+2848, KEY_braille_dots_47, BRAILLE PATTERN DOTS-47 */
0xd0, 0xcb, 0x01, 0x00, 0x28, 0x49, 0x00, 0x28, 0x49, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','7',0, /* 45314, 0x1002849, U+2849, KEY_braille_dots_147, BRAILLE PATTERN DOTS-147 */
0xd0, 0xcf, 0x01, 0x00, 0x28, 0x4a, 0x00, 0x28, 0x4a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','7',0, /* 45344, 0x100284a, U+284a, KEY_braille_dots_247, BRAILLE PATTERN DOTS-247 */
0xa1, 0xbf, 0x01, 0x00, 0x28, 0x4b, 0x00, 0x28, 0x4b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','7',0, /* 45375, 0x100284b, U+284b, KEY_braille_dots_1247, BRAILLE PATTERN DOTS-1247 */
0xd0, 0xd3, 0x01, 0x00, 0x28, 0x4c, 0x00, 0x28, 0x4c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','7',0, /* 45405, 0x100284c, U+284c, KEY_braille_dots_347, BRAILLE PATTERN DOTS-347 */
0xa1, 0xc3, 0x01, 0x00, 0x28, 0x4d, 0x00, 0x28, 0x4d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','7',0, /* 45436, 0x100284d, U+284d, KEY_braille_dots_1347, BRAILLE PATTERN DOTS-1347 */
0xa1, 0xcb, 0x01, 0x00, 0x28, 0x4e, 0x00, 0x28, 0x4e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','7',0, /* 45467, 0x100284e, U+284e, KEY_braille_dots_2347, BRAILLE PATTERN DOTS-2347 */
0x43, 0xab, 0x01, 0x00, 0x28, 0x4f, 0x00, 0x28, 0x4f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','7',0, /* 45499, 0x100284f, U+284f, KEY_braille_dots_12347, BRAILLE PATTERN DOTS-12347 */
0xe8, 0x55, 0x01, 0x00, 0x28, 0x50, 0x00, 0x28, 0x50, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','7',0, /* 45528, 0x1002850, U+2850, KEY_braille_dots_57, BRAILLE PATTERN DOTS-57 */
0xd0, 0xcd, 0x01, 0x00, 0x28, 0x51, 0x00, 0x28, 0x51, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','7',0, /* 45558, 0x1002851, U+2851, KEY_braille_dots_157, BRAILLE PATTERN DOTS-157 */
0xd0, 0xd1, 0x01, 0x00, 0x28, 0x52, 0x00, 0x28, 0x52, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','7',0, /* 45588, 0x1002852, U+2852, KEY_braille_dots_257, BRAILLE PATTERN DOTS-257 */
0xa1, 0xc1, 0x01, 0x00, 0x28, 0x53, 0x00, 0x28, 0x53, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','7',0, /* 45619, 0x1002853, U+2853, KEY_braille_dots_1257, BRAILLE PATTERN DOTS-1257 */
0xd0, 0xd5, 0x01, 0x00, 0x28, 0x54, 0x00, 0x28, 0x54, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','7',0, /* 45649, 0x1002854, U+2854, KEY_braille_dots_357, BRAILLE PATTERN DOTS-357 */
0xa1, 0xc5, 0x01, 0x00, 0x28, 0x55, 0x00, 0x28, 0x55, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','7',0, /* 45680, 0x1002855, U+2855, KEY_braille_dots_1357, BRAILLE PATTERN DOTS-1357 */
0xa1, 0xcd, 0x01, 0x00, 0x28, 0x56, 0x00, 0x28, 0x56, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','7',0, /* 45711, 0x1002856, U+2856, KEY_braille_dots_2357, BRAILLE PATTERN DOTS-2357 */
0x43, 0xad, 0x01, 0x00, 0x28, 0x57, 0x00, 0x28, 0x57, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','7',0, /* 45743, 0x1002857, U+2857, KEY_braille_dots_12357, BRAILLE PATTERN DOTS-12357 */
0xd0, 0xd9, 0x01, 0x00, 0x28, 0x58, 0x00, 0x28, 0x58, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','7',0, /* 45773, 0x1002858, U+2858, KEY_braille_dots_457, BRAILLE PATTERN DOTS-457 */
0xa1, 0xc9, 0x01, 0x00, 0x28, 0x59, 0x00, 0x28, 0x59, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','7',0, /* 45804, 0x1002859, U+2859, KEY_braille_dots_1457, BRAILLE PATTERN DOTS-1457 */
0xa1, 0xd1, 0x01, 0x00, 0x28, 0x5a, 0x00, 0x28, 0x5a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','7',0, /* 45835, 0x100285a, U+285a, KEY_braille_dots_2457, BRAILLE PATTERN DOTS-2457 */
0x43, 0xb1, 0x01, 0x00, 0x28, 0x5b, 0x00, 0x28, 0x5b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','7',0, /* 45867, 0x100285b, U+285b, KEY_braille_dots_12457, BRAILLE PATTERN DOTS-12457 */
0xa1, 0xd9, 0x01, 0x00, 0x28, 0x5c, 0x00, 0x28, 0x5c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','7',0, /* 45898, 0x100285c, U+285c, KEY_braille_dots_3457, BRAILLE PATTERN DOTS-3457 */
0x43, 0xb9, 0x01, 0x00, 0x28, 0x5d, 0x00, 0x28, 0x5d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','7',0, /* 45930, 0x100285d, U+285d, KEY_braille_dots_13457, BRAILLE PATTERN DOTS-13457 */
0x43, 0xc9, 0x01, 0x00, 0x28, 0x5e, 0x00, 0x28, 0x5e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','7',0, /* 45962, 0x100285e, U+285e, KEY_braille_dots_23457, BRAILLE PATTERN DOTS-23457 */
0x87, 0x89, 0x01, 0x00, 0x28, 0x5f, 0x00, 0x28, 0x5f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','7',0, /* 45995, 0x100285f, U+285f, KEY_braille_dots_123457, BRAILLE PATTERN DOTS-123457 */
0xe8, 0x57, 0x01, 0x00, 0x28, 0x60, 0x00, 0x28, 0x60, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','6','7',0, /* 46024, 0x1002860, U+2860, KEY_braille_dots_67, BRAILLE PATTERN DOTS-67 */
0xd0, 0xcf, 0x01, 0x00, 0x28, 0x61, 0x00, 0x28, 0x61, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','6','7',0, /* 46054, 0x1002861, U+2861, KEY_braille_dots_167, BRAILLE PATTERN DOTS-167 */
0xd0, 0xd3, 0x01, 0x00, 0x28, 0x62, 0x00, 0x28, 0x62, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','6','7',0, /* 46084, 0x1002862, U+2862, KEY_braille_dots_267, BRAILLE PATTERN DOTS-267 */
0xa1, 0xc3, 0x01, 0x00, 0x28, 0x63, 0x00, 0x28, 0x63, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','6','7',0, /* 46115, 0x1002863, U+2863, KEY_braille_dots_1267, BRAILLE PATTERN DOTS-1267 */
0xd0, 0xd7, 0x01, 0x00, 0x28, 0x64, 0x00, 0x28, 0x64, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','6','7',0, /* 46145, 0x1002864, U+2864, KEY_braille_dots_367, BRAILLE PATTERN DOTS-367 */
0xa1, 0xc7, 0x01, 0x00, 0x28, 0x65, 0x00, 0x28, 0x65, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','6','7',0, /* 46176, 0x1002865, U+2865, KEY_braille_dots_1367, BRAILLE PATTERN DOTS-1367 */
0xa1, 0xcf, 0x01, 0x00, 0x28, 0x66, 0x00, 0x28, 0x66, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','6','7',0, /* 46207, 0x1002866, U+2866, KEY_braille_dots_2367, BRAILLE PATTERN DOTS-2367 */
0x43, 0xaf, 0x01, 0x00, 0x28, 0x67, 0x00, 0x28, 0x67, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','6','7',0, /* 46239, 0x1002867, U+2867, KEY_braille_dots_12367, BRAILLE PATTERN DOTS-12367 */
0xd0, 0xdb, 0x01, 0x00, 0x28, 0x68, 0x00, 0x28, 0x68, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','6','7',0, /* 46269, 0x1002868, U+2868, KEY_braille_dots_467, BRAILLE PATTERN DOTS-467 */
0xa1, 0xcb, 0x01, 0x00, 0x28, 0x69, 0x00, 0x28, 0x69, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','6','7',0, /* 46300, 0x1002869, U+2869, KEY_braille_dots_1467, BRAILLE PATTERN DOTS-1467 */
0xa1, 0xd3, 0x01, 0x00, 0x28, 0x6a, 0x00, 0x28, 0x6a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','6','7',0, /* 46331, 0x100286a, U+286a, KEY_braille_dots_2467, BRAILLE PATTERN DOTS-2467 */
0x43, 0xb3, 0x01, 0x00, 0x28, 0x6b, 0x00, 0x28, 0x6b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','6','7',0, /* 46363, 0x100286b, U+286b, KEY_braille_dots_12467, BRAILLE PATTERN DOTS-12467 */
0xa1, 0xdb, 0x01, 0x00, 0x28, 0x6c, 0x00, 0x28, 0x6c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','6','7',0, /* 46394, 0x100286c, U+286c, KEY_braille_dots_3467, BRAILLE PATTERN DOTS-3467 */
0x43, 0xbb, 0x01, 0x00, 0x28, 0x6d, 0x00, 0x28, 0x6d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','6','7',0, /* 46426, 0x100286d, U+286d, KEY_braille_dots_13467, BRAILLE PATTERN DOTS-13467 */
0x43, 0xcb, 0x01, 0x00, 0x28, 0x6e, 0x00, 0x28, 0x6e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','6','7',0, /* 46458, 0x100286e, U+286e, KEY_braille_dots_23467, BRAILLE PATTERN DOTS-23467 */
0x87, 0x8b, 0x01, 0x00, 0x28, 0x6f, 0x00, 0x28, 0x6f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','6','7',0, /* 46491, 0x100286f, U+286f, KEY_braille_dots_123467, BRAILLE PATTERN DOTS-123467 */
0xd0, 0xdf, 0x01, 0x00, 0x28, 0x70, 0x00, 0x28, 0x70, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','6','7',0, /* 46521, 0x1002870, U+2870, KEY_braille_dots_567, BRAILLE PATTERN DOTS-567 */
0xa1, 0xcf, 0x01, 0x00, 0x28, 0x71, 0x00, 0x28, 0x71, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','6','7',0, /* 46552, 0x1002871, U+2871, KEY_braille_dots_1567, BRAILLE PATTERN DOTS-1567 */
0xa1, 0xd7, 0x01, 0x00, 0x28, 0x72, 0x00, 0x28, 0x72, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','6','7',0, /* 46583, 0x1002872, U+2872, KEY_braille_dots_2567, BRAILLE PATTERN DOTS-2567 */
0x43, 0xb7, 0x01, 0x00, 0x28, 0x73, 0x00, 0x28, 0x73, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','6','7',0, /* 46615, 0x1002873, U+2873, KEY_braille_dots_12567, BRAILLE PATTERN DOTS-12567 */
0xa1, 0xdf, 0x01, 0x00, 0x28, 0x74, 0x00, 0x28, 0x74, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','6','7',0, /* 46646, 0x1002874, U+2874, KEY_braille_dots_3567, BRAILLE PATTERN DOTS-3567 */
0x43, 0xbf, 0x01, 0x00, 0x28, 0x75, 0x00, 0x28, 0x75, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','6','7',0, /* 46678, 0x1002875, U+2875, KEY_braille_dots_13567, BRAILLE PATTERN DOTS-13567 */
0x43, 0xcf, 0x01, 0x00, 0x28, 0x76, 0x00, 0x28, 0x76, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','6','7',0, /* 46710, 0x1002876, U+2876, KEY_braille_dots_23567, BRAILLE PATTERN DOTS-23567 */
0x87, 0x8f, 0x01, 0x00, 0x28, 0x77, 0x00, 0x28, 0x77, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','6','7',0, /* 46743, 0x1002877, U+2877, KEY_braille_dots_123567, BRAILLE PATTERN DOTS-123567 */
0xa1, 0xe7, 0x01, 0x00, 0x28, 0x78, 0x00, 0x28, 0x78, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','6','7',0, /* 46774, 0x1002878, U+2878, KEY_braille_dots_4567, BRAILLE PATTERN DOTS-4567 */
0x43, 0xc7, 0x01, 0x00, 0x28, 0x79, 0x00, 0x28, 0x79, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','6','7',0, /* 46806, 0x1002879, U+2879, KEY_braille_dots_14567, BRAILLE PATTERN DOTS-14567 */
0x43, 0xd7, 0x01, 0x00, 0x28, 0x7a, 0x00, 0x28, 0x7a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','6','7',0, /* 46838, 0x100287a, U+287a, KEY_braille_dots_24567, BRAILLE PATTERN DOTS-24567 */
0x87, 0x97, 0x01, 0x00, 0x28, 0x7b, 0x00, 0x28, 0x7b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','6','7',0, /* 46871, 0x100287b, U+287b, KEY_braille_dots_124567, BRAILLE PATTERN DOTS-124567 */
0x43, 0xe7, 0x01, 0x00, 0x28, 0x7c, 0x00, 0x28, 0x7c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','6','7',0, /* 46903, 0x100287c, U+287c, KEY_braille_dots_34567, BRAILLE PATTERN DOTS-34567 */
0x87, 0xa7, 0x01, 0x00, 0x28, 0x7d, 0x00, 0x28, 0x7d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','6','7',0, /* 46936, 0x100287d, U+287d, KEY_braille_dots_134567, BRAILLE PATTERN DOTS-134567 */
0x87, 0xc7, 0x01, 0x00, 0x28, 0x7e, 0x00, 0x28, 0x7e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','6','7',0, /* 46969, 0x100287e, U+287e, KEY_braille_dots_234567, BRAILLE PATTERN DOTS-234567 */
0x0f, 0x47, 0x01, 0x00, 0x28, 0x7f, 0x00, 0x28, 0x7f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','6','7',0, /* 47003, 0x100287f, U+287f, KEY_braille_dots_1234567, BRAILLE PATTERN DOTS-1234567 */
0xf4, 0x12, 0x01, 0x00, 0x28, 0x80, 0x00, 0x28, 0x80, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','8',0, /* 47031, 0x1002880, U+2880, KEY_braille_dots_8, BRAILLE PATTERN DOTS-8 */
0xe8, 0x4e, 0x01, 0x00, 0x28, 0x81, 0x00, 0x28, 0x81, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','8',0, /* 47060, 0x1002881, U+2881, KEY_braille_dots_18, BRAILLE PATTERN DOTS-18 */
0xe8, 0x50, 0x01, 0x00, 0x28, 0x82, 0x00, 0x28, 0x82, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','8',0, /* 47089, 0x1002882, U+2882, KEY_braille_dots_28, BRAILLE PATTERN DOTS-28 */
0xd0, 0xc8, 0x01, 0x00, 0x28, 0x83, 0x00, 0x28, 0x83, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','8',0, /* 47119, 0x1002883, U+2883, KEY_braille_dots_128, BRAILLE PATTERN DOTS-128 */
0xe8, 0x52, 0x01, 0x00, 0x28, 0x84, 0x00, 0x28, 0x84, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','8',0, /* 47148, 0x1002884, U+2884, KEY_braille_dots_38, BRAILLE PATTERN DOTS-38 */
0xd0, 0xca, 0x01, 0x00, 0x28, 0x85, 0x00, 0x28, 0x85, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','8',0, /* 47178, 0x1002885, U+2885, KEY_braille_dots_138, BRAILLE PATTERN DOTS-138 */
0xd0, 0xce, 0x01, 0x00, 0x28, 0x86, 0x00, 0x28, 0x86, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','8',0, /* 47208, 0x1002886, U+2886, KEY_braille_dots_238, BRAILLE PATTERN DOTS-238 */
0xa1, 0xbe, 0x01, 0x00, 0x28, 0x87, 0x00, 0x28, 0x87, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','8',0, /* 47239, 0x1002887, U+2887, KEY_braille_dots_1238, BRAILLE PATTERN DOTS-1238 */
0xe8, 0x54, 0x01, 0x00, 0x28, 0x88, 0x00, 0x28, 0x88, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','8',0, /* 47268, 0x1002888, U+2888, KEY_braille_dots_48, BRAILLE PATTERN DOTS-48 */
0xd0, 0xcc, 0x01, 0x00, 0x28, 0x89, 0x00, 0x28, 0x89, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','8',0, /* 47298, 0x1002889, U+2889, KEY_braille_dots_148, BRAILLE PATTERN DOTS-148 */
0xd0, 0xd0, 0x01, 0x00, 0x28, 0x8a, 0x00, 0x28, 0x8a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','8',0, /* 47328, 0x100288a, U+288a, KEY_braille_dots_248, BRAILLE PATTERN DOTS-248 */
0xa1, 0xc0, 0x01, 0x00, 0x28, 0x8b, 0x00, 0x28, 0x8b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','8',0, /* 47359, 0x100288b, U+288b, KEY_braille_dots_1248, BRAILLE PATTERN DOTS-1248 */
0xd0, 0xd4, 0x01, 0x00, 0x28, 0x8c, 0x00, 0x28, 0x8c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','8',0, /* 47389, 0x100288c, U+288c, KEY_braille_dots_348, BRAILLE PATTERN DOTS-348 */
0xa1, 0xc4, 0x01, 0x00, 0x28, 0x8d, 0x00, 0x28, 0x8d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','8',0, /* 47420, 0x100288d, U+288d, KEY_braille_dots_1348, BRAILLE PATTERN DOTS-1348 */
0xa1, 0xcc, 0x01, 0x00, 0x28, 0x8e, 0x00, 0x28, 0x8e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','8',0, /* 47451, 0x100288e, U+288e, KEY_braille_dots_2348, BRAILLE PATTERN DOTS-2348 */
0x43, 0xac, 0x01, 0x00, 0x28, 0x8f, 0x00, 0x28, 0x8f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','8',0, /* 47483, 0x100288f, U+288f, KEY_braille_dots_12348, BRAILLE PATTERN DOTS-12348 */
0xe8, 0x56, 0x01, 0x00, 0x28, 0x90, 0x00, 0x28, 0x90, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','8',0, /* 47512, 0x1002890, U+2890, KEY_braille_dots_58, BRAILLE PATTERN DOTS-58 */
0xd0, 0xce, 0x01, 0x00, 0x28, 0x91, 0x00, 0x28, 0x91, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','8',0, /* 47542, 0x1002891, U+2891, KEY_braille_dots_158, BRAILLE PATTERN DOTS-158 */
0xd0, 0xd2, 0x01, 0x00, 0x28, 0x92, 0x00, 0x28, 0x92, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','8',0, /* 47572, 0x1002892, U+2892, KEY_braille_dots_258, BRAILLE PATTERN DOTS-258 */
0xa1, 0xc2, 0x01, 0x00, 0x28, 0x93, 0x00, 0x28, 0x93, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','8',0, /* 47603, 0x1002893, U+2893, KEY_braille_dots_1258, BRAILLE PATTERN DOTS-1258 */
0xd0, 0xd6, 0x01, 0x00, 0x28, 0x94, 0x00, 0x28, 0x94, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','8',0, /* 47633, 0x1002894, U+2894, KEY_braille_dots_358, BRAILLE PATTERN DOTS-358 */
0xa1, 0xc6, 0x01, 0x00, 0x28, 0x95, 0x00, 0x28, 0x95, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','8',0, /* 47664, 0x1002895, U+2895, KEY_braille_dots_1358, BRAILLE PATTERN DOTS-1358 */
0xa1, 0xce, 0x01, 0x00, 0x28, 0x96, 0x00, 0x28, 0x96, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','8',0, /* 47695, 0x1002896, U+2896, KEY_braille_dots_2358, BRAILLE PATTERN DOTS-2358 */
0x43, 0xae, 0x01, 0x00, 0x28, 0x97, 0x00, 0x28, 0x97, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','8',0, /* 47727, 0x1002897, U+2897, KEY_braille_dots_12358, BRAILLE PATTERN DOTS-12358 */
0xd0, 0xda, 0x01, 0x00, 0x28, 0x98, 0x00, 0x28, 0x98, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','8',0, /* 47757, 0x1002898, U+2898, KEY_braille_dots_458, BRAILLE PATTERN DOTS-458 */
0xa1, 0xca, 0x01, 0x00, 0x28, 0x99, 0x00, 0x28, 0x99, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','8',0, /* 47788, 0x1002899, U+2899, KEY_braille_dots_1458, BRAILLE PATTERN DOTS-1458 */
0xa1, 0xd2, 0x01, 0x00, 0x28, 0x9a, 0x00, 0x28, 0x9a, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','8',0, /* 47819, 0x100289a, U+289a, KEY_braille_dots_2458, BRAILLE PATTERN DOTS-2458 */
0x43, 0xb2, 0x01, 0x00, 0x28, 0x9b, 0x00, 0x28, 0x9b, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','8',0, /* 47851, 0x100289b, U+289b, KEY_braille_dots_12458, BRAILLE PATTERN DOTS-12458 */
0xa1, 0xda, 0x01, 0x00, 0x28, 0x9c, 0x00, 0x28, 0x9c, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','8',0, /* 47882, 0x100289c, U+289c, KEY_braille_dots_3458, BRAILLE PATTERN DOTS-3458 */
0x43, 0xba, 0x01, 0x00, 0x28, 0x9d, 0x00, 0x28, 0x9d, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','8',0, /* 47914, 0x100289d, U+289d, KEY_braille_dots_13458, BRAILLE PATTERN DOTS-13458 */
0x43, 0xca, 0x01, 0x00, 0x28, 0x9e, 0x00, 0x28, 0x9e, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','8',0, /* 47946, 0x100289e, U+289e, KEY_braille_dots_23458, BRAILLE PATTERN DOTS-23458 */
0x87, 0x8a, 0x01, 0x00, 0x28, 0x9f, 0x00, 0x28, 0x9f, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','8',0, /* 47979, 0x100289f, U+289f, KEY_braille_dots_123458, BRAILLE PATTERN DOTS-123458 */
0xe8, 0x58, 0x01, 0x00, 0x28, 0xa0, 0x00, 0x28, 0xa0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','6','8',0, /* 48008, 0x10028a0, U+28a0, KEY_braille_dots_68, BRAILLE PATTERN DOTS-68 */
0xd0, 0xd0, 0x01, 0x00, 0x28, 0xa1, 0x00, 0x28, 0xa1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','6','8',0, /* 48038, 0x10028a1, U+28a1, KEY_braille_dots_168, BRAILLE PATTERN DOTS-168 */
0xd0, 0xd4, 0x01, 0x00, 0x28, 0xa2, 0x00, 0x28, 0xa2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','6','8',0, /* 48068, 0x10028a2, U+28a2, KEY_braille_dots_268, BRAILLE PATTERN DOTS-268 */
0xa1, 0xc4, 0x01, 0x00, 0x28, 0xa3, 0x00, 0x28, 0xa3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','6','8',0, /* 48099, 0x10028a3, U+28a3, KEY_braille_dots_1268, BRAILLE PATTERN DOTS-1268 */
0xd0, 0xd8, 0x01, 0x00, 0x28, 0xa4, 0x00, 0x28, 0xa4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','6','8',0, /* 48129, 0x10028a4, U+28a4, KEY_braille_dots_368, BRAILLE PATTERN DOTS-368 */
0xa1, 0xc8, 0x01, 0x00, 0x28, 0xa5, 0x00, 0x28, 0xa5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','6','8',0, /* 48160, 0x10028a5, U+28a5, KEY_braille_dots_1368, BRAILLE PATTERN DOTS-1368 */
0xa1, 0xd0, 0x01, 0x00, 0x28, 0xa6, 0x00, 0x28, 0xa6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','6','8',0, /* 48191, 0x10028a6, U+28a6, KEY_braille_dots_2368, BRAILLE PATTERN DOTS-2368 */
0x43, 0xb0, 0x01, 0x00, 0x28, 0xa7, 0x00, 0x28, 0xa7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','6','8',0, /* 48223, 0x10028a7, U+28a7, KEY_braille_dots_12368, BRAILLE PATTERN DOTS-12368 */
0xd0, 0xdc, 0x01, 0x00, 0x28, 0xa8, 0x00, 0x28, 0xa8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','6','8',0, /* 48253, 0x10028a8, U+28a8, KEY_braille_dots_468, BRAILLE PATTERN DOTS-468 */
0xa1, 0xcc, 0x01, 0x00, 0x28, 0xa9, 0x00, 0x28, 0xa9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','6','8',0, /* 48284, 0x10028a9, U+28a9, KEY_braille_dots_1468, BRAILLE PATTERN DOTS-1468 */
0xa1, 0xd4, 0x01, 0x00, 0x28, 0xaa, 0x00, 0x28, 0xaa, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','6','8',0, /* 48315, 0x10028aa, U+28aa, KEY_braille_dots_2468, BRAILLE PATTERN DOTS-2468 */
0x43, 0xb4, 0x01, 0x00, 0x28, 0xab, 0x00, 0x28, 0xab, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','6','8',0, /* 48347, 0x10028ab, U+28ab, KEY_braille_dots_12468, BRAILLE PATTERN DOTS-12468 */
0xa1, 0xdc, 0x01, 0x00, 0x28, 0xac, 0x00, 0x28, 0xac, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','6','8',0, /* 48378, 0x10028ac, U+28ac, KEY_braille_dots_3468, BRAILLE PATTERN DOTS-3468 */
0x43, 0xbc, 0x01, 0x00, 0x28, 0xad, 0x00, 0x28, 0xad, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','6','8',0, /* 48410, 0x10028ad, U+28ad, KEY_braille_dots_13468, BRAILLE PATTERN DOTS-13468 */
0x43, 0xcc, 0x01, 0x00, 0x28, 0xae, 0x00, 0x28, 0xae, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','6','8',0, /* 48442, 0x10028ae, U+28ae, KEY_braille_dots_23468, BRAILLE PATTERN DOTS-23468 */
0x87, 0x8c, 0x01, 0x00, 0x28, 0xaf, 0x00, 0x28, 0xaf, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','6','8',0, /* 48475, 0x10028af, U+28af, KEY_braille_dots_123468, BRAILLE PATTERN DOTS-123468 */
0xd0, 0xe0, 0x01, 0x00, 0x28, 0xb0, 0x00, 0x28, 0xb0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','6','8',0, /* 48505, 0x10028b0, U+28b0, KEY_braille_dots_568, BRAILLE PATTERN DOTS-568 */
0xa1, 0xd0, 0x01, 0x00, 0x28, 0xb1, 0x00, 0x28, 0xb1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','6','8',0, /* 48536, 0x10028b1, U+28b1, KEY_braille_dots_1568, BRAILLE PATTERN DOTS-1568 */
0xa1, 0xd8, 0x01, 0x00, 0x28, 0xb2, 0x00, 0x28, 0xb2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','6','8',0, /* 48567, 0x10028b2, U+28b2, KEY_braille_dots_2568, BRAILLE PATTERN DOTS-2568 */
0x43, 0xb8, 0x01, 0x00, 0x28, 0xb3, 0x00, 0x28, 0xb3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','6','8',0, /* 48599, 0x10028b3, U+28b3, KEY_braille_dots_12568, BRAILLE PATTERN DOTS-12568 */
0xa1, 0xe0, 0x01, 0x00, 0x28, 0xb4, 0x00, 0x28, 0xb4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','6','8',0, /* 48630, 0x10028b4, U+28b4, KEY_braille_dots_3568, BRAILLE PATTERN DOTS-3568 */
0x43, 0xc0, 0x01, 0x00, 0x28, 0xb5, 0x00, 0x28, 0xb5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','6','8',0, /* 48662, 0x10028b5, U+28b5, KEY_braille_dots_13568, BRAILLE PATTERN DOTS-13568 */
0x43, 0xd0, 0x01, 0x00, 0x28, 0xb6, 0x00, 0x28, 0xb6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','6','8',0, /* 48694, 0x10028b6, U+28b6, KEY_braille_dots_23568, BRAILLE PATTERN DOTS-23568 */
0x87, 0x90, 0x01, 0x00, 0x28, 0xb7, 0x00, 0x28, 0xb7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','6','8',0, /* 48727, 0x10028b7, U+28b7, KEY_braille_dots_123568, BRAILLE PATTERN DOTS-123568 */
0xa1, 0xe8, 0x01, 0x00, 0x28, 0xb8, 0x00, 0x28, 0xb8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','6','8',0, /* 48758, 0x10028b8, U+28b8, KEY_braille_dots_4568, BRAILLE PATTERN DOTS-4568 */
0x43, 0xc8, 0x01, 0x00, 0x28, 0xb9, 0x00, 0x28, 0xb9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','6','8',0, /* 48790, 0x10028b9, U+28b9, KEY_braille_dots_14568, BRAILLE PATTERN DOTS-14568 */
0x43, 0xd8, 0x01, 0x00, 0x28, 0xba, 0x00, 0x28, 0xba, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','6','8',0, /* 48822, 0x10028ba, U+28ba, KEY_braille_dots_24568, BRAILLE PATTERN DOTS-24568 */
0x87, 0x98, 0x01, 0x00, 0x28, 0xbb, 0x00, 0x28, 0xbb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','6','8',0, /* 48855, 0x10028bb, U+28bb, KEY_braille_dots_124568, BRAILLE PATTERN DOTS-124568 */
0x43, 0xe8, 0x01, 0x00, 0x28, 0xbc, 0x00, 0x28, 0xbc, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','6','8',0, /* 48887, 0x10028bc, U+28bc, KEY_braille_dots_34568, BRAILLE PATTERN DOTS-34568 */
0x87, 0xa8, 0x01, 0x00, 0x28, 0xbd, 0x00, 0x28, 0xbd, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','6','8',0, /* 48920, 0x10028bd, U+28bd, KEY_braille_dots_134568, BRAILLE PATTERN DOTS-134568 */
0x87, 0xc8, 0x01, 0x00, 0x28, 0xbe, 0x00, 0x28, 0xbe, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','6','8',0, /* 48953, 0x10028be, U+28be, KEY_braille_dots_234568, BRAILLE PATTERN DOTS-234568 */
0x0f, 0x48, 0x01, 0x00, 0x28, 0xbf, 0x00, 0x28, 0xbf, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','6','8',0, /* 48987, 0x10028bf, U+28bf, KEY_braille_dots_1234568, BRAILLE PATTERN DOTS-1234568 */
0xe8, 0x5a, 0x01, 0x00, 0x28, 0xc0, 0x00, 0x28, 0xc0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','7','8',0, /* 49016, 0x10028c0, U+28c0, KEY_braille_dots_78, BRAILLE PATTERN DOTS-78 */
0xd0, 0xd2, 0x01, 0x00, 0x28, 0xc1, 0x00, 0x28, 0xc1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','7','8',0, /* 49046, 0x10028c1, U+28c1, KEY_braille_dots_178, BRAILLE PATTERN DOTS-178 */
0xd0, 0xd6, 0x01, 0x00, 0x28, 0xc2, 0x00, 0x28, 0xc2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','7','8',0, /* 49076, 0x10028c2, U+28c2, KEY_braille_dots_278, BRAILLE PATTERN DOTS-278 */
0xa1, 0xc6, 0x01, 0x00, 0x28, 0xc3, 0x00, 0x28, 0xc3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','7','8',0, /* 49107, 0x10028c3, U+28c3, KEY_braille_dots_1278, BRAILLE PATTERN DOTS-1278 */
0xd0, 0xda, 0x01, 0x00, 0x28, 0xc4, 0x00, 0x28, 0xc4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','7','8',0, /* 49137, 0x10028c4, U+28c4, KEY_braille_dots_378, BRAILLE PATTERN DOTS-378 */
0xa1, 0xca, 0x01, 0x00, 0x28, 0xc5, 0x00, 0x28, 0xc5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','7','8',0, /* 49168, 0x10028c5, U+28c5, KEY_braille_dots_1378, BRAILLE PATTERN DOTS-1378 */
0xa1, 0xd2, 0x01, 0x00, 0x28, 0xc6, 0x00, 0x28, 0xc6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','7','8',0, /* 49199, 0x10028c6, U+28c6, KEY_braille_dots_2378, BRAILLE PATTERN DOTS-2378 */
0x43, 0xb2, 0x01, 0x00, 0x28, 0xc7, 0x00, 0x28, 0xc7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','7','8',0, /* 49231, 0x10028c7, U+28c7, KEY_braille_dots_12378, BRAILLE PATTERN DOTS-12378 */
0xd0, 0xde, 0x01, 0x00, 0x28, 0xc8, 0x00, 0x28, 0xc8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','7','8',0, /* 49261, 0x10028c8, U+28c8, KEY_braille_dots_478, BRAILLE PATTERN DOTS-478 */
0xa1, 0xce, 0x01, 0x00, 0x28, 0xc9, 0x00, 0x28, 0xc9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','7','8',0, /* 49292, 0x10028c9, U+28c9, KEY_braille_dots_1478, BRAILLE PATTERN DOTS-1478 */
0xa1, 0xd6, 0x01, 0x00, 0x28, 0xca, 0x00, 0x28, 0xca, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','7','8',0, /* 49323, 0x10028ca, U+28ca, KEY_braille_dots_2478, BRAILLE PATTERN DOTS-2478 */
0x43, 0xb6, 0x01, 0x00, 0x28, 0xcb, 0x00, 0x28, 0xcb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','7','8',0, /* 49355, 0x10028cb, U+28cb, KEY_braille_dots_12478, BRAILLE PATTERN DOTS-12478 */
0xa1, 0xde, 0x01, 0x00, 0x28, 0xcc, 0x00, 0x28, 0xcc, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','7','8',0, /* 49386, 0x10028cc, U+28cc, KEY_braille_dots_3478, BRAILLE PATTERN DOTS-3478 */
0x43, 0xbe, 0x01, 0x00, 0x28, 0xcd, 0x00, 0x28, 0xcd, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','7','8',0, /* 49418, 0x10028cd, U+28cd, KEY_braille_dots_13478, BRAILLE PATTERN DOTS-13478 */
0x43, 0xce, 0x01, 0x00, 0x28, 0xce, 0x00, 0x28, 0xce, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','7','8',0, /* 49450, 0x10028ce, U+28ce, KEY_braille_dots_23478, BRAILLE PATTERN DOTS-23478 */
0x87, 0x8e, 0x01, 0x00, 0x28, 0xcf, 0x00, 0x28, 0xcf, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','7','8',0, /* 49483, 0x10028cf, U+28cf, KEY_braille_dots_123478, BRAILLE PATTERN DOTS-123478 */
0xd0, 0xe2, 0x01, 0x00, 0x28, 0xd0, 0x00, 0x28, 0xd0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','7','8',0, /* 49513, 0x10028d0, U+28d0, KEY_braille_dots_578, BRAILLE PATTERN DOTS-578 */
0xa1, 0xd2, 0x01, 0x00, 0x28, 0xd1, 0x00, 0x28, 0xd1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','7','8',0, /* 49544, 0x10028d1, U+28d1, KEY_braille_dots_1578, BRAILLE PATTERN DOTS-1578 */
0xa1, 0xda, 0x01, 0x00, 0x28, 0xd2, 0x00, 0x28, 0xd2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','7','8',0, /* 49575, 0x10028d2, U+28d2, KEY_braille_dots_2578, BRAILLE PATTERN DOTS-2578 */
0x43, 0xba, 0x01, 0x00, 0x28, 0xd3, 0x00, 0x28, 0xd3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','7','8',0, /* 49607, 0x10028d3, U+28d3, KEY_braille_dots_12578, BRAILLE PATTERN DOTS-12578 */
0xa1, 0xe2, 0x01, 0x00, 0x28, 0xd4, 0x00, 0x28, 0xd4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','7','8',0, /* 49638, 0x10028d4, U+28d4, KEY_braille_dots_3578, BRAILLE PATTERN DOTS-3578 */
0x43, 0xc2, 0x01, 0x00, 0x28, 0xd5, 0x00, 0x28, 0xd5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','7','8',0, /* 49670, 0x10028d5, U+28d5, KEY_braille_dots_13578, BRAILLE PATTERN DOTS-13578 */
0x43, 0xd2, 0x01, 0x00, 0x28, 0xd6, 0x00, 0x28, 0xd6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','7','8',0, /* 49702, 0x10028d6, U+28d6, KEY_braille_dots_23578, BRAILLE PATTERN DOTS-23578 */
0x87, 0x92, 0x01, 0x00, 0x28, 0xd7, 0x00, 0x28, 0xd7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','7','8',0, /* 49735, 0x10028d7, U+28d7, KEY_braille_dots_123578, BRAILLE PATTERN DOTS-123578 */
0xa1, 0xea, 0x01, 0x00, 0x28, 0xd8, 0x00, 0x28, 0xd8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','7','8',0, /* 49766, 0x10028d8, U+28d8, KEY_braille_dots_4578, BRAILLE PATTERN DOTS-4578 */
0x43, 0xca, 0x01, 0x00, 0x28, 0xd9, 0x00, 0x28, 0xd9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','7','8',0, /* 49798, 0x10028d9, U+28d9, KEY_braille_dots_14578, BRAILLE PATTERN DOTS-14578 */
0x43, 0xda, 0x01, 0x00, 0x28, 0xda, 0x00, 0x28, 0xda, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','7','8',0, /* 49830, 0x10028da, U+28da, KEY_braille_dots_24578, BRAILLE PATTERN DOTS-24578 */
0x87, 0x9a, 0x01, 0x00, 0x28, 0xdb, 0x00, 0x28, 0xdb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','7','8',0, /* 49863, 0x10028db, U+28db, KEY_braille_dots_124578, BRAILLE PATTERN DOTS-124578 */
0x43, 0xea, 0x01, 0x00, 0x28, 0xdc, 0x00, 0x28, 0xdc, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','7','8',0, /* 49895, 0x10028dc, U+28dc, KEY_braille_dots_34578, BRAILLE PATTERN DOTS-34578 */
0x87, 0xaa, 0x01, 0x00, 0x28, 0xdd, 0x00, 0x28, 0xdd, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','7','8',0, /* 49928, 0x10028dd, U+28dd, KEY_braille_dots_134578, BRAILLE PATTERN DOTS-134578 */
0x87, 0xca, 0x01, 0x00, 0x28, 0xde, 0x00, 0x28, 0xde, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','7','8',0, /* 49961, 0x10028de, U+28de, KEY_braille_dots_234578, BRAILLE PATTERN DOTS-234578 */
0x0f, 0x4a, 0x01, 0x00, 0x28, 0xdf, 0x00, 0x28, 0xdf, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','7','8',0, /* 49995, 0x10028df, U+28df, KEY_braille_dots_1234578, BRAILLE PATTERN DOTS-1234578 */
0xd0, 0xe6, 0x01, 0x00, 0x28, 0xe0, 0x00, 0x28, 0xe0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','6','7','8',0, /* 50025, 0x10028e0, U+28e0, KEY_braille_dots_678, BRAILLE PATTERN DOTS-678 */
0xa1, 0xd6, 0x01, 0x00, 0x28, 0xe1, 0x00, 0x28, 0xe1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','6','7','8',0, /* 50056, 0x10028e1, U+28e1, KEY_braille_dots_1678, BRAILLE PATTERN DOTS-1678 */
0xa1, 0xde, 0x01, 0x00, 0x28, 0xe2, 0x00, 0x28, 0xe2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','6','7','8',0, /* 50087, 0x10028e2, U+28e2, KEY_braille_dots_2678, BRAILLE PATTERN DOTS-2678 */
0x43, 0xbe, 0x01, 0x00, 0x28, 0xe3, 0x00, 0x28, 0xe3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','6','7','8',0, /* 50119, 0x10028e3, U+28e3, KEY_braille_dots_12678, BRAILLE PATTERN DOTS-12678 */
0xa1, 0xe6, 0x01, 0x00, 0x28, 0xe4, 0x00, 0x28, 0xe4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','6','7','8',0, /* 50150, 0x10028e4, U+28e4, KEY_braille_dots_3678, BRAILLE PATTERN DOTS-3678 */
0x43, 0xc6, 0x01, 0x00, 0x28, 0xe5, 0x00, 0x28, 0xe5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','6','7','8',0, /* 50182, 0x10028e5, U+28e5, KEY_braille_dots_13678, BRAILLE PATTERN DOTS-13678 */
0x43, 0xd6, 0x01, 0x00, 0x28, 0xe6, 0x00, 0x28, 0xe6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','6','7','8',0, /* 50214, 0x10028e6, U+28e6, KEY_braille_dots_23678, BRAILLE PATTERN DOTS-23678 */
0x87, 0x96, 0x01, 0x00, 0x28, 0xe7, 0x00, 0x28, 0xe7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','6','7','8',0, /* 50247, 0x10028e7, U+28e7, KEY_braille_dots_123678, BRAILLE PATTERN DOTS-123678 */
0xa1, 0xee, 0x01, 0x00, 0x28, 0xe8, 0x00, 0x28, 0xe8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','6','7','8',0, /* 50278, 0x10028e8, U+28e8, KEY_braille_dots_4678, BRAILLE PATTERN DOTS-4678 */
0x43, 0xce, 0x01, 0x00, 0x28, 0xe9, 0x00, 0x28, 0xe9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','6','7','8',0, /* 50310, 0x10028e9, U+28e9, KEY_braille_dots_14678, BRAILLE PATTERN DOTS-14678 */
0x43, 0xde, 0x01, 0x00, 0x28, 0xea, 0x00, 0x28, 0xea, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','6','7','8',0, /* 50342, 0x10028ea, U+28ea, KEY_braille_dots_24678, BRAILLE PATTERN DOTS-24678 */
0x87, 0x9e, 0x01, 0x00, 0x28, 0xeb, 0x00, 0x28, 0xeb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','6','7','8',0, /* 50375, 0x10028eb, U+28eb, KEY_braille_dots_124678, BRAILLE PATTERN DOTS-124678 */
0x43, 0xee, 0x01, 0x00, 0x28, 0xec, 0x00, 0x28, 0xec, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','6','7','8',0, /* 50407, 0x10028ec, U+28ec, KEY_braille_dots_34678, BRAILLE PATTERN DOTS-34678 */
0x87, 0xae, 0x01, 0x00, 0x28, 0xed, 0x00, 0x28, 0xed, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','6','7','8',0, /* 50440, 0x10028ed, U+28ed, KEY_braille_dots_134678, BRAILLE PATTERN DOTS-134678 */
0x87, 0xce, 0x01, 0x00, 0x28, 0xee, 0x00, 0x28, 0xee, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','6','7','8',0, /* 50473, 0x10028ee, U+28ee, KEY_braille_dots_234678, BRAILLE PATTERN DOTS-234678 */
0x0f, 0x4e, 0x01, 0x00, 0x28, 0xef, 0x00, 0x28, 0xef, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','6','7','8',0, /* 50507, 0x10028ef, U+28ef, KEY_braille_dots_1234678, BRAILLE PATTERN DOTS-1234678 */
0xa1, 0xf6, 0x01, 0x00, 0x28, 0xf0, 0x00, 0x28, 0xf0, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','5','6','7','8',0, /* 50538, 0x10028f0, U+28f0, KEY_braille_dots_5678, BRAILLE PATTERN DOTS-5678 */
0x43, 0xd6, 0x01, 0x00, 0x28, 0xf1, 0x00, 0x28, 0xf1, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','5','6','7','8',0, /* 50570, 0x10028f1, U+28f1, KEY_braille_dots_15678, BRAILLE PATTERN DOTS-15678 */
0x43, 0xe6, 0x01, 0x00, 0x28, 0xf2, 0x00, 0x28, 0xf2, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','5','6','7','8',0, /* 50602, 0x10028f2, U+28f2, KEY_braille_dots_25678, BRAILLE PATTERN DOTS-25678 */
0x87, 0xa6, 0x01, 0x00, 0x28, 0xf3, 0x00, 0x28, 0xf3, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','5','6','7','8',0, /* 50635, 0x10028f3, U+28f3, KEY_braille_dots_125678, BRAILLE PATTERN DOTS-125678 */
0x43, 0xf6, 0x01, 0x00, 0x28, 0xf4, 0x00, 0x28, 0xf4, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','5','6','7','8',0, /* 50667, 0x10028f4, U+28f4, KEY_braille_dots_35678, BRAILLE PATTERN DOTS-35678 */
0x87, 0xb6, 0x01, 0x00, 0x28, 0xf5, 0x00, 0x28, 0xf5, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','5','6','7','8',0, /* 50700, 0x10028f5, U+28f5, KEY_braille_dots_135678, BRAILLE PATTERN DOTS-135678 */
0x87, 0xd6, 0x01, 0x00, 0x28, 0xf6, 0x00, 0x28, 0xf6, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','5','6','7','8',0, /* 50733, 0x10028f6, U+28f6, KEY_braille_dots_235678, BRAILLE PATTERN DOTS-235678 */
0x0f, 0x56, 0x01, 0x00, 0x28, 0xf7, 0x00, 0x28, 0xf7, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','5','6','7','8',0, /* 50767, 0x10028f7, U+28f7, KEY_braille_dots_1235678, BRAILLE PATTERN DOTS-1235678 */
0x44, 0x06, 0x01, 0x00, 0x28, 0xf8, 0x00, 0x28, 0xf8, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','4','5','6','7','8',0, /* 50799, 0x10028f8, U+28f8, KEY_braille_dots_45678, BRAILLE PATTERN DOTS-45678 */
0x87, 0xc6, 0x01, 0x00, 0x28, 0xf9, 0x00, 0x28, 0xf9, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','4','5','6','7','8',0, /* 50832, 0x10028f9, U+28f9, KEY_braille_dots_145678, BRAILLE PATTERN DOTS-145678 */
0x87, 0xe6, 0x01, 0x00, 0x28, 0xfa, 0x00, 0x28, 0xfa, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','4','5','6','7','8',0, /* 50865, 0x10028fa, U+28fa, KEY_braille_dots_245678, BRAILLE PATTERN DOTS-245678 */
0x0f, 0x66, 0x01, 0x00, 0x28, 0xfb, 0x00, 0x28, 0xfb, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','4','5','6','7','8',0, /* 50899, 0x10028fb, U+28fb, KEY_braille_dots_1245678, BRAILLE PATTERN DOTS-1245678 */
0x88, 0x06, 0x01, 0x00, 0x28, 0xfc, 0x00, 0x28, 0xfc, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','3','4','5','6','7','8',0, /* 50932, 0x10028fc, U+28fc, KEY_braille_dots_345678, BRAILLE PATTERN DOTS-345678 */
0x0f, 0x86, 0x01, 0x00, 0x28, 0xfd, 0x00, 0x28, 0xfd, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','3','4','5','6','7','8',0, /* 50966, 0x10028fd, U+28fd, KEY_braille_dots_1345678, BRAILLE PATTERN DOTS-1345678 */
0x0f, 0xc6, 0x01, 0x00, 0x28, 0xfe, 0x00, 0x28, 0xfe, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','2','3','4','5','6','7','8',0, /* 51000, 0x10028fe, U+28fe, KEY_braille_dots_2345678, BRAILLE PATTERN DOTS-2345678 */
0x1e, 0xc6, 0x01, 0x00, 0x28, 0xff, 0x00, 0x28, 0xff, 'K','E','Y','_','b','r','a','i','l','l','e','_','d','o','t','s','_','1','2','3','4','5','6','7','8',0, /* 51035, 0x10028ff, U+28ff, KEY_braille_dots_12345678, BRAILLE PATTERN DOTS-12345678 */
0x6d, 0x3f, 0x01, 0x00, 0x0d, 0x82, 0x00, 0x0d, 0x82, 'K','E','Y','_','S','i','n','h','_','n','g',0, /* 51056, 0x1000d82, U+0d82, KEY_Sinh_ng, SINHALA ANUSVARAYA */
0x6c, 0xfe, 0x01, 0x00, 0x0d, 0x83, 0x00, 0x0d, 0x83, 'K','E','Y','_','S','i','n','h','_','h','2',0, /* 51077, 0x1000d83, U+0d83, KEY_Sinh_h2, SINHALA VISARGAYA */
0x36, 0x5f, 0x01, 0x00, 0x0d, 0x85, 0x00, 0x0d, 0x85, 'K','E','Y','_','S','i','n','h','_','a',0, /* 51097, 0x1000d85, U+0d85, KEY_Sinh_a, SINHALA AYANNA */
0x6d, 0x1f, 0x01, 0x00, 0x0d, 0x86, 0x00, 0x0d, 0x86, 'K','E','Y','_','S','i','n','h','_','a','a',0, /* 51118, 0x1000d86, U+0d86, KEY_Sinh_aa, SINHALA AAYANNA */
0x6d, 0x23, 0x01, 0x00, 0x0d, 0x87, 0x00, 0x0d, 0x87, 'K','E','Y','_','S','i','n','h','_','a','e',0, /* 51139, 0x1000d87, U+0d87, KEY_Sinh_ae, SINHALA AEYANNA */
0xda, 0xab, 0x01, 0x00, 0x0d, 0x88, 0x00, 0x0d, 0x88, 'K','E','Y','_','S','i','n','h','_','a','e','e',0, /* 51161, 0x1000d88, U+0d88, KEY_Sinh_aee, SINHALA AEEYANNA */
0x36, 0x67, 0x01, 0x00, 0x0d, 0x89, 0x00, 0x0d, 0x89, 'K','E','Y','_','S','i','n','h','_','i',0, /* 51181, 0x1000d89, U+0d89, KEY_Sinh_i, SINHALA IYANNA */
0x6d, 0x37, 0x01, 0x00, 0x0d, 0x8a, 0x00, 0x0d, 0x8a, 'K','E','Y','_','S','i','n','h','_','i','i',0, /* 51202, 0x1000d8a, U+0d8a, KEY_Sinh_ii, SINHALA IIYANNA */
0x36, 0x73, 0x01, 0x00, 0x0d, 0x8b, 0x00, 0x0d, 0x8b, 'K','E','Y','_','S','i','n','h','_','u',0, /* 51222, 0x1000d8b, U+0d8b, KEY_Sinh_u, SINHALA UYANNA */
0x6d, 0x5b, 0x01, 0x00, 0x0d, 0x8c, 0x00, 0x0d, 0x8c, 'K','E','Y','_','S','i','n','h','_','u','u',0, /* 51243, 0x1000d8c, U+0d8c, KEY_Sinh_uu, SINHALA UUYANNA */
0x6d, 0x49, 0x01, 0x00, 0x0d, 0x8d, 0x00, 0x0d, 0x8d, 'K','E','Y','_','S','i','n','h','_','r','i',0, /* 51264, 0x1000d8d, U+0d8d, KEY_Sinh_ri, SINHALA IRUYANNA */
0xda, 0xfb, 0x01, 0x00, 0x0d, 0x8e, 0x00, 0x0d, 0x8e, 'K','E','Y','_','S','i','n','h','_','r','i','i',0, /* 51286, 0x1000d8e, U+0d8e, KEY_Sinh_rii, SINHALA IRUUYANNA */
0x6d, 0x49, 0x01, 0x00, 0x0d, 0x8f, 0x00, 0x0d, 0x8f, 'K','E','Y','_','S','i','n','h','_','l','u',0, /* 51307, 0x1000d8f, U+0d8f, KEY_Sinh_lu, SINHALA ILUYANNA */
0xdb, 0x07, 0x01, 0x00, 0x0d, 0x90, 0x00, 0x0d, 0x90, 'K','E','Y','_','S','i','n','h','_','l','u','u',0, /* 51329, 0x1000d90, U+0d90, KEY_Sinh_luu, SINHALA ILUUYANNA */
0x36, 0x63, 0x01, 0x00, 0x0d, 0x91, 0x00, 0x0d, 0x91, 'K','E','Y','_','S','i','n','h','_','e',0, /* 51349, 0x1000d91, U+0d91, KEY_Sinh_e, SINHALA EYANNA */
0x6d, 0x2b, 0x01, 0x00, 0x0d, 0x92, 0x00, 0x0d, 0x92, 'K','E','Y','_','S','i','n','h','_','e','e',0, /* 51370, 0x1000d92, U+0d92, KEY_Sinh_ee, SINHALA EEYANNA */
0x6d, 0x27, 0x01, 0x00, 0x0d, 0x93, 0x00, 0x0d, 0x93, 'K','E','Y','_','S','i','n','h','_','a','i',0, /* 51391, 0x1000d93, U+0d93, KEY_Sinh_ai, SINHALA AIYANNA */
0x36, 0x6d, 0x01, 0x00, 0x0d, 0x94, 0x00, 0x0d, 0x94, 'K','E','Y','_','S','i','n','h','_','o',0, /* 51411, 0x1000d94, U+0d94, KEY_Sinh_o, SINHALA OYANNA */
0x6d, 0x49, 0x01, 0x00, 0x0d, 0x95, 0x00, 0x0d, 0x95, 'K','E','Y','_','S','i','n','h','_','o','o',0, /* 51432, 0x1000d95, U+0d95, KEY_Sinh_oo, SINHALA OOYANNA */
0x6d, 0x33, 0x01, 0x00, 0x0d, 0x96, 0x00, 0x0d, 0x96, 'K','E','Y','_','S','i','n','h','_','a','u',0, /* 51453, 0x1000d96, U+0d96, KEY_Sinh_au, SINHALA AUYANNA */
0x6d, 0x33, 0x01, 0x00, 0x0d, 0x9a, 0x00, 0x0d, 0x9a, 'K','E','Y','_','S','i','n','h','_','k','a',0, /* 51474, 0x1000d9a, U+0d9a, KEY_Sinh_ka, SINHALA KAYANNA */
0xda, 0xd5, 0x01, 0x00, 0x0d, 0x9b, 0x00, 0x0d, 0x9b, 'K','E','Y','_','S','i','n','h','_','k','h','a',0, /* 51496, 0x1000d9b, U+0d9b, KEY_Sinh_kha, SINHALA MAHA. KAYANNA */
0x6d, 0x2b, 0x01, 0x00, 0x0d, 0x9c, 0x00, 0x0d, 0x9c, 'K','E','Y','_','S','i','n','h','_','g','a',0, /* 51517, 0x1000d9c, U+0d9c, KEY_Sinh_ga, SINHALA GAYANNA */
0xda, 0xc5, 0x01, 0x00, 0x0d, 0x9d, 0x00, 0x0d, 0x9d, 'K','E','Y','_','S','i','n','h','_','g','h','a',0, /* 51539, 0x1000d9d, U+0d9d, KEY_Sinh_gha, SINHALA MAHA. GAYANNA */
0xda, 0xb0, 0x01, 0x00, 0x0d, 0x9e, 0x00, 0x0d, 0x9e, 'K','E','Y','_','S','i','n','h','_','n','g','2',0, /* 51561, 0x1000d9e, U+0d9e, KEY_Sinh_ng2, SINHALA KANTAJA NAASIKYAYA */
0xda, 0xdf, 0x01, 0x00, 0x0d, 0x9f, 0x00, 0x0d, 0x9f, 'K','E','Y','_','S','i','n','h','_','n','g','a',0, /* 51583, 0x1000d9f, U+0d9f, KEY_Sinh_nga, SINHALA SANYAKA GAYANNA */
0x6d, 0x23, 0x01, 0x00, 0x0d, 0xa0, 0x00, 0x0d, 0xa0, 'K','E','Y','_','S','i','n','h','_','c','a',0, /* 51604, 0x1000da0, U+0da0, KEY_Sinh_ca, SINHALA CAYANNA */
0xda, 0xb5, 0x01, 0x00, 0x0d, 0xa1, 0x00, 0x0d, 0xa1, 'K','E','Y','_','S','i','n','h','_','c','h','a',0, /* 51626, 0x1000da1, U+0da1, KEY_Sinh_cha, SINHALA MAHA. CAYANNA */
0x6d, 0x31, 0x01, 0x00, 0x0d, 0xa2, 0x00, 0x0d, 0xa2, 'K','E','Y','_','S','i','n','h','_','j','a',0, /* 51647, 0x1000da2, U+0da2, KEY_Sinh_ja, SINHALA JAYANNA */
0xda, 0xd1, 0x01, 0x00, 0x0d, 0xa3, 0x00, 0x0d, 0xa3, 'K','E','Y','_','S','i','n','h','_','j','h','a',0, /* 51669, 0x1000da3, U+0da3, KEY_Sinh_jha, SINHALA MAHA. JAYANNA */
0xdb, 0x03, 0x01, 0x00, 0x0d, 0xa4, 0x00, 0x0d, 0xa4, 'K','E','Y','_','S','i','n','h','_','n','y','a',0, /* 51691, 0x1000da4, U+0da4, KEY_Sinh_nya, SINHALA TAALUJA NAASIKYAYA */
0xb6, 0x4b, 0x01, 0x00, 0x0d, 0xa5, 0x00, 0x0d, 0xa5, 'K','E','Y','_','S','i','n','h','_','j','n','y','a',0, /* 51714, 0x1000da5, U+0da5, KEY_Sinh_jnya, SINHALA TAALUJA SANYOOGA NAASIKYAYA */
0xda, 0xe5, 0x01, 0x00, 0x0d, 0xa6, 0x00, 0x0d, 0xa6, 'K','E','Y','_','S','i','n','h','_','n','j','a',0, /* 51736, 0x1000da6, U+0da6, KEY_Sinh_nja, SINHALA SANYAKA JAYANNA */
0xdb, 0x11, 0x01, 0x00, 0x0d, 0xa7, 0x00, 0x0d, 0xa7, 'K','E','Y','_','S','i','n','h','_','t','t','a',0, /* 51758, 0x1000da7, U+0da7, KEY_Sinh_tta, SINHALA TTAYANNA */
0xb6, 0x91, 0x01, 0x00, 0x0d, 0xa8, 0x00, 0x0d, 0xa8, 'K','E','Y','_','S','i','n','h','_','t','t','h','a',0, /* 51781, 0x1000da8, U+0da8, KEY_Sinh_ttha, SINHALA MAHA. TTAYANNA */
0xda, 0xb1, 0x01, 0x00, 0x0d, 0xa9, 0x00, 0x0d, 0xa9, 'K','E','Y','_','S','i','n','h','_','d','d','a',0, /* 51803, 0x1000da9, U+0da9, KEY_Sinh_dda, SINHALA DDAYANNA */
0xb5, 0xd1, 0x01, 0x00, 0x0d, 0xaa, 0x00, 0x0d, 0xaa, 'K','E','Y','_','S','i','n','h','_','d','d','h','a',0, /* 51826, 0x1000daa, U+0daa, KEY_Sinh_ddha, SINHALA MAHA. DDAYANNA */
0xda, 0xed, 0x01, 0x00, 0x0d, 0xab, 0x00, 0x0d, 0xab, 'K','E','Y','_','S','i','n','h','_','n','n','a',0, /* 51848, 0x1000dab, U+0dab, KEY_Sinh_nna, SINHALA MUURDHAJA NAYANNA */
0xb6, 0x19, 0x01, 0x00, 0x0d, 0xac, 0x00, 0x0d, 0xac, 'K','E','Y','_','S','i','n','h','_','n','d','d','a',0, /* 51871, 0x1000dac, U+0dac, KEY_Sinh_ndda, SINHALA SANYAKA DDAYANNA */
0xda, 0xf9, 0x01, 0x00, 0x0d, 0xad, 0x00, 0x0d, 0xad, 'K','E','Y','_','S','i','n','h','_','t','h','a',0, /* 51893, 0x1000dad, U+0dad, KEY_Sinh_tha, SINHALA TAYANNA */
0xb6, 0x61, 0x01, 0x00, 0x0d, 0xae, 0x00, 0x0d, 0xae, 'K','E','Y','_','S','i','n','h','_','t','h','h','a',0, /* 51916, 0x1000dae, U+0dae, KEY_Sinh_thha, SINHALA MAHA. TAYANNA */
0xda, 0xb9, 0x01, 0x00, 0x0d, 0xaf, 0x00, 0x0d, 0xaf, 'K','E','Y','_','S','i','n','h','_','d','h','a',0, /* 51938, 0x1000daf, U+0daf, KEY_Sinh_dha, SINHALA DAYANNA */
0xb5, 0xe1, 0x01, 0x00, 0x0d, 0xb0, 0x00, 0x0d, 0xb0, 'K','E','Y','_','S','i','n','h','_','d','h','h','a',0, /* 51961, 0x1000db0, U+0db0, KEY_Sinh_dhha, SINHALA MAHA. DAYANNA */
0x6d, 0x39, 0x01, 0x00, 0x0d, 0xb1, 0x00, 0x0d, 0xb1, 'K','E','Y','_','S','i','n','h','_','n','a',0, /* 51982, 0x1000db1, U+0db1, KEY_Sinh_na, SINHALA DANTAJA NAYANNA */
0xb6, 0x21, 0x01, 0x00, 0x0d, 0xb3, 0x00, 0x0d, 0xb3, 'K','E','Y','_','S','i','n','h','_','n','d','h','a',0, /* 52005, 0x1000db3, U+0db3, KEY_Sinh_ndha, SINHALA SANYAKA DAYANNA */
0x6d, 0x3d, 0x01, 0x00, 0x0d, 0xb4, 0x00, 0x0d, 0xb4, 'K','E','Y','_','S','i','n','h','_','p','a',0, /* 52026, 0x1000db4, U+0db4, KEY_Sinh_pa, SINHALA PAYANNA */
0xda, 0xe9, 0x01, 0x00, 0x0d, 0xb5, 0x00, 0x0d, 0xb5, 'K','E','Y','_','S','i','n','h','_','p','h','a',0, /* 52048, 0x1000db5, U+0db5, KEY_Sinh_pha, SINHALA MAHA. PAYANNA */
0x6d, 0x21, 0x01, 0x00, 0x0d, 0xb6, 0x00, 0x0d, 0xb6, 'K','E','Y','_','S','i','n','h','_','b','a',0, /* 52069, 0x1000db6, U+0db6, KEY_Sinh_ba, SINHALA BAYANNA */
0xda, 0xb1, 0x01, 0x00, 0x0d, 0xb7, 0x00, 0x0d, 0xb7, 'K','E','Y','_','S','i','n','h','_','b','h','a',0, /* 52091, 0x1000db7, U+0db7, KEY_Sinh_bha, SINHALA MAHA. BAYANNA */
0x6d, 0x37, 0x01, 0x00, 0x0d, 0xb8, 0x00, 0x0d, 0xb8, 'K','E','Y','_','S','i','n','h','_','m','a',0, /* 52112, 0x1000db8, U+0db8, KEY_Sinh_ma, SINHALA MAYANNA */
0xda, 0xd1, 0x01, 0x00, 0x0d, 0xb9, 0x00, 0x0d, 0xb9, 'K','E','Y','_','S','i','n','h','_','m','b','a',0, /* 52134, 0x1000db9, U+0db9, KEY_Sinh_mba, SINHALA AMBA BAYANNA */
0x6d, 0x4f, 0x01, 0x00, 0x0d, 0xba, 0x00, 0x0d, 0xba, 'K','E','Y','_','S','i','n','h','_','y','a',0, /* 52155, 0x1000dba, U+0dba, KEY_Sinh_ya, SINHALA YAYANNA */
0x6d, 0x41, 0x01, 0x00, 0x0d, 0xbb, 0x00, 0x0d, 0xbb, 'K','E','Y','_','S','i','n','h','_','r','a',0, /* 52176, 0x1000dbb, U+0dbb, KEY_Sinh_ra, SINHALA RAYANNA */
0x6d, 0x35, 0x01, 0x00, 0x0d, 0xbd, 0x00, 0x0d, 0xbd, 'K','E','Y','_','S','i','n','h','_','l','a',0, /* 52197, 0x1000dbd, U+0dbd, KEY_Sinh_la, SINHALA DANTAJA LAYANNA */
0x6d, 0x49, 0x01, 0x00, 0x0d, 0xc0, 0x00, 0x0d, 0xc0, 'K','E','Y','_','S','i','n','h','_','v','a',0, /* 52218, 0x1000dc0, U+0dc0, KEY_Sinh_va, SINHALA VAYANNA */
0xda, 0xf5, 0x01, 0x00, 0x0d, 0xc1, 0x00, 0x0d, 0xc1, 'K','E','Y','_','S','i','n','h','_','s','h','a',0, /* 52240, 0x1000dc1, U+0dc1, KEY_Sinh_sha, SINHALA TAALUJA SAYANNA */
0xb6, 0x85, 0x01, 0x00, 0x0d, 0xc2, 0x00, 0x0d, 0xc2, 'K','E','Y','_','S','i','n','h','_','s','s','h','a',0, /* 52263, 0x1000dc2, U+0dc2, KEY_Sinh_ssha, SINHALA MUURDHAJA SAYANNA */
0x6d, 0x43, 0x01, 0x00, 0x0d, 0xc3, 0x00, 0x0d, 0xc3, 'K','E','Y','_','S','i','n','h','_','s','a',0, /* 52284, 0x1000dc3, U+0dc3, KEY_Sinh_sa, SINHALA DANTAJA SAYANNA */
0x6d, 0x2d, 0x01, 0x00, 0x0d, 0xc4, 0x00, 0x0d, 0xc4, 'K','E','Y','_','S','i','n','h','_','h','a',0, /* 52305, 0x1000dc4, U+0dc4, KEY_Sinh_ha, SINHALA HAYANNA */
0xda, 0xe1, 0x01, 0x00, 0x0d, 0xc5, 0x00, 0x0d, 0xc5, 'K','E','Y','_','S','i','n','h','_','l','l','a',0, /* 52327, 0x1000dc5, U+0dc5, KEY_Sinh_lla, SINHALA MUURDHAJA LAYANNA */
0x6d, 0x29, 0x01, 0x00, 0x0d, 0xc6, 0x00, 0x0d, 0xc6, 'K','E','Y','_','S','i','n','h','_','f','a',0, /* 52348, 0x1000dc6, U+0dc6, KEY_Sinh_fa, SINHALA FAYANNA */
0x6d, 0x2a, 0x01, 0x00, 0x0d, 0xca, 0x00, 0x0d, 0xca, 'K','E','Y','_','S','i','n','h','_','a','l',0, /* 52369, 0x1000dca, U+0dca, KEY_Sinh_al, SINHALA AL-LAKUNA */
0xda, 0x70, 0x01, 0x00, 0x0d, 0xcf, 0x00, 0x0d, 0xcf, 'K','E','Y','_','S','i','n','h','_','a','a','2',0, /* 52391, 0x1000dcf, U+0dcf, KEY_Sinh_aa2, SINHALA AELA-PILLA */
0xda, 0x78, 0x01, 0x00, 0x0d, 0xd0, 0x00, 0x0d, 0xd0, 'K','E','Y','_','S','i','n','h','_','a','e','2',0, /* 52413, 0x1000dd0, U+0dd0, KEY_Sinh_ae2, SINHALA AEDA-PILLA */
0xb5, 0x88, 0x01, 0x00, 0x0d, 0xd1, 0x00, 0x0d, 0xd1, 'K','E','Y','_','S','i','n','h','_','a','e','e','2',0, /* 52436, 0x1000dd1, U+0dd1, KEY_Sinh_aee2, SINHALA DIGA AEDA-PILLA */
0x6d, 0x00, 0x01, 0x00, 0x0d, 0xd2, 0x00, 0x0d, 0xd2, 'K','E','Y','_','S','i','n','h','_','i','2',0, /* 52457, 0x1000dd2, U+0dd2, KEY_Sinh_i2, SINHALA IS-PILLA */
0xda, 0xa0, 0x01, 0x00, 0x0d, 0xd3, 0x00, 0x0d, 0xd3, 'K','E','Y','_','S','i','n','h','_','i','i','2',0, /* 52479, 0x1000dd3, U+0dd3, KEY_Sinh_ii2, SINHALA DIGA IS-PILLA */
0x6d, 0x18, 0x01, 0x00, 0x0d, 0xd4, 0x00, 0x0d, 0xd4, 'K','E','Y','_','S','i','n','h','_','u','2',0, /* 52500, 0x1000dd4, U+0dd4, KEY_Sinh_u2, SINHALA PAA-PILLA */
0xda, 0xe8, 0x01, 0x00, 0x0d, 0xd6, 0x00, 0x0d, 0xd6, 'K','E','Y','_','S','i','n','h','_','u','u','2',0, /* 52522, 0x1000dd6, U+0dd6, KEY_Sinh_uu2, SINHALA DIGA PAA-PILLA */
0xda, 0xdc, 0x01, 0x00, 0x0d, 0xd8, 0x00, 0x0d, 0xd8, 'K','E','Y','_','S','i','n','h','_','r','u','2',0, /* 52544, 0x1000dd8, U+0dd8, KEY_Sinh_ru2, SINHALA GAETTA-PILLA */
0x6c, 0xf8, 0x01, 0x00, 0x0d, 0xd9, 0x00, 0x0d, 0xd9, 'K','E','Y','_','S','i','n','h','_','e','2',0, /* 52565, 0x1000dd9, U+0dd9, KEY_Sinh_e2, SINHALA KOMBUVA */
0xda, 0x88, 0x01, 0x00, 0x0d, 0xda, 0x00, 0x0d, 0xda, 'K','E','Y','_','S','i','n','h','_','e','e','2',0, /* 52587, 0x1000dda, U+0dda, KEY_Sinh_ee2, SINHALA DIGA KOMBUVA */
0xda, 0x80, 0x01, 0x00, 0x0d, 0xdb, 0x00, 0x0d, 0xdb, 'K','E','Y','_','S','i','n','h','_','a','i','2',0, /* 52609, 0x1000ddb, U+0ddb, KEY_Sinh_ai2, SINHALA KOMBU DEKA */
0x6d, 0x0c, 0x01, 0x00, 0x0d, 0xdc, 0x00, 0x0d, 0xdc, 'K','E','Y','_','S','i','n','h','_','o','2',0, /* 52630, 0x1000ddc, U+0ddc, KEY_Sinh_o2, SINHALA KOMBUVA HAA AELA-PILLA */
0xda, 0xc4, 0x01, 0x00, 0x0d, 0xdd, 0x00, 0x0d, 0xdd, 'K','E','Y','_','S','i','n','h','_','o','o','2',0, /* 52652, 0x1000ddd, U+0ddd, KEY_Sinh_oo2, SINHALA KOMBUVA HAA DIGA AELA-PILLA */
0xda, 0x98, 0x01, 0x00, 0x0d, 0xde, 0x00, 0x0d, 0xde, 'K','E','Y','_','S','i','n','h','_','a','u','2',0, /* 52674, 0x1000dde, U+0dde, KEY_Sinh_au2, SINHALA KOMBUVA HAA GAYANUKITTA */
0xda, 0xc4, 0x01, 0x00, 0x0d, 0xdf, 0x00, 0x0d, 0xdf, 'K','E','Y','_','S','i','n','h','_','l','u','2',0, /* 52696, 0x1000ddf, U+0ddf, KEY_Sinh_lu2, SINHALA GAYANUKITTA */
0xb6, 0x70, 0x01, 0x00, 0x0d, 0xf2, 0x00, 0x0d, 0xf2, 'K','E','Y','_','S','i','n','h','_','r','u','u','2',0, /* 52719, 0x1000df2, U+0df2, KEY_Sinh_ruu2, SINHALA DIGA GAETTA-PILLA */
0xb6, 0x40, 0x01, 0x00, 0x0d, 0xf3, 0x00, 0x0d, 0xf3, 'K','E','Y','_','S','i','n','h','_','l','u','u','2',0, /* 52742, 0x1000df3, U+0df3, KEY_Sinh_luu2, SINHALA DIGA GAYANUKITTA */
0xaf, 0xe7, 0x01, 0x00, 0x0d, 0xf4, 0x00, 0x0d, 0xf4, 'K','E','Y','_','S','i','n','h','_','k','u','n','d','d','a','l','i','y','a',0, /* 52771, 0x1000df4, U+0df4, KEY_Sinh_kunddaliya, SINHALA KUNDDALIYA */
0xa8, 0x5d, 0x10, 0x08, 0xff, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','o','d','e','L','o','c','k',0, /* 52797, 0x1008ff01, KEY_XF86ModeLock, Mode Switch Lock */
0x7c, 0x8e, 0x10, 0x08, 0xff, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','o','n','B','r','i','g','h','t','n','e','s','s','U','p',0, /* 52830, 0x1008ff02, KEY_XF86MonBrightnessUp, Monitor/panel brightness */
0xf3, 0x08, 0x10, 0x08, 0xff, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','o','n','B','r','i','g','h','t','n','e','s','s','D','o','w','n',0, /* 52865, 0x1008ff03, KEY_XF86MonBrightnessDown, Monitor/panel brightness */
0x77, 0xce, 0x10, 0x08, 0xff, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','K','b','d','L','i','g','h','t','O','n','O','f','f',0, /* 52896, 0x1008ff04, KEY_XF86KbdLightOnOff, Keyboards may be lit */
0xbc, 0x8e, 0x10, 0x08, 0xff, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','K','b','d','B','r','i','g','h','t','n','e','s','s','U','p',0, /* 52929, 0x1008ff05, KEY_XF86KbdBrightnessUp, Keyboards may be lit */
0xf3, 0x08, 0x10, 0x08, 0xff, 0x06, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','K','b','d','B','r','i','g','h','t','n','e','s','s','D','o','w','n',0, /* 52964, 0x1008ff06, KEY_XF86KbdBrightnessDown, Keyboards may be lit */
0xe6, 0x61, 0x10, 0x08, 0xff, 0x07, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','o','n','B','r','i','g','h','t','n','e','s','s','C','y','c','l','e',0, /* 53000, 0x1008ff07, KEY_XF86MonBrightnessCycle, Monitor/panel brightness */
0x56, 0x8d, 0x10, 0x08, 0xff, 0x10, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','t','a','n','d','b','y',0, /* 53025, 0x1008ff10, KEY_XF86Standby, System into standby mode */
0x34, 0x23, 0x10, 0x08, 0xff, 0x11, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','L','o','w','e','r','V','o','l','u','m','e',0, /* 53059, 0x1008ff11, KEY_XF86AudioLowerVolume, Volume control down */
0x4a, 0x19, 0x10, 0x08, 0xff, 0x12, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','M','u','t','e',0, /* 53086, 0x1008ff12, KEY_XF86AudioMute, Mute sound from the system */
0x25, 0xe3, 0x10, 0x08, 0xff, 0x13, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','a','i','s','e','V','o','l','u','m','e',0, /* 53120, 0x1008ff13, KEY_XF86AudioRaiseVolume, Volume control up */
0x49, 0xfb, 0x10, 0x08, 0xff, 0x14, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','P','l','a','y',0, /* 53147, 0x1008ff14, KEY_XF86AudioPlay, Start playing of audio > */
0x4a, 0x46, 0x10, 0x08, 0xff, 0x15, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','S','t','o','p',0, /* 53174, 0x1008ff15, KEY_XF86AudioStop, Stop playing audio */
0x4a, 0x18, 0x10, 0x08, 0xff, 0x16, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','P','r','e','v',0, /* 53201, 0x1008ff16, KEY_XF86AudioPrev, Previous track */
0x49, 0xf8, 0x10, 0x08, 0xff, 0x17, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','N','e','x','t',0, /* 53228, 0x1008ff17, KEY_XF86AudioNext, Next track */
0xa6, 0xe7, 0x10, 0x08, 0xff, 0x18, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','H','o','m','e','P','a','g','e',0, /* 53254, 0x1008ff18, KEY_XF86HomePage, Display user's home page */
0xca, 0x0a, 0x10, 0x08, 0xff, 0x19, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','a','i','l',0, /* 53276, 0x1008ff19, KEY_XF86Mail, Invoke user's mail program */
0x95, 0x6c, 0x10, 0x08, 0xff, 0x1a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','t','a','r','t',0, /* 53299, 0x1008ff1a, KEY_XF86Start, Start application */
0x2a, 0x2e, 0x10, 0x08, 0xff, 0x1b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','e','a','r','c','h',0, /* 53323, 0x1008ff1b, KEY_XF86Search, Search */
0x28, 0xec, 0x10, 0x08, 0xff, 0x1c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','e','c','o','r','d',0, /* 53352, 0x1008ff1c, KEY_XF86AudioRecord, Record audio application */
0x89, 0x48, 0x10, 0x08, 0xff, 0x1d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','a','l','c','u','l','a','t','o','r',0, /* 53380, 0x1008ff1d, KEY_XF86Calculator, Invoke calculator program */
0xca, 0x25, 0x10, 0x08, 0xff, 0x1e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','m','o',0, /* 53402, 0x1008ff1e, KEY_XF86Memo, Invoke Memo taking program */
0xa8, 0x8e, 0x10, 0x08, 0xff, 0x1f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','D','o','L','i','s','t',0, /* 53428, 0x1008ff1f, KEY_XF86ToDoList, Invoke To Do List program */
0xa1, 0xc4, 0x10, 0x08, 0xff, 0x20, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','a','l','e','n','d','a','r',0, /* 53454, 0x1008ff20, KEY_XF86Calendar, Invoke Calendar program */
0x5a, 0x38, 0x10, 0x08, 0xff, 0x21, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','o','w','e','r','D','o','w','n',0, /* 53481, 0x1008ff21, KEY_XF86PowerDown, Deep sleep the system */
0xc0, 0x5e, 0x10, 0x08, 0xff, 0x22, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','o','n','t','r','a','s','t','A','d','j','u','s','t',0, /* 53513, 0x1008ff22, KEY_XF86ContrastAdjust, Adjust screen contrast */
0xab, 0xda, 0x10, 0x08, 0xff, 0x23, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','c','k','e','r','U','p',0, /* 53539, 0x1008ff23, KEY_XF86RockerUp, Rocker switches exist up */
0xb0, 0x38, 0x10, 0x08, 0xff, 0x24, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','c','k','e','r','D','o','w','n',0, /* 53567, 0x1008ff24, KEY_XF86RockerDown, and down */
0x60, 0xcc, 0x10, 0x08, 0xff, 0x25, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','c','k','e','r','E','n','t','e','r',0, /* 53596, 0x1008ff25, KEY_XF86RockerEnter, and let you press them */
0xc9, 0xa5, 0x10, 0x08, 0xff, 0x26, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','a','c','k',0, /* 53618, 0x1008ff26, KEY_XF86Back, Like back on a browser */
0x54, 0x04, 0x10, 0x08, 0xff, 0x27, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','o','r','w','a','r','d',0, /* 53643, 0x1008ff27, KEY_XF86Forward, Like forward on a browser */
0xca, 0x96, 0x10, 0x08, 0xff, 0x28, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','t','o','p',0, /* 53665, 0x1008ff28, KEY_XF86Stop, Stop current operation */
0x54, 0xf2, 0x10, 0x08, 0xff, 0x29, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','e','f','r','e','s','h',0, /* 53690, 0x1008ff29, KEY_XF86Refresh, Refresh the page */
0xac, 0xee, 0x10, 0x08, 0xff, 0x2a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','o','w','e','r','O','f','f',0, /* 53716, 0x1008ff2a, KEY_XF86PowerOff, Power off system entirely */
0x2a, 0x76, 0x10, 0x08, 0xff, 0x2b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','a','k','e','U','p',0, /* 53740, 0x1008ff2b, KEY_XF86WakeUp, Wake up system from sleep */
0x94, 0x2e, 0x10, 0x08, 0xff, 0x2c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','E','j','e','c','t',0, /* 53763, 0x1008ff2c, KEY_XF86Eject, Eject device (e.g. DVD) */
0x58, 0xcc, 0x10, 0x08, 0xff, 0x2d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','c','r','e','e','n','S','a','v','e','r',0, /* 53792, 0x1008ff2d, KEY_XF86ScreenSaver, Invoke screensaver */
0x64, 0xd1, 0x10, 0x08, 0xff, 0x2e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','W','W',0, /* 53813, 0x1008ff2e, KEY_XF86WWW, Invoke web browser */
0x95, 0x1e, 0x10, 0x08, 0xff, 0x2f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','l','e','e','p',0, /* 53836, 0x1008ff2f, KEY_XF86Sleep, Put system to sleep */
0x4b, 0x55, 0x10, 0x08, 0xff, 0x30, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','a','v','o','r','i','t','e','s',0, /* 53863, 0x1008ff30, KEY_XF86Favorites, Show favorite locations */
0x94, 0x47, 0x10, 0x08, 0xff, 0x31, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','P','a','u','s','e',0, /* 53891, 0x1008ff31, KEY_XF86AudioPause, Pause audio playing */
0x93, 0xdb, 0x10, 0x08, 0xff, 0x32, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','M','e','d','i','a',0, /* 53919, 0x1008ff32, KEY_XF86AudioMedia, Launch media collection app */
0xa3, 0x94, 0x10, 0x08, 0xff, 0x33, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','y','C','o','m','p','u','t','e','r',0, /* 53947, 0x1008ff33, KEY_XF86MyComputer, Display "My Computer" window */
0xb3, 0x3b, 0x10, 0x08, 0xff, 0x34, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','V','e','n','d','o','r','H','o','m','e',0, /* 53975, 0x1008ff34, KEY_XF86VendorHome, Display vendor home web site */
0x4f, 0x9e, 0x10, 0x08, 0xff, 0x35, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','i','g','h','t','B','u','l','b',0, /* 54002, 0x1008ff35, KEY_XF86LightBulb, Light bulb keys exist */
0xca, 0x66, 0x10, 0x08, 0xff, 0x36, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','h','o','p',0, /* 54024, 0x1008ff36, KEY_XF86Shop, Display shopping web site */
0x54, 0x09, 0x10, 0x08, 0xff, 0x37, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','H','i','s','t','o','r','y',0, /* 54049, 0x1008ff37, KEY_XF86History, Show history of web surfing */
0x54, 0xc4, 0x10, 0x08, 0xff, 0x38, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','O','p','e','n','U','R','L',0, /* 54074, 0x1008ff38, KEY_XF86OpenURL, Open selected URL */
0xf7, 0x71, 0x10, 0x08, 0xff, 0x39, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','d','d','F','a','v','o','r','i','t','e',0, /* 54103, 0x1008ff39, KEY_XF86AddFavorite, Add URL to favorites list */
0xa7, 0x49, 0x10, 0x08, 0xff, 0x3a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','H','o','t','L','i','n','k','s',0, /* 54129, 0x1008ff3a, KEY_XF86HotLinks, Show "hot" links */
0xcc, 0x1e, 0x10, 0x08, 0xff, 0x3b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','r','i','g','h','t','n','e','s','s','A','d','j','u','s','t',0, /* 54163, 0x1008ff3b, KEY_XF86BrightnessAdjust, Invoke brightness adj. UI */
0x52, 0x6b, 0x10, 0x08, 0xff, 0x3c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','i','n','a','n','c','e',0, /* 54188, 0x1008ff3c, KEY_XF86Finance, Display financial site */
0x4d, 0x25, 0x10, 0x08, 0xff, 0x3d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','o','m','m','u','n','i','t','y',0, /* 54215, 0x1008ff3d, KEY_XF86Community, Display user's community */
0x29, 0x6c, 0x10, 0x08, 0xff, 0x3e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','e','w','i','n','d',0, /* 54244, 0x1008ff3e, KEY_XF86AudioRewind, "rewind" audio track */
0xff, 0x84, 0x10, 0x08, 0xff, 0x3f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','a','c','k','F','o','r','w','a','r','d',0, /* 54273, 0x1008ff3f, KEY_XF86BackForward, ??? */
0x53, 0x6c, 0x10, 0x08, 0xff, 0x40, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','0',0, /* 54298, 0x1008ff40, KEY_XF86Launch0, Launch Application */
0x53, 0x6d, 0x10, 0x08, 0xff, 0x41, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','1',0, /* 54323, 0x1008ff41, KEY_XF86Launch1, Launch Application */
0x53, 0x6e, 0x10, 0x08, 0xff, 0x42, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','2',0, /* 54348, 0x1008ff42, KEY_XF86Launch2, Launch Application */
0x53, 0x6f, 0x10, 0x08, 0xff, 0x43, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','3',0, /* 54373, 0x1008ff43, KEY_XF86Launch3, Launch Application */
0x53, 0x70, 0x10, 0x08, 0xff, 0x44, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','4',0, /* 54398, 0x1008ff44, KEY_XF86Launch4, Launch Application */
0x53, 0x71, 0x10, 0x08, 0xff, 0x45, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','5',0, /* 54423, 0x1008ff45, KEY_XF86Launch5, Launch Application */
0x53, 0x72, 0x10, 0x08, 0xff, 0x46, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','6',0, /* 54448, 0x1008ff46, KEY_XF86Launch6, Launch Application */
0x53, 0x73, 0x10, 0x08, 0xff, 0x47, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','7',0, /* 54473, 0x1008ff47, KEY_XF86Launch7, Launch Application */
0x53, 0x74, 0x10, 0x08, 0xff, 0x48, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','8',0, /* 54498, 0x1008ff48, KEY_XF86Launch8, Launch Application */
0x53, 0x75, 0x10, 0x08, 0xff, 0x49, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','9',0, /* 54523, 0x1008ff49, KEY_XF86Launch9, Launch Application */
0x53, 0x7d, 0x10, 0x08, 0xff, 0x4a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','A',0, /* 54548, 0x1008ff4a, KEY_XF86LaunchA, Launch Application */
0x53, 0x7e, 0x10, 0x08, 0xff, 0x4b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','B',0, /* 54573, 0x1008ff4b, KEY_XF86LaunchB, Launch Application */
0x53, 0x7f, 0x10, 0x08, 0xff, 0x4c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','C',0, /* 54598, 0x1008ff4c, KEY_XF86LaunchC, Launch Application */
0x53, 0x80, 0x10, 0x08, 0xff, 0x4d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','D',0, /* 54623, 0x1008ff4d, KEY_XF86LaunchD, Launch Application */
0x53, 0x81, 0x10, 0x08, 0xff, 0x4e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','E',0, /* 54648, 0x1008ff4e, KEY_XF86LaunchE, Launch Application */
0x53, 0x82, 0x10, 0x08, 0xff, 0x4f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','a','u','n','c','h','F',0, /* 54673, 0x1008ff4f, KEY_XF86LaunchF, Launch Application */
0xd9, 0x34, 0x10, 0x08, 0xff, 0x50, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','p','p','l','i','c','a','t','i','o','n','L','e','f','t',0, /* 54706, 0x1008ff50, KEY_XF86ApplicationLeft, switch to application, left */
0xb3, 0x48, 0x10, 0x08, 0xff, 0x51, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','p','p','l','i','c','a','t','i','o','n','R','i','g','h','t',0, /* 54740, 0x1008ff51, KEY_XF86ApplicationRight, switch to application, right */
0xc9, 0xf5, 0x10, 0x08, 0xff, 0x52, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','o','o','k',0, /* 54762, 0x1008ff52, KEY_XF86Book, Launch bookreader */
0x32, 0x02, 0x10, 0x08, 0xff, 0x53, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','D',0, /* 54782, 0x1008ff53, KEY_XF86CD, Launch CD/DVD player */
0x89, 0x34, 0x10, 0x08, 0xff, 0x54, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','a','l','c','u','l','a','t','e','r',0, /* 54810, 0x1008ff54, KEY_XF86Calculater, Launch Calculater */
0x94, 0x18, 0x10, 0x08, 0xff, 0x55, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','l','e','a','r',0, /* 54833, 0x1008ff55, KEY_XF86Clear, Clear window, screen */
0x94, 0x57, 0x10, 0x08, 0xff, 0x56, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','l','o','s','e',0, /* 54856, 0x1008ff56, KEY_XF86Close, Close window */
0xca, 0x0d, 0x10, 0x08, 0xff, 0x57, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','o','p','y',0, /* 54878, 0x1008ff57, KEY_XF86Copy, Copy selection */
0x64, 0xda, 0x10, 0x08, 0xff, 0x58, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','u','t',0, /* 54899, 0x1008ff58, KEY_XF86Cut, Cut selection */
0x52, 0xbb, 0x10, 0x08, 0xff, 0x59, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','D','i','s','p','l','a','y',0, /* 54924, 0x1008ff59, KEY_XF86Display, Output switch key */
0x64, 0x71, 0x10, 0x08, 0xff, 0x5a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','D','O','S',0, /* 54945, 0x1008ff5a, KEY_XF86DOS, Launch DOS (emulation) */
0x4b, 0xeb, 0x10, 0x08, 0xff, 0x5b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','D','o','c','u','m','e','n','t','s',0, /* 54972, 0x1008ff5b, KEY_XF86Documents, Open documents window */
0x94, 0x92, 0x10, 0x08, 0xff, 0x5c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','E','x','c','e','l',0, /* 54995, 0x1008ff5c, KEY_XF86Excel, Launch spread sheet */
0xa9, 0xbc, 0x10, 0x08, 0xff, 0x5d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','E','x','p','l','o','r','e','r',0, /* 55021, 0x1008ff5d, KEY_XF86Explorer, Launch file explorer */
0xc9, 0xdb, 0x10, 0x08, 0xff, 0x5e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','G','a','m','e',0, /* 55043, 0x1008ff5e, KEY_XF86Game, Launch game */
0x32, 0x35, 0x10, 0x08, 0xff, 0x5f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','G','o',0, /* 55063, 0x1008ff5f, KEY_XF86Go, Go to URL */
0x2c, 0x5a, 0x10, 0x08, 0xff, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','i','T','o','u','c','h',0, /* 55087, 0x1008ff60, KEY_XF86iTouch, Logitech iTouch- don't use */
0x29, 0x96, 0x10, 0x08, 0xff, 0x61, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','o','g','O','f','f',0, /* 55111, 0x1008ff61, KEY_XF86LogOff, Log off system */
0x29, 0xaa, 0x10, 0x08, 0xff, 0x62, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','a','r','k','e','t',0, /* 55135, 0x1008ff62, KEY_XF86Market, ?? */
0x53, 0xb7, 0x10, 0x08, 0xff, 0x63, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','e','t','i','n','g',0, /* 55160, 0x1008ff63, KEY_XF86Meeting, enter meeting in calendar */
0x29, 0x8c, 0x10, 0x08, 0xff, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','n','u','K','B',0, /* 55184, 0x1008ff65, KEY_XF86MenuKB, distinguish keyboard from PB */
0x29, 0x96, 0x10, 0x08, 0xff, 0x66, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','n','u','P','B',0, /* 55208, 0x1008ff66, KEY_XF86MenuPB, distinguish PB from keyboard */
0x54, 0xe5, 0x10, 0x08, 0xff, 0x67, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','y','S','i','t','e','s',0, /* 55233, 0x1008ff67, KEY_XF86MySites, Favourites */
0x64, 0xe9, 0x10, 0x08, 0xff, 0x68, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','N','e','w',0, /* 55254, 0x1008ff68, KEY_XF86New, New (folder, document... */
0xca, 0x45, 0x10, 0x08, 0xff, 0x69, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','N','e','w','s',0, /* 55276, 0x1008ff69, KEY_XF86News, News */
0xa1, 0x2b, 0x10, 0x08, 0xff, 0x6a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','O','f','f','i','c','e','H','o','m','e',0, /* 55304, 0x1008ff6a, KEY_XF86OfficeHome, Office home (old Staroffice) */
0xca, 0x50, 0x10, 0x08, 0xff, 0x6b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','O','p','e','n',0, /* 55326, 0x1008ff6b, KEY_XF86Open, Open */
0x2a, 0xf0, 0x10, 0x08, 0xff, 0x6c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','O','p','t','i','o','n',0, /* 55350, 0x1008ff6c, KEY_XF86Option, ?? */
0x94, 0xe1, 0x10, 0x08, 0xff, 0x6d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','a','s','t','e',0, /* 55373, 0x1008ff6d, KEY_XF86Paste, Paste */
0x94, 0xfd, 0x10, 0x08, 0xff, 0x6e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','h','o','n','e',0, /* 55396, 0x1008ff6e, KEY_XF86Phone, Launch phone; dial number */
0x98, 0xed, 0x10, 0x08, 0xff, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','Q',0, /* 55415, 0x1008ff70, KEY_XF86Q, Compaq's Q - don't use */
0x95, 0x19, 0x10, 0x08, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','e','p','l','y',0, /* 55438, 0x1008ff72, KEY_XF86Reply, Reply e.g., mail */
0x2a, 0x52, 0x10, 0x08, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','e','l','o','a','d',0, /* 55462, 0x1008ff73, KEY_XF86Reload, Reload web page, file, etc. */
0xc0, 0x7d, 0x10, 0x08, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','t','a','t','e','W','i','n','d','o','w','s',0, /* 55493, 0x1008ff74, KEY_XF86RotateWindows, Rotate windows e.g. xrandr */
0xb8, 0x62, 0x10, 0x08, 0xff, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','t','a','t','i','o','n','P','B',0, /* 55521, 0x1008ff75, KEY_XF86RotationPB, don't use */
0xb8, 0x58, 0x10, 0x08, 0xff, 0x76, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','t','a','t','i','o','n','K','B',0, /* 55549, 0x1008ff76, KEY_XF86RotationKB, don't use */
0xca, 0x4d, 0x10, 0x08, 0xff, 0x77, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','a','v','e',0, /* 55571, 0x1008ff77, KEY_XF86Save, Save (file, document, state */
0xab, 0x9a, 0x10, 0x08, 0xff, 0x78, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','c','r','o','l','l','U','p',0, /* 55597, 0x1008ff78, KEY_XF86ScrollUp, Scroll window/contents up */
0xaf, 0x38, 0x10, 0x08, 0xff, 0x79, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','c','r','o','l','l','D','o','w','n',0, /* 55625, 0x1008ff79, KEY_XF86ScrollDown, Scrool window/contentd down */
0x5e, 0x65, 0x10, 0x08, 0xff, 0x7a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','c','r','o','l','l','C','l','i','c','k',0, /* 55654, 0x1008ff7a, KEY_XF86ScrollClick, Use XKB mousekeys instead */
0xca, 0x4c, 0x10, 0x08, 0xff, 0x7b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','e','n','d',0, /* 55676, 0x1008ff7b, KEY_XF86Send, Send mail, file, object */
0x95, 0x48, 0x10, 0x08, 0xff, 0x7c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','p','e','l','l',0, /* 55699, 0x1008ff7c, KEY_XF86Spell, Spell checker */
0x70, 0x6c, 0x10, 0x08, 0xff, 0x7d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','p','l','i','t','S','c','r','e','e','n',0, /* 55728, 0x1008ff7d, KEY_XF86SplitScreen, Split window or screen */
0x57, 0xf4, 0x10, 0x08, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','u','p','p','o','r','t',0, /* 55753, 0x1008ff7e, KEY_XF86Support, Get support (??) */
0xaa, 0x95, 0x10, 0x08, 0xff, 0x7f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','a','s','k','P','a','n','e',0, /* 55779, 0x1008ff7f, KEY_XF86TaskPane, Show tasks */
0xac, 0x7e, 0x10, 0x08, 0xff, 0x80, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','e','r','m','i','n','a','l',0, /* 55805, 0x1008ff80, KEY_XF86Terminal, Launch terminal emulator */
0x95, 0x7f, 0x10, 0x08, 0xff, 0x81, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','o','l','s',0, /* 55828, 0x1008ff81, KEY_XF86Tools, toolbox of desktop/app. */
0x2b, 0x36, 0x10, 0x08, 0xff, 0x82, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','r','a','v','e','l',0, /* 55852, 0x1008ff82, KEY_XF86Travel, ?? */
0x2b, 0x22, 0x10, 0x08, 0xff, 0x84, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','s','e','r','P','B',0, /* 55876, 0x1008ff84, KEY_XF86UserPB, ?? */
0x56, 0x1c, 0x10, 0x08, 0xff, 0x85, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','s','e','r','1','K','B',0, /* 55901, 0x1008ff85, KEY_XF86User1KB, ?? */
0x56, 0x20, 0x10, 0x08, 0xff, 0x86, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','s','e','r','2','K','B',0, /* 55926, 0x1008ff86, KEY_XF86User2KB, ?? */
0x95, 0x31, 0x10, 0x08, 0xff, 0x87, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','V','i','d','e','o',0, /* 55949, 0x1008ff87, KEY_XF86Video, Launch video player */
0x64, 0xcc, 0x10, 0x08, 0xff, 0x88, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','h','e','e','l','B','u','t','t','o','n',0, /* 55978, 0x1008ff88, KEY_XF86WheelButton, button from a mouse wheel */
0xca, 0x9c, 0x10, 0x08, 0xff, 0x89, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','o','r','d',0, /* 56000, 0x1008ff89, KEY_XF86Word, Launch word processor */
0xca, 0x74, 0x10, 0x08, 0xff, 0x8a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','X','f','e','r',0, /* 56022, 0x1008ff8a, KEY_XF86Xfer */
0x2b, 0xdc, 0x10, 0x08, 0xff, 0x8b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','Z','o','o','m','I','n',0, /* 56046, 0x1008ff8b, KEY_XF86ZoomIn, zoom in view, map, etc. */
0x58, 0x52, 0x10, 0x08, 0xff, 0x8c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','Z','o','o','m','O','u','t',0, /* 56071, 0x1008ff8c, KEY_XF86ZoomOut, zoom out view, map, etc. */
0xc9, 0xff, 0x10, 0x08, 0xff, 0x8d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','w','a','y',0, /* 56093, 0x1008ff8d, KEY_XF86Away, mark yourself as away */
0x53, 0x38, 0x10, 0x08, 0xff, 0x8e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','e','s','s','e','n','g','e','r',0, /* 56120, 0x1008ff8e, KEY_XF86Messenger, as in instant messaging */
0x29, 0xfb, 0x10, 0x08, 0xff, 0x8f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','e','b','C','a','m',0, /* 56144, 0x1008ff8f, KEY_XF86WebCam, Launch web camera app. */
0x32, 0x04, 0x10, 0x08, 0xff, 0x90, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','a','i','l','F','o','r','w','a','r','d',0, /* 56173, 0x1008ff90, KEY_XF86MailForward, Forward in mail */
0xaa, 0x8d, 0x10, 0x08, 0xff, 0x91, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','i','c','t','u','r','e','s',0, /* 56199, 0x1008ff91, KEY_XF86Pictures, Show pictures */
0x95, 0x39, 0x10, 0x08, 0xff, 0x92, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','M','u','s','i','c',0, /* 56222, 0x1008ff92, KEY_XF86Music, Launch music application */
0x51, 0x71, 0x10, 0x08, 0xff, 0x93, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','a','t','t','e','r','y',0, /* 56247, 0x1008ff93, KEY_XF86Battery, Display battery information */
0x4b, 0xa4, 0x10, 0x08, 0xff, 0x94, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','l','u','e','t','o','o','t','h',0, /* 56274, 0x1008ff94, KEY_XF86Bluetooth, Enable/disable Bluetooth */
0xc9, 0x98, 0x10, 0x08, 0xff, 0x95, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','L','A','N',0, /* 56296, 0x1008ff95, KEY_XF86WLAN, Enable/disable WLAN */
0x64, 0xb4, 0x10, 0x08, 0xff, 0x96, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','W','B',0, /* 56317, 0x1008ff96, KEY_XF86UWB, Enable/disable UWB	 */
0x51, 0x84, 0x10, 0x08, 0xff, 0x97, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','F','o','r','w','a','r','d',0, /* 56347, 0x1008ff97, KEY_XF86AudioForward, fast-forward audio track */
0x29, 0x1a, 0x10, 0x08, 0xff, 0x98, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','e','p','e','a','t',0, /* 56376, 0x1008ff98, KEY_XF86AudioRepeat, toggle repeat mode */
0x93, 0x1b, 0x10, 0x08, 0xff, 0x99, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','R','a','n','d','o','m','P','l','a','y',0, /* 56409, 0x1008ff99, KEY_XF86AudioRandomPlay, toggle shuffle mode */
0xae, 0x95, 0x10, 0x08, 0xff, 0x9a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','u','b','t','i','t','l','e',0, /* 56435, 0x1008ff9a, KEY_XF86Subtitle, cycle through subtitle */
0x87, 0xa5, 0x10, 0x08, 0xff, 0x9b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','C','y','c','l','e','T','r','a','c','k',0, /* 56468, 0x1008ff9b, KEY_XF86AudioCycleTrack, cycle through audio tracks */
0x9a, 0x79, 0x10, 0x08, 0xff, 0x9c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','y','c','l','e','A','n','g','l','e',0, /* 56496, 0x1008ff9c, KEY_XF86CycleAngle, cycle through angles */
0x4b, 0xf5, 0x10, 0x08, 0xff, 0x9d, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','r','a','m','e','B','a','c','k',0, /* 56523, 0x1008ff9d, KEY_XF86FrameBack, video: go one frame back */
0x66, 0x84, 0x10, 0x08, 0xff, 0x9e, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','F','r','a','m','e','F','o','r','w','a','r','d',0, /* 56553, 0x1008ff9e, KEY_XF86FrameForward, video: go one frame forward */
0xca, 0x63, 0x10, 0x08, 0xff, 0x9f, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','i','m','e',0, /* 56575, 0x1008ff9f, KEY_XF86Time, display, or shows an entry for time seeking */
0x2a, 0x5e, 0x10, 0x08, 0xff, 0xa0, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','e','l','e','c','t',0, /* 56599, 0x1008ffa0, KEY_XF86Select, Select button on joypads and remotes */
0xca, 0x75, 0x10, 0x08, 0xff, 0xa1, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','V','i','e','w',0, /* 56621, 0x1008ffa1, KEY_XF86View, Show a view options/properties */
0x56, 0x2d, 0x10, 0x08, 0xff, 0xa2, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','p','M','e','n','u',0, /* 56646, 0x1008ffa2, KEY_XF86TopMenu, Go to a top-level menu in a video */
0x64, 0xe6, 0x10, 0x08, 0xff, 0xa3, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','e','d',0, /* 56667, 0x1008ffa3, KEY_XF86Red, Red button */
0x94, 0x8c, 0x10, 0x08, 0xff, 0xa4, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','G','r','e','e','n',0, /* 56690, 0x1008ffa4, KEY_XF86Green, Green button */
0x2b, 0x55, 0x10, 0x08, 0xff, 0xa5, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','Y','e','l','l','o','w',0, /* 56714, 0x1008ffa5, KEY_XF86Yellow, Yellow button */
0xc9, 0xef, 0x10, 0x08, 0xff, 0xa6, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','B','l','u','e',0, /* 56736, 0x1008ffa6, KEY_XF86Blue, Blue button */
0x57, 0xe4, 0x10, 0x08, 0xff, 0xa7, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','u','s','p','e','n','d',0, /* 56761, 0x1008ffa7, KEY_XF86Suspend, Sleep to RAM */
0x4b, 0x01, 0x10, 0x08, 0xff, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','H','i','b','e','r','n','a','t','e',0, /* 56788, 0x1008ffa8, KEY_XF86Hibernate, Sleep to disk */
0xc5, 0x01, 0x10, 0x08, 0xff, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','u','c','h','p','a','d','T','o','g','g','l','e',0, /* 56820, 0x1008ffa9, KEY_XF86TouchpadToggle, Toggle between touchpad/trackstick */
0xbb, 0xe4, 0x10, 0x08, 0xff, 0xb0, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','u','c','h','p','a','d','O','n',0, /* 56848, 0x1008ffb0, KEY_XF86TouchpadOn, The touchpad got switched on */
0x78, 0x1e, 0x10, 0x08, 0xff, 0xb1, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','T','o','u','c','h','p','a','d','O','f','f',0, /* 56877, 0x1008ffb1, KEY_XF86TouchpadOff, The touchpad got switched off */
0x50, 0x99, 0x10, 0x08, 0xff, 0xb2, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','M','i','c','M','u','t','e',0, /* 56907, 0x1008ffb2, KEY_XF86AudioMicMute, Mute the Mic from the system */
0xa8, 0x44, 0x10, 0x08, 0xff, 0xb3, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','K','e','y','b','o','a','r','d',0, /* 56933, 0x1008ffb3, KEY_XF86Keyboard, User defined keyboard related action */
0xc9, 0xc4, 0x10, 0x08, 0xff, 0xb4, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','W','W','A','N',0, /* 56955, 0x1008ffb4, KEY_XF86WWAN, Toggle WWAN (LTE, UMTS, etc.) radio */
0x27, 0x60, 0x10, 0x08, 0xff, 0xb5, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','F','K','i','l','l',0, /* 56979, 0x1008ffb5, KEY_XF86RFKill, Toggle radios on/off */
0x29, 0x92, 0x10, 0x08, 0xff, 0xb6, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','A','u','d','i','o','P','r','e','s','e','t',0, /* 57008, 0x1008ffb6, KEY_XF86AudioPreset, Select equalizer preset, e.g. theatre-mode */
0xea, 0xc1, 0x10, 0x08, 0xff, 0xb7, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','R','o','t','a','t','i','o','n','L','o','c','k','T','o','g','g','l','e',0, /* 57044, 0x1008ffb7, KEY_XF86RotationLockToggle, Toggle screen rotation lock on/off */
0x7d, 0x9f, 0x10, 0x08, 0xfe, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','1',0, /* 57073, 0x1008fe01, KEY_XF86Switch_VT_1 */
0x7d, 0xa0, 0x10, 0x08, 0xfe, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','2',0, /* 57102, 0x1008fe02, KEY_XF86Switch_VT_2 */
0x7d, 0xa1, 0x10, 0x08, 0xfe, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','3',0, /* 57131, 0x1008fe03, KEY_XF86Switch_VT_3 */
0x7d, 0xa2, 0x10, 0x08, 0xfe, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','4',0, /* 57160, 0x1008fe04, KEY_XF86Switch_VT_4 */
0x7d, 0xa3, 0x10, 0x08, 0xfe, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','5',0, /* 57189, 0x1008fe05, KEY_XF86Switch_VT_5 */
0x7d, 0xa4, 0x10, 0x08, 0xfe, 0x06, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','6',0, /* 57218, 0x1008fe06, KEY_XF86Switch_VT_6 */
0x7d, 0xa5, 0x10, 0x08, 0xfe, 0x07, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','7',0, /* 57247, 0x1008fe07, KEY_XF86Switch_VT_7 */
0x7d, 0xa6, 0x10, 0x08, 0xfe, 0x08, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','8',0, /* 57276, 0x1008fe08, KEY_XF86Switch_VT_8 */
0x7d, 0xa7, 0x10, 0x08, 0xfe, 0x09, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','9',0, /* 57305, 0x1008fe09, KEY_XF86Switch_VT_9 */
0xfb, 0x6e, 0x10, 0x08, 0xfe, 0x0a, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','1','0',0, /* 57335, 0x1008fe0a, KEY_XF86Switch_VT_10 */
0xfb, 0x6f, 0x10, 0x08, 0xfe, 0x0b, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','1','1',0, /* 57365, 0x1008fe0b, KEY_XF86Switch_VT_11 */
0xfb, 0x70, 0x10, 0x08, 0xfe, 0x0c, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','S','w','i','t','c','h','_','V','T','_','1','2',0, /* 57395, 0x1008fe0c, KEY_XF86Switch_VT_12 */
0x2b, 0x24, 0x10, 0x08, 0xfe, 0x20, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','U','n','g','r','a','b',0, /* 57419, 0x1008fe20, KEY_XF86Ungrab, force ungrab */
0x46, 0xa4, 0x10, 0x08, 0xfe, 0x21, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','C','l','e','a','r','G','r','a','b',0, /* 57446, 0x1008fe21, KEY_XF86ClearGrab, kill application with grab */
0xa8, 0x91, 0x10, 0x08, 0xfe, 0x22, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','N','e','x','t','_','V','M','o','d','e',0, /* 57474, 0x1008fe22, KEY_XF86Next_VMode, next video mode available */
0xb0, 0x91, 0x10, 0x08, 0xfe, 0x23, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','P','r','e','v','_','V','M','o','d','e',0, /* 57502, 0x1008fe23, KEY_XF86Prev_VMode, prev. video mode available */
0x15, 0xe7, 0x10, 0x08, 0xfe, 0x24, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','o','g','W','i','n','d','o','w','T','r','e','e',0, /* 57533, 0x1008fe24, KEY_XF86LogWindowTree, print window tree to log */
0x3c, 0x7b, 0x10, 0x08, 0xfe, 0x25, 0x00, 0x00, 0x00, 'K','E','Y','_','X','F','8','6','L','o','g','G','r','a','b','I','n','f','o',0, /* 57562, 0x1008fe25, KEY_XF86LogGrabInfo, print all active grabs to log */
0xd5, 0xf5, 0x10, 0x05, 0xff, 0x00, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','G','r','a','v','e',0, /* 57587, 0x1005ff00, KEY_SunFA_Grave */
0xab, 0xa3, 0x10, 0x05, 0xff, 0x01, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','C','i','r','c','u','m',0, /* 57613, 0x1005ff01, KEY_SunFA_Circum */
0xd6, 0x85, 0x10, 0x05, 0xff, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','T','i','l','d','e',0, /* 57638, 0x1005ff02, KEY_SunFA_Tilde */
0xd5, 0x69, 0x10, 0x05, 0xff, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','A','c','u','t','e',0, /* 57663, 0x1005ff03, KEY_SunFA_Acute */
0x5c, 0xb9, 0x10, 0x05, 0xff, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','D','i','a','e','r','e','s','i','s',0, /* 57692, 0x1005ff04, KEY_SunFA_Diaeresis */
0x56, 0x51, 0x10, 0x05, 0xff, 0x05, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','A','_','C','e','d','i','l','l','a',0, /* 57719, 0x1005ff05, KEY_SunFA_Cedilla */
0x36, 0x14, 0x10, 0x05, 0xff, 0x10, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','3','6',0, /* 57739, 0x1005ff10, KEY_SunF36, Labeled F11 */
0x36, 0x15, 0x10, 0x05, 0xff, 0x11, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','3','7',0, /* 57759, 0x1005ff11, KEY_SunF37, Labeled F12 */
0x76, 0x8b, 0x10, 0x05, 0xff, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','S','y','s','_','R','e','q',0, /* 57783, 0x1005ff60, KEY_SunSys_Req */
0xb0, 0xac, 0x00, 0x00, 0xff, 0x61, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','r','i','n','t','_','S','c','r','e','e','n',0, /* 57812, 0xff61, KEY_SunPrint_Screen, Same as XK_Print */
0x71, 0xf7, 0x00, 0x00, 0xff, 0x20, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','C','o','m','p','o','s','e',0, /* 57836, 0xff20, KEY_SunCompose, Same as XK_Multi_key */
0xe0, 0xcc, 0x00, 0x00, 0xff, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','l','t','G','r','a','p','h',0, /* 57861, 0xff7e, KEY_SunAltGraph, Same as XK_Mode_switch */
0xb8, 0xf6, 0x00, 0x00, 0xff, 0x55, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','a','g','e','U','p',0, /* 57884, 0xff55, KEY_SunPageUp, Same as XK_Prior */
0xe4, 0xa8, 0x00, 0x00, 0xff, 0x56, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','a','g','e','D','o','w','n',0, /* 57909, 0xff56, KEY_SunPageDown, Same as XK_Next */
0x6e, 0x57, 0x00, 0x00, 0xff, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','U','n','d','o',0, /* 57930, 0xff65, KEY_SunUndo, Same as XK_Undo */
0xdb, 0x8c, 0x00, 0x00, 0xff, 0x66, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','g','a','i','n',0, /* 57952, 0xff66, KEY_SunAgain, Same as XK_Redo */
0x6d, 0xd4, 0x00, 0x00, 0xff, 0x68, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','i','n','d',0, /* 57973, 0xff68, KEY_SunFind, Same as XK_Find */
0x6e, 0x76, 0x00, 0x00, 0xff, 0x69, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','S','t','o','p',0, /* 57994, 0xff69, KEY_SunStop, Same as XK_Cancel */
0xdd, 0x1f, 0x10, 0x05, 0xff, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','r','o','p','s',0, /* 58016, 0x1005ff70, KEY_SunProps */
0xdc, 0x7c, 0x10, 0x05, 0xff, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','F','r','o','n','t',0, /* 58038, 0x1005ff71, KEY_SunFront */
0x6d, 0xed, 0x10, 0x05, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','C','o','p','y',0, /* 58059, 0x1005ff72, KEY_SunCopy */
0x6e, 0x30, 0x10, 0x05, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','O','p','e','n',0, /* 58080, 0x1005ff73, KEY_SunOpen */
0xdc, 0xa1, 0x10, 0x05, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','a','s','t','e',0, /* 58102, 0x1005ff74, KEY_SunPaste */
0x36, 0xca, 0x10, 0x05, 0xff, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','C','u','t',0, /* 58122, 0x1005ff75, KEY_SunCut */
0x5c, 0x16, 0x10, 0x05, 0xff, 0x76, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','o','w','e','r','S','w','i','t','c','h',0, /* 58150, 0x1005ff76, KEY_SunPowerSwitch */
0x34, 0x23, 0x10, 0x05, 0xff, 0x77, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','u','d','i','o','L','o','w','e','r','V','o','l','u','m','e',0, /* 58183, 0x1005ff77, KEY_SunAudioLowerVolume */
0xc6, 0x19, 0x10, 0x05, 0xff, 0x78, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','u','d','i','o','M','u','t','e',0, /* 58209, 0x1005ff78, KEY_SunAudioMute */
0x25, 0xe3, 0x10, 0x05, 0xff, 0x79, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','A','u','d','i','o','R','a','i','s','e','V','o','l','u','m','e',0, /* 58242, 0x1005ff79, KEY_SunAudioRaiseVolume */
0xa2, 0xc5, 0x10, 0x05, 0xff, 0x7a, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','V','i','d','e','o','D','e','g','a','u','s','s',0, /* 58271, 0x1005ff7a, KEY_SunVideoDegauss */
0x1e, 0xdd, 0x10, 0x05, 0xff, 0x7b, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','V','i','d','e','o','L','o','w','e','r','B','r','i','g','h','t','n','e','s','s',0, /* 58308, 0x1005ff7b, KEY_SunVideoLowerBrightness */
0x3a, 0xdd, 0x10, 0x05, 0xff, 0x7c, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','V','i','d','e','o','R','a','i','s','e','B','r','i','g','h','t','n','e','s','s',0, /* 58345, 0x1005ff7c, KEY_SunVideoRaiseBrightness */
0x8e, 0x14, 0x10, 0x05, 0xff, 0x7d, 0x00, 0x00, 0x00, 'K','E','Y','_','S','u','n','P','o','w','e','r','S','w','i','t','c','h','S','h','i','f','t',0, /* 58378, 0x1005ff7d, KEY_SunPowerSwitchShift */
0x5b, 0x8c, 0x10, 0x00, 0xfe, 0xb0, 0x00, 0x00, 0x00, 'K','E','Y','_','D','r','i','n','g','_','a','c','c','e','n','t',0, /* 58404, 0x1000feb0, KEY_Dring_accent */
0x59, 0x0c, 0x10, 0x00, 0xfe, 0x5e, 0x00, 0x00, 0x00, 'K','E','Y','_','D','c','i','r','c','u','m','f','l','e','x','_','a','c','c','e','n','t',0, /* 58436, 0x1000fe5e, KEY_Dcircumflex_accent */
0x98, 0x8c, 0x10, 0x00, 0xfe, 0x2c, 0x00, 0x00, 0x00, 'K','E','Y','_','D','c','e','d','i','l','l','a','_','a','c','c','e','n','t',0, /* 58465, 0x1000fe2c, KEY_Dcedilla_accent */
0x34, 0x8c, 0x10, 0x00, 0xfe, 0x27, 0x00, 0x00, 0x00, 'K','E','Y','_','D','a','c','u','t','e','_','a','c','c','e','n','t',0, /* 58492, 0x1000fe27, KEY_Dacute_accent */
0x7a, 0x8c, 0x10, 0x00, 0xfe, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','D','g','r','a','v','e','_','a','c','c','e','n','t',0, /* 58519, 0x1000fe60, KEY_Dgrave_accent */
0x35, 0x25, 0x10, 0x00, 0xfe, 0x7e, 0x00, 0x00, 0x00, 'K','E','Y','_','D','t','i','l','d','e',0, /* 58539, 0x1000fe7e, KEY_Dtilde */
0x46, 0xb9, 0x10, 0x00, 0xfe, 0x22, 0x00, 0x00, 0x00, 'K','E','Y','_','D','d','i','a','e','r','e','s','i','s',0, /* 58563, 0x1000fe22, KEY_Ddiaeresis */
0x66, 0x85, 0x10, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 'K','E','Y','_','D','R','e','m','o','v','e',0, /* 58584, 0x1000ff00, KEY_DRemove, Remove */
0x12, 0xc5, 0x10, 0x00, 0xff, 0x6f, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','C','l','e','a','r','L','i','n','e',0, /* 58609, 0x1000ff6f, KEY_hpClearLine */
0x3d, 0x85, 0x10, 0x00, 0xff, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','I','n','s','e','r','t','L','i','n','e',0, /* 58635, 0x1000ff70, KEY_hpInsertLine */
0x26, 0x55, 0x10, 0x00, 0xff, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','D','e','l','e','t','e','L','i','n','e',0, /* 58661, 0x1000ff71, KEY_hpDeleteLine */
0x3d, 0x2c, 0x10, 0x00, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','I','n','s','e','r','t','C','h','a','r',0, /* 58687, 0x1000ff72, KEY_hpInsertChar */
0x25, 0xfc, 0x10, 0x00, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','D','e','l','e','t','e','C','h','a','r',0, /* 58713, 0x1000ff73, KEY_hpDeleteChar */
0xc2, 0x9c, 0x10, 0x00, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','B','a','c','k','T','a','b',0, /* 58736, 0x1000ff74, KEY_hpBackTab */
0x0e, 0x1c, 0x10, 0x00, 0xff, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','K','P','_','B','a','c','k','T','a','b',0, /* 58762, 0x1000ff75, KEY_hpKP_BackTab */
0x1e, 0xeb, 0x10, 0x00, 0xff, 0x48, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','M','o','d','e','l','o','c','k','1',0, /* 58787, 0x1000ff48, KEY_hpModelock1 */
0x1e, 0xec, 0x10, 0x00, 0xff, 0x49, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','M','o','d','e','l','o','c','k','2',0, /* 58812, 0x1000ff49, KEY_hpModelock2 */
0x71, 0xd2, 0x10, 0x00, 0xff, 0x6c, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','R','e','s','e','t',0, /* 58833, 0x1000ff6c, KEY_hpReset */
0xe5, 0x8f, 0x10, 0x00, 0xff, 0x6d, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','S','y','s','t','e','m',0, /* 58855, 0x1000ff6d, KEY_hpSystem */
0x38, 0xf0, 0x10, 0x00, 0xff, 0x6e, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','U','s','e','r',0, /* 58875, 0x1000ff6e, KEY_hpUser */
0x8a, 0x69, 0x10, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','a','c','u','t','e',0, /* 58901, 0x100000a8, KEY_hpmute_acute */
0x8a, 0xf5, 0x10, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','g','r','a','v','e',0, /* 58927, 0x100000a9, KEY_hpmute_grave */
0xbd, 0x23, 0x10, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','a','s','c','i','i','c','i','r','c','u','m',0, /* 58959, 0x100000aa, KEY_hpmute_asciicircum */
0xac, 0xb9, 0x10, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','d','i','a','e','r','e','s','i','s',0, /* 58989, 0x100000ab, KEY_hpmute_diaeresis */
0x5f, 0x45, 0x10, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','m','u','t','e','_','a','s','c','i','i','t','i','l','d','e',0, /* 59020, 0x100000ac, KEY_hpmute_asciitilde */
0x39, 0x89, 0x10, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','l','i','r','a',0, /* 59040, 0x100000af, KEY_hplira */
0xcf, 0x1c, 0x10, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','g','u','i','l','d','e','r',0, /* 59063, 0x100000be, KEY_hpguilder */
0x4c, 0xb9, 0x10, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','Y','d','i','a','e','r','e','s','i','s',0, /* 59089, 0x100000ee, KEY_hpYdiaeresis */
0x4d, 0xb1, 0x10, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','I','O',0, /* 59107, 0x100000ee, KEY_hpIO */
0x41, 0x0d, 0x10, 0x00, 0x00, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','l','o','n','g','m','i','n','u','s',0, /* 59132, 0x100000f6, KEY_hplongminus */
0x72, 0xed, 0x10, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 'K','E','Y','_','h','p','b','l','o','c','k',0, /* 59153, 0x100000fc, KEY_hpblock */
0x74, 0x2d, 0x10, 0x04, 0xff, 0x02, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','C','o','p','y',0, /* 59174, 0x1004ff02, KEY_osfCopy */
0x39, 0xea, 0x10, 0x04, 0xff, 0x03, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','C','u','t',0, /* 59194, 0x1004ff03, KEY_osfCut */
0xe9, 0x21, 0x10, 0x04, 0xff, 0x04, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','s','t','e',0, /* 59216, 0x1004ff04, KEY_osfPaste */
0xa0, 0x9c, 0x10, 0x04, 0xff, 0x07, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','B','a','c','k','T','a','b',0, /* 59240, 0x1004ff07, KEY_osfBackTab */
0x83, 0xff, 0x10, 0x04, 0xff, 0x08, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','B','a','c','k','S','p','a','c','e',0, /* 59266, 0x1004ff08, KEY_osfBackSpace */
0xe8, 0x58, 0x10, 0x04, 0xff, 0x0b, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','C','l','e','a','r',0, /* 59288, 0x1004ff0b, KEY_osfClear */
0xd1, 0xb1, 0x10, 0x04, 0xff, 0x1b, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','E','s','c','a','p','e',0, /* 59311, 0x1004ff1b, KEY_osfEscape */
0xa0, 0x51, 0x10, 0x04, 0xff, 0x31, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','A','d','d','M','o','d','e',0, /* 59335, 0x1004ff31, KEY_osfAddMode */
0xee, 0x41, 0x10, 0x04, 0xff, 0x32, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','r','i','m','a','r','y','P','a','s','t','e',0, /* 59364, 0x1004ff32, KEY_osfPrimaryPaste */
0x3c, 0xc1, 0x10, 0x04, 0xff, 0x33, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','Q','u','i','c','k','P','a','s','t','e',0, /* 59391, 0x1004ff33, KEY_osfQuickPaste */
0x48, 0xa4, 0x10, 0x04, 0xff, 0x40, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','g','e','L','e','f','t',0, /* 59416, 0x1004ff40, KEY_osfPageLeft */
0xd1, 0xf6, 0x10, 0x04, 0xff, 0x41, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','g','e','U','p',0, /* 59439, 0x1004ff41, KEY_osfPageUp */
0x48, 0xa8, 0x10, 0x04, 0xff, 0x42, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','g','e','D','o','w','n',0, /* 59464, 0x1004ff42, KEY_osfPageDown */
0x92, 0x28, 0x10, 0x04, 0xff, 0x43, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','a','g','e','R','i','g','h','t',0, /* 59490, 0x1004ff43, KEY_osfPageRight */
0x44, 0xd1, 0x10, 0x04, 0xff, 0x44, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','A','c','t','i','v','a','t','e',0, /* 59515, 0x1004ff44, KEY_osfActivate */
0xa4, 0xa4, 0x10, 0x04, 0xff, 0x45, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','M','e','n','u','B','a','r',0, /* 59539, 0x1004ff45, KEY_osfMenuBar */
0x74, 0x34, 0x10, 0x04, 0xff, 0x51, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','L','e','f','t',0, /* 59560, 0x1004ff51, KEY_osfLeft */
0x9c, 0xda, 0x10, 0x04, 0xff, 0x52, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','U','p',0, /* 59579, 0x1004ff52, KEY_osfUp */
0xe9, 0x48, 0x10, 0x04, 0xff, 0x53, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','R','i','g','h','t',0, /* 59601, 0x1004ff53, KEY_osfRight */
0x74, 0x38, 0x10, 0x04, 0xff, 0x54, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','D','o','w','n',0, /* 59622, 0x1004ff54, KEY_osfDown */
0xa2, 0x85, 0x10, 0x04, 0xff, 0x57, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','E','n','d','L','i','n','e',0, /* 59646, 0x1004ff57, KEY_osfEndLine */
0x87, 0x85, 0x10, 0x04, 0xff, 0x58, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','B','e','g','i','n','L','i','n','e',0, /* 59672, 0x1004ff58, KEY_osfBeginLine */
0xa2, 0x2d, 0x10, 0x04, 0xff, 0x59, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','E','n','d','D','a','t','a',0, /* 59696, 0x1004ff59, KEY_osfEndData */
0x87, 0x2d, 0x10, 0x04, 0xff, 0x5a, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','B','e','g','i','n','D','a','t','a',0, /* 59722, 0x1004ff5a, KEY_osfBeginData */
0x4d, 0xcd, 0x10, 0x04, 0xff, 0x5b, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','r','e','v','M','e','n','u',0, /* 59747, 0x1004ff5b, KEY_osfPrevMenu */
0x4b, 0xcd, 0x10, 0x04, 0xff, 0x5c, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','N','e','x','t','M','e','n','u',0, /* 59772, 0x1004ff5c, KEY_osfNextMenu */
0x9b, 0x78, 0x10, 0x04, 0xff, 0x5d, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','P','r','e','v','F','i','e','l','d',0, /* 59798, 0x1004ff5d, KEY_osfPrevField */
0x97, 0x78, 0x10, 0x04, 0xff, 0x5e, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','N','e','x','t','F','i','e','l','d',0, /* 59824, 0x1004ff5e, KEY_osfNextField */
0xd2, 0xde, 0x10, 0x04, 0xff, 0x60, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','S','e','l','e','c','t',0, /* 59847, 0x1004ff60, KEY_osfSelect */
0xd2, 0x84, 0x10, 0x04, 0xff, 0x63, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','I','n','s','e','r','t',0, /* 59870, 0x1004ff63, KEY_osfInsert */
0x74, 0x97, 0x10, 0x04, 0xff, 0x65, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','U','n','d','o',0, /* 59891, 0x1004ff65, KEY_osfUndo */
0x74, 0x4d, 0x10, 0x04, 0xff, 0x67, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','M','e','n','u',0, /* 59912, 0x1004ff67, KEY_osfMenu */
0xd0, 0xa2, 0x10, 0x04, 0xff, 0x69, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','C','a','n','c','e','l',0, /* 59935, 0x1004ff69, KEY_osfCancel */
0x74, 0x1c, 0x10, 0x04, 0xff, 0x6a, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','H','e','l','p',0, /* 59956, 0x1004ff6a, KEY_osfHelp */
0x99, 0x38, 0x10, 0x04, 0xff, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','S','e','l','e','c','t','A','l','l',0, /* 59982, 0x1004ff71, KEY_osfSelectAll */
0x33, 0x38, 0x10, 0x04, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','D','e','s','e','l','e','c','t','A','l','l',0, /* 60010, 0x1004ff72, KEY_osfDeselectAll */
0x4d, 0x1e, 0x10, 0x04, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','R','e','s','e','l','e','c','t',0, /* 60035, 0x1004ff73, KEY_osfReselect */
0xd2, 0x94, 0x10, 0x04, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','E','x','t','e','n','d',0, /* 60058, 0x1004ff74, KEY_osfExtend */
0xa6, 0xf5, 0x10, 0x04, 0xff, 0x78, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','R','e','s','t','o','r','e',0, /* 60082, 0x1004ff78, KEY_osfRestore */
0xd1, 0x11, 0x10, 0x04, 0xff, 0xff, 0x00, 0x00, 0x00, 'K','E','Y','_','o','s','f','D','e','l','e','t','e',0, /* 60105, 0x1004ffff, KEY_osfDelete */
0x9a, 0xf2, 0x10, 0x00, 0xff, 0x6c, 0x00, 0x00, 0x00, 'K','E','Y','_','R','e','s','e','t',0, /* 60124, 0x1000ff6c, KEY_Reset */
0x37, 0xcf, 0x10, 0x00, 0xff, 0x6d, 0x00, 0x00, 0x00, 'K','E','Y','_','S','y','s','t','e','m',0, /* 60144, 0x1000ff6d, KEY_System */
0x4d, 0x80, 0x10, 0x00, 0xff, 0x6e, 0x00, 0x00, 0x00, 'K','E','Y','_','U','s','e','r',0, /* 60162, 0x1000ff6e, KEY_User */
0xa4, 0xc5, 0x10, 0x00, 0xff, 0x6f, 0x00, 0x00, 0x00, 'K','E','Y','_','C','l','e','a','r','L','i','n','e',0, /* 60185, 0x1000ff6f, KEY_ClearLine */
0x61, 0x85, 0x10, 0x00, 0xff, 0x70, 0x00, 0x00, 0x00, 'K','E','Y','_','I','n','s','e','r','t','L','i','n','e',0, /* 60209, 0x1000ff70, KEY_InsertLine */
0x4a, 0x55, 0x10, 0x00, 0xff, 0x71, 0x00, 0x00, 0x00, 'K','E','Y','_','D','e','l','e','t','e','L','i','n','e',0, /* 60233, 0x1000ff71, KEY_DeleteLine */
0x61, 0x2c, 0x10, 0x00, 0xff, 0x72, 0x00, 0x00, 0x00, 'K','E','Y','_','I','n','s','e','r','t','C','h','a','r',0, /* 60257, 0x1000ff72, KEY_InsertChar */
0x49, 0xfc, 0x10, 0x00, 0xff, 0x73, 0x00, 0x00, 0x00, 'K','E','Y','_','D','e','l','e','t','e','C','h','a','r',0, /* 60281, 0x1000ff73, KEY_DeleteChar */
0x67, 0x1c, 0x10, 0x00, 0xff, 0x74, 0x00, 0x00, 0x00, 'K','E','Y','_','B','a','c','k','T','a','b',0, /* 60302, 0x1000ff74, KEY_BackTab */
0x32, 0x1c, 0x10, 0x00, 0xff, 0x75, 0x00, 0x00, 0x00, 'K','E','Y','_','K','P','_','B','a','c','k','T','a','b',0, /* 60326, 0x1000ff75, KEY_KP_BackTab */
0x4f, 0x42, 0x10, 0x00, 0xff, 0x76, 0x00, 0x00, 0x00, 'K','E','Y','_','E','x','t','1','6','b','i','t','_','L',0, /* 60350, 0x1000ff76, KEY_Ext16bit_L */
0x4f, 0x48, 0x10, 0x00, 0xff, 0x77, 0x00, 0x00, 0x00, 'K','E','Y','_','E','x','t','1','6','b','i','t','_','R',0, /* 60374, 0x1000ff77, KEY_Ext16bit_R */
0xae, 0x69, 0x10, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','a','c','u','t','e',0, /* 60398, 0x100000a8, KEY_mute_acute */
0xae, 0xf5, 0x10, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','g','r','a','v','e',0, /* 60422, 0x100000a9, KEY_mute_grave */
0xbd, 0x23, 0x10, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','a','s','c','i','i','c','i','r','c','u','m',0, /* 60452, 0x100000aa, KEY_mute_asciicircum */
0xec, 0xb9, 0x10, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','d','i','a','e','r','e','s','i','s',0, /* 60480, 0x100000ab, KEY_mute_diaeresis */
0xdf, 0x45, 0x10, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 'K','E','Y','_','m','u','t','e','_','a','s','c','i','i','t','i','l','d','e',0, /* 60509, 0x100000ac, KEY_mute_asciitilde */
0x4e, 0x19, 0x10, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 'K','E','Y','_','l','i','r','a',0, /* 60527, 0x100000af, KEY_lira */
0x73, 0x9c, 0x10, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 'K','E','Y','_','g','u','i','l','d','e','r',0, /* 60548, 0x100000be, KEY_guilder */
0x12, 0xd5, 0x10, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 'K','E','Y','_','I','O',0, /* 60564, 0x100000ee, KEY_IO */
0xd3, 0x0d, 0x10, 0x00, 0x00, 0xf6, 0x00, 0x00, 0x00, 'K','E','Y','_','l','o','n','g','m','i','n','u','s',0, /* 60587, 0x100000f6, KEY_longminus */
0x9c, 0x0d, 0x10, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 'K','E','Y','_','b','l','o','c','k',0 /* 60606, 0x100000fc, KEY_block */
};


/*
 *  KeySymbolName to object index.
 */
#define KTABLESIZE 3667
#define KMAXHASH 13

static const unsigned short hashString[KTABLESIZE] = {
	0x3725, /*  635, 0x3bc, U+0167, KEY_tslash, LATIN SMALL LETTER T WITH STROKE */
	0xc6d3, /* 2015, 0x10028fc, U+28fc, KEY_braille_dots_345678, BRAILLE PATTERN DOTS-345678 */
	0x0000,
	0xa83f, /* 1762, 0xfffa, KEY_braille_dot_10 */
	0x0000,
	0x0000,
	0x0000,
	0xa03a, /* 1677, 0x1001edd, U+1edd, KEY_ohorngrave, LATIN SMALL LETTER O WITH HORN AND GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0xc64f, /* 2011, 0x10028f8, U+28f8, KEY_braille_dots_45678, BRAILLE PATTERN DOTS-45678 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6206, /* 1067, 0x8a6, KEY_vertconnector, (U+2502 BOX DRAWINGS LIGHT VERTICAL) */
	0x0000,
	0x0000,
	0x3b3f, /*  683, 0x1001ef3, U+1ef3, KEY_ygrave, LATIN SMALL LETTER Y WITH GRAVE */
	0x0000,
	0x0000,
	0xde4b, /* 2259, 0x1008ffb3, KEY_XF86Keyboard, User defined keyboard related action */
	0x0000,
	0xc881, /* 2033, 0x1000d91, U+0d91, KEY_Sinh_e, SINHALA EYANNA */
	0x0000,
	0x0000,
	0x4a3e, /*  844, 0x10006cc, U+06cc, KEY_Arabic_farsi_yeh, ARABIC LETTER FARSI YEH */
	0xa605, /* 1739, 0x1002205, U+2205, KEY_emptyset, NULL SET */
	0x0000,
	0x0000,
	0x0000,
	0x5bb9, /* 1004, 0x7b6, U+0390, KEY_Greek_iotaaccentdieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
	0x6ada, /* 1159, 0xabd, KEY_decimalpoint, (U+002E FULL STOP) */
	0x6dbf, /* 1186, 0xade, KEY_emfilledcircle, (U+25CF BLACK CIRCLE) */
	0x38dc, /*  656, 0x3fd, U+0169, KEY_utilde, LATIN SMALL LETTER U WITH TILDE */
	0x0000,
	0x0000,
	0x9218, /* 1535, 0x100057b, U+057b, KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */
	0x7211, /* 1230, 0xbce, U+22a5, KEY_uptack, UP TACK */
	0xddb9, /* 2254, 0x1008ffa8, KEY_XF86Hibernate, Sleep to disk */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd92d, /* 2208, 0x1008ff79, KEY_XF86ScrollDown, Scrool window/contentd down */
	0x0000,
	0xce23, /* 2099, 0x1008ff01, KEY_XF86ModeLock, Mode Switch Lock */
	0x0000,
	0x38c7, /*  655, 0x3f9, U+0173, KEY_uogonek, LATIN SMALL LETTER U WITH OGONEK */
	0xe4ab, /* 2320, 0x1000fe22, KEY_Ddiaeresis */
	0x3a21, /*  670, 0x1001e56, U+1e56, KEY_Pabovedot, LATIN CAPITAL LETTER P WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6654, /* 1108, 0x8fc, U+2191, KEY_uparrow, UPWARDS ARROW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x45aa, /*  799, 0x5cc, U+062c, KEY_Arabic_jeem, ARABIC LETTER JEEM */
	0x634e, /* 1078, 0x8b1, KEY_topleftsummation */
	0x0000,
	0x0000,
	0x6d48, /* 1182, 0xada, KEY_hexagram */
	0x0000,
	0x0000,
	0x0000,
	0xd033, /* 2117, 0x1008ff1b, KEY_XF86Search, Search */
	0x0000,
	0x0000,
	0x0000,
	0x68dc, /* 1137, 0xaa3, U+2004, KEY_em3space, THREE-PER-EM SPACE */
	0x0000,
	0x58e5, /*  980, 0x6f9, U+042b, KEY_Cyrillic_YERU, CYRILLIC CAPITAL LETTER YERU */
	0x198b, /*  280, 0xfee0, KEY_Pointer_Left */
	0x355d, /*  614, 0x2dd, U+016c, KEY_Ubreve, LATIN CAPITAL LETTER U WITH BREVE */
	0xd949, /* 2209, 0x1008ff7a, KEY_XF86ScrollClick, Use XKB mousekeys instead */
	0x0000,
	0x19d8, /*  283, 0xfee3, KEY_Pointer_Down */
	0x764d, /* 1273, 0xcf8, U+05e8, KEY_hebrew_resh, HEBREW LETTER RESH */
	0x0000,
	0x18b1, /*  273, 0xfe74, KEY_BounceKeys_Enable */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7c75, /* 1335, 0xdda, U+0e3a, KEY_Thai_phinthu, THAI CHARACTER PHINTHU */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8405, /* 1404, 0xebb, KEY_Hangul_Khieuq */
	0x0000,
	0xe5d1, /* 2332, 0x1000ff6d, KEY_hpSystem */
	0x8b5a, /* 1470, 0x1000589, U+0589, KEY_Armenian_full_stop, ARMENIAN FULL STOP */
	0x0000,
	0x0000,
	0x44a8, /*  790, 0x5c3, U+0623, KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */
	0x9e6e, /* 1660, 0x1001ecc, U+1ecc, KEY_Obelowdot, LATIN CAPITAL LETTER O WITH DOT BELOW */
	0x0000,
	0x0000,
	0x671f, /* 1118, 0x9e8, U+2424, KEY_nl, SYMBOL FOR NEWLINE */
	0x0000,
	0x0000,
	0x0000,
	0x2157, /*  357, 0x2a, U+002a, KEY_asterisk, ASTERISK */
	0x2a61, /*  482, 0xc7, U+00c7, KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */
	0x489e, /*  829, 0x5ee, U+064e, KEY_Arabic_fatha, ARABIC FATHA */
	0x0000,
	0x4041, /*  742, 0x4d2, U+30e1, KEY_kana_ME, KATAKANA LETTER ME */
	0x71ad, /* 1225, 0xbc3, KEY_upshoe, (U+2229 INTERSECTION) */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4700, /*  813, 0x5da, U+063a, KEY_Arabic_ghain, ARABIC LETTER GHAIN */
	0x1cbe, /*  308, 0xfefb, KEY_Pointer_DfltBtnNext */
	0x48b8, /*  830, 0x5ef, U+064f, KEY_Arabic_damma, ARABIC DAMMA */
	0x4017, /*  740, 0x4d0, U+30df, KEY_kana_MI, KATAKANA LETTER MI */
	0x4864, /*  827, 0x5ec, U+064c, KEY_Arabic_dammatan, ARABIC DAMMATAN */
	0x0000,
	0x0000,
	0x24bc, /*  409, 0x5e, U+005e, KEY_asciicircum, CIRCUMFLEX ACCENT */
	0x0000,
	0x3fc3, /*  736, 0x4cc, KEY_kana_HU, deprecated */
	0x1bf7, /*  301, 0xfef5, KEY_Pointer_Drag1 */
	0x1c12, /*  302, 0xfef6, KEY_Pointer_Drag2 */
	0x1c2d, /*  303, 0xfef7, KEY_Pointer_Drag3 */
	0x1c48, /*  304, 0xfef8, KEY_Pointer_Drag4 */
	0x1c63, /*  305, 0xfefd, KEY_Pointer_Drag5 */
	0x0000,
	0x2bb4, /*  498, 0xd6, U+00d6, KEY_Odiaeresis, LATIN CAPITAL LETTER O WITH DIAERESIS */
	0x0000,
	0x3a0a, /*  669, 0x1001e41, U+1e41, KEY_mabovedot, LATIN SMALL LETTER M WITH DOT ABOVE */
	0xd88e, /* 2202, 0x1008ff73, KEY_XF86Reload, Reload web page, file, etc. */
	0x11a8, /*  208, 0xfe31, KEY_ISO_Discontinuous_Underline */
	0x40e9, /*  750, 0x4da, U+30ec, KEY_kana_RE, KATAKANA LETTER RE */
	0x0000,
	0xcd96, /* 2093, 0x1000ddd, U+0ddd, KEY_Sinh_oo2, SINHALA KOMBUVA HAA DIGA AELA-PILLA */
	0x0000,
	0x0000,
	0xdccb, /* 2244, 0x1008ff9e, KEY_XF86FrameForward, video: go one frame forward */
	0x3f6f, /*  732, 0x4c9, U+30ce, KEY_kana_NO, KATAKANA LETTER NO */
	0x0000,
	0x22c6, /*  378, 0x3f, U+003f, KEY_question, QUESTION MARK */
	0xe62f, /* 2336, 0x100000aa, KEY_hpmute_asciicircum */
	0x0000,
	0x0000,
	0x1cdf, /*  309, 0xfefc, KEY_Pointer_DfltBtnPrev */
	0x0fba, /*  194, 0xfe23, KEY_ISO_Partial_Line_Up */
	0x431b, /*  774, 0x5ac, U+060c, KEY_Arabic_comma, ARABIC COMMA */
	0x0000,
	0x9fb0, /* 1672, 0x1001ed8, U+1ed8, KEY_Ocircumflexbelowdot, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x1379, /*  225, 0xfe5c, KEY_dead_ogonek */
	0xa296, /* 1703, 0x1001ef9, U+1ef9, KEY_ytilde, LATIN SMALL LETTER Y WITH TILDE */
	0x786a, /* 1294, 0xdb1, U+0e11, KEY_Thai_thonangmontho, THAI CHARACTER THO NANGMONTHO */
	0x0000,
	0xdcff, /* 2246, 0x1008ffa0, KEY_XF86Select, Select button on joypads and remotes */
	0x2923, /*  468, 0xb9, U+00b9, KEY_onesuperior, SUPERSCRIPT ONE */
	0x0000,
	0x0000,
	0x0000,
	0x375b, /*  638, 0x3c0, U+0100, KEY_Amacron, LATIN CAPITAL LETTER A WITH MACRON */
	0x0000,
	0x15d1, /*  246, 0xfe6f, KEY_dead_currency */
	0x0000,
	0x1dcc, /*  320, 0xfd05, KEY_3270_BackTab */
	0xa876, /* 1764, 0x1002801, U+2801, KEY_braille_dots_1, BRAILLE PATTERN DOTS-1 */
	0x49b1, /*  839, 0x10006a9, U+06a9, KEY_Arabic_keheh, ARABIC LETTER KEHEH */
	0xa8cb, /* 1767, 0x1002804, U+2804, KEY_braille_dots_3, BRAILLE PATTERN DOTS-3 */
	0xa93f, /* 1771, 0x1002808, U+2808, KEY_braille_dots_4, BRAILLE PATTERN DOTS-4 */
	0xaa2b, /* 1779, 0x1002810, U+2810, KEY_braille_dots_5, BRAILLE PATTERN DOTS-5 */
	0x3393, /*  594, 0x1f5, U+0151, KEY_odoubleacute, LATIN SMALL LETTER O WITH DOUBLE ACUTE */
	0xafdb, /* 1827, 0x1002840, U+2840, KEY_braille_dots_7, BRAILLE PATTERN DOTS-7 */
	0xb79b, /* 1891, 0x1002880, U+2880, KEY_braille_dots_8, BRAILLE PATTERN DOTS-8 */
	0x0000,
	0xa5e7, /* 1738, 0x1002202, U+2202, KEY_partdifferential, PARTIAL DIFFERENTIAL */
	0x9b2e, /* 1628, 0x1001eac, U+1eac, KEY_Acircumflexbelowdot, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd09a, /* 2121, 0x1008ff1f, KEY_XF86ToDoList, Invoke To Do List program */
	0x9b89, /* 1631, 0x1001eaf, U+1eaf, KEY_abreveacute, LATIN SMALL LETTER A WITH BREVE AND ACUTE */
	0xeaf0, /* 2387, 0x1000ff6e, KEY_User */
	0x0000,
	0x0000,
	0x3e47, /*  718, 0x4bd, U+30b9, KEY_kana_SU, KATAKANA LETTER SU */
	0x0000,
	0x0ee6, /*  187, 0xfe0c, KEY_ISO_First_Group */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd7a8, /* 2192, 0x1008ff67, KEY_XF86MySites, Favourites */
	0xe126, /* 2285, 0x1005ff03, KEY_SunFA_Acute */
	0x48d2, /*  831, 0x5f0, U+0650, KEY_Arabic_kasra, ARABIC KASRA */
	0x0000,
	0x0000,
	0x20f8, /*  353, 0x27, U+0027, KEY_apostrophe, APOSTROPHE */
	0x0000,
	0x10fb, /*  203, 0xfe2c, KEY_ISO_Fast_Cursor_Left */
	0xd1d4, /* 2133, 0x1008ff2b, KEY_XF86WakeUp, Wake up system from sleep */
	0xe87b, /* 2360, 0x1004ff45, KEY_osfMenuBar */
	0x0000,
	0x1160, /*  206, 0xfe2f, KEY_ISO_Fast_Cursor_Down */
	0xa36a, /* 1713, 0x10020a5, U+20a5, KEY_MillSign, MILL SIGN */
	0xa3db, /* 1718, 0x10020aa, U+20aa, KEY_NewSheqelSign, NEW SHEQEL SIGN */
	0xccd4, /* 2084, 0x1000dd2, U+0dd2, KEY_Sinh_i2, SINHALA IS-PILLA */
	0x4796, /*  819, 0x5e5, U+0645, KEY_Arabic_meem, ARABIC LETTER MEEM */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6416, /* 1084, 0x8b7, KEY_rightmiddlesummation */
	0xdda0, /* 2253, 0x1008ffa7, KEY_XF86Suspend, Sleep to RAM */
	0x0000,
	0x0000,
	0xd7ec, /* 2195, 0x1008ff6a, KEY_XF86OfficeHome, Office home (old Staroffice) */
	0x0000,
	0x0000,
	0x8068, /* 1373, 0xff3c, KEY_Hangul_SingleCandidate, Single candidate */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd0ce, /* 2123, 0x1008ff21, KEY_XF86PowerDown, Deep sleep the system */
	0x0000,
	0x0000,
	0xe0da, /* 2282, 0x1005ff00, KEY_SunFA_Grave */
	0x0000,
	0x0000,
	0x0000,
	0xa2f6, /* 1708, 0x10020a0, U+20a0, KEY_EcuSign, EURO-CURRENCY SIGN */
	0x6d9d, /* 1185, 0xadd, KEY_filledrighttribullet, (U+25B6 BLACK RIGHT-POINTING TRIANGLE) */
	0xd5b2, /* 2171, 0x1008ff51, KEY_XF86ApplicationRight, switch to application, right */
	0xe6fc, /* 2344, 0x100000fc, KEY_hpblock */
	0x0000,
	0x9df9, /* 1655, 0x1001ec7, U+1ec7, KEY_ecircumflexbelowdot, LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x0000,
	0x2739, /*  446, 0xa3, U+00a3, KEY_sterling, POUND SIGN */
	0x79ef, /* 1309, 0xdc0, U+0e20, KEY_Thai_phosamphao, THAI CHARACTER PHO SAMPHAO */
	0x0000,
	0x0000,
	0xa544, /* 1732, 0x1002084, U+2084, KEY_foursubscript, SUBSCRIPT FOUR */
	0x0000,
	0xd591, /* 2170, 0x1008ff50, KEY_XF86ApplicationLeft, switch to application, left */
	0x0000,
	0x0000,
	0x0000,
	0x8868, /* 1446, 0xee5, KEY_Hangul_J_PieubSios */
	0xe7ff, /* 2355, 0x1004ff40, KEY_osfPageLeft */
	0x0000,
	0x0000,
	0x3969, /*  662, 0x1001e02, U+1e02, KEY_Babovedot, LATIN CAPITAL LETTER B WITH DOT ABOVE */
	0xe82f, /* 2357, 0x1004ff42, KEY_osfPageDown */
	0xe50b, /* 2324, 0x1000ff71, KEY_hpDeleteLine */
	0x0000,
	0x0000,
	0x93b6, /* 1551, 0x1000583, U+0583, KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */
	0x0000,
	0x66ab, /* 1112, 0x9e0, U+25c6, KEY_soliddiamond, BLACK DIAMOND */
	0xa1b1, /* 1693, 0x1001eed, U+1eed, KEY_uhornhook, LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
	0x0000,
	0xa5b0, /* 1736, 0x1002088, U+2088, KEY_eightsubscript, SUBSCRIPT EIGHT */
	0xe64f, /* 2337, 0x100000ab, KEY_hpmute_diaeresis */
	0x6cb4, /* 1176, 0xad3, U+201d, KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */
	0x0000,
	0x99d5, /* 1615, 0x1001e37, U+1e37, KEY_lbelowdot, LATIN SMALL LETTER L WITH DOT BELOW */
	0x06e3, /*   82, 0xffaa, KEY_KP_Multiply */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xccbd, /* 2083, 0x1000dd1, U+0dd1, KEY_Sinh_aee2, SINHALA DIGA AEDA-PILLA */
	0xca5b, /* 2055, 0x1000daa, U+0daa, KEY_Sinh_ddha, SINHALA MAHA. DDAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x704f, /* 1211, 0xaf8, U+2640, KEY_femalesymbol, FEMALE SIGN */
	0x1ebd, /*  330, 0xfd0f, KEY_3270_CursorBlink */
	0x0000,
	0x0000,
	0x0000,
	0x7239, /* 1232, 0xbd3, U+2308, KEY_upstile, LEFT CEILING */
	0x0000,
	0x0000,
	0x463c, /*  805, 0x5d2, U+0632, KEY_Arabic_zain, ARABIC LETTER ZAIN */
	0x2953, /*  470, 0xbb, U+00bb, KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x52e1, /*  920, 0x6be, U+040e, KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */
	0x0000,
	0x0000,
	0x0000,
	0xca72, /* 2056, 0x1000dab, U+0dab, KEY_Sinh_nna, SINHALA MUURDHAJA NAYANNA */
	0x0000,
	0x0000,
	0x788a, /* 1295, 0xdb2, U+0e12, KEY_Thai_thophuthao, THAI CHARACTER THO PHUTHAO */
	0xe6e3, /* 2343, 0x100000f6, KEY_hplongminus */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x208a, /*  348, 0x22, U+0022, KEY_quotedbl, QUOTATION MARK */
	0x0000,
	0x0000,
	0x466e, /*  807, 0x5d4, U+0634, KEY_Arabic_sheen, ARABIC LETTER SHEEN */
	0x0000,
	0x4e1a, /*  874, 0x10004e8, U+04e8, KEY_Cyrillic_O_bar, CYRILLIC CAPITAL LETTER BARRED O */
	0x0000,
	0x0000,
	0x0000,
	0x4a5c, /*  845, 0x10006d2, U+06d2, KEY_Arabic_yeh_baree, ARABIC LETTER YEH BARREE */
	0x0000,
	0x0000,
	0xa4bf, /* 1727, 0x1002079, U+2079, KEY_ninesuperior, SUPERSCRIPT NINE */
	0x0000,
	0x0000,
	0xa64c, /* 1742, 0x100220b, U+220b, KEY_containsas, CONTAINS AS MEMBER */
	0x8ad6, /* 1466, 0xef9, KEY_Hangul_J_KkogjiDalrinIeung */
	0xd068, /* 2119, 0x1008ff1d, KEY_XF86Calculator, Invoke calculator program */
	0x0000,
	0xe21c, /* 2295, 0xff56, KEY_SunPageDown, Same as XK_Next */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x80f4, /* 1377, 0xff7e, KEY_Hangul_switch, Alias for mode_switch */
	0x0000,
	0xdd8a, /* 2252, 0x1008ffa6, KEY_XF86Blue, Blue button */
	0x24d5, /*  410, 0x5f, U+005f, KEY_underscore, LOW LINE */
	0x6edf, /* 1196, 0xae8, KEY_filledtribulletup, (U+25B2 BLACK UP-POINTING TRIANGLE) */
	0xc895, /* 2034, 0x1000d92, U+0d92, KEY_Sinh_ee, SINHALA EEYANNA */
	0x34e4, /*  609, 0x2bc, U+0135, KEY_jcircumflex, LATIN SMALL LETTER J WITH CIRCUMFLEX */
	0x6bfa, /* 1170, 0xacd, KEY_rightopentriangle, (U+25B7 WHITE RIGHT-POINTING TRIANGLE) */
	0x4bc4, /*  856, 0x10004a2, U+04a2, KEY_Cyrillic_EN_descender, CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
	0x0000,
	0x0000,
	0x8274, /* 1390, 0xead, KEY_Hangul_RieulSios */
	0x0000,
	0x29b7, /*  474, 0xbf, U+00bf, KEY_questiondown, INVERTED QUESTION MARK */
	0x0000,
	0x7782, /* 1285, 0xda8, U+0e08, KEY_Thai_chochan, THAI CHARACTER CHO CHAN */
	0xea34, /* 2379, 0x1004ff71, KEY_osfSelectAll */
	0x0000,
	0x0000,
	0xac0b, /* 1795, 0x1002820, U+2820, KEY_braille_dots_6, BRAILLE PATTERN DOTS-6 */
	0x0000,
	0xebbe, /* 2396, 0x1000ff77, KEY_Ext16bit_R */
	0x9c85, /* 1641, 0x1001eb9, U+1eb9, KEY_ebelowdot, LATIN SMALL LETTER E WITH DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa40c, /* 1720, 0x20ac, U+20ac, KEY_EuroSign, EURO SIGN */
	0xd283, /* 2140, 0x1008ff32, KEY_XF86AudioMedia, Launch media collection app */
	0x0000,
	0x0000,
	0x418b, /*  757, 0x10006f0, U+06f0, KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */
	0x19a5, /*  281, 0xfee1, KEY_Pointer_Right */
	0x41b5, /*  759, 0x10006f2, U+06f2, KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */
	0x41ca, /*  760, 0x10006f3, U+06f3, KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */
	0x41df, /*  761, 0x10006f4, U+06f4, KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */
	0x41f4, /*  762, 0x10006f5, U+06f5, KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */
	0x4209, /*  763, 0x10006f6, U+06f6, KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */
	0x421e, /*  764, 0x10006f7, U+06f7, KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */
	0x4233, /*  765, 0x10006f8, U+06f8, KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */
	0x4248, /*  766, 0x10006f9, U+06f9, KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */
	0xe10d, /* 2284, 0x1005ff02, KEY_SunFA_Tilde */
	0x2f75, /*  543, 0x1a1, U+0104, KEY_Aogonek, LATIN CAPITAL LETTER A WITH OGONEK */
	0x0000,
	0x34fd, /*  610, 0x2c5, U+010a, KEY_Cabovedot, LATIN CAPITAL LETTER C WITH DOT ABOVE */
	0x636c, /* 1079, 0x8b2, KEY_botleftsummation */
	0x0000,
	0xdd17, /* 2247, 0x1008ffa1, KEY_XF86View, Show a view options/properties */
	0x0000,
	0x0000,
	0xcfd1, /* 2113, 0x1008ff17, KEY_XF86AudioNext, Next track */
	0xc9bf, /* 2048, 0x1000da3, U+0da3, KEY_Sinh_jha, SINHALA MAHA. JAYANNA */
	0xd6d3, /* 2183, 0x1008ff5d, KEY_XF86Explorer, Launch file explorer */
	0x0000,
	0x88fb, /* 1451, 0xeea, KEY_Hangul_J_Cieuc */
	0x0000,
	0x2d9a, /*  521, 0xeb, U+00eb, KEY_ediaeresis, LATIN SMALL LETTER E WITH DIAERESIS */
	0xa8e7, /* 1768, 0x1002805, U+2805, KEY_braille_dots_13, BRAILLE PATTERN DOTS-13 */
	0x4155, /*  755, 0x4df, U+309c, KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
	0x64f4, /* 1093, 0x8c8, U+223c, KEY_approximate, TILDE OPERATOR */
	0xa978, /* 1773, 0x100280a, U+280a, KEY_braille_dots_24, BRAILLE PATTERN DOTS-24 */
	0xaa64, /* 1781, 0x1002812, U+2812, KEY_braille_dots_25, BRAILLE PATTERN DOTS-25 */
	0xa9b3, /* 1775, 0x100280c, U+280c, KEY_braille_dots_34, BRAILLE PATTERN DOTS-34 */
	0xaa9f, /* 1783, 0x1002814, U+2814, KEY_braille_dots_35, BRAILLE PATTERN DOTS-35 */
	0x2b87, /*  496, 0xd4, U+00d4, KEY_Ocircumflex, LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
	0xab17, /* 1787, 0x1002818, U+2818, KEY_braille_dots_45, BRAILLE PATTERN DOTS-45 */
	0xacf7, /* 1803, 0x1002828, U+2828, KEY_braille_dots_46, BRAILLE PATTERN DOTS-46 */
	0x5b7b, /* 1002, 0x7b4, U+03af, KEY_Greek_iotaaccent, GREEK SMALL LETTER IOTA WITH TONOS */
	0xadeb, /* 1811, 0x1002830, U+2830, KEY_braille_dots_56, BRAILLE PATTERN DOTS-56 */
	0xb1bb, /* 1843, 0x1002850, U+2850, KEY_braille_dots_57, BRAILLE PATTERN DOTS-57 */
	0xb97b, /* 1907, 0x1002890, U+2890, KEY_braille_dots_58, BRAILLE PATTERN DOTS-58 */
	0xb3ab, /* 1859, 0x1002860, U+2860, KEY_braille_dots_67, BRAILLE PATTERN DOTS-67 */
	0xbb6b, /* 1923, 0x10028a0, U+28a0, KEY_braille_dots_68, BRAILLE PATTERN DOTS-68 */
	0x6af4, /* 1160, 0xabe, KEY_rightanglebracket, (U+27E9 MATHEMATICAL RIGHT ANGLE BRACKET) */
	0xbf5b, /* 1955, 0x10028c0, U+28c0, KEY_braille_dots_78, BRAILLE PATTERN DOTS-78 */
	0xcc27, /* 2076, 0x1000dc3, U+0dc3, KEY_Sinh_sa, SINHALA DANTAJA SAYANNA */
	0x0000,
	0x5765, /*  965, 0x6ea, U+0419, KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */
	0x0000,
	0x0000,
	0x0000,
	0x367b, /*  627, 0x3aa, U+0112, KEY_Emacron, LATIN CAPITAL LETTER E WITH MACRON */
	0x0000,
	0x0000,
	0x4cdc, /*  864, 0x10004b6, U+04b6, KEY_Cyrillic_CHE_descender, CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
	0x0000,
	0xe326, /* 2307, 0x1005ff77, KEY_SunAudioLowerVolume */
	0x0000,
	0xe15c, /* 2287, 0x1005ff05, KEY_SunFA_Cedilla */
	0xe7e4, /* 2354, 0x1004ff33, KEY_osfQuickPaste */
	0x0000,
	0x0000,
	0x023a, /*   25, 0xff29, KEY_Hankaku, to Hankaku */
	0xc856, /* 2031, 0x1000d8f, U+0d8f, KEY_Sinh_lu, SINHALA ILUYANNA */
	0x0000,
	0xdc73, /* 2241, 0x1008ff9b, KEY_XF86AudioCycleTrack, cycle through audio tracks */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x5b5e, /* 1001, 0x7b3, U+03ae, KEY_Greek_etaaccent, GREEK SMALL LETTER ETA WITH TONOS */
	0x0000,
	0x0000,
	0x0000,
	0xe3c4, /* 2312, 0x1005ff7c, KEY_SunVideoRaiseBrightness */
	0x0000,
	0x0000,
	0xe782, /* 2350, 0x1004ff0b, KEY_osfClear */
	0x0000,
	0x0000,
	0x66c5, /* 1113, 0x9e1, U+2592, KEY_checkerboard, MEDIUM SHADE */
	0x0000,
	0x446e, /*  788, 0x5c1, U+0621, KEY_Arabic_hamza, ARABIC LETTER HAMZA */
	0x0000,
	0x15ec, /*  247, 0xfe90, KEY_dead_lowline */
	0x0000,
	0x3cc9, /*  700, 0x4ac, U+30e3, KEY_kana_ya, KATAKANA LETTER SMALL YA */
	0x9d7f, /* 1651, 0x1001ec3, U+1ec3, KEY_ecircumflexhook, LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0be5, /*  156, 0xffe0, KEY_F35 */
	0x0000,
	0xdc94, /* 2242, 0x1008ff9c, KEY_XF86CycleAngle, cycle through angles */
	0xcec1, /* 2104, 0x1008ff06, KEY_XF86KbdBrightnessDown, Keyboards may be lit */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xb3c8, /* 1860, 0x1002861, U+2861, KEY_braille_dots_167, BRAILLE PATTERN DOTS-167 */
	0x1c9e, /*  307, 0xfefa, KEY_Pointer_Accelerate */
	0x0000,
	0x0000,
	0x1bd8, /*  300, 0xfef4, KEY_Pointer_Drag_Dflt */
	0xd267, /* 2139, 0x1008ff31, KEY_XF86AudioPause, Pause audio playing */
	0x4907, /*  833, 0x5f2, U+0652, KEY_Arabic_sukun, ARABIC SUKUN */
	0x0000,
	0x896d, /* 1455, 0xeee, KEY_Hangul_J_Hieuh */
	0x7ec8, /* 1357, 0xdf5, U+0e55, KEY_Thai_lekha, THAI DIGIT FIVE */
	0x0000,
	0x9cea, /* 1646, 0x1001ebe, U+1ebe, KEY_Ecircumflexacute, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0xa152, /* 1689, 0x1001ee9, U+1ee9, KEY_uhornacute, LATIN SMALL LETTER U WITH HORN AND ACUTE */
	0x26dd, /*  442, 0x7e, U+007e, KEY_asciitilde, TILDE */
	0x9f57, /* 1669, 0x1001ed5, U+1ed5, KEY_ocircumflexhook, LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe9b0, /* 2373, 0x1004ff60, KEY_osfSelect */
	0x0000,
	0x04f3, /*   59, 0xff7e, KEY_script_switch, Alias for mode_switch */
	0x625d, /* 1070, 0x8a9, U+23a4, KEY_toprightsqbracket, RIGHT SQUARE BRACKET UPPER CORNER */
	0x0000,
	0xa22e, /* 1698, 0x1001ef4, U+1ef4, KEY_Ybelowdot, LATIN CAPITAL LETTER Y WITH DOT BELOW */
	0x6e33, /* 1190, 0xae2, KEY_openrectbullet, (U+25AD WHITE RECTANGLE) */
	0x0000,
	0x0000,
	0x0000,
	0xa4d9, /* 1728, 0x1002080, U+2080, KEY_zerosubscript, SUBSCRIPT ZERO */
	0x0000,
	0xe7c7, /* 2353, 0x1004ff32, KEY_osfPrimaryPaste */
	0x0000,
	0x0000,
	0xe5bc, /* 2331, 0x1000ff6c, KEY_hpReset */
	0x0000,
	0x7127, /* 1219, 0xba3, KEY_leftcaret, (U+003C LESS-THAN SIGN) */
	0x0000,
	0x0000,
	0x35a1, /*  617, 0x2e6, U+0109, KEY_ccircumflex, LATIN SMALL LETTER C WITH CIRCUMFLEX */
	0xda44, /* 2219, 0x1008ff85, KEY_XF86User1KB, ?? */
	0x4c96, /*  862, 0x10004b2, U+04b2, KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
	0x88df, /* 1450, 0xee9, KEY_Hangul_J_Jieuj */
	0x0000,
	0xd321, /* 2146, 0x1008ff38, KEY_XF86OpenURL, Open selected URL */
	0x61ed, /* 1066, 0x8a5, U+2321, KEY_botintegral, BOTTOM HALF INTEGRAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x1573, /*  243, 0xfe6c, KEY_dead_belowdiaeresis */
	0xca2e, /* 2053, 0x1000da8, U+0da8, KEY_Sinh_ttha, SINHALA MAHA. TTAYANNA */
	0x0000,
	0x531d, /*  922, 0x6bf, KEY_Serbian_DZE, deprecated */
	0x0000,
	0x0000,
	0xa892, /* 1765, 0x1002802, U+2802, KEY_braille_dots_2, BRAILLE PATTERN DOTS-2 */
	0x68f2, /* 1138, 0xaa4, U+2005, KEY_em4space, FOUR-PER-EM SPACE */
	0x7b2b, /* 1322, 0xdcd, U+0e2d, KEY_Thai_oang, THAI CHARACTER O ANG */
	0xde65, /* 2260, 0x1008ffb4, KEY_XF86WWAN, Toggle WWAN (LTE, UMTS, etc.) radio */
	0x0000,
	0x0000,
	0x99ec, /* 1616, 0x1001ea0, U+1ea0, KEY_Abelowdot, LATIN CAPITAL LETTER A WITH DOT BELOW */
	0x2d43, /*  517, 0xe7, U+00e7, KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */
	0x0000,
	0x0000,
	0x0f25, /*  189, 0xfe0e, KEY_ISO_Last_Group */
	0x4352, /*  776, 0x1000660, U+0660, KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */
	0x4368, /*  777, 0x1000661, U+0661, KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */
	0x437e, /*  778, 0x1000662, U+0662, KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */
	0x4394, /*  779, 0x1000663, U+0663, KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */
	0x43aa, /*  780, 0x1000664, U+0664, KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */
	0x43c0, /*  781, 0x1000665, U+0665, KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */
	0x43d6, /*  782, 0x1000666, U+0666, KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */
	0x43ec, /*  783, 0x1000667, U+0667, KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */
	0x2fb2, /*  546, 0x1a5, U+013d, KEY_Lcaron, LATIN CAPITAL LETTER L WITH CARON */
	0x4418, /*  785, 0x1000669, U+0669, KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */
	0x0000,
	0x27b9, /*  452, 0xa9, U+00a9, KEY_copyright, COPYRIGHT SIGN */
	0x85df, /* 1424, 0xecf, KEY_Hangul_WI */
	0x0000,
	0xda2c, /* 2218, 0x1008ff84, KEY_XF86UserPB, ?? */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3afb, /*  680, 0x1001e84, U+1e84, KEY_Wdiaeresis, LATIN CAPITAL LETTER W WITH DIAERESIS */
	0x0000,
	0x8830, /* 1444, 0xee3, KEY_Hangul_J_Mieum */
	0x0091, /*    7, 0xff14, KEY_Scroll_Lock */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0115, /*   13, 0xff3c, KEY_SingleCandidate */
	0x0000,
	0x91cd, /* 1532, 0x100054a, U+054a, KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */
	0x0743, /*   86, 0xffae, KEY_KP_Decimal */
	0x4279, /*  768, 0x1000670, U+0670, KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */
	0x7fda, /* 1368, 0xff37, KEY_Hangul_Codeinput, Hangul code input mode */
	0x0000,
	0x3473, /*  604, 0x2ac, U+0134, KEY_Jcircumflex, LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
	0xe58a, /* 2329, 0x1000ff48, KEY_hpModelock1 */
	0x86b1, /* 1432, 0xed7, KEY_Hangul_J_Nieun */
	0x85f6, /* 1425, 0xed0, KEY_Hangul_YU */
	0x0000,
	0x0000,
	0x5e59, /* 1029, 0x7d4, U+03a4, KEY_Greek_TAU, GREEK CAPITAL LETTER TAU */
	0x0000,
	0x5c00, /* 1006, 0x7b8, U+03cd, KEY_Greek_upsilonaccent, GREEK SMALL LETTER UPSILON WITH TONOS */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9199, /* 1530, 0x1000549, U+0549, KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */
	0x0000,
	0x0000,
	0x8cf9, /* 1484, 0x1000532, U+0532, KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */
	0x82d1, /* 1393, 0xeb0, KEY_Hangul_RieulHieuh */
	0xd123, /* 2126, 0x1008ff24, KEY_XF86RockerDown, and down */
	0x9101, /* 1524, 0x1000546, U+0546, KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */
	0xe94a, /* 2369, 0x1004ff5b, KEY_osfPrevMenu */
	0x0000,
	0x505b, /*  896, 0x6ad, U+0491, KEY_Ukrainian_ghe_with_upturn, CYRILLIC SMALL LETTER GHE WITH UPTURN */
	0x8554, /* 1418, 0xec9, KEY_Hangul_WAE */
	0x9a03, /* 1617, 0x1001ea1, U+1ea1, KEY_abelowdot, LATIN SMALL LETTER A WITH DOT BELOW */
	0x0000,
	0x2a26, /*  479, 0xc4, U+00c4, KEY_Adiaeresis, LATIN CAPITAL LETTER A WITH DIAERESIS */
	0x8dc9, /* 1492, 0x1000536, U+0536, KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */
	0x2f05, /*  538, 0xfb, U+00fb, KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */
	0x0000,
	0xd9c9, /* 2214, 0x1008ff7f, KEY_XF86TaskPane, Show tasks */
	0x84b3, /* 1411, 0xec2, KEY_Hangul_YAE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x290e, /*  467, 0xb8, U+00b8, KEY_cedilla, CEDILLA */
	0x3690, /*  628, 0x3ab, U+0122, KEY_Gcedilla, LATIN CAPITAL LETTER G WITH CEDILLA */
	0x814a, /* 1380, 0xea3, KEY_Hangul_KiyeogSios */
	0x8cc5, /* 1482, 0x1000531, U+0531, KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */
	0x85b0, /* 1422, 0xecd, KEY_Hangul_WEO */
	0x8c15, /* 1476, 0x100055c, U+055c, KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */
	0x8d2d, /* 1486, 0x1000533, U+0533, KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */
	0xa182, /* 1691, 0x1001eeb, U+1eeb, KEY_uhorngrave, LATIN SMALL LETTER U WITH HORN AND GRAVE */
	0xa594, /* 1735, 0x1002087, U+2087, KEY_sevensubscript, SUBSCRIPT SEVEN */
	0xd33a, /* 2147, 0x1008ff39, KEY_XF86AddFavorite, Add URL to favorites list */
	0x0000,
	0x0000,
	0x84f8, /* 1414, 0xec5, KEY_Hangul_YEO */
	0x0000,
	0xe963, /* 2370, 0x1004ff5c, KEY_osfNextMenu */
	0x8f95, /* 1510, 0x100053f, U+053f, KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */
	0x8ffb, /* 1514, 0x1000541, U+0541, KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */
	0x17b3, /*  265, 0xfed1, KEY_Prev_Virtual_Screen */
	0x663d, /* 1107, 0x8fb, U+2190, KEY_leftarrow, LEFTWARDS ARROW */
	0x7156, /* 1221, 0xba8, KEY_downcaret, (U+2228 LOGICAL OR) */
	0x8ec3, /* 1502, 0x100053b, U+053b, KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */
	0x0000,
	0x31ca, /*  572, 0x1ca, U+0118, KEY_Eogonek, LATIN CAPITAL LETTER E WITH OGONEK */
	0x909b, /* 1520, 0x1000544, U+0544, KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */
	0x3997, /*  664, 0x1001e0a, U+1e0a, KEY_Dabovedot, LATIN CAPITAL LETTER D WITH DOT ABOVE */
	0xb82c, /* 1896, 0x1002885, U+2885, KEY_braille_dots_138, BRAILLE PATTERN DOTS-138 */
	0x6e13, /* 1189, 0xae1, KEY_enopensquarebullet, (U+25AB WHITE SMALL SQUARE) */
	0x872c, /* 1436, 0xedb, KEY_Hangul_J_Rieul */
	0x111d, /*  204, 0xfe2d, KEY_ISO_Fast_Cursor_Right */
	0x3244, /*  578, 0x1d5, U+0150, KEY_Odoubleacute, LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
	0x0000,
	0x1482, /*  235, 0xfe65, KEY_dead_abovereversedcomma */
	0x0000,
	0x0000,
	0x0000,
	0x7f74, /* 1364, 0xff33, KEY_Hangul_End, Hangul end, English start */
	0x0000,
	0xce3d, /* 2100, 0x1008ff02, KEY_XF86MonBrightnessUp, Monitor/panel brightness */
	0xdd72, /* 2251, 0x1008ffa5, KEY_XF86Yellow, Yellow button */
	0x0000,
	0x9133, /* 1526, 0x1000547, U+0547, KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */
	0x0000,
	0x0000,
	0xce81, /* 2102, 0x1008ff04, KEY_XF86KbdLightOnOff, Keyboards may be lit */
	0x0000,
	0xb998, /* 1908, 0x1002891, U+2891, KEY_braille_dots_158, BRAILLE PATTERN DOTS-158 */
	0x0000,
	0x0000,
	0x5f33, /* 1038, 0x7e4, U+03b4, KEY_Greek_delta, GREEK SMALL LETTER DELTA */
	0x0000,
	0xa00a, /* 1675, 0x1001edb, U+1edb, KEY_ohornacute, LATIN SMALL LETTER O WITH HORN AND ACUTE */
	0xe4d8, /* 2322, 0x1000ff6f, KEY_hpClearLine */
	0x321c, /*  576, 0x1d1, U+0143, KEY_Nacute, LATIN CAPITAL LETTER N WITH ACUTE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd61a, /* 2175, 0x1008ff55, KEY_XF86Clear, Clear window, screen */
	0x0000,
	0x0000,
	0xd648, /* 2177, 0x1008ff57, KEY_XF86Copy, Copy selection */
	0x379c, /*  641, 0x3cf, U+012a, KEY_Imacron, LATIN CAPITAL LETTER I WITH MACRON */
	0x0000,
	0x0000,
	0x0000,
	0x48ec, /*  832, 0x5f1, U+0651, KEY_Arabic_shadda, ARABIC SHADDA */
	0x8f61, /* 1508, 0x100053e, U+053e, KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */
	0x282d, /*  457, 0xae, U+00ae, KEY_registered, REGISTERED SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8e8f, /* 1500, 0x100053a, U+053a, KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */
	0xa57a, /* 1734, 0x1002086, U+2086, KEY_sixsubscript, SUBSCRIPT SIX */
	0xeb61, /* 2392, 0x1000ff73, KEY_DeleteChar */
	0x8ef7, /* 1504, 0x100053c, U+053c, KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */
	0x9e40, /* 1658, 0x1001eca, U+1eca, KEY_Ibelowdot, LATIN CAPITAL LETTER I WITH DOT BELOW */
	0x0000,
	0x0000,
	0x698e, /* 1145, 0xaac, KEY_signifblank, (U+2423 OPEN BOX) */
	0x9331, /* 1546, 0x1000551, U+0551, KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd3e4, /* 2153, 0x1008ff3f, KEY_XF86BackForward, ??? */
	0x0000,
	0x0000,
	0x0000,
	0x8d7a, /* 1489, 0x1000564, U+0564, KEY_Armenian_da, ARMENIAN SMALL LETTER DA */
	0xd913, /* 2207, 0x1008ff78, KEY_XF86ScrollUp, Scroll window/contents up */
	0x0000,
	0xeba6, /* 2395, 0x1000ff76, KEY_Ext16bit_L */
	0x0000,
	0x072a, /*   85, 0xffad, KEY_KP_Subtract */
	0xde7b, /* 2261, 0x1008ffb5, KEY_XF86RFKill, Toggle radios on/off */
	0x0000,
	0x8255, /* 1389, 0xeac, KEY_Hangul_RieulPieub */
	0x7958, /* 1303, 0xdba, U+0e1a, KEY_Thai_bobaimai, THAI CHARACTER BO BAIMAI */
	0x0000,
	0xbfd3, /* 1959, 0x10028c4, U+28c4, KEY_braille_dots_378, BRAILLE PATTERN DOTS-378 */
	0x144d, /*  233, 0xfe64, KEY_dead_abovecomma */
	0x0000,
	0x9f74, /* 1670, 0x1001ed6, U+1ed6, KEY_Ocircumflextilde, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0xd29f, /* 2141, 0x1008ff33, KEY_XF86MyComputer, Display "My Computer" window */
	0x03a7, /*   42, 0xff55, KEY_Page_Up */
	0x2b11, /*  490, 0xcf, U+00cf, KEY_Idiaeresis, LATIN CAPITAL LETTER I WITH DIAERESIS */
	0x0000,
	0x5734, /*  963, 0x6e8, U+0425, KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */
	0x0000,
	0x0000,
	0x9924, /* 1606, 0x10001b6, U+01b6, KEY_zstroke, LATIN SMALL LETTER Z WITH STROKE */
	0xdef1, /* 2265, 0x1008fe02, KEY_XF86Switch_VT_2 */
	0xdf0e, /* 2266, 0x1008fe03, KEY_XF86Switch_VT_3 */
	0x8e44, /* 1497, 0x1000568, U+0568, KEY_Armenian_at, ARMENIAN SMALL LETTER ET */
	0xdf48, /* 2268, 0x1008fe05, KEY_XF86Switch_VT_5 */
	0x46e8, /*  812, 0x5d9, U+0639, KEY_Arabic_ain, ARABIC LETTER AIN */
	0xdf82, /* 2270, 0x1008fe07, KEY_XF86Switch_VT_7 */
	0xdf9f, /* 2271, 0x1008fe08, KEY_XF86Switch_VT_8 */
	0x632b, /* 1077, 0x8b0, U+23ac, KEY_rightmiddlecurlybrace, RIGHT CURLY BRACKET MIDDLE PIECE */
	0x5782, /*  966, 0x6eb, U+041a, KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */
	0x0000,
	0x7197, /* 1224, 0xbc2, U+22a4, KEY_downtack, DOWN TACK */
	0x3514, /*  611, 0x2c6, U+0108, KEY_Ccircumflex, LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
	0x93ea, /* 1553, 0x1000584, U+0584, KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */
	0x0000,
	0x7ee0, /* 1358, 0xdf6, U+0e56, KEY_Thai_lekhok, THAI DIGIT SIX */
	0x0000,
	0xe848, /* 2358, 0x1004ff43, KEY_osfPageRight */
	0x345f, /*  603, 0x2ab, U+011e, KEY_Gbreve, LATIN CAPITAL LETTER G WITH BREVE */
	0x0000,
	0x0000,
	0x5849, /*  974, 0x6f3, U+0421, KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */
	0x0000,
	0x0000,
	0xe382, /* 2310, 0x1005ff7a, KEY_SunVideoDegauss */
	0x0000,
	0x0000,
	0xa19a, /* 1692, 0x1001eec, U+1eec, KEY_Uhornhook, LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
	0x0000,
	0x5123, /*  903, 0x6b3, U+0401, KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */
	0xd0b4, /* 2122, 0x1008ff20, KEY_XF86Calendar, Invoke Calendar program */
	0x0000,
	0xcb7b, /* 2068, 0x1000db8, U+0db8, KEY_Sinh_ma, SINHALA MAYANNA */
	0x91e6, /* 1533, 0x100057a, U+057a, KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */
	0xa1e0, /* 1695, 0x1001eef, U+1eef, KEY_uhorntilde, LATIN SMALL LETTER U WITH HORN AND TILDE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x59e0, /*  989, 0x7a3, U+0389, KEY_Greek_ETAaccent, GREEK CAPITAL LETTER ETA WITH TONOS */
	0x0000,
	0x0000,
	0xe082, /* 2279, 0x1008fe23, KEY_XF86Prev_VMode, prev. video mode available */
	0x0000,
	0x0000,
	0x0000,
	0x1047, /*  198, 0xfe27, KEY_ISO_Set_Margin_Left */
	0x0000,
	0x0000,
	0xa43c, /* 1722, 0x1002074, U+2074, KEY_foursuperior, SUPERSCRIPT FOUR */
	0x3404, /*  599, 0x1ff, U+02d9, KEY_abovedot, DOT ABOVE */
	0x0000,
	0x0000,
	0x5862, /*  975, 0x6f4, U+0422, KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */
	0x0000,
	0x1606, /*  248, 0xfe91, KEY_dead_aboveverticalline */
	0xdd5b, /* 2250, 0x1008ffa4, KEY_XF86Green, Green button */
	0x50a3, /*  898, 0x6af, U+045f, KEY_Cyrillic_dzhe, CYRILLIC SMALL LETTER DZHE */
	0x0000,
	0x5967, /*  985, 0x6fe, U+0427, KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */
	0x0000,
	0x6790, /* 1123, 0x9ed, U+2514, KEY_lowleftcorner, BOX DRAWINGS LIGHT UP AND RIGHT */
	0xd2bb, /* 2142, 0x1008ff34, KEY_XF86VendorHome, Display vendor home web site */
	0xdf65, /* 2269, 0x1008fe06, KEY_XF86Switch_VT_6 */
	0x0000,
	0x87ac, /* 1440, 0xedf, KEY_Hangul_J_RieulSios */
	0x98e4, /* 1603, 0x100019f, U+019f, KEY_Obarred, LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
	0x8292, /* 1391, 0xeae, KEY_Hangul_RieulTieut */
	0x0000,
	0xa4a4, /* 1726, 0x1002078, U+2078, KEY_eightsuperior, SUPERSCRIPT EIGHT */
	0xa95b, /* 1772, 0x1002809, U+2809, KEY_braille_dots_14, BRAILLE PATTERN DOTS-14 */
	0x59a0, /*  987, 0x7a1, U+0386, KEY_Greek_ALPHAaccent, GREEK CAPITAL LETTER ALPHA WITH TONOS */
	0x0f62, /*  191, 0xfe20, KEY_ISO_Left_Tab */
	0x0000,
	0xac27, /* 1796, 0x1002821, U+2821, KEY_braille_dots_16, BRAILLE PATTERN DOTS-16 */
	0x571a, /*  962, 0x6e7, U+0413, KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */
	0xaff7, /* 1828, 0x1002841, U+2841, KEY_braille_dots_17, BRAILLE PATTERN DOTS-17 */
	0x9180, /* 1529, 0x1000578, U+0578, KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */
	0xac44, /* 1797, 0x1002822, U+2822, KEY_braille_dots_26, BRAILLE PATTERN DOTS-26 */
	0x4d24, /*  866, 0x10004b8, U+04b8, KEY_Cyrillic_CHE_vertstroke, CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
	0x3a4f, /*  672, 0x1001e60, U+1e60, KEY_Sabovedot, LATIN CAPITAL LETTER S WITH DOT ABOVE */
	0x2500, /*  412, 0x60, KEY_quoteleft, deprecated */
	0x675b, /* 1121, 0x9eb, U+2510, KEY_uprightcorner, BOX DRAWINGS LIGHT DOWN AND LEFT */
	0x91b3, /* 1531, 0x1000579, U+0579, KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */
	0xb04f, /* 1831, 0x1002844, U+2844, KEY_braille_dots_37, BRAILLE PATTERN DOTS-37 */
	0x19f2, /*  284, 0xfee4, KEY_Pointer_UpLeft */
	0x17d4, /*  266, 0xfed2, KEY_Next_Virtual_Screen */
	0x0000,
	0xb0c7, /* 1835, 0x1002848, U+2848, KEY_braille_dots_47, BRAILLE PATTERN DOTS-47 */
	0x0000,
	0xb887, /* 1899, 0x1002888, U+2888, KEY_braille_dots_48, BRAILLE PATTERN DOTS-48 */
	0x0000,
	0xe0f3, /* 2283, 0x1005ff01, KEY_SunFA_Circum */
	0x0000,
	0xdeb0, /* 2263, 0x1008ffb7, KEY_XF86RotationLockToggle, Toggle screen rotation lock on/off */
	0x0000,
	0x0000,
	0x0fdb, /*  195, 0xfe24, KEY_ISO_Partial_Line_Down */
	0x4e36, /*  875, 0x10004e9, U+04e9, KEY_Cyrillic_o_bar, CYRILLIC SMALL LETTER BARRED O */
	0x521f, /*  913, 0x6b9, U+0409, KEY_Cyrillic_LJE, CYRILLIC CAPITAL LETTER LJE */
	0x0000,
	0x7b5d, /* 1324, 0xdcf, U+0e2f, KEY_Thai_paiyannoi, THAI CHARACTER PAIYANNOI */
	0x0000,
	0x0000,
	0x0000,
	0x5108, /*  902, 0x6b2, U+0403, KEY_Macedonia_GJE, CYRILLIC CAPITAL LETTER GJE */
	0x0000,
	0x5252, /*  915, 0x6ba, U+040a, KEY_Cyrillic_NJE, CYRILLIC CAPITAL LETTER NJE */
	0x0000,
	0x2c34, /*  504, 0xdb, U+00db, KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
	0x8cdf, /* 1483, 0x1000561, U+0561, KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */
	0x516f, /*  906, 0x6b5, U+0405, KEY_Macedonia_DSE, CYRILLIC CAPITAL LETTER DZE */
	0x0000,
	0x8d47, /* 1487, 0x1000563, U+0563, KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */
	0x779c, /* 1286, 0xda9, U+0e09, KEY_Thai_choching, THAI CHARACTER CHO CHING */
	0x5a7d, /*  994, 0x7a8, U+038e, KEY_Greek_UPSILONaccent, GREEK CAPITAL LETTER UPSILON WITH TONOS */
	0xa921, /* 1770, 0x1002807, U+2807, KEY_braille_dots_123, BRAILLE PATTERN DOTS-123 */
	0x0430, /*   49, 0xff62, KEY_Execute, Execute, run, do */
	0x0c5f, /*  162, 0xffe5, KEY_Caps_Lock, Caps lock */
	0x5919, /*  982, 0x6fb, U+0428, KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */
	0xaabc, /* 1784, 0x1002815, U+2815, KEY_braille_dots_135, BRAILLE PATTERN DOTS-135 */
	0x529f, /*  918, 0x6bc, U+040c, KEY_Macedonia_KJE, CYRILLIC CAPITAL LETTER KJE */
	0x8faf, /* 1511, 0x100056f, U+056f, KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */
	0x9015, /* 1515, 0x1000571, U+0571, KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */
	0x8bbf, /* 1473, 0x100055d, U+055d, KEY_Armenian_but, ARMENIAN COMMA */
	0xacba, /* 1801, 0x1002826, U+2826, KEY_braille_dots_236, BRAILLE PATTERN DOTS-236 */
	0x7f13, /* 1360, 0xdf8, U+0e58, KEY_Thai_lekpaet, THAI DIGIT EIGHT */
	0x8edd, /* 1503, 0x100056b, U+056b, KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */
	0x6ec1, /* 1195, 0xae7, KEY_enfilledsqbullet, (U+25AA BLACK SMALL SQUARE) */
	0xae26, /* 1813, 0x1002832, U+2832, KEY_braille_dots_256, BRAILLE PATTERN DOTS-256 */
	0x90b5, /* 1521, 0x1000574, U+0574, KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */
	0xad6f, /* 1807, 0x100282c, U+282c, KEY_braille_dots_346, BRAILLE PATTERN DOTS-346 */
	0xb13f, /* 1839, 0x100284c, U+284c, KEY_braille_dots_347, BRAILLE PATTERN DOTS-347 */
	0xae63, /* 1815, 0x1002834, U+2834, KEY_braille_dots_356, BRAILLE PATTERN DOTS-356 */
	0xb233, /* 1847, 0x1002854, U+2854, KEY_braille_dots_357, BRAILLE PATTERN DOTS-357 */
	0xb9f3, /* 1911, 0x1002894, U+2894, KEY_braille_dots_358, BRAILLE PATTERN DOTS-358 */
	0xb423, /* 1863, 0x1002864, U+2864, KEY_braille_dots_367, BRAILLE PATTERN DOTS-367 */
	0x81c1, /* 1384, 0xea7, KEY_Hangul_Dikeud */
	0x9b4f, /* 1629, 0x1001ead, U+1ead, KEY_acircumflexbelowdot, LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x35ba, /*  618, 0x2f5, U+0121, KEY_gabovedot, LATIN SMALL LETTER G WITH DOT ABOVE */
	0xb49f, /* 1867, 0x1002868, U+2868, KEY_braille_dots_467, BRAILLE PATTERN DOTS-467 */
	0x9dba, /* 1653, 0x1001ec5, U+1ec5, KEY_ecircumflextilde, LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0x4688, /*  808, 0x5d5, U+0635, KEY_Arabic_sad, ARABIC LETTER SAD */
	0xb59b, /* 1875, 0x1002870, U+2870, KEY_braille_dots_567, BRAILLE PATTERN DOTS-567 */
	0xbd5b, /* 1939, 0x10028b0, U+28b0, KEY_braille_dots_568, BRAILLE PATTERN DOTS-568 */
	0x19c0, /*  282, 0xfee2, KEY_Pointer_Up */
	0x914d, /* 1527, 0x1000577, U+0577, KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */
	0x0000,
	0x293c, /*  469, 0xba, U+00ba, KEY_masculine, MASCULINE ORDINAL INDICATOR */
	0x0000,
	0x5893, /*  977, 0x6f6, U+0416, KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */
	0x0000,
	0x0000,
	0x70f3, /* 1217, 0xafe, U+201e, KEY_doublelowquotemark, DOUBLE LOW-9 QUOTATION MARK */
	0x9939, /* 1607, 0x10001e7, U+01e7, KEY_gcaron, LATIN SMALL LETTER G WITH CARON */
	0x0000,
	0x0000,
	0x8f7b, /* 1509, 0x100056e, U+056e, KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */
	0x0000,
	0x6cd6, /* 1177, 0xad4, U+211e, KEY_prescription, PRESCRIPTION TAKE */
	0x3770, /*  639, 0x3c7, U+012e, KEY_Iogonek, LATIN CAPITAL LETTER I WITH OGONEK */
	0x0000,
	0x1434, /*  232, 0xfe63, KEY_dead_stroke */
	0xd24c, /* 2138, 0x1008ff30, KEY_XF86Favorites, Show favorite locations */
	0x6b3e, /* 1163, 0xac4, U+215c, KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */
	0x6a7b, /* 1155, 0xab7, U+215a, KEY_fivesixths, VULGAR FRACTION FIVE SIXTHS */
	0x09f0, /*  126, 0xffd1, KEY_F20 */
	0x0000,
	0x0a12, /*  128, 0xffd2, KEY_F21 */
	0x3a38, /*  671, 0x1001e57, U+1e57, KEY_pabovedot, LATIN SMALL LETTER P WITH DOT ABOVE */
	0x0a33, /*  130, 0xffd3, KEY_F22 */
	0xea1f, /* 2378, 0x1004ff6a, KEY_osfHelp */
	0x0a54, /*  132, 0xffd4, KEY_F23 */
	0x92af, /* 1541, 0x100057e, U+057e, KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */
	0x0a75, /*  134, 0xffd5, KEY_F24 */
	0x0000,
	0x0a96, /*  136, 0xffd6, KEY_F25 */
	0x42cf, /*  771, 0x1000686, U+0686, KEY_Arabic_tcheh, ARABIC LETTER TCHEH */
	0x0ab7, /*  138, 0xffd7, KEY_F26 */
	0x1140, /*  205, 0xfe2e, KEY_ISO_Fast_Cursor_Up */
	0x09cf, /*  124, 0xffd0, KEY_F19 */
	0x02ac, /*   30, 0xff2e, KEY_Kana_Shift, Kana Shift */
	0x3651, /*  625, 0x3a5, U+0128, KEY_Itilde, LATIN CAPITAL LETTER I WITH TILDE */
	0x0000,
	0x0000,
	0x0000,
	0x934b, /* 1547, 0x1000581, U+0581, KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */
	0xeb8e, /* 2394, 0x1000ff75, KEY_KP_BackTab */
	0x0000,
	0x0000,
	0x76e2, /* 1279, 0xda2, U+0e02, KEY_Thai_khokhai, THAI CHARACTER KHO KHAI */
	0x0000,
	0x0000,
	0x0000,
	0x7e63, /* 1353, 0xdf1, U+0e51, KEY_Thai_leknung, THAI DIGIT ONE */
	0x0000,
	0xd877, /* 2201, 0x1008ff72, KEY_XF86Reply, Reply e.g., mail */
	0x6ddb, /* 1187, 0xadf, KEY_emfilledrect, (U+25AE BLACK VERTICAL RECTANGLE) */
	0x0000,
	0x0000,
	0x544d, /*  934, 0x6cb, U+043a, KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */
	0xd235, /* 2137, 0x1008ff2f, KEY_XF86Sleep, Put system to sleep */
	0x7c44, /* 1333, 0xdd8, U+0e38, KEY_Thai_sarau, THAI CHARACTER SARA U */
	0x0000,
	0xd8a6, /* 2203, 0x1008ff74, KEY_XF86RotateWindows, Rotate windows e.g. xrandr */
	0x35d1, /*  619, 0x2f8, U+011d, KEY_gcircumflex, LATIN SMALL LETTER G WITH CIRCUMFLEX */
	0x0000,
	0x62b6, /* 1073, 0x8ac, U+239d, KEY_botleftparens, LEFT PARENTHESIS LOWER HOOK */
	0x0000,
	0x0000,
	0x3207, /*  575, 0x1d0, U+0110, KEY_Dstroke, LATIN CAPITAL LETTER D WITH STROKE */
	0x0000,
	0x870f, /* 1435, 0xeda, KEY_Hangul_J_Dikeud */
	0x0000,
	0x9ad5, /* 1625, 0x1001ea9, U+1ea9, KEY_acircumflexhook, LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x1c7e, /*  306, 0xfef9, KEY_Pointer_EnableKeys */
	0x0000,
	0xecab, /* 2406, 0x100000fc, KEY_block */
	0x0000,
	0x0000,
	0xd203, /* 2135, 0x1008ff2d, KEY_XF86ScreenSaver, Invoke screensaver */
	0x0325, /*   35, 0xff3e, KEY_Mae_Koho, Previous Candidate */
	0x0000,
	0x7732, /* 1282, 0xda5, U+0e05, KEY_Thai_khokhon, THAI CHARACTER KHO KHON */
	0x0000,
	0x0000,
	0xc953, /* 2043, 0x1000d9e, U+0d9e, KEY_Sinh_ng2, SINHALA KANTAJA NAASIKYAYA */
	0x0000,
	0xa3f6, /* 1719, 0x10020ab, U+20ab, KEY_DongSign, DONG SIGN */
	0xcb65, /* 2067, 0x1000db7, U+0db7, KEY_Sinh_bha, SINHALA MAHA. BAYANNA */
	0x0000,
	0x0000,
	0x8183, /* 1382, 0xea5, KEY_Hangul_NieunJieuj */
	0x024f, /*   26, 0xff2a, KEY_Zenkaku_Hankaku, Zenkaku/Hankaku toggle */
	0x5616, /*  952, 0x6dd, U+0449, KEY_Cyrillic_shcha, CYRILLIC SMALL LETTER SHCHA */
	0x44c8, /*  791, 0x5c4, U+0624, KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */
	0x450a, /*  793, 0x5c6, U+0626, KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */
	0x0000,
	0x5239, /*  914, 0x6b9, KEY_Serbian_LJE, deprecated */
	0x0000,
	0x0000,
	0xd68c, /* 2180, 0x1008ff5a, KEY_XF86DOS, Launch DOS (emulation) */
	0x0000,
	0xa736, /* 1752, 0x1002263, U+2263, KEY_stricteq, STRICTLY EQUIVALENT TO */
	0x4dc0, /*  871, 0x10004d9, U+04d9, KEY_Cyrillic_schwa, CYRILLIC SMALL LETTER SCHWA */
	0x0000,
	0x0000,
	0x7a96, /* 1316, 0xdc7, U+0e27, KEY_Thai_wowaen, THAI CHARACTER WO WAEN */
	0x0000,
	0xd9b0, /* 2213, 0x1008ff7e, KEY_XF86Support, Get support (??) */
	0x299c, /*  473, 0xbe, U+00be, KEY_threequarters, VULGAR FRACTION THREE QUARTERS */
	0x0000,
	0x1834, /*  269, 0xfe70, KEY_AccessX_Enable */
	0xe7af, /* 2352, 0x1004ff31, KEY_osfAddMode */
	0x4c71, /*  861, 0x10004b1, U+04b1, KEY_Cyrillic_u_straight_bar, CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
	0x0000,
	0x0000,
	0x846f, /* 1408, 0xebf, KEY_Hangul_A */
	0x0000,
	0x8ca8, /* 1481, 0x100055e, U+055e, KEY_Armenian_paruyk, ARMENIAN QUESTION MARK */
	0x2fda, /*  548, 0x1a9, U+0160, KEY_Scaron, LATIN CAPITAL LETTER S WITH CARON */
	0x84e2, /* 1413, 0xec4, KEY_Hangul_E */
	0xe525, /* 2325, 0x1000ff72, KEY_hpInsertChar */
	0x804a, /* 1372, 0xff3b, KEY_Hangul_PostHanja, Post Hanja conversion */
	0xd8fd, /* 2206, 0x1008ff77, KEY_XF86Save, Save (file, document, state */
	0x863b, /* 1428, 0xed3, KEY_Hangul_I */
	0x0000,
	0x0000,
	0x55cb, /*  949, 0x6da, U+0437, KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */
	0x0000,
	0x78a7, /* 1296, 0xdb3, U+0e13, KEY_Thai_nonen, THAI CHARACTER NO NEN */
	0x8527, /* 1416, 0xec7, KEY_Hangul_O */
	0x6f64, /* 1201, 0xaed, U+2666, KEY_diamond, BLACK DIAMOND SUIT */
	0x0000,
	0x0000,
	0xa213, /* 1697, 0x1001ef1, U+1ef1, KEY_uhornbelowdot, LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
	0x8dfb, /* 1494, 0x1000537, U+0537, KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */
	0x859a, /* 1421, 0xecc, KEY_Hangul_U */
	0x0000,
	0xd01c, /* 2116, 0x1008ff1a, KEY_XF86Start, Start application */
	0x72fa, /* 1240, 0xce1, U+05d1, KEY_hebrew_bet, HEBREW LETTER BET */
	0x0000,
	0x5632, /*  953, 0x6de, U+0447, KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */
	0x7c11, /* 1331, 0xdd6, U+0e36, KEY_Thai_saraue, THAI CHARACTER SARA UE */
	0x0000,
	0x0000,
	0x72e0, /* 1239, 0xce0, U+05d0, KEY_hebrew_aleph, HEBREW LETTER ALEF */
	0xd993, /* 2212, 0x1008ff7d, KEY_XF86SplitScreen, Split window or screen */
	0x0000,
	0xc93d, /* 2042, 0x1000d9d, U+0d9d, KEY_Sinh_gha, SINHALA MAHA. GAYANNA */
	0x0000,
	0xda8d, /* 2222, 0x1008ff88, KEY_XF86WheelButton, button from a mouse wheel */
	0x0000,
	0x6a34, /* 1152, 0xab4, U+2157, KEY_threefifths, VULGAR FRACTION THREE FIFTHS */
	0x0000,
	0x0000,
	0x5336, /*  923, 0x6c0, U+044e, KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */
	0x88c3, /* 1449, 0xee8, KEY_Hangul_J_Ieung */
	0x53e5, /*  930, 0x6c7, U+0433, KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */
	0x0000,
	0x2ab8, /*  486, 0xcb, U+00cb, KEY_Ediaeresis, LATIN CAPITAL LETTER E WITH DIAERESIS */
	0x0000,
	0x3950, /*  661, 0x1000177, U+0177, KEY_ycircumflex, LATIN SMALL LETTER Y WITH CIRCUMFLEX */
	0xa069, /* 1679, 0x1001edf, U+1edf, KEY_ohornhook, LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
	0x9ec2, /* 1664, 0x1001ed0, U+1ed0, KEY_Ocircumflexacute, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x28f2, /*  466, 0xb7, U+00b7, KEY_periodcentered, MIDDLE DOT */
	0x0000,
	0x0000,
	0x8e13, /* 1495, 0x1000567, U+0567, KEY_Armenian_e, ARMENIAN SMALL LETTER EH */
	0x0000,
	0x0000,
	0x0000,
	0x370f, /*  634, 0x3bb, U+0123, KEY_gcedilla, LATIN SMALL LETTER G WITH CEDILLA */
	0x0000,
	0x7bae, /* 1327, 0xdd2, U+0e32, KEY_Thai_saraaa, THAI CHARACTER SARA AA */
	0x0000,
	0xe73a, /* 2347, 0x1004ff04, KEY_osfPaste */
	0x0000,
	0x941b, /* 1555, 0x1000585, U+0585, KEY_Armenian_o, ARMENIAN SMALL LETTER OH */
	0x0000,
	0x4a97, /*  847, 0xff7e, KEY_Arabic_switch, Alias for mode_switch */
	0x5684, /*  956, 0x6e1, U+0410, KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */
	0x4fc0, /*  890, 0x6a9, U+0459, KEY_Cyrillic_lje, CYRILLIC SMALL LETTER LJE */
	0x5b3d, /* 1000, 0x7b2, U+03ad, KEY_Greek_epsilonaccent, GREEK SMALL LETTER EPSILON WITH TONOS */
	0x3004, /*  550, 0x1ab, U+0164, KEY_Tcaron, LATIN CAPITAL LETTER T WITH CARON */
	0x5933, /*  983, 0x6fc, U+042d, KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */
	0x0000,
	0x37c7, /*  643, 0x3d2, U+014c, KEY_Omacron, LATIN CAPITAL LETTER O WITH MACRON */
	0x4ea9, /*  879, 0x6a2, U+0453, KEY_Macedonia_gje, CYRILLIC SMALL LETTER GJE */
	0x574d, /*  964, 0x6e9, U+0418, KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */
	0x4ff3, /*  892, 0x6aa, U+045a, KEY_Cyrillic_nje, CYRILLIC SMALL LETTER NJE */
	0x638a, /* 1080, 0x8b3, KEY_topvertsummationconnector */
	0x5a1b, /*  991, 0x7a5, U+03aa, KEY_Greek_IOTAdieresis, GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
	0x0000,
	0x29f9, /*  477, 0xc2, U+00c2, KEY_Acircumflex, LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
	0x3a7d, /*  674, 0x1001e6a, U+1e6a, KEY_Tabovedot, LATIN CAPITAL LETTER T WITH DOT ABOVE */
	0x0000,
	0x5b02, /*  998, 0x7af, U+2015, KEY_Greek_horizbar, HORIZONTAL BAR */
	0x7bc7, /* 1328, 0xdd3, U+0e33, KEY_Thai_saraam, THAI CHARACTER SARA AM */
	0x0000,
	0xd3c7, /* 2152, 0x1008ff3e, KEY_XF86AudioRewind, "rewind" audio track */
	0x0ffe, /*  196, 0xfe25, KEY_ISO_Partial_Space_Left */
	0x2b29, /*  491, 0xd0, U+00d0, KEY_ETH, LATIN CAPITAL LETTER ETH */
	0xdaee, /* 2226, 0x1008ff8c, KEY_XF86ZoomOut, zoom out view, map, etc. */
	0x5040, /*  895, 0x6ac, U+045c, KEY_Macedonia_kje, CYRILLIC SMALL LETTER KJE */
	0x737a, /* 1245, 0xce3, KEY_hebrew_daleth, deprecated */
	0x7a68, /* 1314, 0xdc5, U+0e25, KEY_Thai_loling, THAI CHARACTER LO LING */
	0x4c4c, /*  860, 0x10004b0, U+04b0, KEY_Cyrillic_U_straight_bar, CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
	0x701e, /* 1209, 0xaf6, U+266d, KEY_musicalflat, MUSIC FLAT SIGN */
	0x0000,
	0x0000,
	0xe4f1, /* 2323, 0x1000ff70, KEY_hpInsertLine */
	0x0000,
	0x534f, /*  924, 0x6c1, U+0430, KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */
	0x74df, /* 1259, 0xcee, U+05de, KEY_hebrew_mem, HEBREW LETTER MEM */
	0x0000,
	0xa0e6, /* 1684, 0x1001ee4, U+1ee4, KEY_Ubelowdot, LATIN CAPITAL LETTER U WITH DOT BELOW */
	0x55fe, /*  951, 0x6dc, U+044d, KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */
	0xe9de, /* 2375, 0x1004ff65, KEY_osfUndo */
	0xd1a1, /* 2131, 0x1008ff29, KEY_XF86Refresh, Refresh the page */
	0x2418, /*  400, 0x55, U+0055, KEY_U, LATIN CAPITAL LETTER U */
	0x5418, /*  932, 0x6c9, U+0438, KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */
	0x7bf8, /* 1330, 0xdd5, U+0e35, KEY_Thai_saraii, THAI CHARACTER SARA II */
	0x7c5c, /* 1334, 0xdd9, U+0e39, KEY_Thai_sarauu, THAI CHARACTER SARA UU */
	0x9d62, /* 1650, 0x1001ec2, U+1ec2, KEY_Ecircumflexhook, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x4402, /*  784, 0x1000668, U+0668, KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */
	0x2445, /*  403, 0x58, U+0058, KEY_X, LATIN CAPITAL LETTER X */
	0x54b1, /*  938, 0x6cf, U+043e, KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */
	0x774c, /* 1283, 0xda6, U+0e06, KEY_Thai_khorakhang, THAI CHARACTER KHO RAKHANG */
	0x0000,
	0x2463, /*  405, 0x5a, U+005a, KEY_Z, LATIN CAPITAL LETTER Z */
	0x0000,
	0x5380, /*  926, 0x6c3, U+0446, KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */
	0x5546, /*  944, 0x6d5, U+0443, KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */
	0x200e, /*  343, 0xfd1c, KEY_3270_CursorSelect */
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
	0x2a51, /*  481, 0xc6, U+00c6, KEY_AE, LATIN CAPITAL LETTER AE */
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
	0x1875, /*  271, 0xfe72, KEY_RepeatKeys_Enable */
	0x8c6c, /* 1479, 0x100055b, U+055b, KEY_Armenian_shesht, ARMENIAN EMPHASIS MARK */
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
	0x8ab8, /* 1465, 0xef8, KEY_Hangul_J_PanSios */
	0x0000,
	0x767f, /* 1275, 0xcfa, U+05ea, KEY_hebrew_taw, HEBREW LETTER TAV */
	0x627c, /* 1071, 0x8aa, U+23a6, KEY_botrightsqbracket, RIGHT SQUARE BRACKET LOWER CORNER */
	0x3b53, /*  684, 0x13bc, U+0152, KEY_OE, LATIN CAPITAL LIGATURE OE */
	0x8917, /* 1452, 0xeeb, KEY_Hangul_J_Khieuq */
	0x39c5, /*  666, 0x1001e1e, U+1e1e, KEY_Fabovedot, LATIN CAPITAL LETTER F WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7428, /* 1252, 0xce8, U+05d8, KEY_hebrew_tet, HEBREW LETTER TET */
	0x0000,
	0x0000,
	0x1d10, /*  311, 0xfea1, KEY_Ch */
	0x2661, /*  435, 0x77, U+0077, KEY_w, LATIN SMALL LETTER W */
	0x0000,
	0x3d9f, /*  710, 0x4b5, U+30aa, KEY_kana_O, KATAKANA LETTER O */
	0x748f, /* 1256, 0xceb, U+05db, KEY_hebrew_kaph, HEBREW LETTER KAF */
	0x6c33, /* 1172, 0xacf, KEY_emopenrectangle, (U+25AF WHITE VERTICAL RECTANGLE) */
	0xcdc2, /* 2095, 0x1000ddf, U+0ddf, KEY_Sinh_lu2, SINHALA GAYANUKITTA */
	0x268e, /*  438, 0x7a, U+007a, KEY_z, LATIN SMALL LETTER Z */
	0xe5a3, /* 2330, 0x1000ff49, KEY_hpModelock2 */
	0x5c8c, /* 1010, 0x7c1, U+0391, KEY_Greek_ALPHA, GREEK CAPITAL LETTER ALPHA */
	0x062e, /*   74, 0xff9a, KEY_KP_Page_Up */
	0x9d26, /* 1648, 0x1001ec0, U+1ec0, KEY_Ecircumflexgrave, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x7562, /* 1264, 0xcf2, U+05e2, KEY_hebrew_ayin, HEBREW LETTER AYIN */
	0x3544, /*  613, 0x2d8, U+011c, KEY_Gcircumflex, LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
	0x0000,
	0x5cbd, /* 1012, 0x7c3, U+0393, KEY_Greek_GAMMA, GREEK CAPITAL LETTER GAMMA */
	0x0000,
	0x0000,
	0x0000,
	0x34d0, /*  608, 0x2bb, U+011f, KEY_gbreve, LATIN SMALL LETTER G WITH BREVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc840, /* 2030, 0x1000d8e, U+0d8e, KEY_Sinh_rii, SINHALA IRUUYANNA */
	0x0000,
	0x0d06, /*  170, 0xffed, KEY_Hyper_L, Left hyper */
	0x0000,
	0x4d49, /*  867, 0x10004b9, U+04b9, KEY_Cyrillic_che_vertstroke, CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
	0x0000,
	0x0000,
	0x732b, /* 1242, 0xce2, U+05d2, KEY_hebrew_gimel, HEBREW LETTER GIMEL */
	0x0d1b, /*  171, 0xffee, KEY_Hyper_R, Right hyper */
	0x7a81, /* 1315, 0xdc6, U+0e26, KEY_Thai_lu, THAI CHARACTER LU */
	0x7fbf, /* 1367, 0xff36, KEY_Hangul_Romaja, Hangul Romaja mode */
	0x0000,
	0xa456, /* 1723, 0x1002075, U+2075, KEY_fivesuperior, SUPERSCRIPT FIVE */
	0x0000,
	0x0000,
	0x341a, /*  600, 0x2a1, U+0126, KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */
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
	0x4921, /*  834, 0x1000653, U+0653, KEY_Arabic_madda_above, ARABIC MADDAH ABOVE */
	0xe750, /* 2348, 0x1004ff07, KEY_osfBackTab */
	0x0000,
	0x0000,
	0x6438, /* 1085, 0x8bc, U+2264, KEY_lessthanequal, LESS-THAN OR EQUAL TO */
	0x0000,
	0x0000,
	0x2d33, /*  516, 0xe6, U+00e6, KEY_ae, LATIN SMALL LETTER AE */
	0x0000,
	0xb7b7, /* 1892, 0x1002881, U+2881, KEY_braille_dots_18, BRAILLE PATTERN DOTS-18 */
	0xc86b, /* 2032, 0x1000d90, U+0d90, KEY_Sinh_luu, SINHALA ILUUYANNA */
	0x0000,
	0xb014, /* 1829, 0x1002842, U+2842, KEY_braille_dots_27, BRAILLE PATTERN DOTS-27 */
	0x0000,
	0x1d00, /*  310, 0xfea0, KEY_ch */
	0xac7f, /* 1799, 0x1002824, U+2824, KEY_braille_dots_36, BRAILLE PATTERN DOTS-36 */
	0x0000,
	0x0000,
	0x66ef, /* 1115, 0x9e3, U+240c, KEY_ff, SYMBOL FOR FORM FEED */
	0x0000,
	0x0000,
	0xb80f, /* 1895, 0x1002884, U+2884, KEY_braille_dots_38, BRAILLE PATTERN DOTS-38 */
	0x22dc, /*  379, 0x40, U+0040, KEY_at, COMMERCIAL AT */
	0x0000,
	0x66ff, /* 1116, 0x9e4, U+240d, KEY_cr, SYMBOL FOR CARRIAGE RETURN */
	0x2b4b, /*  493, 0xd1, U+00d1, KEY_Ntilde, LATIN CAPITAL LETTER N WITH TILDE */
	0x6c93, /* 1175, 0xad2, U+201c, KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */
	0x5d83, /* 1020, 0x7cb, U+039b, KEY_Greek_LAMDA, GREEK CAPITAL LETTER LAMDA */
	0x7291, /* 1236, 0xbdc, U+22a3, KEY_lefttack, LEFT TACK */
	0x0000,
	0x670f, /* 1117, 0x9e5, U+240a, KEY_lf, SYMBOL FOR LINE FEED */
	0x358a, /*  616, 0x2e5, U+010b, KEY_cabovedot, LATIN SMALL LETTER C WITH DOT ABOVE */
	0x065b, /*   76, 0xff9b, KEY_KP_Page_Down */
	0xa397, /* 1715, 0x10020a7, U+20a7, KEY_PesetaSign, PESETA SIGN */
	0x0000,
	0x3b63, /*  685, 0x13bd, U+0153, KEY_oe, LATIN SMALL LIGATURE OE */
	0x66df, /* 1114, 0x9e2, U+2409, KEY_ht, SYMBOL FOR HORIZONTAL TABULATION */
	0x0000,
	0x7666, /* 1274, 0xcf9, U+05e9, KEY_hebrew_shin, HEBREW LETTER SHIN */
	0x0000,
	0x0c07, /*  158, 0xffe1, KEY_Shift_L, Left shift */
	0x0000,
	0x0000,
	0x2f1e, /*  539, 0xfc, U+00fc, KEY_udiaeresis, LATIN SMALL LETTER U WITH DIAERESIS */
	0xcf08, /* 2106, 0x1008ff10, KEY_XF86Standby, System into standby mode */
	0x0000,
	0x0c1c, /*  159, 0xffe2, KEY_Shift_R, Right shift */
	0x1e01, /*  322, 0xfd07, KEY_3270_EraseInput */
	0x0000,
	0x0000,
	0x7440, /* 1253, 0xce8, KEY_hebrew_teth, deprecated */
	0x7603, /* 1270, 0xcf6, KEY_hebrew_zadi, deprecated */
	0x3122, /*  564, 0x1bd, U+02dd, KEY_doubleacute, DOUBLE ACUTE ACCENT */
	0xc802, /* 2027, 0x1000d8b, U+0d8b, KEY_Sinh_u, SINHALA UYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x2b3a, /*  492, 0xd0, KEY_Eth, deprecated */
	0x761c, /* 1271, 0xcf7, U+05e7, KEY_hebrew_qoph, HEBREW LETTER QOF */
	0x0000,
	0x3937, /*  660, 0x1000176, U+0176, KEY_Ycircumflex, LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
	0xeb49, /* 2391, 0x1000ff72, KEY_InsertChar */
	0x6920, /* 1140, 0xaa6, U+2008, KEY_punctspace, PUNCTUATION SPACE */
	0x0000,
	0x672f, /* 1119, 0x9e9, U+240b, KEY_vt, SYMBOL FOR VERTICAL TABULATION */
	0x0000,
	0x73c4, /* 1248, 0xce6, U+05d6, KEY_hebrew_zain, HEBREW LETTER ZAYIN */
	0x0000,
	0x0000,
	0x3f99, /*  734, 0x4cb, U+30d2, KEY_kana_HI, KATAKANA LETTER HI */
	0xcd40, /* 2089, 0x1000dd9, U+0dd9, KEY_Sinh_e2, SINHALA KOMBUVA */
	0x0000,
	0x0000,
	0x4002, /*  739, 0x4cf, U+30de, KEY_kana_MA, KATAKANA LETTER MA */
	0x1406, /*  230, 0xfe61, KEY_dead_hook */
	0x0000,
	0xc770, /* 2020, 0x1000d83, U+0d83, KEY_Sinh_h2, SINHALA VISARGAYA */
	0x0000,
	0x79bd, /* 1307, 0xdbe, U+0e1e, KEY_Thai_phophan, THAI CHARACTER PHO PHAN */
	0x0000,
	0x47c8, /*  821, 0x5e7, U+0647, KEY_Arabic_ha, ARABIC LETTER HEH */
	0x3fed, /*  738, 0x4ce, U+30db, KEY_kana_HO, KATAKANA LETTER HO */
	0x1392, /*  226, 0xfe5d, KEY_dead_iota */
	0x141d, /*  231, 0xfe62, KEY_dead_horn */
	0x0000,
	0x3fae, /*  735, 0x4cc, U+30d5, KEY_kana_FU, KATAKANA LETTER HU */
	0x0000,
	0x0000,
	0x0000,
	0x2ba0, /*  497, 0xd5, U+00d5, KEY_Otilde, LATIN CAPITAL LETTER O WITH TILDE */
	0x164e, /*  250, 0xfe93, KEY_dead_longsolidusoverlay */
	0x0000,
	0xec5d, /* 2402, 0x100000af, KEY_lira */
	0x3f30, /*  729, 0x4c6, U+30cb, KEY_kana_NI, KATAKANA LETTER NI */
	0x0000,
	0x902f, /* 1516, 0x1000542, U+0542, KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */
	0x0000,
	0x3e1c, /*  716, 0x4bb, U+30b5, KEY_kana_SA, KATAKANA LETTER SA */
	0x0000,
	0xe6b7, /* 2341, 0x100000ee, KEY_hpYdiaeresis */
	0x0e33, /*  181, 0xfe06, KEY_ISO_Group_Latch */
	0x4056, /*  743, 0x4d3, U+30e2, KEY_kana_MO, KATAKANA LETTER MO */
	0xccff, /* 2086, 0x1000dd4, U+0dd4, KEY_Sinh_u2, SINHALA PAA-PILLA */
	0x0000,
	0x3d08, /*  703, 0x4af, U+30c3, KEY_kana_tsu, KATAKANA LETTER SMALL TU */
	0x3e5c, /*  719, 0x4be, U+30bb, KEY_kana_SE, KATAKANA LETTER SE */
	0x7345, /* 1243, 0xce2, KEY_hebrew_gimmel, deprecated */
	0x444c, /*  787, 0x5bf, U+061f, KEY_Arabic_question_mark, ARABIC QUESTION MARK */
	0x0000,
	0x40bf, /*  748, 0x4d8, U+30ea, KEY_kana_RI, KATAKANA LETTER RI */
	0x28db, /*  465, 0xb6, U+00b6, KEY_paragraph, PILCROW SIGN */
	0xcb50, /* 2066, 0x1000db6, U+0db6, KEY_Sinh_ba, SINHALA BAYANNA */
	0x0000,
	0x4113, /*  752, 0x4dc, U+30ef, KEY_kana_WA, KATAKANA LETTER WA */
	0x837a, /* 1399, 0xeb6, KEY_Hangul_SsangSios */
	0xdd46, /* 2249, 0x1008ffa3, KEY_XF86Red, Red button */
	0x0000,
	0x3f45, /*  730, 0x4c7, U+30cc, KEY_kana_NU, KATAKANA LETTER NU */
	0x6b71, /* 1165, 0xac6, U+215e, KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */
	0x3e9b, /*  722, 0x4c1, U+30c1, KEY_kana_CHI, KATAKANA LETTER TI */
	0xcc7c, /* 2080, 0x1000dca, U+0dca, KEY_Sinh_al, SINHALA AL-LAKUNA */
	0x40fe, /*  751, 0x4db, U+30ed, KEY_kana_RO, KATAKANA LETTER RO */
	0x0000,
	0x2275, /*  374, 0x3b, U+003b, KEY_semicolon, SEMICOLON */
	0x0000,
	0xe275, /* 2299, 0xff69, KEY_SunStop, Same as XK_Cancel */
	0x0000,
	0xc9aa, /* 2047, 0x1000da2, U+0da2, KEY_Sinh_ja, SINHALA JAYANNA */
	0x0000,
	0x3f06, /*  727, 0x4c4, U+30c8, KEY_kana_TO, KATAKANA LETTER TO */
	0x89d4, /* 1458, 0xef1, KEY_Hangul_SunkyeongeumPieub */
	0xcbd0, /* 2072, 0x1000dbd, U+0dbd, KEY_Sinh_la, SINHALA DANTAJA LAYANNA */
	0x048f, /*   54, 0xff68, KEY_Find, Find, search */
	0x40d4, /*  749, 0x4d9, U+30eb, KEY_kana_RU, KATAKANA LETTER RU */
	0x0000,
	0xcaf9, /* 2062, 0x1000db1, U+0db1, KEY_Sinh_na, SINHALA DANTAJA NAYANNA */
	0x0000,
	0x0d30, /*  172, 0xfe01, KEY_ISO_Lock */
	0x0000,
	0x7803, /* 1290, 0xdad, U+0e0d, KEY_Thai_yoying, THAI CHARACTER YO YING */
	0x04b5, /*   56, 0xff6a, KEY_Help, Help */
	0x3edc, /*  725, 0x4c2, KEY_kana_TU, deprecated */
	0x0000,
	0xcbbb, /* 2071, 0x1000dbb, U+0dbb, KEY_Sinh_ra, SINHALA RAYANNA */
	0x0000,
	0x5ed0, /* 1034, 0x7d9, U+03a9, KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */
	0x0000,
	0x14a7, /*  236, 0xfe65, KEY_dead_dasia, alias for dead_abovereversedcomma */
	0x0000,
	0x0000,
	0xeb19, /* 2389, 0x1000ff70, KEY_InsertLine */
	0xa098, /* 1681, 0x1001ee1, U+1ee1, KEY_ohorntilde, LATIN SMALL LETTER O WITH HORN AND TILDE */
	0x0000,
	0x0000,
	0x7004, /* 1208, 0xaf5, U+266f, KEY_musicalsharp, MUSIC SHARP SIGN */
	0x0000,
	0x0000,
	0xcba6, /* 2070, 0x1000dba, U+0dba, KEY_Sinh_ya, SINHALA YAYANNA */
	0x6b58, /* 1164, 0xac5, U+215d, KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */
	0x0000,
	0x0000,
	0x4080, /*  745, 0x4d5, U+30e6, KEY_kana_YU, KATAKANA LETTER YU */
	0x8934, /* 1453, 0xeec, KEY_Hangul_J_Tieut */
	0x89fa, /* 1459, 0xef2, KEY_Hangul_PanSios */
	0x034d, /*   37, 0xff51, KEY_Left, Move left, left arrow */
	0x781c, /* 1291, 0xdae, U+0e0e, KEY_Thai_dochada, THAI CHARACTER DO CHADA */
	0x0000,
	0x0000,
	0x0382, /*   40, 0xff54, KEY_Down, Move down, down arrow */
	0xc816, /* 2028, 0x1000d8c, U+0d8c, KEY_Sinh_uu, SINHALA UUYANNA */
	0x11ec, /*  210, 0xfe33, KEY_ISO_Center_Object */
	0x033b, /*   36, 0xff50, KEY_Home */
	0x539a, /*  927, 0x6c4, U+0434, KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */
	0x0000,
	0x0000,
	0x5d6a, /* 1019, 0x7ca, U+039a, KEY_Greek_KAPPA, GREEK CAPITAL LETTER KAPPA */
	0x713e, /* 1220, 0xba6, KEY_rightcaret, (U+003E GREATER-THAN SIGN) */
	0x0000,
	0x9065, /* 1518, 0x1000543, U+0543, KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3e31, /*  717, 0x4bc, U+30b7, KEY_kana_SHI, KATAKANA LETTER SI */
	0x4b7c, /*  854, 0x100049c, U+049c, KEY_Cyrillic_KA_vertstroke, CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
	0x0000,
	0x120b, /*  211, 0xfe34, KEY_ISO_Enter */
	0x0000,
	0x0000,
	0x047d, /*   53, 0xff67, KEY_Menu */
	0x0000,
	0x0000,
	0xbbc4, /* 1926, 0x10028a3, U+28a3, KEY_braille_dots_1268, BRAILLE PATTERN DOTS-1268 */
	0x518a, /*  907, 0x6b6, U+0406, KEY_Ukrainian_I, CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x0000,
	0xea6a, /* 2381, 0x1004ff73, KEY_osfReselect */
	0x0000,
	0x352d, /*  612, 0x2d5, U+0120, KEY_Gabovedot, LATIN CAPITAL LETTER G WITH DOT ABOVE */
	0x01f0, /*   22, 0xff26, KEY_Katakana, to Katakana */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x046b, /*   52, 0xff66, KEY_Redo, Redo, again */
	0x0000,
	0x0000,
	0x81dc, /* 1385, 0xea8, KEY_Hangul_SsangDikeud */
	0x0000,
	0x1a89, /*  289, 0xfee9, KEY_Pointer_Button1 */
	0x1aa6, /*  290, 0xfeea, KEY_Pointer_Button2 */
	0x1ac3, /*  291, 0xfeeb, KEY_Pointer_Button3 */
	0x1ae0, /*  292, 0xfeec, KEY_Pointer_Button4 */
	0x1afd, /*  293, 0xfeed, KEY_Pointer_Button5 */
	0xa30b, /* 1709, 0x10020a1, U+20a1, KEY_ColonSign, COLON SIGN */
	0x7fa6, /* 1366, 0xff35, KEY_Hangul_Jamo, Hangul Jamo mode */
	0x7a0c, /* 1310, 0xdc1, U+0e21, KEY_Thai_moma, THAI CHARACTER MO MA */
	0x03bc, /*   43, 0xff56, KEY_Next, Next */
	0x0000,
	0x0000,
	0x8d93, /* 1490, 0x1000535, U+0535, KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */
	0x0000,
	0x3ec6, /*  724, 0x4c2, U+30c4, KEY_kana_TSU, KATAKANA LETTER TU */
	0x0000,
	0x5156, /*  905, 0x6b4, KEY_Ukranian_JE, deprecated */
	0x0000,
	0x4f2b, /*  884, 0x6a6, U+0456, KEY_Ukrainian_i, CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x4e52, /*  876, 0x10004ee, U+04ee, KEY_Cyrillic_U_macron, CYRILLIC CAPITAL LETTER U WITH MACRON */
	0xe444, /* 2316, 0x1000fe2c, KEY_Dcedilla_accent */
	0x0000,
	0x0000,
	0x01da, /*   21, 0xff25, KEY_Hiragana, to Hiragana */
	0x9976, /* 1610, 0x100018f, U+018f, KEY_SCHWA, LATIN CAPITAL LETTER SCHWA */
	0x0000,
	0x0000,
	0x381b, /*  647, 0x3de, U+016a, KEY_Umacron, LATIN CAPITAL LETTER U WITH MACRON */
	0x0000,
	0x0000,
	0x2884, /*  461, 0xb2, U+00b2, KEY_twosuperior, SUPERSCRIPT TWO */
	0x76ca, /* 1278, 0xda1, U+0e01, KEY_Thai_kokai, THAI CHARACTER KO KAI */
	0x6abc, /* 1158, 0xabc, KEY_leftanglebracket, (U+27E8 MATHEMATICAL LEFT ANGLE BRACKET) */
	0x56cf, /*  959, 0x6e4, U+0414, KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */
	0x0000,
	0x0e16, /*  180, 0xff7e, KEY_ISO_Group_Shift, Alias for mode_switch */
	0xeb02, /* 2388, 0x1000ff6f, KEY_ClearLine */
	0xd084, /* 2120, 0x1008ff1e, KEY_XF86Memo, Invoke Memo taking program */
	0x2f9d, /*  545, 0x1a3, U+0141, KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */
	0xcb90, /* 2069, 0x1000db9, U+0db9, KEY_Sinh_mba, SINHALA AMBA BAYANNA */
	0x0000,
	0xdb1d, /* 2228, 0x1008ff8e, KEY_XF86Messenger, as in instant messaging */
	0xe2a0, /* 2301, 0x1005ff71, KEY_SunFront */
	0x0000,
	0x33d4, /*  597, 0x1fb, U+0171, KEY_udoubleacute, LATIN SMALL LETTER U WITH DOUBLE ACUTE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa528, /* 1731, 0x1002083, U+2083, KEY_threesubscript, SUBSCRIPT THREE */
	0x51d5, /*  910, 0x6b7, KEY_Ukranian_YI, deprecated */
	0x6a1d, /* 1151, 0xab3, U+2156, KEY_twofifths, VULGAR FRACTION TWO FIFTHS */
	0x0000,
	0x0000,
	0x0000,
	0xded4, /* 2264, 0x1008fe01, KEY_XF86Switch_VT_1 */
	0x0459, /*   51, 0xff65, KEY_Undo */
	0x0000,
	0x0000,
	0x5e13, /* 1026, 0x7d0, U+03a0, KEY_Greek_PI, GREEK CAPITAL LETTER PI */
	0x0000,
	0xd631, /* 2176, 0x1008ff56, KEY_XF86Close, Close window */
	0xac61, /* 1798, 0x1002823, U+2823, KEY_braille_dots_126, BRAILLE PATTERN DOTS-126 */
	0x0000,
	0x0000,
	0x5db6, /* 1022, 0x7cc, U+039c, KEY_Greek_MU, GREEK CAPITAL LETTER MU */
	0x939b, /* 1550, 0x1000553, U+0553, KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */
	0x5dcc, /* 1023, 0x7cd, U+039d, KEY_Greek_NU, GREEK CAPITAL LETTER NU */
	0x0000,
	0xe19f, /* 2290, 0x1005ff60, KEY_SunSys_Req */
	0xe615, /* 2335, 0x100000a9, KEY_hpmute_grave */
	0xdfbc, /* 2272, 0x1008fe09, KEY_XF86Switch_VT_9 */
	0x425d, /*  767, 0x100066a, U+066a, KEY_Arabic_percent, ARABIC PERCENT SIGN */
	0x90e8, /* 1523, 0x1000575, U+0575, KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */
	0xb7f1, /* 1894, 0x1002883, U+2883, KEY_braille_dots_128, BRAILLE PATTERN DOTS-128 */
	0x5de2, /* 1024, 0x7ce, U+039e, KEY_Greek_XI, GREEK CAPITAL LETTER XI */
	0x880f, /* 1443, 0xee2, KEY_Hangul_J_RieulHieuh */
	0x0000,
	0x657e, /* 1099, 0x8da, U+2282, KEY_includedin, SUBSET OF */
	0x0000,
	0x39ae, /*  665, 0x1001e0b, U+1e0b, KEY_dabovedot, LATIN SMALL LETTER D WITH DOT ABOVE */
	0xdc1b, /* 2238, 0x1008ff98, KEY_XF86AudioRepeat, toggle repeat mode */
	0x77d2, /* 1288, 0xdab, U+0e0b, KEY_Thai_soso, THAI CHARACTER SO SO */
	0xe260, /* 2298, 0xff68, KEY_SunFind, Same as XK_Find */
	0x0000,
	0xea08, /* 2377, 0x1004ff69, KEY_osfCancel */
	0x83cc, /* 1402, 0xeb9, KEY_Hangul_SsangJieuj */
	0x289d, /*  462, 0xb3, U+00b3, KEY_threesuperior, SUPERSCRIPT THREE */
	0x12f1, /*  220, 0xfe57, KEY_dead_diaeresis */
	0x8216, /* 1387, 0xeaa, KEY_Hangul_RieulKiyeog */
	0x0000,
	0x41a0, /*  758, 0x10006f1, U+06f1, KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */
	0x0000,
	0x0000,
	0x92c9, /* 1542, 0x100054f, U+054f, KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */
	0x1850, /*  270, 0xfe71, KEY_AccessX_Feedback_Enable */
	0x6669, /* 1109, 0x8fd, U+2192, KEY_rightarrow, RIGHTWARDS ARROW */
	0x6169, /* 1061, 0xff7e, KEY_Greek_switch, Alias for mode_switch */
	0x0000,
	0x0000,
	0x5c44, /* 1008, 0x7ba, U+03b0, KEY_Greek_upsilonaccentdieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
	0x0000,
	0xdfd9, /* 2273, 0x1008fe0a, KEY_XF86Switch_VT_10 */
	0x2128, /*  355, 0x28, U+0028, KEY_parenleft, LEFT PARENTHESIS */
	0xe015, /* 2275, 0x1008fe0c, KEY_XF86Switch_VT_12 */
	0x06fc, /*   83, 0xffab, KEY_KP_Add */
	0x3aab, /*  676, 0x1001e80, U+1e80, KEY_Wgrave, LATIN CAPITAL LETTER W WITH GRAVE */
	0x0000,
	0xe2b6, /* 2302, 0x1005ff72, KEY_SunCopy */
	0x0000,
	0x9365, /* 1548, 0x1000552, U+0552, KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */
	0xc369, /* 1988, 0x10028e1, U+28e1, KEY_braille_dots_1678, BRAILLE PATTERN DOTS-1678 */
	0x4ef7, /*  882, 0x6a4, KEY_Ukranian_je, deprecated */
	0x26c5, /*  441, 0x7d, U+007d, KEY_braceright, RIGHT CURLY BRACKET */
	0x0000,
	0x752c, /* 1262, 0xcf1, U+05e1, KEY_hebrew_samech, HEBREW LETTER SAMEKH */
	0x82b1, /* 1392, 0xeaf, KEY_Hangul_RieulPhieuf */
	0x0000,
	0x0000,
	0x8361, /* 1398, 0xeb5, KEY_Hangul_Sios */
	0x0000,
	0x924a, /* 1537, 0x100057c, U+057c, KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */
	0x0000,
	0x0000,
	0x0000,
	0x7080, /* 1213, 0xafa, U+2315, KEY_telephonerecorder, TELEPHONE RECORDER */
	0xa052, /* 1678, 0x1001ede, U+1ede, KEY_Ohornhook, LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
	0xd371, /* 2149, 0x1008ff3b, KEY_XF86BrightnessAdjust, Invoke brightness adj. UI */
	0x0000,
	0x0000,
	0xe6d1, /* 2342, 0x100000ee, KEY_hpIO */
	0x7547, /* 1263, 0xcf1, KEY_hebrew_samekh, deprecated */
	0x3617, /*  622, 0x3a2, U+0138, KEY_kra, LATIN SMALL LETTER KRA */
	0x0000,
	0xbf78, /* 1956, 0x10028c1, U+28c1, KEY_braille_dots_178, BRAILLE PATTERN DOTS-178 */
	0x0000,
	0x0000,
	0x0000,
	0x9465, /* 1558, 0x100055a, U+055a, KEY_Armenian_apostrophe, ARMENIAN APOSTROPHE */
	0x0000,
	0x38b1, /*  654, 0x3f3, U+0137, KEY_kcedilla, LATIN SMALL LETTER K WITH CEDILLA */
	0x0675, /*   77, 0xff9c, KEY_KP_End */
	0x0000,
	0x0000,
	0x8bd9, /* 1474, 0x100058a, U+058a, KEY_Armenian_hyphen, ARMENIAN HYPHEN */
	0x0000,
	0x4f76, /*  887, 0x6a7, KEY_Ukranian_yi, deprecated */
	0x11d1, /*  209, 0xfe32, KEY_ISO_Emphasize */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x89ae, /* 1457, 0xef0, KEY_Hangul_SunkyeongeumMieum */
	0x0000,
	0x0000,
	0x6070, /* 1051, 0x7f0, U+03c0, KEY_Greek_pi, GREEK SMALL LETTER PI */
	0x0000,
	0x2727, /*  445, 0xa2, U+00a2, KEY_cent, CENT SIGN */
	0x270f, /*  444, 0xa1, U+00a1, KEY_exclamdown, INVERTED EXCLAMATION MARK */
	0x7850, /* 1293, 0xdb0, U+0e10, KEY_Thai_thothan, THAI CHARACTER THO THAN */
	0xd673, /* 2179, 0x1008ff59, KEY_XF86Display, Output switch key */
	0x6013, /* 1047, 0x7ec, U+03bc, KEY_Greek_mu, GREEK SMALL LETTER MU */
	0xe559, /* 2327, 0x1000ff74, KEY_hpBackTab */
	0x6029, /* 1048, 0x7ed, U+03bd, KEY_Greek_nu, GREEK SMALL LETTER NU */
	0xce06, /* 2098, 0x1000df4, U+0df4, KEY_Sinh_kunddaliya, SINHALA KUNDDALIYA */
	0x0000,
	0x1931, /*  277, 0xfe78, KEY_Overlay1_Enable */
	0x0000,
	0x3b73, /*  686, 0x13be, U+0178, KEY_Ydiaeresis, LATIN CAPITAL LETTER Y WITH DIAERESIS */
	0x911a, /* 1525, 0x1000576, U+0576, KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */
	0x0000,
	0x603f, /* 1049, 0x7ee, U+03be, KEY_Greek_xi, GREEK SMALL LETTER XI */
	0xa2aa, /* 1704, 0x10001a0, U+01a0, KEY_Ohorn, LATIN CAPITAL LETTER O WITH HORN */
	0x053a, /*   62, 0xff89, KEY_KP_Tab */
	0x0000,
	0x296f, /*  471, 0xbc, U+00bc, KEY_onequarter, VULGAR FRACTION ONE QUARTER */
	0x6efe, /* 1197, 0xae9, KEY_filledtribulletdown, (U+25BC BLACK DOWN-POINTING TRIANGLE) */
	0x0000,
	0x8455, /* 1407, 0xebe, KEY_Hangul_Hieuh */
	0xd6bc, /* 2182, 0x1008ff5c, KEY_XF86Excel, Launch spread sheet */
	0xdd2d, /* 2248, 0x1008ffa2, KEY_XF86TopMenu, Go to a top-level menu in a video */
	0x6f52, /* 1200, 0xaec, U+2663, KEY_club, BLACK CLUB SUIT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7df3, /* 1349, 0xdeb, U+0e4b, KEY_Thai_maichattawa, THAI CHARACTER MAI CHATTAWA */
	0xa8ae, /* 1766, 0x1002803, U+2803, KEY_braille_dots_12, BRAILLE PATTERN DOTS-12 */
	0x0ea9, /*  185, 0xfe0a, KEY_ISO_Prev_Group */
	0x0000,
	0x18d0, /*  274, 0xfe75, KEY_StickyKeys_Enable */
	0x8a63, /* 1462, 0xef5, KEY_Hangul_YeorinHieuh */
	0x0000,
	0xd966, /* 2210, 0x1008ff7b, KEY_XF86Send, Send mail, file, object */
	0x0000,
	0x0000,
	0xc08c, /* 1965, 0x10028ca, U+28ca, KEY_braille_dots_2478, BRAILLE PATTERN DOTS-2478 */
	0xaa0c, /* 1778, 0x100280f, U+280f, KEY_braille_dots_1234, BRAILLE PATTERN DOTS-1234 */
	0x878b, /* 1439, 0xede, KEY_Hangul_J_RieulPieub */
	0x5ea2, /* 1032, 0x7d7, U+03a7, KEY_Greek_CHI, GREEK CAPITAL LETTER CHI */
	0x6ea1, /* 1194, 0xae6, KEY_enfilledcircbullet, (U+2022 BULLET) */
	0x6879, /* 1132, 0x9f6, U+2534, KEY_bott, BOX DRAWINGS LIGHT UP AND HORIZONTAL */
	0xe24a, /* 2297, 0xff66, KEY_SunAgain, Same as XK_Redo */
	0x6d30, /* 1181, 0xad9, U+271d, KEY_latincross, LATIN CROSS */
	0x0000,
	0xec6f, /* 2403, 0x100000be, KEY_guilder */
	0xbd98, /* 1941, 0x10028b2, U+28b2, KEY_braille_dots_2568, BRAILLE PATTERN DOTS-2568 */
	0x0000,
	0x0000,
	0xb868, /* 1898, 0x1002887, U+2887, KEY_braille_dots_1238, BRAILLE PATTERN DOTS-1238 */
	0x0000,
	0x0000,
	0xb120, /* 1838, 0x100284b, U+284b, KEY_braille_dots_1247, BRAILLE PATTERN DOTS-1247 */
	0x0000,
	0x6e4f, /* 1191, 0xae3, KEY_opentribulletup, (U+25B3 WHITE UP-POINTING TRIANGLE) */
	0xb8e0, /* 1902, 0x100288b, U+288b, KEY_braille_dots_1248, BRAILLE PATTERN DOTS-1248 */
	0xc188, /* 1973, 0x10028d2, U+28d2, KEY_braille_dots_2578, BRAILLE PATTERN DOTS-2578 */
	0x0000,
	0xb214, /* 1846, 0x1002853, U+2853, KEY_braille_dots_1257, BRAILLE PATTERN DOTS-1257 */
	0x77b7, /* 1287, 0xdaa, U+0e0a, KEY_Thai_chochang, THAI CHARACTER CHO CHANG */
	0x0000,
	0x1fb7, /*  340, 0xfd19, KEY_3270_ChangeScreen */
	0x0000,
	0x0da0, /*  176, 0xfe05, KEY_ISO_Level3_Lock */
	0x75ea, /* 1269, 0xcf6, U+05e6, KEY_hebrew_zade, HEBREW LETTER TSADI */
	0x0000,
	0x1d63, /*  316, 0xfd01, KEY_3270_Duplicate */
	0x8d13, /* 1485, 0x1000562, U+0562, KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */
	0x0000,
	0x0000,
	0x14dd, /*  238, 0xfe67, KEY_dead_belowring */
	0xde2d, /* 2258, 0x1008ffb2, KEY_XF86AudioMicMute, Mute the Mic from the system */
	0xc7ae, /* 2023, 0x1000d87, U+0d87, KEY_Sinh_ae, SINHALA AEYANNA */
	0x4c0a, /*  858, 0x10004ae, U+04ae, KEY_Cyrillic_U_straight, CYRILLIC CAPITAL LETTER STRAIGHT U */
	0xcf9b, /* 2111, 0x1008ff15, KEY_XF86AudioStop, Stop playing audio */
	0x0000,
	0xc388, /* 1989, 0x10028e2, U+28e2, KEY_braille_dots_2678, BRAILLE PATTERN DOTS-2678 */
	0x0000,
	0x228c, /*  375, 0x3c, U+003c, KEY_less, LESS-THAN SIGN */
	0xaefd, /* 1820, 0x1002839, U+2839, KEY_braille_dots_1456, BRAILLE PATTERN DOTS-1456 */
	0x4847, /*  826, 0x5eb, U+064b, KEY_Arabic_fathatan, ARABIC FATHATAN */
	0x0000,
	0xb2cd, /* 1852, 0x1002859, U+2859, KEY_braille_dots_1457, BRAILLE PATTERN DOTS-1457 */
	0x0000,
	0x202d, /*  344, 0xfd1d, KEY_3270_PrintScreen */
	0xbff1, /* 1960, 0x10028c5, U+28c5, KEY_braille_dots_1378, BRAILLE PATTERN DOTS-1378 */
	0x91ff, /* 1534, 0x100054b, U+054b, KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */
	0xa3c6, /* 1717, 0x10020a9, U+20a9, KEY_WonSign, WON SIGN */
	0xb4bd, /* 1868, 0x1002869, U+2869, KEY_braille_dots_1467, BRAILLE PATTERN DOTS-1467 */
	0x0000,
	0x4a7a, /*  846, 0x10006c1, U+06c1, KEY_Arabic_heh_goal, ARABIC LETTER HEH GOAL */
	0xb93c, /* 1905, 0x100288e, U+288e, KEY_braille_dots_2348, BRAILLE PATTERN DOTS-2348 */
	0x0000,
	0x3a66, /*  673, 0x1001e61, U+1e61, KEY_sabovedot, LATIN SMALL LETTER S WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0xc06d, /* 1964, 0x10028c9, U+28c9, KEY_braille_dots_1478, BRAILLE PATTERN DOTS-1478 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0f7c, /*  192, 0xfe21, KEY_ISO_Move_Line_Up */
	0xbd79, /* 1940, 0x10028b1, U+28b1, KEY_braille_dots_1568, BRAILLE PATTERN DOTS-1568 */
	0xc928, /* 2041, 0x1000d9c, U+0d9c, KEY_Sinh_ga, SINHALA GAYANNA */
	0x7d33, /* 1342, 0xde4, U+0e44, KEY_Thai_saraaimaimalai, THAI CHARACTER SARA AI MAIMALAI */
	0x46a0, /*  809, 0x5d6, U+0636, KEY_Arabic_dad, ARABIC LETTER DAD */
	0x0000,
	0x36e4, /*  632, 0x3b6, U+013c, KEY_lcedilla, LATIN SMALL LETTER L WITH CEDILLA */
	0xc010, /* 1961, 0x10028c6, U+28c6, KEY_braille_dots_2378, BRAILLE PATTERN DOTS-2378 */
	0x0000,
	0x0000,
	0xcc3c, /* 2077, 0x1000dc4, U+0dc4, KEY_Sinh_ha, SINHALA HAYANNA */
	0x12a5, /*  217, 0xfe54, KEY_dead_macron */
	0x4542, /*  795, 0x5c8, U+0628, KEY_Arabic_beh, ARABIC LETTER BEH */
	0xbc9c, /* 1933, 0x10028aa, U+28aa, KEY_braille_dots_2468, BRAILLE PATTERN DOTS-2468 */
	0xe8fe, /* 2366, 0x1004ff58, KEY_osfBeginLine */
	0x0000,
	0x0000,
	0x5a3b, /*  992, 0x7a5, KEY_Greek_IOTAdiaeresis, old typo */
	0x87cc, /* 1441, 0xee0, KEY_Hangul_J_RieulTieut */
	0x9d08, /* 1647, 0x1001ebf, U+1ebf, KEY_ecircumflexacute, LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0xd778, /* 2190, 0x1008ff65, KEY_XF86MenuKB, distinguish keyboard from PB */
	0x0000,
	0x74c2, /* 1258, 0xced, U+05dd, KEY_hebrew_finalmem, HEBREW LETTER FINAL MEM */
	0x0000,
	0x0000,
	0x0df9, /*  179, 0xfe13, KEY_ISO_Level5_Lock */
	0x0000,
	0x5ac1, /*  996, 0x7ab, U+038f, KEY_Greek_OMEGAaccent, GREEK CAPITAL LETTER OMEGA WITH TONOS */
	0x0000,
	0x71ff, /* 1229, 0xbcc, U+2395, KEY_quad, APL FUNCTIONAL SYMBOL QUAD */
	0x7836, /* 1292, 0xdaf, U+0e0f, KEY_Thai_topatak, THAI CHARACTER TO PATAK */
	0x8f47, /* 1507, 0x100056d, U+056d, KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */
	0x0225, /*   24, 0xff28, KEY_Zenkaku, to Zenkaku */
	0xb031, /* 1830, 0x1002843, U+2843, KEY_braille_dots_127, BRAILLE PATTERN DOTS-127 */
	0xb51b, /* 1871, 0x100286c, U+286c, KEY_braille_dots_3467, BRAILLE PATTERN DOTS-3467 */
	0x982f, /* 1595, 0x10010f4, U+10f4, KEY_Georgian_har, GEORGIAN LETTER HAR */
	0x0000,
	0xab34, /* 1788, 0x1002819, U+2819, KEY_braille_dots_145, BRAILLE PATTERN DOTS-145 */
	0xdb38, /* 2229, 0x1008ff8f, KEY_XF86WebCam, Launch web camera app. */
	0xa9ee, /* 1777, 0x100280e, U+280e, KEY_braille_dots_234, BRAILLE PATTERN DOTS-234 */
	0x216d, /*  358, 0x2b, U+002b, KEY_plus, PLUS SIGN */
	0xaada, /* 1785, 0x1002816, U+2816, KEY_braille_dots_235, BRAILLE PATTERN DOTS-235 */
	0x0000,
	0xae08, /* 1812, 0x1002831, U+2831, KEY_braille_dots_156, BRAILLE PATTERN DOTS-156 */
	0x4736, /*  815, 0x5e1, U+0641, KEY_Arabic_feh, ARABIC LETTER FEH */
	0xab52, /* 1789, 0x100281a, U+281a, KEY_braille_dots_245, BRAILLE PATTERN DOTS-245 */
	0x0000,
	0xad32, /* 1805, 0x100282a, U+282a, KEY_braille_dots_246, BRAILLE PATTERN DOTS-246 */
	0x0000,
	0xa782, /* 1755, 0xfff3, KEY_braille_dot_3 */
	0xc7ed, /* 2026, 0x1000d8a, U+0d8a, KEY_Sinh_ii, SINHALA IIYANNA */
	0xb8c2, /* 1901, 0x100288a, U+288a, KEY_braille_dots_248, BRAILLE PATTERN DOTS-248 */
	0x0000,
	0xab8f, /* 1791, 0x100281c, U+281c, KEY_braille_dots_345, BRAILLE PATTERN DOTS-345 */
	0x9dd8, /* 1654, 0x1001ec6, U+1ec6, KEY_Ecircumflexbelowdot, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0xb9b6, /* 1909, 0x1002892, U+2892, KEY_braille_dots_258, BRAILLE PATTERN DOTS-258 */
	0xa664, /* 1743, 0x100221a, U+221a, KEY_squareroot, SQUARE ROOT */
	0xb3e6, /* 1861, 0x1002862, U+2862, KEY_braille_dots_267, BRAILLE PATTERN DOTS-267 */
	0x0000,
	0x74f7, /* 1260, 0xcef, U+05df, KEY_hebrew_finalnun, HEBREW LETTER FINAL NUN */
	0x13c8, /*  228, 0xfe5f, KEY_dead_semivoiced_sound */
	0x0000,
	0x0000,
	0xbf96, /* 1957, 0x10028c2, U+28c2, KEY_braille_dots_278, BRAILLE PATTERN DOTS-278 */
	0x7ac8, /* 1318, 0xdc9, U+0e29, KEY_Thai_sorusi, THAI CHARACTER SO RUSI */
	0x5302, /*  921, 0x6bf, U+040f, KEY_Cyrillic_DZHE, CYRILLIC CAPITAL LETTER DZHE */
	0x0000,
	0xaedf, /* 1819, 0x1002838, U+2838, KEY_braille_dots_456, BRAILLE PATTERN DOTS-456 */
	0x29e5, /*  476, 0xc1, U+00c1, KEY_Aacute, LATIN CAPITAL LETTER A WITH ACUTE */
	0xb2af, /* 1851, 0x1002858, U+2858, KEY_braille_dots_457, BRAILLE PATTERN DOTS-457 */
	0x0000,
	0x5cef, /* 1014, 0x7c5, U+0395, KEY_Greek_EPSILON, GREEK CAPITAL LETTER EPSILON */
	0xeb79, /* 2393, 0x1000ff74, KEY_BackTab */
	0x0000,
	0x385a, /*  650, 0x3ec, U+0117, KEY_eabovedot, LATIN SMALL LETTER E WITH DOT ABOVE */
	0x688b, /* 1133, 0x9f7, U+252c, KEY_topt, BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
	0x9cd6, /* 1645, 0x1001ebd, U+1ebd, KEY_etilde, LATIN SMALL LETTER E WITH TILDE */
	0x2e9d, /*  533, 0xf7, U+00f7, KEY_division, DIVISION SIGN */
	0x9c36, /* 1638, 0x1001eb6, U+1eb6, KEY_Abrevebelowdot, LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
	0xab70, /* 1790, 0x100281b, U+281b, KEY_braille_dots_1245, BRAILLE PATTERN DOTS-1245 */
	0x92ff, /* 1544, 0x1000550, U+0550, KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */
	0xa85b, /* 1763, 0x1002800, U+2800, KEY_braille_blank, BRAILLE PATTERN BLANK */
	0xa74c, /* 1753, 0xfff1, KEY_braille_dot_1 */
	0x0cdc, /*  168, 0xffeb, KEY_Super_L, Left super */
	0x65d9, /* 1103, 0x8de, U+2227, KEY_logicaland, LOGICAL AND */
	0xb15d, /* 1840, 0x100284d, U+284d, KEY_braille_dots_1347, BRAILLE PATTERN DOTS-1347 */
	0x69a7, /* 1146, 0xaae, U+2026, KEY_ellipsis, HORIZONTAL ELLIPSIS */
	0xb251, /* 1848, 0x1002855, U+2855, KEY_braille_dots_1357, BRAILLE PATTERN DOTS-1357 */
	0x7069, /* 1212, 0xaf9, U+260e, KEY_telephone, BLACK TELEPHONE */
	0x0cf1, /*  169, 0xffec, KEY_Super_R, Right super */
	0x619c, /* 1063, 0x8a2, KEY_topleftradical, (U+250C BOX DRAWINGS LIGHT DOWN AND RIGHT) */
	0x56b5, /*  958, 0x6e3, U+0426, KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */
	0xadac, /* 1809, 0x100282e, U+282e, KEY_braille_dots_2346, BRAILLE PATTERN DOTS-2346 */
	0xb17c, /* 1841, 0x100284e, U+284e, KEY_braille_dots_2347, BRAILLE PATTERN DOTS-2347 */
	0x88a3, /* 1448, 0xee7, KEY_Hangul_J_SsangSios */
	0xb270, /* 1849, 0x1002856, U+2856, KEY_braille_dots_2357, BRAILLE PATTERN DOTS-2357 */
	0xba30, /* 1913, 0x1002896, U+2896, KEY_braille_dots_2358, BRAILLE PATTERN DOTS-2358 */
	0xb460, /* 1865, 0x1002866, U+2866, KEY_braille_dots_2367, BRAILLE PATTERN DOTS-2367 */
	0xaf1c, /* 1821, 0x100283a, U+283a, KEY_braille_dots_2456, BRAILLE PATTERN DOTS-2456 */
	0xb2ec, /* 1853, 0x100285a, U+285a, KEY_braille_dots_2457, BRAILLE PATTERN DOTS-2457 */
	0xbaac, /* 1917, 0x100289a, U+289a, KEY_braille_dots_2458, BRAILLE PATTERN DOTS-2458 */
	0xb4dc, /* 1869, 0x100286a, U+286a, KEY_braille_dots_2467, BRAILLE PATTERN DOTS-2467 */
	0x9e57, /* 1659, 0x1001ecb, U+1ecb, KEY_ibelowdot, LATIN SMALL LETTER I WITH DOT BELOW */
	0xa809, /* 1760, 0xfff8, KEY_braille_dot_8 */
	0x471a, /*  814, 0x5e0, U+0640, KEY_Arabic_tatweel, ARABIC TATWEEL */
	0xb5d8, /* 1877, 0x1002872, U+2872, KEY_braille_dots_2567, BRAILLE PATTERN DOTS-2567 */
	0x904a, /* 1517, 0x1000572, U+0572, KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */
	0xb32b, /* 1855, 0x100285c, U+285c, KEY_braille_dots_3457, BRAILLE PATTERN DOTS-3457 */
	0x1068, /*  199, 0xfe28, KEY_ISO_Set_Margin_Right */
	0x4d6e, /*  868, 0x10004ba, U+04ba, KEY_Cyrillic_SHHA, CYRILLIC CAPITAL LETTER SHHA */
	0xbcdb, /* 1935, 0x10028ac, U+28ac, KEY_braille_dots_3468, BRAILLE PATTERN DOTS-3468 */
	0x7973, /* 1304, 0xdbb, U+0e1b, KEY_Thai_popla, THAI CHARACTER PO PLA */
	0x474e, /*  816, 0x5e2, U+0642, KEY_Arabic_qaf, ARABIC LETTER QAF */
	0xb617, /* 1879, 0x1002874, U+2874, KEY_braille_dots_3567, BRAILLE PATTERN DOTS-3567 */
	0xbdd7, /* 1943, 0x10028b4, U+28b4, KEY_braille_dots_3568, BRAILLE PATTERN DOTS-3568 */
	0x5ff9, /* 1046, 0x7eb, U+03bb, KEY_Greek_lambda, GREEK SMALL LETTER LAMDA */
	0xc1c7, /* 1975, 0x10028d4, U+28d4, KEY_braille_dots_3578, BRAILLE PATTERN DOTS-3578 */
	0x2e58, /*  530, 0xf4, U+00f4, KEY_ocircumflex, LATIN SMALL LETTER O WITH CIRCUMFLEX */
	0x0000,
	0x3785, /*  640, 0x3cc, U+0116, KEY_Eabovedot, LATIN CAPITAL LETTER E WITH DOT ABOVE */
	0x2d59, /*  518, 0xe8, U+00e8, KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */
	0xb697, /* 1883, 0x1002878, U+2878, KEY_braille_dots_4567, BRAILLE PATTERN DOTS-4567 */
	0xbe57, /* 1947, 0x10028b8, U+28b8, KEY_braille_dots_4568, BRAILLE PATTERN DOTS-4568 */
	0x0000,
	0x42b7, /*  770, 0x100067e, U+067e, KEY_Arabic_peh, ARABIC LETTER PEH */
	0x04a1, /*   55, 0xff69, KEY_Cancel, Cancel, stop, abort, exit */
	0xa767, /* 1754, 0xfff2, KEY_braille_dot_2 */
	0x1a49, /*  287, 0xfee7, KEY_Pointer_DownRight */
	0xa79d, /* 1756, 0xfff4, KEY_braille_dot_4 */
	0xa7b8, /* 1757, 0xfff5, KEY_braille_dot_5 */
	0xa7d3, /* 1758, 0xfff6, KEY_braille_dot_6 */
	0x02c4, /*   31, 0xff2f, KEY_Eisu_Shift, Alphanumeric Shift */
	0x00aa, /*    8, 0xff15, KEY_Sys_Req */
	0x9e85, /* 1661, 0x1001ecd, U+1ecd, KEY_obelowdot, LATIN SMALL LETTER O WITH DOT BELOW */
	0x0000,
	0x31b6, /*  571, 0x1c8, U+010c, KEY_Ccaron, LATIN CAPITAL LETTER C WITH CARON */
	0xc54b, /* 2003, 0x10028f0, U+28f0, KEY_braille_dots_5678, BRAILLE PATTERN DOTS-5678 */
	0x884c, /* 1445, 0xee4, KEY_Hangul_J_Pieub */
	0x0000,
	0x5367, /*  925, 0x6c2, U+0431, KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */
	0x46b8, /*  810, 0x5d7, U+0637, KEY_Arabic_tah, ARABIC LETTER TAH */
	0x0000,
	0x0000,
	0x4b59, /*  853, 0x100049b, U+049b, KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */
	0x317a, /*  568, 0x1c3, U+0102, KEY_Abreve, LATIN CAPITAL LETTER A WITH BREVE */
	0x0000,
	0x0000,
	0xe424, /* 2315, 0x1000fe5e, KEY_Dcircumflex_accent */
	0xcce9, /* 2085, 0x1000dd3, U+0dd3, KEY_Sinh_ii2, SINHALA DIGA IS-PILLA */
	0x0000,
	0x0000,
	0x8ea9, /* 1501, 0x100056a, U+056a, KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */
	0x0000,
	0x0000,
	0x0000,
	0x0ad8, /*  140, 0xffd8, KEY_F27 */
	0x0000,
	0xcfb6, /* 2112, 0x1008ff16, KEY_XF86AudioPrev, Previous track */
	0x0000,
	0x968a, /* 1579, 0x10010e4, U+10e4, KEY_Georgian_phar, GEORGIAN LETTER PHAR */
	0x7a23, /* 1311, 0xdc2, U+0e22, KEY_Thai_yoyak, THAI CHARACTER YO YAK */
	0x0000,
	0x0000,
	0xe818, /* 2356, 0x1004ff41, KEY_osfPageUp */
	0x0000,
	0x0000,
	0x0000,
	0x31f3, /*  574, 0x1cf, U+010e, KEY_Dcaron, LATIN CAPITAL LETTER D WITH CARON */
	0x0000,
	0x2e85, /*  532, 0xf6, U+00f6, KEY_odiaeresis, LATIN SMALL LETTER O WITH DIAERESIS */
	0x0000,
	0xa114, /* 1686, 0x1001ee6, U+1ee6, KEY_Uhook, LATIN CAPITAL LETTER U WITH HOOK ABOVE */
	0x4999, /*  838, 0x10006a4, U+06a4, KEY_Arabic_veh, ARABIC LETTER VEH */
	0x0000,
	0x0000,
	0xdad6, /* 2225, 0x1008ff8b, KEY_XF86ZoomIn, zoom in view, map, etc. */
	0x0000,
	0x0000,
	0x2110, /*  354, 0x27, KEY_quoteright, deprecated */
	0x0000,
	0x68b2, /* 1135, 0xaa1, U+2003, KEY_emspace, EM SPACE */
	0x0000,
	0xca45, /* 2054, 0x1000da9, U+0da9, KEY_Sinh_dda, SINHALA DDAYANNA */
	0x0000,
	0x0000,
	0x45db, /*  801, 0x5ce, U+062e, KEY_Arabic_khah, ARABIC LETTER KHAH */
	0x1a0e, /*  285, 0xfee5, KEY_Pointer_UpRight */
	0x0000,
	0x27e9, /*  454, 0xab, U+00ab, KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x9080, /* 1519, 0x1000573, U+0573, KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */
	0xc994, /* 2046, 0x1000da1, U+0da1, KEY_Sinh_cha, SINHALA MAHA. CAYANNA */
	0x0000,
	0x026c, /*   27, 0xff2b, KEY_Touroku, Add to Dictionary */
	0x0000,
	0x798b, /* 1305, 0xdbc, U+0e1c, KEY_Thai_phophung, THAI CHARACTER PHO PHUNG */
	0x0151, /*   15, 0xff3e, KEY_PreviousCandidate */
	0x2a8b, /*  484, 0xc9, U+00c9, KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */
	0x0000,
	0x4488, /*  789, 0x5c2, U+0622, KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */
	0x31df, /*  573, 0x1cc, U+011a, KEY_Ecaron, LATIN CAPITAL LETTER E WITH CARON */
	0x0000,
	0x10af, /*  201, 0xfe2a, KEY_ISO_Release_Margin_Right */
	0x0041, /*    3, 0xff0a, KEY_Linefeed, Linefeed, LF */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x29d1, /*  475, 0xc0, U+00c0, KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */
	0x0000,
	0xa71c, /* 1751, 0x1002262, U+2262, KEY_notidentical, NOT IDENTICAL TO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7e7d, /* 1354, 0xdf2, U+0e52, KEY_Thai_leksong, THAI DIGIT TWO */
	0xe13f, /* 2286, 0x1005ff04, KEY_SunFA_Diaeresis */
	0x0000,
	0x8f2d, /* 1506, 0x100053d, U+053d, KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */
	0x9f1c, /* 1667, 0x1001ed3, U+1ed3, KEY_ocircumflexgrave, LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x8a3c, /* 1461, 0xef4, KEY_Hangul_SunkyeongeumPhieuf */
	0x9d44, /* 1649, 0x1001ec1, U+1ec1, KEY_ecircumflexgrave, LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x8169, /* 1381, 0xea4, KEY_Hangul_Nieun */
	0x0000,
	0xe1d4, /* 2292, 0xff20, KEY_SunCompose, Same as XK_Multi_key */
	0x0000,
	0x6908, /* 1139, 0xaa5, U+2007, KEY_digitspace, FIGURE SPACE */
	0x0000,
	0x00fe, /*   12, 0xff37, KEY_Codeinput */
	0x69f0, /* 1149, 0xab1, U+2154, KEY_twothirds, VULGAR FRACTION TWO THIRDS */
	0x8dae, /* 1491, 0x1000565, U+0565, KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */
	0x0000,
	0x0f41, /*  190, 0xfe0f, KEY_ISO_Last_Group_Lock */
	0x0000,
	0x0000,
	0xda76, /* 2221, 0x1008ff87, KEY_XF86Video, Launch video player */
	0x00d3, /*   10, 0xffff, KEY_Delete, Delete, rubout */
	0x0000,
	0x1ff3, /*  342, 0xfd1b, KEY_3270_ExSelect */
	0x0000,
	0x3448, /*  602, 0x2a9, U+0130, KEY_Iabovedot, LATIN CAPITAL LETTER I WITH DOT ABOVE */
	0xeb31, /* 2390, 0x1000ff71, KEY_DeleteLine */
	0x6a4d, /* 1153, 0xab5, U+2158, KEY_fourfifths, VULGAR FRACTION FOUR FIFTHS */
	0x0000,
	0x7f5a, /* 1363, 0xff32, KEY_Hangul_Start, Hangul start */
	0xa080, /* 1680, 0x1001ee0, U+1ee0, KEY_Ohorntilde, LATIN CAPITAL LETTER O WITH HORN AND TILDE */
	0x78bf, /* 1297, 0xdb4, U+0e14, KEY_Thai_dodek, THAI CHARACTER DO DEK */
	0x3a94, /*  675, 0x1001e6b, U+1e6b, KEY_tabovedot, LATIN SMALL LETTER T WITH DOT ABOVE */
	0x8f12, /* 1505, 0x100056c, U+056c, KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */
	0x0000,
	0x0000,
	0x4655, /*  806, 0x5d3, U+0633, KEY_Arabic_seen, ARABIC LETTER SEEN */
	0x3285, /*  581, 0x1db, U+0170, KEY_Udoubleacute, LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
	0x0000,
	0xc912, /* 2040, 0x1000d9b, U+0d9b, KEY_Sinh_kha, SINHALA MAHA. KAYANNA */
	0x0000,
	0x1de6, /*  321, 0xfd06, KEY_3270_EraseEOF */
	0x0f03, /*  188, 0xfe0d, KEY_ISO_First_Group_Lock */
	0x0000,
	0x0000,
	0x0000,
	0x460c, /*  803, 0x5d0, U+0630, KEY_Arabic_thal, ARABIC LETTER THAL */
	0x3886, /*  652, 0x3f1, U+0146, KEY_ncedilla, LATIN SMALL LETTER N WITH CEDILLA */
	0x98bc, /* 1601, 0x10001e6, U+01e6, KEY_Gcaron, LATIN CAPITAL LETTER G WITH CARON */
	0x8989, /* 1456, 0xeef, KEY_Hangul_RieulYeorinHieuh */
	0x4591, /*  798, 0x5cb, U+062b, KEY_Arabic_theh, ARABIC LETTER THEH */
	0x0000,
	0x0000,
	0xc799, /* 2022, 0x1000d86, U+0d86, KEY_Sinh_aa, SINHALA AAYANNA */
	0xa1f8, /* 1696, 0x1001ef0, U+1ef0, KEY_Uhornbelowdot, LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
	0x0000,
	0x47af, /*  820, 0x5e6, U+0646, KEY_Arabic_noon, ARABIC LETTER NOON */
	0x44e7, /*  792, 0x5c5, U+0625, KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */
	0x5b1e, /*  999, 0x7b1, U+03ac, KEY_Greek_alphaaccent, GREEK SMALL LETTER ALPHA WITH TONOS */
	0x0000,
	0x9657, /* 1577, 0x10010e2, U+10e2, KEY_Georgian_tar, GEORGIAN LETTER TAR */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xeadc, /* 2386, 0x1000ff6d, KEY_System */
	0xd97c, /* 2211, 0x1008ff7c, KEY_XF86Spell, Spell checker */
	0x830a, /* 1395, 0xeb2, KEY_Hangul_Pieub */
	0x34a1, /*  606, 0x2b6, U+0125, KEY_hcircumflex, LATIN SMALL LETTER H WITH CIRCUMFLEX */
	0x8b20, /* 1468, 0xeff, KEY_Korean_Won, (U+20A9 WON SIGN) */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4302, /*  773, 0x1000691, U+0691, KEY_Arabic_rreh, ARABIC LETTER RREH */
	0x34ba, /*  607, 0x2b9, U+0131, KEY_idotless, LATIN SMALL LETTER DOTLESS I */
	0x0000,
	0x9a40, /* 1620, 0x1001ea4, U+1ea4, KEY_Acircumflexacute, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x0000,
	0x413c, /*  754, 0x4de, U+309b, KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */
	0x0000,
	0xc97f, /* 2045, 0x1000da0, U+0da0, KEY_Sinh_ca, SINHALA CAYANNA */
	0x0000,
	0x8013, /* 1370, 0xff39, KEY_Hangul_Banja, Banja mode */
	0x3980, /*  663, 0x1001e03, U+1e03, KEY_babovedot, LATIN SMALL LETTER B WITH DOT ABOVE */
	0x0000,
	0xec06, /* 2399, 0x100000aa, KEY_mute_asciicircum */
	0x7d54, /* 1343, 0xde5, U+0e45, KEY_Thai_lakkhangyao, THAI CHARACTER LAKKHANGYAO */
	0x0000,
	0x673f, /* 1120, 0x9ea, U+2518, KEY_lowrightcorner, BOX DRAWINGS LIGHT UP AND LEFT */
	0xe9c7, /* 2374, 0x1004ff63, KEY_osfInsert */
	0x0000,
	0x810f, /* 1378, 0xea1, KEY_Hangul_Kiyeog */
	0xcae2, /* 2061, 0x1000db0, U+0db0, KEY_Sinh_dhha, SINHALA MAHA. DAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x92e4, /* 1543, 0x100057f, U+057f, KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */
	0x429e, /*  769, 0x1000679, U+0679, KEY_Arabic_tteh, ARABIC LETTER TTEH */
	0x0000,
	0x80d8, /* 1376, 0xff3f, KEY_Hangul_Special, Special symbols */
	0x0000,
	0x0000,
	0xe8bb, /* 2363, 0x1004ff53, KEY_osfRight */
	0x0000,
	0x0000,
	0xea83, /* 2382, 0x1004ff74, KEY_osfExtend */
	0x0000,
	0xe066, /* 2278, 0x1008fe22, KEY_XF86Next_VMode, next video mode available */
	0x2ae4, /*  488, 0xcd, U+00cd, KEY_Iacute, LATIN CAPITAL LETTER I WITH ACUTE */
	0x6b27, /* 1162, 0xac3, U+215b, KEY_oneeighth, VULGAR FRACTION ONE EIGHTH */
	0x0000,
	0x78d7, /* 1298, 0xdb5, U+0e15, KEY_Thai_totao, THAI CHARACTER TO TAO */
	0x9380, /* 1549, 0x1000582, U+0582, KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */
	0x0000,
	0x39dc, /*  667, 0x1001e1f, U+1e1f, KEY_fabovedot, LATIN SMALL LETTER F WITH DOT ABOVE */
	0x173b, /*  261, 0xfe8a, KEY_dead_small_schwa */
	0x6feb, /* 1207, 0xaf4, U+2717, KEY_ballotcross, BALLOT X */
	0x7f46, /* 1362, 0xff31, KEY_Hangul, Hangul start/stop(toggle) */
	0x0000,
	0x2d08, /*  514, 0xe4, U+00e4, KEY_adiaeresis, LATIN SMALL LETTER A WITH DIAERESIS */
	0x2a77, /*  483, 0xc8, U+00c8, KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */
	0x0000,
	0xa55f, /* 1733, 0x1002085, U+2085, KEY_fivesubscript, SUBSCRIPT FIVE */
	0x71c1, /* 1226, 0xbc4, U+230a, KEY_downstile, LEFT FLOOR */
	0x0000,
	0x62d1, /* 1074, 0x8ad, U+239e, KEY_toprightparens, RIGHT PARENTHESIS UPPER HOOK */
	0x0000,
	0xa904, /* 1769, 0x1002806, U+2806, KEY_braille_dots_23, BRAILLE PATTERN DOTS-23 */
	0x0000,
	0x363b, /*  624, 0x3a3, U+0156, KEY_Rcedilla, LATIN CAPITAL LETTER R WITH CEDILLA */
	0xdbfd, /* 2237, 0x1008ff97, KEY_XF86AudioForward, fast-forward audio track */
	0x0000,
	0xcf80, /* 2110, 0x1008ff14, KEY_XF86AudioPlay, Start playing of audio > */
	0x0000,
	0x8a83, /* 1463, 0xef6, KEY_Hangul_AraeA */
	0x7717, /* 1281, 0xda4, U+0e04, KEY_Thai_khokhwai, THAI CHARACTER KHO KHWAI */
	0x2a12, /*  478, 0xc3, U+00c3, KEY_Atilde, LATIN CAPITAL LETTER A WITH TILDE */
	0x0000,
	0x76fc, /* 1280, 0xda3, U+0e03, KEY_Thai_khokhuat, THAI CHARACTER KHO KHUAT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6776, /* 1122, 0x9ec, U+250c, KEY_upleftcorner, BOX DRAWINGS LIGHT DOWN AND RIGHT */
	0xca88, /* 2057, 0x1000dac, U+0dac, KEY_Sinh_ndda, SINHALA SANYAKA DDAYANNA */
	0xe66d, /* 2338, 0x100000ac, KEY_hpmute_asciitilde */
	0x76af, /* 1277, 0xff7e, KEY_Hebrew_switch, Alias for mode_switch */
	0x9403, /* 1554, 0x1000555, U+0555, KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */
	0xa6d8, /* 1748, 0x1002235, U+2235, KEY_because, BECAUSE */
	0x6527, /* 1095, 0x8cd, U+21d4, KEY_ifonlyif, LEFT RIGHT DOUBLE ARROW */
	0x0000,
	0xdbd2, /* 2235, 0x1008ff95, KEY_XF86WLAN, Enable/disable WLAN */
	0xcb0e, /* 2063, 0x1000db3, U+0db3, KEY_Sinh_ndha, SINHALA SANYAKA DAYANNA */
	0xec24, /* 2400, 0x100000ab, KEY_mute_diaeresis */
	0x0000,
	0x01b2, /*   19, 0xff23, KEY_Henkan, Alias for Henkan_Mode */
	0xd81e, /* 2197, 0x1008ff6c, KEY_XF86Option, ?? */
	0x8236, /* 1388, 0xeab, KEY_Hangul_RieulMieum */
	0xcf43, /* 2108, 0x1008ff12, KEY_XF86AudioMute, Mute sound from the system */
	0x0000,
	0x0000,
	0x0000,
	0x67ab, /* 1124, 0x9ee, U+253c, KEY_crossinglines, BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
	0x9295, /* 1540, 0x100054e, U+054e, KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */
	0xd15c, /* 2128, 0x1008ff26, KEY_XF86Back, Like back on a browser */
	0x8c4f, /* 1478, 0x100055b, U+055b, KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */
	0x0000,
	0x55b0, /*  948, 0x6d9, U+044b, KEY_Cyrillic_yeru, CYRILLIC SMALL LETTER YERU */
	0x5591, /*  947, 0x6d8, U+044c, KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */
	0x1b3d, /*  295, 0xfeef, KEY_Pointer_DblClick1 */
	0x1b5c, /*  296, 0xfef0, KEY_Pointer_DblClick2 */
	0x1b7b, /*  297, 0xfef1, KEY_Pointer_DblClick3 */
	0x1b9a, /*  298, 0xfef2, KEY_Pointer_DblClick4 */
	0x1bb9, /*  299, 0xfef3, KEY_Pointer_DblClick5 */
	0x0000,
	0x84cb, /* 1412, 0xec3, KEY_Hangul_EO */
	0x00bf, /*    9, 0xff1b, KEY_Escape */
	0x0000,
	0xd13f, /* 2127, 0x1008ff25, KEY_XF86RockerEnter, and let you press them */
	0xe893, /* 2361, 0x1004ff51, KEY_osfLeft */
	0x9893, /* 1599, 0x100012c, U+012c, KEY_Ibreve, LATIN CAPITAL LETTER I WITH BREVE */
	0x860d, /* 1426, 0xed1, KEY_Hangul_EU */
	0xe97c, /* 2371, 0x1004ff5d, KEY_osfPrevField */
	0xcdef, /* 2097, 0x1000df3, U+0df3, KEY_Sinh_luu2, SINHALA DIGA GAYANUKITTA */
	0x0000,
	0x856c, /* 1419, 0xeca, KEY_Hangul_OE */
	0x0000,
	0x0000,
	0x0000,
	0x8d61, /* 1488, 0x1000534, U+0534, KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */
	0x0000,
	0x0000,
	0xb779, /* 1890, 0x100287f, U+287f, KEY_braille_dots_1234567, BRAILLE PATTERN DOTS-1234567 */
	0x987c, /* 1598, 0x1001e8a, U+1e8a, KEY_Xabovedot, LATIN CAPITAL LETTER X WITH DOT ABOVE */
	0xc9eb, /* 2050, 0x1000da5, U+0da5, KEY_Sinh_jnya, SINHALA TAALUJA SANYOOGA NAASIKYAYA */
	0x5bdf, /* 1005, 0x7b7, U+03cc, KEY_Greek_omicronaccent, GREEK SMALL LETTER OMICRON WITH TONOS */
	0x0000,
	0x853d, /* 1417, 0xec8, KEY_Hangul_WA */
	0x8a9d, /* 1464, 0xef7, KEY_Hangul_AraeAE */
	0xd1ec, /* 2134, 0x1008ff2c, KEY_XF86Eject, Eject device (e.g. DVD) */
	0x318e, /*  569, 0x1c5, U+0139, KEY_Lacute, LATIN CAPITAL LETTER L WITH ACUTE */
	0x849c, /* 1410, 0xec1, KEY_Hangul_YA */
	0x8e2b, /* 1496, 0x1000538, U+0538, KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */
	0x1894, /*  272, 0xfe73, KEY_SlowKeys_Enable */
	0x7113, /* 1218, 0xaff, KEY_cursor */
	0x8510, /* 1415, 0xec6, KEY_Hangul_YE */
	0x6a93, /* 1156, 0xab8, U+2105, KEY_careof, CARE OF */
	0x93d1, /* 1552, 0x1000554, U+0554, KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */
	0xe033, /* 2276, 0x1008fe20, KEY_XF86Ungrab, force ungrab */
	0x8624, /* 1427, 0xed2, KEY_Hangul_YI */
	0xe996, /* 2372, 0x1004ff5e, KEY_osfNextField */
	0x5df8, /* 1025, 0x7cf, U+039f, KEY_Greek_OMICRON, GREEK CAPITAL LETTER OMICRON */
	0x9a7c, /* 1622, 0x1001ea6, U+1ea6, KEY_Acircumflexgrave, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x0000,
	0x709f, /* 1214, 0xafb, U+2117, KEY_phonographcopyright, SOUND RECORDING COPYRIGHT */
	0x8583, /* 1420, 0xecb, KEY_Hangul_YO */
	0xcab5, /* 2059, 0x1000dae, U+0dae, KEY_Sinh_thha, SINHALA MAHA. TAYANNA */
	0x26f5, /*  443, 0xa0, U+00a0, KEY_nobreakspace, NO-BREAK SPACE */
	0xd6ed, /* 2184, 0x1008ff5e, KEY_XF86Game, Launch game */
	0x7ce2, /* 1339, 0xde1, U+0e41, KEY_Thai_saraae, THAI CHARACTER SARA AE */
	0x6cf0, /* 1178, 0xad5, U+2030, KEY_permille, PER MILLE SIGN */
	0x27a2, /*  451, 0xa8, U+00a8, KEY_diaeresis, DIAERESIS */
	0xec94, /* 2405, 0x100000f6, KEY_longminus */
	0x9263, /* 1538, 0x100054d, U+054d, KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */
	0x8888, /* 1447, 0xee6, KEY_Hangul_J_Sios */
	0x9a9a, /* 1623, 0x1001ea7, U+1ea7, KEY_acircumflexgrave, LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0xda14, /* 2217, 0x1008ff82, KEY_XF86Travel, ?? */
	0x0000,
	0xe497, /* 2319, 0x1000fe7e, KEY_Dtilde */
	0x2cdb, /*  512, 0xe2, U+00e2, KEY_acircumflex, LATIN SMALL LETTER A WITH CIRCUMFLEX */
	0x0000,
	0x7b11, /* 1321, 0xdcc, U+0e2c, KEY_Thai_lochula, THAI CHARACTER LO CHULA */
	0xe53f, /* 2326, 0x1000ff73, KEY_hpDeleteChar */
	0x7b42, /* 1323, 0xdce, U+0e2e, KEY_Thai_honokhuk, THAI CHARACTER HO NOKHUK */
	0x6ba2, /* 1167, 0xaca, KEY_signaturemark, (U+2613 SALTIRE) */
	0x8e5d, /* 1498, 0x1000539, U+0539, KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */
	0x0000,
	0x0000,
	0x06b6, /*   80, 0xff9f, KEY_KP_Delete */
	0x9167, /* 1528, 0x1000548, U+0548, KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */
	0xdb87, /* 2232, 0x1008ff92, KEY_XF86Music, Launch music application */
	0x0000,
	0x7c8f, /* 1336, 0xdde, KEY_Thai_maihanakat_maitho */
	0x4f10, /*  883, 0x6a5, U+0455, KEY_Macedonia_dse, CYRILLIC SMALL LETTER DZE */
	0x2ad0, /*  487, 0xcc, U+00cc, KEY_Igrave, LATIN CAPITAL LETTER I WITH GRAVE */
	0x57e6, /*  970, 0x6ef, U+041e, KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */
	0x332e, /*  589, 0x1ec, U+011b, KEY_ecaron, LATIN SMALL LETTER E WITH CARON */
	0x0000,
	0x5f4c, /* 1039, 0x7e5, U+03b5, KEY_Greek_epsilon, GREEK SMALL LETTER EPSILON */
	0x1ef7, /*  332, 0xfd11, KEY_3270_KeyClick */
	0x0000,
	0x0000,
	0xcc10, /* 2075, 0x1000dc2, U+0dc2, KEY_Sinh_ssha, SINHALA MUURDHAJA SAYANNA */
	0x2fee, /*  549, 0x1aa, U+015e, KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */
	0xdb07, /* 2227, 0x1008ff8d, KEY_XF86Away, mark yourself as away */
	0xe177, /* 2288, 0x1005ff10, KEY_SunF36, Labeled F11 */
	0x0000,
	0x587b, /*  976, 0x6f5, U+0423, KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */
	0x0000,
	0x55e4, /*  950, 0x6db, U+0448, KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */
	0x9cc2, /* 1644, 0x1001ebc, U+1ebc, KEY_Etilde, LATIN CAPITAL LETTER E WITH TILDE */
	0x0000,
	0x5ee9, /* 1035, 0x7e1, U+03b1, KEY_Greek_alpha, GREEK SMALL LETTER ALPHA */
	0x9ee0, /* 1665, 0x1001ed1, U+1ed1, KEY_ocircumflexacute, LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x2ec7, /*  535, 0xf8, U+00f8, KEY_ooblique, LATIN SMALL LETTER O WITH STROKE */
	0xd006, /* 2115, 0x1008ff19, KEY_XF86Mail, Invoke user's mail program */
	0x0000,
	0x3230, /*  577, 0x1d2, U+0147, KEY_Ncaron, LATIN CAPITAL LETTER N WITH CARON */
	0x5f1a, /* 1037, 0x7e3, U+03b3, KEY_Greek_gamma, GREEK SMALL LETTER GAMMA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd47e, /* 2159, 0x1008ff45, KEY_XF86Launch5, Launch Application */
	0x727b, /* 1235, 0xbda, KEY_leftshoe, (U+2282 SUBSET OF) */
	0x0000,
	0x7941, /* 1302, 0xdb9, U+0e19, KEY_Thai_nonu, THAI CHARACTER NO NU */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa703, /* 1750, 0x1002247, U+2247, KEY_notapproxeq, NOT ALMOST EQUAL TO */
	0x6bbd, /* 1168, 0xacb, KEY_trademarkincircle */
	0x0c8e, /*  164, 0xffe7, KEY_Meta_L, Left meta */
	0x64cb, /* 1091, 0x8c2, U+221e, KEY_infinity, INFINITY */
	0x569c, /*  957, 0x6e2, U+0411, KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */
	0x0000,
	0x0000,
	0x0000,
	0x0ca2, /*  165, 0xffe8, KEY_Meta_R, Right meta */
	0x7f2d, /* 1361, 0xdf9, U+0e59, KEY_Thai_lekkao, THAI DIGIT NINE */
	0x944c, /* 1557, 0x1000586, U+0586, KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */
	0x5701, /*  961, 0x6e6, U+0424, KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */
	0x0295, /*   29, 0xff2d, KEY_Kana_Lock, Kana Lock */
	0x2b73, /*  495, 0xd3, U+00d3, KEY_Oacute, LATIN CAPITAL LETTER O WITH ACUTE */
	0x6df5, /* 1188, 0xae0, KEY_enopencircbullet, (U+25E6 WHITE BULLET) */
	0x342f, /*  601, 0x2a6, U+0124, KEY_Hcircumflex, LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
	0x98d0, /* 1602, 0x10001d1, U+01d1, KEY_Ocaron, LATIN CAPITAL LETTER O WITH CARON */
	0x579b, /*  967, 0x6ec, U+041b, KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */
	0x56e8, /*  960, 0x6e5, U+0415, KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */
	0x57cd, /*  969, 0x6ee, U+041d, KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */
	0x51ee, /*  911, 0x6b8, U+0408, KEY_Cyrillic_JE, CYRILLIC CAPITAL LETTER JE */
	0x5ae0, /*  997, 0x7ae, U+0385, KEY_Greek_accentdieresis, GREEK DIALYTIKA TONOS */
	0x0000,
	0x5830, /*  973, 0x6f2, U+0420, KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */
	0x0132, /*   14, 0xff3d, KEY_MultipleCandidate */
	0x7dda, /* 1348, 0xdea, U+0e4a, KEY_Thai_maitri, THAI CHARACTER MAI TRI */
	0x0000,
	0x5b99, /* 1003, 0x7b5, U+03ca, KEY_Greek_iotadieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA */
	0x1b1a, /*  294, 0xfeee, KEY_Pointer_DblClick_Dflt */
	0x0000,
	0x3830, /*  648, 0x3e0, U+0101, KEY_amacron, LATIN SMALL LETTER A WITH MACRON */
	0x7e2f, /* 1351, 0xded, U+0e4d, KEY_Thai_nikhahit, THAI CHARACTER NIKHAHIT */
	0x57fe, /*  971, 0x6f0, U+041f, KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */
	0x0000,
	0x9318, /* 1545, 0x1000580, U+0580, KEY_Armenian_re, ARMENIAN SMALL LETTER REH */
	0x0000,
	0x927c, /* 1539, 0x100057d, U+057d, KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */
	0x0000,
	0x5430, /*  933, 0x6ca, U+0439, KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */
	0x7e97, /* 1355, 0xdf3, U+0e53, KEY_Thai_leksam, THAI DIGIT THREE */
	0x555e, /*  945, 0x6d6, U+0436, KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */
	0xd7d6, /* 2194, 0x1008ff69, KEY_XF86News, News */
	0x13a9, /*  227, 0xfe5e, KEY_dead_voiced_sound */
	0x35fe, /*  621, 0x2fe, U+015d, KEY_scircumflex, LATIN SMALL LETTER S WITH CIRCUMFLEX */
	0x58ad, /*  978, 0x6f7, U+0412, KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */
	0x99be, /* 1614, 0x1001e36, U+1e36, KEY_Lbelowdot, LATIN CAPITAL LETTER L WITH DOT BELOW */
	0x5817, /*  972, 0x6f1, U+042f, KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */
	0x5fe0, /* 1045, 0x7eb, U+03bb, KEY_Greek_lamda, GREEK SMALL LETTER LAMDA */
	0x8e76, /* 1499, 0x1000569, U+0569, KEY_Armenian_to, ARMENIAN SMALL LETTER TO */
	0x95ee, /* 1573, 0x10010de, U+10de, KEY_Georgian_par, GEORGIAN LETTER PAR */
	0xe6a0, /* 2340, 0x100000be, KEY_hpguilder */
	0xe40a, /* 2314, 0x1000feb0, KEY_Dring_accent */
	0x5900, /*  981, 0x6fa, U+0417, KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */
	0x0000,
	0x0000,
	0xe1b7, /* 2291, 0xff61, KEY_SunPrint_Screen, Same as XK_Print */
	0x0000,
	0x724e, /* 1233, 0xbd6, KEY_downshoe, (U+222A UNION) */
	0x7312, /* 1241, 0xce1, KEY_hebrew_beth, deprecated */
	0xcbe5, /* 2073, 0x1000dc0, U+0dc0, KEY_Sinh_va, SINHALA VAYANNA */
	0xcee4, /* 2105, 0x1008ff07, KEY_XF86MonBrightnessCycle, Monitor/panel brightness */
	0x0000,
	0x73f7, /* 1250, 0xce7, U+05d7, KEY_hebrew_chet, HEBREW LETTER HET */
	0x7395, /* 1246, 0xce4, U+05d4, KEY_hebrew_he, HEBREW LETTER HE */
	0x0000,
	0x8b99, /* 1472, 0x100055d, U+055d, KEY_Armenian_separation_mark, ARMENIAN COMMA */
	0x566b, /*  955, 0x6e0, U+042e, KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */
	0x5fc7, /* 1044, 0x7ea, U+03ba, KEY_Greek_kappa, GREEK SMALL LETTER KAPPA */
	0x7635, /* 1272, 0xcf7, KEY_hebrew_kuf, deprecated */
	0x0000,
	0x0000,
	0xdce9, /* 2245, 0x1008ff9f, KEY_XF86Time, display, or shows an entry for time seeking */
	0xe0bd, /* 2281, 0x1008fe25, KEY_XF86LogGrabInfo, print all active grabs to log */
	0x9af2, /* 1626, 0x1001eaa, U+1eaa, KEY_Acircumflextilde, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
	0xd2f2, /* 2144, 0x1008ff36, KEY_XF86Shop, Display shopping web site */
	0x0000,
	0xe2cb, /* 2303, 0x1005ff73, KEY_SunOpen */
	0x0000,
	0x0000,
	0x9e9c, /* 1662, 0x1001ece, U+1ece, KEY_Ohook, LATIN CAPITAL LETTER O WITH HOOK ABOVE */
	0x7e4a, /* 1352, 0xdf0, U+0e50, KEY_Thai_leksun, THAI DIGIT ZERO */
	0x0000,
	0x1d20, /*  312, 0xfea2, KEY_CH */
	0x075b, /*   87, 0xffaf, KEY_KP_Divide */
	0x77e9, /* 1289, 0xdac, U+0e0c, KEY_Thai_chochoe, THAI CHARACTER CHO CHOE */
	0x8b7a, /* 1471, 0x1000589, U+0589, KEY_Armenian_verjaket, ARMENIAN FULL STOP */
	0x4d89, /*  869, 0x10004bb, U+04bb, KEY_Cyrillic_shha, CYRILLIC SMALL LETTER SHHA */
	0x0000,
	0xdac0, /* 2224, 0x1008ff8a, KEY_XF86Xfer */
	0x0281, /*   28, 0xff2c, KEY_Massyo, Delete from Dictionary */
	0x0000,
	0x7be0, /* 1329, 0xdd4, U+0e34, KEY_Thai_sarai, THAI CHARACTER SARA I */
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
	0x53cc, /*  929, 0x6c6, U+0444, KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */
	0x53ff, /*  931, 0x6c8, U+0445, KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */
	0x3166, /*  567, 0x1c0, U+0154, KEY_Racute, LATIN CAPITAL LETTER R WITH ACUTE */
	0x0000,
	0x0000,
	0x325e, /*  579, 0x1d8, U+0158, KEY_Rcaron, LATIN CAPITAL LETTER R WITH CARON */
	0x5466, /*  935, 0x6cc, U+043b, KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */
	0x53b3, /*  928, 0x6c5, U+0435, KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */
	0x5498, /*  937, 0x6ce, U+043d, KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */
	0x4f8f, /*  888, 0x6a8, U+0458, KEY_Cyrillic_je, CYRILLIC SMALL LETTER JE */
	0x6681, /* 1110, 0x8fe, U+2193, KEY_downarrow, DOWNWARDS ARROW */
	0x0000,
	0x0a01, /*  127, 0xffd1, KEY_L10 */
	0x5514, /*  942, 0x6d3, U+0441, KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */
	0x0000,
	0xd18b, /* 2130, 0x1008ff28, KEY_XF86Stop, Stop current operation */
	0x18ef, /*  275, 0xfe76, KEY_MouseKeys_Enable */
	0x4ec4, /*  880, 0x6a3, U+0451, KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */
	0x274f, /*  447, 0xa4, U+00a4, KEY_currency, CURRENCY SIGN */
	0x12d6, /*  219, 0xfe56, KEY_dead_abovedot */
	0x0000,
	0x54c9, /*  939, 0x6d0, U+043f, KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */
	0x0000,
	0x4a03, /*  842, 0x10006be, U+06be, KEY_Arabic_heh_doachashmee, ARABIC LETTER HEH DOACHASHMEE */
	0x0000,
	0x1fd6, /*  341, 0xfd1a, KEY_3270_DeleteWord */
	0x5082, /*  897, 0x6ae, U+045e, KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */
	0x80b2, /* 1375, 0xff3e, KEY_Hangul_PreviousCandidate, Previous candidate */
	0x7360, /* 1244, 0xce3, U+05d3, KEY_hebrew_dalet, HEBREW LETTER DALET */
	0x552d, /*  943, 0x6d4, U+0442, KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */
	0xeac9, /* 2385, 0x1000ff6c, KEY_Reset */
	0x0000,
	0xde10, /* 2257, 0x1008ffb1, KEY_XF86TouchpadOff, The touchpad got switched off */
	0x5578, /*  946, 0x6d7, U+0432, KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */
	0x2fc6, /*  547, 0x1a6, U+015a, KEY_Sacute, LATIN CAPITAL LETTER S WITH ACUTE */
	0x54e2, /*  940, 0x6d1, U+044f, KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */
	0x0b4c, /*  147, 0xffdb, KEY_R10 */
	0x0b6e, /*  149, 0xffdc, KEY_R11 */
	0x0b90, /*  151, 0xffdd, KEY_R12 */
	0x0bb2, /*  153, 0xffde, KEY_R13 */
	0x0bd4, /*  155, 0xffdf, KEY_R14 */
	0x0bf6, /*  157, 0xffe0, KEY_R15 */
	0x7225, /* 1231, 0xbcf, U+25cb, KEY_circle, WHITE CIRCLE */
	0x3c34, /*  693, 0x4a5, KEY_kana_middledot, deprecated */
	0x0000,
	0x0000,
	0x2b5f, /*  494, 0xd2, U+00d2, KEY_Ograve, LATIN CAPITAL LETTER O WITH GRAVE */
	0x6b13, /* 1161, 0xabf, KEY_marker */
	0xe09e, /* 2280, 0x1008fe24, KEY_XF86LogWindowTree, print window tree to log */
	0x0000,
	0x21cc, /*  363, 0x30, U+0030, KEY_0, DIGIT ZERO */
	0x21db, /*  364, 0x31, U+0031, KEY_1, DIGIT ONE */
	0x21ea, /*  365, 0x32, U+0032, KEY_2, DIGIT TWO */
	0x21f9, /*  366, 0x33, U+0033, KEY_3, DIGIT THREE */
	0x2208, /*  367, 0x34, U+0034, KEY_4, DIGIT FOUR */
	0x2217, /*  368, 0x35, U+0035, KEY_5, DIGIT FIVE */
	0x2226, /*  369, 0x36, U+0036, KEY_6, DIGIT SIX */
	0x2235, /*  370, 0x37, U+0037, KEY_7, DIGIT SEVEN */
	0x2244, /*  371, 0x38, U+0038, KEY_8, DIGIT EIGHT */
	0x2253, /*  372, 0x39, U+0039, KEY_9, DIGIT NINE */
	0x7769, /* 1284, 0xda7, U+0e07, KEY_Thai_ngongu, THAI CHARACTER NGO NGU */
	0x0000,
	0x98a7, /* 1600, 0x10001b5, U+01b5, KEY_Zstroke, LATIN CAPITAL LETTER Z WITH STROKE */
	0xe04b, /* 2277, 0x1008fe21, KEY_XF86ClearGrab, kill application with grab */
	0x6469, /* 1087, 0x8be, U+2265, KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */
	0x3739, /*  636, 0x3bd, U+014a, KEY_ENG, LATIN CAPITAL LETTER ENG */
	0x5a5c, /*  993, 0x7a7, U+038c, KEY_Greek_OMICRONaccent, GREEK CAPITAL LETTER OMICRON WITH TONOS */
	0x22ec, /*  380, 0x41, U+0041, KEY_A, LATIN CAPITAL LETTER A */
	0x22fb, /*  381, 0x42, U+0042, KEY_B, LATIN CAPITAL LETTER B */
	0x230a, /*  382, 0x43, U+0043, KEY_C, LATIN CAPITAL LETTER C */
	0x2319, /*  383, 0x44, U+0044, KEY_D, LATIN CAPITAL LETTER D */
	0x2328, /*  384, 0x45, U+0045, KEY_E, LATIN CAPITAL LETTER E */
	0x2337, /*  385, 0x46, U+0046, KEY_F, LATIN CAPITAL LETTER F */
	0x2346, /*  386, 0x47, U+0047, KEY_G, LATIN CAPITAL LETTER G */
	0x2355, /*  387, 0x48, U+0048, KEY_H, LATIN CAPITAL LETTER H */
	0x2364, /*  388, 0x49, U+0049, KEY_I, LATIN CAPITAL LETTER I */
	0x2373, /*  389, 0x4a, U+004a, KEY_J, LATIN CAPITAL LETTER J */
	0x2382, /*  390, 0x4b, U+004b, KEY_K, LATIN CAPITAL LETTER K */
	0x2391, /*  391, 0x4c, U+004c, KEY_L, LATIN CAPITAL LETTER L */
	0x23a0, /*  392, 0x4d, U+004d, KEY_M, LATIN CAPITAL LETTER M */
	0x23af, /*  393, 0x4e, U+004e, KEY_N, LATIN CAPITAL LETTER N */
	0x23be, /*  394, 0x4f, U+004f, KEY_O, LATIN CAPITAL LETTER O */
	0x23cd, /*  395, 0x50, U+0050, KEY_P, LATIN CAPITAL LETTER P */
	0x23dc, /*  396, 0x51, U+0051, KEY_Q, LATIN CAPITAL LETTER Q */
	0x23eb, /*  397, 0x52, U+0052, KEY_R, LATIN CAPITAL LETTER R */
	0x23fa, /*  398, 0x53, U+0053, KEY_S, LATIN CAPITAL LETTER S */
	0x2409, /*  399, 0x54, U+0054, KEY_T, LATIN CAPITAL LETTER T */
	0x0409, /*   47, 0xff60, KEY_Select, Select, mark */
	0x2427, /*  401, 0x56, U+0056, KEY_V, LATIN CAPITAL LETTER V */
	0x2436, /*  402, 0x57, U+0057, KEY_W, LATIN CAPITAL LETTER W */
	0x1022, /*  197, 0xfe26, KEY_ISO_Partial_Space_Right */
	0x2454, /*  404, 0x59, U+0059, KEY_Y, LATIN CAPITAL LETTER Y */
	0x1d52, /*  315, 0xfea5, KEY_C_H */
	0x0000,
	0x0000,
	0xd8c5, /* 2204, 0x1008ff75, KEY_XF86RotationPB, don't use */
	0xea4e, /* 2380, 0x1004ff72, KEY_osfDeselectAll */
	0x7697, /* 1276, 0xcfa, KEY_hebrew_taf, deprecated */
	0x2c20, /*  503, 0xda, U+00da, KEY_Uacute, LATIN CAPITAL LETTER U WITH ACUTE */
	0x2517, /*  413, 0x61, U+0061, KEY_a, LATIN SMALL LETTER A */
	0x2526, /*  414, 0x62, U+0062, KEY_b, LATIN SMALL LETTER B */
	0x2535, /*  415, 0x63, U+0063, KEY_c, LATIN SMALL LETTER C */
	0x2544, /*  416, 0x64, U+0064, KEY_d, LATIN SMALL LETTER D */
	0x2553, /*  417, 0x65, U+0065, KEY_e, LATIN SMALL LETTER E */
	0x00e7, /*   11, 0xff20, KEY_Multi_key, Multi-key character compose */
	0x2571, /*  419, 0x67, U+0067, KEY_g, LATIN SMALL LETTER G */
	0x2580, /*  420, 0x68, U+0068, KEY_h, LATIN SMALL LETTER H */
	0x258f, /*  421, 0x69, U+0069, KEY_i, LATIN SMALL LETTER I */
	0x259e, /*  422, 0x6a, U+006a, KEY_j, LATIN SMALL LETTER J */
	0x25ad, /*  423, 0x6b, U+006b, KEY_k, LATIN SMALL LETTER K */
	0x25bc, /*  424, 0x6c, U+006c, KEY_l, LATIN SMALL LETTER L */
	0x25cb, /*  425, 0x6d, U+006d, KEY_m, LATIN SMALL LETTER M */
	0x25da, /*  426, 0x6e, U+006e, KEY_n, LATIN SMALL LETTER N */
	0x25e9, /*  427, 0x6f, U+006f, KEY_o, LATIN SMALL LETTER O */
	0x25f8, /*  428, 0x70, U+0070, KEY_p, LATIN SMALL LETTER P */
	0x2607, /*  429, 0x71, U+0071, KEY_q, LATIN SMALL LETTER Q */
	0x2616, /*  430, 0x72, U+0072, KEY_r, LATIN SMALL LETTER R */
	0x2625, /*  431, 0x73, U+0073, KEY_s, LATIN SMALL LETTER S */
	0x2634, /*  432, 0x74, U+0074, KEY_t, LATIN SMALL LETTER T */
	0x2643, /*  433, 0x75, U+0075, KEY_u, LATIN SMALL LETTER U */
	0x2652, /*  434, 0x76, U+0076, KEY_v, LATIN SMALL LETTER V */
	0x0784, /*   89, 0xffb1, KEY_KP_1 */
	0x2670, /*  436, 0x78, U+0078, KEY_x, LATIN SMALL LETTER X */
	0x267f, /*  437, 0x79, U+0079, KEY_y, LATIN SMALL LETTER Y */
	0x1d41, /*  314, 0xfea4, KEY_C_h */
	0x9f3a, /* 1668, 0x1001ed4, U+1ed4, KEY_Ocircumflexhook, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x73ac, /* 1247, 0xce5, U+05d5, KEY_hebrew_waw, HEBREW LETTER VAV */
	0x07ba, /*   92, 0xffb4, KEY_KP_4 */
	0xd717, /* 2186, 0x1008ff60, KEY_XF86iTouch, Logitech iTouch- don't use */
	0x7a53, /* 1313, 0xdc4, U+0e24, KEY_Thai_ru, THAI CHARACTER RU */
	0x041d, /*   48, 0xff61, KEY_Print */
	0x0000,
	0x0000,
	0xe5fb, /* 2334, 0x100000a8, KEY_hpmute_acute */
	0xa0b0, /* 1682, 0x1001ee2, U+1ee2, KEY_Ohornbelowdot, LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
	0xdb6d, /* 2231, 0x1008ff91, KEY_XF86Pictures, Show pictures */
	0x4881, /*  828, 0x5ed, U+064d, KEY_Arabic_kasratan, ARABIC KASRATAN */
	0x9a2d, /* 1619, 0x1001ea3, U+1ea3, KEY_ahook, LATIN SMALL LETTER A WITH HOOK ABOVE */
	0x0000,
	0x4941, /*  835, 0x1000654, U+0654, KEY_Arabic_hamza_above, ARABIC HAMZA ABOVE */
	0x3057, /*  554, 0x1b1, U+0105, KEY_aogonek, LATIN SMALL LETTER A WITH OGONEK */
	0x0000,
	0x0000,
	0x7459, /* 1254, 0xce9, U+05d9, KEY_hebrew_yod, HEBREW LETTER YOD */
	0x74a8, /* 1257, 0xcec, U+05dc, KEY_hebrew_lamed, HEBREW LETTER LAMED */
	0x6c71, /* 1174, 0xad1, U+2019, KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */
	0x7ff8, /* 1369, 0xff38, KEY_Hangul_Jeonja, Jeonja mode */
	0x6627, /* 1106, 0x8f6, U+0192, KEY_function, LATIN SMALL LETTER F WITH HOOK */
	0x0000,
	0xa0fd, /* 1685, 0x1001ee5, U+1ee5, KEY_ubelowdot, LATIN SMALL LETTER U WITH DOT BELOW */
	0x3bdd, /*  690, 0x4a3, U+300d, KEY_kana_closingbracket, RIGHT CORNER BRACKET */
	0x0000,
	0xc785, /* 2021, 0x1000d85, U+0d85, KEY_Sinh_a, SINHALA AYANNA */
	0x6aa7, /* 1157, 0xabb, U+2012, KEY_figdash, FIGURE DASH */
	0x2df3, /*  525, 0xef, U+00ef, KEY_idiaeresis, LATIN SMALL LETTER I WITH DIAERESIS */
	0x0000,
	0x4d00, /*  865, 0x10004b7, U+04b7, KEY_Cyrillic_che_descender, CYRILLIC SMALL LETTER CHE WITH DESCENDER */
	0x9f92, /* 1671, 0x1001ed7, U+1ed7, KEY_ocircumflextilde, LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x03e5, /*   45, 0xff57, KEY_End, EOL */
	0x0000,
	0xc7d9, /* 2025, 0x1000d89, U+0d89, KEY_Sinh_i, SINHALA IYANNA */
	0xde93, /* 2262, 0x1008ffb6, KEY_XF86AudioPreset, Select equalizer preset, e.g. theatre-mode */
	0x3ad3, /*  678, 0x1001e82, U+1e82, KEY_Wacute, LATIN CAPITAL LETTER W WITH ACUTE */
	0xdbb7, /* 2234, 0x1008ff94, KEY_XF86Bluetooth, Enable/disable Bluetooth */
	0x36ba, /*  630, 0x3b3, U+0157, KEY_rcedilla, LATIN SMALL LETTER R WITH CEDILLA */
	0x0000,
	0xc8bf, /* 2036, 0x1000d94, U+0d94, KEY_Sinh_o, SINHALA OYANNA */
	0x49cb, /*  840, 0x10006af, U+06af, KEY_Arabic_gaf, ARABIC LETTER GAF */
	0x0000,
	0xb7d4, /* 1893, 0x1002882, U+2882, KEY_braille_dots_28, BRAILLE PATTERN DOTS-28 */
	0x5d52, /* 1018, 0x7c9, U+0399, KEY_Greek_IOTA, GREEK CAPITAL LETTER IOTA */
	0x3571, /*  615, 0x2de, U+015c, KEY_Scircumflex, LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
	0x3f84, /*  733, 0x4ca, U+30cf, KEY_kana_HA, KATAKANA LETTER HA */
	0x0000,
	0x0e50, /*  182, 0xfe07, KEY_ISO_Group_Lock */
	0x0000,
	0x3fd8, /*  737, 0x4cd, U+30d8, KEY_kana_HE, KATAKANA LETTER HE */
	0x0000,
	0x3db3, /*  711, 0x4b6, U+30ab, KEY_kana_KA, KATAKANA LETTER KA */
	0x36fa, /*  633, 0x3ba, U+0113, KEY_emacron, LATIN SMALL LETTER E WITH MACRON */
	0x1329, /*  222, 0xfe59, KEY_dead_doubleacute */
	0x0000,
	0x3df2, /*  714, 0x4b9, U+30b1, KEY_kana_KE, KATAKANA LETTER KE */
	0xd864, /* 2200, 0x1008ff70, KEY_XF86Q, Compaq's Q - don't use */
	0x3f1b, /*  728, 0x4c5, U+30ca, KEY_kana_NA, KATAKANA LETTER NA */
	0x190d, /*  276, 0xfe77, KEY_MouseKeys_Accel_Enable */
	0x3dc8, /*  712, 0x4b7, U+30ad, KEY_kana_KI, KATAKANA LETTER KI */
	0x2be2, /*  500, 0xd8, U+00d8, KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */
	0x3f5a, /*  731, 0x4c8, U+30cd, KEY_kana_NE, KATAKANA LETTER NE */
	0x7c2a, /* 1332, 0xdd7, U+0e37, KEY_Thai_sarauee, THAI CHARACTER SARA UEE */
	0x0030, /*    2, 0xff09, KEY_Tab */
	0x0000,
	0x3e07, /*  715, 0x4ba, U+30b3, KEY_kana_KO, KATAKANA LETTER KO */
	0x2bf6, /*  501, 0xd8, U+00d8, KEY_Ooblique, LATIN CAPITAL LETTER O WITH STROKE */
	0x269d, /*  439, 0x7b, U+007b, KEY_braceleft, LEFT CURLY BRACKET */
	0x0000,
	0x3e86, /*  721, 0x4c0, U+30bf, KEY_kana_TA, KATAKANA LETTER TA */
	0x0000,
	0x3ddd, /*  713, 0x4b8, U+30af, KEY_kana_KU, KATAKANA LETTER KU */
	0x9efe, /* 1666, 0x1001ed2, U+1ed2, KEY_Ocircumflexgrave, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x3ef1, /*  726, 0x4c3, U+30c6, KEY_kana_TE, KATAKANA LETTER TE */
	0x58c6, /*  979, 0x6f8, U+042c, KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */
	0x402c, /*  741, 0x4d1, U+30e0, KEY_kana_MU, KATAKANA LETTER MU */
	0x4961, /*  836, 0x1000655, U+0655, KEY_Arabic_hamza_below, ARABIC HAMZA BELOW */
	0x3eb1, /*  723, 0x4c1, KEY_kana_TI, deprecated */
	0x0000,
	0x406b, /*  744, 0x4d4, U+30e4, KEY_kana_YA, KATAKANA LETTER YA */
	0x006a, /*    5, 0xff0d, KEY_Return, Return, enter */
	0x3e71, /*  720, 0x4bf, U+30bd, KEY_kana_SO, KATAKANA LETTER SO */
	0x6487, /* 1088, 0x8bf, U+222b, KEY_integral, INTEGRAL */
	0x01c6, /*   20, 0xff24, KEY_Romaji, to Romaji */
	0x0564, /*   64, 0xff91, KEY_KP_F1, PF1, KP_A, ... */
	0x0577, /*   65, 0xff92, KEY_KP_F2 */
	0x058a, /*   66, 0xff93, KEY_KP_F3 */
	0x059d, /*   67, 0xff94, KEY_KP_F4 */
	0xa3af, /* 1716, 0x10020a8, U+20a8, KEY_RupeeSign, RUPEE SIGN */
	0x3c50, /*  694, 0x4a6, U+30f2, KEY_kana_WO, KATAKANA LETTER WO */
	0x0000,
	0x6055, /* 1050, 0x7ef, U+03bf, KEY_Greek_omicron, GREEK SMALL LETTER OMICRON */
	0x069f, /*   79, 0xff9e, KEY_KP_Insert */
	0x4095, /*  746, 0x4d6, U+30e8, KEY_kana_YO, KATAKANA LETTER YO */
	0x123a, /*  213, 0xfe51, KEY_dead_acute */
	0x51a3, /*  908, 0x6b6, KEY_Ukranian_I, deprecated */
	0x0000,
	0x1347, /*  223, 0xfe5a, KEY_dead_caron */
	0x0000,
	0x2c65, /*  506, 0xdd, U+00dd, KEY_Yacute, LATIN CAPITAL LETTER Y WITH ACUTE */
	0x956d, /* 1568, 0x10010d9, U+10d9, KEY_Georgian_kan, GEORGIAN LETTER KAN */
	0x8485, /* 1409, 0xec0, KEY_Hangul_AE */
	0x0000,
	0x0000,
	0x1f9e, /*  339, 0xfd18, KEY_3270_Record */
	0x0000,
	0x28cb, /*  464, 0xb5, U+00b5, KEY_mu, MICRO SIGN */
	0xd6a1, /* 2181, 0x1008ff5b, KEY_XF86Documents, Open documents window */
	0x0000,
	0x6221, /* 1068, 0x8a7, U+23a1, KEY_topleftsqbracket, LEFT SQUARE BRACKET UPPER CORNER */
	0x0000,
	0x2c0c, /*  502, 0xd9, U+00d9, KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd5d4, /* 2172, 0x1008ff52, KEY_XF86Book, Launch bookreader */
	0xdcb0, /* 2243, 0x1008ff9d, KEY_XF86FrameBack, video: go one frame back */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x1d30, /*  313, 0xfea3, KEY_c_h */
	0x1d9b, /*  318, 0xfd03, KEY_3270_Right2 */
	0x4f44, /*  885, 0x6a6, KEY_Ukranian_i, deprecated */
	0x5d9c, /* 1021, 0x7cb, U+039b, KEY_Greek_LAMBDA, GREEK CAPITAL LETTER LAMDA */
	0x6fba, /* 1205, 0xaf2, U+2021, KEY_doubledagger, DOUBLE DAGGER */
	0x0000,
	0x3018, /*  551, 0x1ac, U+0179, KEY_Zacute, LATIN CAPITAL LETTER Z WITH ACUTE */
	0xe2f6, /* 2305, 0x1005ff75, KEY_SunCut */
	0x0000,
	0x302c, /*  552, 0x1ae, U+017d, KEY_Zcaron, LATIN CAPITAL LETTER Z WITH CARON */
	0x26b4, /*  440, 0x7c, U+007c, KEY_bar, VERTICAL LINE */
	0x8651, /* 1429, 0xed4, KEY_Hangul_J_Kiyeog */
	0x0000,
	0x0000,
	0x5d0a, /* 1015, 0x7c6, U+0396, KEY_Greek_ZETA, GREEK CAPITAL LETTER ZETA */
	0x9b10, /* 1627, 0x1001eab, U+1eab, KEY_acircumflextilde, LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x2d81, /*  520, 0xea, U+00ea, KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */
	0x0000,
	0xd9fd, /* 2216, 0x1008ff81, KEY_XF86Tools, toolbox of desktop/app. */
	0x0000,
	0x0000,
	0x61b8, /* 1064, 0x8a3, KEY_horizconnector, (U+2500 BOX DRAWINGS LIGHT HORIZONTAL) */
	0xa995, /* 1774, 0x100280b, U+280b, KEY_braille_dots_124, BRAILLE PATTERN DOTS-124 */
	0x13eb, /*  229, 0xfe60, KEY_dead_belowdot */
	0x0000,
	0xaa81, /* 1782, 0x1002813, U+2813, KEY_braille_dots_125, BRAILLE PATTERN DOTS-125 */
	0xe8a8, /* 2362, 0x1004ff52, KEY_osfUp */
	0x0000,
	0x2c79, /*  507, 0xde, U+00de, KEY_THORN, LATIN CAPITAL LETTER THORN */
	0xe4c3, /* 2321, 0x1000ff00, KEY_DRemove, Remove */
	0x0000,
	0x0000,
	0xa16a, /* 1690, 0x1001eea, U+1eea, KEY_Uhorngrave, LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
	0xe30a, /* 2306, 0x1005ff76, KEY_SunPowerSwitch */
	0xac9c, /* 1800, 0x1002825, U+2825, KEY_braille_dots_136, BRAILLE PATTERN DOTS-136 */
	0xebd6, /* 2397, 0x100000a8, KEY_mute_acute */
	0x72a7, /* 1237, 0xbfc, U+22a2, KEY_righttack, RIGHT TACK */
	0x374a, /*  637, 0x3bf, U+014b, KEY_eng, LATIN SMALL LETTER ENG */
	0x0000,
	0x0000,
	0x30e4, /*  561, 0x1ba, U+015f, KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */
	0x0000,
	0x0000,
	0xb0e4, /* 1836, 0x1002849, U+2849, KEY_braille_dots_147, BRAILLE PATTERN DOTS-147 */
	0x0000,
	0x12be, /*  218, 0xfe55, KEY_dead_breve */
	0xb8a4, /* 1900, 0x1002889, U+2889, KEY_braille_dots_148, BRAILLE PATTERN DOTS-148 */
	0x7cb3, /* 1337, 0xddf, U+0e3f, KEY_Thai_baht, THAI CURRENCY SYMBOL BAHT */
	0x0000,
	0xb08a, /* 1833, 0x1002846, U+2846, KEY_braille_dots_237, BRAILLE PATTERN DOTS-237 */
	0x2e0b, /*  526, 0xf0, U+00f0, KEY_eth, LATIN SMALL LETTER ETH */
	0x0000,
	0x05da, /*   70, 0xff97, KEY_KP_Up */
	0x0001, /*    0, 0x0, KEY_VoidSymbol, Void symbol */
	0x0000,
	0xb102, /* 1837, 0x100284a, U+284a, KEY_braille_dots_247, BRAILLE PATTERN DOTS-247 */
	0x0000,
	0x0000,
	0xbb88, /* 1924, 0x10028a1, U+28a1, KEY_braille_dots_168, BRAILLE PATTERN DOTS-168 */
	0xe361, /* 2309, 0x1005ff79, KEY_SunAudioRaiseVolume */
	0x3d1e, /*  704, 0x4af, KEY_kana_tu, deprecated */
	0xb1f6, /* 1845, 0x1002852, U+2852, KEY_braille_dots_257, BRAILLE PATTERN DOTS-257 */
	0x99ad, /* 1613, 0x1000292, U+0292, KEY_ezh, LATIN SMALL LETTER EZH */
	0x3040, /*  553, 0x1af, U+017b, KEY_Zabovedot, LATIN CAPITAL LETTER Z WITH DOT ABOVE */
	0x3cf3, /*  702, 0x4ae, U+30e7, KEY_kana_yo, KATAKANA LETTER SMALL YO */
	0x8950, /* 1454, 0xeed, KEY_Hangul_J_Phieuf */
	0x7aaf, /* 1317, 0xdc8, U+0e28, KEY_Thai_sosala, THAI CHARACTER SO SALA */
	0xa422, /* 1721, 0x1002070, U+2070, KEY_zerosuperior, SUPERSCRIPT ZERO */
	0x14bf, /*  237, 0xfe66, KEY_dead_doublegrave */
	0x0000,
	0x3cde, /*  701, 0x4ad, U+30e5, KEY_kana_yu, KATAKANA LETTER SMALL YU */
	0x050e, /*   60, 0xff7f, KEY_Num_Lock */
	0x71ee, /* 1228, 0xbca, U+2218, KEY_jot, RING OPERATOR */
	0x40aa, /*  747, 0x4d7, U+30e9, KEY_kana_RA, KATAKANA LETTER RA */
	0x7264, /* 1234, 0xbd8, KEY_rightshoe, (U+2283 SUPERSET OF) */
	0x0000,
	0x0000,
	0x843a, /* 1406, 0xebd, KEY_Hangul_Phieuf */
	0x0000,
	0x0000,
	0x1a2b, /*  286, 0xfee6, KEY_Pointer_DownLeft */
	0xd5fe, /* 2174, 0x1008ff54, KEY_XF86Calculater, Launch Calculater */
	0xbbe3, /* 1927, 0x10028a4, U+28a4, KEY_braille_dots_368, BRAILLE PATTERN DOTS-368 */
	0x953a, /* 1566, 0x10010d7, U+10d7, KEY_Georgian_tan, GEORGIAN LETTER TAN */
	0x0000,
	0xe930, /* 2368, 0x1004ff5a, KEY_osfBeginData */
	0x0000,
	0x4625, /*  804, 0x5d1, U+0631, KEY_Arabic_ra, ARABIC LETTER REH */
	0xba6f, /* 1915, 0x1002898, U+2898, KEY_braille_dots_458, BRAILLE PATTERN DOTS-458 */
	0x4b12, /*  851, 0x1000497, U+0497, KEY_Cyrillic_zhe_descender, CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
	0x0000,
	0x757b, /* 1265, 0xcf3, U+05e3, KEY_hebrew_finalpe, HEBREW LETTER FINAL PE */
	0x0000,
	0x69bd, /* 1147, 0xaaf, U+2025, KEY_doubbaselinedot, TWO DOT LEADER */
	0xbc5f, /* 1931, 0x10028a8, U+28a8, KEY_braille_dots_468, BRAILLE PATTERN DOTS-468 */
	0x36a6, /*  629, 0x3ac, U+0166, KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */
	0x9433, /* 1556, 0x1000556, U+0556, KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */
	0x1779, /*  263, 0xfe8c, KEY_dead_greek */
	0xe461, /* 2317, 0x1000fe27, KEY_Dacute_accent */
	0x0000,
	0xc04f, /* 1963, 0x10028c8, U+28c8, KEY_braille_dots_478, BRAILLE PATTERN DOTS-478 */
	0x59bf, /*  988, 0x7a2, U+0388, KEY_Greek_EPSILONaccent, GREEK CAPITAL LETTER EPSILON WITH TONOS */
	0x0000,
	0x2063, /*  346, 0x20, U+0020, KEY_space, SPACE */
	0x3665, /*  626, 0x3a6, U+013b, KEY_Lcedilla, LATIN CAPITAL LETTER L WITH CEDILLA */
	0x4a27, /*  843, 0x10006cc, U+06cc, KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */
	0x2765, /*  448, 0xa5, U+00a5, KEY_yen, YEN SIGN */
	0x808c, /* 1374, 0xff3d, KEY_Hangul_MultipleCandidate, Multiple candidate */
	0x85c8, /* 1423, 0xece, KEY_Hangul_WE */
	0x1222, /*  212, 0xfe50, KEY_dead_grave */
	0x0000,
	0xa0cb, /* 1683, 0x1001ee3, U+1ee3, KEY_ohornbelowdot, LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
	0xc14b, /* 1971, 0x10028d0, U+28d0, KEY_braille_dots_578, BRAILLE PATTERN DOTS-578 */
	0x391e, /*  659, 0x1000175, U+0175, KEY_wcircumflex, LATIN SMALL LETTER W WITH CIRCUMFLEX */
	0x3b2b, /*  682, 0x1001ef2, U+1ef2, KEY_Ygrave, LATIN CAPITAL LETTER Y WITH GRAVE */
	0xd5ea, /* 2173, 0x1008ff53, KEY_XF86CD, Launch CD/DVD player */
	0x0000,
	0x108a, /*  200, 0xfe29, KEY_ISO_Release_Margin_Left */
	0x0000,
	0x20a0, /*  349, 0x23, U+0023, KEY_numbersign, NUMBER SIGN */
	0x90cf, /* 1522, 0x1000545, U+0545, KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */
	0xc8aa, /* 2035, 0x1000d93, U+0d93, KEY_Sinh_ai, SINHALA AIYANNA */
	0x0000,
	0x6309, /* 1076, 0x8af, U+23a8, KEY_leftmiddlecurlybrace, LEFT CURLY BRACKET MIDDLE PIECE */
	0x2987, /*  472, 0xbd, U+00bd, KEY_onehalf, VULGAR FRACTION ONE HALF */
	0xcc67, /* 2079, 0x1000dc6, U+0dc6, KEY_Sinh_fa, SINHALA FAYANNA */
	0x0000,
	0x0000,
	0x8324, /* 1396, 0xeb3, KEY_Hangul_SsangPieub */
	0xa489, /* 1725, 0x1002077, U+2077, KEY_sevensuperior, SUPERSCRIPT SEVEN */
	0x3807, /*  646, 0x3dd, U+0168, KEY_Utilde, LATIN CAPITAL LETTER U WITH TILDE */
	0x0000,
	0x0000,
	0x7e11, /* 1350, 0xdec, U+0e4c, KEY_Thai_thanthakhat, THAI CHARACTER THANTHAKHAT */
	0x0183, /*   17, 0xff22, KEY_Muhenkan, Cancel Conversion */
	0x0000,
	0xa022, /* 1676, 0x1001edc, U+1edc, KEY_Ohorngrave, LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
	0xe8e6, /* 2365, 0x1004ff57, KEY_osfEndLine */
	0x45f4, /*  802, 0x5cf, U+062f, KEY_Arabic_dal, ARABIC LETTER DAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3319, /*  588, 0x1ea, U+0119, KEY_eogonek, LATIN SMALL LETTER E WITH OGONEK */
	0xc8e8, /* 2038, 0x1000d96, U+0d96, KEY_Sinh_au, SINHALA AUYANNA */
	0x03f6, /*   46, 0xff58, KEY_Begin, BOL */
	0xd84d, /* 2199, 0x1008ff6e, KEY_XF86Phone, Launch phone; dial number */
	0x59fd, /*  990, 0x7a4, U+038a, KEY_Greek_IOTAaccent, GREEK CAPITAL LETTER IOTA WITH TONOS */
	0x0000,
	0x45c3, /*  800, 0x5cd, U+062d, KEY_Arabic_hah, ARABIC LETTER HAH */
	0x0000,
	0x0000,
	0x6608, /* 1105, 0x8ef, U+2202, KEY_partialderivative, PARTIAL DIFFERENTIAL */
	0xcc91, /* 2081, 0x1000dcf, U+0dcf, KEY_Sinh_aa2, SINHALA AELA-PILLA */
	0x7b91, /* 1326, 0xdd1, U+0e31, KEY_Thai_maihanakat, THAI CHARACTER MAI HAN-AKAT */
	0x9231, /* 1536, 0x100054c, U+054c, KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */
	0x0000,
	0x47df, /*  822, 0x5e7, KEY_Arabic_heh, deprecated */
	0x0000,
	0x4766, /*  817, 0x5e3, U+0643, KEY_Arabic_kaf, ARABIC LETTER KAF */
	0x0000,
	0xcca7, /* 2082, 0x1000dd0, U+0dd0, KEY_Sinh_ae2, SINHALA AEDA-PILLA */
	0x0000,
	0x0000,
	0xcb25, /* 2064, 0x1000db4, U+0db4, KEY_Sinh_pa, SINHALA PAYANNA */
	0x4981, /*  837, 0x1000698, U+0698, KEY_Arabic_jeh, ARABIC LETTER JEH */
	0x0000,
	0x33ee, /*  598, 0x1fe, U+0163, KEY_tcedilla, LATIN SMALL LETTER T WITH CEDILLA */
	0xc75b, /* 2019, 0x1000d82, U+0d82, KEY_Sinh_ng, SINHALA ANUSVARAYA */
	0xcd6b, /* 2091, 0x1000ddb, U+0ddb, KEY_Sinh_ai2, SINHALA KOMBU DEKA */
	0x477e, /*  818, 0x5e4, U+0644, KEY_Arabic_lam, ARABIC LETTER LAM */
	0x629b, /* 1072, 0x8ab, U+239b, KEY_topleftparens, LEFT PARENTHESIS UPPER HOOK */
	0xd2d7, /* 2143, 0x1008ff35, KEY_XF86LightBulb, Light bulb keys exist */
	0x6f8c, /* 1203, 0xaf0, U+2720, KEY_maltesecross, MALTESE CROSS */
	0x0000,
	0xa1c8, /* 1694, 0x1001eee, U+1eee, KEY_Uhorntilde, LATIN CAPITAL LETTER U WITH HORN AND TILDE */
	0x79a6, /* 1306, 0xdbd, U+0e1d, KEY_Thai_fofa, THAI CHARACTER FO FA */
	0xcd55, /* 2090, 0x1000dda, U+0dda, KEY_Sinh_ee2, SINHALA DIGA KOMBUVA */
	0x9520, /* 1565, 0x10010d6, U+10d6, KEY_Georgian_zen, GEORGIAN LETTER ZEN */
	0x1edb, /*  331, 0xfd10, KEY_3270_AltCursor */
	0x3d33, /*  705, 0x4b0, U+30fc, KEY_prolongedsound, KATAKANA-HIRAGANA PROLONGED SOUND MARK */
	0x73dd, /* 1249, 0xce6, KEY_hebrew_zayin, deprecated */
	0x3871, /*  651, 0x3ef, U+012b, KEY_imacron, LATIN SMALL LETTER I WITH MACRON */
	0x0cb6, /*  166, 0xffe9, KEY_Alt_L, Left alt */
	0xe726, /* 2346, 0x1004ff03, KEY_osfCut */
	0xd790, /* 2191, 0x1008ff66, KEY_XF86MenuPB, distinguish PB from keyboard */
	0x0000,
	0xa322, /* 1710, 0x10020a2, U+20a2, KEY_CruzeiroSign, CRUZEIRO SIGN */
	0xc82b, /* 2029, 0x1000d8d, U+0d8d, KEY_Sinh_ri, SINHALA IRUYANNA */
	0x0cc9, /*  167, 0xffea, KEY_Alt_R, Right alt */
	0x5981, /*  986, 0x6ff, U+042a, KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */
	0x0000,
	0x0000,
	0xcdac, /* 2094, 0x1000dde, U+0dde, KEY_Sinh_au2, SINHALA KOMBUVA HAA GAYANUKITTA */
	0x9a1a, /* 1618, 0x1001ea2, U+1ea2, KEY_Ahook, LATIN CAPITAL LETTER A WITH HOOK ABOVE */
	0x0000,
	0x0000,
	0x0057, /*    4, 0xff0b, KEY_Clear */
	0x0000,
	0x0000,
	0x0000,
	0x2076, /*  347, 0x21, U+0021, KEY_exclam, EXCLAMATION MARK */
	0x0000,
	0x0000,
	0x0000,
	0x4579, /*  797, 0x5ca, U+062a, KEY_Arabic_teh, ARABIC LETTER TEH */
	0x0000,
	0x2c4d, /*  505, 0xdc, U+00dc, KEY_Udiaeresis, LATIN CAPITAL LETTER U WITH DIAERESIS */
	0x0000,
	0x0000,
	0x0000,
	0x1182, /*  207, 0xfe30, KEY_ISO_Continuous_Underline */
	0xc7c3, /* 2024, 0x1000d88, U+0d88, KEY_Sinh_aee, SINHALA AEEYANNA */
	0x248b, /*  407, 0x5c, U+005c, KEY_backslash, REVERSE SOLIDUS */
	0x0000,
	0x0000,
	0xd703, /* 2185, 0x1008ff5f, KEY_XF86Go, Go to URL */
	0x306c, /*  555, 0x1b2, U+02db, KEY_ogonek, OGONEK */
	0x6596, /* 1100, 0x8db, U+2283, KEY_includes, SUPERSET OF */
	0xd0e9, /* 2124, 0x1008ff22, KEY_XF86ContrastAdjust, Adjust screen contrast */
	0x0000,
	0x46d0, /*  811, 0x5d8, U+0638, KEY_Arabic_zah, ARABIC LETTER ZAH */
	0x04c7, /*   57, 0xff6b, KEY_Break */
	0x0000,
	0x47f7, /*  823, 0x5e8, U+0648, KEY_Arabic_waw, ARABIC LETTER WAW */
	0x482f, /*  825, 0x5ea, U+064a, KEY_Arabic_yeh, ARABIC LETTER YEH */
	0xcacc, /* 2060, 0x1000daf, U+0daf, KEY_Sinh_dha, SINHALA DAYANNA */
	0x1687, /*  252, 0xfe81, KEY_dead_A */
	0x6bdc, /* 1169, 0xacc, KEY_leftopentriangle, (U+25C1 WHITE LEFT-POINTING TRIANGLE) */
	0x2cc7, /*  511, 0xe1, U+00e1, KEY_aacute, LATIN SMALL LETTER A WITH ACUTE */
	0x0000,
	0x16af, /*  254, 0xfe83, KEY_dead_E */
	0x5e70, /* 1030, 0x7d5, U+03a5, KEY_Greek_UPSILON, GREEK CAPITAL LETTER UPSILON */
	0x0000,
	0xe205, /* 2294, 0xff55, KEY_SunPageUp, Same as XK_Prior */
	0x16d7, /*  256, 0xfe85, KEY_dead_I */
	0x7037, /* 1210, 0xaf7, U+2642, KEY_malesymbol, MALE SIGN */
	0x526c, /*  916, 0x6ba, KEY_Serbian_NJE, deprecated */
	0x4c2b, /*  859, 0x10004af, U+04af, KEY_Cyrillic_u_straight, CYRILLIC SMALL LETTER STRAIGHT U */
	0x0000,
	0x0000,
	0x16ff, /*  258, 0xfe87, KEY_dead_O */
	0x0000,
	0x0000,
	0x2a3e, /*  480, 0xc5, U+00c5, KEY_Aring, LATIN CAPITAL LETTER A WITH RING ABOVE */
	0x0000,
	0x0000,
	0x1727, /*  260, 0xfe89, KEY_dead_U */
	0x0000,
	0x68c7, /* 1136, 0xaa2, U+2002, KEY_enspace, EN SPACE */
	0x2a9f, /*  485, 0xca, U+00ca, KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
	0x5f7f, /* 1041, 0x7e7, U+03b7, KEY_Greek_eta, GREEK SMALL LETTER ETA */
	0x126f, /*  215, 0xfe53, KEY_dead_tilde */
	0x0000,
	0x22b1, /*  377, 0x3e, U+003e, KEY_greater, GREATER-THAN SIGN */
	0x0000,
	0x0689, /*   78, 0xff9d, KEY_KP_Begin */
	0xa282, /* 1702, 0x1001ef8, U+1ef8, KEY_Ytilde, LATIN CAPITAL LETTER Y WITH TILDE */
	0x9c9c, /* 1642, 0x1001eba, U+1eba, KEY_Ehook, LATIN CAPITAL LETTER E WITH HOOK ABOVE */
	0x1673, /*  251, 0xfe80, KEY_dead_a */
	0x0000,
	0xcd2a, /* 2088, 0x1000dd8, U+0dd8, KEY_Sinh_ru2, SINHALA GAETTA-PILLA */
	0x6a07, /* 1150, 0xab2, U+2155, KEY_onefifth, VULGAR FRACTION ONE FIFTH */
	0x169b, /*  253, 0xfe82, KEY_dead_e */
	0xc969, /* 2044, 0x1000d9f, U+0d9f, KEY_Sinh_nga, SINHALA SANYAKA GAYANNA */
	0x1517, /*  240, 0xfe69, KEY_dead_belowcircumflex */
	0xcc51, /* 2078, 0x1000dc5, U+0dc5, KEY_Sinh_lla, SINHALA MUURDHAJA LAYANNA */
	0x16c3, /*  255, 0xfe84, KEY_dead_i */
	0x9e2d, /* 1657, 0x1001ec9, U+1ec9, KEY_ihook, LATIN SMALL LETTER I WITH HOOK ABOVE */
	0x1a68, /*  288, 0xfee8, KEY_Pointer_Button_Dflt */
	0xca02, /* 2051, 0x1000da6, U+0da6, KEY_Sinh_nja, SINHALA SANYAKA JAYANNA */
	0x0000,
	0x0000,
	0x16eb, /*  257, 0xfe86, KEY_dead_o */
	0xcb3a, /* 2065, 0x1000db5, U+0db5, KEY_Sinh_pha, SINHALA MAHA. PAYANNA */
	0x0000,
	0x146a, /*  234, 0xfe64, KEY_dead_psili, alias for dead_abovecomma */
	0x0000,
	0x0199, /*   18, 0xff23, KEY_Henkan_Mode, Start/Stop Conversion */
	0x1713, /*  259, 0xfe88, KEY_dead_u */
	0x5e40, /* 1028, 0x7d2, U+03a3, KEY_Greek_SIGMA, GREEK CAPITAL LETTER SIGMA */
	0x0000,
	0x0170, /*   16, 0xff21, KEY_Kanji, Kanji, Kanji convert */
	0x0000,
	0x6fa6, /* 1204, 0xaf1, U+2020, KEY_dagger, DAGGER */
	0x79d7, /* 1308, 0xdbf, U+0e1f, KEY_Thai_fofan, THAI CHARACTER FO FAN */
	0xcbfa, /* 2074, 0x1000dc1, U+0dc1, KEY_Sinh_sha, SINHALA TAALUJA SAYANNA */
	0x0000,
	0x0000,
	0xdbe8, /* 2236, 0x1008ff96, KEY_XF86UWB, Enable/disable UWB	 */
	0xca9f, /* 2058, 0x1000dad, U+0dad, KEY_Sinh_tha, SINHALA TAYANNA */
	0x0000,
	0xaa47, /* 1780, 0x1002811, U+2811, KEY_braille_dots_15, BRAILLE PATTERN DOTS-15 */
	0x32f1, /*  586, 0x1e6, U+0107, KEY_cacute, LATIN SMALL LETTER C WITH ACUTE */
	0x0000,
	0x1791, /*  264, 0xfed0, KEY_First_Virtual_Screen */
	0x3305, /*  587, 0x1e8, U+010d, KEY_ccaron, LATIN SMALL LETTER C WITH CARON */
	0xd497, /* 2160, 0x1008ff46, KEY_XF86Launch6, Launch Application */
	0xec40, /* 2401, 0x100000ac, KEY_mute_asciitilde */
	0x0000,
	0xc9d5, /* 2049, 0x1000da4, U+0da4, KEY_Sinh_nya, SINHALA TAALUJA NAASIKYAYA */
	0x5f02, /* 1036, 0x7e2, U+03b2, KEY_Greek_beta, GREEK SMALL LETTER BETA */
	0x7da9, /* 1346, 0xde8, U+0e48, KEY_Thai_maiek, THAI CHARACTER MAI EK */
	0x4ddc, /*  872, 0x10004e2, U+04e2, KEY_Cyrillic_I_macron, CYRILLIC CAPITAL LETTER I WITH MACRON */
	0x9961, /* 1609, 0x1000275, U+0275, KEY_obarred, LATIN SMALL LETTER BARRED O */
	0x32c9, /*  584, 0x1e3, U+0103, KEY_abreve, LATIN SMALL LETTER A WITH BREVE */
	0x9ab8, /* 1624, 0x1001ea8, U+1ea8, KEY_Acircumflexhook, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0xebee, /* 2398, 0x100000a9, KEY_mute_grave */
	0x5d39, /* 1017, 0x7c8, U+0398, KEY_Greek_THETA, GREEK CAPITAL LETTER THETA */
	0x0000,
	0x27d0, /*  453, 0xaa, U+00aa, KEY_ordfeminine, FEMININE ORDINAL INDICATOR */
	0x623f, /* 1069, 0x8a8, U+23a3, KEY_botleftsqbracket, LEFT SQUARE BRACKET LOWER CORNER */
	0x0000,
	0x5c6d, /* 1009, 0x7bb, U+03ce, KEY_Greek_omegaaccent, GREEK SMALL LETTER OMEGA WITH TONOS */
	0xca18, /* 2052, 0x1000da7, U+0da7, KEY_Sinh_tta, SINHALA TTAYANNA */
	0x0000,
	0x0000,
	0x20e1, /*  352, 0x26, U+0026, KEY_ampersand, AMPERSAND */
	0xd220, /* 2136, 0x1008ff2e, KEY_XF86WWW, Invoke web browser */
	0x0000,
	0x0000,
	0x0000,
	0x60b6, /* 1054, 0x7f3, U+03c2, KEY_Greek_finalsmallsigma, GREEK SMALL LETTER FINAL SIGMA */
	0x49e3, /*  841, 0x10006ba, U+06ba, KEY_Arabic_noon_ghunna, ARABIC LETTER NOON GHUNNA */
	0x0000,
	0x0000,
	0x0000,
	0xd65e, /* 2178, 0x1008ff58, KEY_XF86Cut, Cut selection */
	0x3342, /*  590, 0x1ef, U+010f, KEY_dcaron, LATIN SMALL LETTER D WITH CARON */
	0x0000,
	0x65ac, /* 1101, 0x8dc, U+2229, KEY_intersection, INTERSECTION */
	0x0000,
	0x0000,
	0x0d46, /*  173, 0xfe02, KEY_ISO_Level2_Latch */
	0x0000,
	0x60d9, /* 1055, 0x7f4, U+03c4, KEY_Greek_tau, GREEK SMALL LETTER TAU */
	0x0000,
	0x0000,
	0x0000,
	0x649d, /* 1089, 0x8c0, U+2234, KEY_therefore, THEREFORE */
	0x513c, /*  904, 0x6b4, U+0404, KEY_Ukrainian_IE, CYRILLIC CAPITAL LETTER UKRAINIAN IE */
	0x0000,
	0xd7c1, /* 2193, 0x1008ff68, KEY_XF86New, New (folder, document... */
	0x7af9, /* 1320, 0xdcb, U+0e2b, KEY_Thai_hohip, THAI CHARACTER HO HIP */
	0x83eb, /* 1403, 0xeba, KEY_Hangul_Cieuc */
	0xd747, /* 2188, 0x1008ff62, KEY_XF86Market, ?? */
	0x0000,
	0x3905, /*  658, 0x1000174, U+0174, KEY_Wcircumflex, LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
	0x0000,
	0x0000,
	0x0000,
	0xa470, /* 1724, 0x1002076, U+2076, KEY_sixsuperior, SUPERSCRIPT SIX */
	0x7eb0, /* 1356, 0xdf4, U+0e54, KEY_Thai_leksi, THAI DIGIT FOUR */
	0x0000,
	0x1f29, /*  334, 0xfd13, KEY_3270_Ident */
	0x94d3, /* 1562, 0x10010d3, U+10d3, KEY_Georgian_don, GEORGIAN LETTER DON */
	0x0000,
	0x2d6d, /*  519, 0xe9, U+00e9, KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */
	0x135f, /*  224, 0xfe5b, KEY_dead_cedilla */
	0x0000,
	0x1db4, /*  319, 0xfd04, KEY_3270_Left2 */
	0xc529, /* 2002, 0x10028ef, U+28ef, KEY_braille_dots_1234678, BRAILLE PATTERN DOTS-1234678 */
	0x0000,
	0x0000,
	0x6c19, /* 1171, 0xace, KEY_emopencircle, (U+25CB WHITE CIRCLE) */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x2cb3, /*  510, 0xe0, U+00e0, KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */
	0xd109, /* 2125, 0x1008ff23, KEY_XF86RockerUp, Rocker switches exist up */
	0x0000,
	0x7f8c, /* 1365, 0xff34, KEY_Hangul_Hanja, Start Hangul->Hanja Conversion */
	0x9587, /* 1569, 0x10010da, U+10da, KEY_Georgian_las, GEORGIAN LETTER LAS */
	0x0000,
	0x8b38, /* 1469, 0x1000587, U+0587, KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */
	0x51bb, /*  909, 0x6b7, U+0407, KEY_Ukrainian_YI, CYRILLIC CAPITAL LETTER YI */
	0x4335, /*  775, 0x10006d4, U+06d4, KEY_Arabic_fullstop, ARABIC FULL STOP */
	0x0000,
	0x2859, /*  459, 0xb0, U+00b0, KEY_degree, DEGREE SIGN */
	0x6569, /* 1098, 0x8d6, U+221a, KEY_radical, SQUARE ROOT */
	0x0000,
	0x0000,
	0x0000,
	0x8a16, /* 1460, 0xef3, KEY_Hangul_KkogjiDalrinIeung */
	0xb57a, /* 1874, 0x100286f, U+286f, KEY_braille_dots_123467, BRAILLE PATTERN DOTS-123467 */
	0x7dc1, /* 1347, 0xde9, U+0e49, KEY_Thai_maitho, THAI CHARACTER MAI THO */
	0x95bb, /* 1571, 0x10010dc, U+10dc, KEY_Georgian_nar, GEORGIAN LETTER NAR */
	0x0000,
	0x9bbb, /* 1633, 0x1001eb1, U+1eb1, KEY_abrevegrave, LATIN SMALL LETTER A WITH BREVE AND GRAVE */
	0x0000,
	0xbd3a, /* 1938, 0x10028af, U+28af, KEY_braille_dots_123468, BRAILLE PATTERN DOTS-123468 */
	0x162a, /*  249, 0xfe92, KEY_dead_belowverticalline */
	0x0000,
	0x0000,
	0x5285, /*  917, 0x6bb, U+040b, KEY_Serbian_TSHE, CYRILLIC CAPITAL LETTER TSHE */
	0x790a, /* 1300, 0xdb7, U+0e17, KEY_Thai_thothahan, THAI CHARACTER THO THAHAN */
	0x5faf, /* 1043, 0x7e9, U+03b9, KEY_Greek_iota, GREEK SMALL LETTER IOTA */
	0x9d9c, /* 1652, 0x1001ec4, U+1ec4, KEY_Ecircumflextilde, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x3845, /*  649, 0x3e7, U+012f, KEY_iogonek, LATIN SMALL LETTER I WITH OGONEK */
	0x14f9, /*  239, 0xfe68, KEY_dead_belowmacron */
	0x39f3, /*  668, 0x1001e40, U+1e40, KEY_Mabovedot, LATIN CAPITAL LETTER M WITH DOT ABOVE */
	0x0000,
	0x8748, /* 1437, 0xedc, KEY_Hangul_J_RieulKiyeog */
	0x007e, /*    6, 0xff13, KEY_Pause, Pause, hold */
	0xe862, /* 2359, 0x1004ff44, KEY_osfActivate */
	0x9779, /* 1588, 0x10010ed, U+10ed, KEY_Georgian_char, GEORGIAN LETTER CHAR */
	0x57b4, /*  968, 0x6ed, U+041c, KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */
	0x98f9, /* 1604, 0x1001e8b, U+1e8b, KEY_xabovedot, LATIN SMALL LETTER X WITH DOT ABOVE */
	0x0000,
	0x204b, /*  345, 0xfd1e, KEY_3270_Enter */
	0x3bfe, /*  691, 0x4a4, U+3001, KEY_kana_comma, IDEOGRAPHIC COMMA */
	0x0000,
	0xd9e3, /* 2215, 0x1008ff80, KEY_XF86Terminal, Launch terminal emulator */
	0x4aee, /*  850, 0x1000496, U+0496, KEY_Cyrillic_ZHE_descender, CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
	0x455a, /*  796, 0x5c9, U+0629, KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */
	0x7b79, /* 1325, 0xdd0, U+0e30, KEY_Thai_saraa, THAI CHARACTER SARA A */
	0x0000,
	0x9710, /* 1584, 0x10010e9, U+10e9, KEY_Georgian_chin, GEORGIAN LETTER CHIN */
	0x9c04, /* 1636, 0x1001eb4, U+1eb4, KEY_Abrevetilde, LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
	0x7cca, /* 1338, 0xde0, U+0e40, KEY_Thai_sarae, THAI CHARACTER SARA E */
	0x36d0, /*  631, 0x3b5, U+0129, KEY_itilde, LATIN SMALL LETTER I WITH TILDE */
	0xdf2b, /* 2267, 0x1008fe04, KEY_XF86Switch_VT_4 */
	0x9caf, /* 1643, 0x1001ebb, U+1ebb, KEY_ehook, LATIN SMALL LETTER E WITH HOOK ABOVE */
	0x054e, /*   63, 0xff8d, KEY_KP_Enter, Enter */
	0x8fe2, /* 1513, 0x1000570, U+0570, KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */
	0x7597, /* 1266, 0xcf4, U+05e4, KEY_hebrew_pe, HEBREW LETTER PE */
	0x217f, /*  359, 0x2c, U+002c, KEY_comma, COMMA */
	0x0000,
	0x32b5, /*  583, 0x1e0, U+0155, KEY_racute, LATIN SMALL LETTER R WITH ACUTE */
	0x7cfb, /* 1340, 0xde2, U+0e42, KEY_Thai_sarao, THAI CHARACTER SARA O */
	0x0000,
	0xcf21, /* 2107, 0x1008ff11, KEY_XF86AudioLowerVolume, Volume control down */
	0x0000,
	0x96c0, /* 1581, 0x10010e6, U+10e6, KEY_Georgian_ghan, GEORGIAN LETTER GHAN */
	0x7926, /* 1301, 0xdb8, U+0e18, KEY_Thai_thothong, THAI CHARACTER THO THONG */
	0x4edd, /*  881, 0x6a4, U+0454, KEY_Ukrainian_ie, CYRILLIC SMALL LETTER UKRAINIAN IE */
	0x036f, /*   39, 0xff53, KEY_Right, Move right, right arrow */
	0x06cd, /*   81, 0xffbd, KEY_KP_Equal, Equals */
	0x0000,
	0xdb9e, /* 2233, 0x1008ff93, KEY_XF86Battery, Display battery information */
	0x0000,
	0x0000,
	0x653d, /* 1096, 0x8ce, U+21d2, KEY_implies, RIGHTWARDS DOUBLE ARROW */
	0x2dda, /*  524, 0xee, U+00ee, KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */
	0x95d5, /* 1572, 0x10010dd, U+10dd, KEY_Georgian_on, GEORGIAN LETTER ON */
	0x4b36, /*  852, 0x100049a, U+049a, KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
	0xe47c, /* 2318, 0x1000fe60, KEY_Dgrave_accent */
	0x4172, /*  756, 0xff7e, KEY_kana_switch, Alias for mode_switch */
	0x3356, /*  591, 0x1f0, U+0111, KEY_dstroke, LATIN SMALL LETTER D WITH STROKE */
	0x65f1, /* 1104, 0x8df, U+2228, KEY_logicalor, LOGICAL OR */
	0xcf5e, /* 2109, 0x1008ff13, KEY_XF86AudioRaiseVolume, Volume control up */
	0x0000,
	0x2472, /*  406, 0x5b, U+005b, KEY_bracketleft, LEFT SQUARE BRACKET */
	0x0000,
	0x0000,
	0x0000,
	0xc6b1, /* 2014, 0x10028fb, U+28fb, KEY_braille_dots_1245678, BRAILLE PATTERN DOTS-1245678 */
	0x97ae, /* 1590, 0x10010ef, U+10ef, KEY_Georgian_jhan, GEORGIAN LETTER JHAN */
	0x9794, /* 1589, 0x10010ee, U+10ee, KEY_Georgian_xan, GEORGIAN LETTER XAN */
	0x5d22, /* 1016, 0x7c7, U+0397, KEY_Greek_ETA, GREEK CAPITAL LETTER ETA */
	0xbc3f, /* 1930, 0x10028a7, U+28a7, KEY_braille_dots_12368, BRAILLE PATTERN DOTS-12368 */
	0x8398, /* 1400, 0xeb7, KEY_Hangul_Ieung */
	0x83b2, /* 1401, 0xeb8, KEY_Hangul_Jieuj */
	0x0000,
	0xcfec, /* 2114, 0x1008ff18, KEY_XF86HomePage, Display user's home page */
	0xddd4, /* 2255, 0x1008ffa9, KEY_XF86TouchpadToggle, Toggle between touchpad/trackstick */
	0x0000,
	0x6d5e, /* 1183, 0xadb, KEY_filledrectbullet, (U+25AC BLACK RECTANGLE) */
	0xe1ec, /* 2293, 0xff7e, KEY_SunAltGraph, Same as XK_Mode_switch */
	0x96a5, /* 1580, 0x10010e5, U+10e5, KEY_Georgian_khar, GEORGIAN LETTER KHAR */
	0x0000,
	0x4f5c, /*  886, 0x6a7, U+0457, KEY_Ukrainian_yi, CYRILLIC SMALL LETTER YI */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6966, /* 1143, 0xaa9, U+2014, KEY_emdash, EM DASH */
	0x3d4f, /*  706, 0x4b1, U+30a2, KEY_kana_A, KATAKANA LETTER A */
	0x0000,
	0x3c16, /*  692, 0x4a5, U+30fb, KEY_kana_conjunctive, KATAKANA MIDDLE DOT */
	0x69da, /* 1148, 0xab0, U+2153, KEY_onethird, VULGAR FRACTION ONE THIRD */
	0x3d8b, /*  709, 0x4b4, U+30a8, KEY_kana_E, KATAKANA LETTER E */
	0x9b70, /* 1630, 0x1001eae, U+1eae, KEY_Abreveacute, LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
	0x2dc6, /*  523, 0xed, U+00ed, KEY_iacute, LATIN SMALL LETTER I WITH ACUTE */
	0x9ff2, /* 1674, 0x1001eda, U+1eda, KEY_Ohornacute, LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
	0x3d63, /*  707, 0x4b2, U+30a4, KEY_kana_I, KATAKANA LETTER I */
	0x5e8b, /* 1031, 0x7d6, U+03a6, KEY_Greek_PHI, GREEK CAPITAL LETTER PHI */
	0x0000,
	0x37b1, /*  642, 0x3d1, U+0145, KEY_Ncedilla, LATIN CAPITAL LETTER N WITH CEDILLA */
	0x8de2, /* 1493, 0x1000566, U+0566, KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */
	0x4128, /*  753, 0x4dd, U+30f3, KEY_kana_N, KATAKANA LETTER N */
	0x30a9, /*  558, 0x1b6, U+015b, KEY_sacute, LATIN SMALL LETTER S WITH ACUTE */
	0x697a, /* 1144, 0xaaa, U+2013, KEY_endash, EN DASH */
	0xcdd8, /* 2096, 0x1000df2, U+0df2, KEY_Sinh_ruu2, SINHALA DIGA GAETTA-PILLA */
	0x0000,
	0x0394, /*   41, 0xff55, KEY_Prior, Prior, previous */
	0x0000,
	0x3d77, /*  708, 0x4b3, U+30a6, KEY_kana_U, KATAKANA LETTER U */
	0xce5e, /* 2101, 0x1008ff03, KEY_XF86MonBrightnessDown, Monitor/panel brightness */
	0x0000,
	0x5e29, /* 1027, 0x7d1, U+03a1, KEY_Greek_RHO, GREEK CAPITAL LETTER RHO */
	0x0000,
	0x0000,
	0x6183, /* 1062, 0x8a1, U+23b7, KEY_leftradical, RADICAL SYMBOL BOTTOM */
	0xdff7, /* 2274, 0x1008fe0b, KEY_XF86Switch_VT_11 */
	0x2c8c, /*  508, 0xde, KEY_Thorn, deprecated */
	0x0000,
	0xd808, /* 2196, 0x1008ff6b, KEY_XF86Open, Open */
	0x5eb9, /* 1033, 0x7d8, U+03a8, KEY_Greek_PSI, GREEK CAPITAL LETTER PSI */
	0x3c65, /*  695, 0x4a7, U+30a1, KEY_kana_a, KATAKANA LETTER SMALL A */
	0x694f, /* 1142, 0xaa8, U+200a, KEY_hairspace, HAIR SPACE */
	0x2cf4, /*  513, 0xe3, U+00e3, KEY_atilde, LATIN SMALL LETTER A WITH TILDE */
	0x82f0, /* 1394, 0xeb1, KEY_Hangul_Mieum */
	0x3ca1, /*  698, 0x4aa, U+30a7, KEY_kana_e, KATAKANA LETTER SMALL E */
	0x0000,
	0x04da, /*   58, 0xff7e, KEY_Mode_switch, Character set switch */
	0xc8fd, /* 2039, 0x1000d9a, U+0d9a, KEY_Sinh_ka, SINHALA KAYANNA */
	0x3c79, /*  696, 0x4a8, U+30a3, KEY_kana_i, KATAKANA LETTER SMALL I */
	0x0000,
	0x0000,
	0xc12a, /* 1970, 0x10028cf, U+28cf, KEY_braille_dots_123478, BRAILLE PATTERN DOTS-123478 */
	0xa2d0, /* 1706, 0x10001af, U+01af, KEY_Uhorn, LATIN CAPITAL LETTER U WITH HORN */
	0x0000,
	0x3cb5, /*  699, 0x4ab, U+30a9, KEY_kana_o, KATAKANA LETTER SMALL O */
	0x64b4, /* 1090, 0x8c1, U+221d, KEY_variation, PROPORTIONAL TO */
	0x0000,
	0x0000,
	0x6b8b, /* 1166, 0xac9, U+2122, KEY_trademark, TRADE MARK SIGN */
	0x0206, /*   23, 0xff27, KEY_Hiragana_Katakana, Hiragana/Katakana toggle */
	0x3c8d, /*  697, 0x4a9, U+30a5, KEY_kana_u, KATAKANA LETTER SMALL U */
	0xbf39, /* 1954, 0x10028bf, U+28bf, KEY_braille_dots_1234568, BRAILLE PATTERN DOTS-1234568 */
	0x9c1d, /* 1637, 0x1001eb5, U+1eb5, KEY_abrevetilde, LATIN SMALL LETTER A WITH BREVE AND TILDE */
	0x0000,
	0x0000,
	0x0000,
	0x0c31, /*  160, 0xffe3, KEY_Control_L, Left control */
	0xc329, /* 1986, 0x10028df, U+28df, KEY_braille_dots_1234578, BRAILLE PATTERN DOTS-1234578 */
	0x0000,
	0x0000,
	0x0000,
	0x6a65, /* 1154, 0xab6, U+2159, KEY_onesixth, VULGAR FRACTION ONE SIXTH */
	0x0c48, /*  161, 0xffe4, KEY_Control_R, Right control */
	0x1e1e, /*  323, 0xfd08, KEY_3270_Reset */
	0xe570, /* 2328, 0x1000ff75, KEY_hpKP_BackTab */
	0x96f5, /* 1583, 0x10010e8, U+10e8, KEY_Georgian_shin, GEORGIAN LETTER SHIN */
	0x0000,
	0x05ed, /*   71, 0xff98, KEY_KP_Right */
	0x0000,
	0x9bd4, /* 1634, 0x1001eb2, U+1eb2, KEY_Abrevehook, LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
	0x24ed, /*  411, 0x60, U+0060, KEY_grave, GRAVE ACCENT */
	0x7a3b, /* 1312, 0xdc3, U+0e23, KEY_Thai_rorua, THAI CHARACTER RO RUA */
	0x0000,
	0x0000,
	0x0000,
	0xe5e7, /* 2333, 0x1000ff6e, KEY_hpUser */
	0xdb50, /* 2230, 0x1008ff90, KEY_XF86MailForward, Forward in mail */
	0x0000,
	0xa692, /* 1745, 0x100221c, U+221c, KEY_fourthroot, FOURTH ROOT */
	0x20b8, /*  350, 0x24, U+0024, KEY_dollar, DOLLAR SIGN */
	0x9910, /* 1605, 0x100012d, U+012d, KEY_ibreve, LATIN SMALL LETTER I WITH BREVE */
	0x0000,
	0xe28a, /* 2300, 0x1005ff70, KEY_SunProps */
	0x3272, /*  580, 0x1d9, U+016e, KEY_Uring, LATIN CAPITAL LETTER U WITH RING ABOVE */
	0x6e6c, /* 1192, 0xae4, KEY_opentribulletdown, (U+25BD WHITE DOWN-POINTING TRIANGLE) */
	0x389c, /*  653, 0x3f2, U+014d, KEY_omacron, LATIN SMALL LETTER O WITH MACRON */
	0x5a9e, /*  995, 0x7a9, U+03ab, KEY_Greek_UPSILONdieresis, GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
	0x0000,
	0x0000,
	0x0000,
	0x0524, /*   61, 0xff80, KEY_KP_Space, Space */
	0x7ae1, /* 1319, 0xdca, U+0e2a, KEY_Thai_sosua, THAI CHARACTER SO SUA */
	0x1816, /*  268, 0xfed5, KEY_Terminate_Server */
	0x0ec5, /*  186, 0xfe0b, KEY_ISO_Prev_Group_Lock */
	0x802d, /* 1371, 0xff3a, KEY_Hangul_PreHanja, Pre Hanja conversion */
	0x0000,
	0x0000,
	0xa25c, /* 1700, 0x1001ef6, U+1ef6, KEY_Yhook, LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
	0x0000,
	0xcd81, /* 2092, 0x1000ddc, U+0ddc, KEY_Sinh_o2, SINHALA KOMBUVA HAA AELA-PILLA */
	0x32dd, /*  585, 0x1e5, U+013a, KEY_lacute, LATIN SMALL LETTER L WITH ACUTE */
	0xda5d, /* 2220, 0x1008ff86, KEY_XF86User2KB, ?? */
	0xe711, /* 2345, 0x1004ff02, KEY_osfCopy */
	0x3095, /*  557, 0x1b5, U+013e, KEY_lcaron, LATIN SMALL LETTER L WITH CARON */
	0xc6f4, /* 2016, 0x10028fd, U+28fd, KEY_braille_dots_1345678, BRAILLE PATTERN DOTS-1345678 */
	0x0000,
	0x0000,
	0x0000,
	0xc56a, /* 2004, 0x10028f1, U+28f1, KEY_braille_dots_15678, BRAILLE PATTERN DOTS-15678 */
	0x9608, /* 1574, 0x10010df, U+10df, KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */
	0x03ce, /*   44, 0xff56, KEY_Page_Down */
	0x1f86, /*  338, 0xfd17, KEY_3270_Setup */
	0x81fc, /* 1386, 0xea9, KEY_Hangul_Rieul */
	0xe8d1, /* 2364, 0x1004ff54, KEY_osfDown */
	0x0000,
	0x0000,
	0xa61b, /* 1740, 0x1002208, U+2208, KEY_elementof, ELEMENT OF */
	0x20cc, /*  351, 0x25, U+0025, KEY_percent, PERCENT SIGN */
	0x67c6, /* 1125, 0x9ef, U+23ba, KEY_horizlinescan1, HORIZONTAL SCAN LINE-1 */
	0x2845, /*  458, 0xaf, U+00af, KEY_macron, MACRON */
	0x7471, /* 1255, 0xcea, U+05da, KEY_hebrew_finalkaph, HEBREW LETTER FINAL KAF */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd401, /* 2154, 0x1008ff40, KEY_XF86Launch0, Launch Application */
	0x0618, /*   73, 0xff9a, KEY_KP_Prior */
	0x0000,
	0x7ef9, /* 1359, 0xdf7, U+0e57, KEY_Thai_lekchet, THAI DIGIT SEVEN */
	0x0000,
	0x0000,
	0x0000,
	0x10d5, /*  202, 0xfe2b, KEY_ISO_Release_Both_Margins */
	0xe9f3, /* 2376, 0x1004ff67, KEY_osfMenu */
	0xd44c, /* 2157, 0x1008ff43, KEY_XF86Launch3, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0x030f, /*   34, 0xff3d, KEY_Zen_Koho, Multiple/All Candidate(s) */
	0x0000,
	0x876a, /* 1438, 0xedd, KEY_Hangul_J_RieulMieum */
	0x9863, /* 1597, 0x10010f6, U+10f6, KEY_Georgian_fi, GEORGIAN LETTER FI */
	0x9ba2, /* 1632, 0x1001eb0, U+1eb0, KEY_Abrevegrave, LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
	0x2db2, /*  522, 0xec, U+00ec, KEY_igrave, LATIN SMALL LETTER I WITH GRAVE */
	0x6e8b, /* 1193, 0xae5, KEY_openstar, (U+2606 WHITE STAR) */
	0xd04b, /* 2118, 0x1008ff1c, KEY_XF86AudioRecord, Record audio application */
	0xc8d3, /* 2037, 0x1000d95, U+0d95, KEY_Sinh_oo, SINHALA OOYANNA */
	0x60f0, /* 1056, 0x7f5, U+03c5, KEY_Greek_upsilon, GREEK SMALL LETTER UPSILON */
	0x0000,
	0xd4c9, /* 2162, 0x1008ff48, KEY_XF86Launch8, Launch Application */
	0x0000,
	0x8420, /* 1405, 0xebc, KEY_Hangul_Tieut */
	0x86ee, /* 1434, 0xed9, KEY_Hangul_J_NieunHieuh */
	0x0000,
	0x0000,
	0x50ef, /*  901, 0x6b1, U+0402, KEY_Serbian_DJE, CYRILLIC CAPITAL LETTER DJE */
	0x3b13, /*  681, 0x1001e85, U+1e85, KEY_wdiaeresis, LATIN SMALL LETTER W WITH DIAERESIS */
	0x0000,
	0x0000,
	0x81a2, /* 1383, 0xea6, KEY_Hangul_NieunHieuh */
	0x0000,
	0x0000,
	0x0000,
	0x336b, /*  592, 0x1f1, U+0144, KEY_nacute, LATIN SMALL LETTER N WITH ACUTE */
	0xe768, /* 2349, 0x1004ff08, KEY_osfBackSpace */
	0x329f, /*  582, 0x1de, U+0162, KEY_Tcedilla, LATIN CAPITAL LETTER T WITH CEDILLA */
	0x337f, /*  593, 0x1f2, U+0148, KEY_ncaron, LATIN SMALL LETTER N WITH CARON */
	0xbfb4, /* 1958, 0x10028c3, U+28c3, KEY_braille_dots_1278, BRAILLE PATTERN DOTS-1278 */
	0x0b3b, /*  146, 0xffdb, KEY_F30 */
	0x650d, /* 1094, 0x8c9, U+2243, KEY_similarequal, ASYMPTOTICALLY EQUAL TO */
	0x0000,
	0x0b5d, /*  148, 0xffdc, KEY_F31 */
	0x0000,
	0x6d06, /* 1179, 0xad6, U+2032, KEY_minutes, PRIME */
	0x0b7f, /*  150, 0xffdd, KEY_F32 */
	0xc226, /* 1978, 0x10028d7, U+28d7, KEY_braille_dots_123578, BRAILLE PATTERN DOTS-123578 */
	0x0000,
	0x0ba1, /*  152, 0xffde, KEY_F33 */
	0x6122, /* 1058, 0x7f7, U+03c7, KEY_Greek_chi, GREEK SMALL LETTER CHI */
	0x6d1b, /* 1180, 0xad7, U+2033, KEY_seconds, DOUBLE PRIME */
	0x0bc3, /*  154, 0xffdf, KEY_F34 */
	0x0000,
	0x0000,
	0x0019, /*    1, 0xff08, KEY_BackSpace, Back space, back char */
	0x62ed, /* 1075, 0x8ae, U+23a0, KEY_botrightparens, RIGHT PARENTHESIS LOWER HOOK */
	0xd546, /* 2167, 0x1008ff4d, KEY_XF86LaunchD, Launch Application */
	0x86cd, /* 1433, 0xed8, KEY_Hangul_J_NieunJieuj */
	0x50be, /*  899, 0x6af, KEY_Serbian_dze, deprecated */
	0x1556, /*  242, 0xfe6b, KEY_dead_belowbreve */
	0xa6aa, /* 1746, 0x100222c, U+222c, KEY_dintegral, DOUBLE INTEGRAL */
	0x15b4, /*  245, 0xfe6e, KEY_dead_belowcomma */
	0xe3e9, /* 2313, 0x1005ff7d, KEY_SunPowerSwitchShift */
	0xd3ac, /* 2151, 0x1008ff3d, KEY_XF86Community, Display user's community */
	0x6865, /* 1131, 0x9f5, U+2524, KEY_rightt, BOX DRAWINGS LIGHT VERTICAL AND LEFT */
	0x24a2, /*  408, 0x5d, U+005d, KEY_bracketright, RIGHT SQUARE BRACKET */
	0x2e44, /*  529, 0xf3, U+00f3, KEY_oacute, LATIN SMALL LETTER O WITH ACUTE */
	0x50d7, /*  900, 0x6b0, U+2116, KEY_numerosign, NUMERO SIGN */
	0x2af8, /*  489, 0xce, U+00ce, KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
	0x994d, /* 1608, 0x10001d2, U+01d2, KEY_ocaron, LATIN SMALL LETTER O WITH CARON */
	0x0000,
	0x0e6c, /*  183, 0xfe08, KEY_ISO_Next_Group */
	0x70c0, /* 1215, 0xafc, U+2038, KEY_caret, CARET */
	0x442e, /*  786, 0x5bb, U+061b, KEY_Arabic_semicolon, ARABIC SEMICOLON */
	0x6938, /* 1141, 0xaa7, U+2009, KEY_thinspace, THIN SPACE */
	0xea9a, /* 2383, 0x1004ff78, KEY_osfRestore */
	0xb95b, /* 1906, 0x100288f, U+288f, KEY_braille_dots_12348, BRAILLE PATTERN DOTS-12348 */
	0x0000,
	0xc2a6, /* 1982, 0x10028db, U+28db, KEY_braille_dots_124578, BRAILLE PATTERN DOTS-124578 */
	0xd393, /* 2150, 0x1008ff3c, KEY_XF86Finance, Display financial site */
	0x8c89, /* 1480, 0x100055e, U+055e, KEY_Armenian_question, ARMENIAN QUESTION MARK */
	0xeab2, /* 2384, 0x1004ffff, KEY_osfDelete */
	0x9fd1, /* 1673, 0x1001ed9, U+1ed9, KEY_ocircumflexbelowdot, LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x28b8, /*  463, 0xb4, U+00b4, KEY_acute, ACUTE ACCENT */
	0x547f, /*  936, 0x6cd, U+043c, KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */
	0x6698, /* 1111, 0x9df, KEY_blank */
	0x30bd, /*  559, 0x1b7, U+02c7, KEY_caron, CARON */
	0x278d, /*  450, 0xa7, U+00a7, KEY_section, SECTION SIGN */
	0xa5cc, /* 1737, 0x1002089, U+2089, KEY_ninesubscript, SUBSCRIPT NINE */
	0x949f, /* 1560, 0x10010d1, U+10d1, KEY_Georgian_ban, GEORGIAN LETTER BAN */
	0x0000,
	0xe918, /* 2367, 0x1004ff59, KEY_osfEndData */
	0x0000,
	0x972b, /* 1585, 0x10010ea, U+10ea, KEY_Georgian_can, GEORGIAN LETTER CAN */
	0x348c, /*  605, 0x2b1, U+0127, KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */
	0x8fc9, /* 1512, 0x1000540, U+0540, KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */
	0x1f58, /*  336, 0xfd15, KEY_3270_Copy */
	0x1ea6, /*  329, 0xfd0e, KEY_3270_Attn */
	0xe68c, /* 2339, 0x100000af, KEY_hplira */
	0x54fb, /*  941, 0x6d2, U+0440, KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */
	0xbe76, /* 1948, 0x10028b9, U+28b9, KEY_braille_dots_14568, BRAILLE PATTERN DOTS-14568 */
	0x610b, /* 1057, 0x7f6, U+03c6, KEY_Greek_phi, GREEK SMALL LETTER PHI */
	0x61d4, /* 1065, 0x8a4, U+2320, KEY_topintegral, TOP HALF INTEGRAL */
	0xe2e0, /* 2304, 0x1005ff74, KEY_SunPaste */
	0x97c9, /* 1591, 0x10010f0, U+10f0, KEY_Georgian_hae, GEORGIAN LETTER HAE */
	0x9bec, /* 1635, 0x1001eb3, U+1eb3, KEY_abrevehook, LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
	0x0000,
	0x975f, /* 1587, 0x10010ec, U+10ec, KEY_Georgian_cil, GEORGIAN LETTER CIL */
	0xa380, /* 1714, 0x10020a6, U+20a6, KEY_NairaSign, NAIRA SIGN */
	0x94b9, /* 1561, 0x10010d2, U+10d2, KEY_Georgian_gan, GEORGIAN LETTER GAN */
	0x05c5, /*   69, 0xff96, KEY_KP_Left */
	0xc5eb, /* 2008, 0x10028f5, U+28f5, KEY_braille_dots_135678, BRAILLE PATTERN DOTS-135678 */
	0xa245, /* 1699, 0x1001ef5, U+1ef5, KEY_ybelowdot, LATIN SMALL LETTER Y WITH DOT BELOW */
	0x0000,
	0x0603, /*   72, 0xff99, KEY_KP_Down */
	0x6086, /* 1052, 0x7f1, U+03c1, KEY_Greek_rho, GREEK SMALL LETTER RHO */
	0x2192, /*  360, 0x2d, U+002d, KEY_minus, HYPHEN-MINUS */
	0x05b0, /*   68, 0xff95, KEY_KP_Home */
	0x213f, /*  356, 0x29, U+0029, KEY_parenright, RIGHT PARENTHESIS */
	0xdc59, /* 2240, 0x1008ff9a, KEY_XF86Subtitle, cycle through subtitle */
	0x97fc, /* 1593, 0x10010f2, U+10f2, KEY_Georgian_hie, GEORGIAN LETTER HIE */
	0x4dfb, /*  873, 0x10004e3, U+04e3, KEY_Cyrillic_i_macron, CYRILLIC SMALL LETTER I WITH MACRON */
	0x0000,
	0x6139, /* 1059, 0x7f8, U+03c8, KEY_Greek_psi, GREEK SMALL LETTER PSI */
	0x0000,
	0x0f9a, /*  193, 0xfe22, KEY_ISO_Move_Line_Down */
	0xdaaa, /* 2223, 0x1008ff89, KEY_XF86Word, Launch word processor */
	0x0000,
	0x6552, /* 1097, 0x8cf, U+2261, KEY_identical, IDENTICAL TO */
	0xddf4, /* 2256, 0x1008ffb0, KEY_XF86TouchpadOn, The touchpad got switched on */
	0xd8e1, /* 2205, 0x1008ff76, KEY_XF86RotationKB, don't use */
	0xb9d4, /* 1910, 0x1002893, U+2893, KEY_braille_dots_1258, BRAILLE PATTERN DOTS-1258 */
	0x9849, /* 1596, 0x10010f5, U+10f5, KEY_Georgian_hoe, GEORGIAN LETTER HOE */
	0x95a1, /* 1570, 0x10010db, U+10db, KEY_Georgian_man, GEORGIAN LETTER MAN */
	0x4cb9, /*  863, 0x10004b3, U+04b3, KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */
	0x9745, /* 1586, 0x10010eb, U+10eb, KEY_Georgian_jil, GEORGIAN LETTER JIL */
	0x0000,
	0x0000,
	0x1e4d, /*  325, 0xfd0a, KEY_3270_PA1 */
	0x1e63, /*  326, 0xfd0b, KEY_3270_PA2 */
	0x1e79, /*  327, 0xfd0c, KEY_3270_PA3 */
	0x6453, /* 1086, 0x8bd, U+2260, KEY_notequal, NOT EQUAL TO */
	0x6f79, /* 1202, 0xaee, U+2665, KEY_heart, BLACK HEART SUIT */
	0xb91d, /* 1904, 0x100288d, U+288d, KEY_braille_dots_1348, BRAILLE PATTERN DOTS-1348 */
	0x9623, /* 1575, 0x10010e0, U+10e0, KEY_Georgian_rae, GEORGIAN LETTER RAE */
	0x2d20, /*  515, 0xe5, U+00e5, KEY_aring, LATIN SMALL LETTER A WITH RING ABOVE */
	0x0000,
	0x0000,
	0x2f5d, /*  542, 0xff, U+00ff, KEY_ydiaeresis, LATIN SMALL LETTER Y WITH DIAERESIS */
	0x1594, /*  244, 0xfe6d, KEY_dead_invertedbreve */
	0x0000,
	0x0000,
	0x0000,
	0x96db, /* 1582, 0x10010e7, U+10e7, KEY_Georgian_qar, GEORGIAN LETTER QAR */
	0x4be7, /*  857, 0x10004a3, U+04a3, KEY_Cyrillic_en_descender, CYRILLIC SMALL LETTER EN WITH DESCENDER */
	0xbe36, /* 1946, 0x10028b7, U+28b7, KEY_braille_dots_123568, BRAILLE PATTERN DOTS-123568 */
	0xbba6, /* 1925, 0x10028a2, U+28a2, KEY_braille_dots_268, BRAILLE PATTERN DOTS-268 */
	0x963d, /* 1576, 0x10010e1, U+10e1, KEY_Georgian_san, GEORGIAN LETTER SAN */
	0x1f6f, /*  337, 0xfd16, KEY_3270_Play */
	0x2f8a, /*  544, 0x1a2, U+02d8, KEY_breve, BREVE */
	0x0000,
	0x1f12, /*  333, 0xfd12, KEY_3270_Jump */
	0x0646, /*   75, 0xff9b, KEY_KP_Next */
	0x0000,
	0x4fa8, /*  889, 0x6a8, KEY_Serbian_je, deprecated */
	0x33ad, /*  595, 0x1f8, U+0159, KEY_rcaron, LATIN SMALL LETTER R WITH CARON */
	0xb28f, /* 1850, 0x1002857, U+2857, KEY_braille_dots_12357, BRAILLE PATTERN DOTS-12357 */
	0xbc01, /* 1928, 0x10028a5, U+28a5, KEY_braille_dots_1368, BRAILLE PATTERN DOTS-1368 */
	0x0000,
	0xc738, /* 2018, 0x10028ff, U+28ff, KEY_braille_dots_12345678, BRAILLE PATTERN DOTS-12345678 */
	0x0000,
	0x0000,
	0x7182, /* 1223, 0xbc0, KEY_overbar, (U+00AF MACRON) */
	0x0000,
	0x2262, /*  373, 0x3a, U+003a, KEY_colon, COLON */
	0x1d7f, /*  317, 0xfd02, KEY_3270_FieldMark */
	0x87ed, /* 1442, 0xee1, KEY_Hangul_J_RieulPhieuf */
	0x37f2, /*  645, 0x3d9, U+0172, KEY_Uogonek, LATIN CAPITAL LETTER U WITH OGONEK */
	0x0d82, /*  175, 0xfe04, KEY_ISO_Level3_Latch */
	0x64e1, /* 1092, 0x8c5, U+2207, KEY_nabla, NABLA */
	0x3ba1, /*  688, 0x4a1, U+3002, KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */
	0x0000,
	0xb30b, /* 1854, 0x100285b, U+285b, KEY_braille_dots_12457, BRAILLE PATTERN DOTS-12457 */
	0x0000,
	0xd4e2, /* 2163, 0x1008ff49, KEY_XF86Launch9, Launch Application */
	0x9506, /* 1564, 0x10010d5, U+10d5, KEY_Georgian_vin, GEORGIAN LETTER VIN */
	0xc02f, /* 1962, 0x10028c7, U+28c7, KEY_braille_dots_12378, BRAILLE PATTERN DOTS-12378 */
	0x0000,
	0x0000,
	0x78ef, /* 1299, 0xdb6, U+0e16, KEY_Thai_thothung, THAI CHARACTER THO THUNG */
	0x8343, /* 1397, 0xeb4, KEY_Hangul_PieubSios */
	0xe798, /* 2351, 0x1004ff1b, KEY_osfEscape */
	0xe39f, /* 2311, 0x1005ff7b, KEY_SunVideoLowerBrightness */
	0x1e8f, /*  328, 0xfd0d, KEY_3270_Test */
	0x3080, /*  556, 0x1b3, U+0142, KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */
	0x3628, /*  623, 0x3a2, KEY_kappa, deprecated */
	0x0000,
	0x30d0, /*  560, 0x1b9, U+0161, KEY_scaron, LATIN SMALL LETTER S WITH CARON */
	0x9e1a, /* 1656, 0x1001ec8, U+1ec8, KEY_Ihook, LATIN CAPITAL LETTER I WITH HOOK ABOVE */
	0x0000,
	0xe235, /* 2296, 0xff65, KEY_SunUndo, Same as XK_Undo */
	0x17f5, /*  267, 0xfed4, KEY_Last_Virtual_Screen */
	0x0000,
	0x0000,
	0xd52d, /* 2166, 0x1008ff4c, KEY_XF86LaunchC, Launch Application */
	0x0000,
	0x2e30, /*  528, 0xf2, U+00f2, KEY_ograve, LATIN SMALL LETTER O WITH GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0xd578, /* 2169, 0x1008ff4f, KEY_XF86LaunchF, Launch Application */
	0xc308, /* 1985, 0x10028de, U+28de, KEY_braille_dots_234578, BRAILLE PATTERN DOTS-234578 */
	0x1f41, /*  335, 0xfd14, KEY_3270_Rule */
	0x1e36, /*  324, 0xfd09, KEY_3270_Quit */
	0x0000,
	0xdc38, /* 2239, 0x1008ff99, KEY_XF86AudioRandomPlay, toggle shuffle mode */
	0x02f5, /*   33, 0xff37, KEY_Kanji_Bangou, Codeinput */
	0x0000,
	0xe347, /* 2308, 0x1005ff78, KEY_SunAudioMute */
	0x0000,
	0x0000,
	0xd75f, /* 2189, 0x1008ff63, KEY_XF86Meeting, enter meeting in calendar */
	0x0000,
	0x21a5, /*  361, 0x2e, U+002e, KEY_period, FULL STOP */
	0x0000,
	0x0000,
	0xa33c, /* 1711, 0x10020a3, U+20a3, KEY_FFrancSign, FRENCH FRANC SIGN */
	0xc169, /* 1972, 0x10028d1, U+28d1, KEY_braille_dots_1578, BRAILLE PATTERN DOTS-1578 */
	0x229e, /*  376, 0x3d, U+003d, KEY_equal, EQUALS SIGN */
	0x30fa, /*  562, 0x1bb, U+0165, KEY_tcaron, LATIN SMALL LETTER T WITH CARON */
	0x6852, /* 1130, 0x9f4, U+251c, KEY_leftt, BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
	0xc508, /* 2001, 0x10028ee, U+28ee, KEY_braille_dots_234678, BRAILLE PATTERN DOTS-234678 */
	0x0000,
	0x8bf6, /* 1475, 0x100058a, U+058a, KEY_Armenian_yentamna, ARMENIAN HYPHEN */
	0x63f7, /* 1083, 0x8b6, KEY_botrightsummation */
	0x63d8, /* 1082, 0x8b5, KEY_toprightsummation */
	0xbd1a, /* 1937, 0x10028ae, U+28ae, KEY_braille_dots_23468, BRAILLE PATTERN DOTS-23468 */
	0x6150, /* 1060, 0x7f9, U+03c9, KEY_Greek_omega, GREEK SMALL LETTER OMEGA */
	0x0000,
	0x5207, /*  912, 0x6b8, KEY_Serbian_JE, deprecated */
	0x4ad0, /*  849, 0x1000493, U+0493, KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */
	0x0000,
	0xc406, /* 1993, 0x10028e6, U+28e6, KEY_braille_dots_23678, BRAILLE PATTERN DOTS-23678 */
	0x6c50, /* 1173, 0xad0, U+2018, KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */
	0xcd14, /* 2087, 0x1000dd6, U+0dd6, KEY_Sinh_uu2, SINHALA DIGA PAA-PILLA */
	0xc4e7, /* 2000, 0x10028ed, U+28ed, KEY_braille_dots_134678, BRAILLE PATTERN DOTS-134678 */
	0x0000,
	0x37dc, /*  644, 0x3d3, U+0136, KEY_Kcedilla, LATIN CAPITAL LETTER K WITH CEDILLA */
	0xb6d6, /* 1885, 0x100287a, U+287a, KEY_braille_dots_24567, BRAILLE PATTERN DOTS-24567 */
	0x67e2, /* 1126, 0x9f0, U+23bb, KEY_horizlinescan3, HORIZONTAL SCAN LINE-3 */
	0x4e90, /*  878, 0x6a1, U+0452, KEY_Serbian_dje, CYRILLIC SMALL LETTER DJE */
	0x67fe, /* 1127, 0x9f1, U+2500, KEY_horizlinescan5, BOX DRAWINGS LIGHT HORIZONTAL */
	0x0000,
	0x681a, /* 1128, 0x9f2, U+23bc, KEY_horizlinescan7, HORIZONTAL SCAN LINE-7 */
	0x9486, /* 1559, 0x10010d0, U+10d0, KEY_Georgian_an, GEORGIAN LETTER AN */
	0x6836, /* 1129, 0x9f3, U+23bd, KEY_horizlinescan9, HORIZONTAL SCAN LINE-9 */
	0xafba, /* 1826, 0x100283f, U+283f, KEY_braille_dots_123456, BRAILLE PATTERN DOTS-123456 */
	0x2819, /*  456, 0xad, U+00ad, KEY_hyphen, SOFT HYPHEN */
	0x2ef1, /*  537, 0xfa, U+00fa, KEY_uacute, LATIN SMALL LETTER U WITH ACUTE */
	0x97e3, /* 1592, 0x10010f1, U+10f1, KEY_Georgian_he, GEORGIAN LETTER HE */
	0xbb4a, /* 1922, 0x100289f, U+289f, KEY_braille_dots_123458, BRAILLE PATTERN DOTS-123458 */
	0x0000,
	0x94ed, /* 1563, 0x10010d4, U+10d4, KEY_Georgian_en, GEORGIAN LETTER EN */
	0x72be, /* 1238, 0xcdf, U+2017, KEY_hebrew_doublelowline, DOUBLE LOW LINE */
	0x5026, /*  894, 0x6ab, U+045b, KEY_Serbian_tshe, CYRILLIC SMALL LETTER TSHE */
	0x0000,
	0x866e, /* 1430, 0xed5, KEY_Hangul_J_SsangKiyeog */
	0x1539, /*  241, 0xfe6a, KEY_dead_belowtilde */
	0x130d, /*  221, 0xfe58, KEY_dead_abovering */
	0x6f38, /* 1199, 0xaeb, KEY_rightpointer, (U+261E WHITE RIGHT POINTING INDEX) */
	0x9554, /* 1567, 0x10010d8, U+10d8, KEY_Georgian_in, GEORGIAN LETTER IN */
	0xc60c, /* 2009, 0x10028f6, U+28f6, KEY_braille_dots_235678, BRAILLE PATTERN DOTS-235678 */
	0xbcbb, /* 1934, 0x10028ab, U+28ab, KEY_braille_dots_12468, BRAILLE PATTERN DOTS-12468 */
	0xd72f, /* 2187, 0x1008ff61, KEY_XF86LogOff, Log off system */
	0xaf9a, /* 1825, 0x100283e, U+283e, KEY_braille_dots_23456, BRAILLE PATTERN DOTS-23456 */
	0xa9d0, /* 1776, 0x100280d, U+280d, KEY_braille_dots_134, BRAILLE PATTERN DOTS-134 */
	0x7410, /* 1251, 0xce7, KEY_hebrew_het, deprecated */
	0x194e, /*  278, 0xfe79, KEY_Overlay2_Enable */
	0xd357, /* 2148, 0x1008ff3a, KEY_XF86HotLinks, Show "hot" links */
	0x0000,
	0x7d13, /* 1341, 0xde3, U+0e43, KEY_Thai_saraaimaimuan, THAI CHARACTER SARA AI MAIMUAN */
	0x0000,
	0x4fda, /*  891, 0x6a9, KEY_Serbian_lje, deprecated */
	0xa67c, /* 1744, 0x100221b, U+221b, KEY_cuberoot, CUBE ROOT */
	0xc426, /* 1994, 0x10028e7, U+28e7, KEY_braille_dots_123678, BRAILLE PATTERN DOTS-123678 */
	0x5ca5, /* 1011, 0x7c2, U+0392, KEY_Greek_BETA, GREEK CAPITAL LETTER BETA */
	0xb6f6, /* 1886, 0x100287b, U+287b, KEY_braille_dots_124567, BRAILLE PATTERN DOTS-124567 */
	0xb06c, /* 1832, 0x1002845, U+2845, KEY_braille_dots_137, BRAILLE PATTERN DOTS-137 */
	0xbeb6, /* 1950, 0x10028bb, U+28bb, KEY_braille_dots_124568, BRAILLE PATTERN DOTS-124568 */
	0x9816, /* 1594, 0x10010f3, U+10f3, KEY_Georgian_we, GEORGIAN LETTER WE */
	0x500d, /*  893, 0x6aa, KEY_Serbian_nje, deprecated */
	0xad14, /* 1804, 0x1002829, U+2829, KEY_braille_dots_146, BRAILLE PATTERN DOTS-146 */
	0x4e71, /*  877, 0x10004ef, U+04ef, KEY_Cyrillic_u_macron, CYRILLIC SMALL LETTER U WITH MACRON */
	0xb53a, /* 1872, 0x100286d, U+286d, KEY_braille_dots_13467, BRAILLE PATTERN DOTS-13467 */
	0x9671, /* 1578, 0x10010e3, U+10e3, KEY_Georgian_un, GEORGIAN LETTER UN */
	0xcea0, /* 2103, 0x1008ff05, KEY_XF86KbdBrightnessUp, Keyboards may be lit */
	0xbc7d, /* 1932, 0x10028a9, U+28a9, KEY_braille_dots_1468, BRAILLE PATTERN DOTS-1468 */
	0xe18b, /* 2289, 0x1005ff11, KEY_SunF37, Labeled F12 */
	0x9c52, /* 1639, 0x1001eb7, U+1eb7, KEY_abrevebelowdot, LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
	0xc716, /* 2017, 0x10028fe, U+28fe, KEY_braille_dots_2345678, BRAILLE PATTERN DOTS-2345678 */
	0xc4a6, /* 1998, 0x10028eb, U+28eb, KEY_braille_dots_124678, BRAILLE PATTERN DOTS-124678 */
	0x0000,
	0xc3a7, /* 1990, 0x10028e3, U+28e3, KEY_braille_dots_12678, BRAILLE PATTERN DOTS-12678 */
	0xb1d8, /* 1844, 0x1002851, U+2851, KEY_braille_dots_157, BRAILLE PATTERN DOTS-157 */
	0xec84, /* 2404, 0x100000ee, KEY_IO */
	0x0000,
	0x0ddb, /*  178, 0xfe12, KEY_ISO_Level5_Latch */
	0xb84a, /* 1897, 0x1002886, U+2886, KEY_braille_dots_238, BRAILLE PATTERN DOTS-238 */
	0x0000,
	0x314f, /*  566, 0x1bf, U+017c, KEY_zabovedot, LATIN SMALL LETTER Z WITH DOT ABOVE */
	0x1287, /*  216, 0xfe53, KEY_dead_perispomeni, alias for dead_tilde */
	0x0c76, /*  163, 0xffe6, KEY_Shift_Lock, Shift lock */
	0x0000,
	0xa4f4, /* 1729, 0x1002081, U+2081, KEY_onesubscript, SUBSCRIPT ONE */
	0xc1e6, /* 1976, 0x10028d5, U+28d5, KEY_braille_dots_13578, BRAILLE PATTERN DOTS-13578 */
	0xa50e, /* 1730, 0x1002082, U+2082, KEY_twosubscript, SUBSCRIPT TWO */
	0x9c6e, /* 1640, 0x1001eb8, U+1eb8, KEY_Ebelowdot, LATIN CAPITAL LETTER E WITH DOT BELOW */
	0xb717, /* 1887, 0x100287c, U+287c, KEY_braille_dots_34567, BRAILLE PATTERN DOTS-34567 */
	0x2e1c, /*  527, 0xf1, U+00f1, KEY_ntilde, LATIN SMALL LETTER N WITH TILDE */
	0x9eaf, /* 1663, 0x1001ecf, U+1ecf, KEY_ohook, LATIN SMALL LETTER O WITH HOOK ABOVE */
	0x0d64, /*  174, 0xfe03, KEY_ISO_Level3_Shift */
	0x9989, /* 1611, 0x1000259, U+0259, KEY_schwa, LATIN SMALL LETTER SCHWA */
	0x3ae7, /*  679, 0x1001e83, U+1e83, KEY_wacute, LATIN SMALL LETTER W WITH ACUTE */
	0x4ab2, /*  848, 0x1000492, U+0492, KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */
	0xc2e7, /* 1984, 0x10028dd, U+28dd, KEY_braille_dots_134578, BRAILLE PATTERN DOTS-134578 */
	0xc62d, /* 2010, 0x10028f7, U+28f7, KEY_braille_dots_1235678, BRAILLE PATTERN DOTS-1235678 */
	0x0000,
	0x0000,
	0xa2bd, /* 1705, 0x10001a1, U+01a1, KEY_ohorn, LATIN SMALL LETTER O WITH HORN */
	0xb6b6, /* 1884, 0x1002879, U+2879, KEY_braille_dots_14567, BRAILLE PATTERN DOTS-14567 */
	0xadcb, /* 1810, 0x100282f, U+282f, KEY_braille_dots_12346, BRAILLE PATTERN DOTS-12346 */
	0xb8ff, /* 1903, 0x100288c, U+288c, KEY_braille_dots_348, BRAILLE PATTERN DOTS-348 */
	0x2bcc, /*  499, 0xd7, U+00d7, KEY_multiply, MULTIPLICATION SIGN */
	0x999c, /* 1612, 0x10001b7, U+01b7, KEY_EZH, LATIN CAPITAL LETTER EZH */
	0x35ea, /*  620, 0x2fd, U+016d, KEY_ubreve, LATIN SMALL LETTER U WITH BREVE */
	0x2804, /*  455, 0xac, U+00ac, KEY_notsign, NOT SIGN */
	0xa6ed, /* 1749, 0x1002248, U+2245, KEY_approxeq, ALMOST EQUAL TO */
	0xd41a, /* 2155, 0x1008ff41, KEY_XF86Launch1, Launch Application */
	0xd433, /* 2156, 0x1008ff42, KEY_XF86Launch2, Launch Application */
	0x38f0, /*  657, 0x3fe, U+016b, KEY_umacron, LATIN SMALL LETTER U WITH MACRON */
	0xd465, /* 2158, 0x1008ff44, KEY_XF86Launch4, Launch Application */
	0x812a, /* 1379, 0xea2, KEY_Hangul_SsangKiyeog */
	0xaf3b, /* 1822, 0x100283b, U+283b, KEY_braille_dots_12456, BRAILLE PATTERN DOTS-12456 */
	0xd4b0, /* 2161, 0x1008ff47, KEY_XF86Launch7, Launch Application */
	0xaf5b, /* 1823, 0x100283c, U+283c, KEY_braille_dots_3456, BRAILLE PATTERN DOTS-3456 */
	0x70d3, /* 1216, 0xafd, U+201a, KEY_singlelowquotemark, SINGLE LOW-9 QUOTATION MARK */
	0xbacb, /* 1918, 0x100289b, U+289b, KEY_braille_dots_12458, BRAILLE PATTERN DOTS-12458 */
	0x2eb3, /*  534, 0xf8, U+00f8, KEY_oslash, LATIN SMALL LETTER O WITH STROKE */
	0xb4fb, /* 1870, 0x100286b, U+286b, KEY_braille_dots_12467, BRAILLE PATTERN DOTS-12467 */
	0xa632, /* 1741, 0x1002209, U+2209, KEY_notelementof, NOT AN ELEMENT OF */
	0x2e71, /*  531, 0xf5, U+00f5, KEY_otilde, LATIN SMALL LETTER O WITH TILDE */
	0xc690, /* 2013, 0x10028fa, U+28fa, KEY_braille_dots_245678, BRAILLE PATTERN DOTS-245678 */
	0xbaeb, /* 1919, 0x100289c, U+289c, KEY_braille_dots_3458, BRAILLE PATTERN DOTS-3458 */
	0xd4fb, /* 2164, 0x1008ff4a, KEY_XF86LaunchA, Launch Application */
	0xd514, /* 2165, 0x1008ff4b, KEY_XF86LaunchB, Launch Application */
	0x196b, /*  279, 0xfe7a, KEY_AudibleBell_Enable */
	0xb5f7, /* 1878, 0x1002873, U+2873, KEY_braille_dots_12567, BRAILLE PATTERN DOTS-12567 */
	0xd55f, /* 2168, 0x1008ff4e, KEY_XF86LaunchE, Launch Application */
	0xbdb7, /* 1942, 0x10028b3, U+28b3, KEY_braille_dots_12568, BRAILLE PATTERN DOTS-12568 */
	0x0000,
	0xb34a, /* 1856, 0x100285d, U+285d, KEY_braille_dots_13457, BRAILLE PATTERN DOTS-13457 */
	0x0710, /*   84, 0xffac, KEY_KP_Separator, Separator, often comma */
	0xc1a7, /* 1974, 0x10028d3, U+28d3, KEY_braille_dots_12578, BRAILLE PATTERN DOTS-12578 */
	0xd836, /* 2198, 0x1008ff6d, KEY_XF86Paste, Paste */
	0x21b9, /*  362, 0x2f, U+002f, KEY_slash, SOLIDUS */
	0x7d8d, /* 1345, 0xde7, U+0e47, KEY_Thai_maitaikhu, THAI CHARACTER MAITAIKHU */
	0x3bbc, /*  689, 0x4a2, U+300c, KEY_kana_openingbracket, LEFT CORNER BRACKET */
	0xaaf8, /* 1786, 0x1002817, U+2817, KEY_braille_dots_1235, BRAILLE PATTERN DOTS-1235 */
	0xc0cb, /* 1967, 0x10028cc, U+28cc, KEY_braille_dots_3478, BRAILLE PATTERN DOTS-3478 */
	0xacd8, /* 1802, 0x1002827, U+2827, KEY_braille_dots_1236, BRAILLE PATTERN DOTS-1236 */
	0x5cd6, /* 1013, 0x7c4, U+0394, KEY_Greek_DELTA, GREEK CAPITAL LETTER DELTA */
	0xb0a8, /* 1834, 0x1002847, U+2847, KEY_braille_dots_1237, BRAILLE PATTERN DOTS-1237 */
	0x0000,
	0xad50, /* 1806, 0x100282b, U+282b, KEY_braille_dots_1246, BRAILLE PATTERN DOTS-1246 */
	0xbdf6, /* 1944, 0x10028b5, U+28b5, KEY_braille_dots_13568, BRAILLE PATTERN DOTS-13568 */
	0x2562, /*  418, 0x66, U+0066, KEY_f, LATIN SMALL LETTER F */
	0x3b8b, /*  687, 0x47e, U+203e, KEY_overline, OVERLINE */
	0xae44, /* 1814, 0x1002833, U+2833, KEY_braille_dots_1256, BRAILLE PATTERN DOTS-1256 */
	0x63b1, /* 1081, 0x8b4, KEY_botvertsummationconnector */
	0xabad, /* 1792, 0x100281d, U+281d, KEY_braille_dots_1345, BRAILLE PATTERN DOTS-1345 */
	0x0000,
	0xad8d, /* 1808, 0x100282d, U+282d, KEY_braille_dots_1346, BRAILLE PATTERN DOTS-1346 */
	0xb38a, /* 1858, 0x100285f, U+285f, KEY_braille_dots_123457, BRAILLE PATTERN DOTS-123457 */
	0xb404, /* 1862, 0x1002863, U+2863, KEY_braille_dots_1267, BRAILLE PATTERN DOTS-1267 */
	0x52ba, /*  919, 0x6bd, U+0490, KEY_Ukrainian_GHE_WITH_UPTURN, CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
	0xae81, /* 1816, 0x1002835, U+2835, KEY_braille_dots_1356, BRAILLE PATTERN DOTS-1356 */
	0x2f36, /*  540, 0xfd, U+00fd, KEY_yacute, LATIN SMALL LETTER Y WITH ACUTE */
	0x480f, /*  824, 0x5e9, U+0649, KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */
	0xb676, /* 1882, 0x1002877, U+2877, KEY_braille_dots_123567, BRAILLE PATTERN DOTS-123567 */
	0xba11, /* 1912, 0x1002895, U+2895, KEY_braille_dots_1358, BRAILLE PATTERN DOTS-1358 */
	0x8690, /* 1431, 0xed6, KEY_Hangul_J_KiyeogSios */
	0xb441, /* 1864, 0x1002865, U+2865, KEY_braille_dots_1367, BRAILLE PATTERN DOTS-1367 */
	0xb36a, /* 1857, 0x100285e, U+285e, KEY_braille_dots_23457, BRAILLE PATTERN DOTS-23457 */
	0x609d, /* 1053, 0x7f2, U+03c3, KEY_Greek_sigma, GREEK SMALL LETTER SIGMA */
	0xc266, /* 1980, 0x10028d9, U+28d9, KEY_braille_dots_14578, BRAILLE PATTERN DOTS-14578 */
	0xabcc, /* 1793, 0x100281e, U+281e, KEY_braille_dots_2345, BRAILLE PATTERN DOTS-2345 */
	0x8afe, /* 1467, 0xefa, KEY_Hangul_J_YeorinHieuh */
	0xba8d, /* 1916, 0x1002899, U+2899, KEY_braille_dots_1458, BRAILLE PATTERN DOTS-1458 */
	0x2edd, /*  536, 0xf9, U+00f9, KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */
	0x71d8, /* 1227, 0xbc6, KEY_underbar, (U+005F LOW LINE) */
	0x1759, /*  262, 0xfe8b, KEY_dead_capital_schwa */
	0xaea0, /* 1817, 0x1002836, U+2836, KEY_braille_dots_2356, BRAILLE PATTERN DOTS-2356 */
	0xc466, /* 1996, 0x10028e9, U+28e9, KEY_braille_dots_14678, BRAILLE PATTERN DOTS-14678 */
	0xc34b, /* 1987, 0x10028e0, U+28e0, KEY_braille_dots_678, BRAILLE PATTERN DOTS-678 */
	0x0000,
	0x564c, /*  954, 0x6df, U+044a, KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */
	0x0000,
	0xb5b9, /* 1876, 0x1002871, U+2871, KEY_braille_dots_1567, BRAILLE PATTERN DOTS-1567 */
	0x2f4a, /*  541, 0xfe, U+00fe, KEY_thorn, LATIN SMALL LETTER THORN */
	0xbc20, /* 1929, 0x10028a6, U+28a6, KEY_braille_dots_2368, BRAILLE PATTERN DOTS-2368 */
	0x0000,
	0xc5aa, /* 2006, 0x10028f3, U+28f3, KEY_braille_dots_125678, BRAILLE PATTERN DOTS-125678 */
	0xb737, /* 1888, 0x100287d, U+287d, KEY_braille_dots_134567, BRAILLE PATTERN DOTS-134567 */
	0xbef7, /* 1952, 0x10028bd, U+28bd, KEY_braille_dots_134568, BRAILLE PATTERN DOTS-134568 */
	0x0000,
	0xa127, /* 1687, 0x1001ee7, U+1ee7, KEY_uhook, LATIN SMALL LETTER U WITH HOOK ABOVE */
	0x6f1f, /* 1198, 0xaea, KEY_leftpointer, (U+261C WHITE LEFT POINTING INDEX) */
	0xabeb, /* 1794, 0x100281f, U+281f, KEY_braille_dots_12345, BRAILLE PATTERN DOTS-12345 */
	0x310e, /*  563, 0x1bc, U+017a, KEY_zacute, LATIN SMALL LETTER Z WITH ACUTE */
	0xb19b, /* 1842, 0x100284f, U+284f, KEY_braille_dots_12347, BRAILLE PATTERN DOTS-12347 */
	0xaebf, /* 1818, 0x1002837, U+2837, KEY_braille_dots_12356, BRAILLE PATTERN DOTS-12356 */
	0x313b, /*  565, 0x1be, U+017e, KEY_zcaron, LATIN SMALL LETTER Z WITH CARON */
	0xba4f, /* 1914, 0x1002897, U+2897, KEY_braille_dots_12358, BRAILLE PATTERN DOTS-12358 */
	0xb47f, /* 1866, 0x1002867, U+2867, KEY_braille_dots_12367, BRAILLE PATTERN DOTS-12367 */
	0xa2e3, /* 1707, 0x10001b0, U+01b0, KEY_uhorn, LATIN SMALL LETTER U WITH HORN */
	0x9a5e, /* 1621, 0x1001ea5, U+1ea5, KEY_acircumflexacute, LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x7514, /* 1261, 0xcf0, U+05e0, KEY_hebrew_nun, HEBREW LETTER NUN */
	0x75ae, /* 1267, 0xcf5, U+05e5, KEY_hebrew_finalzade, HEBREW LETTER FINAL TSADI */
	0x689d, /* 1134, 0x9f8, U+2502, KEY_vertbar, BOX DRAWINGS LIGHT VERTICAL */
	0x5f67, /* 1040, 0x7e6, U+03b6, KEY_Greek_zeta, GREEK SMALL LETTER ZETA */
	0xc0ab, /* 1966, 0x10028cb, U+28cb, KEY_braille_dots_12478, BRAILLE PATTERN DOTS-12478 */
	0x75cc, /* 1268, 0xcf5, KEY_hebrew_finalzadi, deprecated */
	0xaf7a, /* 1824, 0x100283d, U+283d, KEY_braille_dots_13456, BRAILLE PATTERN DOTS-13456 */
	0x0e88, /*  184, 0xfe09, KEY_ISO_Next_Group_Lock */
	0xbb0a, /* 1920, 0x100289d, U+289d, KEY_braille_dots_13458, BRAILLE PATTERN DOTS-13458 */
	0x5f96, /* 1042, 0x7e8, U+03b8, KEY_Greek_theta, GREEK SMALL LETTER THETA */
	0xbcfa, /* 1936, 0x10028ad, U+28ad, KEY_braille_dots_13468, BRAILLE PATTERN DOTS-13468 */
	0x716d, /* 1222, 0xba9, KEY_upcaret, (U+2227 LOGICAL AND) */
	0xc0ea, /* 1968, 0x10028cd, U+28cd, KEY_braille_dots_13478, BRAILLE PATTERN DOTS-13478 */
	0xb636, /* 1880, 0x1002875, U+2875, KEY_braille_dots_13567, BRAILLE PATTERN DOTS-13567 */
	0x286d, /*  460, 0xb1, U+00b1, KEY_plusminus, PLUS-MINUS SIGN */
	0x0000,
	0x65c6, /* 1102, 0x8dd, U+222a, KEY_union, UNION */
	0xc66f, /* 2012, 0x10028f9, U+28f9, KEY_braille_dots_145678, BRAILLE PATTERN DOTS-145678 */
	0xb758, /* 1889, 0x100287e, U+287e, KEY_braille_dots_234567, BRAILLE PATTERN DOTS-234567 */
	0xbf18, /* 1953, 0x10028be, U+28be, KEY_braille_dots_234568, BRAILLE PATTERN DOTS-234568 */
	0xc3e6, /* 1992, 0x10028e5, U+28e5, KEY_braille_dots_13678, BRAILLE PATTERN DOTS-13678 */
	0x42e9, /*  772, 0x1000688, U+0688, KEY_Arabic_ddal, ARABIC LETTER DDAL */
	0x0dbd, /*  177, 0xfe11, KEY_ISO_Level5_Shift */
	0x2c9f, /*  509, 0xdf, U+00df, KEY_ssharp, LATIN SMALL LETTER SHARP S */
	0xbb2a, /* 1921, 0x100289e, U+289e, KEY_braille_dots_23458, BRAILLE PATTERN DOTS-23458 */
	0xb55a, /* 1873, 0x100286e, U+286e, KEY_braille_dots_23467, BRAILLE PATTERN DOTS-23467 */
	0xa824, /* 1761, 0xfff9, KEY_braille_dot_9 */
	0xc3c7, /* 1991, 0x10028e4, U+28e4, KEY_braille_dots_3678, BRAILLE PATTERN DOTS-3678 */
	0xc10a, /* 1969, 0x10028ce, U+28ce, KEY_braille_dots_23478, BRAILLE PATTERN DOTS-23478 */
	0xb656, /* 1881, 0x1002876, U+2876, KEY_braille_dots_23567, BRAILLE PATTERN DOTS-23567 */
	0xbe16, /* 1945, 0x10028b6, U+28b6, KEY_braille_dots_23568, BRAILLE PATTERN DOTS-23568 */
	0x0000,
	0xc206, /* 1977, 0x10028d6, U+28d6, KEY_braille_dots_23578, BRAILLE PATTERN DOTS-23578 */
	0x6d7c, /* 1184, 0xadc, KEY_filledlefttribullet, (U+25C0 BLACK LEFT-POINTING TRIANGLE) */
	0x0000,
	0xc247, /* 1979, 0x10028d8, U+28d8, KEY_braille_dots_4578, BRAILLE PATTERN DOTS-4578 */
	0x3abf, /*  677, 0x1001e81, U+1e81, KEY_wgrave, LATIN SMALL LETTER W WITH GRAVE */
	0x7d72, /* 1344, 0xde6, U+0e46, KEY_Thai_maiyamok, THAI CHARACTER MAIYAMOK */
	0xbe96, /* 1949, 0x10028ba, U+28ba, KEY_braille_dots_24568, BRAILLE PATTERN DOTS-24568 */
	0x33c1, /*  596, 0x1f9, U+016f, KEY_uring, LATIN SMALL LETTER U WITH RING ABOVE */
	0xc286, /* 1981, 0x10028da, U+28da, KEY_braille_dots_24578, BRAILLE PATTERN DOTS-24578 */
	0x4529, /*  794, 0x5c7, U+0627, KEY_Arabic_alef, ARABIC LETTER ALEF */
	0x0000,
	0xc447, /* 1995, 0x10028e8, U+28e8, KEY_braille_dots_4678, BRAILLE PATTERN DOTS-4678 */
	0xc486, /* 1997, 0x10028ea, U+28ea, KEY_braille_dots_24678, BRAILLE PATTERN DOTS-24678 */
	0x0000,
	0xa6c1, /* 1747, 0x100222d, U+222d, KEY_tintegral, TRIPLE INTEGRAL */
	0x0000,
	0x2776, /*  449, 0xa6, U+00a6, KEY_brokenbar, BROKEN BAR */
	0xa7ee, /* 1759, 0xfff7, KEY_braille_dot_7 */
	0x0000,
	0x31a2, /*  570, 0x1c6, U+0106, KEY_Cacute, LATIN CAPITAL LETTER C WITH ACUTE */
	0xc58a, /* 2005, 0x10028f2, U+28f2, KEY_braille_dots_25678, BRAILLE PATTERN DOTS-25678 */
	0xa26f, /* 1701, 0x1001ef7, U+1ef7, KEY_yhook, LATIN SMALL LETTER Y WITH HOOK ABOVE */
	0xbed7, /* 1951, 0x10028bc, U+28bc, KEY_braille_dots_34568, BRAILLE PATTERN DOTS-34568 */
	0x0000,
	0xc2c7, /* 1983, 0x10028dc, U+28dc, KEY_braille_dots_34578, BRAILLE PATTERN DOTS-34578 */
	0x0000,
	0x0000,
	0x0000,
	0xc4c7, /* 1999, 0x10028ec, U+28ec, KEY_braille_dots_34678, BRAILLE PATTERN DOTS-34678 */
	0x0000,
	0xd172, /* 2129, 0x1008ff27, KEY_XF86Forward, Like forward on a browser */
	0x594b, /*  984, 0x6fd, U+0429, KEY_Cyrillic_SHCHA, CYRILLIC CAPITAL LETTER SHCHA */
	0xd1ba, /* 2132, 0x1008ff2a, KEY_XF86PowerOff, Power off system entirely */
	0x6fd4, /* 1206, 0xaf3, U+2713, KEY_checkmark, CHECK MARK */
	0x0000,
	0xd308, /* 2145, 0x1008ff37, KEY_XF86History, Show history of web surfing */
	0xc5cb, /* 2007, 0x10028f4, U+28f4, KEY_braille_dots_35678, BRAILLE PATTERN DOTS-35678 */
	0xa13a, /* 1688, 0x1001ee8, U+1ee8, KEY_Uhornacute, LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
	0xa354, /* 1712, 0x10020a4, U+20a4, KEY_LiraSign, LIRA SIGN */
	0x0000,
	0x4ba0, /*  855, 0x100049d, U+049d, KEY_Cyrillic_ka_vertstroke, CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
	0x4da4, /*  870, 0x10004d8, U+04d8, KEY_Cyrillic_SCHWA, CYRILLIC CAPITAL LETTER SCHWA */
	0x0000,
	0x5c21, /* 1007, 0x7b9, U+03cb, KEY_Greek_upsilondieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8c32, /* 1477, 0x100055c, U+055c, KEY_Armenian_amanak, ARMENIAN EXCLAMATION MARK */
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
	0xc690, /* 2013, 0x10028fa, U+28fa, KEY_braille_dots_245678, BRAILLE PATTERN DOTS-245678 */
	0xc6d3, /* 2015, 0x10028fc, U+28fc, KEY_braille_dots_345678, BRAILLE PATTERN DOTS-345678 */
	0xc6b1, /* 2014, 0x10028fb, U+28fb, KEY_braille_dots_1245678, BRAILLE PATTERN DOTS-1245678 */
	0xc716, /* 2017, 0x10028fe, U+28fe, KEY_braille_dots_2345678, BRAILLE PATTERN DOTS-2345678 */
	0xc738, /* 2018, 0x10028ff, U+28ff, KEY_braille_dots_12345678, BRAILLE PATTERN DOTS-12345678 */
	0x0000,
	0xc6f4, /* 2016, 0x10028fd, U+28fd, KEY_braille_dots_1345678, BRAILLE PATTERN DOTS-1345678 */
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
	0x2063, /*  346, 0x20, U+0020, KEY_space, SPACE */
	0x2076, /*  347, 0x21, U+0021, KEY_exclam, EXCLAMATION MARK */
	0x208a, /*  348, 0x22, U+0022, KEY_quotedbl, QUOTATION MARK */
	0x20a0, /*  349, 0x23, U+0023, KEY_numbersign, NUMBER SIGN */
	0x20b8, /*  350, 0x24, U+0024, KEY_dollar, DOLLAR SIGN */
	0x20cc, /*  351, 0x25, U+0025, KEY_percent, PERCENT SIGN */
	0x20e1, /*  352, 0x26, U+0026, KEY_ampersand, AMPERSAND */
	0x20f8, /*  353, 0x27, U+0027, KEY_apostrophe, APOSTROPHE */
	0x2128, /*  355, 0x28, U+0028, KEY_parenleft, LEFT PARENTHESIS */
	0x213f, /*  356, 0x29, U+0029, KEY_parenright, RIGHT PARENTHESIS */
	0x2157, /*  357, 0x2a, U+002a, KEY_asterisk, ASTERISK */
	0x216d, /*  358, 0x2b, U+002b, KEY_plus, PLUS SIGN */
	0x217f, /*  359, 0x2c, U+002c, KEY_comma, COMMA */
	0x2192, /*  360, 0x2d, U+002d, KEY_minus, HYPHEN-MINUS */
	0x21a5, /*  361, 0x2e, U+002e, KEY_period, FULL STOP */
	0x21b9, /*  362, 0x2f, U+002f, KEY_slash, SOLIDUS */
	0x21cc, /*  363, 0x30, U+0030, KEY_0, DIGIT ZERO */
	0x21db, /*  364, 0x31, U+0031, KEY_1, DIGIT ONE */
	0x21ea, /*  365, 0x32, U+0032, KEY_2, DIGIT TWO */
	0x21f9, /*  366, 0x33, U+0033, KEY_3, DIGIT THREE */
	0x2208, /*  367, 0x34, U+0034, KEY_4, DIGIT FOUR */
	0x2217, /*  368, 0x35, U+0035, KEY_5, DIGIT FIVE */
	0x2226, /*  369, 0x36, U+0036, KEY_6, DIGIT SIX */
	0x2235, /*  370, 0x37, U+0037, KEY_7, DIGIT SEVEN */
	0x2244, /*  371, 0x38, U+0038, KEY_8, DIGIT EIGHT */
	0x2253, /*  372, 0x39, U+0039, KEY_9, DIGIT NINE */
	0x2262, /*  373, 0x3a, U+003a, KEY_colon, COLON */
	0x2275, /*  374, 0x3b, U+003b, KEY_semicolon, SEMICOLON */
	0x228c, /*  375, 0x3c, U+003c, KEY_less, LESS-THAN SIGN */
	0x229e, /*  376, 0x3d, U+003d, KEY_equal, EQUALS SIGN */
	0x22b1, /*  377, 0x3e, U+003e, KEY_greater, GREATER-THAN SIGN */
	0x22c6, /*  378, 0x3f, U+003f, KEY_question, QUESTION MARK */
	0x22dc, /*  379, 0x40, U+0040, KEY_at, COMMERCIAL AT */
	0x22ec, /*  380, 0x41, U+0041, KEY_A, LATIN CAPITAL LETTER A */
	0x22fb, /*  381, 0x42, U+0042, KEY_B, LATIN CAPITAL LETTER B */
	0x230a, /*  382, 0x43, U+0043, KEY_C, LATIN CAPITAL LETTER C */
	0x2319, /*  383, 0x44, U+0044, KEY_D, LATIN CAPITAL LETTER D */
	0x2328, /*  384, 0x45, U+0045, KEY_E, LATIN CAPITAL LETTER E */
	0x2337, /*  385, 0x46, U+0046, KEY_F, LATIN CAPITAL LETTER F */
	0x2346, /*  386, 0x47, U+0047, KEY_G, LATIN CAPITAL LETTER G */
	0x2355, /*  387, 0x48, U+0048, KEY_H, LATIN CAPITAL LETTER H */
	0x2364, /*  388, 0x49, U+0049, KEY_I, LATIN CAPITAL LETTER I */
	0x2373, /*  389, 0x4a, U+004a, KEY_J, LATIN CAPITAL LETTER J */
	0x2382, /*  390, 0x4b, U+004b, KEY_K, LATIN CAPITAL LETTER K */
	0x2391, /*  391, 0x4c, U+004c, KEY_L, LATIN CAPITAL LETTER L */
	0x23a0, /*  392, 0x4d, U+004d, KEY_M, LATIN CAPITAL LETTER M */
	0x23af, /*  393, 0x4e, U+004e, KEY_N, LATIN CAPITAL LETTER N */
	0x23be, /*  394, 0x4f, U+004f, KEY_O, LATIN CAPITAL LETTER O */
	0x23cd, /*  395, 0x50, U+0050, KEY_P, LATIN CAPITAL LETTER P */
	0x23dc, /*  396, 0x51, U+0051, KEY_Q, LATIN CAPITAL LETTER Q */
	0x23eb, /*  397, 0x52, U+0052, KEY_R, LATIN CAPITAL LETTER R */
	0x23fa, /*  398, 0x53, U+0053, KEY_S, LATIN CAPITAL LETTER S */
	0x2409, /*  399, 0x54, U+0054, KEY_T, LATIN CAPITAL LETTER T */
	0x2418, /*  400, 0x55, U+0055, KEY_U, LATIN CAPITAL LETTER U */
	0x2427, /*  401, 0x56, U+0056, KEY_V, LATIN CAPITAL LETTER V */
	0x2436, /*  402, 0x57, U+0057, KEY_W, LATIN CAPITAL LETTER W */
	0x2445, /*  403, 0x58, U+0058, KEY_X, LATIN CAPITAL LETTER X */
	0x2454, /*  404, 0x59, U+0059, KEY_Y, LATIN CAPITAL LETTER Y */
	0x2463, /*  405, 0x5a, U+005a, KEY_Z, LATIN CAPITAL LETTER Z */
	0x2472, /*  406, 0x5b, U+005b, KEY_bracketleft, LEFT SQUARE BRACKET */
	0x248b, /*  407, 0x5c, U+005c, KEY_backslash, REVERSE SOLIDUS */
	0x24a2, /*  408, 0x5d, U+005d, KEY_bracketright, RIGHT SQUARE BRACKET */
	0x24bc, /*  409, 0x5e, U+005e, KEY_asciicircum, CIRCUMFLEX ACCENT */
	0x24d5, /*  410, 0x5f, U+005f, KEY_underscore, LOW LINE */
	0x24ed, /*  411, 0x60, U+0060, KEY_grave, GRAVE ACCENT */
	0x2517, /*  413, 0x61, U+0061, KEY_a, LATIN SMALL LETTER A */
	0x2526, /*  414, 0x62, U+0062, KEY_b, LATIN SMALL LETTER B */
	0x2535, /*  415, 0x63, U+0063, KEY_c, LATIN SMALL LETTER C */
	0x2544, /*  416, 0x64, U+0064, KEY_d, LATIN SMALL LETTER D */
	0x2553, /*  417, 0x65, U+0065, KEY_e, LATIN SMALL LETTER E */
	0x2562, /*  418, 0x66, U+0066, KEY_f, LATIN SMALL LETTER F */
	0x2571, /*  419, 0x67, U+0067, KEY_g, LATIN SMALL LETTER G */
	0x2580, /*  420, 0x68, U+0068, KEY_h, LATIN SMALL LETTER H */
	0x258f, /*  421, 0x69, U+0069, KEY_i, LATIN SMALL LETTER I */
	0x259e, /*  422, 0x6a, U+006a, KEY_j, LATIN SMALL LETTER J */
	0x25ad, /*  423, 0x6b, U+006b, KEY_k, LATIN SMALL LETTER K */
	0x25bc, /*  424, 0x6c, U+006c, KEY_l, LATIN SMALL LETTER L */
	0x25cb, /*  425, 0x6d, U+006d, KEY_m, LATIN SMALL LETTER M */
	0x25da, /*  426, 0x6e, U+006e, KEY_n, LATIN SMALL LETTER N */
	0x25e9, /*  427, 0x6f, U+006f, KEY_o, LATIN SMALL LETTER O */
	0x25f8, /*  428, 0x70, U+0070, KEY_p, LATIN SMALL LETTER P */
	0x2607, /*  429, 0x71, U+0071, KEY_q, LATIN SMALL LETTER Q */
	0x2616, /*  430, 0x72, U+0072, KEY_r, LATIN SMALL LETTER R */
	0x2625, /*  431, 0x73, U+0073, KEY_s, LATIN SMALL LETTER S */
	0x2634, /*  432, 0x74, U+0074, KEY_t, LATIN SMALL LETTER T */
	0x2643, /*  433, 0x75, U+0075, KEY_u, LATIN SMALL LETTER U */
	0x2652, /*  434, 0x76, U+0076, KEY_v, LATIN SMALL LETTER V */
	0x2661, /*  435, 0x77, U+0077, KEY_w, LATIN SMALL LETTER W */
	0x2670, /*  436, 0x78, U+0078, KEY_x, LATIN SMALL LETTER X */
	0x267f, /*  437, 0x79, U+0079, KEY_y, LATIN SMALL LETTER Y */
	0x268e, /*  438, 0x7a, U+007a, KEY_z, LATIN SMALL LETTER Z */
	0x269d, /*  439, 0x7b, U+007b, KEY_braceleft, LEFT CURLY BRACKET */
	0x26b4, /*  440, 0x7c, U+007c, KEY_bar, VERTICAL LINE */
	0x26c5, /*  441, 0x7d, U+007d, KEY_braceright, RIGHT CURLY BRACKET */
	0x26dd, /*  442, 0x7e, U+007e, KEY_asciitilde, TILDE */
	0x9779, /* 1588, 0x10010ed, U+10ed, KEY_Georgian_char, GEORGIAN LETTER CHAR */
	0x9794, /* 1589, 0x10010ee, U+10ee, KEY_Georgian_xan, GEORGIAN LETTER XAN */
	0x97ae, /* 1590, 0x10010ef, U+10ef, KEY_Georgian_jhan, GEORGIAN LETTER JHAN */
	0x97c9, /* 1591, 0x10010f0, U+10f0, KEY_Georgian_hae, GEORGIAN LETTER HAE */
	0x97e3, /* 1592, 0x10010f1, U+10f1, KEY_Georgian_he, GEORGIAN LETTER HE */
	0x97fc, /* 1593, 0x10010f2, U+10f2, KEY_Georgian_hie, GEORGIAN LETTER HIE */
	0x9816, /* 1594, 0x10010f3, U+10f3, KEY_Georgian_we, GEORGIAN LETTER WE */
	0x4c0a, /*  858, 0x10004ae, U+04ae, KEY_Cyrillic_U_straight, CYRILLIC CAPITAL LETTER STRAIGHT U */
	0x4c2b, /*  859, 0x10004af, U+04af, KEY_Cyrillic_u_straight, CYRILLIC SMALL LETTER STRAIGHT U */
	0x4c4c, /*  860, 0x10004b0, U+04b0, KEY_Cyrillic_U_straight_bar, CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
	0x4c71, /*  861, 0x10004b1, U+04b1, KEY_Cyrillic_u_straight_bar, CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
	0x4c96, /*  862, 0x10004b2, U+04b2, KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
	0x4cb9, /*  863, 0x10004b3, U+04b3, KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */
	0x0000,
	0x0000,
	0x4cdc, /*  864, 0x10004b6, U+04b6, KEY_Cyrillic_CHE_descender, CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
	0x4d00, /*  865, 0x10004b7, U+04b7, KEY_Cyrillic_che_descender, CYRILLIC SMALL LETTER CHE WITH DESCENDER */
	0x4d24, /*  866, 0x10004b8, U+04b8, KEY_Cyrillic_CHE_vertstroke, CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
	0x4d49, /*  867, 0x10004b9, U+04b9, KEY_Cyrillic_che_vertstroke, CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
	0x4d6e, /*  868, 0x10004ba, U+04ba, KEY_Cyrillic_SHHA, CYRILLIC CAPITAL LETTER SHHA */
	0x4d89, /*  869, 0x10004bb, U+04bb, KEY_Cyrillic_shha, CYRILLIC SMALL LETTER SHHA */
	0x0000,
	0x0000,
	0x0000,
	0x98d0, /* 1602, 0x10001d1, U+01d1, KEY_Ocaron, LATIN CAPITAL LETTER O WITH CARON */
	0x86cd, /* 1433, 0xed8, KEY_Hangul_J_NieunJieuj */
	0x72be, /* 1238, 0xcdf, U+2017, KEY_hebrew_doublelowline, DOUBLE LOW LINE */
	0x72e0, /* 1239, 0xce0, U+05d0, KEY_hebrew_aleph, HEBREW LETTER ALEF */
	0x72fa, /* 1240, 0xce1, U+05d1, KEY_hebrew_bet, HEBREW LETTER BET */
	0x732b, /* 1242, 0xce2, U+05d2, KEY_hebrew_gimel, HEBREW LETTER GIMEL */
	0x7360, /* 1244, 0xce3, U+05d3, KEY_hebrew_dalet, HEBREW LETTER DALET */
	0x7395, /* 1246, 0xce4, U+05d4, KEY_hebrew_he, HEBREW LETTER HE */
	0x73ac, /* 1247, 0xce5, U+05d5, KEY_hebrew_waw, HEBREW LETTER VAV */
	0x26f5, /*  443, 0xa0, U+00a0, KEY_nobreakspace, NO-BREAK SPACE */
	0x270f, /*  444, 0xa1, U+00a1, KEY_exclamdown, INVERTED EXCLAMATION MARK */
	0x2727, /*  445, 0xa2, U+00a2, KEY_cent, CENT SIGN */
	0x2739, /*  446, 0xa3, U+00a3, KEY_sterling, POUND SIGN */
	0x274f, /*  447, 0xa4, U+00a4, KEY_currency, CURRENCY SIGN */
	0x2765, /*  448, 0xa5, U+00a5, KEY_yen, YEN SIGN */
	0x2776, /*  449, 0xa6, U+00a6, KEY_brokenbar, BROKEN BAR */
	0x278d, /*  450, 0xa7, U+00a7, KEY_section, SECTION SIGN */
	0x27a2, /*  451, 0xa8, U+00a8, KEY_diaeresis, DIAERESIS */
	0x27b9, /*  452, 0xa9, U+00a9, KEY_copyright, COPYRIGHT SIGN */
	0x27d0, /*  453, 0xaa, U+00aa, KEY_ordfeminine, FEMININE ORDINAL INDICATOR */
	0x27e9, /*  454, 0xab, U+00ab, KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x2804, /*  455, 0xac, U+00ac, KEY_notsign, NOT SIGN */
	0x2819, /*  456, 0xad, U+00ad, KEY_hyphen, SOFT HYPHEN */
	0x282d, /*  457, 0xae, U+00ae, KEY_registered, REGISTERED SIGN */
	0x2845, /*  458, 0xaf, U+00af, KEY_macron, MACRON */
	0x2859, /*  459, 0xb0, U+00b0, KEY_degree, DEGREE SIGN */
	0x286d, /*  460, 0xb1, U+00b1, KEY_plusminus, PLUS-MINUS SIGN */
	0x2884, /*  461, 0xb2, U+00b2, KEY_twosuperior, SUPERSCRIPT TWO */
	0x289d, /*  462, 0xb3, U+00b3, KEY_threesuperior, SUPERSCRIPT THREE */
	0x28b8, /*  463, 0xb4, U+00b4, KEY_acute, ACUTE ACCENT */
	0x28cb, /*  464, 0xb5, U+00b5, KEY_mu, MICRO SIGN */
	0x28db, /*  465, 0xb6, U+00b6, KEY_paragraph, PILCROW SIGN */
	0x28f2, /*  466, 0xb7, U+00b7, KEY_periodcentered, MIDDLE DOT */
	0x290e, /*  467, 0xb8, U+00b8, KEY_cedilla, CEDILLA */
	0x2923, /*  468, 0xb9, U+00b9, KEY_onesuperior, SUPERSCRIPT ONE */
	0x293c, /*  469, 0xba, U+00ba, KEY_masculine, MASCULINE ORDINAL INDICATOR */
	0x2953, /*  470, 0xbb, U+00bb, KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x296f, /*  471, 0xbc, U+00bc, KEY_onequarter, VULGAR FRACTION ONE QUARTER */
	0x2987, /*  472, 0xbd, U+00bd, KEY_onehalf, VULGAR FRACTION ONE HALF */
	0x299c, /*  473, 0xbe, U+00be, KEY_threequarters, VULGAR FRACTION THREE QUARTERS */
	0x29b7, /*  474, 0xbf, U+00bf, KEY_questiondown, INVERTED QUESTION MARK */
	0x29d1, /*  475, 0xc0, U+00c0, KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */
	0x29e5, /*  476, 0xc1, U+00c1, KEY_Aacute, LATIN CAPITAL LETTER A WITH ACUTE */
	0x29f9, /*  477, 0xc2, U+00c2, KEY_Acircumflex, LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
	0x2a12, /*  478, 0xc3, U+00c3, KEY_Atilde, LATIN CAPITAL LETTER A WITH TILDE */
	0x2a26, /*  479, 0xc4, U+00c4, KEY_Adiaeresis, LATIN CAPITAL LETTER A WITH DIAERESIS */
	0x2a3e, /*  480, 0xc5, U+00c5, KEY_Aring, LATIN CAPITAL LETTER A WITH RING ABOVE */
	0x2a51, /*  481, 0xc6, U+00c6, KEY_AE, LATIN CAPITAL LETTER AE */
	0x2a61, /*  482, 0xc7, U+00c7, KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */
	0x2a77, /*  483, 0xc8, U+00c8, KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */
	0x2a8b, /*  484, 0xc9, U+00c9, KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */
	0x2a9f, /*  485, 0xca, U+00ca, KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
	0x2ab8, /*  486, 0xcb, U+00cb, KEY_Ediaeresis, LATIN CAPITAL LETTER E WITH DIAERESIS */
	0x2ad0, /*  487, 0xcc, U+00cc, KEY_Igrave, LATIN CAPITAL LETTER I WITH GRAVE */
	0x2ae4, /*  488, 0xcd, U+00cd, KEY_Iacute, LATIN CAPITAL LETTER I WITH ACUTE */
	0x2af8, /*  489, 0xce, U+00ce, KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
	0x2b11, /*  490, 0xcf, U+00cf, KEY_Idiaeresis, LATIN CAPITAL LETTER I WITH DIAERESIS */
	0x2b29, /*  491, 0xd0, U+00d0, KEY_ETH, LATIN CAPITAL LETTER ETH */
	0x2b4b, /*  493, 0xd1, U+00d1, KEY_Ntilde, LATIN CAPITAL LETTER N WITH TILDE */
	0x2b5f, /*  494, 0xd2, U+00d2, KEY_Ograve, LATIN CAPITAL LETTER O WITH GRAVE */
	0x2b73, /*  495, 0xd3, U+00d3, KEY_Oacute, LATIN CAPITAL LETTER O WITH ACUTE */
	0x2b87, /*  496, 0xd4, U+00d4, KEY_Ocircumflex, LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
	0x2ba0, /*  497, 0xd5, U+00d5, KEY_Otilde, LATIN CAPITAL LETTER O WITH TILDE */
	0x2bb4, /*  498, 0xd6, U+00d6, KEY_Odiaeresis, LATIN CAPITAL LETTER O WITH DIAERESIS */
	0x2bcc, /*  499, 0xd7, U+00d7, KEY_multiply, MULTIPLICATION SIGN */
	0x2be2, /*  500, 0xd8, U+00d8, KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */
	0x2c0c, /*  502, 0xd9, U+00d9, KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */
	0x2c20, /*  503, 0xda, U+00da, KEY_Uacute, LATIN CAPITAL LETTER U WITH ACUTE */
	0x2c34, /*  504, 0xdb, U+00db, KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
	0x2c4d, /*  505, 0xdc, U+00dc, KEY_Udiaeresis, LATIN CAPITAL LETTER U WITH DIAERESIS */
	0x2c65, /*  506, 0xdd, U+00dd, KEY_Yacute, LATIN CAPITAL LETTER Y WITH ACUTE */
	0x2c79, /*  507, 0xde, U+00de, KEY_THORN, LATIN CAPITAL LETTER THORN */
	0x2c9f, /*  509, 0xdf, U+00df, KEY_ssharp, LATIN SMALL LETTER SHARP S */
	0x2cb3, /*  510, 0xe0, U+00e0, KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */
	0x2cc7, /*  511, 0xe1, U+00e1, KEY_aacute, LATIN SMALL LETTER A WITH ACUTE */
	0x2cdb, /*  512, 0xe2, U+00e2, KEY_acircumflex, LATIN SMALL LETTER A WITH CIRCUMFLEX */
	0x2cf4, /*  513, 0xe3, U+00e3, KEY_atilde, LATIN SMALL LETTER A WITH TILDE */
	0x2d08, /*  514, 0xe4, U+00e4, KEY_adiaeresis, LATIN SMALL LETTER A WITH DIAERESIS */
	0x2d20, /*  515, 0xe5, U+00e5, KEY_aring, LATIN SMALL LETTER A WITH RING ABOVE */
	0x2d33, /*  516, 0xe6, U+00e6, KEY_ae, LATIN SMALL LETTER AE */
	0x2d43, /*  517, 0xe7, U+00e7, KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */
	0x2d59, /*  518, 0xe8, U+00e8, KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */
	0x2d6d, /*  519, 0xe9, U+00e9, KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */
	0x2d81, /*  520, 0xea, U+00ea, KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */
	0x2d9a, /*  521, 0xeb, U+00eb, KEY_ediaeresis, LATIN SMALL LETTER E WITH DIAERESIS */
	0x2db2, /*  522, 0xec, U+00ec, KEY_igrave, LATIN SMALL LETTER I WITH GRAVE */
	0x2dc6, /*  523, 0xed, U+00ed, KEY_iacute, LATIN SMALL LETTER I WITH ACUTE */
	0x2dda, /*  524, 0xee, U+00ee, KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */
	0x2df3, /*  525, 0xef, U+00ef, KEY_idiaeresis, LATIN SMALL LETTER I WITH DIAERESIS */
	0x2e0b, /*  526, 0xf0, U+00f0, KEY_eth, LATIN SMALL LETTER ETH */
	0x2e1c, /*  527, 0xf1, U+00f1, KEY_ntilde, LATIN SMALL LETTER N WITH TILDE */
	0x2e30, /*  528, 0xf2, U+00f2, KEY_ograve, LATIN SMALL LETTER O WITH GRAVE */
	0x2e44, /*  529, 0xf3, U+00f3, KEY_oacute, LATIN SMALL LETTER O WITH ACUTE */
	0x2e58, /*  530, 0xf4, U+00f4, KEY_ocircumflex, LATIN SMALL LETTER O WITH CIRCUMFLEX */
	0x2e71, /*  531, 0xf5, U+00f5, KEY_otilde, LATIN SMALL LETTER O WITH TILDE */
	0x2e85, /*  532, 0xf6, U+00f6, KEY_odiaeresis, LATIN SMALL LETTER O WITH DIAERESIS */
	0x2e9d, /*  533, 0xf7, U+00f7, KEY_division, DIVISION SIGN */
	0x2eb3, /*  534, 0xf8, U+00f8, KEY_oslash, LATIN SMALL LETTER O WITH STROKE */
	0x2edd, /*  536, 0xf9, U+00f9, KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */
	0x2ef1, /*  537, 0xfa, U+00fa, KEY_uacute, LATIN SMALL LETTER U WITH ACUTE */
	0x2f05, /*  538, 0xfb, U+00fb, KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */
	0x2f1e, /*  539, 0xfc, U+00fc, KEY_udiaeresis, LATIN SMALL LETTER U WITH DIAERESIS */
	0x2f36, /*  540, 0xfd, U+00fd, KEY_yacute, LATIN SMALL LETTER Y WITH ACUTE */
	0x2f4a, /*  541, 0xfe, U+00fe, KEY_thorn, LATIN SMALL LETTER THORN */
	0x2f5d, /*  542, 0xff, U+00ff, KEY_ydiaeresis, LATIN SMALL LETTER Y WITH DIAERESIS */
	0x0000,
	0xc928, /* 2041, 0x1000d9c, U+0d9c, KEY_Sinh_ga, SINHALA GAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xc93d, /* 2042, 0x1000d9d, U+0d9d, KEY_Sinh_gha, SINHALA MAHA. GAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x8cc5, /* 1482, 0x1000531, U+0531, KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */
	0x8cf9, /* 1484, 0x1000532, U+0532, KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */
	0x8d2d, /* 1486, 0x1000533, U+0533, KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */
	0x8d61, /* 1488, 0x1000534, U+0534, KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */
	0x8d93, /* 1490, 0x1000535, U+0535, KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */
	0x8dc9, /* 1492, 0x1000536, U+0536, KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */
	0x8dfb, /* 1494, 0x1000537, U+0537, KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */
	0x8e2b, /* 1496, 0x1000538, U+0538, KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */
	0x8e5d, /* 1498, 0x1000539, U+0539, KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */
	0x8e8f, /* 1500, 0x100053a, U+053a, KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */
	0x8ec3, /* 1502, 0x100053b, U+053b, KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */
	0x8ef7, /* 1504, 0x100053c, U+053c, KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */
	0x8f2d, /* 1506, 0x100053d, U+053d, KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */
	0x8f61, /* 1508, 0x100053e, U+053e, KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */
	0x8f95, /* 1510, 0x100053f, U+053f, KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */
	0x8fc9, /* 1512, 0x1000540, U+0540, KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */
	0x8ffb, /* 1514, 0x1000541, U+0541, KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */
	0x902f, /* 1516, 0x1000542, U+0542, KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */
	0x9065, /* 1518, 0x1000543, U+0543, KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */
	0x909b, /* 1520, 0x1000544, U+0544, KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */
	0x90cf, /* 1522, 0x1000545, U+0545, KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */
	0x9101, /* 1524, 0x1000546, U+0546, KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */
	0x9133, /* 1526, 0x1000547, U+0547, KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */
	0x9167, /* 1528, 0x1000548, U+0548, KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */
	0x9199, /* 1530, 0x1000549, U+0549, KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */
	0x91cd, /* 1532, 0x100054a, U+054a, KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */
	0x91ff, /* 1534, 0x100054b, U+054b, KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */
	0x9231, /* 1536, 0x100054c, U+054c, KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */
	0x9263, /* 1538, 0x100054d, U+054d, KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */
	0x9295, /* 1540, 0x100054e, U+054e, KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */
	0x92c9, /* 1542, 0x100054f, U+054f, KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */
	0x92ff, /* 1544, 0x1000550, U+0550, KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */
	0x9331, /* 1546, 0x1000551, U+0551, KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */
	0x9365, /* 1548, 0x1000552, U+0552, KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */
	0x939b, /* 1550, 0x1000553, U+0553, KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */
	0x93d1, /* 1552, 0x1000554, U+0554, KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */
	0x9403, /* 1554, 0x1000555, U+0555, KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */
	0x9433, /* 1556, 0x1000556, U+0556, KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */
	0x0000,
	0x0000,
	0x94d3, /* 1562, 0x10010d3, U+10d3, KEY_Georgian_don, GEORGIAN LETTER DON */
	0x9465, /* 1558, 0x100055a, U+055a, KEY_Armenian_apostrophe, ARMENIAN APOSTROPHE */
	0x8c4f, /* 1478, 0x100055b, U+055b, KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */
	0x8c15, /* 1476, 0x100055c, U+055c, KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */
	0x8b99, /* 1472, 0x100055d, U+055d, KEY_Armenian_separation_mark, ARMENIAN COMMA */
	0x8c89, /* 1480, 0x100055e, U+055e, KEY_Armenian_question, ARMENIAN QUESTION MARK */
	0x9506, /* 1564, 0x10010d5, U+10d5, KEY_Georgian_vin, GEORGIAN LETTER VIN */
	0x0000,
	0x8cdf, /* 1483, 0x1000561, U+0561, KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */
	0x8d13, /* 1485, 0x1000562, U+0562, KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */
	0x8d47, /* 1487, 0x1000563, U+0563, KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */
	0x8d7a, /* 1489, 0x1000564, U+0564, KEY_Armenian_da, ARMENIAN SMALL LETTER DA */
	0x8dae, /* 1491, 0x1000565, U+0565, KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */
	0x8de2, /* 1493, 0x1000566, U+0566, KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */
	0x8e13, /* 1495, 0x1000567, U+0567, KEY_Armenian_e, ARMENIAN SMALL LETTER EH */
	0x4ab2, /*  848, 0x1000492, U+0492, KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */
	0x73c4, /* 1248, 0xce6, U+05d6, KEY_hebrew_zain, HEBREW LETTER ZAYIN */
	0x8ea9, /* 1501, 0x100056a, U+056a, KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */
	0x4ad0, /*  849, 0x1000493, U+0493, KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */
	0x8f12, /* 1505, 0x100056c, U+056c, KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */
	0x7428, /* 1252, 0xce8, U+05d8, KEY_hebrew_tet, HEBREW LETTER TET */
	0x8f7b, /* 1509, 0x100056e, U+056e, KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */
	0x7459, /* 1254, 0xce9, U+05d9, KEY_hebrew_yod, HEBREW LETTER YOD */
	0x8fe2, /* 1513, 0x1000570, U+0570, KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */
	0x7471, /* 1255, 0xcea, U+05da, KEY_hebrew_finalkaph, HEBREW LETTER FINAL KAF */
	0x904a, /* 1517, 0x1000572, U+0572, KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */
	0x748f, /* 1256, 0xceb, U+05db, KEY_hebrew_kaph, HEBREW LETTER KAF */
	0x4aee, /*  850, 0x1000496, U+0496, KEY_Cyrillic_ZHE_descender, CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
	0x74a8, /* 1257, 0xcec, U+05dc, KEY_hebrew_lamed, HEBREW LETTER LAMED */
	0x3969, /*  662, 0x1001e02, U+1e02, KEY_Babovedot, LATIN CAPITAL LETTER B WITH DOT ABOVE */
	0x3980, /*  663, 0x1001e03, U+1e03, KEY_babovedot, LATIN SMALL LETTER B WITH DOT ABOVE */
	0x9180, /* 1529, 0x1000578, U+0578, KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */
	0x74df, /* 1259, 0xcee, U+05de, KEY_hebrew_mem, HEBREW LETTER MEM */
	0x91e6, /* 1533, 0x100057a, U+057a, KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */
	0x74f7, /* 1260, 0xcef, U+05df, KEY_hebrew_finalnun, HEBREW LETTER FINAL NUN */
	0x924a, /* 1537, 0x100057c, U+057c, KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */
	0x7514, /* 1261, 0xcf0, U+05e0, KEY_hebrew_nun, HEBREW LETTER NUN */
	0x3997, /*  664, 0x1001e0a, U+1e0a, KEY_Dabovedot, LATIN CAPITAL LETTER D WITH DOT ABOVE */
	0x39ae, /*  665, 0x1001e0b, U+1e0b, KEY_dabovedot, LATIN SMALL LETTER D WITH DOT ABOVE */
	0x4b36, /*  852, 0x100049a, U+049a, KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
	0x7562, /* 1264, 0xcf2, U+05e2, KEY_hebrew_ayin, HEBREW LETTER AYIN */
	0x9380, /* 1549, 0x1000582, U+0582, KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */
	0x4b59, /*  853, 0x100049b, U+049b, KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */
	0x76e2, /* 1279, 0xda2, U+0e02, KEY_Thai_khokhai, THAI CHARACTER KHO KHAI */
	0x7597, /* 1266, 0xcf4, U+05e4, KEY_hebrew_pe, HEBREW LETTER PE */
	0x4b7c, /*  854, 0x100049c, U+049c, KEY_Cyrillic_KA_vertstroke, CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
	0x75ae, /* 1267, 0xcf5, U+05e5, KEY_hebrew_finalzade, HEBREW LETTER FINAL TSADI */
	0x774c, /* 1283, 0xda6, U+0e06, KEY_Thai_khorakhang, THAI CHARACTER KHO RAKHANG */
	0x4ba0, /*  855, 0x100049d, U+049d, KEY_Cyrillic_ka_vertstroke, CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
	0x7782, /* 1285, 0xda8, U+0e08, KEY_Thai_chochan, THAI CHARACTER CHO CHAN */
	0x4dc0, /*  871, 0x10004d9, U+04d9, KEY_Cyrillic_schwa, CYRILLIC SMALL LETTER SCHWA */
	0x77b7, /* 1287, 0xdaa, U+0e0a, KEY_Thai_chochang, THAI CHARACTER CHO CHANG */
	0x764d, /* 1273, 0xcf8, U+05e8, KEY_hebrew_resh, HEBREW LETTER RESH */
	0x77e9, /* 1289, 0xdac, U+0e0c, KEY_Thai_chochoe, THAI CHARACTER CHO CHOE */
	0x7666, /* 1274, 0xcf9, U+05e9, KEY_hebrew_shin, HEBREW LETTER SHIN */
	0x781c, /* 1291, 0xdae, U+0e0e, KEY_Thai_dochada, THAI CHARACTER DO CHADA */
	0x767f, /* 1275, 0xcfa, U+05ea, KEY_hebrew_taw, HEBREW LETTER TAV */
	0x39c5, /*  666, 0x1001e1e, U+1e1e, KEY_Fabovedot, LATIN CAPITAL LETTER F WITH DOT ABOVE */
	0x39dc, /*  667, 0x1001e1f, U+1e1f, KEY_fabovedot, LATIN SMALL LETTER F WITH DOT ABOVE */
	0x788a, /* 1295, 0xdb2, U+0e12, KEY_Thai_thophuthao, THAI CHARACTER THO PHUTHAO */
	0x78a7, /* 1296, 0xdb3, U+0e13, KEY_Thai_nonen, THAI CHARACTER NO NEN */
	0x78bf, /* 1297, 0xdb4, U+0e14, KEY_Thai_dodek, THAI CHARACTER DO DEK */
	0x78d7, /* 1298, 0xdb5, U+0e15, KEY_Thai_totao, THAI CHARACTER TO TAO */
	0x4bc4, /*  856, 0x10004a2, U+04a2, KEY_Cyrillic_EN_descender, CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
	0x790a, /* 1300, 0xdb7, U+0e17, KEY_Thai_thothahan, THAI CHARACTER THO THAHAN */
	0x7926, /* 1301, 0xdb8, U+0e18, KEY_Thai_thothong, THAI CHARACTER THO THONG */
	0x4be7, /*  857, 0x10004a3, U+04a3, KEY_Cyrillic_en_descender, CYRILLIC SMALL LETTER EN WITH DESCENDER */
	0x7958, /* 1303, 0xdba, U+0e1a, KEY_Thai_bobaimai, THAI CHARACTER BO BAIMAI */
	0x4ddc, /*  872, 0x10004e2, U+04e2, KEY_Cyrillic_I_macron, CYRILLIC CAPITAL LETTER I WITH MACRON */
	0x798b, /* 1305, 0xdbc, U+0e1c, KEY_Thai_phophung, THAI CHARACTER PHO PHUNG */
	0x4dfb, /*  873, 0x10004e3, U+04e3, KEY_Cyrillic_i_macron, CYRILLIC SMALL LETTER I WITH MACRON */
	0x79bd, /* 1307, 0xdbe, U+0e1e, KEY_Thai_phophan, THAI CHARACTER PHO PHAN */
	0x564c, /*  954, 0x6df, U+044a, KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */
	0x79ef, /* 1309, 0xdc0, U+0e20, KEY_Thai_phosamphao, THAI CHARACTER PHO SAMPHAO */
	0x7a0c, /* 1310, 0xdc1, U+0e21, KEY_Thai_moma, THAI CHARACTER MO MA */
	0x7a23, /* 1311, 0xdc2, U+0e22, KEY_Thai_yoyak, THAI CHARACTER YO YAK */
	0x5684, /*  956, 0x6e1, U+0410, KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */
	0x7a53, /* 1313, 0xdc4, U+0e24, KEY_Thai_ru, THAI CHARACTER RU */
	0x7a68, /* 1314, 0xdc5, U+0e25, KEY_Thai_loling, THAI CHARACTER LO LING */
	0x7a81, /* 1315, 0xdc6, U+0e26, KEY_Thai_lu, THAI CHARACTER LU */
	0x4e1a, /*  874, 0x10004e8, U+04e8, KEY_Cyrillic_O_bar, CYRILLIC CAPITAL LETTER BARRED O */
	0x7aaf, /* 1317, 0xdc8, U+0e28, KEY_Thai_sosala, THAI CHARACTER SO SALA */
	0x4e36, /*  875, 0x10004e9, U+04e9, KEY_Cyrillic_o_bar, CYRILLIC SMALL LETTER BARRED O */
	0x7ae1, /* 1319, 0xdca, U+0e2a, KEY_Thai_sosua, THAI CHARACTER SO SUA */
	0x56e8, /*  960, 0x6e5, U+0415, KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */
	0x7b11, /* 1321, 0xdcc, U+0e2c, KEY_Thai_lochula, THAI CHARACTER LO CHULA */
	0x7b2b, /* 1322, 0xdcd, U+0e2d, KEY_Thai_oang, THAI CHARACTER O ANG */
	0x7b42, /* 1323, 0xdce, U+0e2e, KEY_Thai_honokhuk, THAI CHARACTER HO NOKHUK */
	0x7b5d, /* 1324, 0xdcf, U+0e2f, KEY_Thai_paiyannoi, THAI CHARACTER PAIYANNOI */
	0x7b79, /* 1325, 0xdd0, U+0e30, KEY_Thai_saraa, THAI CHARACTER SARA A */
	0x7b91, /* 1326, 0xdd1, U+0e31, KEY_Thai_maihanakat, THAI CHARACTER MAI HAN-AKAT */
	0x39f3, /*  668, 0x1001e40, U+1e40, KEY_Mabovedot, LATIN CAPITAL LETTER M WITH DOT ABOVE */
	0x3a0a, /*  669, 0x1001e41, U+1e41, KEY_mabovedot, LATIN SMALL LETTER M WITH DOT ABOVE */
	0x7be0, /* 1329, 0xdd4, U+0e34, KEY_Thai_sarai, THAI CHARACTER SARA I */
	0x4e71, /*  877, 0x10004ef, U+04ef, KEY_Cyrillic_u_macron, CYRILLIC SMALL LETTER U WITH MACRON */
	0x7c11, /* 1331, 0xdd6, U+0e36, KEY_Thai_saraue, THAI CHARACTER SARA UE */
	0x7c2a, /* 1332, 0xdd7, U+0e37, KEY_Thai_sarauee, THAI CHARACTER SARA UEE */
	0x7c44, /* 1333, 0xdd8, U+0e38, KEY_Thai_sarau, THAI CHARACTER SARA U */
	0x7c5c, /* 1334, 0xdd9, U+0e39, KEY_Thai_sarauu, THAI CHARACTER SARA UU */
	0x7c75, /* 1335, 0xdda, U+0e3a, KEY_Thai_phinthu, THAI CHARACTER PHINTHU */
	0x0000,
	0x0000,
	0x9849, /* 1596, 0x10010f5, U+10f5, KEY_Georgian_hoe, GEORGIAN LETTER HOE */
	0x7c8f, /* 1336, 0xdde, KEY_Thai_maihanakat_maitho */
	0x7cb3, /* 1337, 0xddf, U+0e3f, KEY_Thai_baht, THAI CURRENCY SYMBOL BAHT */
	0x7cca, /* 1338, 0xde0, U+0e40, KEY_Thai_sarae, THAI CHARACTER SARA E */
	0x7ce2, /* 1339, 0xde1, U+0e41, KEY_Thai_saraae, THAI CHARACTER SARA AE */
	0x7cfb, /* 1340, 0xde2, U+0e42, KEY_Thai_sarao, THAI CHARACTER SARA O */
	0x7d13, /* 1341, 0xde3, U+0e43, KEY_Thai_saraaimaimuan, THAI CHARACTER SARA AI MAIMUAN */
	0x7d33, /* 1342, 0xde4, U+0e44, KEY_Thai_saraaimaimalai, THAI CHARACTER SARA AI MAIMALAI */
	0x7d54, /* 1343, 0xde5, U+0e45, KEY_Thai_lakkhangyao, THAI CHARACTER LAKKHANGYAO */
	0x7d72, /* 1344, 0xde6, U+0e46, KEY_Thai_maiyamok, THAI CHARACTER MAIYAMOK */
	0x2f75, /*  543, 0x1a1, U+0104, KEY_Aogonek, LATIN CAPITAL LETTER A WITH OGONEK */
	0x2f8a, /*  544, 0x1a2, U+02d8, KEY_breve, BREVE */
	0x2f9d, /*  545, 0x1a3, U+0141, KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */
	0x7dda, /* 1348, 0xdea, U+0e4a, KEY_Thai_maitri, THAI CHARACTER MAI TRI */
	0x2fb2, /*  546, 0x1a5, U+013d, KEY_Lcaron, LATIN CAPITAL LETTER L WITH CARON */
	0x2fc6, /*  547, 0x1a6, U+015a, KEY_Sacute, LATIN CAPITAL LETTER S WITH ACUTE */
	0x7e2f, /* 1351, 0xded, U+0e4d, KEY_Thai_nikhahit, THAI CHARACTER NIKHAHIT */
	0x0000,
	0x2fda, /*  548, 0x1a9, U+0160, KEY_Scaron, LATIN CAPITAL LETTER S WITH CARON */
	0x2fee, /*  549, 0x1aa, U+015e, KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */
	0x3004, /*  550, 0x1ab, U+0164, KEY_Tcaron, LATIN CAPITAL LETTER T WITH CARON */
	0x3018, /*  551, 0x1ac, U+0179, KEY_Zacute, LATIN CAPITAL LETTER Z WITH ACUTE */
	0x3a66, /*  673, 0x1001e61, U+1e61, KEY_sabovedot, LATIN SMALL LETTER S WITH DOT ABOVE */
	0x302c, /*  552, 0x1ae, U+017d, KEY_Zcaron, LATIN CAPITAL LETTER Z WITH CARON */
	0x3040, /*  553, 0x1af, U+017b, KEY_Zabovedot, LATIN CAPITAL LETTER Z WITH DOT ABOVE */
	0x7ee0, /* 1358, 0xdf6, U+0e56, KEY_Thai_lekhok, THAI DIGIT SIX */
	0x3057, /*  554, 0x1b1, U+0105, KEY_aogonek, LATIN SMALL LETTER A WITH OGONEK */
	0x306c, /*  555, 0x1b2, U+02db, KEY_ogonek, OGONEK */
	0x3080, /*  556, 0x1b3, U+0142, KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */
	0x0000,
	0x3095, /*  557, 0x1b5, U+013e, KEY_lcaron, LATIN SMALL LETTER L WITH CARON */
	0x30a9, /*  558, 0x1b6, U+015b, KEY_sacute, LATIN SMALL LETTER S WITH ACUTE */
	0x30bd, /*  559, 0x1b7, U+02c7, KEY_caron, CARON */
	0x0000,
	0x30d0, /*  560, 0x1b9, U+0161, KEY_scaron, LATIN SMALL LETTER S WITH CARON */
	0x30e4, /*  561, 0x1ba, U+015f, KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */
	0x30fa, /*  562, 0x1bb, U+0165, KEY_tcaron, LATIN SMALL LETTER T WITH CARON */
	0x310e, /*  563, 0x1bc, U+017a, KEY_zacute, LATIN SMALL LETTER Z WITH ACUTE */
	0x3122, /*  564, 0x1bd, U+02dd, KEY_doubleacute, DOUBLE ACUTE ACCENT */
	0x313b, /*  565, 0x1be, U+017e, KEY_zcaron, LATIN SMALL LETTER Z WITH CARON */
	0x314f, /*  566, 0x1bf, U+017c, KEY_zabovedot, LATIN SMALL LETTER Z WITH DOT ABOVE */
	0x3166, /*  567, 0x1c0, U+0154, KEY_Racute, LATIN CAPITAL LETTER R WITH ACUTE */
	0xdf48, /* 2268, 0x1008fe05, KEY_XF86Switch_VT_5 */
	0xdf65, /* 2269, 0x1008fe06, KEY_XF86Switch_VT_6 */
	0x317a, /*  568, 0x1c3, U+0102, KEY_Abreve, LATIN CAPITAL LETTER A WITH BREVE */
	0xdf9f, /* 2271, 0x1008fe08, KEY_XF86Switch_VT_8 */
	0x318e, /*  569, 0x1c5, U+0139, KEY_Lacute, LATIN CAPITAL LETTER L WITH ACUTE */
	0x31a2, /*  570, 0x1c6, U+0106, KEY_Cacute, LATIN CAPITAL LETTER C WITH ACUTE */
	0x9608, /* 1574, 0x10010df, U+10df, KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */
	0x31b6, /*  571, 0x1c8, U+010c, KEY_Ccaron, LATIN CAPITAL LETTER C WITH CARON */
	0xe5a3, /* 2330, 0x1000ff49, KEY_hpModelock2 */
	0x31ca, /*  572, 0x1ca, U+0118, KEY_Eogonek, LATIN CAPITAL LETTER E WITH OGONEK */
	0x9623, /* 1575, 0x10010e0, U+10e0, KEY_Georgian_rae, GEORGIAN LETTER RAE */
	0x31df, /*  573, 0x1cc, U+011a, KEY_Ecaron, LATIN CAPITAL LETTER E WITH CARON */
	0x3abf, /*  677, 0x1001e81, U+1e81, KEY_wgrave, LATIN SMALL LETTER W WITH GRAVE */
	0x3ad3, /*  678, 0x1001e82, U+1e82, KEY_Wacute, LATIN CAPITAL LETTER W WITH ACUTE */
	0x31f3, /*  574, 0x1cf, U+010e, KEY_Dcaron, LATIN CAPITAL LETTER D WITH CARON */
	0x3207, /*  575, 0x1d0, U+0110, KEY_Dstroke, LATIN CAPITAL LETTER D WITH STROKE */
	0x321c, /*  576, 0x1d1, U+0143, KEY_Nacute, LATIN CAPITAL LETTER N WITH ACUTE */
	0x3230, /*  577, 0x1d2, U+0147, KEY_Ncaron, LATIN CAPITAL LETTER N WITH CARON */
	0x9657, /* 1577, 0x10010e2, U+10e2, KEY_Georgian_tar, GEORGIAN LETTER TAR */
	0x0000,
	0x3244, /*  578, 0x1d5, U+0150, KEY_Odoubleacute, LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
	0x987c, /* 1598, 0x1001e8a, U+1e8a, KEY_Xabovedot, LATIN CAPITAL LETTER X WITH DOT ABOVE */
	0x9671, /* 1578, 0x10010e3, U+10e3, KEY_Georgian_un, GEORGIAN LETTER UN */
	0x325e, /*  579, 0x1d8, U+0158, KEY_Rcaron, LATIN CAPITAL LETTER R WITH CARON */
	0x3272, /*  580, 0x1d9, U+016e, KEY_Uring, LATIN CAPITAL LETTER U WITH RING ABOVE */
	0x0000,
	0x3285, /*  581, 0x1db, U+0170, KEY_Udoubleacute, LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
	0xe033, /* 2276, 0x1008fe20, KEY_XF86Ungrab, force ungrab */
	0xe04b, /* 2277, 0x1008fe21, KEY_XF86ClearGrab, kill application with grab */
	0x329f, /*  582, 0x1de, U+0162, KEY_Tcedilla, LATIN CAPITAL LETTER T WITH CEDILLA */
	0x96a5, /* 1580, 0x10010e5, U+10e5, KEY_Georgian_khar, GEORGIAN LETTER KHAR */
	0x32b5, /*  583, 0x1e0, U+0155, KEY_racute, LATIN SMALL LETTER R WITH ACUTE */
	0xe0bd, /* 2281, 0x1008fe25, KEY_XF86LogGrabInfo, print all active grabs to log */
	0x0000,
	0x32c9, /*  584, 0x1e3, U+0103, KEY_abreve, LATIN SMALL LETTER A WITH BREVE */
	0x0000,
	0x32dd, /*  585, 0x1e5, U+013a, KEY_lacute, LATIN SMALL LETTER L WITH ACUTE */
	0x32f1, /*  586, 0x1e6, U+0107, KEY_cacute, LATIN SMALL LETTER C WITH ACUTE */
	0x96db, /* 1582, 0x10010e7, U+10e7, KEY_Georgian_qar, GEORGIAN LETTER QAR */
	0x3305, /*  587, 0x1e8, U+010d, KEY_ccaron, LATIN SMALL LETTER C WITH CARON */
	0xdfbc, /* 2272, 0x1008fe09, KEY_XF86Switch_VT_9 */
	0x3319, /*  588, 0x1ea, U+0119, KEY_eogonek, LATIN SMALL LETTER E WITH OGONEK */
	0x96f5, /* 1583, 0x10010e8, U+10e8, KEY_Georgian_shin, GEORGIAN LETTER SHIN */
	0x332e, /*  589, 0x1ec, U+011b, KEY_ecaron, LATIN SMALL LETTER E WITH CARON */
	0x9a03, /* 1617, 0x1001ea1, U+1ea1, KEY_abelowdot, LATIN SMALL LETTER A WITH DOT BELOW */
	0x9486, /* 1559, 0x10010d0, U+10d0, KEY_Georgian_an, GEORGIAN LETTER AN */
	0x3342, /*  590, 0x1ef, U+010f, KEY_dcaron, LATIN SMALL LETTER D WITH CARON */
	0x3356, /*  591, 0x1f0, U+0111, KEY_dstroke, LATIN SMALL LETTER D WITH STROKE */
	0x336b, /*  592, 0x1f1, U+0144, KEY_nacute, LATIN SMALL LETTER N WITH ACUTE */
	0x337f, /*  593, 0x1f2, U+0148, KEY_ncaron, LATIN SMALL LETTER N WITH CARON */
	0x949f, /* 1560, 0x10010d1, U+10d1, KEY_Georgian_ban, GEORGIAN LETTER BAN */
	0x9ab8, /* 1624, 0x1001ea8, U+1ea8, KEY_Acircumflexhook, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x3393, /*  594, 0x1f5, U+0151, KEY_odoubleacute, LATIN SMALL LETTER O WITH DOUBLE ACUTE */
	0x9af2, /* 1626, 0x1001eaa, U+1eaa, KEY_Acircumflextilde, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x74c2, /* 1258, 0xced, U+05dd, KEY_hebrew_finalmem, HEBREW LETTER FINAL MEM */
	0x33ad, /*  595, 0x1f8, U+0159, KEY_rcaron, LATIN SMALL LETTER R WITH CARON */
	0x33c1, /*  596, 0x1f9, U+016f, KEY_uring, LATIN SMALL LETTER U WITH RING ABOVE */
	0x9b70, /* 1630, 0x1001eae, U+1eae, KEY_Abreveacute, LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
	0x33d4, /*  597, 0x1fb, U+0171, KEY_udoubleacute, LATIN SMALL LETTER U WITH DOUBLE ACUTE */
	0x9ba2, /* 1632, 0x1001eb0, U+1eb0, KEY_Abrevegrave, LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
	0x9bbb, /* 1633, 0x1001eb1, U+1eb1, KEY_abrevegrave, LATIN SMALL LETTER A WITH BREVE AND GRAVE */
	0x33ee, /*  598, 0x1fe, U+0163, KEY_tcedilla, LATIN SMALL LETTER T WITH CEDILLA */
	0x3404, /*  599, 0x1ff, U+02d9, KEY_abovedot, DOT ABOVE */
	0x9c04, /* 1636, 0x1001eb4, U+1eb4, KEY_Abrevetilde, LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
	0x9c1d, /* 1637, 0x1001eb5, U+1eb5, KEY_abrevetilde, LATIN SMALL LETTER A WITH BREVE AND TILDE */
	0x94ed, /* 1563, 0x10010d4, U+10d4, KEY_Georgian_en, GEORGIAN LETTER EN */
	0x752c, /* 1262, 0xcf1, U+05e1, KEY_hebrew_samech, HEBREW LETTER SAMEKH */
	0x9c6e, /* 1640, 0x1001eb8, U+1eb8, KEY_Ebelowdot, LATIN CAPITAL LETTER E WITH DOT BELOW */
	0x9c85, /* 1641, 0x1001eb9, U+1eb9, KEY_ebelowdot, LATIN SMALL LETTER E WITH DOT BELOW */
	0x9c9c, /* 1642, 0x1001eba, U+1eba, KEY_Ehook, LATIN CAPITAL LETTER E WITH HOOK ABOVE */
	0x9caf, /* 1643, 0x1001ebb, U+1ebb, KEY_ehook, LATIN SMALL LETTER E WITH HOOK ABOVE */
	0x9cc2, /* 1644, 0x1001ebc, U+1ebc, KEY_Etilde, LATIN CAPITAL LETTER E WITH TILDE */
	0x757b, /* 1265, 0xcf3, U+05e3, KEY_hebrew_finalpe, HEBREW LETTER FINAL PE */
	0x9cea, /* 1646, 0x1001ebe, U+1ebe, KEY_Ecircumflexacute, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0x9d08, /* 1647, 0x1001ebf, U+1ebf, KEY_ecircumflexacute, LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0x9520, /* 1565, 0x10010d6, U+10d6, KEY_Georgian_zen, GEORGIAN LETTER ZEN */
	0x65c6, /* 1102, 0x8dd, U+222a, KEY_union, UNION */
	0x9d62, /* 1650, 0x1001ec2, U+1ec2, KEY_Ecircumflexhook, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9d7f, /* 1651, 0x1001ec3, U+1ec3, KEY_ecircumflexhook, LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9d9c, /* 1652, 0x1001ec4, U+1ec4, KEY_Ecircumflextilde, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x953a, /* 1566, 0x10010d7, U+10d7, KEY_Georgian_tan, GEORGIAN LETTER TAN */
	0x4da4, /*  870, 0x10004d8, U+04d8, KEY_Cyrillic_SCHWA, CYRILLIC CAPITAL LETTER SCHWA */
	0x9df9, /* 1655, 0x1001ec7, U+1ec7, KEY_ecircumflexbelowdot, LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x9e1a, /* 1656, 0x1001ec8, U+1ec8, KEY_Ihook, LATIN CAPITAL LETTER I WITH HOOK ABOVE */
	0x761c, /* 1271, 0xcf7, U+05e7, KEY_hebrew_qoph, HEBREW LETTER QOF */
	0x9554, /* 1567, 0x10010d8, U+10d8, KEY_Georgian_in, GEORGIAN LETTER IN */
	0x9e57, /* 1659, 0x1001ecb, U+1ecb, KEY_ibelowdot, LATIN SMALL LETTER I WITH DOT BELOW */
	0x9e6e, /* 1660, 0x1001ecc, U+1ecc, KEY_Obelowdot, LATIN CAPITAL LETTER O WITH DOT BELOW */
	0x9e85, /* 1661, 0x1001ecd, U+1ecd, KEY_obelowdot, LATIN SMALL LETTER O WITH DOT BELOW */
	0x9e9c, /* 1662, 0x1001ece, U+1ece, KEY_Ohook, LATIN CAPITAL LETTER O WITH HOOK ABOVE */
	0x956d, /* 1568, 0x10010d9, U+10d9, KEY_Georgian_kan, GEORGIAN LETTER KAN */
	0x9ec2, /* 1664, 0x1001ed0, U+1ed0, KEY_Ocircumflexacute, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x9ee0, /* 1665, 0x1001ed1, U+1ed1, KEY_ocircumflexacute, LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x9efe, /* 1666, 0x1001ed2, U+1ed2, KEY_Ocircumflexgrave, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x9f1c, /* 1667, 0x1001ed3, U+1ed3, KEY_ocircumflexgrave, LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x9587, /* 1569, 0x10010da, U+10da, KEY_Georgian_las, GEORGIAN LETTER LAS */
	0x9f57, /* 1669, 0x1001ed5, U+1ed5, KEY_ocircumflexhook, LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9f74, /* 1670, 0x1001ed6, U+1ed6, KEY_Ocircumflextilde, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x9863, /* 1597, 0x10010f6, U+10f6, KEY_Georgian_fi, GEORGIAN LETTER FI */
	0x9fb0, /* 1672, 0x1001ed8, U+1ed8, KEY_Ocircumflexbelowdot, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x95a1, /* 1570, 0x10010db, U+10db, KEY_Georgian_man, GEORGIAN LETTER MAN */
	0x9ff2, /* 1674, 0x1001eda, U+1eda, KEY_Ohornacute, LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
	0xa00a, /* 1675, 0x1001edb, U+1edb, KEY_ohornacute, LATIN SMALL LETTER O WITH HORN AND ACUTE */
	0xa022, /* 1676, 0x1001edc, U+1edc, KEY_Ohorngrave, LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
	0xa03a, /* 1677, 0x1001edd, U+1edd, KEY_ohorngrave, LATIN SMALL LETTER O WITH HORN AND GRAVE */
	0x95bb, /* 1571, 0x10010dc, U+10dc, KEY_Georgian_nar, GEORGIAN LETTER NAR */
	0x4921, /*  834, 0x1000653, U+0653, KEY_Arabic_madda_above, ARABIC MADDAH ABOVE */
	0x4941, /*  835, 0x1000654, U+0654, KEY_Arabic_hamza_above, ARABIC HAMZA ABOVE */
	0x4961, /*  836, 0x1000655, U+0655, KEY_Arabic_hamza_below, ARABIC HAMZA BELOW */
	0xa0b0, /* 1682, 0x1001ee2, U+1ee2, KEY_Ohornbelowdot, LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
	0x4b12, /*  851, 0x1000497, U+0497, KEY_Cyrillic_zhe_descender, CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
	0xa0e6, /* 1684, 0x1001ee4, U+1ee4, KEY_Ubelowdot, LATIN CAPITAL LETTER U WITH DOT BELOW */
	0xa0fd, /* 1685, 0x1001ee5, U+1ee5, KEY_ubelowdot, LATIN SMALL LETTER U WITH DOT BELOW */
	0xa114, /* 1686, 0x1001ee6, U+1ee6, KEY_Uhook, LATIN CAPITAL LETTER U WITH HOOK ABOVE */
	0xa127, /* 1687, 0x1001ee7, U+1ee7, KEY_uhook, LATIN SMALL LETTER U WITH HOOK ABOVE */
	0x95ee, /* 1573, 0x10010de, U+10de, KEY_Georgian_par, GEORGIAN LETTER PAR */
	0xa152, /* 1689, 0x1001ee9, U+1ee9, KEY_uhornacute, LATIN SMALL LETTER U WITH HORN AND ACUTE */
	0xa16a, /* 1690, 0x1001eea, U+1eea, KEY_Uhorngrave, LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
	0xa182, /* 1691, 0x1001eeb, U+1eeb, KEY_uhorngrave, LATIN SMALL LETTER U WITH HORN AND GRAVE */
	0x4352, /*  776, 0x1000660, U+0660, KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */
	0x4368, /*  777, 0x1000661, U+0661, KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */
	0x437e, /*  778, 0x1000662, U+0662, KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */
	0x4394, /*  779, 0x1000663, U+0663, KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */
	0x43aa, /*  780, 0x1000664, U+0664, KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */
	0x43c0, /*  781, 0x1000665, U+0665, KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */
	0x3b2b, /*  682, 0x1001ef2, U+1ef2, KEY_Ygrave, LATIN CAPITAL LETTER Y WITH GRAVE */
	0x3b3f, /*  683, 0x1001ef3, U+1ef3, KEY_ygrave, LATIN SMALL LETTER Y WITH GRAVE */
	0x4402, /*  784, 0x1000668, U+0668, KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */
	0x4418, /*  785, 0x1000669, U+0669, KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */
	0x425d, /*  767, 0x100066a, U+066a, KEY_Arabic_percent, ARABIC PERCENT SIGN */
	0x963d, /* 1576, 0x10010e1, U+10e1, KEY_Georgian_san, GEORGIAN LETTER SAN */
	0xa282, /* 1702, 0x1001ef8, U+1ef8, KEY_Ytilde, LATIN CAPITAL LETTER Y WITH TILDE */
	0xa296, /* 1703, 0x1001ef9, U+1ef9, KEY_ytilde, LATIN SMALL LETTER Y WITH TILDE */
	0x0000,
	0xe53f, /* 2326, 0x1000ff73, KEY_hpDeleteChar */
	0x4279, /*  768, 0x1000670, U+0670, KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */
	0x0000,
	0xe559, /* 2327, 0x1000ff74, KEY_hpBackTab */
	0xd203, /* 2135, 0x1008ff2d, KEY_XF86ScreenSaver, Invoke screensaver */
	0x0000,
	0xe570, /* 2328, 0x1000ff75, KEY_hpKP_BackTab */
	0x0000,
	0x0000,
	0xeba6, /* 2395, 0x1000ff76, KEY_Ext16bit_L */
	0x429e, /*  769, 0x1000679, U+0679, KEY_Arabic_tteh, ARABIC LETTER TTEH */
	0x968a, /* 1579, 0x10010e4, U+10e4, KEY_Georgian_phar, GEORGIAN LETTER PHAR */
	0xebbe, /* 2396, 0x1000ff77, KEY_Ext16bit_R */
	0x4e52, /*  876, 0x10004ee, U+04ee, KEY_Cyrillic_U_macron, CYRILLIC CAPITAL LETTER U WITH MACRON */
	0x0000,
	0x42b7, /*  770, 0x100067e, U+067e, KEY_Arabic_peh, ARABIC LETTER PEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x810f, /* 1378, 0xea1, KEY_Hangul_Kiyeog */
	0x812a, /* 1379, 0xea2, KEY_Hangul_SsangKiyeog */
	0x814a, /* 1380, 0xea3, KEY_Hangul_KiyeogSios */
	0x42cf, /*  771, 0x1000686, U+0686, KEY_Arabic_tcheh, ARABIC LETTER TCHEH */
	0x8183, /* 1382, 0xea5, KEY_Hangul_NieunJieuj */
	0x42e9, /*  772, 0x1000688, U+0688, KEY_Arabic_ddal, ARABIC LETTER DDAL */
	0x81c1, /* 1384, 0xea7, KEY_Hangul_Dikeud */
	0x81dc, /* 1385, 0xea8, KEY_Hangul_SsangDikeud */
	0x81fc, /* 1386, 0xea9, KEY_Hangul_Rieul */
	0x8216, /* 1387, 0xeaa, KEY_Hangul_RieulKiyeog */
	0x8236, /* 1388, 0xeab, KEY_Hangul_RieulMieum */
	0x8255, /* 1389, 0xeac, KEY_Hangul_RieulPieub */
	0x8274, /* 1390, 0xead, KEY_Hangul_RieulSios */
	0x8292, /* 1391, 0xeae, KEY_Hangul_RieulTieut */
	0x4302, /*  773, 0x1000691, U+0691, KEY_Arabic_rreh, ARABIC LETTER RREH */
	0x82d1, /* 1393, 0xeb0, KEY_Hangul_RieulHieuh */
	0x82f0, /* 1394, 0xeb1, KEY_Hangul_Mieum */
	0x830a, /* 1395, 0xeb2, KEY_Hangul_Pieub */
	0x8324, /* 1396, 0xeb3, KEY_Hangul_SsangPieub */
	0x8343, /* 1397, 0xeb4, KEY_Hangul_PieubSios */
	0x8361, /* 1398, 0xeb5, KEY_Hangul_Sios */
	0x4981, /*  837, 0x1000698, U+0698, KEY_Arabic_jeh, ARABIC LETTER JEH */
	0x8398, /* 1400, 0xeb7, KEY_Hangul_Ieung */
	0x83b2, /* 1401, 0xeb8, KEY_Hangul_Jieuj */
	0x83cc, /* 1402, 0xeb9, KEY_Hangul_SsangJieuj */
	0x83eb, /* 1403, 0xeba, KEY_Hangul_Cieuc */
	0x8405, /* 1404, 0xebb, KEY_Hangul_Khieuq */
	0x8420, /* 1405, 0xebc, KEY_Hangul_Tieut */
	0x843a, /* 1406, 0xebd, KEY_Hangul_Phieuf */
	0x8455, /* 1407, 0xebe, KEY_Hangul_Hieuh */
	0x846f, /* 1408, 0xebf, KEY_Hangul_A */
	0x8485, /* 1409, 0xec0, KEY_Hangul_AE */
	0x849c, /* 1410, 0xec1, KEY_Hangul_YA */
	0x4999, /*  838, 0x10006a4, U+06a4, KEY_Arabic_veh, ARABIC LETTER VEH */
	0x84cb, /* 1412, 0xec3, KEY_Hangul_EO */
	0x84e2, /* 1413, 0xec4, KEY_Hangul_E */
	0x84f8, /* 1414, 0xec5, KEY_Hangul_YEO */
	0x8510, /* 1415, 0xec6, KEY_Hangul_YE */
	0x49b1, /*  839, 0x10006a9, U+06a9, KEY_Arabic_keheh, ARABIC LETTER KEHEH */
	0x853d, /* 1417, 0xec8, KEY_Hangul_WA */
	0x8554, /* 1418, 0xec9, KEY_Hangul_WAE */
	0x856c, /* 1419, 0xeca, KEY_Hangul_OE */
	0x8583, /* 1420, 0xecb, KEY_Hangul_YO */
	0x859a, /* 1421, 0xecc, KEY_Hangul_U */
	0x49cb, /*  840, 0x10006af, U+06af, KEY_Arabic_gaf, ARABIC LETTER GAF */
	0x85c8, /* 1423, 0xece, KEY_Hangul_WE */
	0x85df, /* 1424, 0xecf, KEY_Hangul_WI */
	0x85f6, /* 1425, 0xed0, KEY_Hangul_YU */
	0x860d, /* 1426, 0xed1, KEY_Hangul_EU */
	0x8624, /* 1427, 0xed2, KEY_Hangul_YI */
	0x863b, /* 1428, 0xed3, KEY_Hangul_I */
	0x8651, /* 1429, 0xed4, KEY_Hangul_J_Kiyeog */
	0x866e, /* 1430, 0xed5, KEY_Hangul_J_SsangKiyeog */
	0x8690, /* 1431, 0xed6, KEY_Hangul_J_KiyeogSios */
	0x86b1, /* 1432, 0xed7, KEY_Hangul_J_Nieun */
	0x49e3, /*  841, 0x10006ba, U+06ba, KEY_Arabic_noon_ghunna, ARABIC LETTER NOON GHUNNA */
	0x86ee, /* 1434, 0xed9, KEY_Hangul_J_NieunHieuh */
	0x870f, /* 1435, 0xeda, KEY_Hangul_J_Dikeud */
	0x872c, /* 1436, 0xedb, KEY_Hangul_J_Rieul */
	0x4a03, /*  842, 0x10006be, U+06be, KEY_Arabic_heh_doachashmee, ARABIC LETTER HEH DOACHASHMEE */
	0x876a, /* 1438, 0xedd, KEY_Hangul_J_RieulMieum */
	0x878b, /* 1439, 0xede, KEY_Hangul_J_RieulPieub */
	0x4a7a, /*  846, 0x10006c1, U+06c1, KEY_Arabic_heh_goal, ARABIC LETTER HEH GOAL */
	0x87cc, /* 1441, 0xee0, KEY_Hangul_J_RieulTieut */
	0x87ed, /* 1442, 0xee1, KEY_Hangul_J_RieulPhieuf */
	0x880f, /* 1443, 0xee2, KEY_Hangul_J_RieulHieuh */
	0x8830, /* 1444, 0xee3, KEY_Hangul_J_Mieum */
	0x884c, /* 1445, 0xee4, KEY_Hangul_J_Pieub */
	0x8868, /* 1446, 0xee5, KEY_Hangul_J_PieubSios */
	0x8888, /* 1447, 0xee6, KEY_Hangul_J_Sios */
	0x341a, /*  600, 0x2a1, U+0126, KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */
	0x88c3, /* 1449, 0xee8, KEY_Hangul_J_Ieung */
	0x88df, /* 1450, 0xee9, KEY_Hangul_J_Jieuj */
	0x4a27, /*  843, 0x10006cc, U+06cc, KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */
	0x8917, /* 1452, 0xeeb, KEY_Hangul_J_Khieuq */
	0x342f, /*  601, 0x2a6, U+0124, KEY_Hcircumflex, LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
	0x8950, /* 1454, 0xeed, KEY_Hangul_J_Phieuf */
	0x896d, /* 1455, 0xeee, KEY_Hangul_J_Hieuh */
	0x3448, /*  602, 0x2a9, U+0130, KEY_Iabovedot, LATIN CAPITAL LETTER I WITH DOT ABOVE */
	0x4a5c, /*  845, 0x10006d2, U+06d2, KEY_Arabic_yeh_baree, ARABIC LETTER YEH BARREE */
	0x345f, /*  603, 0x2ab, U+011e, KEY_Gbreve, LATIN CAPITAL LETTER G WITH BREVE */
	0x3473, /*  604, 0x2ac, U+0134, KEY_Jcircumflex, LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
	0x8a16, /* 1460, 0xef3, KEY_Hangul_KkogjiDalrinIeung */
	0x8a3c, /* 1461, 0xef4, KEY_Hangul_SunkyeongeumPhieuf */
	0x8a63, /* 1462, 0xef5, KEY_Hangul_YeorinHieuh */
	0x8a83, /* 1463, 0xef6, KEY_Hangul_AraeA */
	0x348c, /*  605, 0x2b1, U+0127, KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */
	0x8ab8, /* 1465, 0xef8, KEY_Hangul_J_PanSios */
	0x8ad6, /* 1466, 0xef9, KEY_Hangul_J_KkogjiDalrinIeung */
	0x8afe, /* 1467, 0xefa, KEY_Hangul_J_YeorinHieuh */
	0x0000,
	0x34a1, /*  606, 0x2b6, U+0125, KEY_hcircumflex, LATIN SMALL LETTER H WITH CIRCUMFLEX */
	0x76ca, /* 1278, 0xda1, U+0e01, KEY_Thai_kokai, THAI CHARACTER KO KAI */
	0x0000,
	0x34ba, /*  607, 0x2b9, U+0131, KEY_idotless, LATIN SMALL LETTER DOTLESS I */
	0x0000,
	0x34d0, /*  608, 0x2bb, U+011f, KEY_gbreve, LATIN SMALL LETTER G WITH BREVE */
	0x34e4, /*  609, 0x2bc, U+0135, KEY_jcircumflex, LATIN SMALL LETTER J WITH CIRCUMFLEX */
	0x7717, /* 1281, 0xda4, U+0e04, KEY_Thai_khokhwai, THAI CHARACTER KHO KHWAI */
	0xce3d, /* 2100, 0x1008ff02, KEY_XF86MonBrightnessUp, Monitor/panel brightness */
	0x7732, /* 1282, 0xda5, U+0e05, KEY_Thai_khokhon, THAI CHARACTER KHO KHON */
	0xce81, /* 2102, 0x1008ff04, KEY_XF86KbdLightOnOff, Keyboards may be lit */
	0xcea0, /* 2103, 0x1008ff05, KEY_XF86KbdBrightnessUp, Keyboards may be lit */
	0x94b9, /* 1561, 0x10010d2, U+10d2, KEY_Georgian_gan, GEORGIAN LETTER GAN */
	0x75ea, /* 1269, 0xcf6, U+05e6, KEY_hebrew_zade, HEBREW LETTER TSADI */
	0x0000,
	0x34fd, /*  610, 0x2c5, U+010a, KEY_Cabovedot, LATIN CAPITAL LETTER C WITH DOT ABOVE */
	0x3514, /*  611, 0x2c6, U+0108, KEY_Ccircumflex, LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
	0x779c, /* 1286, 0xda9, U+0e09, KEY_Thai_choching, THAI CHARACTER CHO CHING */
	0x418b, /*  757, 0x10006f0, U+06f0, KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */
	0x41a0, /*  758, 0x10006f1, U+06f1, KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */
	0x41b5, /*  759, 0x10006f2, U+06f2, KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */
	0x41ca, /*  760, 0x10006f3, U+06f3, KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */
	0x41df, /*  761, 0x10006f4, U+06f4, KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */
	0x41f4, /*  762, 0x10006f5, U+06f5, KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */
	0x4209, /*  763, 0x10006f6, U+06f6, KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */
	0x421e, /*  764, 0x10006f7, U+06f7, KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */
	0x4233, /*  765, 0x10006f8, U+06f8, KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */
	0x4248, /*  766, 0x10006f9, U+06f9, KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */
	0xcfb6, /* 2112, 0x1008ff16, KEY_XF86AudioPrev, Previous track */
	0x7836, /* 1292, 0xdaf, U+0e0f, KEY_Thai_topatak, THAI CHARACTER TO PATAK */
	0xcfec, /* 2114, 0x1008ff18, KEY_XF86HomePage, Display user's home page */
	0x352d, /*  612, 0x2d5, U+0120, KEY_Gabovedot, LATIN CAPITAL LETTER G WITH DOT ABOVE */
	0xd01c, /* 2116, 0x1008ff1a, KEY_XF86Start, Start application */
	0x786a, /* 1294, 0xdb1, U+0e11, KEY_Thai_thonangmontho, THAI CHARACTER THO NANGMONTHO */
	0x3544, /*  613, 0x2d8, U+011c, KEY_Gcircumflex, LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
	0xd068, /* 2119, 0x1008ff1d, KEY_XF86Calculator, Invoke calculator program */
	0xd084, /* 2120, 0x1008ff1e, KEY_XF86Memo, Invoke Memo taking program */
	0xd09a, /* 2121, 0x1008ff1f, KEY_XF86ToDoList, Invoke To Do List program */
	0xd0b4, /* 2122, 0x1008ff20, KEY_XF86Calendar, Invoke Calendar program */
	0x355d, /*  614, 0x2dd, U+016c, KEY_Ubreve, LATIN CAPITAL LETTER U WITH BREVE */
	0x3571, /*  615, 0x2de, U+015c, KEY_Scircumflex, LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
	0xd109, /* 2125, 0x1008ff23, KEY_XF86RockerUp, Rocker switches exist up */
	0xd123, /* 2126, 0x1008ff24, KEY_XF86RockerDown, and down */
	0x78ef, /* 1299, 0xdb6, U+0e16, KEY_Thai_thothung, THAI CHARACTER THO THUNG */
	0xd15c, /* 2128, 0x1008ff26, KEY_XF86Back, Like back on a browser */
	0xd172, /* 2129, 0x1008ff27, KEY_XF86Forward, Like forward on a browser */
	0xd18b, /* 2130, 0x1008ff28, KEY_XF86Stop, Stop current operation */
	0x358a, /*  616, 0x2e5, U+010b, KEY_cabovedot, LATIN SMALL LETTER C WITH DOT ABOVE */
	0x35a1, /*  617, 0x2e6, U+0109, KEY_ccircumflex, LATIN SMALL LETTER C WITH CIRCUMFLEX */
	0x7941, /* 1302, 0xdb9, U+0e19, KEY_Thai_nonu, THAI CHARACTER NO NU */
	0xd1ec, /* 2134, 0x1008ff2c, KEY_XF86Eject, Eject device (e.g. DVD) */
	0x85b0, /* 1422, 0xecd, KEY_Hangul_WEO */
	0xd220, /* 2136, 0x1008ff2e, KEY_XF86WWW, Invoke web browser */
	0x7973, /* 1304, 0xdbb, U+0e1b, KEY_Thai_popla, THAI CHARACTER PO PLA */
	0xd24c, /* 2138, 0x1008ff30, KEY_XF86Favorites, Show favorite locations */
	0x972b, /* 1585, 0x10010ea, U+10ea, KEY_Georgian_can, GEORGIAN LETTER CAN */
	0xd283, /* 2140, 0x1008ff32, KEY_XF86AudioMedia, Launch media collection app */
	0x79a6, /* 1306, 0xdbd, U+0e1d, KEY_Thai_fofa, THAI CHARACTER FO FA */
	0xd2bb, /* 2142, 0x1008ff34, KEY_XF86VendorHome, Display vendor home web site */
	0x994d, /* 1608, 0x10001d2, U+01d2, KEY_ocaron, LATIN SMALL LETTER O WITH CARON */
	0xd2f2, /* 2144, 0x1008ff36, KEY_XF86Shop, Display shopping web site */
	0x79d7, /* 1308, 0xdbf, U+0e1f, KEY_Thai_fofan, THAI CHARACTER FO FAN */
	0xd321, /* 2146, 0x1008ff38, KEY_XF86OpenURL, Open selected URL */
	0x35ba, /*  618, 0x2f5, U+0121, KEY_gabovedot, LATIN SMALL LETTER G WITH DOT ABOVE */
	0xd357, /* 2148, 0x1008ff3a, KEY_XF86HotLinks, Show "hot" links */
	0xd371, /* 2149, 0x1008ff3b, KEY_XF86BrightnessAdjust, Invoke brightness adj. UI */
	0x35d1, /*  619, 0x2f8, U+011d, KEY_gcircumflex, LATIN SMALL LETTER G WITH CIRCUMFLEX */
	0x975f, /* 1587, 0x10010ec, U+10ec, KEY_Georgian_cil, GEORGIAN LETTER CIL */
	0xd3c7, /* 2152, 0x1008ff3e, KEY_XF86AudioRewind, "rewind" audio track */
	0x7a3b, /* 1312, 0xdc3, U+0e23, KEY_Thai_rorua, THAI CHARACTER RO RUA */
	0xd401, /* 2154, 0x1008ff40, KEY_XF86Launch0, Launch Application */
	0x35ea, /*  620, 0x2fd, U+016d, KEY_ubreve, LATIN SMALL LETTER U WITH BREVE */
	0x35fe, /*  621, 0x2fe, U+015d, KEY_scircumflex, LATIN SMALL LETTER S WITH CIRCUMFLEX */
	0x59bf, /*  988, 0x7a2, U+0388, KEY_Greek_EPSILONaccent, GREEK CAPITAL LETTER EPSILON WITH TONOS */
	0xd465, /* 2158, 0x1008ff44, KEY_XF86Launch4, Launch Application */
	0x59e0, /*  989, 0x7a3, U+0389, KEY_Greek_ETAaccent, GREEK CAPITAL LETTER ETA WITH TONOS */
	0xd497, /* 2160, 0x1008ff46, KEY_XF86Launch6, Launch Application */
	0x59fd, /*  990, 0x7a4, U+038a, KEY_Greek_IOTAaccent, GREEK CAPITAL LETTER IOTA WITH TONOS */
	0xd4c9, /* 2162, 0x1008ff48, KEY_XF86Launch8, Launch Application */
	0x5a1b, /*  991, 0x7a5, U+03aa, KEY_Greek_IOTAdieresis, GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
	0xd4fb, /* 2164, 0x1008ff4a, KEY_XF86LaunchA, Launch Application */
	0x7ac8, /* 1318, 0xdc9, U+0e29, KEY_Thai_sorusi, THAI CHARACTER SO RUSI */
	0xd52d, /* 2166, 0x1008ff4c, KEY_XF86LaunchC, Launch Application */
	0xd546, /* 2167, 0x1008ff4d, KEY_XF86LaunchD, Launch Application */
	0xd55f, /* 2168, 0x1008ff4e, KEY_XF86LaunchE, Launch Application */
	0x7af9, /* 1320, 0xdcb, U+0e2b, KEY_Thai_hohip, THAI CHARACTER HO HIP */
	0xd591, /* 2170, 0x1008ff50, KEY_XF86ApplicationLeft, switch to application, left */
	0xd5b2, /* 2171, 0x1008ff51, KEY_XF86ApplicationRight, switch to application, right */
	0xd5d4, /* 2172, 0x1008ff52, KEY_XF86Book, Launch bookreader */
	0x95d5, /* 1572, 0x10010dd, U+10dd, KEY_Georgian_on, GEORGIAN LETTER ON */
	0xd5fe, /* 2174, 0x1008ff54, KEY_XF86Calculater, Launch Calculater */
	0xd61a, /* 2175, 0x1008ff55, KEY_XF86Clear, Clear window, screen */
	0xd631, /* 2176, 0x1008ff56, KEY_XF86Close, Close window */
	0xd648, /* 2177, 0x1008ff57, KEY_XF86Copy, Copy selection */
	0xd65e, /* 2178, 0x1008ff58, KEY_XF86Cut, Cut selection */
	0xd673, /* 2179, 0x1008ff59, KEY_XF86Display, Output switch key */
	0xd68c, /* 2180, 0x1008ff5a, KEY_XF86DOS, Launch DOS (emulation) */
	0xd6a1, /* 2181, 0x1008ff5b, KEY_XF86Documents, Open documents window */
	0xd6bc, /* 2182, 0x1008ff5c, KEY_XF86Excel, Launch spread sheet */
	0x7bae, /* 1327, 0xdd2, U+0e32, KEY_Thai_saraaa, THAI CHARACTER SARA AA */
	0xd6ed, /* 2184, 0x1008ff5e, KEY_XF86Game, Launch game */
	0x7bc7, /* 1328, 0xdd3, U+0e33, KEY_Thai_saraam, THAI CHARACTER SARA AM */
	0xd717, /* 2186, 0x1008ff60, KEY_XF86iTouch, Logitech iTouch- don't use */
	0xd72f, /* 2187, 0x1008ff61, KEY_XF86LogOff, Log off system */
	0xd747, /* 2188, 0x1008ff62, KEY_XF86Market, ?? */
	0x7bf8, /* 1330, 0xdd5, U+0e35, KEY_Thai_saraii, THAI CHARACTER SARA II */
	0x0000,
	0xd778, /* 2190, 0x1008ff65, KEY_XF86MenuKB, distinguish keyboard from PB */
	0xd790, /* 2191, 0x1008ff66, KEY_XF86MenuPB, distinguish PB from keyboard */
	0xd7a8, /* 2192, 0x1008ff67, KEY_XF86MySites, Favourites */
	0xd7c1, /* 2193, 0x1008ff68, KEY_XF86New, New (folder, document... */
	0xd7d6, /* 2194, 0x1008ff69, KEY_XF86News, News */
	0xd7ec, /* 2195, 0x1008ff6a, KEY_XF86OfficeHome, Office home (old Staroffice) */
	0xd808, /* 2196, 0x1008ff6b, KEY_XF86Open, Open */
	0xd81e, /* 2197, 0x1008ff6c, KEY_XF86Option, ?? */
	0x73f7, /* 1250, 0xce7, U+05d7, KEY_hebrew_chet, HEBREW LETTER HET */
	0xd84d, /* 2199, 0x1008ff6e, KEY_XF86Phone, Launch phone; dial number */
	0xe7af, /* 2352, 0x1004ff31, KEY_osfAddMode */
	0xd864, /* 2200, 0x1008ff70, KEY_XF86Q, Compaq's Q - don't use */
	0x0000,
	0xd877, /* 2201, 0x1008ff72, KEY_XF86Reply, Reply e.g., mail */
	0xd88e, /* 2202, 0x1008ff73, KEY_XF86Reload, Reload web page, file, etc. */
	0xd8a6, /* 2203, 0x1008ff74, KEY_XF86RotateWindows, Rotate windows e.g. xrandr */
	0xd8c5, /* 2204, 0x1008ff75, KEY_XF86RotationPB, don't use */
	0xd8e1, /* 2205, 0x1008ff76, KEY_XF86RotationKB, don't use */
	0xd8fd, /* 2206, 0x1008ff77, KEY_XF86Save, Save (file, document, state */
	0xd913, /* 2207, 0x1008ff78, KEY_XF86ScrollUp, Scroll window/contents up */
	0xd92d, /* 2208, 0x1008ff79, KEY_XF86ScrollDown, Scrool window/contentd down */
	0xd949, /* 2209, 0x1008ff7a, KEY_XF86ScrollClick, Use XKB mousekeys instead */
	0xd966, /* 2210, 0x1008ff7b, KEY_XF86Send, Send mail, file, object */
	0xd97c, /* 2211, 0x1008ff7c, KEY_XF86Spell, Spell checker */
	0xd993, /* 2212, 0x1008ff7d, KEY_XF86SplitScreen, Split window or screen */
	0xd9b0, /* 2213, 0x1008ff7e, KEY_XF86Support, Get support (??) */
	0xd9c9, /* 2214, 0x1008ff7f, KEY_XF86TaskPane, Show tasks */
	0xd9e3, /* 2215, 0x1008ff80, KEY_XF86Terminal, Launch terminal emulator */
	0xd9fd, /* 2216, 0x1008ff81, KEY_XF86Tools, toolbox of desktop/app. */
	0xda14, /* 2217, 0x1008ff82, KEY_XF86Travel, ?? */
	0x0000,
	0xda2c, /* 2218, 0x1008ff84, KEY_XF86UserPB, ?? */
	0xda44, /* 2219, 0x1008ff85, KEY_XF86User1KB, ?? */
	0xda5d, /* 2220, 0x1008ff86, KEY_XF86User2KB, ?? */
	0x7d8d, /* 1345, 0xde7, U+0e47, KEY_Thai_maitaikhu, THAI CHARACTER MAITAIKHU */
	0xda8d, /* 2222, 0x1008ff88, KEY_XF86WheelButton, button from a mouse wheel */
	0x3a21, /*  670, 0x1001e56, U+1e56, KEY_Pabovedot, LATIN CAPITAL LETTER P WITH DOT ABOVE */
	0xdac0, /* 2224, 0x1008ff8a, KEY_XF86Xfer */
	0x3a38, /*  671, 0x1001e57, U+1e57, KEY_pabovedot, LATIN SMALL LETTER P WITH DOT ABOVE */
	0xdaee, /* 2226, 0x1008ff8c, KEY_XF86ZoomOut, zoom out view, map, etc. */
	0xdb07, /* 2227, 0x1008ff8d, KEY_XF86Away, mark yourself as away */
	0xdb1d, /* 2228, 0x1008ff8e, KEY_XF86Messenger, as in instant messaging */
	0x7df3, /* 1349, 0xdeb, U+0e4b, KEY_Thai_maichattawa, THAI CHARACTER MAI CHATTAWA */
	0xdb50, /* 2230, 0x1008ff90, KEY_XF86MailForward, Forward in mail */
	0x7e11, /* 1350, 0xdec, U+0e4c, KEY_Thai_thanthakhat, THAI CHARACTER THANTHAKHAT */
	0x96c0, /* 1581, 0x10010e6, U+10e6, KEY_Georgian_ghan, GEORGIAN LETTER GHAN */
	0xdb9e, /* 2233, 0x1008ff93, KEY_XF86Battery, Display battery information */
	0xdbb7, /* 2234, 0x1008ff94, KEY_XF86Bluetooth, Enable/disable Bluetooth */
	0xdbd2, /* 2235, 0x1008ff95, KEY_XF86WLAN, Enable/disable WLAN */
	0xdbe8, /* 2236, 0x1008ff96, KEY_XF86UWB, Enable/disable UWB	 */
	0xdbfd, /* 2237, 0x1008ff97, KEY_XF86AudioForward, fast-forward audio track */
	0xdc1b, /* 2238, 0x1008ff98, KEY_XF86AudioRepeat, toggle repeat mode */
	0x7e4a, /* 1352, 0xdf0, U+0e50, KEY_Thai_leksun, THAI DIGIT ZERO */
	0xdc59, /* 2240, 0x1008ff9a, KEY_XF86Subtitle, cycle through subtitle */
	0x7e63, /* 1353, 0xdf1, U+0e51, KEY_Thai_leknung, THAI DIGIT ONE */
	0xdc94, /* 2242, 0x1008ff9c, KEY_XF86CycleAngle, cycle through angles */
	0x3a4f, /*  672, 0x1001e60, U+1e60, KEY_Sabovedot, LATIN CAPITAL LETTER S WITH DOT ABOVE */
	0xdccb, /* 2244, 0x1008ff9e, KEY_XF86FrameForward, video: go one frame forward */
	0x7e97, /* 1355, 0xdf3, U+0e53, KEY_Thai_leksam, THAI DIGIT THREE */
	0xdcff, /* 2246, 0x1008ffa0, KEY_XF86Select, Select button on joypads and remotes */
	0x7eb0, /* 1356, 0xdf4, U+0e54, KEY_Thai_leksi, THAI DIGIT FOUR */
	0xdd2d, /* 2248, 0x1008ffa2, KEY_XF86TopMenu, Go to a top-level menu in a video */
	0x7ec8, /* 1357, 0xdf5, U+0e55, KEY_Thai_lekha, THAI DIGIT FIVE */
	0xdd5b, /* 2250, 0x1008ffa4, KEY_XF86Green, Green button */
	0xdd72, /* 2251, 0x1008ffa5, KEY_XF86Yellow, Yellow button */
	0xdd8a, /* 2252, 0x1008ffa6, KEY_XF86Blue, Blue button */
	0x7ef9, /* 1359, 0xdf7, U+0e57, KEY_Thai_lekchet, THAI DIGIT SEVEN */
	0xddb9, /* 2254, 0x1008ffa8, KEY_XF86Hibernate, Sleep to disk */
	0x7f13, /* 1360, 0xdf8, U+0e58, KEY_Thai_lekpaet, THAI DIGIT EIGHT */
	0x0000,
	0x7f2d, /* 1361, 0xdf9, U+0e59, KEY_Thai_lekkao, THAI DIGIT NINE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xddf4, /* 2256, 0x1008ffb0, KEY_XF86TouchpadOn, The touchpad got switched on */
	0x3a7d, /*  674, 0x1001e6a, U+1e6a, KEY_Tabovedot, LATIN CAPITAL LETTER T WITH DOT ABOVE */
	0xde2d, /* 2258, 0x1008ffb2, KEY_XF86AudioMicMute, Mute the Mic from the system */
	0x3a94, /*  675, 0x1001e6b, U+1e6b, KEY_tabovedot, LATIN SMALL LETTER T WITH DOT ABOVE */
	0xde65, /* 2260, 0x1008ffb4, KEY_XF86WWAN, Toggle WWAN (LTE, UMTS, etc.) radio */
	0x9745, /* 1586, 0x10010eb, U+10eb, KEY_Georgian_jil, GEORGIAN LETTER JIL */
	0xde93, /* 2262, 0x1008ffb6, KEY_XF86AudioPreset, Select equalizer preset, e.g. theatre-mode */
	0xdeb0, /* 2263, 0x1008ffb7, KEY_XF86RotationLockToggle, Toggle screen rotation lock on/off */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa33c, /* 1711, 0x10020a3, U+20a3, KEY_FFrancSign, FRENCH FRANC SIGN */
	0x0000,
	0xded4, /* 2264, 0x1008fe01, KEY_XF86Switch_VT_1 */
	0x0000,
	0xdef1, /* 2265, 0x1008fe02, KEY_XF86Switch_VT_2 */
	0x0000,
	0xdf0e, /* 2266, 0x1008fe03, KEY_XF86Switch_VT_3 */
	0xe6fc, /* 2344, 0x100000fc, KEY_hpblock */
	0xa36a, /* 1713, 0x10020a5, U+20a5, KEY_MillSign, MILL SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x88a3, /* 1448, 0xee7, KEY_Hangul_J_SsangSios */
	0x0000,
	0xdf82, /* 2270, 0x1008fe07, KEY_XF86Switch_VT_7 */
	0xe4ab, /* 2320, 0x1000fe22, KEY_Ddiaeresis */
	0xa397, /* 1715, 0x10020a7, U+20a7, KEY_PesetaSign, PESETA SIGN */
	0x0000,
	0xd836, /* 2198, 0x1008ff6d, KEY_XF86Paste, Paste */
	0x0000,
	0xdfd9, /* 2273, 0x1008fe0a, KEY_XF86Switch_VT_10 */
	0x0000,
	0xdff7, /* 2274, 0x1008fe0b, KEY_XF86Switch_VT_11 */
	0x0000,
	0xe015, /* 2275, 0x1008fe0c, KEY_XF86Switch_VT_12 */
	0xe444, /* 2316, 0x1000fe2c, KEY_Dcedilla_accent */
	0x0000,
	0x0000,
	0xe9de, /* 2375, 0x1004ff65, KEY_osfUndo */
	0x0000,
	0x0000,
	0x0000,
	0x3aab, /*  676, 0x1001e80, U+1e80, KEY_Wgrave, LATIN CAPITAL LETTER W WITH GRAVE */
	0x0000,
	0x0000,
	0x0000,
	0xe9f3, /* 2376, 0x1004ff67, KEY_osfMenu */
	0x0000,
	0x3ae7, /*  679, 0x1001e83, U+1e83, KEY_wacute, LATIN SMALL LETTER W WITH ACUTE */
	0x0000,
	0x3afb, /*  680, 0x1001e84, U+1e84, KEY_Wdiaeresis, LATIN CAPITAL LETTER W WITH DIAERESIS */
	0x3617, /*  622, 0x3a2, U+0138, KEY_kra, LATIN SMALL LETTER KRA */
	0x363b, /*  624, 0x3a3, U+0156, KEY_Rcedilla, LATIN CAPITAL LETTER R WITH CEDILLA */
	0x0000,
	0x3651, /*  625, 0x3a5, U+0128, KEY_Itilde, LATIN CAPITAL LETTER I WITH TILDE */
	0x3665, /*  626, 0x3a6, U+013b, KEY_Lcedilla, LATIN CAPITAL LETTER L WITH CEDILLA */
	0xe0da, /* 2282, 0x1005ff00, KEY_SunFA_Grave */
	0x0000,
	0xe0f3, /* 2283, 0x1005ff01, KEY_SunFA_Circum */
	0x367b, /*  627, 0x3aa, U+0112, KEY_Emacron, LATIN CAPITAL LETTER E WITH MACRON */
	0x3690, /*  628, 0x3ab, U+0122, KEY_Gcedilla, LATIN CAPITAL LETTER G WITH CEDILLA */
	0x36a6, /*  629, 0x3ac, U+0166, KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */
	0xe126, /* 2285, 0x1005ff03, KEY_SunFA_Acute */
	0x0000,
	0x98f9, /* 1604, 0x1001e8b, U+1e8b, KEY_xabovedot, LATIN SMALL LETTER X WITH DOT ABOVE */
	0x982f, /* 1595, 0x10010f4, U+10f4, KEY_Georgian_har, GEORGIAN LETTER HAR */
	0x0000,
	0x0000,
	0x36ba, /*  630, 0x3b3, U+0157, KEY_rcedilla, LATIN SMALL LETTER R WITH CEDILLA */
	0x0000,
	0x36d0, /*  631, 0x3b5, U+0129, KEY_itilde, LATIN SMALL LETTER I WITH TILDE */
	0x36e4, /*  632, 0x3b6, U+013c, KEY_lcedilla, LATIN SMALL LETTER L WITH CEDILLA */
	0x0000,
	0x0000,
	0x0000,
	0x36fa, /*  633, 0x3ba, U+0113, KEY_emacron, LATIN SMALL LETTER E WITH MACRON */
	0x370f, /*  634, 0x3bb, U+0123, KEY_gcedilla, LATIN SMALL LETTER G WITH CEDILLA */
	0x3725, /*  635, 0x3bc, U+0167, KEY_tslash, LATIN SMALL LETTER T WITH STROKE */
	0x3739, /*  636, 0x3bd, U+014a, KEY_ENG, LATIN CAPITAL LETTER ENG */
	0x0000,
	0x374a, /*  637, 0x3bf, U+014b, KEY_eng, LATIN SMALL LETTER ENG */
	0x375b, /*  638, 0x3c0, U+0100, KEY_Amacron, LATIN CAPITAL LETTER A WITH MACRON */
	0xa456, /* 1723, 0x1002075, U+2075, KEY_fivesuperior, SUPERSCRIPT FIVE */
	0x8e44, /* 1497, 0x1000568, U+0568, KEY_Armenian_at, ARMENIAN SMALL LETTER ET */
	0xa489, /* 1725, 0x1002077, U+2077, KEY_sevensuperior, SUPERSCRIPT SEVEN */
	0xa4a4, /* 1726, 0x1002078, U+2078, KEY_eightsuperior, SUPERSCRIPT EIGHT */
	0x8e76, /* 1499, 0x1000569, U+0569, KEY_Armenian_to, ARMENIAN SMALL LETTER TO */
	0xe47c, /* 2318, 0x1000fe60, KEY_Dgrave_accent */
	0x3770, /*  639, 0x3c7, U+012e, KEY_Iogonek, LATIN CAPITAL LETTER I WITH OGONEK */
	0x0000,
	0xea4e, /* 2380, 0x1004ff72, KEY_osfDeselectAll */
	0x0000,
	0x8edd, /* 1503, 0x100056b, U+056b, KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */
	0x3785, /*  640, 0x3cc, U+0116, KEY_Eabovedot, LATIN CAPITAL LETTER E WITH DOT ABOVE */
	0xa4f4, /* 1729, 0x1002081, U+2081, KEY_onesubscript, SUBSCRIPT ONE */
	0xa50e, /* 1730, 0x1002082, U+2082, KEY_twosubscript, SUBSCRIPT TWO */
	0x379c, /*  641, 0x3cf, U+012a, KEY_Imacron, LATIN CAPITAL LETTER I WITH MACRON */
	0xa544, /* 1732, 0x1002084, U+2084, KEY_foursubscript, SUBSCRIPT FOUR */
	0x37b1, /*  642, 0x3d1, U+0145, KEY_Ncedilla, LATIN CAPITAL LETTER N WITH CEDILLA */
	0x37c7, /*  643, 0x3d2, U+014c, KEY_Omacron, LATIN CAPITAL LETTER O WITH MACRON */
	0x37dc, /*  644, 0x3d3, U+0136, KEY_Kcedilla, LATIN CAPITAL LETTER K WITH CEDILLA */
	0xa5b0, /* 1736, 0x1002088, U+2088, KEY_eightsubscript, SUBSCRIPT EIGHT */
	0xa5cc, /* 1737, 0x1002089, U+2089, KEY_ninesubscript, SUBSCRIPT NINE */
	0x0000,
	0x8faf, /* 1511, 0x100056f, U+056f, KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */
	0xc953, /* 2043, 0x1000d9e, U+0d9e, KEY_Sinh_ng2, SINHALA KANTAJA NAASIKYAYA */
	0x37f2, /*  645, 0x3d9, U+0172, KEY_Uogonek, LATIN CAPITAL LETTER U WITH OGONEK */
	0x0000,
	0xc969, /* 2044, 0x1000d9f, U+0d9f, KEY_Sinh_nga, SINHALA SANYAKA GAYANNA */
	0x0000,
	0x3807, /*  646, 0x3dd, U+0168, KEY_Utilde, LATIN CAPITAL LETTER U WITH TILDE */
	0x381b, /*  647, 0x3de, U+016a, KEY_Umacron, LATIN CAPITAL LETTER U WITH MACRON */
	0x9710, /* 1584, 0x10010e9, U+10e9, KEY_Georgian_chin, GEORGIAN LETTER CHIN */
	0x3830, /*  648, 0x3e0, U+0101, KEY_amacron, LATIN SMALL LETTER A WITH MACRON */
	0x9a40, /* 1620, 0x1001ea4, U+1ea4, KEY_Acircumflexacute, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x0000,
	0x9080, /* 1519, 0x1000573, U+0573, KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */
	0xc9aa, /* 2047, 0x1000da2, U+0da2, KEY_Sinh_ja, SINHALA JAYANNA */
	0x9a7c, /* 1622, 0x1001ea6, U+1ea6, KEY_Acircumflexgrave, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x90b5, /* 1521, 0x1000574, U+0574, KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */
	0x3845, /*  649, 0x3e7, U+012f, KEY_iogonek, LATIN SMALL LETTER I WITH OGONEK */
	0x0000,
	0x90e8, /* 1523, 0x1000575, U+0575, KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */
	0xc9d5, /* 2049, 0x1000da4, U+0da4, KEY_Sinh_nya, SINHALA TAALUJA NAASIKYAYA */
	0x9ad5, /* 1625, 0x1001ea9, U+1ea9, KEY_acircumflexhook, LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x385a, /*  650, 0x3ec, U+0117, KEY_eabovedot, LATIN SMALL LETTER E WITH DOT ABOVE */
	0xa30b, /* 1709, 0x10020a1, U+20a1, KEY_ColonSign, COLON SIGN */
	0xa322, /* 1710, 0x10020a2, U+20a2, KEY_CruzeiroSign, CRUZEIRO SIGN */
	0x3871, /*  651, 0x3ef, U+012b, KEY_imacron, LATIN SMALL LETTER I WITH MACRON */
	0xa354, /* 1712, 0x10020a4, U+20a4, KEY_LiraSign, LIRA SIGN */
	0x3886, /*  652, 0x3f1, U+0146, KEY_ncedilla, LATIN SMALL LETTER N WITH CEDILLA */
	0x389c, /*  653, 0x3f2, U+014d, KEY_omacron, LATIN SMALL LETTER O WITH MACRON */
	0x38b1, /*  654, 0x3f3, U+0137, KEY_kcedilla, LATIN SMALL LETTER K WITH CEDILLA */
	0xa3af, /* 1716, 0x10020a8, U+20a8, KEY_RupeeSign, RUPEE SIGN */
	0x91b3, /* 1531, 0x1000579, U+0579, KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */
	0xa3db, /* 1718, 0x10020aa, U+20aa, KEY_NewSheqelSign, NEW SHEQEL SIGN */
	0x9b89, /* 1631, 0x1001eaf, U+1eaf, KEY_abreveacute, LATIN SMALL LETTER A WITH BREVE AND ACUTE */
	0x0000,
	0x38c7, /*  655, 0x3f9, U+0173, KEY_uogonek, LATIN SMALL LETTER U WITH OGONEK */
	0x0000,
	0x9218, /* 1535, 0x100057b, U+057b, KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */
	0xca5b, /* 2055, 0x1000daa, U+0daa, KEY_Sinh_ddha, SINHALA MAHA. DDAYANNA */
	0x38dc, /*  656, 0x3fd, U+0169, KEY_utilde, LATIN SMALL LETTER U WITH TILDE */
	0x38f0, /*  657, 0x3fe, U+016b, KEY_umacron, LATIN SMALL LETTER U WITH MACRON */
	0x9bec, /* 1635, 0x1001eb3, U+1eb3, KEY_abrevehook, LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
	0x0000,
	0x927c, /* 1539, 0x100057d, U+057d, KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */
	0xca88, /* 2057, 0x1000dac, U+0dac, KEY_Sinh_ndda, SINHALA SANYAKA DDAYANNA */
	0x0000,
	0x92af, /* 1541, 0x100057e, U+057e, KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */
	0x9c36, /* 1638, 0x1001eb6, U+1eb6, KEY_Abrevebelowdot, LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
	0x0000,
	0x92e4, /* 1543, 0x100057f, U+057f, KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */
	0x0000,
	0x0000,
	0x9318, /* 1545, 0x1000580, U+0580, KEY_Armenian_re, ARMENIAN SMALL LETTER REH */
	0x0000,
	0x0000,
	0x934b, /* 1547, 0x1000581, U+0581, KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x93b6, /* 1551, 0x1000583, U+0583, KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */
	0x0000,
	0xe40a, /* 2314, 0x1000feb0, KEY_Dring_accent */
	0x93ea, /* 1553, 0x1000584, U+0584, KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */
	0x0000,
	0x0000,
	0x76fc, /* 1280, 0xda3, U+0e03, KEY_Thai_khokhuat, THAI CHARACTER KHO KHUAT */
	0x0000,
	0x9d44, /* 1649, 0x1001ec1, U+1ec1, KEY_ecircumflexgrave, LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x944c, /* 1557, 0x1000586, U+0586, KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */
	0x0000,
	0x0000,
	0x8b38, /* 1469, 0x1000587, U+0587, KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */
	0x0000,
	0x0000,
	0x0000,
	0x9dba, /* 1653, 0x1001ec5, U+1ec5, KEY_ecircumflextilde, LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0x7769, /* 1284, 0xda7, U+0e07, KEY_Thai_ngongu, THAI CHARACTER NGO NGU */
	0xcb7b, /* 2068, 0x1000db8, U+0db8, KEY_Sinh_ma, SINHALA MAYANNA */
	0xa6c1, /* 1747, 0x100222d, U+222d, KEY_tintegral, TRIPLE INTEGRAL */
	0x8bd9, /* 1474, 0x100058a, U+058a, KEY_Armenian_hyphen, ARMENIAN HYPHEN */
	0xcb90, /* 2069, 0x1000db9, U+0db9, KEY_Sinh_mba, SINHALA AMBA BAYANNA */
	0x0000,
	0x9e2d, /* 1657, 0x1001ec9, U+1ec9, KEY_ihook, LATIN SMALL LETTER I WITH HOOK ABOVE */
	0xcba6, /* 2070, 0x1000dba, U+0dba, KEY_Sinh_ya, SINHALA YAYANNA */
	0x9e40, /* 1658, 0x1001eca, U+1eca, KEY_Ibelowdot, LATIN CAPITAL LETTER I WITH DOT BELOW */
	0x0000,
	0xcbbb, /* 2071, 0x1000dbb, U+0dbb, KEY_Sinh_ra, SINHALA RAYANNA */
	0x0000,
	0x77d2, /* 1288, 0xdab, U+0e0b, KEY_Thai_soso, THAI CHARACTER SO SO */
	0x0000,
	0x0000,
	0x0000,
	0xcbd0, /* 2072, 0x1000dbd, U+0dbd, KEY_Sinh_la, SINHALA DANTAJA LAYANNA */
	0x0000,
	0x7803, /* 1290, 0xdad, U+0e0d, KEY_Thai_yoying, THAI CHARACTER YO YING */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7850, /* 1293, 0xdb0, U+0e10, KEY_Thai_thothan, THAI CHARACTER THO THAN */
	0x9f3a, /* 1668, 0x1001ed4, U+1ed4, KEY_Ocircumflexhook, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9f92, /* 1671, 0x1001ed7, U+1ed7, KEY_ocircumflextilde, LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0x0000,
	0xcc3c, /* 2077, 0x1000dc4, U+0dc4, KEY_Sinh_ha, SINHALA HAYANNA */
	0x9fd1, /* 1673, 0x1001ed9, U+1ed9, KEY_ocircumflexbelowdot, LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0xcc51, /* 2078, 0x1000dc5, U+0dc5, KEY_Sinh_lla, SINHALA MUURDHAJA LAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa052, /* 1678, 0x1001ede, U+1ede, KEY_Ohornhook, LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
	0x0000,
	0xa069, /* 1679, 0x1001edf, U+1edf, KEY_ohornhook, LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
	0x0000,
	0xa080, /* 1680, 0x1001ee0, U+1ee0, KEY_Ohorntilde, LATIN CAPITAL LETTER O WITH HORN AND TILDE */
	0x0000,
	0xa098, /* 1681, 0x1001ee1, U+1ee1, KEY_ohorntilde, LATIN SMALL LETTER O WITH HORN AND TILDE */
	0x0000,
	0x0000,
	0x0000,
	0xa0cb, /* 1683, 0x1001ee3, U+1ee3, KEY_ohornbelowdot, LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe4c3, /* 2321, 0x1000ff00, KEY_DRemove, Remove */
	0x0000,
	0x0000,
	0xa13a, /* 1688, 0x1001ee8, U+1ee8, KEY_Uhornacute, LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcca7, /* 2082, 0x1000dd0, U+0dd0, KEY_Sinh_ae2, SINHALA AEDA-PILLA */
	0x0000,
	0x0000,
	0xa19a, /* 1692, 0x1001eec, U+1eec, KEY_Uhornhook, LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
	0x0000,
	0xa1b1, /* 1693, 0x1001eed, U+1eed, KEY_uhornhook, LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
	0x0000,
	0xa1c8, /* 1694, 0x1001eee, U+1eee, KEY_Uhorntilde, LATIN CAPITAL LETTER U WITH HORN AND TILDE */
	0x0000,
	0xa1e0, /* 1695, 0x1001eef, U+1eef, KEY_uhorntilde, LATIN SMALL LETTER U WITH HORN AND TILDE */
	0x0000,
	0xa1f8, /* 1696, 0x1001ef0, U+1ef0, KEY_Uhornbelowdot, LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
	0x0000,
	0xa213, /* 1697, 0x1001ef1, U+1ef1, KEY_uhornbelowdot, LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
	0x0000,
	0x43d6, /*  782, 0x1000666, U+0666, KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */
	0x3b8b, /*  687, 0x47e, U+203e, KEY_overline, OVERLINE */
	0x43ec, /*  783, 0x1000667, U+0667, KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */
	0x0000,
	0xa22e, /* 1698, 0x1001ef4, U+1ef4, KEY_Ybelowdot, LATIN CAPITAL LETTER Y WITH DOT BELOW */
	0x0000,
	0xa245, /* 1699, 0x1001ef5, U+1ef5, KEY_ybelowdot, LATIN SMALL LETTER Y WITH DOT BELOW */
	0x0000,
	0x7a96, /* 1316, 0xdc7, U+0e27, KEY_Thai_wowaen, THAI CHARACTER WO WAEN */
	0x0000,
	0xa26f, /* 1701, 0x1001ef7, U+1ef7, KEY_yhook, LATIN SMALL LETTER Y WITH HOOK ABOVE */
	0x99be, /* 1614, 0x1001e36, U+1e36, KEY_Lbelowdot, LATIN CAPITAL LETTER L WITH DOT BELOW */
	0xe525, /* 2325, 0x1000ff72, KEY_hpInsertChar */
	0x0000,
	0x99d5, /* 1615, 0x1001e37, U+1e37, KEY_lbelowdot, LATIN SMALL LETTER L WITH DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0xdd17, /* 2247, 0x1008ffa1, KEY_XF86View, Show a view options/properties */
	0x0000,
	0xe2f6, /* 2305, 0x1005ff75, KEY_SunCut */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe711, /* 2345, 0x1004ff02, KEY_osfCopy */
	0xdd46, /* 2249, 0x1008ffa3, KEY_XF86Red, Red button */
	0x0000,
	0xe382, /* 2310, 0x1005ff7a, KEY_SunVideoDegauss */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3ba1, /*  688, 0x4a1, U+3002, KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */
	0x3bbc, /*  689, 0x4a2, U+300c, KEY_kana_openingbracket, LEFT CORNER BRACKET */
	0x3bdd, /*  690, 0x4a3, U+300d, KEY_kana_closingbracket, RIGHT CORNER BRACKET */
	0x3bfe, /*  691, 0x4a4, U+3001, KEY_kana_comma, IDEOGRAPHIC COMMA */
	0x3c16, /*  692, 0x4a5, U+30fb, KEY_kana_conjunctive, KATAKANA MIDDLE DOT */
	0x3c50, /*  694, 0x4a6, U+30f2, KEY_kana_WO, KATAKANA LETTER WO */
	0x3c65, /*  695, 0x4a7, U+30a1, KEY_kana_a, KATAKANA LETTER SMALL A */
	0x3c79, /*  696, 0x4a8, U+30a3, KEY_kana_i, KATAKANA LETTER SMALL I */
	0x3c8d, /*  697, 0x4a9, U+30a5, KEY_kana_u, KATAKANA LETTER SMALL U */
	0x3ca1, /*  698, 0x4aa, U+30a7, KEY_kana_e, KATAKANA LETTER SMALL E */
	0x3cb5, /*  699, 0x4ab, U+30a9, KEY_kana_o, KATAKANA LETTER SMALL O */
	0x3cc9, /*  700, 0x4ac, U+30e3, KEY_kana_ya, KATAKANA LETTER SMALL YA */
	0x3cde, /*  701, 0x4ad, U+30e5, KEY_kana_yu, KATAKANA LETTER SMALL YU */
	0x3cf3, /*  702, 0x4ae, U+30e7, KEY_kana_yo, KATAKANA LETTER SMALL YO */
	0x3d08, /*  703, 0x4af, U+30c3, KEY_kana_tsu, KATAKANA LETTER SMALL TU */
	0x3d33, /*  705, 0x4b0, U+30fc, KEY_prolongedsound, KATAKANA-HIRAGANA PROLONGED SOUND MARK */
	0x3d4f, /*  706, 0x4b1, U+30a2, KEY_kana_A, KATAKANA LETTER A */
	0x3d63, /*  707, 0x4b2, U+30a4, KEY_kana_I, KATAKANA LETTER I */
	0x3d77, /*  708, 0x4b3, U+30a6, KEY_kana_U, KATAKANA LETTER U */
	0x3d8b, /*  709, 0x4b4, U+30a8, KEY_kana_E, KATAKANA LETTER E */
	0x3d9f, /*  710, 0x4b5, U+30aa, KEY_kana_O, KATAKANA LETTER O */
	0x3db3, /*  711, 0x4b6, U+30ab, KEY_kana_KA, KATAKANA LETTER KA */
	0x3dc8, /*  712, 0x4b7, U+30ad, KEY_kana_KI, KATAKANA LETTER KI */
	0x3ddd, /*  713, 0x4b8, U+30af, KEY_kana_KU, KATAKANA LETTER KU */
	0x3df2, /*  714, 0x4b9, U+30b1, KEY_kana_KE, KATAKANA LETTER KE */
	0x3e07, /*  715, 0x4ba, U+30b3, KEY_kana_KO, KATAKANA LETTER KO */
	0x3e1c, /*  716, 0x4bb, U+30b5, KEY_kana_SA, KATAKANA LETTER SA */
	0x3e31, /*  717, 0x4bc, U+30b7, KEY_kana_SHI, KATAKANA LETTER SI */
	0x3e47, /*  718, 0x4bd, U+30b9, KEY_kana_SU, KATAKANA LETTER SU */
	0x3e5c, /*  719, 0x4be, U+30bb, KEY_kana_SE, KATAKANA LETTER SE */
	0x3e71, /*  720, 0x4bf, U+30bd, KEY_kana_SO, KATAKANA LETTER SO */
	0x3e86, /*  721, 0x4c0, U+30bf, KEY_kana_TA, KATAKANA LETTER TA */
	0x3e9b, /*  722, 0x4c1, U+30c1, KEY_kana_CHI, KATAKANA LETTER TI */
	0x3ec6, /*  724, 0x4c2, U+30c4, KEY_kana_TSU, KATAKANA LETTER TU */
	0x3ef1, /*  726, 0x4c3, U+30c6, KEY_kana_TE, KATAKANA LETTER TE */
	0x3f06, /*  727, 0x4c4, U+30c8, KEY_kana_TO, KATAKANA LETTER TO */
	0x3f1b, /*  728, 0x4c5, U+30ca, KEY_kana_NA, KATAKANA LETTER NA */
	0x3f30, /*  729, 0x4c6, U+30cb, KEY_kana_NI, KATAKANA LETTER NI */
	0x3f45, /*  730, 0x4c7, U+30cc, KEY_kana_NU, KATAKANA LETTER NU */
	0x3f5a, /*  731, 0x4c8, U+30cd, KEY_kana_NE, KATAKANA LETTER NE */
	0x3f6f, /*  732, 0x4c9, U+30ce, KEY_kana_NO, KATAKANA LETTER NO */
	0x3f84, /*  733, 0x4ca, U+30cf, KEY_kana_HA, KATAKANA LETTER HA */
	0x3f99, /*  734, 0x4cb, U+30d2, KEY_kana_HI, KATAKANA LETTER HI */
	0x3fae, /*  735, 0x4cc, U+30d5, KEY_kana_FU, KATAKANA LETTER HU */
	0x3fd8, /*  737, 0x4cd, U+30d8, KEY_kana_HE, KATAKANA LETTER HE */
	0x3fed, /*  738, 0x4ce, U+30db, KEY_kana_HO, KATAKANA LETTER HO */
	0x4002, /*  739, 0x4cf, U+30de, KEY_kana_MA, KATAKANA LETTER MA */
	0x4017, /*  740, 0x4d0, U+30df, KEY_kana_MI, KATAKANA LETTER MI */
	0x402c, /*  741, 0x4d1, U+30e0, KEY_kana_MU, KATAKANA LETTER MU */
	0x4041, /*  742, 0x4d2, U+30e1, KEY_kana_ME, KATAKANA LETTER ME */
	0x4056, /*  743, 0x4d3, U+30e2, KEY_kana_MO, KATAKANA LETTER MO */
	0x406b, /*  744, 0x4d4, U+30e4, KEY_kana_YA, KATAKANA LETTER YA */
	0x4080, /*  745, 0x4d5, U+30e6, KEY_kana_YU, KATAKANA LETTER YU */
	0x4095, /*  746, 0x4d6, U+30e8, KEY_kana_YO, KATAKANA LETTER YO */
	0x40aa, /*  747, 0x4d7, U+30e9, KEY_kana_RA, KATAKANA LETTER RA */
	0x40bf, /*  748, 0x4d8, U+30ea, KEY_kana_RI, KATAKANA LETTER RI */
	0x40d4, /*  749, 0x4d9, U+30eb, KEY_kana_RU, KATAKANA LETTER RU */
	0x40e9, /*  750, 0x4da, U+30ec, KEY_kana_RE, KATAKANA LETTER RE */
	0x40fe, /*  751, 0x4db, U+30ed, KEY_kana_RO, KATAKANA LETTER RO */
	0x4113, /*  752, 0x4dc, U+30ef, KEY_kana_WA, KATAKANA LETTER WA */
	0x4128, /*  753, 0x4dd, U+30f3, KEY_kana_N, KATAKANA LETTER N */
	0x413c, /*  754, 0x4de, U+309b, KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */
	0x4155, /*  755, 0x4df, U+309c, KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
	0x0000,
	0x837a, /* 1399, 0xeb6, KEY_Hangul_SsangSios */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7da9, /* 1346, 0xde8, U+0e48, KEY_Thai_maiek, THAI CHARACTER MAI EK */
	0xde4b, /* 2259, 0x1008ffb3, KEY_XF86Keyboard, User defined keyboard related action */
	0x0000,
	0x7dc1, /* 1347, 0xde9, U+0e49, KEY_Thai_maitho, THAI CHARACTER MAI THO */
	0x0000,
	0xd0ce, /* 2123, 0x1008ff21, KEY_XF86PowerDown, Deep sleep the system */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xde7b, /* 2261, 0x1008ffb5, KEY_XF86RFKill, Toggle radios on/off */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x84b3, /* 1411, 0xec2, KEY_Hangul_YAE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8527, /* 1416, 0xec7, KEY_Hangul_O */
	0x0000,
	0xc9bf, /* 2048, 0x1000da3, U+0da3, KEY_Sinh_jha, SINHALA MAHA. JAYANNA */
	0x7e7d, /* 1354, 0xdf2, U+0e52, KEY_Thai_leksong, THAI DIGIT TWO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x623f, /* 1069, 0x8a8, U+23a3, KEY_botleftsqbracket, LEFT SQUARE BRACKET LOWER CORNER */
	0x0000,
	0x625d, /* 1070, 0x8a9, U+23a4, KEY_toprightsqbracket, RIGHT SQUARE BRACKET UPPER CORNER */
	0x0000,
	0x627c, /* 1071, 0x8aa, U+23a6, KEY_botrightsqbracket, RIGHT SQUARE BRACKET LOWER CORNER */
	0x0000,
	0x629b, /* 1072, 0x8ab, U+239b, KEY_topleftparens, LEFT PARENTHESIS UPPER HOOK */
	0x0000,
	0x62b6, /* 1073, 0x8ac, U+239d, KEY_botleftparens, LEFT PARENTHESIS LOWER HOOK */
	0x0000,
	0x62d1, /* 1074, 0x8ad, U+239e, KEY_toprightparens, RIGHT PARENTHESIS UPPER HOOK */
	0x0000,
	0x62ed, /* 1075, 0x8ae, U+23a0, KEY_botrightparens, RIGHT PARENTHESIS LOWER HOOK */
	0x0000,
	0x6309, /* 1076, 0x8af, U+23a8, KEY_leftmiddlecurlybrace, LEFT CURLY BRACKET MIDDLE PIECE */
	0xca02, /* 2051, 0x1000da6, U+0da6, KEY_Sinh_nja, SINHALA SANYAKA JAYANNA */
	0x632b, /* 1077, 0x8b0, U+23ac, KEY_rightmiddlecurlybrace, RIGHT CURLY BRACKET MIDDLE PIECE */
	0x0000,
	0x634e, /* 1078, 0x8b1, KEY_topleftsummation */
	0x0000,
	0x636c, /* 1079, 0x8b2, KEY_botleftsummation */
	0x0000,
	0x638a, /* 1080, 0x8b3, KEY_topvertsummationconnector */
	0x0000,
	0x63b1, /* 1081, 0x8b4, KEY_botvertsummationconnector */
	0x0000,
	0x63d8, /* 1082, 0x8b5, KEY_toprightsummation */
	0x0000,
	0x63f7, /* 1083, 0x8b6, KEY_botrightsummation */
	0xca2e, /* 2053, 0x1000da8, U+0da8, KEY_Sinh_ttha, SINHALA MAHA. TTAYANNA */
	0x6416, /* 1084, 0x8b7, KEY_rightmiddlesummation */
	0x0000,
	0xe7e4, /* 2354, 0x1004ff33, KEY_osfQuickPaste */
	0x0000,
	0x8748, /* 1437, 0xedc, KEY_Hangul_J_RieulKiyeog */
	0x671f, /* 1118, 0x9e8, U+2424, KEY_nl, SYMBOL FOR NEWLINE */
	0xca45, /* 2054, 0x1000da9, U+0da9, KEY_Sinh_dda, SINHALA DDAYANNA */
	0xe28a, /* 2300, 0x1005ff70, KEY_SunProps */
	0x672f, /* 1119, 0x9e9, U+240b, KEY_vt, SYMBOL FOR VERTICAL TABULATION */
	0x0000,
	0x6438, /* 1085, 0x8bc, U+2264, KEY_lessthanequal, LESS-THAN OR EQUAL TO */
	0x673f, /* 1120, 0x9ea, U+2518, KEY_lowrightcorner, BOX DRAWINGS LIGHT UP AND LEFT */
	0x0000,
	0x0000,
	0x675b, /* 1121, 0x9eb, U+2510, KEY_uprightcorner, BOX DRAWINGS LIGHT DOWN AND LEFT */
	0x0000,
	0x0000,
	0x0000,
	0x911a, /* 1525, 0x1000576, U+0576, KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */
	0x0000,
	0x6790, /* 1123, 0x9ed, U+2514, KEY_lowleftcorner, BOX DRAWINGS LIGHT UP AND RIGHT */
	0x0000,
	0x914d, /* 1527, 0x1000577, U+0577, KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */
	0x67ab, /* 1124, 0x9ee, U+253c, KEY_crossinglines, BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
	0x0000,
	0xdf2b, /* 2267, 0x1008fe04, KEY_XF86Switch_VT_4 */
	0x67c6, /* 1125, 0x9ef, U+23ba, KEY_horizlinescan1, HORIZONTAL SCAN LINE-1 */
	0x0000,
	0x0000,
	0x67e2, /* 1126, 0x9f0, U+23bb, KEY_horizlinescan3, HORIZONTAL SCAN LINE-3 */
	0x0000,
	0x0000,
	0x67fe, /* 1127, 0x9f1, U+2500, KEY_horizlinescan5, BOX DRAWINGS LIGHT HORIZONTAL */
	0x0000,
	0x0000,
	0x681a, /* 1128, 0x9f2, U+23bc, KEY_horizlinescan7, HORIZONTAL SCAN LINE-7 */
	0x8934, /* 1453, 0xeec, KEY_Hangul_J_Tieut */
	0xa5e7, /* 1738, 0x1002202, U+2202, KEY_partdifferential, PARTIAL DIFFERENTIAL */
	0x6836, /* 1129, 0x9f3, U+23bd, KEY_horizlinescan9, HORIZONTAL SCAN LINE-9 */
	0x0000,
	0xa605, /* 1739, 0x1002205, U+2205, KEY_emptyset, NULL SET */
	0xe7ff, /* 2355, 0x1004ff40, KEY_osfPageLeft */
	0x8989, /* 1456, 0xeef, KEY_Hangul_RieulYeorinHieuh */
	0xa61b, /* 1740, 0x1002208, U+2208, KEY_elementof, ELEMENT OF */
	0x89ae, /* 1457, 0xef0, KEY_Hangul_SunkyeongeumMieum */
	0x0000,
	0x89d4, /* 1458, 0xef1, KEY_Hangul_SunkyeongeumPieub */
	0xe82f, /* 2357, 0x1004ff42, KEY_osfPageDown */
	0x4335, /*  775, 0x10006d4, U+06d4, KEY_Arabic_fullstop, ARABIC FULL STOP */
	0x0000,
	0xe848, /* 2358, 0x1004ff43, KEY_osfPageRight */
	0x0000,
	0x0000,
	0xe862, /* 2359, 0x1004ff44, KEY_osfActivate */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8a9d, /* 1464, 0xef7, KEY_Hangul_AraeAE */
	0x0000,
	0x0000,
	0xa664, /* 1743, 0x100221a, U+221a, KEY_squareroot, SQUARE ROOT */
	0xa67c, /* 1744, 0x100221b, U+221b, KEY_cuberoot, CUBE ROOT */
	0xa692, /* 1745, 0x100221c, U+221c, KEY_fourthroot, FOURTH ROOT */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x657e, /* 1099, 0x8da, U+2282, KEY_includedin, SUBSET OF */
	0x0000,
	0x6596, /* 1100, 0x8db, U+2283, KEY_includes, SUPERSET OF */
	0x0000,
	0x65ac, /* 1101, 0x8dc, U+2229, KEY_intersection, INTERSECTION */
	0x0000,
	0x3b13, /*  681, 0x1001e85, U+1e85, KEY_wdiaeresis, LATIN SMALL LETTER W WITH DIAERESIS */
	0x0000,
	0x65d9, /* 1103, 0x8de, U+2227, KEY_logicaland, LOGICAL AND */
	0xa6aa, /* 1746, 0x100222c, U+222c, KEY_dintegral, DOUBLE INTEGRAL */
	0x65f1, /* 1104, 0x8df, U+2228, KEY_logicalor, LOGICAL OR */
	0x0000,
	0xce23, /* 2099, 0x1008ff01, KEY_XF86ModeLock, Mode Switch Lock */
	0x0000,
	0xd33a, /* 2147, 0x1008ff39, KEY_XF86AddFavorite, Add URL to favorites list */
	0x0000,
	0xce5e, /* 2101, 0x1008ff03, KEY_XF86MonBrightnessDown, Monitor/panel brightness */
	0x0000,
	0xa6d8, /* 1748, 0x1002235, U+2235, KEY_because, BECAUSE */
	0x0000,
	0x0000,
	0x0000,
	0xcec1, /* 2104, 0x1008ff06, KEY_XF86KbdBrightnessDown, Keyboards may be lit */
	0x0000,
	0x8b5a, /* 1470, 0x1000589, U+0589, KEY_Armenian_full_stop, ARMENIAN FULL STOP */
	0xe8a8, /* 2362, 0x1004ff52, KEY_osfUp */
	0xe615, /* 2335, 0x100000a9, KEY_hpmute_grave */
	0x0000,
	0xdc73, /* 2241, 0x1008ff9b, KEY_XF86AudioCycleTrack, cycle through audio tracks */
	0x0000,
	0x0000,
	0xe8d1, /* 2364, 0x1004ff54, KEY_osfDown */
	0xd393, /* 2150, 0x1008ff3c, KEY_XF86Finance, Display financial site */
	0x0000,
	0x0000,
	0x0000,
	0xa703, /* 1750, 0x1002247, U+2247, KEY_notapproxeq, NOT ALMOST EQUAL TO */
	0xa6ed, /* 1749, 0x1002248, U+2245, KEY_approxeq, ALMOST EQUAL TO */
	0x0000,
	0x0000,
	0xe8e6, /* 2365, 0x1004ff57, KEY_osfEndLine */
	0x0000,
	0x6608, /* 1105, 0x8ef, U+2202, KEY_partialderivative, PARTIAL DIFFERENTIAL */
	0x0000,
	0xcf21, /* 2107, 0x1008ff11, KEY_XF86AudioLowerVolume, Volume control down */
	0xe066, /* 2278, 0x1008fe22, KEY_XF86Next_VMode, next video mode available */
	0xcf43, /* 2108, 0x1008ff12, KEY_XF86AudioMute, Mute sound from the system */
	0x0000,
	0xcf5e, /* 2109, 0x1008ff13, KEY_XF86AudioRaiseVolume, Volume control up */
	0x0000,
	0xcf80, /* 2110, 0x1008ff14, KEY_XF86AudioPlay, Start playing of audio > */
	0xe09e, /* 2280, 0x1008fe24, KEY_XF86LogWindowTree, print window tree to log */
	0xcf9b, /* 2111, 0x1008ff15, KEY_XF86AudioStop, Stop playing audio */
	0x0000,
	0x0000,
	0x0000,
	0x6627, /* 1106, 0x8f6, U+0192, KEY_function, LATIN SMALL LETTER F WITH HOOK */
	0x0000,
	0x0000,
	0x0000,
	0xd006, /* 2115, 0x1008ff19, KEY_XF86Mail, Invoke user's mail program */
	0x431b, /*  774, 0x5ac, U+060c, KEY_Arabic_comma, ARABIC COMMA */
	0x0000,
	0xa71c, /* 1751, 0x1002262, U+2262, KEY_notidentical, NOT IDENTICAL TO */
	0xa736, /* 1752, 0x1002263, U+2263, KEY_stricteq, STRICTLY EQUIVALENT TO */
	0x0000,
	0x663d, /* 1107, 0x8fb, U+2190, KEY_leftarrow, LEFTWARDS ARROW */
	0x0000,
	0x6654, /* 1108, 0x8fc, U+2191, KEY_uparrow, UPWARDS ARROW */
	0x0000,
	0x6669, /* 1109, 0x8fd, U+2192, KEY_rightarrow, RIGHTWARDS ARROW */
	0x0000,
	0x6681, /* 1110, 0x8fe, U+2193, KEY_downarrow, DOWNWARDS ARROW */
	0x0000,
	0x0000,
	0x0000,
	0x442e, /*  786, 0x5bb, U+061b, KEY_Arabic_semicolon, ARABIC SEMICOLON */
	0x0000,
	0xd0e9, /* 2124, 0x1008ff22, KEY_XF86ContrastAdjust, Adjust screen contrast */
	0x0000,
	0x444c, /*  787, 0x5bf, U+061f, KEY_Arabic_question_mark, ARABIC QUESTION MARK */
	0x0000,
	0x446e, /*  788, 0x5c1, U+0621, KEY_Arabic_hamza, ARABIC LETTER HAMZA */
	0x4488, /*  789, 0x5c2, U+0622, KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */
	0x44a8, /*  790, 0x5c3, U+0623, KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */
	0x44c8, /*  791, 0x5c4, U+0624, KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */
	0x44e7, /*  792, 0x5c5, U+0625, KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */
	0x450a, /*  793, 0x5c6, U+0626, KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */
	0x4529, /*  794, 0x5c7, U+0627, KEY_Arabic_alef, ARABIC LETTER ALEF */
	0x4542, /*  795, 0x5c8, U+0628, KEY_Arabic_beh, ARABIC LETTER BEH */
	0x455a, /*  796, 0x5c9, U+0629, KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */
	0x4579, /*  797, 0x5ca, U+062a, KEY_Arabic_teh, ARABIC LETTER TEH */
	0x4591, /*  798, 0x5cb, U+062b, KEY_Arabic_theh, ARABIC LETTER THEH */
	0x45aa, /*  799, 0x5cc, U+062c, KEY_Arabic_jeem, ARABIC LETTER JEEM */
	0x45c3, /*  800, 0x5cd, U+062d, KEY_Arabic_hah, ARABIC LETTER HAH */
	0x45db, /*  801, 0x5ce, U+062e, KEY_Arabic_khah, ARABIC LETTER KHAH */
	0x45f4, /*  802, 0x5cf, U+062f, KEY_Arabic_dal, ARABIC LETTER DAL */
	0x460c, /*  803, 0x5d0, U+0630, KEY_Arabic_thal, ARABIC LETTER THAL */
	0x4625, /*  804, 0x5d1, U+0631, KEY_Arabic_ra, ARABIC LETTER REH */
	0x463c, /*  805, 0x5d2, U+0632, KEY_Arabic_zain, ARABIC LETTER ZAIN */
	0x4655, /*  806, 0x5d3, U+0633, KEY_Arabic_seen, ARABIC LETTER SEEN */
	0x466e, /*  807, 0x5d4, U+0634, KEY_Arabic_sheen, ARABIC LETTER SHEEN */
	0x4688, /*  808, 0x5d5, U+0635, KEY_Arabic_sad, ARABIC LETTER SAD */
	0x46a0, /*  809, 0x5d6, U+0636, KEY_Arabic_dad, ARABIC LETTER DAD */
	0x46b8, /*  810, 0x5d7, U+0637, KEY_Arabic_tah, ARABIC LETTER TAH */
	0x46d0, /*  811, 0x5d8, U+0638, KEY_Arabic_zah, ARABIC LETTER ZAH */
	0x46e8, /*  812, 0x5d9, U+0639, KEY_Arabic_ain, ARABIC LETTER AIN */
	0x4700, /*  813, 0x5da, U+063a, KEY_Arabic_ghain, ARABIC LETTER GHAIN */
	0x9a9a, /* 1623, 0x1001ea7, U+1ea7, KEY_acircumflexgrave, LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x0000,
	0xd4e2, /* 2163, 0x1008ff49, KEY_XF86Launch9, Launch Application */
	0x0000,
	0xd29f, /* 2141, 0x1008ff33, KEY_XF86MyComputer, Display "My Computer" window */
	0x471a, /*  814, 0x5e0, U+0640, KEY_Arabic_tatweel, ARABIC TATWEEL */
	0x4736, /*  815, 0x5e1, U+0641, KEY_Arabic_feh, ARABIC LETTER FEH */
	0x474e, /*  816, 0x5e2, U+0642, KEY_Arabic_qaf, ARABIC LETTER QAF */
	0x4766, /*  817, 0x5e3, U+0643, KEY_Arabic_kaf, ARABIC LETTER KAF */
	0x477e, /*  818, 0x5e4, U+0644, KEY_Arabic_lam, ARABIC LETTER LAM */
	0x4796, /*  819, 0x5e5, U+0645, KEY_Arabic_meem, ARABIC LETTER MEEM */
	0x47af, /*  820, 0x5e6, U+0646, KEY_Arabic_noon, ARABIC LETTER NOON */
	0x47c8, /*  821, 0x5e7, U+0647, KEY_Arabic_ha, ARABIC LETTER HEH */
	0x47f7, /*  823, 0x5e8, U+0648, KEY_Arabic_waw, ARABIC LETTER WAW */
	0x480f, /*  824, 0x5e9, U+0649, KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */
	0x482f, /*  825, 0x5ea, U+064a, KEY_Arabic_yeh, ARABIC LETTER YEH */
	0x4847, /*  826, 0x5eb, U+064b, KEY_Arabic_fathatan, ARABIC FATHATAN */
	0x4864, /*  827, 0x5ec, U+064c, KEY_Arabic_dammatan, ARABIC DAMMATAN */
	0x4881, /*  828, 0x5ed, U+064d, KEY_Arabic_kasratan, ARABIC KASRATAN */
	0x489e, /*  829, 0x5ee, U+064e, KEY_Arabic_fatha, ARABIC FATHA */
	0x48b8, /*  830, 0x5ef, U+064f, KEY_Arabic_damma, ARABIC DAMMA */
	0x48d2, /*  831, 0x5f0, U+0650, KEY_Arabic_kasra, ARABIC KASRA */
	0x48ec, /*  832, 0x5f1, U+0651, KEY_Arabic_shadda, ARABIC SHADDA */
	0x4907, /*  833, 0x5f2, U+0652, KEY_Arabic_sukun, ARABIC SUKUN */
	0xd3ac, /* 2151, 0x1008ff3d, KEY_XF86Community, Display user's community */
	0x0000,
	0x0000,
	0x0000,
	0xd3e4, /* 2153, 0x1008ff3f, KEY_XF86BackForward, ??? */
	0x0000,
	0x0000,
	0x0000,
	0xd41a, /* 2155, 0x1008ff41, KEY_XF86Launch1, Launch Application */
	0x9bd4, /* 1634, 0x1001eb2, U+1eb2, KEY_Abrevehook, LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
	0xd433, /* 2156, 0x1008ff42, KEY_XF86Launch2, Launch Application */
	0x0000,
	0xd44c, /* 2157, 0x1008ff43, KEY_XF86Launch3, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0xd47e, /* 2159, 0x1008ff45, KEY_XF86Launch5, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0xd4b0, /* 2161, 0x1008ff47, KEY_XF86Launch7, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0x9c52, /* 1639, 0x1001eb7, U+1eb7, KEY_abrevebelowdot, LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0xd514, /* 2165, 0x1008ff4b, KEY_XF86LaunchB, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd578, /* 2169, 0x1008ff4f, KEY_XF86LaunchF, Launch Application */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe6a0, /* 2340, 0x100000be, KEY_hpguilder */
	0x9cd6, /* 1645, 0x1001ebd, U+1ebd, KEY_etilde, LATIN SMALL LETTER E WITH TILDE */
	0x0000,
	0xd5ea, /* 2173, 0x1008ff53, KEY_XF86CD, Launch CD/DVD player */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9d26, /* 1648, 0x1001ec0, U+1ec0, KEY_Ecircumflexgrave, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
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
	0xd6d3, /* 2183, 0x1008ff5d, KEY_XF86Explorer, Launch file explorer */
	0x0000,
	0x0000,
	0x0000,
	0xd703, /* 2185, 0x1008ff5f, KEY_XF86Go, Go to URL */
	0x9dd8, /* 1654, 0x1001ec6, U+1ec6, KEY_Ecircumflexbelowdot, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd75f, /* 2189, 0x1008ff63, KEY_XF86Meeting, enter meeting in calendar */
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
	0x9eaf, /* 1663, 0x1001ecf, U+1ecf, KEY_ohook, LATIN SMALL LETTER O WITH HOOK ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8f47, /* 1507, 0x100056d, U+056d, KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */
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
	0xc75b, /* 2019, 0x1000d82, U+0d82, KEY_Sinh_ng, SINHALA ANUSVARAYA */
	0x0000,
	0x9015, /* 1515, 0x1000571, U+0571, KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */
	0x0000,
	0x0000,
	0x0000,
	0xc785, /* 2021, 0x1000d85, U+0d85, KEY_Sinh_a, SINHALA AYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc7c3, /* 2024, 0x1000d88, U+0d88, KEY_Sinh_aee, SINHALA AEEYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc802, /* 2027, 0x1000d8b, U+0d8b, KEY_Sinh_u, SINHALA UYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xda76, /* 2221, 0x1008ff87, KEY_XF86Video, Launch video player */
	0x0000,
	0xe782, /* 2350, 0x1004ff0b, KEY_osfClear */
	0x0000,
	0xc86b, /* 2032, 0x1000d90, U+0d90, KEY_Sinh_luu, SINHALA ILUUYANNA */
	0x0000,
	0xc881, /* 2033, 0x1000d91, U+0d91, KEY_Sinh_e, SINHALA EYANNA */
	0x0000,
	0xc895, /* 2034, 0x1000d92, U+0d92, KEY_Sinh_ee, SINHALA EEYANNA */
	0x0000,
	0xc8aa, /* 2035, 0x1000d93, U+0d93, KEY_Sinh_ai, SINHALA AIYANNA */
	0xe424, /* 2315, 0x1000fe5e, KEY_Dcircumflex_accent */
	0xc8bf, /* 2036, 0x1000d94, U+0d94, KEY_Sinh_o, SINHALA OYANNA */
	0x0000,
	0xc8d3, /* 2037, 0x1000d95, U+0d95, KEY_Sinh_oo, SINHALA OOYANNA */
	0x0000,
	0xc8e8, /* 2038, 0x1000d96, U+0d96, KEY_Sinh_au, SINHALA AUYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xdb6d, /* 2231, 0x1008ff91, KEY_XF86Pictures, Show pictures */
	0x0000,
	0xdb87, /* 2232, 0x1008ff92, KEY_XF86Music, Launch music application */
	0x0000,
	0xc8fd, /* 2039, 0x1000d9a, U+0d9a, KEY_Sinh_ka, SINHALA KAYANNA */
	0x0000,
	0x4e90, /*  878, 0x6a1, U+0452, KEY_Serbian_dje, CYRILLIC SMALL LETTER DJE */
	0x4ea9, /*  879, 0x6a2, U+0453, KEY_Macedonia_gje, CYRILLIC SMALL LETTER GJE */
	0x4ec4, /*  880, 0x6a3, U+0451, KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */
	0x4edd, /*  881, 0x6a4, U+0454, KEY_Ukrainian_ie, CYRILLIC SMALL LETTER UKRAINIAN IE */
	0x4f10, /*  883, 0x6a5, U+0455, KEY_Macedonia_dse, CYRILLIC SMALL LETTER DZE */
	0x4f2b, /*  884, 0x6a6, U+0456, KEY_Ukrainian_i, CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x4f5c, /*  886, 0x6a7, U+0457, KEY_Ukrainian_yi, CYRILLIC SMALL LETTER YI */
	0x4f8f, /*  888, 0x6a8, U+0458, KEY_Cyrillic_je, CYRILLIC SMALL LETTER JE */
	0x4fc0, /*  890, 0x6a9, U+0459, KEY_Cyrillic_lje, CYRILLIC SMALL LETTER LJE */
	0x4ff3, /*  892, 0x6aa, U+045a, KEY_Cyrillic_nje, CYRILLIC SMALL LETTER NJE */
	0x5026, /*  894, 0x6ab, U+045b, KEY_Serbian_tshe, CYRILLIC SMALL LETTER TSHE */
	0x5040, /*  895, 0x6ac, U+045c, KEY_Macedonia_kje, CYRILLIC SMALL LETTER KJE */
	0x505b, /*  896, 0x6ad, U+0491, KEY_Ukrainian_ghe_with_upturn, CYRILLIC SMALL LETTER GHE WITH UPTURN */
	0x5082, /*  897, 0x6ae, U+045e, KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */
	0x50a3, /*  898, 0x6af, U+045f, KEY_Cyrillic_dzhe, CYRILLIC SMALL LETTER DZHE */
	0x50d7, /*  900, 0x6b0, U+2116, KEY_numerosign, NUMERO SIGN */
	0x50ef, /*  901, 0x6b1, U+0402, KEY_Serbian_DJE, CYRILLIC CAPITAL LETTER DJE */
	0x5108, /*  902, 0x6b2, U+0403, KEY_Macedonia_GJE, CYRILLIC CAPITAL LETTER GJE */
	0x5123, /*  903, 0x6b3, U+0401, KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */
	0x513c, /*  904, 0x6b4, U+0404, KEY_Ukrainian_IE, CYRILLIC CAPITAL LETTER UKRAINIAN IE */
	0x516f, /*  906, 0x6b5, U+0405, KEY_Macedonia_DSE, CYRILLIC CAPITAL LETTER DZE */
	0x518a, /*  907, 0x6b6, U+0406, KEY_Ukrainian_I, CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x51bb, /*  909, 0x6b7, U+0407, KEY_Ukrainian_YI, CYRILLIC CAPITAL LETTER YI */
	0x51ee, /*  911, 0x6b8, U+0408, KEY_Cyrillic_JE, CYRILLIC CAPITAL LETTER JE */
	0x521f, /*  913, 0x6b9, U+0409, KEY_Cyrillic_LJE, CYRILLIC CAPITAL LETTER LJE */
	0x5252, /*  915, 0x6ba, U+040a, KEY_Cyrillic_NJE, CYRILLIC CAPITAL LETTER NJE */
	0x5285, /*  917, 0x6bb, U+040b, KEY_Serbian_TSHE, CYRILLIC CAPITAL LETTER TSHE */
	0x529f, /*  918, 0x6bc, U+040c, KEY_Macedonia_KJE, CYRILLIC CAPITAL LETTER KJE */
	0x52ba, /*  919, 0x6bd, U+0490, KEY_Ukrainian_GHE_WITH_UPTURN, CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
	0x52e1, /*  920, 0x6be, U+040e, KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */
	0x5302, /*  921, 0x6bf, U+040f, KEY_Cyrillic_DZHE, CYRILLIC CAPITAL LETTER DZHE */
	0x5336, /*  923, 0x6c0, U+044e, KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */
	0x534f, /*  924, 0x6c1, U+0430, KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */
	0x5367, /*  925, 0x6c2, U+0431, KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */
	0x5380, /*  926, 0x6c3, U+0446, KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */
	0x539a, /*  927, 0x6c4, U+0434, KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */
	0x53b3, /*  928, 0x6c5, U+0435, KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */
	0x53cc, /*  929, 0x6c6, U+0444, KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */
	0x53e5, /*  930, 0x6c7, U+0433, KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */
	0x53ff, /*  931, 0x6c8, U+0445, KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */
	0x5418, /*  932, 0x6c9, U+0438, KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */
	0x5430, /*  933, 0x6ca, U+0439, KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */
	0x544d, /*  934, 0x6cb, U+043a, KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */
	0x5466, /*  935, 0x6cc, U+043b, KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */
	0x547f, /*  936, 0x6cd, U+043c, KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */
	0x5498, /*  937, 0x6ce, U+043d, KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */
	0x54b1, /*  938, 0x6cf, U+043e, KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */
	0x54c9, /*  939, 0x6d0, U+043f, KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */
	0x54e2, /*  940, 0x6d1, U+044f, KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */
	0x54fb, /*  941, 0x6d2, U+0440, KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */
	0x5514, /*  942, 0x6d3, U+0441, KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */
	0x552d, /*  943, 0x6d4, U+0442, KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */
	0x5546, /*  944, 0x6d5, U+0443, KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */
	0x555e, /*  945, 0x6d6, U+0436, KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */
	0x5578, /*  946, 0x6d7, U+0432, KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */
	0x5591, /*  947, 0x6d8, U+044c, KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */
	0x55b0, /*  948, 0x6d9, U+044b, KEY_Cyrillic_yeru, CYRILLIC SMALL LETTER YERU */
	0x55cb, /*  949, 0x6da, U+0437, KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */
	0x55e4, /*  950, 0x6db, U+0448, KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */
	0x55fe, /*  951, 0x6dc, U+044d, KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */
	0x5616, /*  952, 0x6dd, U+0449, KEY_Cyrillic_shcha, CYRILLIC SMALL LETTER SHCHA */
	0x5632, /*  953, 0x6de, U+0447, KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */
	0x3905, /*  658, 0x1000174, U+0174, KEY_Wcircumflex, LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
	0x566b, /*  955, 0x6e0, U+042e, KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */
	0x391e, /*  659, 0x1000175, U+0175, KEY_wcircumflex, LATIN SMALL LETTER W WITH CIRCUMFLEX */
	0x569c, /*  957, 0x6e2, U+0411, KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */
	0x56b5, /*  958, 0x6e3, U+0426, KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */
	0x56cf, /*  959, 0x6e4, U+0414, KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */
	0x3950, /*  661, 0x1000177, U+0177, KEY_ycircumflex, LATIN SMALL LETTER Y WITH CIRCUMFLEX */
	0x5701, /*  961, 0x6e6, U+0424, KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */
	0x571a, /*  962, 0x6e7, U+0413, KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */
	0x5734, /*  963, 0x6e8, U+0425, KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */
	0x574d, /*  964, 0x6e9, U+0418, KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */
	0x5765, /*  965, 0x6ea, U+0419, KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */
	0x5782, /*  966, 0x6eb, U+041a, KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */
	0x579b, /*  967, 0x6ec, U+041b, KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */
	0x57b4, /*  968, 0x6ed, U+041c, KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */
	0x57cd, /*  969, 0x6ee, U+041d, KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */
	0x57e6, /*  970, 0x6ef, U+041e, KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */
	0x57fe, /*  971, 0x6f0, U+041f, KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */
	0x5817, /*  972, 0x6f1, U+042f, KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */
	0x5830, /*  973, 0x6f2, U+0420, KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */
	0x5849, /*  974, 0x6f3, U+0421, KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */
	0x5862, /*  975, 0x6f4, U+0422, KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */
	0x587b, /*  976, 0x6f5, U+0423, KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */
	0x5893, /*  977, 0x6f6, U+0416, KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */
	0x58ad, /*  978, 0x6f7, U+0412, KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */
	0x58c6, /*  979, 0x6f8, U+042c, KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */
	0x58e5, /*  980, 0x6f9, U+042b, KEY_Cyrillic_YERU, CYRILLIC CAPITAL LETTER YERU */
	0x5900, /*  981, 0x6fa, U+0417, KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */
	0x5919, /*  982, 0x6fb, U+0428, KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */
	0x5933, /*  983, 0x6fc, U+042d, KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */
	0x594b, /*  984, 0x6fd, U+0429, KEY_Cyrillic_SHCHA, CYRILLIC CAPITAL LETTER SHCHA */
	0x5967, /*  985, 0x6fe, U+0427, KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */
	0x5981, /*  986, 0x6ff, U+042a, KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe5d1, /* 2332, 0x1000ff6d, KEY_hpSystem */
	0x0000,
	0xab52, /* 1789, 0x100281a, U+281a, KEY_braille_dots_245, BRAILLE PATTERN DOTS-245 */
	0x0000,
	0xccbd, /* 2083, 0x1000dd1, U+0dd1, KEY_Sinh_aee2, SINHALA DIGA AEDA-PILLA */
	0x0000,
	0xccd4, /* 2084, 0x1000dd2, U+0dd2, KEY_Sinh_i2, SINHALA IS-PILLA */
	0x0000,
	0xcce9, /* 2085, 0x1000dd3, U+0dd3, KEY_Sinh_ii2, SINHALA DIGA IS-PILLA */
	0x0000,
	0xccff, /* 2086, 0x1000dd4, U+0dd4, KEY_Sinh_u2, SINHALA PAA-PILLA */
	0x0000,
	0x9976, /* 1610, 0x100018f, U+018f, KEY_SCHWA, LATIN CAPITAL LETTER SCHWA */
	0x0000,
	0xcd14, /* 2087, 0x1000dd6, U+0dd6, KEY_Sinh_uu2, SINHALA DIGA PAA-PILLA */
	0xe177, /* 2288, 0x1005ff10, KEY_SunF36, Labeled F11 */
	0xe50b, /* 2324, 0x1000ff71, KEY_hpDeleteLine */
	0x0000,
	0xcd2a, /* 2088, 0x1000dd8, U+0dd8, KEY_Sinh_ru2, SINHALA GAETTA-PILLA */
	0x8169, /* 1381, 0xea4, KEY_Hangul_Nieun */
	0xcd40, /* 2089, 0x1000dd9, U+0dd9, KEY_Sinh_e2, SINHALA KOMBUVA */
	0x0000,
	0xcd55, /* 2090, 0x1000dda, U+0dda, KEY_Sinh_ee2, SINHALA DIGA KOMBUVA */
	0x0000,
	0xcd6b, /* 2091, 0x1000ddb, U+0ddb, KEY_Sinh_ai2, SINHALA KOMBU DEKA */
	0x81a2, /* 1383, 0xea6, KEY_Hangul_NieunHieuh */
	0xcd81, /* 2092, 0x1000ddc, U+0ddc, KEY_Sinh_o2, SINHALA KOMBUVA HAA AELA-PILLA */
	0x0000,
	0xcd96, /* 2093, 0x1000ddd, U+0ddd, KEY_Sinh_oo2, SINHALA KOMBUVA HAA DIGA AELA-PILLA */
	0x0000,
	0xcdac, /* 2094, 0x1000dde, U+0dde, KEY_Sinh_au2, SINHALA KOMBUVA HAA GAYANUKITTA */
	0x0000,
	0xcdc2, /* 2095, 0x1000ddf, U+0ddf, KEY_Sinh_lu2, SINHALA GAYANUKITTA */
	0x0000,
	0xe73a, /* 2347, 0x1004ff04, KEY_osfPaste */
	0x0000,
	0x0000,
	0x0000,
	0x9961, /* 1609, 0x1000275, U+0275, KEY_obarred, LATIN SMALL LETTER BARRED O */
	0x0000,
	0xe750, /* 2348, 0x1004ff07, KEY_osfBackTab */
	0xe497, /* 2319, 0x1000fe7e, KEY_Dtilde */
	0xe768, /* 2349, 0x1004ff08, KEY_osfBackSpace */
	0x0000,
	0x98e4, /* 1603, 0x100019f, U+019f, KEY_Obarred, LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
	0x0000,
	0xa2aa, /* 1704, 0x10001a0, U+01a0, KEY_Ohorn, LATIN CAPITAL LETTER O WITH HORN */
	0x0000,
	0xa2bd, /* 1705, 0x10001a1, U+01a1, KEY_ohorn, LATIN SMALL LETTER O WITH HORN */
	0x0000,
	0x0000,
	0x0000,
	0x82b1, /* 1392, 0xeaf, KEY_Hangul_RieulPhieuf */
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
	0xea08, /* 2377, 0x1004ff69, KEY_osfCancel */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xea1f, /* 2378, 0x1004ff6a, KEY_osfHelp */
	0x0000,
	0x0000,
	0x0000,
	0xe10d, /* 2284, 0x1005ff02, KEY_SunFA_Tilde */
	0x0000,
	0x0000,
	0xa2f6, /* 1708, 0x10020a0, U+20a0, KEY_EcuSign, EURO-CURRENCY SIGN */
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
	0xe461, /* 2317, 0x1000fe27, KEY_Dacute_accent */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3b53, /*  684, 0x13bc, U+0152, KEY_OE, LATIN CAPITAL LIGATURE OE */
	0x3b63, /*  685, 0x13bd, U+0153, KEY_oe, LATIN SMALL LIGATURE OE */
	0x3b73, /*  686, 0x13be, U+0178, KEY_Ydiaeresis, LATIN CAPITAL LETTER Y WITH DIAERESIS */
	0x6698, /* 1111, 0x9df, KEY_blank */
	0x0000,
	0x66ab, /* 1112, 0x9e0, U+25c6, KEY_soliddiamond, BLACK DIAMOND */
	0x0000,
	0x0000,
	0x0000,
	0xe082, /* 2279, 0x1008fe23, KEY_XF86Prev_VMode, prev. video mode available */
	0x0000,
	0xa43c, /* 1722, 0x1002074, U+2074, KEY_foursuperior, SUPERSCRIPT FOUR */
	0x0000,
	0xa64c, /* 1742, 0x100220b, U+220b, KEY_containsas, CONTAINS AS MEMBER */
	0x0000,
	0xa470, /* 1724, 0x1002076, U+2076, KEY_sixsuperior, SUPERSCRIPT SIX */
	0x99ad, /* 1613, 0x1000292, U+0292, KEY_ezh, LATIN SMALL LETTER EZH */
	0x0000,
	0x0000,
	0x1d63, /*  316, 0xfd01, KEY_3270_Duplicate */
	0x1d7f, /*  317, 0xfd02, KEY_3270_FieldMark */
	0x1d9b, /*  318, 0xfd03, KEY_3270_Right2 */
	0x1db4, /*  319, 0xfd04, KEY_3270_Left2 */
	0x1dcc, /*  320, 0xfd05, KEY_3270_BackTab */
	0x1de6, /*  321, 0xfd06, KEY_3270_EraseEOF */
	0x1e01, /*  322, 0xfd07, KEY_3270_EraseInput */
	0x1e1e, /*  323, 0xfd08, KEY_3270_Reset */
	0x1e36, /*  324, 0xfd09, KEY_3270_Quit */
	0x1e4d, /*  325, 0xfd0a, KEY_3270_PA1 */
	0x1e63, /*  326, 0xfd0b, KEY_3270_PA2 */
	0x1e79, /*  327, 0xfd0c, KEY_3270_PA3 */
	0x1e8f, /*  328, 0xfd0d, KEY_3270_Test */
	0x1ea6, /*  329, 0xfd0e, KEY_3270_Attn */
	0x1ebd, /*  330, 0xfd0f, KEY_3270_CursorBlink */
	0x1edb, /*  331, 0xfd10, KEY_3270_AltCursor */
	0x1ef7, /*  332, 0xfd11, KEY_3270_KeyClick */
	0x1f12, /*  333, 0xfd12, KEY_3270_Jump */
	0x1f29, /*  334, 0xfd13, KEY_3270_Ident */
	0x1f41, /*  335, 0xfd14, KEY_3270_Rule */
	0x1f58, /*  336, 0xfd15, KEY_3270_Copy */
	0x1f6f, /*  337, 0xfd16, KEY_3270_Play */
	0x1f86, /*  338, 0xfd17, KEY_3270_Setup */
	0x1f9e, /*  339, 0xfd18, KEY_3270_Record */
	0x1fb7, /*  340, 0xfd19, KEY_3270_ChangeScreen */
	0x1fd6, /*  341, 0xfd1a, KEY_3270_DeleteWord */
	0x1ff3, /*  342, 0xfd1b, KEY_3270_ExSelect */
	0x200e, /*  343, 0xfd1c, KEY_3270_CursorSelect */
	0x202d, /*  344, 0xfd1d, KEY_3270_PrintScreen */
	0x204b, /*  345, 0xfd1e, KEY_3270_Enter */
	0x5a5c, /*  993, 0x7a7, U+038c, KEY_Greek_OMICRONaccent, GREEK CAPITAL LETTER OMICRON WITH TONOS */
	0x5a7d, /*  994, 0x7a8, U+038e, KEY_Greek_UPSILONaccent, GREEK CAPITAL LETTER UPSILON WITH TONOS */
	0x5a9e, /*  995, 0x7a9, U+03ab, KEY_Greek_UPSILONdieresis, GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
	0x0000,
	0x5ac1, /*  996, 0x7ab, U+038f, KEY_Greek_OMEGAaccent, GREEK CAPITAL LETTER OMEGA WITH TONOS */
	0x0000,
	0x0000,
	0x5ae0, /*  997, 0x7ae, U+0385, KEY_Greek_accentdieresis, GREEK DIALYTIKA TONOS */
	0x5b02, /*  998, 0x7af, U+2015, KEY_Greek_horizbar, HORIZONTAL BAR */
	0x0000,
	0x5b1e, /*  999, 0x7b1, U+03ac, KEY_Greek_alphaaccent, GREEK SMALL LETTER ALPHA WITH TONOS */
	0x5b3d, /* 1000, 0x7b2, U+03ad, KEY_Greek_epsilonaccent, GREEK SMALL LETTER EPSILON WITH TONOS */
	0x5b5e, /* 1001, 0x7b3, U+03ae, KEY_Greek_etaaccent, GREEK SMALL LETTER ETA WITH TONOS */
	0x5b7b, /* 1002, 0x7b4, U+03af, KEY_Greek_iotaaccent, GREEK SMALL LETTER IOTA WITH TONOS */
	0x5b99, /* 1003, 0x7b5, U+03ca, KEY_Greek_iotadieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA */
	0x5bb9, /* 1004, 0x7b6, U+0390, KEY_Greek_iotaaccentdieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
	0x5bdf, /* 1005, 0x7b7, U+03cc, KEY_Greek_omicronaccent, GREEK SMALL LETTER OMICRON WITH TONOS */
	0x5c00, /* 1006, 0x7b8, U+03cd, KEY_Greek_upsilonaccent, GREEK SMALL LETTER UPSILON WITH TONOS */
	0x5c21, /* 1007, 0x7b9, U+03cb, KEY_Greek_upsilondieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
	0x5c44, /* 1008, 0x7ba, U+03b0, KEY_Greek_upsilonaccentdieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
	0x5c6d, /* 1009, 0x7bb, U+03ce, KEY_Greek_omegaaccent, GREEK SMALL LETTER OMEGA WITH TONOS */
	0x0000,
	0x0000,
	0x0000,
	0x9a2d, /* 1619, 0x1001ea3, U+1ea3, KEY_ahook, LATIN SMALL LETTER A WITH HOOK ABOVE */
	0x0000,
	0x5c8c, /* 1010, 0x7c1, U+0391, KEY_Greek_ALPHA, GREEK CAPITAL LETTER ALPHA */
	0x5ca5, /* 1011, 0x7c2, U+0392, KEY_Greek_BETA, GREEK CAPITAL LETTER BETA */
	0x5cbd, /* 1012, 0x7c3, U+0393, KEY_Greek_GAMMA, GREEK CAPITAL LETTER GAMMA */
	0x5cd6, /* 1013, 0x7c4, U+0394, KEY_Greek_DELTA, GREEK CAPITAL LETTER DELTA */
	0x5cef, /* 1014, 0x7c5, U+0395, KEY_Greek_EPSILON, GREEK CAPITAL LETTER EPSILON */
	0x5d0a, /* 1015, 0x7c6, U+0396, KEY_Greek_ZETA, GREEK CAPITAL LETTER ZETA */
	0x5d22, /* 1016, 0x7c7, U+0397, KEY_Greek_ETA, GREEK CAPITAL LETTER ETA */
	0x5d39, /* 1017, 0x7c8, U+0398, KEY_Greek_THETA, GREEK CAPITAL LETTER THETA */
	0x5d52, /* 1018, 0x7c9, U+0399, KEY_Greek_IOTA, GREEK CAPITAL LETTER IOTA */
	0x5d6a, /* 1019, 0x7ca, U+039a, KEY_Greek_KAPPA, GREEK CAPITAL LETTER KAPPA */
	0x5d83, /* 1020, 0x7cb, U+039b, KEY_Greek_LAMDA, GREEK CAPITAL LETTER LAMDA */
	0x5db6, /* 1022, 0x7cc, U+039c, KEY_Greek_MU, GREEK CAPITAL LETTER MU */
	0x5dcc, /* 1023, 0x7cd, U+039d, KEY_Greek_NU, GREEK CAPITAL LETTER NU */
	0x5de2, /* 1024, 0x7ce, U+039e, KEY_Greek_XI, GREEK CAPITAL LETTER XI */
	0x5df8, /* 1025, 0x7cf, U+039f, KEY_Greek_OMICRON, GREEK CAPITAL LETTER OMICRON */
	0x5e13, /* 1026, 0x7d0, U+03a0, KEY_Greek_PI, GREEK CAPITAL LETTER PI */
	0x5e29, /* 1027, 0x7d1, U+03a1, KEY_Greek_RHO, GREEK CAPITAL LETTER RHO */
	0x5e40, /* 1028, 0x7d2, U+03a3, KEY_Greek_SIGMA, GREEK CAPITAL LETTER SIGMA */
	0xe68c, /* 2339, 0x100000af, KEY_hplira */
	0x5e59, /* 1029, 0x7d4, U+03a4, KEY_Greek_TAU, GREEK CAPITAL LETTER TAU */
	0x5e70, /* 1030, 0x7d5, U+03a5, KEY_Greek_UPSILON, GREEK CAPITAL LETTER UPSILON */
	0x5e8b, /* 1031, 0x7d6, U+03a6, KEY_Greek_PHI, GREEK CAPITAL LETTER PHI */
	0x5ea2, /* 1032, 0x7d7, U+03a7, KEY_Greek_CHI, GREEK CAPITAL LETTER CHI */
	0x5eb9, /* 1033, 0x7d8, U+03a8, KEY_Greek_PSI, GREEK CAPITAL LETTER PSI */
	0x5ed0, /* 1034, 0x7d9, U+03a9, KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */
	0x0000,
	0xc9eb, /* 2050, 0x1000da5, U+0da5, KEY_Sinh_jnya, SINHALA TAALUJA SANYOOGA NAASIKYAYA */
	0x0000,
	0xe97c, /* 2371, 0x1004ff5d, KEY_osfPrevField */
	0x0000,
	0x9b10, /* 1627, 0x1001eab, U+1eab, KEY_acircumflextilde, LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x0000,
	0x5ee9, /* 1035, 0x7e1, U+03b1, KEY_Greek_alpha, GREEK SMALL LETTER ALPHA */
	0x5f02, /* 1036, 0x7e2, U+03b2, KEY_Greek_beta, GREEK SMALL LETTER BETA */
	0x5f1a, /* 1037, 0x7e3, U+03b3, KEY_Greek_gamma, GREEK SMALL LETTER GAMMA */
	0x5f33, /* 1038, 0x7e4, U+03b4, KEY_Greek_delta, GREEK SMALL LETTER DELTA */
	0x5f4c, /* 1039, 0x7e5, U+03b5, KEY_Greek_epsilon, GREEK SMALL LETTER EPSILON */
	0x5f67, /* 1040, 0x7e6, U+03b6, KEY_Greek_zeta, GREEK SMALL LETTER ZETA */
	0x5f7f, /* 1041, 0x7e7, U+03b7, KEY_Greek_eta, GREEK SMALL LETTER ETA */
	0x5f96, /* 1042, 0x7e8, U+03b8, KEY_Greek_theta, GREEK SMALL LETTER THETA */
	0x5faf, /* 1043, 0x7e9, U+03b9, KEY_Greek_iota, GREEK SMALL LETTER IOTA */
	0x5fc7, /* 1044, 0x7ea, U+03ba, KEY_Greek_kappa, GREEK SMALL LETTER KAPPA */
	0x5fe0, /* 1045, 0x7eb, U+03bb, KEY_Greek_lamda, GREEK SMALL LETTER LAMDA */
	0x6013, /* 1047, 0x7ec, U+03bc, KEY_Greek_mu, GREEK SMALL LETTER MU */
	0x6029, /* 1048, 0x7ed, U+03bd, KEY_Greek_nu, GREEK SMALL LETTER NU */
	0x603f, /* 1049, 0x7ee, U+03be, KEY_Greek_xi, GREEK SMALL LETTER XI */
	0x6055, /* 1050, 0x7ef, U+03bf, KEY_Greek_omicron, GREEK SMALL LETTER OMICRON */
	0x6070, /* 1051, 0x7f0, U+03c0, KEY_Greek_pi, GREEK SMALL LETTER PI */
	0x6086, /* 1052, 0x7f1, U+03c1, KEY_Greek_rho, GREEK SMALL LETTER RHO */
	0x609d, /* 1053, 0x7f2, U+03c3, KEY_Greek_sigma, GREEK SMALL LETTER SIGMA */
	0x60b6, /* 1054, 0x7f3, U+03c2, KEY_Greek_finalsmallsigma, GREEK SMALL LETTER FINAL SIGMA */
	0x60d9, /* 1055, 0x7f4, U+03c4, KEY_Greek_tau, GREEK SMALL LETTER TAU */
	0x60f0, /* 1056, 0x7f5, U+03c5, KEY_Greek_upsilon, GREEK SMALL LETTER UPSILON */
	0x610b, /* 1057, 0x7f6, U+03c6, KEY_Greek_phi, GREEK SMALL LETTER PHI */
	0x6122, /* 1058, 0x7f7, U+03c7, KEY_Greek_chi, GREEK SMALL LETTER CHI */
	0x6139, /* 1059, 0x7f8, U+03c8, KEY_Greek_psi, GREEK SMALL LETTER PSI */
	0x6150, /* 1060, 0x7f9, U+03c9, KEY_Greek_omega, GREEK SMALL LETTER OMEGA */
	0xe13f, /* 2286, 0x1005ff04, KEY_SunFA_Diaeresis */
	0xe15c, /* 2287, 0x1005ff05, KEY_SunFA_Cedilla */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd1a1, /* 2131, 0x1008ff29, KEY_XF86Refresh, Refresh the page */
	0x0000,
	0xea34, /* 2379, 0x1004ff71, KEY_osfSelectAll */
	0x89fa, /* 1459, 0xef2, KEY_Hangul_PanSios */
	0xe18b, /* 2289, 0x1005ff11, KEY_SunF37, Labeled F12 */
	0x0000,
	0xea6a, /* 2381, 0x1004ff73, KEY_osfReselect */
	0xd1ba, /* 2132, 0x1008ff2a, KEY_XF86PowerOff, Power off system entirely */
	0xca9f, /* 2058, 0x1000dad, U+0dad, KEY_Sinh_tha, SINHALA TAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd1d4, /* 2133, 0x1008ff2b, KEY_XF86WakeUp, Wake up system from sleep */
	0xe6b7, /* 2341, 0x100000ee, KEY_hpYdiaeresis */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe6e3, /* 2343, 0x100000f6, KEY_hplongminus */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xb7f1, /* 1894, 0x1002883, U+2883, KEY_braille_dots_128, BRAILLE PATTERN DOTS-128 */
	0xa40c, /* 1720, 0x20ac, U+20ac, KEY_EuroSign, EURO SIGN */
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
	0x8b20, /* 1468, 0xeff, KEY_Korean_Won, (U+20A9 WON SIGN) */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x941b, /* 1555, 0x1000585, U+0585, KEY_Armenian_o, ARMENIAN SMALL LETTER OH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd267, /* 2139, 0x1008ff31, KEY_XF86AudioPause, Pause audio playing */
	0x0000,
	0xb15d, /* 1840, 0x100284d, U+284d, KEY_braille_dots_1347, BRAILLE PATTERN DOTS-1347 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xad6f, /* 1807, 0x100282c, U+282c, KEY_braille_dots_346, BRAILLE PATTERN DOTS-346 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcee4, /* 2105, 0x1008ff07, KEY_XF86MonBrightnessCycle, Monitor/panel brightness */
	0x0000,
	0xde10, /* 2257, 0x1008ffb1, KEY_XF86TouchpadOff, The touchpad got switched off */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe19f, /* 2290, 0x1005ff60, KEY_SunSys_Req */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe818, /* 2356, 0x1004ff41, KEY_osfPageUp */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd308, /* 2145, 0x1008ff37, KEY_XF86History, Show history of web surfing */
	0xcf08, /* 2106, 0x1008ff10, KEY_XF86Standby, System into standby mode */
	0xe2a0, /* 2301, 0x1005ff71, KEY_SunFront */
	0xe2b6, /* 2302, 0x1005ff72, KEY_SunCopy */
	0xe2cb, /* 2303, 0x1005ff73, KEY_SunOpen */
	0xe2e0, /* 2304, 0x1005ff74, KEY_SunPaste */
	0xdb38, /* 2229, 0x1008ff8f, KEY_XF86WebCam, Launch web camera app. */
	0xe30a, /* 2306, 0x1005ff76, KEY_SunPowerSwitch */
	0xe326, /* 2307, 0x1005ff77, KEY_SunAudioLowerVolume */
	0xe347, /* 2308, 0x1005ff78, KEY_SunAudioMute */
	0xe361, /* 2309, 0x1005ff79, KEY_SunAudioRaiseVolume */
	0xb8ff, /* 1903, 0x100288c, U+288c, KEY_braille_dots_348, BRAILLE PATTERN DOTS-348 */
	0xe39f, /* 2311, 0x1005ff7b, KEY_SunVideoLowerBrightness */
	0xe3c4, /* 2312, 0x1005ff7c, KEY_SunVideoRaiseBrightness */
	0xe3e9, /* 2313, 0x1005ff7d, KEY_SunPowerSwitchShift */
	0x0000,
	0xa8e7, /* 1768, 0x1002805, U+2805, KEY_braille_dots_13, BRAILLE PATTERN DOTS-13 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcfd1, /* 2113, 0x1008ff17, KEY_XF86AudioNext, Next track */
	0x0000,
	0xb79b, /* 1891, 0x1002880, U+2880, KEY_braille_dots_8, BRAILLE PATTERN DOTS-8 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd033, /* 2117, 0x1008ff1b, KEY_XF86Search, Search */
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
	0xc912, /* 2040, 0x1000d9b, U+0d9b, KEY_Sinh_kha, SINHALA MAHA. KAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x6183, /* 1062, 0x8a1, U+23b7, KEY_leftradical, RADICAL SYMBOL BOTTOM */
	0x619c, /* 1063, 0x8a2, KEY_topleftradical, (U+250C BOX DRAWINGS LIGHT DOWN AND RIGHT) */
	0x61b8, /* 1064, 0x8a3, KEY_horizconnector, (U+2500 BOX DRAWINGS LIGHT HORIZONTAL) */
	0x61d4, /* 1065, 0x8a4, U+2320, KEY_topintegral, TOP HALF INTEGRAL */
	0x61ed, /* 1066, 0x8a5, U+2321, KEY_botintegral, BOTTOM HALF INTEGRAL */
	0x6206, /* 1067, 0x8a6, KEY_vertconnector, (U+2502 BOX DRAWINGS LIGHT VERTICAL) */
	0x6221, /* 1068, 0x8a7, U+23a1, KEY_topleftsqbracket, LEFT SQUARE BRACKET UPPER CORNER */
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
	0x6453, /* 1086, 0x8bd, U+2260, KEY_notequal, NOT EQUAL TO */
	0x6469, /* 1087, 0x8be, U+2265, KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */
	0x6487, /* 1088, 0x8bf, U+222b, KEY_integral, INTEGRAL */
	0x649d, /* 1089, 0x8c0, U+2234, KEY_therefore, THEREFORE */
	0x64b4, /* 1090, 0x8c1, U+221d, KEY_variation, PROPORTIONAL TO */
	0x64cb, /* 1091, 0x8c2, U+221e, KEY_infinity, INFINITY */
	0xd235, /* 2137, 0x1008ff2f, KEY_XF86Sleep, Put system to sleep */
	0x0000,
	0x64e1, /* 1092, 0x8c5, U+2207, KEY_nabla, NABLA */
	0x0000,
	0x0000,
	0x64f4, /* 1093, 0x8c8, U+223c, KEY_approximate, TILDE OPERATOR */
	0x650d, /* 1094, 0x8c9, U+2243, KEY_similarequal, ASYMPTOTICALLY EQUAL TO */
	0x0000,
	0xe893, /* 2361, 0x1004ff51, KEY_osfLeft */
	0x0000,
	0x6527, /* 1095, 0x8cd, U+21d4, KEY_ifonlyif, LEFT RIGHT DOUBLE ARROW */
	0x653d, /* 1096, 0x8ce, U+21d2, KEY_implies, RIGHTWARDS DOUBLE ARROW */
	0x6552, /* 1097, 0x8cf, U+2261, KEY_identical, IDENTICAL TO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xd2d7, /* 2143, 0x1008ff35, KEY_XF86LightBulb, Light bulb keys exist */
	0x6569, /* 1098, 0x8d6, U+221a, KEY_radical, SQUARE ROOT */
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
	0x1834, /*  269, 0xfe70, KEY_AccessX_Enable */
	0x1850, /*  270, 0xfe71, KEY_AccessX_Feedback_Enable */
	0x1875, /*  271, 0xfe72, KEY_RepeatKeys_Enable */
	0x1894, /*  272, 0xfe73, KEY_SlowKeys_Enable */
	0x18b1, /*  273, 0xfe74, KEY_BounceKeys_Enable */
	0x18d0, /*  274, 0xfe75, KEY_StickyKeys_Enable */
	0x18ef, /*  275, 0xfe76, KEY_MouseKeys_Enable */
	0x190d, /*  276, 0xfe77, KEY_MouseKeys_Accel_Enable */
	0x1931, /*  277, 0xfe78, KEY_Overlay1_Enable */
	0x194e, /*  278, 0xfe79, KEY_Overlay2_Enable */
	0x196b, /*  279, 0xfe7a, KEY_AudibleBell_Enable */
	0xe918, /* 2367, 0x1004ff59, KEY_osfEndData */
	0xb7d4, /* 1893, 0x1002882, U+2882, KEY_braille_dots_28, BRAILLE PATTERN DOTS-28 */
	0xad14, /* 1804, 0x1002829, U+2829, KEY_braille_dots_146, BRAILLE PATTERN DOTS-146 */
	0x0000,
	0x0000,
	0x1673, /*  251, 0xfe80, KEY_dead_a */
	0x1687, /*  252, 0xfe81, KEY_dead_A */
	0x169b, /*  253, 0xfe82, KEY_dead_e */
	0x16af, /*  254, 0xfe83, KEY_dead_E */
	0x16c3, /*  255, 0xfe84, KEY_dead_i */
	0x16d7, /*  256, 0xfe85, KEY_dead_I */
	0x16eb, /*  257, 0xfe86, KEY_dead_o */
	0x16ff, /*  258, 0xfe87, KEY_dead_O */
	0x1713, /*  259, 0xfe88, KEY_dead_u */
	0x1727, /*  260, 0xfe89, KEY_dead_U */
	0x173b, /*  261, 0xfe8a, KEY_dead_small_schwa */
	0x1759, /*  262, 0xfe8b, KEY_dead_capital_schwa */
	0x1779, /*  263, 0xfe8c, KEY_dead_greek */
	0x0000,
	0x0000,
	0x0000,
	0x15ec, /*  247, 0xfe90, KEY_dead_lowline */
	0x1606, /*  248, 0xfe91, KEY_dead_aboveverticalline */
	0x162a, /*  249, 0xfe92, KEY_dead_belowverticalline */
	0x164e, /*  250, 0xfe93, KEY_dead_longsolidusoverlay */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xeab2, /* 2384, 0x1004ffff, KEY_osfDelete */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x1d00, /*  310, 0xfea0, KEY_ch */
	0x1d10, /*  311, 0xfea1, KEY_Ch */
	0x1d20, /*  312, 0xfea2, KEY_CH */
	0x1d30, /*  313, 0xfea3, KEY_c_h */
	0x1d41, /*  314, 0xfea4, KEY_C_h */
	0x1d52, /*  315, 0xfea5, KEY_C_H */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe726, /* 2346, 0x1004ff03, KEY_osfCut */
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
	0xe5e7, /* 2333, 0x1000ff6e, KEY_hpUser */
	0x0000,
	0x0000,
	0x0000,
	0x9893, /* 1599, 0x100012c, U+012c, KEY_Ibreve, LATIN CAPITAL LETTER I WITH BREVE */
	0x9910, /* 1605, 0x100012d, U+012d, KEY_ibreve, LATIN SMALL LETTER I WITH BREVE */
	0x0000,
	0xe4d8, /* 2322, 0x1000ff6f, KEY_hpClearLine */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe4f1, /* 2323, 0x1000ff70, KEY_hpInsertLine */
	0x0000,
	0x0000,
	0x0000,
	0x1791, /*  264, 0xfed0, KEY_First_Virtual_Screen */
	0x17b3, /*  265, 0xfed1, KEY_Prev_Virtual_Screen */
	0x17d4, /*  266, 0xfed2, KEY_Next_Virtual_Screen */
	0xc770, /* 2020, 0x1000d83, U+0d83, KEY_Sinh_h2, SINHALA VISARGAYA */
	0x17f5, /*  267, 0xfed4, KEY_Last_Virtual_Screen */
	0x1816, /*  268, 0xfed5, KEY_Terminate_Server */
	0xc799, /* 2022, 0x1000d86, U+0d86, KEY_Sinh_aa, SINHALA AAYANNA */
	0xc7ae, /* 2023, 0x1000d87, U+0d87, KEY_Sinh_ae, SINHALA AEYANNA */
	0xa892, /* 1765, 0x1002802, U+2802, KEY_braille_dots_2, BRAILLE PATTERN DOTS-2 */
	0xc7d9, /* 2025, 0x1000d89, U+0d89, KEY_Sinh_i, SINHALA IYANNA */
	0xc7ed, /* 2026, 0x1000d8a, U+0d8a, KEY_Sinh_ii, SINHALA IIYANNA */
	0xb758, /* 1889, 0x100287e, U+287e, KEY_braille_dots_234567, BRAILLE PATTERN DOTS-234567 */
	0xc816, /* 2028, 0x1000d8c, U+0d8c, KEY_Sinh_uu, SINHALA UUYANNA */
	0xc82b, /* 2029, 0x1000d8d, U+0d8d, KEY_Sinh_ri, SINHALA IRUYANNA */
	0xc840, /* 2030, 0x1000d8e, U+0d8e, KEY_Sinh_rii, SINHALA IRUUYANNA */
	0xc856, /* 2031, 0x1000d8f, U+0d8f, KEY_Sinh_lu, SINHALA ILUYANNA */
	0x198b, /*  280, 0xfee0, KEY_Pointer_Left */
	0x19a5, /*  281, 0xfee1, KEY_Pointer_Right */
	0x19c0, /*  282, 0xfee2, KEY_Pointer_Up */
	0x19d8, /*  283, 0xfee3, KEY_Pointer_Down */
	0x19f2, /*  284, 0xfee4, KEY_Pointer_UpLeft */
	0x1a0e, /*  285, 0xfee5, KEY_Pointer_UpRight */
	0x1a2b, /*  286, 0xfee6, KEY_Pointer_DownLeft */
	0x1a49, /*  287, 0xfee7, KEY_Pointer_DownRight */
	0x1a68, /*  288, 0xfee8, KEY_Pointer_Button_Dflt */
	0x1a89, /*  289, 0xfee9, KEY_Pointer_Button1 */
	0x1aa6, /*  290, 0xfeea, KEY_Pointer_Button2 */
	0x1ac3, /*  291, 0xfeeb, KEY_Pointer_Button3 */
	0x1ae0, /*  292, 0xfeec, KEY_Pointer_Button4 */
	0x1afd, /*  293, 0xfeed, KEY_Pointer_Button5 */
	0x1b1a, /*  294, 0xfeee, KEY_Pointer_DblClick_Dflt */
	0x1b3d, /*  295, 0xfeef, KEY_Pointer_DblClick1 */
	0x1b5c, /*  296, 0xfef0, KEY_Pointer_DblClick2 */
	0x1b7b, /*  297, 0xfef1, KEY_Pointer_DblClick3 */
	0x1b9a, /*  298, 0xfef2, KEY_Pointer_DblClick4 */
	0x1bb9, /*  299, 0xfef3, KEY_Pointer_DblClick5 */
	0x1bd8, /*  300, 0xfef4, KEY_Pointer_Drag_Dflt */
	0x1bf7, /*  301, 0xfef5, KEY_Pointer_Drag1 */
	0x1c12, /*  302, 0xfef6, KEY_Pointer_Drag2 */
	0x1c2d, /*  303, 0xfef7, KEY_Pointer_Drag3 */
	0x1c48, /*  304, 0xfef8, KEY_Pointer_Drag4 */
	0x1c7e, /*  306, 0xfef9, KEY_Pointer_EnableKeys */
	0x1c9e, /*  307, 0xfefa, KEY_Pointer_Accelerate */
	0x1cbe, /*  308, 0xfefb, KEY_Pointer_DfltBtnNext */
	0x1cdf, /*  309, 0xfefc, KEY_Pointer_DfltBtnPrev */
	0x1c63, /*  305, 0xfefd, KEY_Pointer_Drag5 */
	0xcab5, /* 2059, 0x1000dae, U+0dae, KEY_Sinh_thha, SINHALA MAHA. TAYANNA */
	0xcacc, /* 2060, 0x1000daf, U+0daf, KEY_Sinh_dha, SINHALA DAYANNA */
	0xcae2, /* 2061, 0x1000db0, U+0db0, KEY_Sinh_dhha, SINHALA MAHA. DAYANNA */
	0xcaf9, /* 2062, 0x1000db1, U+0db1, KEY_Sinh_na, SINHALA DANTAJA NAYANNA */
	0x0000,
	0xcb0e, /* 2063, 0x1000db3, U+0db3, KEY_Sinh_ndha, SINHALA SANYAKA DAYANNA */
	0xcb25, /* 2064, 0x1000db4, U+0db4, KEY_Sinh_pa, SINHALA PAYANNA */
	0xcb3a, /* 2065, 0x1000db5, U+0db5, KEY_Sinh_pha, SINHALA MAHA. PAYANNA */
	0xcb50, /* 2066, 0x1000db6, U+0db6, KEY_Sinh_ba, SINHALA BAYANNA */
	0xcb65, /* 2067, 0x1000db7, U+0db7, KEY_Sinh_bha, SINHALA MAHA. BAYANNA */
	0x0019, /*    1, 0xff08, KEY_BackSpace, Back space, back char */
	0x0030, /*    2, 0xff09, KEY_Tab */
	0x0041, /*    3, 0xff0a, KEY_Linefeed, Linefeed, LF */
	0x0057, /*    4, 0xff0b, KEY_Clear */
	0x3937, /*  660, 0x1000176, U+0176, KEY_Ycircumflex, LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
	0x006a, /*    5, 0xff0d, KEY_Return, Return, enter */
	0x0000,
	0x0000,
	0xcbe5, /* 2073, 0x1000dc0, U+0dc0, KEY_Sinh_va, SINHALA VAYANNA */
	0xcbfa, /* 2074, 0x1000dc1, U+0dc1, KEY_Sinh_sha, SINHALA TAALUJA SAYANNA */
	0xcc10, /* 2075, 0x1000dc2, U+0dc2, KEY_Sinh_ssha, SINHALA MUURDHAJA SAYANNA */
	0x007e, /*    6, 0xff13, KEY_Pause, Pause, hold */
	0x0091, /*    7, 0xff14, KEY_Scroll_Lock */
	0x00aa, /*    8, 0xff15, KEY_Sys_Req */
	0xcc67, /* 2079, 0x1000dc6, U+0dc6, KEY_Sinh_fa, SINHALA FAYANNA */
	0xd04b, /* 2118, 0x1008ff1c, KEY_XF86AudioRecord, Record audio application */
	0x99ec, /* 1616, 0x1001ea0, U+1ea0, KEY_Abelowdot, LATIN CAPITAL LETTER A WITH DOT BELOW */
	0x0000,
	0xcc7c, /* 2080, 0x1000dca, U+0dca, KEY_Sinh_al, SINHALA AL-LAKUNA */
	0x00bf, /*    9, 0xff1b, KEY_Escape */
	0x0000,
	0xe5bc, /* 2331, 0x1000ff6c, KEY_hpReset */
	0x0000,
	0xcc91, /* 2081, 0x1000dcf, U+0dcf, KEY_Sinh_aa2, SINHALA AELA-PILLA */
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
	0x7f46, /* 1362, 0xff31, KEY_Hangul, Hangul start/stop(toggle) */
	0x7f5a, /* 1363, 0xff32, KEY_Hangul_Start, Hangul start */
	0x7f74, /* 1364, 0xff33, KEY_Hangul_End, Hangul end, English start */
	0x7f8c, /* 1365, 0xff34, KEY_Hangul_Hanja, Start Hangul->Hanja Conversion */
	0x7fa6, /* 1366, 0xff35, KEY_Hangul_Jamo, Hangul Jamo mode */
	0x7fbf, /* 1367, 0xff36, KEY_Hangul_Romaja, Hangul Romaja mode */
	0x00fe, /*   12, 0xff37, KEY_Codeinput */
	0x7ff8, /* 1369, 0xff38, KEY_Hangul_Jeonja, Jeonja mode */
	0x8013, /* 1370, 0xff39, KEY_Hangul_Banja, Banja mode */
	0x802d, /* 1371, 0xff3a, KEY_Hangul_PreHanja, Pre Hanja conversion */
	0x804a, /* 1372, 0xff3b, KEY_Hangul_PostHanja, Post Hanja conversion */
	0x0115, /*   13, 0xff3c, KEY_SingleCandidate */
	0x0132, /*   14, 0xff3d, KEY_MultipleCandidate */
	0x0151, /*   15, 0xff3e, KEY_PreviousCandidate */
	0x80d8, /* 1376, 0xff3f, KEY_Hangul_Special, Special symbols */
	0x0000,
	0x0000,
	0xcdd8, /* 2096, 0x1000df2, U+0df2, KEY_Sinh_ruu2, SINHALA DIGA GAETTA-PILLA */
	0xcdef, /* 2097, 0x1000df3, U+0df3, KEY_Sinh_luu2, SINHALA DIGA GAYANUKITTA */
	0xce06, /* 2098, 0x1000df4, U+0df4, KEY_Sinh_kunddaliya, SINHALA KUNDDALIYA */
	0xa2d0, /* 1706, 0x10001af, U+01af, KEY_Uhorn, LATIN CAPITAL LETTER U WITH HORN */
	0xa2e3, /* 1707, 0x10001b0, U+01b0, KEY_uhorn, LATIN SMALL LETTER U WITH HORN */
	0xe798, /* 2351, 0x1004ff1b, KEY_osfEscape */
	0x0000,
	0xdaaa, /* 2223, 0x1008ff89, KEY_XF86Word, Launch word processor */
	0x0000,
	0x98a7, /* 1600, 0x10001b5, U+01b5, KEY_Zstroke, LATIN CAPITAL LETTER Z WITH STROKE */
	0x9924, /* 1606, 0x10001b6, U+01b6, KEY_zstroke, LATIN SMALL LETTER Z WITH STROKE */
	0x999c, /* 1612, 0x10001b7, U+01b7, KEY_EZH, LATIN CAPITAL LETTER EZH */
	0x0000,
	0xdad6, /* 2225, 0x1008ff8b, KEY_XF86ZoomIn, zoom in view, map, etc. */
	0x033b, /*   36, 0xff50, KEY_Home */
	0x034d, /*   37, 0xff51, KEY_Left, Move left, left arrow */
	0x035f, /*   38, 0xff52, KEY_Up, Move up, up arrow */
	0x036f, /*   39, 0xff53, KEY_Right, Move right, right arrow */
	0x0382, /*   40, 0xff54, KEY_Down, Move down, down arrow */
	0x0394, /*   41, 0xff55, KEY_Prior, Prior, previous */
	0x03bc, /*   43, 0xff56, KEY_Next, Next */
	0x03e5, /*   45, 0xff57, KEY_End, EOL */
	0x03f6, /*   46, 0xff58, KEY_Begin, BOL */
	0x66c5, /* 1113, 0x9e1, U+2592, KEY_checkerboard, MEDIUM SHADE */
	0x66df, /* 1114, 0x9e2, U+2409, KEY_ht, SYMBOL FOR HORIZONTAL TABULATION */
	0x66ef, /* 1115, 0x9e3, U+240c, KEY_ff, SYMBOL FOR FORM FEED */
	0x66ff, /* 1116, 0x9e4, U+240d, KEY_cr, SYMBOL FOR CARRIAGE RETURN */
	0x670f, /* 1117, 0x9e5, U+240a, KEY_lf, SYMBOL FOR LINE FEED */
	0xe7c7, /* 2353, 0x1004ff32, KEY_osfPrimaryPaste */
	0xadcb, /* 1810, 0x100282f, U+282f, KEY_braille_dots_12346, BRAILLE PATTERN DOTS-12346 */
	0x0409, /*   47, 0xff60, KEY_Select, Select, mark */
	0x041d, /*   48, 0xff61, KEY_Print */
	0x0430, /*   49, 0xff62, KEY_Execute, Execute, run, do */
	0x0445, /*   50, 0xff63, KEY_Insert, Insert, insert here */
	0x6776, /* 1122, 0x9ec, U+250c, KEY_upleftcorner, BOX DRAWINGS LIGHT DOWN AND RIGHT */
	0x0459, /*   51, 0xff65, KEY_Undo */
	0x046b, /*   52, 0xff66, KEY_Redo, Redo, again */
	0x047d, /*   53, 0xff67, KEY_Menu */
	0x048f, /*   54, 0xff68, KEY_Find, Find, search */
	0x04a1, /*   55, 0xff69, KEY_Cancel, Cancel, stop, abort, exit */
	0x04b5, /*   56, 0xff6a, KEY_Help, Help */
	0x04c7, /*   57, 0xff6b, KEY_Break */
	0x6852, /* 1130, 0x9f4, U+251c, KEY_leftt, BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
	0x6865, /* 1131, 0x9f5, U+2524, KEY_rightt, BOX DRAWINGS LIGHT VERTICAL AND LEFT */
	0x6879, /* 1132, 0x9f6, U+2534, KEY_bott, BOX DRAWINGS LIGHT UP AND HORIZONTAL */
	0x688b, /* 1133, 0x9f7, U+252c, KEY_topt, BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
	0x689d, /* 1134, 0x9f8, U+2502, KEY_vertbar, BOX DRAWINGS LIGHT VERTICAL */
	0xe87b, /* 2360, 0x1004ff45, KEY_osfMenuBar */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xdc38, /* 2239, 0x1008ff99, KEY_XF86AudioRandomPlay, toggle shuffle mode */
	0x0000,
	0x0000,
	0x98bc, /* 1601, 0x10001e6, U+01e6, KEY_Gcaron, LATIN CAPITAL LETTER G WITH CARON */
	0x9939, /* 1607, 0x10001e7, U+01e7, KEY_gcaron, LATIN SMALL LETTER G WITH CARON */
	0x04da, /*   58, 0xff7e, KEY_Mode_switch, Character set switch */
	0x050e, /*   60, 0xff7f, KEY_Num_Lock */
	0x0524, /*   61, 0xff80, KEY_KP_Space, Space */
	0x0000,
	0x0000,
	0xd13f, /* 2127, 0x1008ff25, KEY_XF86RockerEnter, and let you press them */
	0xe8fe, /* 2366, 0x1004ff58, KEY_osfBeginLine */
	0xdcb0, /* 2243, 0x1008ff9d, KEY_XF86FrameBack, video: go one frame back */
	0xe930, /* 2368, 0x1004ff5a, KEY_osfBeginData */
	0xe94a, /* 2369, 0x1004ff5b, KEY_osfPrevMenu */
	0xe963, /* 2370, 0x1004ff5c, KEY_osfNextMenu */
	0x053a, /*   62, 0xff89, KEY_KP_Tab */
	0xe996, /* 2372, 0x1004ff5e, KEY_osfNextField */
	0xdce9, /* 2245, 0x1008ff9f, KEY_XF86Time, display, or shows an entry for time seeking */
	0xe9b0, /* 2373, 0x1004ff60, KEY_osfSelect */
	0x054e, /*   63, 0xff8d, KEY_KP_Enter, Enter */
	0x0000,
	0xe9c7, /* 2374, 0x1004ff63, KEY_osfInsert */
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
	0xea83, /* 2382, 0x1004ff74, KEY_osfExtend */
	0x0000,
	0x0000,
	0xdda0, /* 2253, 0x1008ffa7, KEY_XF86Suspend, Sleep to RAM */
	0xea9a, /* 2383, 0x1004ff78, KEY_osfRestore */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xddd4, /* 2255, 0x1008ffa9, KEY_XF86TouchpadToggle, Toggle between touchpad/trackstick */
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
	0x9989, /* 1611, 0x1000259, U+0259, KEY_schwa, LATIN SMALL LETTER SCHWA */
	0x0000,
	0xa74c, /* 1753, 0xfff1, KEY_braille_dot_1 */
	0xa767, /* 1754, 0xfff2, KEY_braille_dot_2 */
	0xa782, /* 1755, 0xfff3, KEY_braille_dot_3 */
	0xa79d, /* 1756, 0xfff4, KEY_braille_dot_4 */
	0xa7b8, /* 1757, 0xfff5, KEY_braille_dot_5 */
	0xa7d3, /* 1758, 0xfff6, KEY_braille_dot_6 */
	0xa7ee, /* 1759, 0xfff7, KEY_braille_dot_7 */
	0xa809, /* 1760, 0xfff8, KEY_braille_dot_8 */
	0xa824, /* 1761, 0xfff9, KEY_braille_dot_9 */
	0xa83f, /* 1762, 0xfffa, KEY_braille_dot_10 */
	0x0000,
	0x0000,
	0xb8a4, /* 1900, 0x1002889, U+2889, KEY_braille_dots_148, BRAILLE PATTERN DOTS-148 */
	0x0000,
	0x00d3, /*   10, 0xffff, KEY_Delete, Delete, rubout */
	0x0000,
	0xb8c2, /* 1901, 0x100288a, U+288a, KEY_braille_dots_248, BRAILLE PATTERN DOTS-248 */
	0xc97f, /* 2045, 0x1000da0, U+0da0, KEY_Sinh_ca, SINHALA CAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc994, /* 2046, 0x1000da1, U+0da1, KEY_Sinh_cha, SINHALA MAHA. CAYANNA */
	0x0000,
	0xabeb, /* 1794, 0x100281f, U+281f, KEY_braille_dots_12345, BRAILLE PATTERN DOTS-12345 */
	0x0000,
	0x88fb, /* 1451, 0xeea, KEY_Hangul_J_Cieuc */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xac61, /* 1798, 0x1002823, U+2823, KEY_braille_dots_126, BRAILLE PATTERN DOTS-126 */
	0x0000,
	0x0000,
	0x0000,
	0xb95b, /* 1906, 0x100288f, U+288f, KEY_braille_dots_12348, BRAILLE PATTERN DOTS-12348 */
	0x0000,
	0x59a0, /*  987, 0x7a1, U+0386, KEY_Greek_ALPHAaccent, GREEK CAPITAL LETTER ALPHA WITH TONOS */
	0x0000,
	0x68b2, /* 1135, 0xaa1, U+2003, KEY_emspace, EM SPACE */
	0x68c7, /* 1136, 0xaa2, U+2002, KEY_enspace, EN SPACE */
	0x68dc, /* 1137, 0xaa3, U+2004, KEY_em3space, THREE-PER-EM SPACE */
	0x68f2, /* 1138, 0xaa4, U+2005, KEY_em4space, FOUR-PER-EM SPACE */
	0x6908, /* 1139, 0xaa5, U+2007, KEY_digitspace, FIGURE SPACE */
	0x6920, /* 1140, 0xaa6, U+2008, KEY_punctspace, PUNCTUATION SPACE */
	0x6938, /* 1141, 0xaa7, U+2009, KEY_thinspace, THIN SPACE */
	0x694f, /* 1142, 0xaa8, U+200a, KEY_hairspace, HAIR SPACE */
	0x6966, /* 1143, 0xaa9, U+2014, KEY_emdash, EM DASH */
	0x697a, /* 1144, 0xaaa, U+2013, KEY_endash, EN DASH */
	0xa632, /* 1741, 0x1002209, U+2209, KEY_notelementof, NOT AN ELEMENT OF */
	0x698e, /* 1145, 0xaac, KEY_signifblank, (U+2423 OPEN BOX) */
	0xca18, /* 2052, 0x1000da7, U+0da7, KEY_Sinh_tta, SINHALA TTAYANNA */
	0x69a7, /* 1146, 0xaae, U+2026, KEY_ellipsis, HORIZONTAL ELLIPSIS */
	0x69bd, /* 1147, 0xaaf, U+2025, KEY_doubbaselinedot, TWO DOT LEADER */
	0x69da, /* 1148, 0xab0, U+2153, KEY_onethird, VULGAR FRACTION ONE THIRD */
	0x69f0, /* 1149, 0xab1, U+2154, KEY_twothirds, VULGAR FRACTION TWO THIRDS */
	0x6a07, /* 1150, 0xab2, U+2155, KEY_onefifth, VULGAR FRACTION ONE FIFTH */
	0x6a1d, /* 1151, 0xab3, U+2156, KEY_twofifths, VULGAR FRACTION TWO FIFTHS */
	0x6a34, /* 1152, 0xab4, U+2157, KEY_threefifths, VULGAR FRACTION THREE FIFTHS */
	0x6a4d, /* 1153, 0xab5, U+2158, KEY_fourfifths, VULGAR FRACTION FOUR FIFTHS */
	0x6a65, /* 1154, 0xab6, U+2159, KEY_onesixth, VULGAR FRACTION ONE SIXTH */
	0x6a7b, /* 1155, 0xab7, U+215a, KEY_fivesixths, VULGAR FRACTION FIVE SIXTHS */
	0x6a93, /* 1156, 0xab8, U+2105, KEY_careof, CARE OF */
	0x0000,
	0x0000,
	0x6aa7, /* 1157, 0xabb, U+2012, KEY_figdash, FIGURE DASH */
	0x6abc, /* 1158, 0xabc, KEY_leftanglebracket, (U+27E8 MATHEMATICAL LEFT ANGLE BRACKET) */
	0x6ada, /* 1159, 0xabd, KEY_decimalpoint, (U+002E FULL STOP) */
	0x6af4, /* 1160, 0xabe, KEY_rightanglebracket, (U+27E9 MATHEMATICAL RIGHT ANGLE BRACKET) */
	0x6b13, /* 1161, 0xabf, KEY_marker */
	0x0000,
	0xca72, /* 2056, 0x1000dab, U+0dab, KEY_Sinh_nna, SINHALA MUURDHAJA NAYANNA */
	0x0000,
	0x6b27, /* 1162, 0xac3, U+215b, KEY_oneeighth, VULGAR FRACTION ONE EIGHTH */
	0x6b3e, /* 1163, 0xac4, U+215c, KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */
	0x6b58, /* 1164, 0xac5, U+215d, KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */
	0x6b71, /* 1165, 0xac6, U+215e, KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */
	0x0000,
	0x0000,
	0x6b8b, /* 1166, 0xac9, U+2122, KEY_trademark, TRADE MARK SIGN */
	0x6ba2, /* 1167, 0xaca, KEY_signaturemark, (U+2613 SALTIRE) */
	0x6bbd, /* 1168, 0xacb, KEY_trademarkincircle */
	0x6bdc, /* 1169, 0xacc, KEY_leftopentriangle, (U+25C1 WHITE LEFT-POINTING TRIANGLE) */
	0x6bfa, /* 1170, 0xacd, KEY_rightopentriangle, (U+25B7 WHITE RIGHT-POINTING TRIANGLE) */
	0x6c19, /* 1171, 0xace, KEY_emopencircle, (U+25CB WHITE CIRCLE) */
	0x6c33, /* 1172, 0xacf, KEY_emopenrectangle, (U+25AF WHITE VERTICAL RECTANGLE) */
	0x6c50, /* 1173, 0xad0, U+2018, KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */
	0x6c71, /* 1174, 0xad1, U+2019, KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */
	0x6c93, /* 1175, 0xad2, U+201c, KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */
	0x6cb4, /* 1176, 0xad3, U+201d, KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */
	0x6cd6, /* 1177, 0xad4, U+211e, KEY_prescription, PRESCRIPTION TAKE */
	0x6cf0, /* 1178, 0xad5, U+2030, KEY_permille, PER MILLE SIGN */
	0x6d06, /* 1179, 0xad6, U+2032, KEY_minutes, PRIME */
	0x6d1b, /* 1180, 0xad7, U+2033, KEY_seconds, DOUBLE PRIME */
	0x0000,
	0x6d30, /* 1181, 0xad9, U+271d, KEY_latincross, LATIN CROSS */
	0x6d48, /* 1182, 0xada, KEY_hexagram */
	0x6d5e, /* 1183, 0xadb, KEY_filledrectbullet, (U+25AC BLACK RECTANGLE) */
	0x6d7c, /* 1184, 0xadc, KEY_filledlefttribullet, (U+25C0 BLACK LEFT-POINTING TRIANGLE) */
	0x6d9d, /* 1185, 0xadd, KEY_filledrighttribullet, (U+25B6 BLACK RIGHT-POINTING TRIANGLE) */
	0x6dbf, /* 1186, 0xade, KEY_emfilledcircle, (U+25CF BLACK CIRCLE) */
	0x6ddb, /* 1187, 0xadf, KEY_emfilledrect, (U+25AE BLACK VERTICAL RECTANGLE) */
	0x6df5, /* 1188, 0xae0, KEY_enopencircbullet, (U+25E6 WHITE BULLET) */
	0x6e13, /* 1189, 0xae1, KEY_enopensquarebullet, (U+25AB WHITE SMALL SQUARE) */
	0x6e33, /* 1190, 0xae2, KEY_openrectbullet, (U+25AD WHITE RECTANGLE) */
	0x6e4f, /* 1191, 0xae3, KEY_opentribulletup, (U+25B3 WHITE UP-POINTING TRIANGLE) */
	0x6e6c, /* 1192, 0xae4, KEY_opentribulletdown, (U+25BD WHITE DOWN-POINTING TRIANGLE) */
	0x6e8b, /* 1193, 0xae5, KEY_openstar, (U+2606 WHITE STAR) */
	0x6ea1, /* 1194, 0xae6, KEY_enfilledcircbullet, (U+2022 BULLET) */
	0x6ec1, /* 1195, 0xae7, KEY_enfilledsqbullet, (U+25AA BLACK SMALL SQUARE) */
	0x6edf, /* 1196, 0xae8, KEY_filledtribulletup, (U+25B2 BLACK UP-POINTING TRIANGLE) */
	0x6efe, /* 1197, 0xae9, KEY_filledtribulletdown, (U+25BC BLACK DOWN-POINTING TRIANGLE) */
	0x6f1f, /* 1198, 0xaea, KEY_leftpointer, (U+261C WHITE LEFT POINTING INDEX) */
	0x6f38, /* 1199, 0xaeb, KEY_rightpointer, (U+261E WHITE RIGHT POINTING INDEX) */
	0x6f52, /* 1200, 0xaec, U+2663, KEY_club, BLACK CLUB SUIT */
	0x6f64, /* 1201, 0xaed, U+2666, KEY_diamond, BLACK DIAMOND SUIT */
	0x6f79, /* 1202, 0xaee, U+2665, KEY_heart, BLACK HEART SUIT */
	0xb868, /* 1898, 0x1002887, U+2887, KEY_braille_dots_1238, BRAILLE PATTERN DOTS-1238 */
	0x6f8c, /* 1203, 0xaf0, U+2720, KEY_maltesecross, MALTESE CROSS */
	0x6fa6, /* 1204, 0xaf1, U+2020, KEY_dagger, DAGGER */
	0x6fba, /* 1205, 0xaf2, U+2021, KEY_doubledagger, DOUBLE DAGGER */
	0x6fd4, /* 1206, 0xaf3, U+2713, KEY_checkmark, CHECK MARK */
	0x6feb, /* 1207, 0xaf4, U+2717, KEY_ballotcross, BALLOT X */
	0x7004, /* 1208, 0xaf5, U+266f, KEY_musicalsharp, MUSIC SHARP SIGN */
	0x701e, /* 1209, 0xaf6, U+266d, KEY_musicalflat, MUSIC FLAT SIGN */
	0x7037, /* 1210, 0xaf7, U+2642, KEY_malesymbol, MALE SIGN */
	0x704f, /* 1211, 0xaf8, U+2640, KEY_femalesymbol, FEMALE SIGN */
	0x7069, /* 1212, 0xaf9, U+260e, KEY_telephone, BLACK TELEPHONE */
	0x7080, /* 1213, 0xafa, U+2315, KEY_telephonerecorder, TELEPHONE RECORDER */
	0x709f, /* 1214, 0xafb, U+2117, KEY_phonographcopyright, SOUND RECORDING COPYRIGHT */
	0x70c0, /* 1215, 0xafc, U+2038, KEY_caret, CARET */
	0x70d3, /* 1216, 0xafd, U+201a, KEY_singlelowquotemark, SINGLE LOW-9 QUOTATION MARK */
	0x70f3, /* 1217, 0xafe, U+201e, KEY_doublelowquotemark, DOUBLE LOW-9 QUOTATION MARK */
	0x7113, /* 1218, 0xaff, KEY_cursor */
	0x0000,
	0xb28f, /* 1850, 0x1002857, U+2857, KEY_braille_dots_12357, BRAILLE PATTERN DOTS-12357 */
	0x0000,
	0x0000,
	0xb93c, /* 1905, 0x100288e, U+288e, KEY_braille_dots_2348, BRAILLE PATTERN DOTS-2348 */
	0x0000,
	0x0000,
	0xb2ec, /* 1853, 0x100285a, U+285a, KEY_braille_dots_2457, BRAILLE PATTERN DOTS-2457 */
	0x0000,
	0x0000,
	0xb97b, /* 1907, 0x1002890, U+2890, KEY_braille_dots_58, BRAILLE PATTERN DOTS-58 */
	0xb32b, /* 1855, 0x100285c, U+285c, KEY_braille_dots_3457, BRAILLE PATTERN DOTS-3457 */
	0x0000,
	0xb34a, /* 1856, 0x100285d, U+285d, KEY_braille_dots_13457, BRAILLE PATTERN DOTS-13457 */
	0x0000,
	0x0000,
	0x0000,
	0xb38a, /* 1858, 0x100285f, U+285f, KEY_braille_dots_123457, BRAILLE PATTERN DOTS-123457 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe8bb, /* 2363, 0x1004ff53, KEY_osfRight */
	0x0000,
	0xba11, /* 1912, 0x1002895, U+2895, KEY_braille_dots_1358, BRAILLE PATTERN DOTS-1358 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xe5fb, /* 2334, 0x100000a8, KEY_hpmute_acute */
	0xbd5b, /* 1939, 0x10028b0, U+28b0, KEY_braille_dots_568, BRAILLE PATTERN DOTS-568 */
	0x0000,
	0x87ac, /* 1440, 0xedf, KEY_Hangul_J_RieulSios */
	0xe58a, /* 2329, 0x1000ff48, KEY_hpModelock1 */
	0x0000,
	0xe62f, /* 2336, 0x100000aa, KEY_hpmute_asciicircum */
	0x0000,
	0x0000,
	0xe64f, /* 2337, 0x100000ab, KEY_hpmute_diaeresis */
	0x0000,
	0xbacb, /* 1918, 0x100289b, U+289b, KEY_braille_dots_12458, BRAILLE PATTERN DOTS-12458 */
	0xe66d, /* 2338, 0x100000ac, KEY_hpmute_asciitilde */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa422, /* 1721, 0x1002070, U+2070, KEY_zerosuperior, SUPERSCRIPT ZERO */
	0x0000,
	0x0000,
	0xcc27, /* 2076, 0x1000dc3, U+0dc3, KEY_Sinh_sa, SINHALA DANTAJA SAYANNA */
	0x0000,
	0xb617, /* 1879, 0x1002874, U+2874, KEY_braille_dots_3567, BRAILLE PATTERN DOTS-3567 */
	0x0000,
	0x0000,
	0x0000,
	0xb656, /* 1881, 0x1002876, U+2876, KEY_braille_dots_23567, BRAILLE PATTERN DOTS-23567 */
	0x0000,
	0xb676, /* 1882, 0x1002877, U+2877, KEY_braille_dots_123567, BRAILLE PATTERN DOTS-123567 */
	0x0000,
	0xb697, /* 1883, 0x1002878, U+2878, KEY_braille_dots_4567, BRAILLE PATTERN DOTS-4567 */
	0x0000,
	0x0000,
	0x0000,
	0xb6d6, /* 1885, 0x100287a, U+287a, KEY_braille_dots_24567, BRAILLE PATTERN DOTS-24567 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa85b, /* 1763, 0x1002800, U+2800, KEY_braille_blank, BRAILLE PATTERN BLANK */
	0xa876, /* 1764, 0x1002801, U+2801, KEY_braille_dots_1, BRAILLE PATTERN DOTS-1 */
	0xa25c, /* 1700, 0x1001ef6, U+1ef6, KEY_Yhook, LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
	0xa8ae, /* 1766, 0x1002803, U+2803, KEY_braille_dots_12, BRAILLE PATTERN DOTS-12 */
	0xa8cb, /* 1767, 0x1002804, U+2804, KEY_braille_dots_3, BRAILLE PATTERN DOTS-3 */
	0xa4bf, /* 1727, 0x1002079, U+2079, KEY_ninesuperior, SUPERSCRIPT NINE */
	0xa904, /* 1769, 0x1002806, U+2806, KEY_braille_dots_23, BRAILLE PATTERN DOTS-23 */
	0xa921, /* 1770, 0x1002807, U+2807, KEY_braille_dots_123, BRAILLE PATTERN DOTS-123 */
	0xa93f, /* 1771, 0x1002808, U+2808, KEY_braille_dots_4, BRAILLE PATTERN DOTS-4 */
	0xa95b, /* 1772, 0x1002809, U+2809, KEY_braille_dots_14, BRAILLE PATTERN DOTS-14 */
	0xa978, /* 1773, 0x100280a, U+280a, KEY_braille_dots_24, BRAILLE PATTERN DOTS-24 */
	0xa995, /* 1774, 0x100280b, U+280b, KEY_braille_dots_124, BRAILLE PATTERN DOTS-124 */
	0xa9b3, /* 1775, 0x100280c, U+280c, KEY_braille_dots_34, BRAILLE PATTERN DOTS-34 */
	0xa9d0, /* 1776, 0x100280d, U+280d, KEY_braille_dots_134, BRAILLE PATTERN DOTS-134 */
	0xa9ee, /* 1777, 0x100280e, U+280e, KEY_braille_dots_234, BRAILLE PATTERN DOTS-234 */
	0xaa0c, /* 1778, 0x100280f, U+280f, KEY_braille_dots_1234, BRAILLE PATTERN DOTS-1234 */
	0xaa2b, /* 1779, 0x1002810, U+2810, KEY_braille_dots_5, BRAILLE PATTERN DOTS-5 */
	0xaa47, /* 1780, 0x1002811, U+2811, KEY_braille_dots_15, BRAILLE PATTERN DOTS-15 */
	0xaa64, /* 1781, 0x1002812, U+2812, KEY_braille_dots_25, BRAILLE PATTERN DOTS-25 */
	0xaa81, /* 1782, 0x1002813, U+2813, KEY_braille_dots_125, BRAILLE PATTERN DOTS-125 */
	0xaa9f, /* 1783, 0x1002814, U+2814, KEY_braille_dots_35, BRAILLE PATTERN DOTS-35 */
	0xaabc, /* 1784, 0x1002815, U+2815, KEY_braille_dots_135, BRAILLE PATTERN DOTS-135 */
	0xaada, /* 1785, 0x1002816, U+2816, KEY_braille_dots_235, BRAILLE PATTERN DOTS-235 */
	0xaaf8, /* 1786, 0x1002817, U+2817, KEY_braille_dots_1235, BRAILLE PATTERN DOTS-1235 */
	0xab17, /* 1787, 0x1002818, U+2818, KEY_braille_dots_45, BRAILLE PATTERN DOTS-45 */
	0xab34, /* 1788, 0x1002819, U+2819, KEY_braille_dots_145, BRAILLE PATTERN DOTS-145 */
	0xa4d9, /* 1728, 0x1002080, U+2080, KEY_zerosubscript, SUBSCRIPT ZERO */
	0xab70, /* 1790, 0x100281b, U+281b, KEY_braille_dots_1245, BRAILLE PATTERN DOTS-1245 */
	0xab8f, /* 1791, 0x100281c, U+281c, KEY_braille_dots_345, BRAILLE PATTERN DOTS-345 */
	0xabad, /* 1792, 0x100281d, U+281d, KEY_braille_dots_1345, BRAILLE PATTERN DOTS-1345 */
	0xabcc, /* 1793, 0x100281e, U+281e, KEY_braille_dots_2345, BRAILLE PATTERN DOTS-2345 */
	0xa380, /* 1714, 0x10020a6, U+20a6, KEY_NairaSign, NAIRA SIGN */
	0xac0b, /* 1795, 0x1002820, U+2820, KEY_braille_dots_6, BRAILLE PATTERN DOTS-6 */
	0xac27, /* 1796, 0x1002821, U+2821, KEY_braille_dots_16, BRAILLE PATTERN DOTS-16 */
	0xac44, /* 1797, 0x1002822, U+2822, KEY_braille_dots_26, BRAILLE PATTERN DOTS-26 */
	0xa528, /* 1731, 0x1002083, U+2083, KEY_threesubscript, SUBSCRIPT THREE */
	0xac7f, /* 1799, 0x1002824, U+2824, KEY_braille_dots_36, BRAILLE PATTERN DOTS-36 */
	0xac9c, /* 1800, 0x1002825, U+2825, KEY_braille_dots_136, BRAILLE PATTERN DOTS-136 */
	0xacba, /* 1801, 0x1002826, U+2826, KEY_braille_dots_236, BRAILLE PATTERN DOTS-236 */
	0xacd8, /* 1802, 0x1002827, U+2827, KEY_braille_dots_1236, BRAILLE PATTERN DOTS-1236 */
	0xacf7, /* 1803, 0x1002828, U+2828, KEY_braille_dots_46, BRAILLE PATTERN DOTS-46 */
	0xa55f, /* 1733, 0x1002085, U+2085, KEY_fivesubscript, SUBSCRIPT FIVE */
	0xad32, /* 1805, 0x100282a, U+282a, KEY_braille_dots_246, BRAILLE PATTERN DOTS-246 */
	0xad50, /* 1806, 0x100282b, U+282b, KEY_braille_dots_1246, BRAILLE PATTERN DOTS-1246 */
	0xa57a, /* 1734, 0x1002086, U+2086, KEY_sixsubscript, SUBSCRIPT SIX */
	0xad8d, /* 1808, 0x100282d, U+282d, KEY_braille_dots_1346, BRAILLE PATTERN DOTS-1346 */
	0xadac, /* 1809, 0x100282e, U+282e, KEY_braille_dots_2346, BRAILLE PATTERN DOTS-2346 */
	0xa594, /* 1735, 0x1002087, U+2087, KEY_sevensubscript, SUBSCRIPT SEVEN */
	0xadeb, /* 1811, 0x1002830, U+2830, KEY_braille_dots_56, BRAILLE PATTERN DOTS-56 */
	0xae08, /* 1812, 0x1002831, U+2831, KEY_braille_dots_156, BRAILLE PATTERN DOTS-156 */
	0xae26, /* 1813, 0x1002832, U+2832, KEY_braille_dots_256, BRAILLE PATTERN DOTS-256 */
	0xae44, /* 1814, 0x1002833, U+2833, KEY_braille_dots_1256, BRAILLE PATTERN DOTS-1256 */
	0xae63, /* 1815, 0x1002834, U+2834, KEY_braille_dots_356, BRAILLE PATTERN DOTS-356 */
	0xae81, /* 1816, 0x1002835, U+2835, KEY_braille_dots_1356, BRAILLE PATTERN DOTS-1356 */
	0xaea0, /* 1817, 0x1002836, U+2836, KEY_braille_dots_2356, BRAILLE PATTERN DOTS-2356 */
	0xaebf, /* 1818, 0x1002837, U+2837, KEY_braille_dots_12356, BRAILLE PATTERN DOTS-12356 */
	0xaedf, /* 1819, 0x1002838, U+2838, KEY_braille_dots_456, BRAILLE PATTERN DOTS-456 */
	0xaefd, /* 1820, 0x1002839, U+2839, KEY_braille_dots_1456, BRAILLE PATTERN DOTS-1456 */
	0xaf1c, /* 1821, 0x100283a, U+283a, KEY_braille_dots_2456, BRAILLE PATTERN DOTS-2456 */
	0xaf3b, /* 1822, 0x100283b, U+283b, KEY_braille_dots_12456, BRAILLE PATTERN DOTS-12456 */
	0xaf5b, /* 1823, 0x100283c, U+283c, KEY_braille_dots_3456, BRAILLE PATTERN DOTS-3456 */
	0xaf7a, /* 1824, 0x100283d, U+283d, KEY_braille_dots_13456, BRAILLE PATTERN DOTS-13456 */
	0xaf9a, /* 1825, 0x100283e, U+283e, KEY_braille_dots_23456, BRAILLE PATTERN DOTS-23456 */
	0xafba, /* 1826, 0x100283f, U+283f, KEY_braille_dots_123456, BRAILLE PATTERN DOTS-123456 */
	0xafdb, /* 1827, 0x1002840, U+2840, KEY_braille_dots_7, BRAILLE PATTERN DOTS-7 */
	0xaff7, /* 1828, 0x1002841, U+2841, KEY_braille_dots_17, BRAILLE PATTERN DOTS-17 */
	0xb014, /* 1829, 0x1002842, U+2842, KEY_braille_dots_27, BRAILLE PATTERN DOTS-27 */
	0xb031, /* 1830, 0x1002843, U+2843, KEY_braille_dots_127, BRAILLE PATTERN DOTS-127 */
	0xb04f, /* 1831, 0x1002844, U+2844, KEY_braille_dots_37, BRAILLE PATTERN DOTS-37 */
	0xb06c, /* 1832, 0x1002845, U+2845, KEY_braille_dots_137, BRAILLE PATTERN DOTS-137 */
	0xb08a, /* 1833, 0x1002846, U+2846, KEY_braille_dots_237, BRAILLE PATTERN DOTS-237 */
	0xb0a8, /* 1834, 0x1002847, U+2847, KEY_braille_dots_1237, BRAILLE PATTERN DOTS-1237 */
	0xb0c7, /* 1835, 0x1002848, U+2848, KEY_braille_dots_47, BRAILLE PATTERN DOTS-47 */
	0xb0e4, /* 1836, 0x1002849, U+2849, KEY_braille_dots_147, BRAILLE PATTERN DOTS-147 */
	0xb102, /* 1837, 0x100284a, U+284a, KEY_braille_dots_247, BRAILLE PATTERN DOTS-247 */
	0xb120, /* 1838, 0x100284b, U+284b, KEY_braille_dots_1247, BRAILLE PATTERN DOTS-1247 */
	0xb13f, /* 1839, 0x100284c, U+284c, KEY_braille_dots_347, BRAILLE PATTERN DOTS-347 */
	0x9a1a, /* 1618, 0x1001ea2, U+1ea2, KEY_Ahook, LATIN CAPITAL LETTER A WITH HOOK ABOVE */
	0xb17c, /* 1841, 0x100284e, U+284e, KEY_braille_dots_2347, BRAILLE PATTERN DOTS-2347 */
	0xb19b, /* 1842, 0x100284f, U+284f, KEY_braille_dots_12347, BRAILLE PATTERN DOTS-12347 */
	0xb1bb, /* 1843, 0x1002850, U+2850, KEY_braille_dots_57, BRAILLE PATTERN DOTS-57 */
	0xb1d8, /* 1844, 0x1002851, U+2851, KEY_braille_dots_157, BRAILLE PATTERN DOTS-157 */
	0xb1f6, /* 1845, 0x1002852, U+2852, KEY_braille_dots_257, BRAILLE PATTERN DOTS-257 */
	0xb214, /* 1846, 0x1002853, U+2853, KEY_braille_dots_1257, BRAILLE PATTERN DOTS-1257 */
	0xb233, /* 1847, 0x1002854, U+2854, KEY_braille_dots_357, BRAILLE PATTERN DOTS-357 */
	0xb251, /* 1848, 0x1002855, U+2855, KEY_braille_dots_1357, BRAILLE PATTERN DOTS-1357 */
	0xb270, /* 1849, 0x1002856, U+2856, KEY_braille_dots_2357, BRAILLE PATTERN DOTS-2357 */
	0x7127, /* 1219, 0xba3, KEY_leftcaret, (U+003C LESS-THAN SIGN) */
	0xb2af, /* 1851, 0x1002858, U+2858, KEY_braille_dots_457, BRAILLE PATTERN DOTS-457 */
	0xb2cd, /* 1852, 0x1002859, U+2859, KEY_braille_dots_1457, BRAILLE PATTERN DOTS-1457 */
	0x713e, /* 1220, 0xba6, KEY_rightcaret, (U+003E GREATER-THAN SIGN) */
	0xb30b, /* 1854, 0x100285b, U+285b, KEY_braille_dots_12457, BRAILLE PATTERN DOTS-12457 */
	0x7156, /* 1221, 0xba8, KEY_downcaret, (U+2228 LOGICAL OR) */
	0x716d, /* 1222, 0xba9, KEY_upcaret, (U+2227 LOGICAL AND) */
	0xb36a, /* 1857, 0x100285e, U+285e, KEY_braille_dots_23457, BRAILLE PATTERN DOTS-23457 */
	0x9a5e, /* 1621, 0x1001ea5, U+1ea5, KEY_acircumflexacute, LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0xb3ab, /* 1859, 0x1002860, U+2860, KEY_braille_dots_67, BRAILLE PATTERN DOTS-67 */
	0xb3c8, /* 1860, 0x1002861, U+2861, KEY_braille_dots_167, BRAILLE PATTERN DOTS-167 */
	0xb3e6, /* 1861, 0x1002862, U+2862, KEY_braille_dots_267, BRAILLE PATTERN DOTS-267 */
	0xb404, /* 1862, 0x1002863, U+2863, KEY_braille_dots_1267, BRAILLE PATTERN DOTS-1267 */
	0xb423, /* 1863, 0x1002864, U+2864, KEY_braille_dots_367, BRAILLE PATTERN DOTS-367 */
	0xb441, /* 1864, 0x1002865, U+2865, KEY_braille_dots_1367, BRAILLE PATTERN DOTS-1367 */
	0xb460, /* 1865, 0x1002866, U+2866, KEY_braille_dots_2367, BRAILLE PATTERN DOTS-2367 */
	0xb47f, /* 1866, 0x1002867, U+2867, KEY_braille_dots_12367, BRAILLE PATTERN DOTS-12367 */
	0xb49f, /* 1867, 0x1002868, U+2868, KEY_braille_dots_467, BRAILLE PATTERN DOTS-467 */
	0xb4bd, /* 1868, 0x1002869, U+2869, KEY_braille_dots_1467, BRAILLE PATTERN DOTS-1467 */
	0xb4dc, /* 1869, 0x100286a, U+286a, KEY_braille_dots_2467, BRAILLE PATTERN DOTS-2467 */
	0xb4fb, /* 1870, 0x100286b, U+286b, KEY_braille_dots_12467, BRAILLE PATTERN DOTS-12467 */
	0xb51b, /* 1871, 0x100286c, U+286c, KEY_braille_dots_3467, BRAILLE PATTERN DOTS-3467 */
	0xb53a, /* 1872, 0x100286d, U+286d, KEY_braille_dots_13467, BRAILLE PATTERN DOTS-13467 */
	0xb55a, /* 1873, 0x100286e, U+286e, KEY_braille_dots_23467, BRAILLE PATTERN DOTS-23467 */
	0xb57a, /* 1874, 0x100286f, U+286f, KEY_braille_dots_123467, BRAILLE PATTERN DOTS-123467 */
	0xb59b, /* 1875, 0x1002870, U+2870, KEY_braille_dots_567, BRAILLE PATTERN DOTS-567 */
	0xb5b9, /* 1876, 0x1002871, U+2871, KEY_braille_dots_1567, BRAILLE PATTERN DOTS-1567 */
	0xb5d8, /* 1877, 0x1002872, U+2872, KEY_braille_dots_2567, BRAILLE PATTERN DOTS-2567 */
	0xb5f7, /* 1878, 0x1002873, U+2873, KEY_braille_dots_12567, BRAILLE PATTERN DOTS-12567 */
	0x7182, /* 1223, 0xbc0, KEY_overbar, (U+00AF MACRON) */
	0xb636, /* 1880, 0x1002875, U+2875, KEY_braille_dots_13567, BRAILLE PATTERN DOTS-13567 */
	0x7197, /* 1224, 0xbc2, U+22a4, KEY_downtack, DOWN TACK */
	0x71ad, /* 1225, 0xbc3, KEY_upshoe, (U+2229 INTERSECTION) */
	0x71c1, /* 1226, 0xbc4, U+230a, KEY_downstile, LEFT FLOOR */
	0xb6b6, /* 1884, 0x1002879, U+2879, KEY_braille_dots_14567, BRAILLE PATTERN DOTS-14567 */
	0x71d8, /* 1227, 0xbc6, KEY_underbar, (U+005F LOW LINE) */
	0xb6f6, /* 1886, 0x100287b, U+287b, KEY_braille_dots_124567, BRAILLE PATTERN DOTS-124567 */
	0xb717, /* 1887, 0x100287c, U+287c, KEY_braille_dots_34567, BRAILLE PATTERN DOTS-34567 */
	0xb737, /* 1888, 0x100287d, U+287d, KEY_braille_dots_134567, BRAILLE PATTERN DOTS-134567 */
	0x71ee, /* 1228, 0xbca, U+2218, KEY_jot, RING OPERATOR */
	0xb779, /* 1890, 0x100287f, U+287f, KEY_braille_dots_1234567, BRAILLE PATTERN DOTS-1234567 */
	0x71ff, /* 1229, 0xbcc, U+2395, KEY_quad, APL FUNCTIONAL SYMBOL QUAD */
	0xb7b7, /* 1892, 0x1002881, U+2881, KEY_braille_dots_18, BRAILLE PATTERN DOTS-18 */
	0x7211, /* 1230, 0xbce, U+22a5, KEY_uptack, UP TACK */
	0x7225, /* 1231, 0xbcf, U+25cb, KEY_circle, WHITE CIRCLE */
	0xb80f, /* 1895, 0x1002884, U+2884, KEY_braille_dots_38, BRAILLE PATTERN DOTS-38 */
	0xb82c, /* 1896, 0x1002885, U+2885, KEY_braille_dots_138, BRAILLE PATTERN DOTS-138 */
	0xb84a, /* 1897, 0x1002886, U+2886, KEY_braille_dots_238, BRAILLE PATTERN DOTS-238 */
	0x7239, /* 1232, 0xbd3, U+2308, KEY_upstile, LEFT CEILING */
	0xb887, /* 1899, 0x1002888, U+2888, KEY_braille_dots_48, BRAILLE PATTERN DOTS-48 */
	0x9b2e, /* 1628, 0x1001eac, U+1eac, KEY_Acircumflexbelowdot, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x724e, /* 1233, 0xbd6, KEY_downshoe, (U+222A UNION) */
	0xb8e0, /* 1902, 0x100288b, U+288b, KEY_braille_dots_1248, BRAILLE PATTERN DOTS-1248 */
	0x7264, /* 1234, 0xbd8, KEY_rightshoe, (U+2283 SUPERSET OF) */
	0xb91d, /* 1904, 0x100288d, U+288d, KEY_braille_dots_1348, BRAILLE PATTERN DOTS-1348 */
	0x727b, /* 1235, 0xbda, KEY_leftshoe, (U+2282 SUBSET OF) */
	0x9b4f, /* 1629, 0x1001ead, U+1ead, KEY_acircumflexbelowdot, LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x7291, /* 1236, 0xbdc, U+22a3, KEY_lefttack, LEFT TACK */
	0xb998, /* 1908, 0x1002891, U+2891, KEY_braille_dots_158, BRAILLE PATTERN DOTS-158 */
	0xb9b6, /* 1909, 0x1002892, U+2892, KEY_braille_dots_258, BRAILLE PATTERN DOTS-258 */
	0xb9d4, /* 1910, 0x1002893, U+2893, KEY_braille_dots_1258, BRAILLE PATTERN DOTS-1258 */
	0xb9f3, /* 1911, 0x1002894, U+2894, KEY_braille_dots_358, BRAILLE PATTERN DOTS-358 */
	0xa3c6, /* 1717, 0x10020a9, U+20a9, KEY_WonSign, WON SIGN */
	0xba30, /* 1913, 0x1002896, U+2896, KEY_braille_dots_2358, BRAILLE PATTERN DOTS-2358 */
	0xba4f, /* 1914, 0x1002897, U+2897, KEY_braille_dots_12358, BRAILLE PATTERN DOTS-12358 */
	0xba6f, /* 1915, 0x1002898, U+2898, KEY_braille_dots_458, BRAILLE PATTERN DOTS-458 */
	0xba8d, /* 1916, 0x1002899, U+2899, KEY_braille_dots_1458, BRAILLE PATTERN DOTS-1458 */
	0xbaac, /* 1917, 0x100289a, U+289a, KEY_braille_dots_2458, BRAILLE PATTERN DOTS-2458 */
	0xa3f6, /* 1719, 0x10020ab, U+20ab, KEY_DongSign, DONG SIGN */
	0xbaeb, /* 1919, 0x100289c, U+289c, KEY_braille_dots_3458, BRAILLE PATTERN DOTS-3458 */
	0xbb0a, /* 1920, 0x100289d, U+289d, KEY_braille_dots_13458, BRAILLE PATTERN DOTS-13458 */
	0xbb2a, /* 1921, 0x100289e, U+289e, KEY_braille_dots_23458, BRAILLE PATTERN DOTS-23458 */
	0xbb4a, /* 1922, 0x100289f, U+289f, KEY_braille_dots_123458, BRAILLE PATTERN DOTS-123458 */
	0xbb6b, /* 1923, 0x10028a0, U+28a0, KEY_braille_dots_68, BRAILLE PATTERN DOTS-68 */
	0xbb88, /* 1924, 0x10028a1, U+28a1, KEY_braille_dots_168, BRAILLE PATTERN DOTS-168 */
	0xbba6, /* 1925, 0x10028a2, U+28a2, KEY_braille_dots_268, BRAILLE PATTERN DOTS-268 */
	0xbbc4, /* 1926, 0x10028a3, U+28a3, KEY_braille_dots_1268, BRAILLE PATTERN DOTS-1268 */
	0xbbe3, /* 1927, 0x10028a4, U+28a4, KEY_braille_dots_368, BRAILLE PATTERN DOTS-368 */
	0xbc01, /* 1928, 0x10028a5, U+28a5, KEY_braille_dots_1368, BRAILLE PATTERN DOTS-1368 */
	0xbc20, /* 1929, 0x10028a6, U+28a6, KEY_braille_dots_2368, BRAILLE PATTERN DOTS-2368 */
	0xbc3f, /* 1930, 0x10028a7, U+28a7, KEY_braille_dots_12368, BRAILLE PATTERN DOTS-12368 */
	0xbc5f, /* 1931, 0x10028a8, U+28a8, KEY_braille_dots_468, BRAILLE PATTERN DOTS-468 */
	0xbc7d, /* 1932, 0x10028a9, U+28a9, KEY_braille_dots_1468, BRAILLE PATTERN DOTS-1468 */
	0xbc9c, /* 1933, 0x10028aa, U+28aa, KEY_braille_dots_2468, BRAILLE PATTERN DOTS-2468 */
	0xbcbb, /* 1934, 0x10028ab, U+28ab, KEY_braille_dots_12468, BRAILLE PATTERN DOTS-12468 */
	0xbcdb, /* 1935, 0x10028ac, U+28ac, KEY_braille_dots_3468, BRAILLE PATTERN DOTS-3468 */
	0xbcfa, /* 1936, 0x10028ad, U+28ad, KEY_braille_dots_13468, BRAILLE PATTERN DOTS-13468 */
	0xbd1a, /* 1937, 0x10028ae, U+28ae, KEY_braille_dots_23468, BRAILLE PATTERN DOTS-23468 */
	0xbd3a, /* 1938, 0x10028af, U+28af, KEY_braille_dots_123468, BRAILLE PATTERN DOTS-123468 */
	0x72a7, /* 1237, 0xbfc, U+22a2, KEY_righttack, RIGHT TACK */
	0xbd79, /* 1940, 0x10028b1, U+28b1, KEY_braille_dots_1568, BRAILLE PATTERN DOTS-1568 */
	0xbd98, /* 1941, 0x10028b2, U+28b2, KEY_braille_dots_2568, BRAILLE PATTERN DOTS-2568 */
	0xbdb7, /* 1942, 0x10028b3, U+28b3, KEY_braille_dots_12568, BRAILLE PATTERN DOTS-12568 */
	0xbdd7, /* 1943, 0x10028b4, U+28b4, KEY_braille_dots_3568, BRAILLE PATTERN DOTS-3568 */
	0xbdf6, /* 1944, 0x10028b5, U+28b5, KEY_braille_dots_13568, BRAILLE PATTERN DOTS-13568 */
	0xbe16, /* 1945, 0x10028b6, U+28b6, KEY_braille_dots_23568, BRAILLE PATTERN DOTS-23568 */
	0xbe36, /* 1946, 0x10028b7, U+28b7, KEY_braille_dots_123568, BRAILLE PATTERN DOTS-123568 */
	0xbe57, /* 1947, 0x10028b8, U+28b8, KEY_braille_dots_4568, BRAILLE PATTERN DOTS-4568 */
	0xbe76, /* 1948, 0x10028b9, U+28b9, KEY_braille_dots_14568, BRAILLE PATTERN DOTS-14568 */
	0xbe96, /* 1949, 0x10028ba, U+28ba, KEY_braille_dots_24568, BRAILLE PATTERN DOTS-24568 */
	0xbeb6, /* 1950, 0x10028bb, U+28bb, KEY_braille_dots_124568, BRAILLE PATTERN DOTS-124568 */
	0xbed7, /* 1951, 0x10028bc, U+28bc, KEY_braille_dots_34568, BRAILLE PATTERN DOTS-34568 */
	0xbef7, /* 1952, 0x10028bd, U+28bd, KEY_braille_dots_134568, BRAILLE PATTERN DOTS-134568 */
	0xbf18, /* 1953, 0x10028be, U+28be, KEY_braille_dots_234568, BRAILLE PATTERN DOTS-234568 */
	0xbf39, /* 1954, 0x10028bf, U+28bf, KEY_braille_dots_1234568, BRAILLE PATTERN DOTS-1234568 */
	0xbf5b, /* 1955, 0x10028c0, U+28c0, KEY_braille_dots_78, BRAILLE PATTERN DOTS-78 */
	0xbf78, /* 1956, 0x10028c1, U+28c1, KEY_braille_dots_178, BRAILLE PATTERN DOTS-178 */
	0xbf96, /* 1957, 0x10028c2, U+28c2, KEY_braille_dots_278, BRAILLE PATTERN DOTS-278 */
	0xbfb4, /* 1958, 0x10028c3, U+28c3, KEY_braille_dots_1278, BRAILLE PATTERN DOTS-1278 */
	0xbfd3, /* 1959, 0x10028c4, U+28c4, KEY_braille_dots_378, BRAILLE PATTERN DOTS-378 */
	0xbff1, /* 1960, 0x10028c5, U+28c5, KEY_braille_dots_1378, BRAILLE PATTERN DOTS-1378 */
	0xc010, /* 1961, 0x10028c6, U+28c6, KEY_braille_dots_2378, BRAILLE PATTERN DOTS-2378 */
	0xc02f, /* 1962, 0x10028c7, U+28c7, KEY_braille_dots_12378, BRAILLE PATTERN DOTS-12378 */
	0xc04f, /* 1963, 0x10028c8, U+28c8, KEY_braille_dots_478, BRAILLE PATTERN DOTS-478 */
	0xc06d, /* 1964, 0x10028c9, U+28c9, KEY_braille_dots_1478, BRAILLE PATTERN DOTS-1478 */
	0xc08c, /* 1965, 0x10028ca, U+28ca, KEY_braille_dots_2478, BRAILLE PATTERN DOTS-2478 */
	0xc0ab, /* 1966, 0x10028cb, U+28cb, KEY_braille_dots_12478, BRAILLE PATTERN DOTS-12478 */
	0xc0cb, /* 1967, 0x10028cc, U+28cc, KEY_braille_dots_3478, BRAILLE PATTERN DOTS-3478 */
	0xc0ea, /* 1968, 0x10028cd, U+28cd, KEY_braille_dots_13478, BRAILLE PATTERN DOTS-13478 */
	0xc10a, /* 1969, 0x10028ce, U+28ce, KEY_braille_dots_23478, BRAILLE PATTERN DOTS-23478 */
	0xc12a, /* 1970, 0x10028cf, U+28cf, KEY_braille_dots_123478, BRAILLE PATTERN DOTS-123478 */
	0xc14b, /* 1971, 0x10028d0, U+28d0, KEY_braille_dots_578, BRAILLE PATTERN DOTS-578 */
	0xc169, /* 1972, 0x10028d1, U+28d1, KEY_braille_dots_1578, BRAILLE PATTERN DOTS-1578 */
	0xc188, /* 1973, 0x10028d2, U+28d2, KEY_braille_dots_2578, BRAILLE PATTERN DOTS-2578 */
	0xc1a7, /* 1974, 0x10028d3, U+28d3, KEY_braille_dots_12578, BRAILLE PATTERN DOTS-12578 */
	0xc1c7, /* 1975, 0x10028d4, U+28d4, KEY_braille_dots_3578, BRAILLE PATTERN DOTS-3578 */
	0xc1e6, /* 1976, 0x10028d5, U+28d5, KEY_braille_dots_13578, BRAILLE PATTERN DOTS-13578 */
	0xc206, /* 1977, 0x10028d6, U+28d6, KEY_braille_dots_23578, BRAILLE PATTERN DOTS-23578 */
	0xc226, /* 1978, 0x10028d7, U+28d7, KEY_braille_dots_123578, BRAILLE PATTERN DOTS-123578 */
	0xc247, /* 1979, 0x10028d8, U+28d8, KEY_braille_dots_4578, BRAILLE PATTERN DOTS-4578 */
	0xc266, /* 1980, 0x10028d9, U+28d9, KEY_braille_dots_14578, BRAILLE PATTERN DOTS-14578 */
	0xc286, /* 1981, 0x10028da, U+28da, KEY_braille_dots_24578, BRAILLE PATTERN DOTS-24578 */
	0xc2a6, /* 1982, 0x10028db, U+28db, KEY_braille_dots_124578, BRAILLE PATTERN DOTS-124578 */
	0xc2c7, /* 1983, 0x10028dc, U+28dc, KEY_braille_dots_34578, BRAILLE PATTERN DOTS-34578 */
	0xc2e7, /* 1984, 0x10028dd, U+28dd, KEY_braille_dots_134578, BRAILLE PATTERN DOTS-134578 */
	0xc308, /* 1985, 0x10028de, U+28de, KEY_braille_dots_234578, BRAILLE PATTERN DOTS-234578 */
	0xc329, /* 1986, 0x10028df, U+28df, KEY_braille_dots_1234578, BRAILLE PATTERN DOTS-1234578 */
	0xc34b, /* 1987, 0x10028e0, U+28e0, KEY_braille_dots_678, BRAILLE PATTERN DOTS-678 */
	0xc369, /* 1988, 0x10028e1, U+28e1, KEY_braille_dots_1678, BRAILLE PATTERN DOTS-1678 */
	0xc388, /* 1989, 0x10028e2, U+28e2, KEY_braille_dots_2678, BRAILLE PATTERN DOTS-2678 */
	0xc3a7, /* 1990, 0x10028e3, U+28e3, KEY_braille_dots_12678, BRAILLE PATTERN DOTS-12678 */
	0xc3c7, /* 1991, 0x10028e4, U+28e4, KEY_braille_dots_3678, BRAILLE PATTERN DOTS-3678 */
	0xc3e6, /* 1992, 0x10028e5, U+28e5, KEY_braille_dots_13678, BRAILLE PATTERN DOTS-13678 */
	0xc406, /* 1993, 0x10028e6, U+28e6, KEY_braille_dots_23678, BRAILLE PATTERN DOTS-23678 */
	0xc426, /* 1994, 0x10028e7, U+28e7, KEY_braille_dots_123678, BRAILLE PATTERN DOTS-123678 */
	0xc447, /* 1995, 0x10028e8, U+28e8, KEY_braille_dots_4678, BRAILLE PATTERN DOTS-4678 */
	0xc466, /* 1996, 0x10028e9, U+28e9, KEY_braille_dots_14678, BRAILLE PATTERN DOTS-14678 */
	0xc486, /* 1997, 0x10028ea, U+28ea, KEY_braille_dots_24678, BRAILLE PATTERN DOTS-24678 */
	0xc4a6, /* 1998, 0x10028eb, U+28eb, KEY_braille_dots_124678, BRAILLE PATTERN DOTS-124678 */
	0xc4c7, /* 1999, 0x10028ec, U+28ec, KEY_braille_dots_34678, BRAILLE PATTERN DOTS-34678 */
	0xc4e7, /* 2000, 0x10028ed, U+28ed, KEY_braille_dots_134678, BRAILLE PATTERN DOTS-134678 */
	0xc508, /* 2001, 0x10028ee, U+28ee, KEY_braille_dots_234678, BRAILLE PATTERN DOTS-234678 */
	0xc529, /* 2002, 0x10028ef, U+28ef, KEY_braille_dots_1234678, BRAILLE PATTERN DOTS-1234678 */
	0xc54b, /* 2003, 0x10028f0, U+28f0, KEY_braille_dots_5678, BRAILLE PATTERN DOTS-5678 */
	0xc56a, /* 2004, 0x10028f1, U+28f1, KEY_braille_dots_15678, BRAILLE PATTERN DOTS-15678 */
	0xc58a, /* 2005, 0x10028f2, U+28f2, KEY_braille_dots_25678, BRAILLE PATTERN DOTS-25678 */
	0xc5aa, /* 2006, 0x10028f3, U+28f3, KEY_braille_dots_125678, BRAILLE PATTERN DOTS-125678 */
	0xc5cb, /* 2007, 0x10028f4, U+28f4, KEY_braille_dots_35678, BRAILLE PATTERN DOTS-35678 */
	0xc5eb, /* 2008, 0x10028f5, U+28f5, KEY_braille_dots_135678, BRAILLE PATTERN DOTS-135678 */
	0xc60c, /* 2009, 0x10028f6, U+28f6, KEY_braille_dots_235678, BRAILLE PATTERN DOTS-235678 */
	0xc62d, /* 2010, 0x10028f7, U+28f7, KEY_braille_dots_1235678, BRAILLE PATTERN DOTS-1235678 */
	0xc64f, /* 2011, 0x10028f8, U+28f8, KEY_braille_dots_45678, BRAILLE PATTERN DOTS-45678 */
	0xc66f, /* 2012, 0x10028f9, U+28f9, KEY_braille_dots_145678, BRAILLE PATTERN DOTS-145678 */
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
	0x50be, /*  899, 0x6af, KEY_Serbian_dze, deprecated */
	0x0000,
	0x09bf, /*  123, 0xffcf, KEY_L8 */
	0x0000,
	0xe205, /* 2294, 0xff55, KEY_SunPageUp, Same as XK_Prior */
	0x5156, /*  905, 0x6b4, KEY_Ukranian_JE, deprecated */
	0xeadc, /* 2386, 0x1000ff6d, KEY_System */
	0x51a3, /*  908, 0x6b6, KEY_Ukranian_I, deprecated */
	0x51d5, /*  910, 0x6b7, KEY_Ukranian_YI, deprecated */
	0x5207, /*  912, 0x6b8, KEY_Serbian_JE, deprecated */
	0x5239, /*  914, 0x6b9, KEY_Serbian_LJE, deprecated */
	0x526c, /*  916, 0x6ba, KEY_Serbian_NJE, deprecated */
	0x03ce, /*   44, 0xff56, KEY_Page_Down */
	0xebd6, /* 2397, 0x100000a8, KEY_mute_acute */
	0xebee, /* 2398, 0x100000a9, KEY_mute_grave */
	0x8c32, /* 1477, 0x100055c, U+055c, KEY_Armenian_amanak, ARMENIAN EXCLAMATION MARK */
	0x531d, /*  922, 0x6bf, KEY_Serbian_DZE, deprecated */
	0x2b3a, /*  492, 0xd0, KEY_Eth, deprecated */
	0x8bbf, /* 1473, 0x100055d, U+055d, KEY_Armenian_but, ARMENIAN COMMA */
	0xe21c, /* 2295, 0xff56, KEY_SunPageDown, Same as XK_Next */
	0xe235, /* 2296, 0xff65, KEY_SunUndo, Same as XK_Undo */
	0xe24a, /* 2297, 0xff66, KEY_SunAgain, Same as XK_Redo */
	0x03a7, /*   42, 0xff55, KEY_Page_Up */
	0xe260, /* 2298, 0xff68, KEY_SunFind, Same as XK_Find */
	0xe275, /* 2299, 0xff69, KEY_SunStop, Same as XK_Cancel */
	0x2bf6, /*  501, 0xd8, U+00d8, KEY_Ooblique, LATIN CAPITAL LETTER O WITH STROKE */
	0xeb02, /* 2388, 0x1000ff6f, KEY_ClearLine */
	0xeb79, /* 2393, 0x1000ff74, KEY_BackTab */
	0x0000,
	0x0000,
	0x0000,
	0x2c8c, /*  508, 0xde, KEY_Thorn, deprecated */
	0xec06, /* 2399, 0x100000aa, KEY_mute_asciicircum */
	0x0000,
	0xe1b7, /* 2291, 0xff61, KEY_SunPrint_Screen, Same as XK_Print */
	0x0b2b, /*  145, 0xffda, KEY_R9 */
	0xec40, /* 2401, 0x100000ac, KEY_mute_asciitilde */
	0x0000,
	0x2110, /*  354, 0x27, KEY_quoteright, deprecated */
	0x0000,
	0x0000,
	0x6169, /* 1061, 0xff7e, KEY_Greek_switch, Alias for mode_switch */
	0xec5d, /* 2402, 0x100000af, KEY_lira */
	0x4172, /*  756, 0xff7e, KEY_kana_switch, Alias for mode_switch */
	0x0b90, /*  151, 0xffdd, KEY_R12 */
	0x0e16, /*  180, 0xff7e, KEY_ISO_Group_Shift, Alias for mode_switch */
	0x0000,
	0x0bb2, /*  153, 0xffde, KEY_R13 */
	0x3c34, /*  693, 0x4a5, KEY_kana_middledot, deprecated */
	0x0000,
	0x0000,
	0x0000,
	0xec24, /* 2400, 0x100000ab, KEY_mute_diaeresis */
	0x0000,
	0x0000,
	0x4a3e, /*  844, 0x10006cc, U+06cc, KEY_Arabic_farsi_yeh, ARABIC LETTER FARSI YEH */
	0x5a3b, /*  992, 0x7a5, KEY_Greek_IOTAdiaeresis, old typo */
	0x2ec7, /*  535, 0xf8, U+00f8, KEY_ooblique, LATIN SMALL LETTER O WITH STROKE */
	0x3d1e, /*  704, 0x4af, KEY_kana_tu, deprecated */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xeac9, /* 2385, 0x1000ff6c, KEY_Reset */
	0x1287, /*  216, 0xfe53, KEY_dead_perispomeni, alias for dead_tilde */
	0xeaf0, /* 2387, 0x1000ff6e, KEY_User */
	0x7312, /* 1241, 0xce1, KEY_hebrew_beth, deprecated */
	0x7345, /* 1243, 0xce2, KEY_hebrew_gimmel, deprecated */
	0x737a, /* 1245, 0xce3, KEY_hebrew_daleth, deprecated */
	0x8ca8, /* 1481, 0x100055e, U+055e, KEY_Armenian_paruyk, ARMENIAN QUESTION MARK */
	0xeb61, /* 2392, 0x1000ff73, KEY_DeleteChar */
	0x73dd, /* 1249, 0xce6, KEY_hebrew_zayin, deprecated */
	0x7410, /* 1251, 0xce7, KEY_hebrew_het, deprecated */
	0x7440, /* 1253, 0xce8, KEY_hebrew_teth, deprecated */
	0x065b, /*   76, 0xff9b, KEY_KP_Page_Down */
	0x0000,
	0x3eb1, /*  723, 0x4c1, KEY_kana_TI, deprecated */
	0x3edc, /*  725, 0x4c2, KEY_kana_TU, deprecated */
	0x0000,
	0xec94, /* 2405, 0x100000f6, KEY_longminus */
	0x8c6c, /* 1479, 0x100055b, U+055b, KEY_Armenian_shesht, ARMENIAN EMPHASIS MARK */
	0x0000,
	0x7547, /* 1263, 0xcf1, KEY_hebrew_samekh, deprecated */
	0xe6d1, /* 2342, 0x100000ee, KEY_hpIO */
	0x0b6e, /*  149, 0xffdc, KEY_R11 */
	0x0000,
	0x75cc, /* 1268, 0xcf5, KEY_hebrew_finalzadi, deprecated */
	0x3fc3, /*  736, 0x4cc, KEY_kana_HU, deprecated */
	0x7635, /* 1272, 0xcf7, KEY_hebrew_kuf, deprecated */
	0x0000,
	0x4a97, /*  847, 0xff7e, KEY_Arabic_switch, Alias for mode_switch */
	0x7697, /* 1276, 0xcfa, KEY_hebrew_taf, deprecated */
	0x76af, /* 1277, 0xff7e, KEY_Hebrew_switch, Alias for mode_switch */
	0x0000,
	0x5d9c, /* 1021, 0x7cb, U+039b, KEY_Greek_LAMBDA, GREEK CAPITAL LETTER LAMDA */
	0x2500, /*  412, 0x60, KEY_quoteleft, deprecated */
	0x0000,
	0xecab, /* 2406, 0x100000fc, KEY_block */
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
	0xec6f, /* 2403, 0x100000be, KEY_guilder */
	0x0000,
	0x0000,
	0x8b7a, /* 1471, 0x1000589, U+0589, KEY_Armenian_verjaket, ARMENIAN FULL STOP */
	0x8bf6, /* 1475, 0x100058a, U+058a, KEY_Armenian_yentamna, ARMENIAN HYPHEN */
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
	0x5ff9, /* 1046, 0x7eb, U+03bb, KEY_Greek_lambda, GREEK SMALL LETTER LAMDA */
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
	0x80f4, /* 1377, 0xff7e, KEY_Hangul_switch, Alias for mode_switch */
	0x02f5, /*   33, 0xff37, KEY_Kanji_Bangou, Codeinput */
	0xe1d4, /* 2292, 0xff20, KEY_SunCompose, Same as XK_Multi_key */
	0x0bd4, /*  155, 0xffdf, KEY_R14 */
	0x146a, /*  234, 0xfe64, KEY_dead_psili, alias for dead_abovecomma */
	0x14a7, /*  236, 0xfe65, KEY_dead_dasia, alias for dead_abovereversedcomma */
	0x0000,
	0xeb8e, /* 2394, 0x1000ff75, KEY_KP_BackTab */
	0x0000,
	0x062e, /*   74, 0xff9a, KEY_KP_Page_Up */
	0x0000,
	0x8068, /* 1373, 0xff3c, KEY_Hangul_SingleCandidate, Single candidate */
	0x0000,
	0x808c, /* 1374, 0xff3d, KEY_Hangul_MultipleCandidate, Multiple candidate */
	0xeb19, /* 2389, 0x1000ff70, KEY_InsertLine */
	0x0325, /*   35, 0xff3e, KEY_Mae_Koho, Previous Candidate */
	0x0000,
	0x0000,
	0x0000,
	0xeb31, /* 2390, 0x1000ff71, KEY_DeleteLine */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xeb49, /* 2391, 0x1000ff72, KEY_InsertChar */
	0x7fda, /* 1368, 0xff37, KEY_Hangul_Codeinput, Hangul code input mode */
	0x0000,
	0x0000,
	0x0000,
	0xec84, /* 2404, 0x100000ee, KEY_IO */
	0x3628, /*  623, 0x3a2, KEY_kappa, deprecated */
	0x030f, /*   34, 0xff3d, KEY_Zen_Koho, Multiple/All Candidate(s) */
	0x80b2, /* 1375, 0xff3e, KEY_Hangul_PreviousCandidate, Previous candidate */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7603, /* 1270, 0xcf6, KEY_hebrew_zadi, deprecated */
	0x0000,
	0x0000,
	0x4ef7, /*  882, 0x6a4, KEY_Ukranian_je, deprecated */
	0x47df, /*  822, 0x5e7, KEY_Arabic_heh, deprecated */
	0x4f44, /*  885, 0x6a6, KEY_Ukranian_i, deprecated */
	0x4f76, /*  887, 0x6a7, KEY_Ukranian_yi, deprecated */
	0x4fa8, /*  889, 0x6a8, KEY_Serbian_je, deprecated */
	0x4fda, /*  891, 0x6a9, KEY_Serbian_lje, deprecated */
	0x500d, /*  893, 0x6aa, KEY_Serbian_nje, deprecated */
	0xe1ec, /* 2293, 0xff7e, KEY_SunAltGraph, Same as XK_Mode_switch */
	0x0000,
	0x0000,
	};
#endif /* NEEDDTABLE */

/*
 *  KeyUnicode to object index.
 */
#ifdef NEEDUTABLE
#define UTABLESIZE 2407
#define UMAXHASH 8

static const unsigned short hashKeyuc[UTABLESIZE] = {
	0x7958, /* 1303, 0xdba, U+0e1a, KEY_Thai_bobaimai, THAI CHARACTER BO BAIMAI */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x79a6, /* 1306, 0xdbd, U+0e1d, KEY_Thai_fofa, THAI CHARACTER FO FA */
	0x0000,
	0x79bd, /* 1307, 0xdbe, U+0e1e, KEY_Thai_phophan, THAI CHARACTER PHO PHAN */
	0x0000,
	0x79d7, /* 1308, 0xdbf, U+0e1f, KEY_Thai_fofan, THAI CHARACTER FO FAN */
	0x0000,
	0x79ef, /* 1309, 0xdc0, U+0e20, KEY_Thai_phosamphao, THAI CHARACTER PHO SAMPHAO */
	0x0000,
	0x7a0c, /* 1310, 0xdc1, U+0e21, KEY_Thai_moma, THAI CHARACTER MO MA */
	0x0000,
	0x7a23, /* 1311, 0xdc2, U+0e22, KEY_Thai_yoyak, THAI CHARACTER YO YAK */
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
	0x2063, /*  346, 0x20, U+0020, KEY_space, SPACE */
	0x2076, /*  347, 0x21, U+0021, KEY_exclam, EXCLAMATION MARK */
	0x208a, /*  348, 0x22, U+0022, KEY_quotedbl, QUOTATION MARK */
	0x20a0, /*  349, 0x23, U+0023, KEY_numbersign, NUMBER SIGN */
	0x20b8, /*  350, 0x24, U+0024, KEY_dollar, DOLLAR SIGN */
	0x20cc, /*  351, 0x25, U+0025, KEY_percent, PERCENT SIGN */
	0x20e1, /*  352, 0x26, U+0026, KEY_ampersand, AMPERSAND */
	0x20f8, /*  353, 0x27, U+0027, KEY_apostrophe, APOSTROPHE */
	0x2128, /*  355, 0x28, U+0028, KEY_parenleft, LEFT PARENTHESIS */
	0x213f, /*  356, 0x29, U+0029, KEY_parenright, RIGHT PARENTHESIS */
	0x2157, /*  357, 0x2a, U+002a, KEY_asterisk, ASTERISK */
	0x216d, /*  358, 0x2b, U+002b, KEY_plus, PLUS SIGN */
	0x217f, /*  359, 0x2c, U+002c, KEY_comma, COMMA */
	0x2192, /*  360, 0x2d, U+002d, KEY_minus, HYPHEN-MINUS */
	0x21a5, /*  361, 0x2e, U+002e, KEY_period, FULL STOP */
	0x21b9, /*  362, 0x2f, U+002f, KEY_slash, SOLIDUS */
	0x21cc, /*  363, 0x30, U+0030, KEY_0, DIGIT ZERO */
	0x21db, /*  364, 0x31, U+0031, KEY_1, DIGIT ONE */
	0x21ea, /*  365, 0x32, U+0032, KEY_2, DIGIT TWO */
	0x21f9, /*  366, 0x33, U+0033, KEY_3, DIGIT THREE */
	0x2208, /*  367, 0x34, U+0034, KEY_4, DIGIT FOUR */
	0x2217, /*  368, 0x35, U+0035, KEY_5, DIGIT FIVE */
	0x2226, /*  369, 0x36, U+0036, KEY_6, DIGIT SIX */
	0x2235, /*  370, 0x37, U+0037, KEY_7, DIGIT SEVEN */
	0x2244, /*  371, 0x38, U+0038, KEY_8, DIGIT EIGHT */
	0x2253, /*  372, 0x39, U+0039, KEY_9, DIGIT NINE */
	0x2262, /*  373, 0x3a, U+003a, KEY_colon, COLON */
	0x2275, /*  374, 0x3b, U+003b, KEY_semicolon, SEMICOLON */
	0x228c, /*  375, 0x3c, U+003c, KEY_less, LESS-THAN SIGN */
	0x229e, /*  376, 0x3d, U+003d, KEY_equal, EQUALS SIGN */
	0x22b1, /*  377, 0x3e, U+003e, KEY_greater, GREATER-THAN SIGN */
	0x22c6, /*  378, 0x3f, U+003f, KEY_question, QUESTION MARK */
	0x22dc, /*  379, 0x40, U+0040, KEY_at, COMMERCIAL AT */
	0x22ec, /*  380, 0x41, U+0041, KEY_A, LATIN CAPITAL LETTER A */
	0x22fb, /*  381, 0x42, U+0042, KEY_B, LATIN CAPITAL LETTER B */
	0x230a, /*  382, 0x43, U+0043, KEY_C, LATIN CAPITAL LETTER C */
	0x2319, /*  383, 0x44, U+0044, KEY_D, LATIN CAPITAL LETTER D */
	0x2328, /*  384, 0x45, U+0045, KEY_E, LATIN CAPITAL LETTER E */
	0x2337, /*  385, 0x46, U+0046, KEY_F, LATIN CAPITAL LETTER F */
	0x2346, /*  386, 0x47, U+0047, KEY_G, LATIN CAPITAL LETTER G */
	0x2355, /*  387, 0x48, U+0048, KEY_H, LATIN CAPITAL LETTER H */
	0x2364, /*  388, 0x49, U+0049, KEY_I, LATIN CAPITAL LETTER I */
	0x2373, /*  389, 0x4a, U+004a, KEY_J, LATIN CAPITAL LETTER J */
	0x2382, /*  390, 0x4b, U+004b, KEY_K, LATIN CAPITAL LETTER K */
	0x2391, /*  391, 0x4c, U+004c, KEY_L, LATIN CAPITAL LETTER L */
	0x23a0, /*  392, 0x4d, U+004d, KEY_M, LATIN CAPITAL LETTER M */
	0x23af, /*  393, 0x4e, U+004e, KEY_N, LATIN CAPITAL LETTER N */
	0x23be, /*  394, 0x4f, U+004f, KEY_O, LATIN CAPITAL LETTER O */
	0x23cd, /*  395, 0x50, U+0050, KEY_P, LATIN CAPITAL LETTER P */
	0x23dc, /*  396, 0x51, U+0051, KEY_Q, LATIN CAPITAL LETTER Q */
	0x23eb, /*  397, 0x52, U+0052, KEY_R, LATIN CAPITAL LETTER R */
	0x23fa, /*  398, 0x53, U+0053, KEY_S, LATIN CAPITAL LETTER S */
	0x2409, /*  399, 0x54, U+0054, KEY_T, LATIN CAPITAL LETTER T */
	0x2418, /*  400, 0x55, U+0055, KEY_U, LATIN CAPITAL LETTER U */
	0x2427, /*  401, 0x56, U+0056, KEY_V, LATIN CAPITAL LETTER V */
	0x2436, /*  402, 0x57, U+0057, KEY_W, LATIN CAPITAL LETTER W */
	0x2445, /*  403, 0x58, U+0058, KEY_X, LATIN CAPITAL LETTER X */
	0x2454, /*  404, 0x59, U+0059, KEY_Y, LATIN CAPITAL LETTER Y */
	0x2463, /*  405, 0x5a, U+005a, KEY_Z, LATIN CAPITAL LETTER Z */
	0x2472, /*  406, 0x5b, U+005b, KEY_bracketleft, LEFT SQUARE BRACKET */
	0x248b, /*  407, 0x5c, U+005c, KEY_backslash, REVERSE SOLIDUS */
	0x24a2, /*  408, 0x5d, U+005d, KEY_bracketright, RIGHT SQUARE BRACKET */
	0x24bc, /*  409, 0x5e, U+005e, KEY_asciicircum, CIRCUMFLEX ACCENT */
	0x24d5, /*  410, 0x5f, U+005f, KEY_underscore, LOW LINE */
	0x24ed, /*  411, 0x60, U+0060, KEY_grave, GRAVE ACCENT */
	0x2517, /*  413, 0x61, U+0061, KEY_a, LATIN SMALL LETTER A */
	0x2526, /*  414, 0x62, U+0062, KEY_b, LATIN SMALL LETTER B */
	0x2535, /*  415, 0x63, U+0063, KEY_c, LATIN SMALL LETTER C */
	0x2544, /*  416, 0x64, U+0064, KEY_d, LATIN SMALL LETTER D */
	0x2553, /*  417, 0x65, U+0065, KEY_e, LATIN SMALL LETTER E */
	0x2562, /*  418, 0x66, U+0066, KEY_f, LATIN SMALL LETTER F */
	0x2571, /*  419, 0x67, U+0067, KEY_g, LATIN SMALL LETTER G */
	0x2580, /*  420, 0x68, U+0068, KEY_h, LATIN SMALL LETTER H */
	0x258f, /*  421, 0x69, U+0069, KEY_i, LATIN SMALL LETTER I */
	0x259e, /*  422, 0x6a, U+006a, KEY_j, LATIN SMALL LETTER J */
	0x25ad, /*  423, 0x6b, U+006b, KEY_k, LATIN SMALL LETTER K */
	0x25bc, /*  424, 0x6c, U+006c, KEY_l, LATIN SMALL LETTER L */
	0x25cb, /*  425, 0x6d, U+006d, KEY_m, LATIN SMALL LETTER M */
	0x25da, /*  426, 0x6e, U+006e, KEY_n, LATIN SMALL LETTER N */
	0x25e9, /*  427, 0x6f, U+006f, KEY_o, LATIN SMALL LETTER O */
	0x25f8, /*  428, 0x70, U+0070, KEY_p, LATIN SMALL LETTER P */
	0x2607, /*  429, 0x71, U+0071, KEY_q, LATIN SMALL LETTER Q */
	0x2616, /*  430, 0x72, U+0072, KEY_r, LATIN SMALL LETTER R */
	0x2625, /*  431, 0x73, U+0073, KEY_s, LATIN SMALL LETTER S */
	0x2634, /*  432, 0x74, U+0074, KEY_t, LATIN SMALL LETTER T */
	0x2643, /*  433, 0x75, U+0075, KEY_u, LATIN SMALL LETTER U */
	0x2652, /*  434, 0x76, U+0076, KEY_v, LATIN SMALL LETTER V */
	0x2661, /*  435, 0x77, U+0077, KEY_w, LATIN SMALL LETTER W */
	0x2670, /*  436, 0x78, U+0078, KEY_x, LATIN SMALL LETTER X */
	0x267f, /*  437, 0x79, U+0079, KEY_y, LATIN SMALL LETTER Y */
	0x268e, /*  438, 0x7a, U+007a, KEY_z, LATIN SMALL LETTER Z */
	0x269d, /*  439, 0x7b, U+007b, KEY_braceleft, LEFT CURLY BRACKET */
	0x26b4, /*  440, 0x7c, U+007c, KEY_bar, VERTICAL LINE */
	0x26c5, /*  441, 0x7d, U+007d, KEY_braceright, RIGHT CURLY BRACKET */
	0x26dd, /*  442, 0x7e, U+007e, KEY_asciitilde, TILDE */
	0x0000,
	0x66ab, /* 1112, 0x9e0, U+25c6, KEY_soliddiamond, BLACK DIAMOND */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xaaf8, /* 1786, 0x1002817, U+2817, KEY_braille_dots_1235, BRAILLE PATTERN DOTS-1235 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7225, /* 1231, 0xbcf, U+25cb, KEY_circle, WHITE CIRCLE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7cb3, /* 1337, 0xddf, U+0e3f, KEY_Thai_baht, THAI CURRENCY SYMBOL BAHT */
	0x0000,
	0x0000,
	0x0000,
	0x7cca, /* 1338, 0xde0, U+0e40, KEY_Thai_sarae, THAI CHARACTER SARA E */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x26f5, /*  443, 0xa0, U+00a0, KEY_nobreakspace, NO-BREAK SPACE */
	0x270f, /*  444, 0xa1, U+00a1, KEY_exclamdown, INVERTED EXCLAMATION MARK */
	0x2727, /*  445, 0xa2, U+00a2, KEY_cent, CENT SIGN */
	0x2739, /*  446, 0xa3, U+00a3, KEY_sterling, POUND SIGN */
	0x274f, /*  447, 0xa4, U+00a4, KEY_currency, CURRENCY SIGN */
	0x2765, /*  448, 0xa5, U+00a5, KEY_yen, YEN SIGN */
	0x2776, /*  449, 0xa6, U+00a6, KEY_brokenbar, BROKEN BAR */
	0x278d, /*  450, 0xa7, U+00a7, KEY_section, SECTION SIGN */
	0x27a2, /*  451, 0xa8, U+00a8, KEY_diaeresis, DIAERESIS */
	0x27b9, /*  452, 0xa9, U+00a9, KEY_copyright, COPYRIGHT SIGN */
	0x27d0, /*  453, 0xaa, U+00aa, KEY_ordfeminine, FEMININE ORDINAL INDICATOR */
	0x27e9, /*  454, 0xab, U+00ab, KEY_guillemotleft, LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x2804, /*  455, 0xac, U+00ac, KEY_notsign, NOT SIGN */
	0x2819, /*  456, 0xad, U+00ad, KEY_hyphen, SOFT HYPHEN */
	0x282d, /*  457, 0xae, U+00ae, KEY_registered, REGISTERED SIGN */
	0x2845, /*  458, 0xaf, U+00af, KEY_macron, MACRON */
	0x2859, /*  459, 0xb0, U+00b0, KEY_degree, DEGREE SIGN */
	0x286d, /*  460, 0xb1, U+00b1, KEY_plusminus, PLUS-MINUS SIGN */
	0x2884, /*  461, 0xb2, U+00b2, KEY_twosuperior, SUPERSCRIPT TWO */
	0x289d, /*  462, 0xb3, U+00b3, KEY_threesuperior, SUPERSCRIPT THREE */
	0x28b8, /*  463, 0xb4, U+00b4, KEY_acute, ACUTE ACCENT */
	0x28cb, /*  464, 0xb5, U+00b5, KEY_mu, MICRO SIGN */
	0x28db, /*  465, 0xb6, U+00b6, KEY_paragraph, PILCROW SIGN */
	0x28f2, /*  466, 0xb7, U+00b7, KEY_periodcentered, MIDDLE DOT */
	0x290e, /*  467, 0xb8, U+00b8, KEY_cedilla, CEDILLA */
	0x2923, /*  468, 0xb9, U+00b9, KEY_onesuperior, SUPERSCRIPT ONE */
	0x293c, /*  469, 0xba, U+00ba, KEY_masculine, MASCULINE ORDINAL INDICATOR */
	0x2953, /*  470, 0xbb, U+00bb, KEY_guillemotright, RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
	0x296f, /*  471, 0xbc, U+00bc, KEY_onequarter, VULGAR FRACTION ONE QUARTER */
	0x2987, /*  472, 0xbd, U+00bd, KEY_onehalf, VULGAR FRACTION ONE HALF */
	0x299c, /*  473, 0xbe, U+00be, KEY_threequarters, VULGAR FRACTION THREE QUARTERS */
	0x29b7, /*  474, 0xbf, U+00bf, KEY_questiondown, INVERTED QUESTION MARK */
	0x29d1, /*  475, 0xc0, U+00c0, KEY_Agrave, LATIN CAPITAL LETTER A WITH GRAVE */
	0x29e5, /*  476, 0xc1, U+00c1, KEY_Aacute, LATIN CAPITAL LETTER A WITH ACUTE */
	0x29f9, /*  477, 0xc2, U+00c2, KEY_Acircumflex, LATIN CAPITAL LETTER A WITH CIRCUMFLEX */
	0x2a12, /*  478, 0xc3, U+00c3, KEY_Atilde, LATIN CAPITAL LETTER A WITH TILDE */
	0x2a26, /*  479, 0xc4, U+00c4, KEY_Adiaeresis, LATIN CAPITAL LETTER A WITH DIAERESIS */
	0x2a3e, /*  480, 0xc5, U+00c5, KEY_Aring, LATIN CAPITAL LETTER A WITH RING ABOVE */
	0x2a51, /*  481, 0xc6, U+00c6, KEY_AE, LATIN CAPITAL LETTER AE */
	0x2a61, /*  482, 0xc7, U+00c7, KEY_Ccedilla, LATIN CAPITAL LETTER C WITH CEDILLA */
	0x2a77, /*  483, 0xc8, U+00c8, KEY_Egrave, LATIN CAPITAL LETTER E WITH GRAVE */
	0x2a8b, /*  484, 0xc9, U+00c9, KEY_Eacute, LATIN CAPITAL LETTER E WITH ACUTE */
	0x2a9f, /*  485, 0xca, U+00ca, KEY_Ecircumflex, LATIN CAPITAL LETTER E WITH CIRCUMFLEX */
	0x2ab8, /*  486, 0xcb, U+00cb, KEY_Ediaeresis, LATIN CAPITAL LETTER E WITH DIAERESIS */
	0x2ad0, /*  487, 0xcc, U+00cc, KEY_Igrave, LATIN CAPITAL LETTER I WITH GRAVE */
	0x2ae4, /*  488, 0xcd, U+00cd, KEY_Iacute, LATIN CAPITAL LETTER I WITH ACUTE */
	0x2af8, /*  489, 0xce, U+00ce, KEY_Icircumflex, LATIN CAPITAL LETTER I WITH CIRCUMFLEX */
	0x2b11, /*  490, 0xcf, U+00cf, KEY_Idiaeresis, LATIN CAPITAL LETTER I WITH DIAERESIS */
	0x2b29, /*  491, 0xd0, U+00d0, KEY_ETH, LATIN CAPITAL LETTER ETH */
	0x2b4b, /*  493, 0xd1, U+00d1, KEY_Ntilde, LATIN CAPITAL LETTER N WITH TILDE */
	0x2b5f, /*  494, 0xd2, U+00d2, KEY_Ograve, LATIN CAPITAL LETTER O WITH GRAVE */
	0x2b73, /*  495, 0xd3, U+00d3, KEY_Oacute, LATIN CAPITAL LETTER O WITH ACUTE */
	0x2b87, /*  496, 0xd4, U+00d4, KEY_Ocircumflex, LATIN CAPITAL LETTER O WITH CIRCUMFLEX */
	0x2ba0, /*  497, 0xd5, U+00d5, KEY_Otilde, LATIN CAPITAL LETTER O WITH TILDE */
	0x2bb4, /*  498, 0xd6, U+00d6, KEY_Odiaeresis, LATIN CAPITAL LETTER O WITH DIAERESIS */
	0x2bcc, /*  499, 0xd7, U+00d7, KEY_multiply, MULTIPLICATION SIGN */
	0x2be2, /*  500, 0xd8, U+00d8, KEY_Oslash, LATIN CAPITAL LETTER O WITH STROKE */
	0x2c0c, /*  502, 0xd9, U+00d9, KEY_Ugrave, LATIN CAPITAL LETTER U WITH GRAVE */
	0x2c20, /*  503, 0xda, U+00da, KEY_Uacute, LATIN CAPITAL LETTER U WITH ACUTE */
	0x2c34, /*  504, 0xdb, U+00db, KEY_Ucircumflex, LATIN CAPITAL LETTER U WITH CIRCUMFLEX */
	0x2c4d, /*  505, 0xdc, U+00dc, KEY_Udiaeresis, LATIN CAPITAL LETTER U WITH DIAERESIS */
	0x2c65, /*  506, 0xdd, U+00dd, KEY_Yacute, LATIN CAPITAL LETTER Y WITH ACUTE */
	0x2c79, /*  507, 0xde, U+00de, KEY_THORN, LATIN CAPITAL LETTER THORN */
	0x2c9f, /*  509, 0xdf, U+00df, KEY_ssharp, LATIN SMALL LETTER SHARP S */
	0x2cb3, /*  510, 0xe0, U+00e0, KEY_agrave, LATIN SMALL LETTER A WITH GRAVE */
	0x2cc7, /*  511, 0xe1, U+00e1, KEY_aacute, LATIN SMALL LETTER A WITH ACUTE */
	0x2cdb, /*  512, 0xe2, U+00e2, KEY_acircumflex, LATIN SMALL LETTER A WITH CIRCUMFLEX */
	0x2cf4, /*  513, 0xe3, U+00e3, KEY_atilde, LATIN SMALL LETTER A WITH TILDE */
	0x2d08, /*  514, 0xe4, U+00e4, KEY_adiaeresis, LATIN SMALL LETTER A WITH DIAERESIS */
	0x2d20, /*  515, 0xe5, U+00e5, KEY_aring, LATIN SMALL LETTER A WITH RING ABOVE */
	0x2d33, /*  516, 0xe6, U+00e6, KEY_ae, LATIN SMALL LETTER AE */
	0x2d43, /*  517, 0xe7, U+00e7, KEY_ccedilla, LATIN SMALL LETTER C WITH CEDILLA */
	0x2d59, /*  518, 0xe8, U+00e8, KEY_egrave, LATIN SMALL LETTER E WITH GRAVE */
	0x2d6d, /*  519, 0xe9, U+00e9, KEY_eacute, LATIN SMALL LETTER E WITH ACUTE */
	0x2d81, /*  520, 0xea, U+00ea, KEY_ecircumflex, LATIN SMALL LETTER E WITH CIRCUMFLEX */
	0x2d9a, /*  521, 0xeb, U+00eb, KEY_ediaeresis, LATIN SMALL LETTER E WITH DIAERESIS */
	0x2db2, /*  522, 0xec, U+00ec, KEY_igrave, LATIN SMALL LETTER I WITH GRAVE */
	0x2dc6, /*  523, 0xed, U+00ed, KEY_iacute, LATIN SMALL LETTER I WITH ACUTE */
	0x2dda, /*  524, 0xee, U+00ee, KEY_icircumflex, LATIN SMALL LETTER I WITH CIRCUMFLEX */
	0x2df3, /*  525, 0xef, U+00ef, KEY_idiaeresis, LATIN SMALL LETTER I WITH DIAERESIS */
	0x2e0b, /*  526, 0xf0, U+00f0, KEY_eth, LATIN SMALL LETTER ETH */
	0x2e1c, /*  527, 0xf1, U+00f1, KEY_ntilde, LATIN SMALL LETTER N WITH TILDE */
	0x2e30, /*  528, 0xf2, U+00f2, KEY_ograve, LATIN SMALL LETTER O WITH GRAVE */
	0x2e44, /*  529, 0xf3, U+00f3, KEY_oacute, LATIN SMALL LETTER O WITH ACUTE */
	0x2e58, /*  530, 0xf4, U+00f4, KEY_ocircumflex, LATIN SMALL LETTER O WITH CIRCUMFLEX */
	0x2e71, /*  531, 0xf5, U+00f5, KEY_otilde, LATIN SMALL LETTER O WITH TILDE */
	0x2e85, /*  532, 0xf6, U+00f6, KEY_odiaeresis, LATIN SMALL LETTER O WITH DIAERESIS */
	0x2e9d, /*  533, 0xf7, U+00f7, KEY_division, DIVISION SIGN */
	0x2eb3, /*  534, 0xf8, U+00f8, KEY_oslash, LATIN SMALL LETTER O WITH STROKE */
	0x2edd, /*  536, 0xf9, U+00f9, KEY_ugrave, LATIN SMALL LETTER U WITH GRAVE */
	0x2ef1, /*  537, 0xfa, U+00fa, KEY_uacute, LATIN SMALL LETTER U WITH ACUTE */
	0x2f05, /*  538, 0xfb, U+00fb, KEY_ucircumflex, LATIN SMALL LETTER U WITH CIRCUMFLEX */
	0x2f1e, /*  539, 0xfc, U+00fc, KEY_udiaeresis, LATIN SMALL LETTER U WITH DIAERESIS */
	0x2f36, /*  540, 0xfd, U+00fd, KEY_yacute, LATIN SMALL LETTER Y WITH ACUTE */
	0x2f4a, /*  541, 0xfe, U+00fe, KEY_thorn, LATIN SMALL LETTER THORN */
	0x2f5d, /*  542, 0xff, U+00ff, KEY_ydiaeresis, LATIN SMALL LETTER Y WITH DIAERESIS */
	0x375b, /*  638, 0x3c0, U+0100, KEY_Amacron, LATIN CAPITAL LETTER A WITH MACRON */
	0x3830, /*  648, 0x3e0, U+0101, KEY_amacron, LATIN SMALL LETTER A WITH MACRON */
	0x317a, /*  568, 0x1c3, U+0102, KEY_Abreve, LATIN CAPITAL LETTER A WITH BREVE */
	0x32c9, /*  584, 0x1e3, U+0103, KEY_abreve, LATIN SMALL LETTER A WITH BREVE */
	0x2f75, /*  543, 0x1a1, U+0104, KEY_Aogonek, LATIN CAPITAL LETTER A WITH OGONEK */
	0x3057, /*  554, 0x1b1, U+0105, KEY_aogonek, LATIN SMALL LETTER A WITH OGONEK */
	0x31a2, /*  570, 0x1c6, U+0106, KEY_Cacute, LATIN CAPITAL LETTER C WITH ACUTE */
	0x32f1, /*  586, 0x1e6, U+0107, KEY_cacute, LATIN SMALL LETTER C WITH ACUTE */
	0x3514, /*  611, 0x2c6, U+0108, KEY_Ccircumflex, LATIN CAPITAL LETTER C WITH CIRCUMFLEX */
	0x35a1, /*  617, 0x2e6, U+0109, KEY_ccircumflex, LATIN SMALL LETTER C WITH CIRCUMFLEX */
	0x34fd, /*  610, 0x2c5, U+010a, KEY_Cabovedot, LATIN CAPITAL LETTER C WITH DOT ABOVE */
	0x358a, /*  616, 0x2e5, U+010b, KEY_cabovedot, LATIN SMALL LETTER C WITH DOT ABOVE */
	0x31b6, /*  571, 0x1c8, U+010c, KEY_Ccaron, LATIN CAPITAL LETTER C WITH CARON */
	0x3305, /*  587, 0x1e8, U+010d, KEY_ccaron, LATIN SMALL LETTER C WITH CARON */
	0x31f3, /*  574, 0x1cf, U+010e, KEY_Dcaron, LATIN CAPITAL LETTER D WITH CARON */
	0x3342, /*  590, 0x1ef, U+010f, KEY_dcaron, LATIN SMALL LETTER D WITH CARON */
	0x3207, /*  575, 0x1d0, U+0110, KEY_Dstroke, LATIN CAPITAL LETTER D WITH STROKE */
	0x3356, /*  591, 0x1f0, U+0111, KEY_dstroke, LATIN SMALL LETTER D WITH STROKE */
	0x367b, /*  627, 0x3aa, U+0112, KEY_Emacron, LATIN CAPITAL LETTER E WITH MACRON */
	0x36fa, /*  633, 0x3ba, U+0113, KEY_emacron, LATIN SMALL LETTER E WITH MACRON */
	0x0000,
	0x0000,
	0x3785, /*  640, 0x3cc, U+0116, KEY_Eabovedot, LATIN CAPITAL LETTER E WITH DOT ABOVE */
	0x385a, /*  650, 0x3ec, U+0117, KEY_eabovedot, LATIN SMALL LETTER E WITH DOT ABOVE */
	0x31ca, /*  572, 0x1ca, U+0118, KEY_Eogonek, LATIN CAPITAL LETTER E WITH OGONEK */
	0x3319, /*  588, 0x1ea, U+0119, KEY_eogonek, LATIN SMALL LETTER E WITH OGONEK */
	0x31df, /*  573, 0x1cc, U+011a, KEY_Ecaron, LATIN CAPITAL LETTER E WITH CARON */
	0x332e, /*  589, 0x1ec, U+011b, KEY_ecaron, LATIN SMALL LETTER E WITH CARON */
	0x3544, /*  613, 0x2d8, U+011c, KEY_Gcircumflex, LATIN CAPITAL LETTER G WITH CIRCUMFLEX */
	0x35d1, /*  619, 0x2f8, U+011d, KEY_gcircumflex, LATIN SMALL LETTER G WITH CIRCUMFLEX */
	0x345f, /*  603, 0x2ab, U+011e, KEY_Gbreve, LATIN CAPITAL LETTER G WITH BREVE */
	0x34d0, /*  608, 0x2bb, U+011f, KEY_gbreve, LATIN SMALL LETTER G WITH BREVE */
	0x352d, /*  612, 0x2d5, U+0120, KEY_Gabovedot, LATIN CAPITAL LETTER G WITH DOT ABOVE */
	0x35ba, /*  618, 0x2f5, U+0121, KEY_gabovedot, LATIN SMALL LETTER G WITH DOT ABOVE */
	0x3690, /*  628, 0x3ab, U+0122, KEY_Gcedilla, LATIN CAPITAL LETTER G WITH CEDILLA */
	0x370f, /*  634, 0x3bb, U+0123, KEY_gcedilla, LATIN SMALL LETTER G WITH CEDILLA */
	0x342f, /*  601, 0x2a6, U+0124, KEY_Hcircumflex, LATIN CAPITAL LETTER H WITH CIRCUMFLEX */
	0x34a1, /*  606, 0x2b6, U+0125, KEY_hcircumflex, LATIN SMALL LETTER H WITH CIRCUMFLEX */
	0x341a, /*  600, 0x2a1, U+0126, KEY_Hstroke, LATIN CAPITAL LETTER H WITH STROKE */
	0x348c, /*  605, 0x2b1, U+0127, KEY_hstroke, LATIN SMALL LETTER H WITH STROKE */
	0x3651, /*  625, 0x3a5, U+0128, KEY_Itilde, LATIN CAPITAL LETTER I WITH TILDE */
	0x36d0, /*  631, 0x3b5, U+0129, KEY_itilde, LATIN SMALL LETTER I WITH TILDE */
	0x379c, /*  641, 0x3cf, U+012a, KEY_Imacron, LATIN CAPITAL LETTER I WITH MACRON */
	0x3871, /*  651, 0x3ef, U+012b, KEY_imacron, LATIN SMALL LETTER I WITH MACRON */
	0x9893, /* 1599, 0x100012c, U+012c, KEY_Ibreve, LATIN CAPITAL LETTER I WITH BREVE */
	0x9910, /* 1605, 0x100012d, U+012d, KEY_ibreve, LATIN SMALL LETTER I WITH BREVE */
	0x3770, /*  639, 0x3c7, U+012e, KEY_Iogonek, LATIN CAPITAL LETTER I WITH OGONEK */
	0x3845, /*  649, 0x3e7, U+012f, KEY_iogonek, LATIN SMALL LETTER I WITH OGONEK */
	0x3448, /*  602, 0x2a9, U+0130, KEY_Iabovedot, LATIN CAPITAL LETTER I WITH DOT ABOVE */
	0x34ba, /*  607, 0x2b9, U+0131, KEY_idotless, LATIN SMALL LETTER DOTLESS I */
	0x0000,
	0x0000,
	0x3473, /*  604, 0x2ac, U+0134, KEY_Jcircumflex, LATIN CAPITAL LETTER J WITH CIRCUMFLEX */
	0x34e4, /*  609, 0x2bc, U+0135, KEY_jcircumflex, LATIN SMALL LETTER J WITH CIRCUMFLEX */
	0x37dc, /*  644, 0x3d3, U+0136, KEY_Kcedilla, LATIN CAPITAL LETTER K WITH CEDILLA */
	0x38b1, /*  654, 0x3f3, U+0137, KEY_kcedilla, LATIN SMALL LETTER K WITH CEDILLA */
	0x3617, /*  622, 0x3a2, U+0138, KEY_kra, LATIN SMALL LETTER KRA */
	0x318e, /*  569, 0x1c5, U+0139, KEY_Lacute, LATIN CAPITAL LETTER L WITH ACUTE */
	0x32dd, /*  585, 0x1e5, U+013a, KEY_lacute, LATIN SMALL LETTER L WITH ACUTE */
	0x3665, /*  626, 0x3a6, U+013b, KEY_Lcedilla, LATIN CAPITAL LETTER L WITH CEDILLA */
	0x36e4, /*  632, 0x3b6, U+013c, KEY_lcedilla, LATIN SMALL LETTER L WITH CEDILLA */
	0x2fb2, /*  546, 0x1a5, U+013d, KEY_Lcaron, LATIN CAPITAL LETTER L WITH CARON */
	0x3095, /*  557, 0x1b5, U+013e, KEY_lcaron, LATIN SMALL LETTER L WITH CARON */
	0x0000,
	0x0000,
	0x2f9d, /*  545, 0x1a3, U+0141, KEY_Lstroke, LATIN CAPITAL LETTER L WITH STROKE */
	0x3080, /*  556, 0x1b3, U+0142, KEY_lstroke, LATIN SMALL LETTER L WITH STROKE */
	0x321c, /*  576, 0x1d1, U+0143, KEY_Nacute, LATIN CAPITAL LETTER N WITH ACUTE */
	0x336b, /*  592, 0x1f1, U+0144, KEY_nacute, LATIN SMALL LETTER N WITH ACUTE */
	0x37b1, /*  642, 0x3d1, U+0145, KEY_Ncedilla, LATIN CAPITAL LETTER N WITH CEDILLA */
	0x3886, /*  652, 0x3f1, U+0146, KEY_ncedilla, LATIN SMALL LETTER N WITH CEDILLA */
	0x3230, /*  577, 0x1d2, U+0147, KEY_Ncaron, LATIN CAPITAL LETTER N WITH CARON */
	0x337f, /*  593, 0x1f2, U+0148, KEY_ncaron, LATIN SMALL LETTER N WITH CARON */
	0x704f, /* 1211, 0xaf8, U+2640, KEY_femalesymbol, FEMALE SIGN */
	0x3739, /*  636, 0x3bd, U+014a, KEY_ENG, LATIN CAPITAL LETTER ENG */
	0x374a, /*  637, 0x3bf, U+014b, KEY_eng, LATIN SMALL LETTER ENG */
	0x37c7, /*  643, 0x3d2, U+014c, KEY_Omacron, LATIN CAPITAL LETTER O WITH MACRON */
	0x389c, /*  653, 0x3f2, U+014d, KEY_omacron, LATIN SMALL LETTER O WITH MACRON */
	0x0000,
	0x0000,
	0x3244, /*  578, 0x1d5, U+0150, KEY_Odoubleacute, LATIN CAPITAL LETTER O WITH DOUBLE ACUTE */
	0x3393, /*  594, 0x1f5, U+0151, KEY_odoubleacute, LATIN SMALL LETTER O WITH DOUBLE ACUTE */
	0x3b53, /*  684, 0x13bc, U+0152, KEY_OE, LATIN CAPITAL LIGATURE OE */
	0x3b63, /*  685, 0x13bd, U+0153, KEY_oe, LATIN SMALL LIGATURE OE */
	0x3166, /*  567, 0x1c0, U+0154, KEY_Racute, LATIN CAPITAL LETTER R WITH ACUTE */
	0x32b5, /*  583, 0x1e0, U+0155, KEY_racute, LATIN SMALL LETTER R WITH ACUTE */
	0x363b, /*  624, 0x3a3, U+0156, KEY_Rcedilla, LATIN CAPITAL LETTER R WITH CEDILLA */
	0x36ba, /*  630, 0x3b3, U+0157, KEY_rcedilla, LATIN SMALL LETTER R WITH CEDILLA */
	0x325e, /*  579, 0x1d8, U+0158, KEY_Rcaron, LATIN CAPITAL LETTER R WITH CARON */
	0x33ad, /*  595, 0x1f8, U+0159, KEY_rcaron, LATIN SMALL LETTER R WITH CARON */
	0x2fc6, /*  547, 0x1a6, U+015a, KEY_Sacute, LATIN CAPITAL LETTER S WITH ACUTE */
	0x30a9, /*  558, 0x1b6, U+015b, KEY_sacute, LATIN SMALL LETTER S WITH ACUTE */
	0x3571, /*  615, 0x2de, U+015c, KEY_Scircumflex, LATIN CAPITAL LETTER S WITH CIRCUMFLEX */
	0x35fe, /*  621, 0x2fe, U+015d, KEY_scircumflex, LATIN SMALL LETTER S WITH CIRCUMFLEX */
	0x2fee, /*  549, 0x1aa, U+015e, KEY_Scedilla, LATIN CAPITAL LETTER S WITH CEDILLA */
	0x30e4, /*  561, 0x1ba, U+015f, KEY_scedilla, LATIN SMALL LETTER S WITH CEDILLA */
	0x2fda, /*  548, 0x1a9, U+0160, KEY_Scaron, LATIN CAPITAL LETTER S WITH CARON */
	0x30d0, /*  560, 0x1b9, U+0161, KEY_scaron, LATIN SMALL LETTER S WITH CARON */
	0x329f, /*  582, 0x1de, U+0162, KEY_Tcedilla, LATIN CAPITAL LETTER T WITH CEDILLA */
	0x33ee, /*  598, 0x1fe, U+0163, KEY_tcedilla, LATIN SMALL LETTER T WITH CEDILLA */
	0x3004, /*  550, 0x1ab, U+0164, KEY_Tcaron, LATIN CAPITAL LETTER T WITH CARON */
	0x30fa, /*  562, 0x1bb, U+0165, KEY_tcaron, LATIN SMALL LETTER T WITH CARON */
	0x36a6, /*  629, 0x3ac, U+0166, KEY_Tslash, LATIN CAPITAL LETTER T WITH STROKE */
	0x3725, /*  635, 0x3bc, U+0167, KEY_tslash, LATIN SMALL LETTER T WITH STROKE */
	0x3807, /*  646, 0x3dd, U+0168, KEY_Utilde, LATIN CAPITAL LETTER U WITH TILDE */
	0x38dc, /*  656, 0x3fd, U+0169, KEY_utilde, LATIN SMALL LETTER U WITH TILDE */
	0x381b, /*  647, 0x3de, U+016a, KEY_Umacron, LATIN CAPITAL LETTER U WITH MACRON */
	0x38f0, /*  657, 0x3fe, U+016b, KEY_umacron, LATIN SMALL LETTER U WITH MACRON */
	0x355d, /*  614, 0x2dd, U+016c, KEY_Ubreve, LATIN CAPITAL LETTER U WITH BREVE */
	0x35ea, /*  620, 0x2fd, U+016d, KEY_ubreve, LATIN SMALL LETTER U WITH BREVE */
	0x3272, /*  580, 0x1d9, U+016e, KEY_Uring, LATIN CAPITAL LETTER U WITH RING ABOVE */
	0x33c1, /*  596, 0x1f9, U+016f, KEY_uring, LATIN SMALL LETTER U WITH RING ABOVE */
	0x3285, /*  581, 0x1db, U+0170, KEY_Udoubleacute, LATIN CAPITAL LETTER U WITH DOUBLE ACUTE */
	0x33d4, /*  597, 0x1fb, U+0171, KEY_udoubleacute, LATIN SMALL LETTER U WITH DOUBLE ACUTE */
	0x37f2, /*  645, 0x3d9, U+0172, KEY_Uogonek, LATIN CAPITAL LETTER U WITH OGONEK */
	0x38c7, /*  655, 0x3f9, U+0173, KEY_uogonek, LATIN SMALL LETTER U WITH OGONEK */
	0x3905, /*  658, 0x1000174, U+0174, KEY_Wcircumflex, LATIN CAPITAL LETTER W WITH CIRCUMFLEX */
	0x391e, /*  659, 0x1000175, U+0175, KEY_wcircumflex, LATIN SMALL LETTER W WITH CIRCUMFLEX */
	0x3937, /*  660, 0x1000176, U+0176, KEY_Ycircumflex, LATIN CAPITAL LETTER Y WITH CIRCUMFLEX */
	0x3950, /*  661, 0x1000177, U+0177, KEY_ycircumflex, LATIN SMALL LETTER Y WITH CIRCUMFLEX */
	0x3b73, /*  686, 0x13be, U+0178, KEY_Ydiaeresis, LATIN CAPITAL LETTER Y WITH DIAERESIS */
	0x3018, /*  551, 0x1ac, U+0179, KEY_Zacute, LATIN CAPITAL LETTER Z WITH ACUTE */
	0x310e, /*  563, 0x1bc, U+017a, KEY_zacute, LATIN SMALL LETTER Z WITH ACUTE */
	0x3040, /*  553, 0x1af, U+017b, KEY_Zabovedot, LATIN CAPITAL LETTER Z WITH DOT ABOVE */
	0x314f, /*  566, 0x1bf, U+017c, KEY_zabovedot, LATIN SMALL LETTER Z WITH DOT ABOVE */
	0x302c, /*  552, 0x1ae, U+017d, KEY_Zcaron, LATIN CAPITAL LETTER Z WITH CARON */
	0x313b, /*  565, 0x1be, U+017e, KEY_zcaron, LATIN SMALL LETTER Z WITH CARON */
	0x0000,
	0x0000,
	0x6d30, /* 1181, 0xad9, U+271d, KEY_latincross, LATIN CROSS */
	0x0000,
	0x0000,
	0x6f8c, /* 1203, 0xaf0, U+2720, KEY_maltesecross, MALTESE CROSS */
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
	0x6f52, /* 1200, 0xaec, U+2663, KEY_club, BLACK CLUB SUIT */
	0x0000,
	0x0000,
	0x6627, /* 1106, 0x8f6, U+0192, KEY_function, LATIN SMALL LETTER F WITH HOOK */
	0x6f79, /* 1202, 0xaee, U+2665, KEY_heart, BLACK HEART SUIT */
	0x0000,
	0x6f64, /* 1201, 0xaed, U+2666, KEY_diamond, BLACK DIAMOND SUIT */
	0x0000,
	0x0000,
	0x413c, /*  754, 0x4de, U+309b, KEY_voicedsound, KATAKANA-HIRAGANA VOICED SOUND MARK */
	0x4155, /*  755, 0x4df, U+309c, KEY_semivoicedsound, KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3c65, /*  695, 0x4a7, U+30a1, KEY_kana_a, KATAKANA LETTER SMALL A */
	0x3d4f, /*  706, 0x4b1, U+30a2, KEY_kana_A, KATAKANA LETTER A */
	0x3c79, /*  696, 0x4a8, U+30a3, KEY_kana_i, KATAKANA LETTER SMALL I */
	0x3d63, /*  707, 0x4b2, U+30a4, KEY_kana_I, KATAKANA LETTER I */
	0x3c8d, /*  697, 0x4a9, U+30a5, KEY_kana_u, KATAKANA LETTER SMALL U */
	0x3d77, /*  708, 0x4b3, U+30a6, KEY_kana_U, KATAKANA LETTER U */
	0x3ca1, /*  698, 0x4aa, U+30a7, KEY_kana_e, KATAKANA LETTER SMALL E */
	0x3d8b, /*  709, 0x4b4, U+30a8, KEY_kana_E, KATAKANA LETTER E */
	0x3cb5, /*  699, 0x4ab, U+30a9, KEY_kana_o, KATAKANA LETTER SMALL O */
	0x3d9f, /*  710, 0x4b5, U+30aa, KEY_kana_O, KATAKANA LETTER O */
	0x3db3, /*  711, 0x4b6, U+30ab, KEY_kana_KA, KATAKANA LETTER KA */
	0x0000,
	0x3dc8, /*  712, 0x4b7, U+30ad, KEY_kana_KI, KATAKANA LETTER KI */
	0x0000,
	0x3ddd, /*  713, 0x4b8, U+30af, KEY_kana_KU, KATAKANA LETTER KU */
	0x0000,
	0x3df2, /*  714, 0x4b9, U+30b1, KEY_kana_KE, KATAKANA LETTER KE */
	0xa2d0, /* 1706, 0x10001af, U+01af, KEY_Uhorn, LATIN CAPITAL LETTER U WITH HORN */
	0x3e07, /*  715, 0x4ba, U+30b3, KEY_kana_KO, KATAKANA LETTER KO */
	0x0000,
	0x3e1c, /*  716, 0x4bb, U+30b5, KEY_kana_SA, KATAKANA LETTER SA */
	0x0000,
	0x3e31, /*  717, 0x4bc, U+30b7, KEY_kana_SHI, KATAKANA LETTER SI */
	0x98a7, /* 1600, 0x10001b5, U+01b5, KEY_Zstroke, LATIN CAPITAL LETTER Z WITH STROKE */
	0x3e47, /*  718, 0x4bd, U+30b9, KEY_kana_SU, KATAKANA LETTER SU */
	0x999c, /* 1612, 0x10001b7, U+01b7, KEY_EZH, LATIN CAPITAL LETTER EZH */
	0x3e5c, /*  719, 0x4be, U+30bb, KEY_kana_SE, KATAKANA LETTER SE */
	0x0000,
	0x3e71, /*  720, 0x4bf, U+30bd, KEY_kana_SO, KATAKANA LETTER SO */
	0x0000,
	0x3e86, /*  721, 0x4c0, U+30bf, KEY_kana_TA, KATAKANA LETTER TA */
	0x0000,
	0x3e9b, /*  722, 0x4c1, U+30c1, KEY_kana_CHI, KATAKANA LETTER TI */
	0x0000,
	0x3d08, /*  703, 0x4af, U+30c3, KEY_kana_tsu, KATAKANA LETTER SMALL TU */
	0x3ec6, /*  724, 0x4c2, U+30c4, KEY_kana_TSU, KATAKANA LETTER TU */
	0x0000,
	0x3ef1, /*  726, 0x4c3, U+30c6, KEY_kana_TE, KATAKANA LETTER TE */
	0x0000,
	0x3f06, /*  727, 0x4c4, U+30c8, KEY_kana_TO, KATAKANA LETTER TO */
	0x0000,
	0x3f1b, /*  728, 0x4c5, U+30ca, KEY_kana_NA, KATAKANA LETTER NA */
	0x3f30, /*  729, 0x4c6, U+30cb, KEY_kana_NI, KATAKANA LETTER NI */
	0x3f45, /*  730, 0x4c7, U+30cc, KEY_kana_NU, KATAKANA LETTER NU */
	0x3f5a, /*  731, 0x4c8, U+30cd, KEY_kana_NE, KATAKANA LETTER NE */
	0x3f6f, /*  732, 0x4c9, U+30ce, KEY_kana_NO, KATAKANA LETTER NO */
	0x3f84, /*  733, 0x4ca, U+30cf, KEY_kana_HA, KATAKANA LETTER HA */
	0x3969, /*  662, 0x1001e02, U+1e02, KEY_Babovedot, LATIN CAPITAL LETTER B WITH DOT ABOVE */
	0x3980, /*  663, 0x1001e03, U+1e03, KEY_babovedot, LATIN SMALL LETTER B WITH DOT ABOVE */
	0x3f99, /*  734, 0x4cb, U+30d2, KEY_kana_HI, KATAKANA LETTER HI */
	0x0000,
	0x98d0, /* 1602, 0x10001d1, U+01d1, KEY_Ocaron, LATIN CAPITAL LETTER O WITH CARON */
	0x3fae, /*  735, 0x4cc, U+30d5, KEY_kana_FU, KATAKANA LETTER HU */
	0x0000,
	0x0000,
	0x3997, /*  664, 0x1001e0a, U+1e0a, KEY_Dabovedot, LATIN CAPITAL LETTER D WITH DOT ABOVE */
	0x39ae, /*  665, 0x1001e0b, U+1e0b, KEY_dabovedot, LATIN SMALL LETTER D WITH DOT ABOVE */
	0x0000,
	0x3fed, /*  738, 0x4ce, U+30db, KEY_kana_HO, KATAKANA LETTER HO */
	0x0000,
	0x0000,
	0x4002, /*  739, 0x4cf, U+30de, KEY_kana_MA, KATAKANA LETTER MA */
	0x4017, /*  740, 0x4d0, U+30df, KEY_kana_MI, KATAKANA LETTER MI */
	0x402c, /*  741, 0x4d1, U+30e0, KEY_kana_MU, KATAKANA LETTER MU */
	0x4041, /*  742, 0x4d2, U+30e1, KEY_kana_ME, KATAKANA LETTER ME */
	0x4056, /*  743, 0x4d3, U+30e2, KEY_kana_MO, KATAKANA LETTER MO */
	0x3cc9, /*  700, 0x4ac, U+30e3, KEY_kana_ya, KATAKANA LETTER SMALL YA */
	0x406b, /*  744, 0x4d4, U+30e4, KEY_kana_YA, KATAKANA LETTER YA */
	0x3cde, /*  701, 0x4ad, U+30e5, KEY_kana_yu, KATAKANA LETTER SMALL YU */
	0x4080, /*  745, 0x4d5, U+30e6, KEY_kana_YU, KATAKANA LETTER YU */
	0x3cf3, /*  702, 0x4ae, U+30e7, KEY_kana_yo, KATAKANA LETTER SMALL YO */
	0x4095, /*  746, 0x4d6, U+30e8, KEY_kana_YO, KATAKANA LETTER YO */
	0x40aa, /*  747, 0x4d7, U+30e9, KEY_kana_RA, KATAKANA LETTER RA */
	0x40bf, /*  748, 0x4d8, U+30ea, KEY_kana_RI, KATAKANA LETTER RI */
	0x40d4, /*  749, 0x4d9, U+30eb, KEY_kana_RU, KATAKANA LETTER RU */
	0x39c5, /*  666, 0x1001e1e, U+1e1e, KEY_Fabovedot, LATIN CAPITAL LETTER F WITH DOT ABOVE */
	0x39dc, /*  667, 0x1001e1f, U+1e1f, KEY_fabovedot, LATIN SMALL LETTER F WITH DOT ABOVE */
	0x0000,
	0x4113, /*  752, 0x4dc, U+30ef, KEY_kana_WA, KATAKANA LETTER WA */
	0x0000,
	0x0000,
	0x3c50, /*  694, 0x4a6, U+30f2, KEY_kana_WO, KATAKANA LETTER WO */
	0x4128, /*  753, 0x4dd, U+30f3, KEY_kana_N, KATAKANA LETTER N */
	0x0000,
	0x0000,
	0x0000,
	0x7037, /* 1210, 0xaf7, U+2642, KEY_malesymbol, MALE SIGN */
	0x0000,
	0x0000,
	0x0000,
	0x3c16, /*  692, 0x4a5, U+30fb, KEY_kana_conjunctive, KATAKANA MIDDLE DOT */
	0x3d33, /*  705, 0x4b0, U+30fc, KEY_prolongedsound, KATAKANA-HIRAGANA PROLONGED SOUND MARK */
	0x0000,
	0x0000,
	0x0000,
	0x3bfe, /*  691, 0x4a4, U+3001, KEY_kana_comma, IDEOGRAPHIC COMMA */
	0x0000,
	0x3ba1, /*  688, 0x4a1, U+3002, KEY_kana_fullstop, IDEOGRAPHIC FULL STOP */
	0x0000,
	0x99be, /* 1614, 0x1001e36, U+1e36, KEY_Lbelowdot, LATIN CAPITAL LETTER L WITH DOT BELOW */
	0x99d5, /* 1615, 0x1001e37, U+1e37, KEY_lbelowdot, LATIN SMALL LETTER L WITH DOT BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x39f3, /*  668, 0x1001e40, U+1e40, KEY_Mabovedot, LATIN CAPITAL LETTER M WITH DOT ABOVE */
	0x3a0a, /*  669, 0x1001e41, U+1e41, KEY_mabovedot, LATIN SMALL LETTER M WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3bbc, /*  689, 0x4a2, U+300c, KEY_kana_openingbracket, LEFT CORNER BRACKET */
	0x0000,
	0x3bdd, /*  690, 0x4a3, U+300d, KEY_kana_closingbracket, RIGHT CORNER BRACKET */
	0x0000,
	0x0000,
	0x0000,
	0xaedf, /* 1819, 0x1002838, U+2838, KEY_braille_dots_456, BRAILLE PATTERN DOTS-456 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3a21, /*  670, 0x1001e56, U+1e56, KEY_Pabovedot, LATIN CAPITAL LETTER P WITH DOT ABOVE */
	0x3a38, /*  671, 0x1001e57, U+1e57, KEY_pabovedot, LATIN SMALL LETTER P WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3a4f, /*  672, 0x1001e60, U+1e60, KEY_Sabovedot, LATIN CAPITAL LETTER S WITH DOT ABOVE */
	0x3a66, /*  673, 0x1001e61, U+1e61, KEY_sabovedot, LATIN SMALL LETTER S WITH DOT ABOVE */
	0x8f61, /* 1508, 0x100053e, U+053e, KEY_Armenian_TSA, ARMENIAN CAPITAL LETTER CA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3a7d, /*  674, 0x1001e6a, U+1e6a, KEY_Tabovedot, LATIN CAPITAL LETTER T WITH DOT ABOVE */
	0x3a94, /*  675, 0x1001e6b, U+1e6b, KEY_tabovedot, LATIN SMALL LETTER T WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x0000,
	0xa605, /* 1739, 0x1002205, U+2205, KEY_emptyset, NULL SET */
	0x0000,
	0x0000,
	0x0000,
	0x7069, /* 1212, 0xaf9, U+260e, KEY_telephone, BLACK TELEPHONE */
	0x0000,
	0xa61b, /* 1740, 0x1002208, U+2208, KEY_elementof, ELEMENT OF */
	0x0000,
	0xa632, /* 1741, 0x1002209, U+2209, KEY_notelementof, NOT AN ELEMENT OF */
	0x0000,
	0x0000,
	0x909b, /* 1520, 0x1000544, U+0544, KEY_Armenian_MEN, ARMENIAN CAPITAL LETTER MEN */
	0xa64c, /* 1742, 0x100220b, U+220b, KEY_containsas, CONTAINS AS MEMBER */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x3aab, /*  676, 0x1001e80, U+1e80, KEY_Wgrave, LATIN CAPITAL LETTER W WITH GRAVE */
	0x3abf, /*  677, 0x1001e81, U+1e81, KEY_wgrave, LATIN SMALL LETTER W WITH GRAVE */
	0x3ad3, /*  678, 0x1001e82, U+1e82, KEY_Wacute, LATIN CAPITAL LETTER W WITH ACUTE */
	0x3ae7, /*  679, 0x1001e83, U+1e83, KEY_wacute, LATIN SMALL LETTER W WITH ACUTE */
	0x3afb, /*  680, 0x1001e84, U+1e84, KEY_Wdiaeresis, LATIN CAPITAL LETTER W WITH DIAERESIS */
	0x3b13, /*  681, 0x1001e85, U+1e85, KEY_wdiaeresis, LATIN SMALL LETTER W WITH DIAERESIS */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x987c, /* 1598, 0x1001e8a, U+1e8a, KEY_Xabovedot, LATIN CAPITAL LETTER X WITH DOT ABOVE */
	0x98f9, /* 1604, 0x1001e8b, U+1e8b, KEY_xabovedot, LATIN SMALL LETTER X WITH DOT ABOVE */
	0x0000,
	0x0000,
	0x9989, /* 1611, 0x1000259, U+0259, KEY_schwa, LATIN SMALL LETTER SCHWA */
	0x0000,
	0x0000,
	0x0000,
	0xc9aa, /* 2047, 0x1000da2, U+0da2, KEY_Sinh_ja, SINHALA JAYANNA */
	0x0000,
	0x0000,
	0x757b, /* 1265, 0xcf3, U+05e3, KEY_hebrew_finalpe, HEBREW LETTER FINAL PE */
	0x0000,
	0x0000,
	0x0000,
	0x75ae, /* 1267, 0xcf5, U+05e5, KEY_hebrew_finalzade, HEBREW LETTER FINAL TSADI */
	0xa876, /* 1764, 0x1002801, U+2801, KEY_braille_dots_1, BRAILLE PATTERN DOTS-1 */
	0xa67c, /* 1744, 0x100221b, U+221b, KEY_cuberoot, CUBE ROOT */
	0xa8ae, /* 1766, 0x1002803, U+2803, KEY_braille_dots_12, BRAILLE PATTERN DOTS-12 */
	0xa692, /* 1745, 0x100221c, U+221c, KEY_fourthroot, FOURTH ROOT */
	0xa8e7, /* 1768, 0x1002805, U+2805, KEY_braille_dots_13, BRAILLE PATTERN DOTS-13 */
	0x764d, /* 1273, 0xcf8, U+05e8, KEY_hebrew_resh, HEBREW LETTER RESH */
	0x99ec, /* 1616, 0x1001ea0, U+1ea0, KEY_Abelowdot, LATIN CAPITAL LETTER A WITH DOT BELOW */
	0x7666, /* 1274, 0xcf9, U+05e9, KEY_hebrew_shin, HEBREW LETTER SHIN */
	0x9a1a, /* 1618, 0x1001ea2, U+1ea2, KEY_Ahook, LATIN CAPITAL LETTER A WITH HOOK ABOVE */
	0x9a2d, /* 1619, 0x1001ea3, U+1ea3, KEY_ahook, LATIN SMALL LETTER A WITH HOOK ABOVE */
	0x9a40, /* 1620, 0x1001ea4, U+1ea4, KEY_Acircumflexacute, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x9a5e, /* 1621, 0x1001ea5, U+1ea5, KEY_acircumflexacute, LATIN SMALL LETTER A WITH CIRCUMFLEX AND ACUTE */
	0x9a7c, /* 1622, 0x1001ea6, U+1ea6, KEY_Acircumflexgrave, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x9a9a, /* 1623, 0x1001ea7, U+1ea7, KEY_acircumflexgrave, LATIN SMALL LETTER A WITH CIRCUMFLEX AND GRAVE */
	0x9ab8, /* 1624, 0x1001ea8, U+1ea8, KEY_Acircumflexhook, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9ad5, /* 1625, 0x1001ea9, U+1ea9, KEY_acircumflexhook, LATIN SMALL LETTER A WITH CIRCUMFLEX AND HOOK ABOVE */
	0x701e, /* 1209, 0xaf6, U+266d, KEY_musicalflat, MUSIC FLAT SIGN */
	0x9b10, /* 1627, 0x1001eab, U+1eab, KEY_acircumflextilde, LATIN SMALL LETTER A WITH CIRCUMFLEX AND TILDE */
	0x9b2e, /* 1628, 0x1001eac, U+1eac, KEY_Acircumflexbelowdot, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x9b4f, /* 1629, 0x1001ead, U+1ead, KEY_acircumflexbelowdot, LATIN SMALL LETTER A WITH CIRCUMFLEX AND DOT BELOW */
	0x9b70, /* 1630, 0x1001eae, U+1eae, KEY_Abreveacute, LATIN CAPITAL LETTER A WITH BREVE AND ACUTE */
	0x9b89, /* 1631, 0x1001eaf, U+1eaf, KEY_abreveacute, LATIN SMALL LETTER A WITH BREVE AND ACUTE */
	0x7004, /* 1208, 0xaf5, U+266f, KEY_musicalsharp, MUSIC SHARP SIGN */
	0x9bbb, /* 1633, 0x1001eb1, U+1eb1, KEY_abrevegrave, LATIN SMALL LETTER A WITH BREVE AND GRAVE */
	0x9bd4, /* 1634, 0x1001eb2, U+1eb2, KEY_Abrevehook, LATIN CAPITAL LETTER A WITH BREVE AND HOOK ABOVE */
	0x9bec, /* 1635, 0x1001eb3, U+1eb3, KEY_abrevehook, LATIN SMALL LETTER A WITH BREVE AND HOOK ABOVE */
	0x9c04, /* 1636, 0x1001eb4, U+1eb4, KEY_Abrevetilde, LATIN CAPITAL LETTER A WITH BREVE AND TILDE */
	0x9c1d, /* 1637, 0x1001eb5, U+1eb5, KEY_abrevetilde, LATIN SMALL LETTER A WITH BREVE AND TILDE */
	0x9c36, /* 1638, 0x1001eb6, U+1eb6, KEY_Abrevebelowdot, LATIN CAPITAL LETTER A WITH BREVE AND DOT BELOW */
	0x9c52, /* 1639, 0x1001eb7, U+1eb7, KEY_abrevebelowdot, LATIN SMALL LETTER A WITH BREVE AND DOT BELOW */
	0x9c6e, /* 1640, 0x1001eb8, U+1eb8, KEY_Ebelowdot, LATIN CAPITAL LETTER E WITH DOT BELOW */
	0x9c85, /* 1641, 0x1001eb9, U+1eb9, KEY_ebelowdot, LATIN SMALL LETTER E WITH DOT BELOW */
	0x9c9c, /* 1642, 0x1001eba, U+1eba, KEY_Ehook, LATIN CAPITAL LETTER E WITH HOOK ABOVE */
	0x9caf, /* 1643, 0x1001ebb, U+1ebb, KEY_ehook, LATIN SMALL LETTER E WITH HOOK ABOVE */
	0x9cc2, /* 1644, 0x1001ebc, U+1ebc, KEY_Etilde, LATIN CAPITAL LETTER E WITH TILDE */
	0x9cd6, /* 1645, 0x1001ebd, U+1ebd, KEY_etilde, LATIN SMALL LETTER E WITH TILDE */
	0x9cea, /* 1646, 0x1001ebe, U+1ebe, KEY_Ecircumflexacute, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0x9d08, /* 1647, 0x1001ebf, U+1ebf, KEY_ecircumflexacute, LATIN SMALL LETTER E WITH CIRCUMFLEX AND ACUTE */
	0x9d26, /* 1648, 0x1001ec0, U+1ec0, KEY_Ecircumflexgrave, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x9d44, /* 1649, 0x1001ec1, U+1ec1, KEY_ecircumflexgrave, LATIN SMALL LETTER E WITH CIRCUMFLEX AND GRAVE */
	0x9d62, /* 1650, 0x1001ec2, U+1ec2, KEY_Ecircumflexhook, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9d7f, /* 1651, 0x1001ec3, U+1ec3, KEY_ecircumflexhook, LATIN SMALL LETTER E WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9d9c, /* 1652, 0x1001ec4, U+1ec4, KEY_Ecircumflextilde, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x9dba, /* 1653, 0x1001ec5, U+1ec5, KEY_ecircumflextilde, LATIN SMALL LETTER E WITH CIRCUMFLEX AND TILDE */
	0x9dd8, /* 1654, 0x1001ec6, U+1ec6, KEY_Ecircumflexbelowdot, LATIN CAPITAL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x99ad, /* 1613, 0x1000292, U+0292, KEY_ezh, LATIN SMALL LETTER EZH */
	0x9e1a, /* 1656, 0x1001ec8, U+1ec8, KEY_Ihook, LATIN CAPITAL LETTER I WITH HOOK ABOVE */
	0x9e2d, /* 1657, 0x1001ec9, U+1ec9, KEY_ihook, LATIN SMALL LETTER I WITH HOOK ABOVE */
	0x9e40, /* 1658, 0x1001eca, U+1eca, KEY_Ibelowdot, LATIN CAPITAL LETTER I WITH DOT BELOW */
	0x9e57, /* 1659, 0x1001ecb, U+1ecb, KEY_ibelowdot, LATIN SMALL LETTER I WITH DOT BELOW */
	0x9e6e, /* 1660, 0x1001ecc, U+1ecc, KEY_Obelowdot, LATIN CAPITAL LETTER O WITH DOT BELOW */
	0x9e85, /* 1661, 0x1001ecd, U+1ecd, KEY_obelowdot, LATIN SMALL LETTER O WITH DOT BELOW */
	0x9e9c, /* 1662, 0x1001ece, U+1ece, KEY_Ohook, LATIN CAPITAL LETTER O WITH HOOK ABOVE */
	0x9eaf, /* 1663, 0x1001ecf, U+1ecf, KEY_ohook, LATIN SMALL LETTER O WITH HOOK ABOVE */
	0x9ec2, /* 1664, 0x1001ed0, U+1ed0, KEY_Ocircumflexacute, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x9ee0, /* 1665, 0x1001ed1, U+1ed1, KEY_ocircumflexacute, LATIN SMALL LETTER O WITH CIRCUMFLEX AND ACUTE */
	0x9efe, /* 1666, 0x1001ed2, U+1ed2, KEY_Ocircumflexgrave, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x9f1c, /* 1667, 0x1001ed3, U+1ed3, KEY_ocircumflexgrave, LATIN SMALL LETTER O WITH CIRCUMFLEX AND GRAVE */
	0x9f3a, /* 1668, 0x1001ed4, U+1ed4, KEY_Ocircumflexhook, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9f57, /* 1669, 0x1001ed5, U+1ed5, KEY_ocircumflexhook, LATIN SMALL LETTER O WITH CIRCUMFLEX AND HOOK ABOVE */
	0x9f74, /* 1670, 0x1001ed6, U+1ed6, KEY_Ocircumflextilde, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x9f92, /* 1671, 0x1001ed7, U+1ed7, KEY_ocircumflextilde, LATIN SMALL LETTER O WITH CIRCUMFLEX AND TILDE */
	0x9fb0, /* 1672, 0x1001ed8, U+1ed8, KEY_Ocircumflexbelowdot, LATIN CAPITAL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x9fd1, /* 1673, 0x1001ed9, U+1ed9, KEY_ocircumflexbelowdot, LATIN SMALL LETTER O WITH CIRCUMFLEX AND DOT BELOW */
	0x8c15, /* 1476, 0x100055c, U+055c, KEY_Armenian_exclam, ARMENIAN EXCLAMATION MARK */
	0xa00a, /* 1675, 0x1001edb, U+1edb, KEY_ohornacute, LATIN SMALL LETTER O WITH HORN AND ACUTE */
	0xa022, /* 1676, 0x1001edc, U+1edc, KEY_Ohorngrave, LATIN CAPITAL LETTER O WITH HORN AND GRAVE */
	0xa03a, /* 1677, 0x1001edd, U+1edd, KEY_ohorngrave, LATIN SMALL LETTER O WITH HORN AND GRAVE */
	0xa052, /* 1678, 0x1001ede, U+1ede, KEY_Ohornhook, LATIN CAPITAL LETTER O WITH HORN AND HOOK ABOVE */
	0xa069, /* 1679, 0x1001edf, U+1edf, KEY_ohornhook, LATIN SMALL LETTER O WITH HORN AND HOOK ABOVE */
	0xa080, /* 1680, 0x1001ee0, U+1ee0, KEY_Ohorntilde, LATIN CAPITAL LETTER O WITH HORN AND TILDE */
	0xa098, /* 1681, 0x1001ee1, U+1ee1, KEY_ohorntilde, LATIN SMALL LETTER O WITH HORN AND TILDE */
	0xa0b0, /* 1682, 0x1001ee2, U+1ee2, KEY_Ohornbelowdot, LATIN CAPITAL LETTER O WITH HORN AND DOT BELOW */
	0xa0cb, /* 1683, 0x1001ee3, U+1ee3, KEY_ohornbelowdot, LATIN SMALL LETTER O WITH HORN AND DOT BELOW */
	0xa0e6, /* 1684, 0x1001ee4, U+1ee4, KEY_Ubelowdot, LATIN CAPITAL LETTER U WITH DOT BELOW */
	0xa0fd, /* 1685, 0x1001ee5, U+1ee5, KEY_ubelowdot, LATIN SMALL LETTER U WITH DOT BELOW */
	0xa114, /* 1686, 0x1001ee6, U+1ee6, KEY_Uhook, LATIN CAPITAL LETTER U WITH HOOK ABOVE */
	0xa127, /* 1687, 0x1001ee7, U+1ee7, KEY_uhook, LATIN SMALL LETTER U WITH HOOK ABOVE */
	0xa13a, /* 1688, 0x1001ee8, U+1ee8, KEY_Uhornacute, LATIN CAPITAL LETTER U WITH HORN AND ACUTE */
	0xa152, /* 1689, 0x1001ee9, U+1ee9, KEY_uhornacute, LATIN SMALL LETTER U WITH HORN AND ACUTE */
	0xa16a, /* 1690, 0x1001eea, U+1eea, KEY_Uhorngrave, LATIN CAPITAL LETTER U WITH HORN AND GRAVE */
	0xa182, /* 1691, 0x1001eeb, U+1eeb, KEY_uhorngrave, LATIN SMALL LETTER U WITH HORN AND GRAVE */
	0xa19a, /* 1692, 0x1001eec, U+1eec, KEY_Uhornhook, LATIN CAPITAL LETTER U WITH HORN AND HOOK ABOVE */
	0xa1b1, /* 1693, 0x1001eed, U+1eed, KEY_uhornhook, LATIN SMALL LETTER U WITH HORN AND HOOK ABOVE */
	0xa1c8, /* 1694, 0x1001eee, U+1eee, KEY_Uhorntilde, LATIN CAPITAL LETTER U WITH HORN AND TILDE */
	0xa1e0, /* 1695, 0x1001eef, U+1eef, KEY_uhorntilde, LATIN SMALL LETTER U WITH HORN AND TILDE */
	0xa1f8, /* 1696, 0x1001ef0, U+1ef0, KEY_Uhornbelowdot, LATIN CAPITAL LETTER U WITH HORN AND DOT BELOW */
	0xa213, /* 1697, 0x1001ef1, U+1ef1, KEY_uhornbelowdot, LATIN SMALL LETTER U WITH HORN AND DOT BELOW */
	0x3b2b, /*  682, 0x1001ef2, U+1ef2, KEY_Ygrave, LATIN CAPITAL LETTER Y WITH GRAVE */
	0x3b3f, /*  683, 0x1001ef3, U+1ef3, KEY_ygrave, LATIN SMALL LETTER Y WITH GRAVE */
	0xa22e, /* 1698, 0x1001ef4, U+1ef4, KEY_Ybelowdot, LATIN CAPITAL LETTER Y WITH DOT BELOW */
	0xa245, /* 1699, 0x1001ef5, U+1ef5, KEY_ybelowdot, LATIN SMALL LETTER Y WITH DOT BELOW */
	0xa25c, /* 1700, 0x1001ef6, U+1ef6, KEY_Yhook, LATIN CAPITAL LETTER Y WITH HOOK ABOVE */
	0xa26f, /* 1701, 0x1001ef7, U+1ef7, KEY_yhook, LATIN SMALL LETTER Y WITH HOOK ABOVE */
	0xa282, /* 1702, 0x1001ef8, U+1ef8, KEY_Ytilde, LATIN CAPITAL LETTER Y WITH TILDE */
	0xa296, /* 1703, 0x1001ef9, U+1ef9, KEY_ytilde, LATIN SMALL LETTER Y WITH TILDE */
	0xb3c8, /* 1860, 0x1002861, U+2861, KEY_braille_dots_167, BRAILLE PATTERN DOTS-167 */
	0xb3e6, /* 1861, 0x1002862, U+2862, KEY_braille_dots_267, BRAILLE PATTERN DOTS-267 */
	0x30bd, /*  559, 0x1b7, U+02c7, KEY_caron, CARON */
	0xb423, /* 1863, 0x1002864, U+2864, KEY_braille_dots_367, BRAILLE PATTERN DOTS-367 */
	0xb441, /* 1864, 0x1002865, U+2865, KEY_braille_dots_1367, BRAILLE PATTERN DOTS-1367 */
	0xb460, /* 1865, 0x1002866, U+2866, KEY_braille_dots_2367, BRAILLE PATTERN DOTS-2367 */
	0xb47f, /* 1866, 0x1002867, U+2867, KEY_braille_dots_12367, BRAILLE PATTERN DOTS-12367 */
	0xb49f, /* 1867, 0x1002868, U+2868, KEY_braille_dots_467, BRAILLE PATTERN DOTS-467 */
	0xb4bd, /* 1868, 0x1002869, U+2869, KEY_braille_dots_1467, BRAILLE PATTERN DOTS-1467 */
	0xb4dc, /* 1869, 0x100286a, U+286a, KEY_braille_dots_2467, BRAILLE PATTERN DOTS-2467 */
	0xb4fb, /* 1870, 0x100286b, U+286b, KEY_braille_dots_12467, BRAILLE PATTERN DOTS-12467 */
	0xb51b, /* 1871, 0x100286c, U+286c, KEY_braille_dots_3467, BRAILLE PATTERN DOTS-3467 */
	0xb53a, /* 1872, 0x100286d, U+286d, KEY_braille_dots_13467, BRAILLE PATTERN DOTS-13467 */
	0xb55a, /* 1873, 0x100286e, U+286e, KEY_braille_dots_23467, BRAILLE PATTERN DOTS-23467 */
	0xb57a, /* 1874, 0x100286f, U+286f, KEY_braille_dots_123467, BRAILLE PATTERN DOTS-123467 */
	0xb59b, /* 1875, 0x1002870, U+2870, KEY_braille_dots_567, BRAILLE PATTERN DOTS-567 */
	0x8e44, /* 1497, 0x1000568, U+0568, KEY_Armenian_at, ARMENIAN SMALL LETTER ET */
	0xb5d8, /* 1877, 0x1002872, U+2872, KEY_braille_dots_2567, BRAILLE PATTERN DOTS-2567 */
	0xb5f7, /* 1878, 0x1002873, U+2873, KEY_braille_dots_12567, BRAILLE PATTERN DOTS-12567 */
	0x2f8a, /*  544, 0x1a2, U+02d8, KEY_breve, BREVE */
	0x3404, /*  599, 0x1ff, U+02d9, KEY_abovedot, DOT ABOVE */
	0xb656, /* 1881, 0x1002876, U+2876, KEY_braille_dots_23567, BRAILLE PATTERN DOTS-23567 */
	0x306c, /*  555, 0x1b2, U+02db, KEY_ogonek, OGONEK */
	0xb697, /* 1883, 0x1002878, U+2878, KEY_braille_dots_4567, BRAILLE PATTERN DOTS-4567 */
	0x3122, /*  564, 0x1bd, U+02dd, KEY_doubleacute, DOUBLE ACUTE ACCENT */
	0xb6d6, /* 1885, 0x100287a, U+287a, KEY_braille_dots_24567, BRAILLE PATTERN DOTS-24567 */
	0xb6f6, /* 1886, 0x100287b, U+287b, KEY_braille_dots_124567, BRAILLE PATTERN DOTS-124567 */
	0xb717, /* 1887, 0x100287c, U+287c, KEY_braille_dots_34567, BRAILLE PATTERN DOTS-34567 */
	0xb737, /* 1888, 0x100287d, U+287d, KEY_braille_dots_134567, BRAILLE PATTERN DOTS-134567 */
	0xb758, /* 1889, 0x100287e, U+287e, KEY_braille_dots_234567, BRAILLE PATTERN DOTS-234567 */
	0xb779, /* 1890, 0x100287f, U+287f, KEY_braille_dots_1234567, BRAILLE PATTERN DOTS-1234567 */
	0xb79b, /* 1891, 0x1002880, U+2880, KEY_braille_dots_8, BRAILLE PATTERN DOTS-8 */
	0xb7b7, /* 1892, 0x1002881, U+2881, KEY_braille_dots_18, BRAILLE PATTERN DOTS-18 */
	0x9af2, /* 1626, 0x1001eaa, U+1eaa, KEY_Acircumflextilde, LATIN CAPITAL LETTER A WITH CIRCUMFLEX AND TILDE */
	0xb7f1, /* 1894, 0x1002883, U+2883, KEY_braille_dots_128, BRAILLE PATTERN DOTS-128 */
	0xb80f, /* 1895, 0x1002884, U+2884, KEY_braille_dots_38, BRAILLE PATTERN DOTS-38 */
	0xb82c, /* 1896, 0x1002885, U+2885, KEY_braille_dots_138, BRAILLE PATTERN DOTS-138 */
	0xb84a, /* 1897, 0x1002886, U+2886, KEY_braille_dots_238, BRAILLE PATTERN DOTS-238 */
	0xb868, /* 1898, 0x1002887, U+2887, KEY_braille_dots_1238, BRAILLE PATTERN DOTS-1238 */
	0xb887, /* 1899, 0x1002888, U+2888, KEY_braille_dots_48, BRAILLE PATTERN DOTS-48 */
	0xb8a4, /* 1900, 0x1002889, U+2889, KEY_braille_dots_148, BRAILLE PATTERN DOTS-148 */
	0xb8c2, /* 1901, 0x100288a, U+288a, KEY_braille_dots_248, BRAILLE PATTERN DOTS-248 */
	0x6fd4, /* 1206, 0xaf3, U+2713, KEY_checkmark, CHECK MARK */
	0x6453, /* 1086, 0x8bd, U+2260, KEY_notequal, NOT EQUAL TO */
	0xb91d, /* 1904, 0x100288d, U+288d, KEY_braille_dots_1348, BRAILLE PATTERN DOTS-1348 */
	0x6552, /* 1097, 0x8cf, U+2261, KEY_identical, IDENTICAL TO */
	0xb95b, /* 1906, 0x100288f, U+288f, KEY_braille_dots_12348, BRAILLE PATTERN DOTS-12348 */
	0xa71c, /* 1751, 0x1002262, U+2262, KEY_notidentical, NOT IDENTICAL TO */
	0xaa9f, /* 1783, 0x1002814, U+2814, KEY_braille_dots_35, BRAILLE PATTERN DOTS-35 */
	0xa736, /* 1752, 0x1002263, U+2263, KEY_stricteq, STRICTLY EQUIVALENT TO */
	0x6feb, /* 1207, 0xaf4, U+2717, KEY_ballotcross, BALLOT X */
	0x6438, /* 1085, 0x8bc, U+2264, KEY_lessthanequal, LESS-THAN OR EQUAL TO */
	0xba11, /* 1912, 0x1002895, U+2895, KEY_braille_dots_1358, BRAILLE PATTERN DOTS-1358 */
	0x6469, /* 1087, 0x8be, U+2265, KEY_greaterthanequal, GREATER-THAN OR EQUAL TO */
	0xba4f, /* 1914, 0x1002897, U+2897, KEY_braille_dots_12358, BRAILLE PATTERN DOTS-12358 */
	0xba6f, /* 1915, 0x1002898, U+2898, KEY_braille_dots_458, BRAILLE PATTERN DOTS-458 */
	0xba8d, /* 1916, 0x1002899, U+2899, KEY_braille_dots_1458, BRAILLE PATTERN DOTS-1458 */
	0xbaac, /* 1917, 0x100289a, U+289a, KEY_braille_dots_2458, BRAILLE PATTERN DOTS-2458 */
	0xbacb, /* 1918, 0x100289b, U+289b, KEY_braille_dots_12458, BRAILLE PATTERN DOTS-12458 */
	0xbaeb, /* 1919, 0x100289c, U+289c, KEY_braille_dots_3458, BRAILLE PATTERN DOTS-3458 */
	0xbb0a, /* 1920, 0x100289d, U+289d, KEY_braille_dots_13458, BRAILLE PATTERN DOTS-13458 */
	0xbb2a, /* 1921, 0x100289e, U+289e, KEY_braille_dots_23458, BRAILLE PATTERN DOTS-23458 */
	0xbb4a, /* 1922, 0x100289f, U+289f, KEY_braille_dots_123458, BRAILLE PATTERN DOTS-123458 */
	0xbb6b, /* 1923, 0x10028a0, U+28a0, KEY_braille_dots_68, BRAILLE PATTERN DOTS-68 */
	0xbb88, /* 1924, 0x10028a1, U+28a1, KEY_braille_dots_168, BRAILLE PATTERN DOTS-168 */
	0xbba6, /* 1925, 0x10028a2, U+28a2, KEY_braille_dots_268, BRAILLE PATTERN DOTS-268 */
	0xbbc4, /* 1926, 0x10028a3, U+28a3, KEY_braille_dots_1268, BRAILLE PATTERN DOTS-1268 */
	0xbbe3, /* 1927, 0x10028a4, U+28a4, KEY_braille_dots_368, BRAILLE PATTERN DOTS-368 */
	0xbc01, /* 1928, 0x10028a5, U+28a5, KEY_braille_dots_1368, BRAILLE PATTERN DOTS-1368 */
	0xbc20, /* 1929, 0x10028a6, U+28a6, KEY_braille_dots_2368, BRAILLE PATTERN DOTS-2368 */
	0xbc3f, /* 1930, 0x10028a7, U+28a7, KEY_braille_dots_12368, BRAILLE PATTERN DOTS-12368 */
	0xbc5f, /* 1931, 0x10028a8, U+28a8, KEY_braille_dots_468, BRAILLE PATTERN DOTS-468 */
	0xbc7d, /* 1932, 0x10028a9, U+28a9, KEY_braille_dots_1468, BRAILLE PATTERN DOTS-1468 */
	0xbc9c, /* 1933, 0x10028aa, U+28aa, KEY_braille_dots_2468, BRAILLE PATTERN DOTS-2468 */
	0xbcbb, /* 1934, 0x10028ab, U+28ab, KEY_braille_dots_12468, BRAILLE PATTERN DOTS-12468 */
	0xbcdb, /* 1935, 0x10028ac, U+28ac, KEY_braille_dots_3468, BRAILLE PATTERN DOTS-3468 */
	0xbcfa, /* 1936, 0x10028ad, U+28ad, KEY_braille_dots_13468, BRAILLE PATTERN DOTS-13468 */
	0xbd1a, /* 1937, 0x10028ae, U+28ae, KEY_braille_dots_23468, BRAILLE PATTERN DOTS-23468 */
	0xbd3a, /* 1938, 0x10028af, U+28af, KEY_braille_dots_123468, BRAILLE PATTERN DOTS-123468 */
	0xbd5b, /* 1939, 0x10028b0, U+28b0, KEY_braille_dots_568, BRAILLE PATTERN DOTS-568 */
	0xbd79, /* 1940, 0x10028b1, U+28b1, KEY_braille_dots_1568, BRAILLE PATTERN DOTS-1568 */
	0xbd98, /* 1941, 0x10028b2, U+28b2, KEY_braille_dots_2568, BRAILLE PATTERN DOTS-2568 */
	0xbdb7, /* 1942, 0x10028b3, U+28b3, KEY_braille_dots_12568, BRAILLE PATTERN DOTS-12568 */
	0xbdd7, /* 1943, 0x10028b4, U+28b4, KEY_braille_dots_3568, BRAILLE PATTERN DOTS-3568 */
	0xbdf6, /* 1944, 0x10028b5, U+28b5, KEY_braille_dots_13568, BRAILLE PATTERN DOTS-13568 */
	0xbe16, /* 1945, 0x10028b6, U+28b6, KEY_braille_dots_23568, BRAILLE PATTERN DOTS-23568 */
	0xbe36, /* 1946, 0x10028b7, U+28b7, KEY_braille_dots_123568, BRAILLE PATTERN DOTS-123568 */
	0xbe57, /* 1947, 0x10028b8, U+28b8, KEY_braille_dots_4568, BRAILLE PATTERN DOTS-4568 */
	0xbe76, /* 1948, 0x10028b9, U+28b9, KEY_braille_dots_14568, BRAILLE PATTERN DOTS-14568 */
	0xbe96, /* 1949, 0x10028ba, U+28ba, KEY_braille_dots_24568, BRAILLE PATTERN DOTS-24568 */
	0x9976, /* 1610, 0x100018f, U+018f, KEY_SCHWA, LATIN CAPITAL LETTER SCHWA */
	0xbed7, /* 1951, 0x10028bc, U+28bc, KEY_braille_dots_34568, BRAILLE PATTERN DOTS-34568 */
	0xbef7, /* 1952, 0x10028bd, U+28bd, KEY_braille_dots_134568, BRAILLE PATTERN DOTS-134568 */
	0xbf18, /* 1953, 0x10028be, U+28be, KEY_braille_dots_234568, BRAILLE PATTERN DOTS-234568 */
	0xbf39, /* 1954, 0x10028bf, U+28bf, KEY_braille_dots_1234568, BRAILLE PATTERN DOTS-1234568 */
	0xbf5b, /* 1955, 0x10028c0, U+28c0, KEY_braille_dots_78, BRAILLE PATTERN DOTS-78 */
	0xbf78, /* 1956, 0x10028c1, U+28c1, KEY_braille_dots_178, BRAILLE PATTERN DOTS-178 */
	0xbf96, /* 1957, 0x10028c2, U+28c2, KEY_braille_dots_278, BRAILLE PATTERN DOTS-278 */
	0xbfb4, /* 1958, 0x10028c3, U+28c3, KEY_braille_dots_1278, BRAILLE PATTERN DOTS-1278 */
	0xbfd3, /* 1959, 0x10028c4, U+28c4, KEY_braille_dots_378, BRAILLE PATTERN DOTS-378 */
	0xbff1, /* 1960, 0x10028c5, U+28c5, KEY_braille_dots_1378, BRAILLE PATTERN DOTS-1378 */
	0xc010, /* 1961, 0x10028c6, U+28c6, KEY_braille_dots_2378, BRAILLE PATTERN DOTS-2378 */
	0xc02f, /* 1962, 0x10028c7, U+28c7, KEY_braille_dots_12378, BRAILLE PATTERN DOTS-12378 */
	0xc04f, /* 1963, 0x10028c8, U+28c8, KEY_braille_dots_478, BRAILLE PATTERN DOTS-478 */
	0xc06d, /* 1964, 0x10028c9, U+28c9, KEY_braille_dots_1478, BRAILLE PATTERN DOTS-1478 */
	0xc08c, /* 1965, 0x10028ca, U+28ca, KEY_braille_dots_2478, BRAILLE PATTERN DOTS-2478 */
	0xc0ab, /* 1966, 0x10028cb, U+28cb, KEY_braille_dots_12478, BRAILLE PATTERN DOTS-12478 */
	0xc0cb, /* 1967, 0x10028cc, U+28cc, KEY_braille_dots_3478, BRAILLE PATTERN DOTS-3478 */
	0xc0ea, /* 1968, 0x10028cd, U+28cd, KEY_braille_dots_13478, BRAILLE PATTERN DOTS-13478 */
	0xc10a, /* 1969, 0x10028ce, U+28ce, KEY_braille_dots_23478, BRAILLE PATTERN DOTS-23478 */
	0xc12a, /* 1970, 0x10028cf, U+28cf, KEY_braille_dots_123478, BRAILLE PATTERN DOTS-123478 */
	0x657e, /* 1099, 0x8da, U+2282, KEY_includedin, SUBSET OF */
	0xc169, /* 1972, 0x10028d1, U+28d1, KEY_braille_dots_1578, BRAILLE PATTERN DOTS-1578 */
	0x6596, /* 1100, 0x8db, U+2283, KEY_includes, SUPERSET OF */
	0xc1a7, /* 1974, 0x10028d3, U+28d3, KEY_braille_dots_12578, BRAILLE PATTERN DOTS-12578 */
	0xc1c7, /* 1975, 0x10028d4, U+28d4, KEY_braille_dots_3578, BRAILLE PATTERN DOTS-3578 */
	0xc1e6, /* 1976, 0x10028d5, U+28d5, KEY_braille_dots_13578, BRAILLE PATTERN DOTS-13578 */
	0xc206, /* 1977, 0x10028d6, U+28d6, KEY_braille_dots_23578, BRAILLE PATTERN DOTS-23578 */
	0xc226, /* 1978, 0x10028d7, U+28d7, KEY_braille_dots_123578, BRAILLE PATTERN DOTS-123578 */
	0xc247, /* 1979, 0x10028d8, U+28d8, KEY_braille_dots_4578, BRAILLE PATTERN DOTS-4578 */
	0xc266, /* 1980, 0x10028d9, U+28d9, KEY_braille_dots_14578, BRAILLE PATTERN DOTS-14578 */
	0xc286, /* 1981, 0x10028da, U+28da, KEY_braille_dots_24578, BRAILLE PATTERN DOTS-24578 */
	0x98e4, /* 1603, 0x100019f, U+019f, KEY_Obarred, LATIN CAPITAL LETTER O WITH MIDDLE TILDE */
	0xc2c7, /* 1983, 0x10028dc, U+28dc, KEY_braille_dots_34578, BRAILLE PATTERN DOTS-34578 */
	0xa2aa, /* 1704, 0x10001a0, U+01a0, KEY_Ohorn, LATIN CAPITAL LETTER O WITH HORN */
	0xc308, /* 1985, 0x10028de, U+28de, KEY_braille_dots_234578, BRAILLE PATTERN DOTS-234578 */
	0xa2bd, /* 1705, 0x10001a1, U+01a1, KEY_ohorn, LATIN SMALL LETTER O WITH HORN */
	0xc34b, /* 1987, 0x10028e0, U+28e0, KEY_braille_dots_678, BRAILLE PATTERN DOTS-678 */
	0xc369, /* 1988, 0x10028e1, U+28e1, KEY_braille_dots_1678, BRAILLE PATTERN DOTS-1678 */
	0xc388, /* 1989, 0x10028e2, U+28e2, KEY_braille_dots_2678, BRAILLE PATTERN DOTS-2678 */
	0xc3a7, /* 1990, 0x10028e3, U+28e3, KEY_braille_dots_12678, BRAILLE PATTERN DOTS-12678 */
	0xc3c7, /* 1991, 0x10028e4, U+28e4, KEY_braille_dots_3678, BRAILLE PATTERN DOTS-3678 */
	0xc3e6, /* 1992, 0x10028e5, U+28e5, KEY_braille_dots_13678, BRAILLE PATTERN DOTS-13678 */
	0xc406, /* 1993, 0x10028e6, U+28e6, KEY_braille_dots_23678, BRAILLE PATTERN DOTS-23678 */
	0xc426, /* 1994, 0x10028e7, U+28e7, KEY_braille_dots_123678, BRAILLE PATTERN DOTS-123678 */
	0xc447, /* 1995, 0x10028e8, U+28e8, KEY_braille_dots_4678, BRAILLE PATTERN DOTS-4678 */
	0xc466, /* 1996, 0x10028e9, U+28e9, KEY_braille_dots_14678, BRAILLE PATTERN DOTS-14678 */
	0xc486, /* 1997, 0x10028ea, U+28ea, KEY_braille_dots_24678, BRAILLE PATTERN DOTS-24678 */
	0xc4a6, /* 1998, 0x10028eb, U+28eb, KEY_braille_dots_124678, BRAILLE PATTERN DOTS-124678 */
	0xc4c7, /* 1999, 0x10028ec, U+28ec, KEY_braille_dots_34678, BRAILLE PATTERN DOTS-34678 */
	0xc4e7, /* 2000, 0x10028ed, U+28ed, KEY_braille_dots_134678, BRAILLE PATTERN DOTS-134678 */
	0xc508, /* 2001, 0x10028ee, U+28ee, KEY_braille_dots_234678, BRAILLE PATTERN DOTS-234678 */
	0xc529, /* 2002, 0x10028ef, U+28ef, KEY_braille_dots_1234678, BRAILLE PATTERN DOTS-1234678 */
	0xc54b, /* 2003, 0x10028f0, U+28f0, KEY_braille_dots_5678, BRAILLE PATTERN DOTS-5678 */
	0xc56a, /* 2004, 0x10028f1, U+28f1, KEY_braille_dots_15678, BRAILLE PATTERN DOTS-15678 */
	0xc58a, /* 2005, 0x10028f2, U+28f2, KEY_braille_dots_25678, BRAILLE PATTERN DOTS-25678 */
	0xc5aa, /* 2006, 0x10028f3, U+28f3, KEY_braille_dots_125678, BRAILLE PATTERN DOTS-125678 */
	0xc5cb, /* 2007, 0x10028f4, U+28f4, KEY_braille_dots_35678, BRAILLE PATTERN DOTS-35678 */
	0xc5eb, /* 2008, 0x10028f5, U+28f5, KEY_braille_dots_135678, BRAILLE PATTERN DOTS-135678 */
	0xc60c, /* 2009, 0x10028f6, U+28f6, KEY_braille_dots_235678, BRAILLE PATTERN DOTS-235678 */
	0xc62d, /* 2010, 0x10028f7, U+28f7, KEY_braille_dots_1235678, BRAILLE PATTERN DOTS-1235678 */
	0xc64f, /* 2011, 0x10028f8, U+28f8, KEY_braille_dots_45678, BRAILLE PATTERN DOTS-45678 */
	0xc66f, /* 2012, 0x10028f9, U+28f9, KEY_braille_dots_145678, BRAILLE PATTERN DOTS-145678 */
	0xc690, /* 2013, 0x10028fa, U+28fa, KEY_braille_dots_245678, BRAILLE PATTERN DOTS-245678 */
	0xc6b1, /* 2014, 0x10028fb, U+28fb, KEY_braille_dots_1245678, BRAILLE PATTERN DOTS-1245678 */
	0xc6d3, /* 2015, 0x10028fc, U+28fc, KEY_braille_dots_345678, BRAILLE PATTERN DOTS-345678 */
	0xa2e3, /* 1707, 0x10001b0, U+01b0, KEY_uhorn, LATIN SMALL LETTER U WITH HORN */
	0xc716, /* 2017, 0x10028fe, U+28fe, KEY_braille_dots_2345678, BRAILLE PATTERN DOTS-2345678 */
	0xc738, /* 2018, 0x10028ff, U+28ff, KEY_braille_dots_12345678, BRAILLE PATTERN DOTS-12345678 */
	0xca5b, /* 2055, 0x1000daa, U+0daa, KEY_Sinh_ddha, SINHALA MAHA. DDAYANNA */
	0x0000,
	0x0000,
	0xca72, /* 2056, 0x1000dab, U+0dab, KEY_Sinh_nna, SINHALA MUURDHAJA NAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc14b, /* 1971, 0x10028d0, U+28d0, KEY_braille_dots_578, BRAILLE PATTERN DOTS-578 */
	0x9924, /* 1606, 0x10001b6, U+01b6, KEY_zstroke, LATIN SMALL LETTER Z WITH STROKE */
	0x0000,
	0x9486, /* 1559, 0x10010d0, U+10d0, KEY_Georgian_an, GEORGIAN LETTER AN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc188, /* 1973, 0x10028d2, U+28d2, KEY_braille_dots_2578, BRAILLE PATTERN DOTS-2578 */
	0x94b9, /* 1561, 0x10010d2, U+10d2, KEY_Georgian_gan, GEORGIAN LETTER GAN */
	0xcae2, /* 2061, 0x1000db0, U+0db0, KEY_Sinh_dhha, SINHALA MAHA. DAYANNA */
	0xadac, /* 1809, 0x100282e, U+282e, KEY_braille_dots_2346, BRAILLE PATTERN DOTS-2346 */
	0x94d3, /* 1562, 0x10010d3, U+10d3, KEY_Georgian_don, GEORGIAN LETTER DON */
	0x0000,
	0x7211, /* 1230, 0xbce, U+22a5, KEY_uptack, UP TACK */
	0x0000,
	0x0000,
	0x0000,
	0x9506, /* 1564, 0x10010d5, U+10d5, KEY_Georgian_vin, GEORGIAN LETTER VIN */
	0xcb0e, /* 2063, 0x1000db3, U+0db3, KEY_Sinh_ndha, SINHALA SANYAKA DAYANNA */
	0x0000,
	0x9520, /* 1565, 0x10010d6, U+10d6, KEY_Georgian_zen, GEORGIAN LETTER ZEN */
	0xcb25, /* 2064, 0x1000db4, U+0db4, KEY_Sinh_pa, SINHALA PAYANNA */
	0x0000,
	0x0000,
	0x5ae0, /*  997, 0x7ae, U+0385, KEY_Greek_accentdieresis, GREEK DIALYTIKA TONOS */
	0x59a0, /*  987, 0x7a1, U+0386, KEY_Greek_ALPHAaccent, GREEK CAPITAL LETTER ALPHA WITH TONOS */
	0x9554, /* 1567, 0x10010d8, U+10d8, KEY_Georgian_in, GEORGIAN LETTER IN */
	0x59bf, /*  988, 0x7a2, U+0388, KEY_Greek_EPSILONaccent, GREEK CAPITAL LETTER EPSILON WITH TONOS */
	0x59e0, /*  989, 0x7a3, U+0389, KEY_Greek_ETAaccent, GREEK CAPITAL LETTER ETA WITH TONOS */
	0x59fd, /*  990, 0x7a4, U+038a, KEY_Greek_IOTAaccent, GREEK CAPITAL LETTER IOTA WITH TONOS */
	0x0000,
	0x5a5c, /*  993, 0x7a7, U+038c, KEY_Greek_OMICRONaccent, GREEK CAPITAL LETTER OMICRON WITH TONOS */
	0x9587, /* 1569, 0x10010da, U+10da, KEY_Georgian_las, GEORGIAN LETTER LAS */
	0x5a7d, /*  994, 0x7a8, U+038e, KEY_Greek_UPSILONaccent, GREEK CAPITAL LETTER UPSILON WITH TONOS */
	0x5ac1, /*  996, 0x7ab, U+038f, KEY_Greek_OMEGAaccent, GREEK CAPITAL LETTER OMEGA WITH TONOS */
	0x5bb9, /* 1004, 0x7b6, U+0390, KEY_Greek_iotaaccentdieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS */
	0x5c8c, /* 1010, 0x7c1, U+0391, KEY_Greek_ALPHA, GREEK CAPITAL LETTER ALPHA */
	0x5ca5, /* 1011, 0x7c2, U+0392, KEY_Greek_BETA, GREEK CAPITAL LETTER BETA */
	0x5cbd, /* 1012, 0x7c3, U+0393, KEY_Greek_GAMMA, GREEK CAPITAL LETTER GAMMA */
	0x5cd6, /* 1013, 0x7c4, U+0394, KEY_Greek_DELTA, GREEK CAPITAL LETTER DELTA */
	0x5cef, /* 1014, 0x7c5, U+0395, KEY_Greek_EPSILON, GREEK CAPITAL LETTER EPSILON */
	0x5d0a, /* 1015, 0x7c6, U+0396, KEY_Greek_ZETA, GREEK CAPITAL LETTER ZETA */
	0x5d22, /* 1016, 0x7c7, U+0397, KEY_Greek_ETA, GREEK CAPITAL LETTER ETA */
	0x5d39, /* 1017, 0x7c8, U+0398, KEY_Greek_THETA, GREEK CAPITAL LETTER THETA */
	0x5d52, /* 1018, 0x7c9, U+0399, KEY_Greek_IOTA, GREEK CAPITAL LETTER IOTA */
	0x5d6a, /* 1019, 0x7ca, U+039a, KEY_Greek_KAPPA, GREEK CAPITAL LETTER KAPPA */
	0x5d83, /* 1020, 0x7cb, U+039b, KEY_Greek_LAMDA, GREEK CAPITAL LETTER LAMDA */
	0x5db6, /* 1022, 0x7cc, U+039c, KEY_Greek_MU, GREEK CAPITAL LETTER MU */
	0x5dcc, /* 1023, 0x7cd, U+039d, KEY_Greek_NU, GREEK CAPITAL LETTER NU */
	0x5de2, /* 1024, 0x7ce, U+039e, KEY_Greek_XI, GREEK CAPITAL LETTER XI */
	0x5df8, /* 1025, 0x7cf, U+039f, KEY_Greek_OMICRON, GREEK CAPITAL LETTER OMICRON */
	0x5e13, /* 1026, 0x7d0, U+03a0, KEY_Greek_PI, GREEK CAPITAL LETTER PI */
	0x5e29, /* 1027, 0x7d1, U+03a1, KEY_Greek_RHO, GREEK CAPITAL LETTER RHO */
	0x0000,
	0x5e40, /* 1028, 0x7d2, U+03a3, KEY_Greek_SIGMA, GREEK CAPITAL LETTER SIGMA */
	0x5e59, /* 1029, 0x7d4, U+03a4, KEY_Greek_TAU, GREEK CAPITAL LETTER TAU */
	0x5e70, /* 1030, 0x7d5, U+03a5, KEY_Greek_UPSILON, GREEK CAPITAL LETTER UPSILON */
	0x5e8b, /* 1031, 0x7d6, U+03a6, KEY_Greek_PHI, GREEK CAPITAL LETTER PHI */
	0x5ea2, /* 1032, 0x7d7, U+03a7, KEY_Greek_CHI, GREEK CAPITAL LETTER CHI */
	0x5eb9, /* 1033, 0x7d8, U+03a8, KEY_Greek_PSI, GREEK CAPITAL LETTER PSI */
	0x5ed0, /* 1034, 0x7d9, U+03a9, KEY_Greek_OMEGA, GREEK CAPITAL LETTER OMEGA */
	0x5a1b, /*  991, 0x7a5, U+03aa, KEY_Greek_IOTAdieresis, GREEK CAPITAL LETTER IOTA WITH DIALYTIKA */
	0x3fd8, /*  737, 0x4cd, U+30d8, KEY_kana_HE, KATAKANA LETTER HE */
	0x5b1e, /*  999, 0x7b1, U+03ac, KEY_Greek_alphaaccent, GREEK SMALL LETTER ALPHA WITH TONOS */
	0x5b3d, /* 1000, 0x7b2, U+03ad, KEY_Greek_epsilonaccent, GREEK SMALL LETTER EPSILON WITH TONOS */
	0x5b5e, /* 1001, 0x7b3, U+03ae, KEY_Greek_etaaccent, GREEK SMALL LETTER ETA WITH TONOS */
	0x5b7b, /* 1002, 0x7b4, U+03af, KEY_Greek_iotaaccent, GREEK SMALL LETTER IOTA WITH TONOS */
	0x5c44, /* 1008, 0x7ba, U+03b0, KEY_Greek_upsilonaccentdieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS */
	0x5ee9, /* 1035, 0x7e1, U+03b1, KEY_Greek_alpha, GREEK SMALL LETTER ALPHA */
	0x5f02, /* 1036, 0x7e2, U+03b2, KEY_Greek_beta, GREEK SMALL LETTER BETA */
	0x5f1a, /* 1037, 0x7e3, U+03b3, KEY_Greek_gamma, GREEK SMALL LETTER GAMMA */
	0x5f33, /* 1038, 0x7e4, U+03b4, KEY_Greek_delta, GREEK SMALL LETTER DELTA */
	0x5f4c, /* 1039, 0x7e5, U+03b5, KEY_Greek_epsilon, GREEK SMALL LETTER EPSILON */
	0x5f67, /* 1040, 0x7e6, U+03b6, KEY_Greek_zeta, GREEK SMALL LETTER ZETA */
	0x5f7f, /* 1041, 0x7e7, U+03b7, KEY_Greek_eta, GREEK SMALL LETTER ETA */
	0x5f96, /* 1042, 0x7e8, U+03b8, KEY_Greek_theta, GREEK SMALL LETTER THETA */
	0x5faf, /* 1043, 0x7e9, U+03b9, KEY_Greek_iota, GREEK SMALL LETTER IOTA */
	0x5fc7, /* 1044, 0x7ea, U+03ba, KEY_Greek_kappa, GREEK SMALL LETTER KAPPA */
	0x5fe0, /* 1045, 0x7eb, U+03bb, KEY_Greek_lamda, GREEK SMALL LETTER LAMDA */
	0x6013, /* 1047, 0x7ec, U+03bc, KEY_Greek_mu, GREEK SMALL LETTER MU */
	0x6029, /* 1048, 0x7ed, U+03bd, KEY_Greek_nu, GREEK SMALL LETTER NU */
	0x603f, /* 1049, 0x7ee, U+03be, KEY_Greek_xi, GREEK SMALL LETTER XI */
	0x6055, /* 1050, 0x7ef, U+03bf, KEY_Greek_omicron, GREEK SMALL LETTER OMICRON */
	0x6070, /* 1051, 0x7f0, U+03c0, KEY_Greek_pi, GREEK SMALL LETTER PI */
	0x6086, /* 1052, 0x7f1, U+03c1, KEY_Greek_rho, GREEK SMALL LETTER RHO */
	0x60b6, /* 1054, 0x7f3, U+03c2, KEY_Greek_finalsmallsigma, GREEK SMALL LETTER FINAL SIGMA */
	0x609d, /* 1053, 0x7f2, U+03c3, KEY_Greek_sigma, GREEK SMALL LETTER SIGMA */
	0x60d9, /* 1055, 0x7f4, U+03c4, KEY_Greek_tau, GREEK SMALL LETTER TAU */
	0x60f0, /* 1056, 0x7f5, U+03c5, KEY_Greek_upsilon, GREEK SMALL LETTER UPSILON */
	0x610b, /* 1057, 0x7f6, U+03c6, KEY_Greek_phi, GREEK SMALL LETTER PHI */
	0x6122, /* 1058, 0x7f7, U+03c7, KEY_Greek_chi, GREEK SMALL LETTER CHI */
	0x6139, /* 1059, 0x7f8, U+03c8, KEY_Greek_psi, GREEK SMALL LETTER PSI */
	0x6150, /* 1060, 0x7f9, U+03c9, KEY_Greek_omega, GREEK SMALL LETTER OMEGA */
	0x5b99, /* 1003, 0x7b5, U+03ca, KEY_Greek_iotadieresis, GREEK SMALL LETTER IOTA WITH DIALYTIKA */
	0x5c21, /* 1007, 0x7b9, U+03cb, KEY_Greek_upsilondieresis, GREEK SMALL LETTER UPSILON WITH DIALYTIKA */
	0x5bdf, /* 1005, 0x7b7, U+03cc, KEY_Greek_omicronaccent, GREEK SMALL LETTER OMICRON WITH TONOS */
	0x5c00, /* 1006, 0x7b8, U+03cd, KEY_Greek_upsilonaccent, GREEK SMALL LETTER UPSILON WITH TONOS */
	0x5c6d, /* 1009, 0x7bb, U+03ce, KEY_Greek_omegaaccent, GREEK SMALL LETTER OMEGA WITH TONOS */
	0x68dc, /* 1137, 0xaa3, U+2004, KEY_em3space, THREE-PER-EM SPACE */
	0x68f2, /* 1138, 0xaa4, U+2005, KEY_em4space, FOUR-PER-EM SPACE */
	0x0000,
	0x6908, /* 1139, 0xaa5, U+2007, KEY_digitspace, FIGURE SPACE */
	0x40e9, /*  750, 0x4da, U+30ec, KEY_kana_RE, KATAKANA LETTER RE */
	0x6938, /* 1141, 0xaa7, U+2009, KEY_thinspace, THIN SPACE */
	0x40fe, /*  751, 0x4db, U+30ed, KEY_kana_RO, KATAKANA LETTER RO */
	0xaff7, /* 1828, 0x1002841, U+2841, KEY_braille_dots_17, BRAILLE PATTERN DOTS-17 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xccd4, /* 2084, 0x1000dd2, U+0dd2, KEY_Sinh_i2, SINHALA IS-PILLA */
	0x6aa7, /* 1157, 0xabb, U+2012, KEY_figdash, FIGURE DASH */
	0x697a, /* 1144, 0xaaa, U+2013, KEY_endash, EN DASH */
	0x6966, /* 1143, 0xaa9, U+2014, KEY_emdash, EM DASH */
	0x5b02, /*  998, 0x7af, U+2015, KEY_Greek_horizbar, HORIZONTAL BAR */
	0x0000,
	0x72be, /* 1238, 0xcdf, U+2017, KEY_hebrew_doublelowline, DOUBLE LOW LINE */
	0x6c50, /* 1173, 0xad0, U+2018, KEY_leftsinglequotemark, LEFT SINGLE QUOTATION MARK */
	0x6c71, /* 1174, 0xad1, U+2019, KEY_rightsinglequotemark, RIGHT SINGLE QUOTATION MARK */
	0x70d3, /* 1216, 0xafd, U+201a, KEY_singlelowquotemark, SINGLE LOW-9 QUOTATION MARK */
	0x0000,
	0x6c93, /* 1175, 0xad2, U+201c, KEY_leftdoublequotemark, LEFT DOUBLE QUOTATION MARK */
	0x6cb4, /* 1176, 0xad3, U+201d, KEY_rightdoublequotemark, RIGHT DOUBLE QUOTATION MARK */
	0x70f3, /* 1217, 0xafe, U+201e, KEY_doublelowquotemark, DOUBLE LOW-9 QUOTATION MARK */
	0x0000,
	0x6fa6, /* 1204, 0xaf1, U+2020, KEY_dagger, DAGGER */
	0x6fba, /* 1205, 0xaf2, U+2021, KEY_doubledagger, DOUBLE DAGGER */
	0x0000,
	0xcd2a, /* 2088, 0x1000dd8, U+0dd8, KEY_Sinh_ru2, SINHALA GAETTA-PILLA */
	0x0000,
	0x69bd, /* 1147, 0xaaf, U+2025, KEY_doubbaselinedot, TWO DOT LEADER */
	0x69a7, /* 1146, 0xaae, U+2026, KEY_ellipsis, HORIZONTAL ELLIPSIS */
	0x0000,
	0x0000,
	0xcd55, /* 2090, 0x1000dda, U+0dda, KEY_Sinh_ee2, SINHALA DIGA KOMBUVA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6cf0, /* 1178, 0xad5, U+2030, KEY_permille, PER MILLE SIGN */
	0x0000,
	0x6d06, /* 1179, 0xad6, U+2032, KEY_minutes, PRIME */
	0x6d1b, /* 1180, 0xad7, U+2033, KEY_seconds, DOUBLE PRIME */
	0x0000,
	0xcdac, /* 2094, 0x1000dde, U+0dde, KEY_Sinh_au2, SINHALA KOMBUVA HAA GAYANUKITTA */
	0x5123, /*  903, 0x6b3, U+0401, KEY_Cyrillic_IO, CYRILLIC CAPITAL LETTER IO */
	0x50ef, /*  901, 0x6b1, U+0402, KEY_Serbian_DJE, CYRILLIC CAPITAL LETTER DJE */
	0x5108, /*  902, 0x6b2, U+0403, KEY_Macedonia_GJE, CYRILLIC CAPITAL LETTER GJE */
	0x513c, /*  904, 0x6b4, U+0404, KEY_Ukrainian_IE, CYRILLIC CAPITAL LETTER UKRAINIAN IE */
	0x516f, /*  906, 0x6b5, U+0405, KEY_Macedonia_DSE, CYRILLIC CAPITAL LETTER DZE */
	0x518a, /*  907, 0x6b6, U+0406, KEY_Ukrainian_I, CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x51bb, /*  909, 0x6b7, U+0407, KEY_Ukrainian_YI, CYRILLIC CAPITAL LETTER YI */
	0x51ee, /*  911, 0x6b8, U+0408, KEY_Cyrillic_JE, CYRILLIC CAPITAL LETTER JE */
	0x3b8b, /*  687, 0x47e, U+203e, KEY_overline, OVERLINE */
	0x5252, /*  915, 0x6ba, U+040a, KEY_Cyrillic_NJE, CYRILLIC CAPITAL LETTER NJE */
	0x5285, /*  917, 0x6bb, U+040b, KEY_Serbian_TSHE, CYRILLIC CAPITAL LETTER TSHE */
	0x529f, /*  918, 0x6bc, U+040c, KEY_Macedonia_KJE, CYRILLIC CAPITAL LETTER KJE */
	0x0000,
	0x52e1, /*  920, 0x6be, U+040e, KEY_Byelorussian_SHORTU, CYRILLIC CAPITAL LETTER SHORT U */
	0x5302, /*  921, 0x6bf, U+040f, KEY_Cyrillic_DZHE, CYRILLIC CAPITAL LETTER DZHE */
	0x5684, /*  956, 0x6e1, U+0410, KEY_Cyrillic_A, CYRILLIC CAPITAL LETTER A */
	0x569c, /*  957, 0x6e2, U+0411, KEY_Cyrillic_BE, CYRILLIC CAPITAL LETTER BE */
	0x58ad, /*  978, 0x6f7, U+0412, KEY_Cyrillic_VE, CYRILLIC CAPITAL LETTER VE */
	0x571a, /*  962, 0x6e7, U+0413, KEY_Cyrillic_GHE, CYRILLIC CAPITAL LETTER GHE */
	0x56cf, /*  959, 0x6e4, U+0414, KEY_Cyrillic_DE, CYRILLIC CAPITAL LETTER DE */
	0x56e8, /*  960, 0x6e5, U+0415, KEY_Cyrillic_IE, CYRILLIC CAPITAL LETTER IE */
	0x5893, /*  977, 0x6f6, U+0416, KEY_Cyrillic_ZHE, CYRILLIC CAPITAL LETTER ZHE */
	0x5900, /*  981, 0x6fa, U+0417, KEY_Cyrillic_ZE, CYRILLIC CAPITAL LETTER ZE */
	0x574d, /*  964, 0x6e9, U+0418, KEY_Cyrillic_I, CYRILLIC CAPITAL LETTER I */
	0x5765, /*  965, 0x6ea, U+0419, KEY_Cyrillic_SHORTI, CYRILLIC CAPITAL LETTER SHORT I */
	0x5782, /*  966, 0x6eb, U+041a, KEY_Cyrillic_KA, CYRILLIC CAPITAL LETTER KA */
	0x579b, /*  967, 0x6ec, U+041b, KEY_Cyrillic_EL, CYRILLIC CAPITAL LETTER EL */
	0x57b4, /*  968, 0x6ed, U+041c, KEY_Cyrillic_EM, CYRILLIC CAPITAL LETTER EM */
	0x57cd, /*  969, 0x6ee, U+041d, KEY_Cyrillic_EN, CYRILLIC CAPITAL LETTER EN */
	0x57e6, /*  970, 0x6ef, U+041e, KEY_Cyrillic_O, CYRILLIC CAPITAL LETTER O */
	0x57fe, /*  971, 0x6f0, U+041f, KEY_Cyrillic_PE, CYRILLIC CAPITAL LETTER PE */
	0x5830, /*  973, 0x6f2, U+0420, KEY_Cyrillic_ER, CYRILLIC CAPITAL LETTER ER */
	0x5849, /*  974, 0x6f3, U+0421, KEY_Cyrillic_ES, CYRILLIC CAPITAL LETTER ES */
	0x5862, /*  975, 0x6f4, U+0422, KEY_Cyrillic_TE, CYRILLIC CAPITAL LETTER TE */
	0x587b, /*  976, 0x6f5, U+0423, KEY_Cyrillic_U, CYRILLIC CAPITAL LETTER U */
	0x5701, /*  961, 0x6e6, U+0424, KEY_Cyrillic_EF, CYRILLIC CAPITAL LETTER EF */
	0x5734, /*  963, 0x6e8, U+0425, KEY_Cyrillic_HA, CYRILLIC CAPITAL LETTER HA */
	0x56b5, /*  958, 0x6e3, U+0426, KEY_Cyrillic_TSE, CYRILLIC CAPITAL LETTER TSE */
	0x5967, /*  985, 0x6fe, U+0427, KEY_Cyrillic_CHE, CYRILLIC CAPITAL LETTER CHE */
	0x5919, /*  982, 0x6fb, U+0428, KEY_Cyrillic_SHA, CYRILLIC CAPITAL LETTER SHA */
	0x594b, /*  984, 0x6fd, U+0429, KEY_Cyrillic_SHCHA, CYRILLIC CAPITAL LETTER SHCHA */
	0x5981, /*  986, 0x6ff, U+042a, KEY_Cyrillic_HARDSIGN, CYRILLIC CAPITAL LETTER HARD SIGN */
	0x58e5, /*  980, 0x6f9, U+042b, KEY_Cyrillic_YERU, CYRILLIC CAPITAL LETTER YERU */
	0x58c6, /*  979, 0x6f8, U+042c, KEY_Cyrillic_SOFTSIGN, CYRILLIC CAPITAL LETTER SOFT SIGN */
	0x5933, /*  983, 0x6fc, U+042d, KEY_Cyrillic_E, CYRILLIC CAPITAL LETTER E */
	0x566b, /*  955, 0x6e0, U+042e, KEY_Cyrillic_YU, CYRILLIC CAPITAL LETTER YU */
	0x5817, /*  972, 0x6f1, U+042f, KEY_Cyrillic_YA, CYRILLIC CAPITAL LETTER YA */
	0x534f, /*  924, 0x6c1, U+0430, KEY_Cyrillic_a, CYRILLIC SMALL LETTER A */
	0x5367, /*  925, 0x6c2, U+0431, KEY_Cyrillic_be, CYRILLIC SMALL LETTER BE */
	0x5578, /*  946, 0x6d7, U+0432, KEY_Cyrillic_ve, CYRILLIC SMALL LETTER VE */
	0x53e5, /*  930, 0x6c7, U+0433, KEY_Cyrillic_ghe, CYRILLIC SMALL LETTER GHE */
	0x539a, /*  927, 0x6c4, U+0434, KEY_Cyrillic_de, CYRILLIC SMALL LETTER DE */
	0x53b3, /*  928, 0x6c5, U+0435, KEY_Cyrillic_ie, CYRILLIC SMALL LETTER IE */
	0x555e, /*  945, 0x6d6, U+0436, KEY_Cyrillic_zhe, CYRILLIC SMALL LETTER ZHE */
	0x55cb, /*  949, 0x6da, U+0437, KEY_Cyrillic_ze, CYRILLIC SMALL LETTER ZE */
	0x5418, /*  932, 0x6c9, U+0438, KEY_Cyrillic_i, CYRILLIC SMALL LETTER I */
	0x5430, /*  933, 0x6ca, U+0439, KEY_Cyrillic_shorti, CYRILLIC SMALL LETTER SHORT I */
	0x544d, /*  934, 0x6cb, U+043a, KEY_Cyrillic_ka, CYRILLIC SMALL LETTER KA */
	0x5466, /*  935, 0x6cc, U+043b, KEY_Cyrillic_el, CYRILLIC SMALL LETTER EL */
	0x547f, /*  936, 0x6cd, U+043c, KEY_Cyrillic_em, CYRILLIC SMALL LETTER EM */
	0x5498, /*  937, 0x6ce, U+043d, KEY_Cyrillic_en, CYRILLIC SMALL LETTER EN */
	0x54b1, /*  938, 0x6cf, U+043e, KEY_Cyrillic_o, CYRILLIC SMALL LETTER O */
	0x54c9, /*  939, 0x6d0, U+043f, KEY_Cyrillic_pe, CYRILLIC SMALL LETTER PE */
	0x54fb, /*  941, 0x6d2, U+0440, KEY_Cyrillic_er, CYRILLIC SMALL LETTER ER */
	0x5514, /*  942, 0x6d3, U+0441, KEY_Cyrillic_es, CYRILLIC SMALL LETTER ES */
	0x552d, /*  943, 0x6d4, U+0442, KEY_Cyrillic_te, CYRILLIC SMALL LETTER TE */
	0x5546, /*  944, 0x6d5, U+0443, KEY_Cyrillic_u, CYRILLIC SMALL LETTER U */
	0x53cc, /*  929, 0x6c6, U+0444, KEY_Cyrillic_ef, CYRILLIC SMALL LETTER EF */
	0x53ff, /*  931, 0x6c8, U+0445, KEY_Cyrillic_ha, CYRILLIC SMALL LETTER HA */
	0x5380, /*  926, 0x6c3, U+0446, KEY_Cyrillic_tse, CYRILLIC SMALL LETTER TSE */
	0x5632, /*  953, 0x6de, U+0447, KEY_Cyrillic_che, CYRILLIC SMALL LETTER CHE */
	0x55e4, /*  950, 0x6db, U+0448, KEY_Cyrillic_sha, CYRILLIC SMALL LETTER SHA */
	0x5616, /*  952, 0x6dd, U+0449, KEY_Cyrillic_shcha, CYRILLIC SMALL LETTER SHCHA */
	0x564c, /*  954, 0x6df, U+044a, KEY_Cyrillic_hardsign, CYRILLIC SMALL LETTER HARD SIGN */
	0x55b0, /*  948, 0x6d9, U+044b, KEY_Cyrillic_yeru, CYRILLIC SMALL LETTER YERU */
	0x5591, /*  947, 0x6d8, U+044c, KEY_Cyrillic_softsign, CYRILLIC SMALL LETTER SOFT SIGN */
	0x55fe, /*  951, 0x6dc, U+044d, KEY_Cyrillic_e, CYRILLIC SMALL LETTER E */
	0x5336, /*  923, 0x6c0, U+044e, KEY_Cyrillic_yu, CYRILLIC SMALL LETTER YU */
	0x54e2, /*  940, 0x6d1, U+044f, KEY_Cyrillic_ya, CYRILLIC SMALL LETTER YA */
	0xa55f, /* 1733, 0x1002085, U+2085, KEY_fivesubscript, SUBSCRIPT FIVE */
	0x4ec4, /*  880, 0x6a3, U+0451, KEY_Cyrillic_io, CYRILLIC SMALL LETTER IO */
	0x4e90, /*  878, 0x6a1, U+0452, KEY_Serbian_dje, CYRILLIC SMALL LETTER DJE */
	0x4ea9, /*  879, 0x6a2, U+0453, KEY_Macedonia_gje, CYRILLIC SMALL LETTER GJE */
	0x4edd, /*  881, 0x6a4, U+0454, KEY_Ukrainian_ie, CYRILLIC SMALL LETTER UKRAINIAN IE */
	0x4f10, /*  883, 0x6a5, U+0455, KEY_Macedonia_dse, CYRILLIC SMALL LETTER DZE */
	0x4f2b, /*  884, 0x6a6, U+0456, KEY_Ukrainian_i, CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I */
	0x4f5c, /*  886, 0x6a7, U+0457, KEY_Ukrainian_yi, CYRILLIC SMALL LETTER YI */
	0x4f8f, /*  888, 0x6a8, U+0458, KEY_Cyrillic_je, CYRILLIC SMALL LETTER JE */
	0x4fc0, /*  890, 0x6a9, U+0459, KEY_Cyrillic_lje, CYRILLIC SMALL LETTER LJE */
	0x4ff3, /*  892, 0x6aa, U+045a, KEY_Cyrillic_nje, CYRILLIC SMALL LETTER NJE */
	0x5026, /*  894, 0x6ab, U+045b, KEY_Serbian_tshe, CYRILLIC SMALL LETTER TSHE */
	0x5040, /*  895, 0x6ac, U+045c, KEY_Macedonia_kje, CYRILLIC SMALL LETTER KJE */
	0xcc3c, /* 2077, 0x1000dc4, U+0dc4, KEY_Sinh_ha, SINHALA HAYANNA */
	0x5082, /*  897, 0x6ae, U+045e, KEY_Byelorussian_shortu, CYRILLIC SMALL LETTER SHORT U */
	0x50a3, /*  898, 0x6af, U+045f, KEY_Cyrillic_dzhe, CYRILLIC SMALL LETTER DZHE */
	0x0000,
	0x0000,
	0x0000,
	0xcc7c, /* 2080, 0x1000dca, U+0dca, KEY_Sinh_al, SINHALA AL-LAKUNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcc91, /* 2081, 0x1000dcf, U+0dcf, KEY_Sinh_aa2, SINHALA AELA-PILLA */
	0xcca7, /* 2082, 0x1000dd0, U+0dd0, KEY_Sinh_ae2, SINHALA AEDA-PILLA */
	0xccbd, /* 2083, 0x1000dd1, U+0dd1, KEY_Sinh_aee2, SINHALA DIGA AEDA-PILLA */
	0xa2f6, /* 1708, 0x10020a0, U+20a0, KEY_EcuSign, EURO-CURRENCY SIGN */
	0xa30b, /* 1709, 0x10020a1, U+20a1, KEY_ColonSign, COLON SIGN */
	0xa322, /* 1710, 0x10020a2, U+20a2, KEY_CruzeiroSign, CRUZEIRO SIGN */
	0xa33c, /* 1711, 0x10020a3, U+20a3, KEY_FFrancSign, FRENCH FRANC SIGN */
	0xa354, /* 1712, 0x10020a4, U+20a4, KEY_LiraSign, LIRA SIGN */
	0xa36a, /* 1713, 0x10020a5, U+20a5, KEY_MillSign, MILL SIGN */
	0xa380, /* 1714, 0x10020a6, U+20a6, KEY_NairaSign, NAIRA SIGN */
	0xa397, /* 1715, 0x10020a7, U+20a7, KEY_PesetaSign, PESETA SIGN */
	0xa3af, /* 1716, 0x10020a8, U+20a8, KEY_RupeeSign, RUPEE SIGN */
	0xa3c6, /* 1717, 0x10020a9, U+20a9, KEY_WonSign, WON SIGN */
	0xa3db, /* 1718, 0x10020aa, U+20aa, KEY_NewSheqelSign, NEW SHEQEL SIGN */
	0xa3f6, /* 1719, 0x10020ab, U+20ab, KEY_DongSign, DONG SIGN */
	0xa40c, /* 1720, 0x20ac, U+20ac, KEY_EuroSign, EURO SIGN */
	0xcdc2, /* 2095, 0x1000ddf, U+0ddf, KEY_Sinh_lu2, SINHALA GAYANUKITTA */
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
	0xcdd8, /* 2096, 0x1000df2, U+0df2, KEY_Sinh_ruu2, SINHALA DIGA GAETTA-PILLA */
	0xcdef, /* 2097, 0x1000df3, U+0df3, KEY_Sinh_luu2, SINHALA DIGA GAYANUKITTA */
	0xce06, /* 2098, 0x1000df4, U+0df4, KEY_Sinh_kunddaliya, SINHALA KUNDDALIYA */
	0x0000,
	0x0000,
	0x52ba, /*  919, 0x6bd, U+0490, KEY_Ukrainian_GHE_WITH_UPTURN, CYRILLIC CAPITAL LETTER GHE WITH UPTURN */
	0x505b, /*  896, 0x6ad, U+0491, KEY_Ukrainian_ghe_with_upturn, CYRILLIC SMALL LETTER GHE WITH UPTURN */
	0x4ab2, /*  848, 0x1000492, U+0492, KEY_Cyrillic_GHE_bar, CYRILLIC CAPITAL LETTER GHE WITH STROKE */
	0x4ad0, /*  849, 0x1000493, U+0493, KEY_Cyrillic_ghe_bar, CYRILLIC SMALL LETTER GHE WITH STROKE */
	0x0000,
	0x0000,
	0x4aee, /*  850, 0x1000496, U+0496, KEY_Cyrillic_ZHE_descender, CYRILLIC CAPITAL LETTER ZHE WITH DESCENDER */
	0x4b12, /*  851, 0x1000497, U+0497, KEY_Cyrillic_zhe_descender, CYRILLIC SMALL LETTER ZHE WITH DESCENDER */
	0x0000,
	0x0000,
	0x4b36, /*  852, 0x100049a, U+049a, KEY_Cyrillic_KA_descender, CYRILLIC CAPITAL LETTER KA WITH DESCENDER */
	0x4b59, /*  853, 0x100049b, U+049b, KEY_Cyrillic_ka_descender, CYRILLIC SMALL LETTER KA WITH DESCENDER */
	0x4b7c, /*  854, 0x100049c, U+049c, KEY_Cyrillic_KA_vertstroke, CYRILLIC CAPITAL LETTER KA WITH VERTICAL STROKE */
	0x4ba0, /*  855, 0x100049d, U+049d, KEY_Cyrillic_ka_vertstroke, CYRILLIC SMALL LETTER KA WITH VERTICAL STROKE */
	0x7732, /* 1282, 0xda5, U+0e05, KEY_Thai_khokhon, THAI CHARACTER KHO KHON */
	0x774c, /* 1283, 0xda6, U+0e06, KEY_Thai_khorakhang, THAI CHARACTER KHO RAKHANG */
	0x7769, /* 1284, 0xda7, U+0e07, KEY_Thai_ngongu, THAI CHARACTER NGO NGU */
	0x7782, /* 1285, 0xda8, U+0e08, KEY_Thai_chochan, THAI CHARACTER CHO CHAN */
	0x4bc4, /*  856, 0x10004a2, U+04a2, KEY_Cyrillic_EN_descender, CYRILLIC CAPITAL LETTER EN WITH DESCENDER */
	0x4be7, /*  857, 0x10004a3, U+04a3, KEY_Cyrillic_en_descender, CYRILLIC SMALL LETTER EN WITH DESCENDER */
	0x77d2, /* 1288, 0xdab, U+0e0b, KEY_Thai_soso, THAI CHARACTER SO SO */
	0x77e9, /* 1289, 0xdac, U+0e0c, KEY_Thai_chochoe, THAI CHARACTER CHO CHOE */
	0x7803, /* 1290, 0xdad, U+0e0d, KEY_Thai_yoying, THAI CHARACTER YO YING */
	0x781c, /* 1291, 0xdae, U+0e0e, KEY_Thai_dochada, THAI CHARACTER DO CHADA */
	0x7836, /* 1292, 0xdaf, U+0e0f, KEY_Thai_topatak, THAI CHARACTER TO PATAK */
	0x7850, /* 1293, 0xdb0, U+0e10, KEY_Thai_thothan, THAI CHARACTER THO THAN */
	0x786a, /* 1294, 0xdb1, U+0e11, KEY_Thai_thonangmontho, THAI CHARACTER THO NANGMONTHO */
	0x788a, /* 1295, 0xdb2, U+0e12, KEY_Thai_thophuthao, THAI CHARACTER THO PHUTHAO */
	0x78a7, /* 1296, 0xdb3, U+0e13, KEY_Thai_nonen, THAI CHARACTER NO NEN */
	0x78bf, /* 1297, 0xdb4, U+0e14, KEY_Thai_dodek, THAI CHARACTER DO DEK */
	0x4c0a, /*  858, 0x10004ae, U+04ae, KEY_Cyrillic_U_straight, CYRILLIC CAPITAL LETTER STRAIGHT U */
	0x4c2b, /*  859, 0x10004af, U+04af, KEY_Cyrillic_u_straight, CYRILLIC SMALL LETTER STRAIGHT U */
	0x4c4c, /*  860, 0x10004b0, U+04b0, KEY_Cyrillic_U_straight_bar, CYRILLIC CAPITAL LETTER STRAIGHT U WITH STROKE */
	0x4c71, /*  861, 0x10004b1, U+04b1, KEY_Cyrillic_u_straight_bar, CYRILLIC SMALL LETTER STRAIGHT U WITH STROKE */
	0x4c96, /*  862, 0x10004b2, U+04b2, KEY_Cyrillic_HA_descender, CYRILLIC CAPITAL LETTER HA WITH DESCENDER */
	0x4cb9, /*  863, 0x10004b3, U+04b3, KEY_Cyrillic_ha_descender, CYRILLIC SMALL LETTER HA WITH DESCENDER */
	0x7973, /* 1304, 0xdbb, U+0e1b, KEY_Thai_popla, THAI CHARACTER PO PLA */
	0x798b, /* 1305, 0xdbc, U+0e1c, KEY_Thai_phophung, THAI CHARACTER PHO PHUNG */
	0x4cdc, /*  864, 0x10004b6, U+04b6, KEY_Cyrillic_CHE_descender, CYRILLIC CAPITAL LETTER CHE WITH DESCENDER */
	0x4d00, /*  865, 0x10004b7, U+04b7, KEY_Cyrillic_che_descender, CYRILLIC SMALL LETTER CHE WITH DESCENDER */
	0x4d24, /*  866, 0x10004b8, U+04b8, KEY_Cyrillic_CHE_vertstroke, CYRILLIC CAPITAL LETTER CHE WITH VERTICAL STROKE */
	0x4d49, /*  867, 0x10004b9, U+04b9, KEY_Cyrillic_che_vertstroke, CYRILLIC SMALL LETTER CHE WITH VERTICAL STROKE */
	0x4d6e, /*  868, 0x10004ba, U+04ba, KEY_Cyrillic_SHHA, CYRILLIC CAPITAL LETTER SHHA */
	0x4d89, /*  869, 0x10004bb, U+04bb, KEY_Cyrillic_shha, CYRILLIC SMALL LETTER SHHA */
	0x7a3b, /* 1312, 0xdc3, U+0e23, KEY_Thai_rorua, THAI CHARACTER RO RUA */
	0x7a53, /* 1313, 0xdc4, U+0e24, KEY_Thai_ru, THAI CHARACTER RU */
	0x7a68, /* 1314, 0xdc5, U+0e25, KEY_Thai_loling, THAI CHARACTER LO LING */
	0x7a81, /* 1315, 0xdc6, U+0e26, KEY_Thai_lu, THAI CHARACTER LU */
	0x7a96, /* 1316, 0xdc7, U+0e27, KEY_Thai_wowaen, THAI CHARACTER WO WAEN */
	0x7aaf, /* 1317, 0xdc8, U+0e28, KEY_Thai_sosala, THAI CHARACTER SO SALA */
	0x7ac8, /* 1318, 0xdc9, U+0e29, KEY_Thai_sorusi, THAI CHARACTER SO RUSI */
	0x7ae1, /* 1319, 0xdca, U+0e2a, KEY_Thai_sosua, THAI CHARACTER SO SUA */
	0x7af9, /* 1320, 0xdcb, U+0e2b, KEY_Thai_hohip, THAI CHARACTER HO HIP */
	0x7b11, /* 1321, 0xdcc, U+0e2c, KEY_Thai_lochula, THAI CHARACTER LO CHULA */
	0x7b2b, /* 1322, 0xdcd, U+0e2d, KEY_Thai_oang, THAI CHARACTER O ANG */
	0x7b42, /* 1323, 0xdce, U+0e2e, KEY_Thai_honokhuk, THAI CHARACTER HO NOKHUK */
	0x7b5d, /* 1324, 0xdcf, U+0e2f, KEY_Thai_paiyannoi, THAI CHARACTER PAIYANNOI */
	0x7b79, /* 1325, 0xdd0, U+0e30, KEY_Thai_saraa, THAI CHARACTER SARA A */
	0x7b91, /* 1326, 0xdd1, U+0e31, KEY_Thai_maihanakat, THAI CHARACTER MAI HAN-AKAT */
	0x7bae, /* 1327, 0xdd2, U+0e32, KEY_Thai_saraaa, THAI CHARACTER SARA AA */
	0x7bc7, /* 1328, 0xdd3, U+0e33, KEY_Thai_saraam, THAI CHARACTER SARA AM */
	0x7be0, /* 1329, 0xdd4, U+0e34, KEY_Thai_sarai, THAI CHARACTER SARA I */
	0x7bf8, /* 1330, 0xdd5, U+0e35, KEY_Thai_saraii, THAI CHARACTER SARA II */
	0x7c11, /* 1331, 0xdd6, U+0e36, KEY_Thai_saraue, THAI CHARACTER SARA UE */
	0x6a93, /* 1156, 0xab8, U+2105, KEY_careof, CARE OF */
	0x7c44, /* 1333, 0xdd8, U+0e38, KEY_Thai_sarau, THAI CHARACTER SARA U */
	0x7c5c, /* 1334, 0xdd9, U+0e39, KEY_Thai_sarauu, THAI CHARACTER SARA UU */
	0x7c75, /* 1335, 0xdda, U+0e3a, KEY_Thai_phinthu, THAI CHARACTER PHINTHU */
	0x0000,
	0xa904, /* 1769, 0x1002806, U+2806, KEY_braille_dots_23, BRAILLE PATTERN DOTS-23 */
	0x0000,
	0xa921, /* 1770, 0x1002807, U+2807, KEY_braille_dots_123, BRAILLE PATTERN DOTS-123 */
	0x4da4, /*  870, 0x10004d8, U+04d8, KEY_Cyrillic_SCHWA, CYRILLIC CAPITAL LETTER SCHWA */
	0x4dc0, /*  871, 0x10004d9, U+04d9, KEY_Cyrillic_schwa, CYRILLIC SMALL LETTER SCHWA */
	0x7ce2, /* 1339, 0xde1, U+0e41, KEY_Thai_saraae, THAI CHARACTER SARA AE */
	0x7cfb, /* 1340, 0xde2, U+0e42, KEY_Thai_sarao, THAI CHARACTER SARA O */
	0x7d13, /* 1341, 0xde3, U+0e43, KEY_Thai_saraaimaimuan, THAI CHARACTER SARA AI MAIMUAN */
	0x7d33, /* 1342, 0xde4, U+0e44, KEY_Thai_saraaimaimalai, THAI CHARACTER SARA AI MAIMALAI */
	0x7d54, /* 1343, 0xde5, U+0e45, KEY_Thai_lakkhangyao, THAI CHARACTER LAKKHANGYAO */
	0x7d72, /* 1344, 0xde6, U+0e46, KEY_Thai_maiyamok, THAI CHARACTER MAIYAMOK */
	0x7d8d, /* 1345, 0xde7, U+0e47, KEY_Thai_maitaikhu, THAI CHARACTER MAITAIKHU */
	0x50d7, /*  900, 0x6b0, U+2116, KEY_numerosign, NUMERO SIGN */
	0x4ddc, /*  872, 0x10004e2, U+04e2, KEY_Cyrillic_I_macron, CYRILLIC CAPITAL LETTER I WITH MACRON */
	0x4dfb, /*  873, 0x10004e3, U+04e3, KEY_Cyrillic_i_macron, CYRILLIC SMALL LETTER I WITH MACRON */
	0x7df3, /* 1349, 0xdeb, U+0e4b, KEY_Thai_maichattawa, THAI CHARACTER MAI CHATTAWA */
	0x7e11, /* 1350, 0xdec, U+0e4c, KEY_Thai_thanthakhat, THAI CHARACTER THANTHAKHAT */
	0x7e2f, /* 1351, 0xded, U+0e4d, KEY_Thai_nikhahit, THAI CHARACTER NIKHAHIT */
	0xaa0c, /* 1778, 0x100280f, U+280f, KEY_braille_dots_1234, BRAILLE PATTERN DOTS-1234 */
	0x4e1a, /*  874, 0x10004e8, U+04e8, KEY_Cyrillic_O_bar, CYRILLIC CAPITAL LETTER BARRED O */
	0x4e36, /*  875, 0x10004e9, U+04e9, KEY_Cyrillic_o_bar, CYRILLIC SMALL LETTER BARRED O */
	0x7e63, /* 1353, 0xdf1, U+0e51, KEY_Thai_leknung, THAI DIGIT ONE */
	0x7e7d, /* 1354, 0xdf2, U+0e52, KEY_Thai_leksong, THAI DIGIT TWO */
	0x7e97, /* 1355, 0xdf3, U+0e53, KEY_Thai_leksam, THAI DIGIT THREE */
	0x6b8b, /* 1166, 0xac9, U+2122, KEY_trademark, TRADE MARK SIGN */
	0x4e52, /*  876, 0x10004ee, U+04ee, KEY_Cyrillic_U_macron, CYRILLIC CAPITAL LETTER U WITH MACRON */
	0x4e71, /*  877, 0x10004ef, U+04ef, KEY_Cyrillic_u_macron, CYRILLIC SMALL LETTER U WITH MACRON */
	0x7ef9, /* 1359, 0xdf7, U+0e57, KEY_Thai_lekchet, THAI DIGIT SEVEN */
	0x7f13, /* 1360, 0xdf8, U+0e58, KEY_Thai_lekpaet, THAI DIGIT EIGHT */
	0x7f2d, /* 1361, 0xdf9, U+0e59, KEY_Thai_lekkao, THAI DIGIT NINE */
	0xaabc, /* 1784, 0x1002815, U+2815, KEY_braille_dots_135, BRAILLE PATTERN DOTS-135 */
	0x0000,
	0xaada, /* 1785, 0x1002816, U+2816, KEY_braille_dots_235, BRAILLE PATTERN DOTS-235 */
	0x0000,
	0x9ba2, /* 1632, 0x1001eb0, U+1eb0, KEY_Abrevegrave, LATIN CAPITAL LETTER A WITH BREVE AND GRAVE */
	0x0000,
	0xab17, /* 1787, 0x1002818, U+2818, KEY_braille_dots_45, BRAILLE PATTERN DOTS-45 */
	0x0000,
	0xab34, /* 1788, 0x1002819, U+2819, KEY_braille_dots_145, BRAILLE PATTERN DOTS-145 */
	0x0000,
	0xab52, /* 1789, 0x100281a, U+281a, KEY_braille_dots_245, BRAILLE PATTERN DOTS-245 */
	0x0000,
	0xab70, /* 1790, 0x100281b, U+281b, KEY_braille_dots_1245, BRAILLE PATTERN DOTS-1245 */
	0x0000,
	0xab8f, /* 1791, 0x100281c, U+281c, KEY_braille_dots_345, BRAILLE PATTERN DOTS-345 */
	0x0000,
	0xabad, /* 1792, 0x100281d, U+281d, KEY_braille_dots_1345, BRAILLE PATTERN DOTS-1345 */
	0x0000,
	0xabcc, /* 1793, 0x100281e, U+281e, KEY_braille_dots_2345, BRAILLE PATTERN DOTS-2345 */
	0x0000,
	0xabeb, /* 1794, 0x100281f, U+281f, KEY_braille_dots_12345, BRAILLE PATTERN DOTS-12345 */
	0x0000,
	0xac0b, /* 1795, 0x1002820, U+2820, KEY_braille_dots_6, BRAILLE PATTERN DOTS-6 */
	0x0000,
	0x7c2a, /* 1332, 0xdd7, U+0e37, KEY_Thai_sarauee, THAI CHARACTER SARA UEE */
	0x0000,
	0xac44, /* 1797, 0x1002822, U+2822, KEY_braille_dots_26, BRAILLE PATTERN DOTS-26 */
	0x0000,
	0xac61, /* 1798, 0x1002823, U+2823, KEY_braille_dots_126, BRAILLE PATTERN DOTS-126 */
	0x0000,
	0xac7f, /* 1799, 0x1002824, U+2824, KEY_braille_dots_36, BRAILLE PATTERN DOTS-36 */
	0x0000,
	0xac9c, /* 1800, 0x1002825, U+2825, KEY_braille_dots_136, BRAILLE PATTERN DOTS-136 */
	0x0000,
	0xacba, /* 1801, 0x1002826, U+2826, KEY_braille_dots_236, BRAILLE PATTERN DOTS-236 */
	0x0000,
	0xacd8, /* 1802, 0x1002827, U+2827, KEY_braille_dots_1236, BRAILLE PATTERN DOTS-1236 */
	0x0000,
	0xacf7, /* 1803, 0x1002828, U+2828, KEY_braille_dots_46, BRAILLE PATTERN DOTS-46 */
	0x0000,
	0xad14, /* 1804, 0x1002829, U+2829, KEY_braille_dots_146, BRAILLE PATTERN DOTS-146 */
	0x0000,
	0xad32, /* 1805, 0x100282a, U+282a, KEY_braille_dots_246, BRAILLE PATTERN DOTS-246 */
	0x69da, /* 1148, 0xab0, U+2153, KEY_onethird, VULGAR FRACTION ONE THIRD */
	0x69f0, /* 1149, 0xab1, U+2154, KEY_twothirds, VULGAR FRACTION TWO THIRDS */
	0x6a07, /* 1150, 0xab2, U+2155, KEY_onefifth, VULGAR FRACTION ONE FIFTH */
	0x6a1d, /* 1151, 0xab3, U+2156, KEY_twofifths, VULGAR FRACTION TWO FIFTHS */
	0x6a34, /* 1152, 0xab4, U+2157, KEY_threefifths, VULGAR FRACTION THREE FIFTHS */
	0x6a4d, /* 1153, 0xab5, U+2158, KEY_fourfifths, VULGAR FRACTION FOUR FIFTHS */
	0x6a65, /* 1154, 0xab6, U+2159, KEY_onesixth, VULGAR FRACTION ONE SIXTH */
	0x6a7b, /* 1155, 0xab7, U+215a, KEY_fivesixths, VULGAR FRACTION FIVE SIXTHS */
	0x6b27, /* 1162, 0xac3, U+215b, KEY_oneeighth, VULGAR FRACTION ONE EIGHTH */
	0x6b3e, /* 1163, 0xac4, U+215c, KEY_threeeighths, VULGAR FRACTION THREE EIGHTHS */
	0x6b58, /* 1164, 0xac5, U+215d, KEY_fiveeighths, VULGAR FRACTION FIVE EIGHTHS */
	0x6b71, /* 1165, 0xac6, U+215e, KEY_seveneighths, VULGAR FRACTION SEVEN EIGHTHS */
	0x0000,
	0xae08, /* 1812, 0x1002831, U+2831, KEY_braille_dots_156, BRAILLE PATTERN DOTS-156 */
	0x0000,
	0xae26, /* 1813, 0x1002832, U+2832, KEY_braille_dots_256, BRAILLE PATTERN DOTS-256 */
	0x0000,
	0xae44, /* 1814, 0x1002833, U+2833, KEY_braille_dots_1256, BRAILLE PATTERN DOTS-1256 */
	0x0000,
	0x8cc5, /* 1482, 0x1000531, U+0531, KEY_Armenian_AYB, ARMENIAN CAPITAL LETTER AYB */
	0x8cf9, /* 1484, 0x1000532, U+0532, KEY_Armenian_BEN, ARMENIAN CAPITAL LETTER BEN */
	0x8d2d, /* 1486, 0x1000533, U+0533, KEY_Armenian_GIM, ARMENIAN CAPITAL LETTER GIM */
	0x8d61, /* 1488, 0x1000534, U+0534, KEY_Armenian_DA, ARMENIAN CAPITAL LETTER DA */
	0x8d93, /* 1490, 0x1000535, U+0535, KEY_Armenian_YECH, ARMENIAN CAPITAL LETTER ECH */
	0x8dc9, /* 1492, 0x1000536, U+0536, KEY_Armenian_ZA, ARMENIAN CAPITAL LETTER ZA */
	0x8dfb, /* 1494, 0x1000537, U+0537, KEY_Armenian_E, ARMENIAN CAPITAL LETTER EH */
	0x8e2b, /* 1496, 0x1000538, U+0538, KEY_Armenian_AT, ARMENIAN CAPITAL LETTER ET */
	0x8e5d, /* 1498, 0x1000539, U+0539, KEY_Armenian_TO, ARMENIAN CAPITAL LETTER TO */
	0x8e8f, /* 1500, 0x100053a, U+053a, KEY_Armenian_ZHE, ARMENIAN CAPITAL LETTER ZHE */
	0x8ec3, /* 1502, 0x100053b, U+053b, KEY_Armenian_INI, ARMENIAN CAPITAL LETTER INI */
	0x8ef7, /* 1504, 0x100053c, U+053c, KEY_Armenian_LYUN, ARMENIAN CAPITAL LETTER LIWN */
	0x8f2d, /* 1506, 0x100053d, U+053d, KEY_Armenian_KHE, ARMENIAN CAPITAL LETTER XEH */
	0x7da9, /* 1346, 0xde8, U+0e48, KEY_Thai_maiek, THAI CHARACTER MAI EK */
	0x8f95, /* 1510, 0x100053f, U+053f, KEY_Armenian_KEN, ARMENIAN CAPITAL LETTER KEN */
	0x8fc9, /* 1512, 0x1000540, U+0540, KEY_Armenian_HO, ARMENIAN CAPITAL LETTER HO */
	0x709f, /* 1214, 0xafb, U+2117, KEY_phonographcopyright, SOUND RECORDING COPYRIGHT */
	0x902f, /* 1516, 0x1000542, U+0542, KEY_Armenian_GHAT, ARMENIAN CAPITAL LETTER GHAD */
	0x9065, /* 1518, 0x1000543, U+0543, KEY_Armenian_TCHE, ARMENIAN CAPITAL LETTER CHEH */
	0x7dda, /* 1348, 0xdea, U+0e4a, KEY_Thai_maitri, THAI CHARACTER MAI TRI */
	0x90cf, /* 1522, 0x1000545, U+0545, KEY_Armenian_HI, ARMENIAN CAPITAL LETTER YI */
	0x9101, /* 1524, 0x1000546, U+0546, KEY_Armenian_NU, ARMENIAN CAPITAL LETTER NOW */
	0x9133, /* 1526, 0x1000547, U+0547, KEY_Armenian_SHA, ARMENIAN CAPITAL LETTER SHA */
	0x9167, /* 1528, 0x1000548, U+0548, KEY_Armenian_VO, ARMENIAN CAPITAL LETTER VO */
	0x9199, /* 1530, 0x1000549, U+0549, KEY_Armenian_CHA, ARMENIAN CAPITAL LETTER CHA */
	0x91cd, /* 1532, 0x100054a, U+054a, KEY_Armenian_PE, ARMENIAN CAPITAL LETTER PEH */
	0x91ff, /* 1534, 0x100054b, U+054b, KEY_Armenian_JE, ARMENIAN CAPITAL LETTER JHEH */
	0x9231, /* 1536, 0x100054c, U+054c, KEY_Armenian_RA, ARMENIAN CAPITAL LETTER RA */
	0x9263, /* 1538, 0x100054d, U+054d, KEY_Armenian_SE, ARMENIAN CAPITAL LETTER SEH */
	0x9295, /* 1540, 0x100054e, U+054e, KEY_Armenian_VEV, ARMENIAN CAPITAL LETTER VEW */
	0x92c9, /* 1542, 0x100054f, U+054f, KEY_Armenian_TYUN, ARMENIAN CAPITAL LETTER TIWN */
	0x92ff, /* 1544, 0x1000550, U+0550, KEY_Armenian_RE, ARMENIAN CAPITAL LETTER REH */
	0x9331, /* 1546, 0x1000551, U+0551, KEY_Armenian_TSO, ARMENIAN CAPITAL LETTER CO */
	0x9365, /* 1548, 0x1000552, U+0552, KEY_Armenian_VYUN, ARMENIAN CAPITAL LETTER YIWN */
	0x939b, /* 1550, 0x1000553, U+0553, KEY_Armenian_PYUR, ARMENIAN CAPITAL LETTER PIWR */
	0x93d1, /* 1552, 0x1000554, U+0554, KEY_Armenian_KE, ARMENIAN CAPITAL LETTER KEH */
	0x9403, /* 1554, 0x1000555, U+0555, KEY_Armenian_O, ARMENIAN CAPITAL LETTER OH */
	0x6cd6, /* 1177, 0xad4, U+211e, KEY_prescription, PRESCRIPTION TAKE */
	0xb0a8, /* 1834, 0x1002847, U+2847, KEY_braille_dots_1237, BRAILLE PATTERN DOTS-1237 */
	0x0000,
	0xb0c7, /* 1835, 0x1002848, U+2848, KEY_braille_dots_47, BRAILLE PATTERN DOTS-47 */
	0x9465, /* 1558, 0x100055a, U+055a, KEY_Armenian_apostrophe, ARMENIAN APOSTROPHE */
	0x663d, /* 1107, 0x8fb, U+2190, KEY_leftarrow, LEFTWARDS ARROW */
	0x6654, /* 1108, 0x8fc, U+2191, KEY_uparrow, UPWARDS ARROW */
	0x6669, /* 1109, 0x8fd, U+2192, KEY_rightarrow, RIGHTWARDS ARROW */
	0x6681, /* 1110, 0x8fe, U+2193, KEY_downarrow, DOWNWARDS ARROW */
	0xb120, /* 1838, 0x100284b, U+284b, KEY_braille_dots_1247, BRAILLE PATTERN DOTS-1247 */
	0x0000,
	0x8cdf, /* 1483, 0x1000561, U+0561, KEY_Armenian_ayb, ARMENIAN SMALL LETTER AYB */
	0x7eb0, /* 1356, 0xdf4, U+0e54, KEY_Thai_leksi, THAI DIGIT FOUR */
	0x8d47, /* 1487, 0x1000563, U+0563, KEY_Armenian_gim, ARMENIAN SMALL LETTER GIM */
	0x8d7a, /* 1489, 0x1000564, U+0564, KEY_Armenian_da, ARMENIAN SMALL LETTER DA */
	0x7ec8, /* 1357, 0xdf5, U+0e55, KEY_Thai_lekha, THAI DIGIT FIVE */
	0x8de2, /* 1493, 0x1000566, U+0566, KEY_Armenian_za, ARMENIAN SMALL LETTER ZA */
	0x8e13, /* 1495, 0x1000567, U+0567, KEY_Armenian_e, ARMENIAN SMALL LETTER EH */
	0x7ee0, /* 1358, 0xdf6, U+0e56, KEY_Thai_lekhok, THAI DIGIT SIX */
	0x8e76, /* 1499, 0x1000569, U+0569, KEY_Armenian_to, ARMENIAN SMALL LETTER TO */
	0x8ea9, /* 1501, 0x100056a, U+056a, KEY_Armenian_zhe, ARMENIAN SMALL LETTER ZHE */
	0x8edd, /* 1503, 0x100056b, U+056b, KEY_Armenian_ini, ARMENIAN SMALL LETTER INI */
	0x8f12, /* 1505, 0x100056c, U+056c, KEY_Armenian_lyun, ARMENIAN SMALL LETTER LIWN */
	0x8f47, /* 1507, 0x100056d, U+056d, KEY_Armenian_khe, ARMENIAN SMALL LETTER XEH */
	0x8f7b, /* 1509, 0x100056e, U+056e, KEY_Armenian_tsa, ARMENIAN SMALL LETTER CA */
	0x8faf, /* 1511, 0x100056f, U+056f, KEY_Armenian_ken, ARMENIAN SMALL LETTER KEN */
	0x8fe2, /* 1513, 0x1000570, U+0570, KEY_Armenian_ho, ARMENIAN SMALL LETTER HO */
	0x9015, /* 1515, 0x1000571, U+0571, KEY_Armenian_dza, ARMENIAN SMALL LETTER JA */
	0x904a, /* 1517, 0x1000572, U+0572, KEY_Armenian_ghat, ARMENIAN SMALL LETTER GHAD */
	0x9080, /* 1519, 0x1000573, U+0573, KEY_Armenian_tche, ARMENIAN SMALL LETTER CHEH */
	0x90b5, /* 1521, 0x1000574, U+0574, KEY_Armenian_men, ARMENIAN SMALL LETTER MEN */
	0x90e8, /* 1523, 0x1000575, U+0575, KEY_Armenian_hi, ARMENIAN SMALL LETTER YI */
	0x911a, /* 1525, 0x1000576, U+0576, KEY_Armenian_nu, ARMENIAN SMALL LETTER NOW */
	0x914d, /* 1527, 0x1000577, U+0577, KEY_Armenian_sha, ARMENIAN SMALL LETTER SHA */
	0x9180, /* 1529, 0x1000578, U+0578, KEY_Armenian_vo, ARMENIAN SMALL LETTER VO */
	0x91b3, /* 1531, 0x1000579, U+0579, KEY_Armenian_cha, ARMENIAN SMALL LETTER CHA */
	0x91e6, /* 1533, 0x100057a, U+057a, KEY_Armenian_pe, ARMENIAN SMALL LETTER PEH */
	0x9218, /* 1535, 0x100057b, U+057b, KEY_Armenian_je, ARMENIAN SMALL LETTER JHEH */
	0x924a, /* 1537, 0x100057c, U+057c, KEY_Armenian_ra, ARMENIAN SMALL LETTER RA */
	0x927c, /* 1539, 0x100057d, U+057d, KEY_Armenian_se, ARMENIAN SMALL LETTER SEH */
	0x92af, /* 1541, 0x100057e, U+057e, KEY_Armenian_vev, ARMENIAN SMALL LETTER VEW */
	0x92e4, /* 1543, 0x100057f, U+057f, KEY_Armenian_tyun, ARMENIAN SMALL LETTER TIWN */
	0x9318, /* 1545, 0x1000580, U+0580, KEY_Armenian_re, ARMENIAN SMALL LETTER REH */
	0x934b, /* 1547, 0x1000581, U+0581, KEY_Armenian_tso, ARMENIAN SMALL LETTER CO */
	0x9380, /* 1549, 0x1000582, U+0582, KEY_Armenian_vyun, ARMENIAN SMALL LETTER YIWN */
	0x93b6, /* 1551, 0x1000583, U+0583, KEY_Armenian_pyur, ARMENIAN SMALL LETTER PIWR */
	0x93ea, /* 1553, 0x1000584, U+0584, KEY_Armenian_ke, ARMENIAN SMALL LETTER KEH */
	0x941b, /* 1555, 0x1000585, U+0585, KEY_Armenian_o, ARMENIAN SMALL LETTER OH */
	0x944c, /* 1557, 0x1000586, U+0586, KEY_Armenian_fe, ARMENIAN SMALL LETTER FEH */
	0x8b38, /* 1469, 0x1000587, U+0587, KEY_Armenian_ligature_ew, ARMENIAN SMALL LIGATURE ECH YIWN */
	0x95ee, /* 1573, 0x10010de, U+10de, KEY_Georgian_par, GEORGIAN LETTER PAR */
	0x8b5a, /* 1470, 0x1000589, U+0589, KEY_Armenian_full_stop, ARMENIAN FULL STOP */
	0x8bd9, /* 1474, 0x100058a, U+058a, KEY_Armenian_hyphen, ARMENIAN HYPHEN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xb404, /* 1862, 0x1002863, U+2863, KEY_braille_dots_1267, BRAILLE PATTERN DOTS-1267 */
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
	0x653d, /* 1096, 0x8ce, U+21d2, KEY_implies, RIGHTWARDS DOUBLE ARROW */
	0x9710, /* 1584, 0x10010e9, U+10e9, KEY_Georgian_chin, GEORGIAN LETTER CHIN */
	0x6527, /* 1095, 0x8cd, U+21d4, KEY_ifonlyif, LEFT RIGHT DOUBLE ARROW */
	0x7dc1, /* 1347, 0xde9, U+0e49, KEY_Thai_maitho, THAI CHARACTER MAI THO */
	0x0000,
	0x0000,
	0x0000,
	0x975f, /* 1587, 0x10010ec, U+10ec, KEY_Georgian_cil, GEORGIAN LETTER CIL */
	0x0000,
	0x9779, /* 1588, 0x10010ed, U+10ed, KEY_Georgian_char, GEORGIAN LETTER CHAR */
	0x0000,
	0x9794, /* 1589, 0x10010ee, U+10ee, KEY_Georgian_xan, GEORGIAN LETTER XAN */
	0x0000,
	0x97ae, /* 1590, 0x10010ef, U+10ef, KEY_Georgian_jhan, GEORGIAN LETTER JHAN */
	0xb5b9, /* 1876, 0x1002871, U+2871, KEY_braille_dots_1567, BRAILLE PATTERN DOTS-1567 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xb617, /* 1879, 0x1002874, U+2874, KEY_braille_dots_3567, BRAILLE PATTERN DOTS-3567 */
	0x0000,
	0xb636, /* 1880, 0x1002875, U+2875, KEY_braille_dots_13567, BRAILLE PATTERN DOTS-13567 */
	0x98bc, /* 1601, 0x10001e6, U+01e6, KEY_Gcaron, LATIN CAPITAL LETTER G WITH CARON */
	0x0000,
	0x0000,
	0x9939, /* 1607, 0x10001e7, U+01e7, KEY_gcaron, LATIN SMALL LETTER G WITH CARON */
	0x0000,
	0x0000,
	0x0000,
	0xb6b6, /* 1884, 0x1002879, U+2879, KEY_braille_dots_14567, BRAILLE PATTERN DOTS-14567 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x7e4a, /* 1352, 0xdf0, U+0e50, KEY_Thai_leksun, THAI DIGIT ZERO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6608, /* 1105, 0x8ef, U+2202, KEY_partialderivative, PARTIAL DIFFERENTIAL */
	0x0000,
	0x0000,
	0x72e0, /* 1239, 0xce0, U+05d0, KEY_hebrew_aleph, HEBREW LETTER ALEF */
	0x72fa, /* 1240, 0xce1, U+05d1, KEY_hebrew_bet, HEBREW LETTER BET */
	0x64e1, /* 1092, 0x8c5, U+2207, KEY_nabla, NABLA */
	0x7360, /* 1244, 0xce3, U+05d3, KEY_hebrew_dalet, HEBREW LETTER DALET */
	0x7395, /* 1246, 0xce4, U+05d4, KEY_hebrew_he, HEBREW LETTER HE */
	0x73ac, /* 1247, 0xce5, U+05d5, KEY_hebrew_waw, HEBREW LETTER VAV */
	0x73c4, /* 1248, 0xce6, U+05d6, KEY_hebrew_zain, HEBREW LETTER ZAYIN */
	0x73f7, /* 1250, 0xce7, U+05d7, KEY_hebrew_chet, HEBREW LETTER HET */
	0x7428, /* 1252, 0xce8, U+05d8, KEY_hebrew_tet, HEBREW LETTER TET */
	0x7459, /* 1254, 0xce9, U+05d9, KEY_hebrew_yod, HEBREW LETTER YOD */
	0x7471, /* 1255, 0xcea, U+05da, KEY_hebrew_finalkaph, HEBREW LETTER FINAL KAF */
	0x748f, /* 1256, 0xceb, U+05db, KEY_hebrew_kaph, HEBREW LETTER KAF */
	0x74a8, /* 1257, 0xcec, U+05dc, KEY_hebrew_lamed, HEBREW LETTER LAMED */
	0x74c2, /* 1258, 0xced, U+05dd, KEY_hebrew_finalmem, HEBREW LETTER FINAL MEM */
	0x74df, /* 1259, 0xcee, U+05de, KEY_hebrew_mem, HEBREW LETTER MEM */
	0x74f7, /* 1260, 0xcef, U+05df, KEY_hebrew_finalnun, HEBREW LETTER FINAL NUN */
	0x7514, /* 1261, 0xcf0, U+05e0, KEY_hebrew_nun, HEBREW LETTER NUN */
	0x752c, /* 1262, 0xcf1, U+05e1, KEY_hebrew_samech, HEBREW LETTER SAMEKH */
	0x7562, /* 1264, 0xcf2, U+05e2, KEY_hebrew_ayin, HEBREW LETTER AYIN */
	0x71ee, /* 1228, 0xbca, U+2218, KEY_jot, RING OPERATOR */
	0x7597, /* 1266, 0xcf4, U+05e4, KEY_hebrew_pe, HEBREW LETTER PE */
	0x6569, /* 1098, 0x8d6, U+221a, KEY_radical, SQUARE ROOT */
	0x75ea, /* 1269, 0xcf6, U+05e6, KEY_hebrew_zade, HEBREW LETTER TSADI */
	0x761c, /* 1271, 0xcf7, U+05e7, KEY_hebrew_qoph, HEBREW LETTER QOF */
	0x64b4, /* 1090, 0x8c1, U+221d, KEY_variation, PROPORTIONAL TO */
	0x64cb, /* 1091, 0x8c2, U+221e, KEY_infinity, INFINITY */
	0x767f, /* 1275, 0xcfa, U+05ea, KEY_hebrew_taw, HEBREW LETTER TAV */
	0xb998, /* 1908, 0x1002891, U+2891, KEY_braille_dots_158, BRAILLE PATTERN DOTS-158 */
	0x0000,
	0xb9b6, /* 1909, 0x1002892, U+2892, KEY_braille_dots_258, BRAILLE PATTERN DOTS-258 */
	0x0000,
	0xb9d4, /* 1910, 0x1002893, U+2893, KEY_braille_dots_1258, BRAILLE PATTERN DOTS-1258 */
	0x0000,
	0xb9f3, /* 1911, 0x1002894, U+2894, KEY_braille_dots_358, BRAILLE PATTERN DOTS-358 */
	0x65d9, /* 1103, 0x8de, U+2227, KEY_logicaland, LOGICAL AND */
	0x65f1, /* 1104, 0x8df, U+2228, KEY_logicalor, LOGICAL OR */
	0x65ac, /* 1101, 0x8dc, U+2229, KEY_intersection, INTERSECTION */
	0x65c6, /* 1102, 0x8dd, U+222a, KEY_union, UNION */
	0x6487, /* 1088, 0x8bf, U+222b, KEY_integral, INTEGRAL */
	0xa6aa, /* 1746, 0x100222c, U+222c, KEY_dintegral, DOUBLE INTEGRAL */
	0xa6c1, /* 1747, 0x100222d, U+222d, KEY_tintegral, TRIPLE INTEGRAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x649d, /* 1089, 0x8c0, U+2234, KEY_therefore, THEREFORE */
	0xa6d8, /* 1748, 0x1002235, U+2235, KEY_because, BECAUSE */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x64f4, /* 1093, 0x8c8, U+223c, KEY_approximate, TILDE OPERATOR */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x431b, /*  774, 0x5ac, U+060c, KEY_Arabic_comma, ARABIC COMMA */
	0x0000,
	0x650d, /* 1094, 0x8c9, U+2243, KEY_similarequal, ASYMPTOTICALLY EQUAL TO */
	0x0000,
	0xa6ed, /* 1749, 0x1002248, U+2245, KEY_approxeq, ALMOST EQUAL TO */
	0x0000,
	0xa703, /* 1750, 0x1002247, U+2247, KEY_notapproxeq, NOT ALMOST EQUAL TO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x442e, /*  786, 0x5bb, U+061b, KEY_Arabic_semicolon, ARABIC SEMICOLON */
	0x0000,
	0x0000,
	0x0000,
	0x444c, /*  787, 0x5bf, U+061f, KEY_Arabic_question_mark, ARABIC QUESTION MARK */
	0x0000,
	0x446e, /*  788, 0x5c1, U+0621, KEY_Arabic_hamza, ARABIC LETTER HAMZA */
	0x4488, /*  789, 0x5c2, U+0622, KEY_Arabic_maddaonalef, ARABIC LETTER ALEF WITH MADDA ABOVE */
	0x44a8, /*  790, 0x5c3, U+0623, KEY_Arabic_hamzaonalef, ARABIC LETTER ALEF WITH HAMZA ABOVE */
	0x44c8, /*  791, 0x5c4, U+0624, KEY_Arabic_hamzaonwaw, ARABIC LETTER WAW WITH HAMZA ABOVE */
	0x44e7, /*  792, 0x5c5, U+0625, KEY_Arabic_hamzaunderalef, ARABIC LETTER ALEF WITH HAMZA BELOW */
	0x450a, /*  793, 0x5c6, U+0626, KEY_Arabic_hamzaonyeh, ARABIC LETTER YEH WITH HAMZA ABOVE */
	0x4529, /*  794, 0x5c7, U+0627, KEY_Arabic_alef, ARABIC LETTER ALEF */
	0x4542, /*  795, 0x5c8, U+0628, KEY_Arabic_beh, ARABIC LETTER BEH */
	0x455a, /*  796, 0x5c9, U+0629, KEY_Arabic_tehmarbuta, ARABIC LETTER TEH MARBUTA */
	0x4579, /*  797, 0x5ca, U+062a, KEY_Arabic_teh, ARABIC LETTER TEH */
	0x4591, /*  798, 0x5cb, U+062b, KEY_Arabic_theh, ARABIC LETTER THEH */
	0x45aa, /*  799, 0x5cc, U+062c, KEY_Arabic_jeem, ARABIC LETTER JEEM */
	0x45c3, /*  800, 0x5cd, U+062d, KEY_Arabic_hah, ARABIC LETTER HAH */
	0x45db, /*  801, 0x5ce, U+062e, KEY_Arabic_khah, ARABIC LETTER KHAH */
	0x45f4, /*  802, 0x5cf, U+062f, KEY_Arabic_dal, ARABIC LETTER DAL */
	0x460c, /*  803, 0x5d0, U+0630, KEY_Arabic_thal, ARABIC LETTER THAL */
	0x4625, /*  804, 0x5d1, U+0631, KEY_Arabic_ra, ARABIC LETTER REH */
	0x463c, /*  805, 0x5d2, U+0632, KEY_Arabic_zain, ARABIC LETTER ZAIN */
	0x4655, /*  806, 0x5d3, U+0633, KEY_Arabic_seen, ARABIC LETTER SEEN */
	0x466e, /*  807, 0x5d4, U+0634, KEY_Arabic_sheen, ARABIC LETTER SHEEN */
	0x4688, /*  808, 0x5d5, U+0635, KEY_Arabic_sad, ARABIC LETTER SAD */
	0x46a0, /*  809, 0x5d6, U+0636, KEY_Arabic_dad, ARABIC LETTER DAD */
	0x46b8, /*  810, 0x5d7, U+0637, KEY_Arabic_tah, ARABIC LETTER TAH */
	0x46d0, /*  811, 0x5d8, U+0638, KEY_Arabic_zah, ARABIC LETTER ZAH */
	0x46e8, /*  812, 0x5d9, U+0639, KEY_Arabic_ain, ARABIC LETTER AIN */
	0x4700, /*  813, 0x5da, U+063a, KEY_Arabic_ghain, ARABIC LETTER GHAIN */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xbeb6, /* 1950, 0x10028bb, U+28bb, KEY_braille_dots_124568, BRAILLE PATTERN DOTS-124568 */
	0x471a, /*  814, 0x5e0, U+0640, KEY_Arabic_tatweel, ARABIC TATWEEL */
	0x4736, /*  815, 0x5e1, U+0641, KEY_Arabic_feh, ARABIC LETTER FEH */
	0x474e, /*  816, 0x5e2, U+0642, KEY_Arabic_qaf, ARABIC LETTER QAF */
	0x4766, /*  817, 0x5e3, U+0643, KEY_Arabic_kaf, ARABIC LETTER KAF */
	0x477e, /*  818, 0x5e4, U+0644, KEY_Arabic_lam, ARABIC LETTER LAM */
	0x4796, /*  819, 0x5e5, U+0645, KEY_Arabic_meem, ARABIC LETTER MEEM */
	0x47af, /*  820, 0x5e6, U+0646, KEY_Arabic_noon, ARABIC LETTER NOON */
	0x47c8, /*  821, 0x5e7, U+0647, KEY_Arabic_ha, ARABIC LETTER HEH */
	0x47f7, /*  823, 0x5e8, U+0648, KEY_Arabic_waw, ARABIC LETTER WAW */
	0x480f, /*  824, 0x5e9, U+0649, KEY_Arabic_alefmaksura, ARABIC LETTER ALEF MAKSURA */
	0x482f, /*  825, 0x5ea, U+064a, KEY_Arabic_yeh, ARABIC LETTER YEH */
	0x4847, /*  826, 0x5eb, U+064b, KEY_Arabic_fathatan, ARABIC FATHATAN */
	0x4864, /*  827, 0x5ec, U+064c, KEY_Arabic_dammatan, ARABIC DAMMATAN */
	0x4881, /*  828, 0x5ed, U+064d, KEY_Arabic_kasratan, ARABIC KASRATAN */
	0x489e, /*  829, 0x5ee, U+064e, KEY_Arabic_fatha, ARABIC FATHA */
	0x48b8, /*  830, 0x5ef, U+064f, KEY_Arabic_damma, ARABIC DAMMA */
	0x48d2, /*  831, 0x5f0, U+0650, KEY_Arabic_kasra, ARABIC KASRA */
	0x48ec, /*  832, 0x5f1, U+0651, KEY_Arabic_shadda, ARABIC SHADDA */
	0x4907, /*  833, 0x5f2, U+0652, KEY_Arabic_sukun, ARABIC SUKUN */
	0x4921, /*  834, 0x1000653, U+0653, KEY_Arabic_madda_above, ARABIC MADDAH ABOVE */
	0x4941, /*  835, 0x1000654, U+0654, KEY_Arabic_hamza_above, ARABIC HAMZA ABOVE */
	0x4961, /*  836, 0x1000655, U+0655, KEY_Arabic_hamza_below, ARABIC HAMZA BELOW */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8ffb, /* 1514, 0x1000541, U+0541, KEY_Armenian_DZA, ARMENIAN CAPITAL LETTER JA */
	0x0000,
	0x4352, /*  776, 0x1000660, U+0660, KEY_Arabic_0, ARABIC-INDIC DIGIT ZERO */
	0x4368, /*  777, 0x1000661, U+0661, KEY_Arabic_1, ARABIC-INDIC DIGIT ONE */
	0x437e, /*  778, 0x1000662, U+0662, KEY_Arabic_2, ARABIC-INDIC DIGIT TWO */
	0x4394, /*  779, 0x1000663, U+0663, KEY_Arabic_3, ARABIC-INDIC DIGIT THREE */
	0x43aa, /*  780, 0x1000664, U+0664, KEY_Arabic_4, ARABIC-INDIC DIGIT FOUR */
	0x43c0, /*  781, 0x1000665, U+0665, KEY_Arabic_5, ARABIC-INDIC DIGIT FIVE */
	0x43d6, /*  782, 0x1000666, U+0666, KEY_Arabic_6, ARABIC-INDIC DIGIT SIX */
	0x43ec, /*  783, 0x1000667, U+0667, KEY_Arabic_7, ARABIC-INDIC DIGIT SEVEN */
	0x4402, /*  784, 0x1000668, U+0668, KEY_Arabic_8, ARABIC-INDIC DIGIT EIGHT */
	0x4418, /*  785, 0x1000669, U+0669, KEY_Arabic_9, ARABIC-INDIC DIGIT NINE */
	0x425d, /*  767, 0x100066a, U+066a, KEY_Arabic_percent, ARABIC PERCENT SIGN */
	0x0000,
	0x0000,
	0x72a7, /* 1237, 0xbfc, U+22a2, KEY_righttack, RIGHT TACK */
	0x7291, /* 1236, 0xbdc, U+22a3, KEY_lefttack, LEFT TACK */
	0x7197, /* 1224, 0xbc2, U+22a4, KEY_downtack, DOWN TACK */
	0x4279, /*  768, 0x1000670, U+0670, KEY_Arabic_superscript_alef, ARABIC LETTER SUPERSCRIPT ALEF */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x429e, /*  769, 0x1000679, U+0679, KEY_Arabic_tteh, ARABIC LETTER TTEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x42b7, /*  770, 0x100067e, U+067e, KEY_Arabic_peh, ARABIC LETTER PEH */
	0xc2a6, /* 1982, 0x10028db, U+28db, KEY_braille_dots_124578, BRAILLE PATTERN DOTS-124578 */
	0x0000,
	0x0000,
	0x0000,
	0xc2e7, /* 1984, 0x10028dd, U+28dd, KEY_braille_dots_134578, BRAILLE PATTERN DOTS-134578 */
	0x0000,
	0x0000,
	0x42cf, /*  771, 0x1000686, U+0686, KEY_Arabic_tcheh, ARABIC LETTER TCHEH */
	0xc329, /* 1986, 0x10028df, U+28df, KEY_braille_dots_1234578, BRAILLE PATTERN DOTS-1234578 */
	0x42e9, /*  772, 0x1000688, U+0688, KEY_Arabic_ddal, ARABIC LETTER DDAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4302, /*  773, 0x1000691, U+0691, KEY_Arabic_rreh, ARABIC LETTER RREH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4981, /*  837, 0x1000698, U+0698, KEY_Arabic_jeh, ARABIC LETTER JEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x9433, /* 1556, 0x1000556, U+0556, KEY_Armenian_FE, ARMENIAN CAPITAL LETTER FEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4999, /*  838, 0x10006a4, U+06a4, KEY_Arabic_veh, ARABIC LETTER VEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x49b1, /*  839, 0x10006a9, U+06a9, KEY_Arabic_keheh, ARABIC LETTER KEHEH */
	0x0000,
	0x0000,
	0x8c4f, /* 1478, 0x100055b, U+055b, KEY_Armenian_accent, ARMENIAN EMPHASIS MARK */
	0x0000,
	0x0000,
	0x49cb, /*  840, 0x10006af, U+06af, KEY_Arabic_gaf, ARABIC LETTER GAF */
	0x0000,
	0x0000,
	0x8b99, /* 1472, 0x100055d, U+055d, KEY_Armenian_separation_mark, ARMENIAN COMMA */
	0x0000,
	0x0000,
	0x8c89, /* 1480, 0x100055e, U+055e, KEY_Armenian_question, ARMENIAN QUESTION MARK */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x49e3, /*  841, 0x10006ba, U+06ba, KEY_Arabic_noon_ghunna, ARABIC LETTER NOON GHUNNA */
	0x0000,
	0x0000,
	0x0000,
	0x4a03, /*  842, 0x10006be, U+06be, KEY_Arabic_heh_doachashmee, ARABIC LETTER HEH DOACHASHMEE */
	0x0000,
	0x0000,
	0x4a7a, /*  846, 0x10006c1, U+06c1, KEY_Arabic_heh_goal, ARABIC LETTER HEH GOAL */
	0x0000,
	0xc6f4, /* 2016, 0x10028fd, U+28fd, KEY_braille_dots_1345678, BRAILLE PATTERN DOTS-1345678 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x8dae, /* 1491, 0x1000565, U+0565, KEY_Armenian_yech, ARMENIAN SMALL LETTER ECH */
	0x0000,
	0x4a27, /*  843, 0x10006cc, U+06cc, KEY_Farsi_yeh, ARABIC LETTER FARSI YEH */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x4a5c, /*  845, 0x10006d2, U+06d2, KEY_Arabic_yeh_baree, ARABIC LETTER YEH BARREE */
	0x7239, /* 1232, 0xbd3, U+2308, KEY_upstile, LEFT CEILING */
	0x4335, /*  775, 0x10006d4, U+06d4, KEY_Arabic_fullstop, ARABIC FULL STOP */
	0x71c1, /* 1226, 0xbc4, U+230a, KEY_downstile, LEFT FLOOR */
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
	0x7080, /* 1213, 0xafa, U+2315, KEY_telephonerecorder, TELEPHONE RECORDER */
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
	0x61d4, /* 1065, 0x8a4, U+2320, KEY_topintegral, TOP HALF INTEGRAL */
	0x61ed, /* 1066, 0x8a5, U+2321, KEY_botintegral, BOTTOM HALF INTEGRAL */
	0x0000,
	0x0000,
	0x0000,
	0x418b, /*  757, 0x10006f0, U+06f0, KEY_Farsi_0, EXTENDED ARABIC-INDIC DIGIT ZERO */
	0x41a0, /*  758, 0x10006f1, U+06f1, KEY_Farsi_1, EXTENDED ARABIC-INDIC DIGIT ONE */
	0x41b5, /*  759, 0x10006f2, U+06f2, KEY_Farsi_2, EXTENDED ARABIC-INDIC DIGIT TWO */
	0x41ca, /*  760, 0x10006f3, U+06f3, KEY_Farsi_3, EXTENDED ARABIC-INDIC DIGIT THREE */
	0x41df, /*  761, 0x10006f4, U+06f4, KEY_Farsi_4, EXTENDED ARABIC-INDIC DIGIT FOUR */
	0x41f4, /*  762, 0x10006f5, U+06f5, KEY_Farsi_5, EXTENDED ARABIC-INDIC DIGIT FIVE */
	0x4209, /*  763, 0x10006f6, U+06f6, KEY_Farsi_6, EXTENDED ARABIC-INDIC DIGIT SIX */
	0x421e, /*  764, 0x10006f7, U+06f7, KEY_Farsi_7, EXTENDED ARABIC-INDIC DIGIT SEVEN */
	0x4233, /*  765, 0x10006f8, U+06f8, KEY_Farsi_8, EXTENDED ARABIC-INDIC DIGIT EIGHT */
	0x4248, /*  766, 0x10006f9, U+06f9, KEY_Farsi_9, EXTENDED ARABIC-INDIC DIGIT NINE */
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
	0xcb3a, /* 2065, 0x1000db5, U+0db5, KEY_Sinh_pha, SINHALA MAHA. PAYANNA */
	0xc770, /* 2020, 0x1000d83, U+0d83, KEY_Sinh_h2, SINHALA VISARGAYA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcb50, /* 2066, 0x1000db6, U+0db6, KEY_Sinh_ba, SINHALA BAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc799, /* 2022, 0x1000d86, U+0d86, KEY_Sinh_aa, SINHALA AAYANNA */
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
	0xc7d9, /* 2025, 0x1000d89, U+0d89, KEY_Sinh_i, SINHALA IYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcba6, /* 2070, 0x1000dba, U+0dba, KEY_Sinh_ya, SINHALA YAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa85b, /* 1763, 0x1002800, U+2800, KEY_braille_blank, BRAILLE PATTERN BLANK */
	0x0000,
	0xc816, /* 2028, 0x1000d8c, U+0d8c, KEY_Sinh_uu, SINHALA UUYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xa892, /* 1765, 0x1002802, U+2802, KEY_braille_dots_2, BRAILLE PATTERN DOTS-2 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xa8cb, /* 1767, 0x1002804, U+2804, KEY_braille_dots_3, BRAILLE PATTERN DOTS-3 */
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
	0x9a03, /* 1617, 0x1001ea1, U+1ea1, KEY_abelowdot, LATIN SMALL LETTER A WITH DOT BELOW */
	0x0000,
	0x0000,
	0xa95b, /* 1772, 0x1002809, U+2809, KEY_braille_dots_14, BRAILLE PATTERN DOTS-14 */
	0x0000,
	0x994d, /* 1608, 0x10001d2, U+01d2, KEY_ocaron, LATIN SMALL LETTER O WITH CARON */
	0xa978, /* 1773, 0x100280a, U+280a, KEY_braille_dots_24, BRAILLE PATTERN DOTS-24 */
	0x0000,
	0x0000,
	0xa995, /* 1774, 0x100280b, U+280b, KEY_braille_dots_124, BRAILLE PATTERN DOTS-124 */
	0x0000,
	0x0000,
	0xa9b3, /* 1775, 0x100280c, U+280c, KEY_braille_dots_34, BRAILLE PATTERN DOTS-34 */
	0x0000,
	0x0000,
	0xa9d0, /* 1776, 0x100280d, U+280d, KEY_braille_dots_134, BRAILLE PATTERN DOTS-134 */
	0x0000,
	0x5a9e, /*  995, 0x7a9, U+03ab, KEY_Greek_UPSILONdieresis, GREEK CAPITAL LETTER UPSILON WITH DIALYTIKA */
	0xa9ee, /* 1777, 0x100280e, U+280e, KEY_braille_dots_234, BRAILLE PATTERN DOTS-234 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xaa2b, /* 1779, 0x1002810, U+2810, KEY_braille_dots_5, BRAILLE PATTERN DOTS-5 */
	0x0000,
	0x71ff, /* 1229, 0xbcc, U+2395, KEY_quad, APL FUNCTIONAL SYMBOL QUAD */
	0x9961, /* 1609, 0x1000275, U+0275, KEY_obarred, LATIN SMALL LETTER BARRED O */
	0x0000,
	0x0000,
	0xaa64, /* 1781, 0x1002812, U+2812, KEY_braille_dots_25, BRAILLE PATTERN DOTS-25 */
	0x0000,
	0x629b, /* 1072, 0x8ab, U+239b, KEY_topleftparens, LEFT PARENTHESIS UPPER HOOK */
	0xaa81, /* 1782, 0x1002813, U+2813, KEY_braille_dots_125, BRAILLE PATTERN DOTS-125 */
	0x62b6, /* 1073, 0x8ac, U+239d, KEY_botleftparens, LEFT PARENTHESIS LOWER HOOK */
	0x62d1, /* 1074, 0x8ad, U+239e, KEY_toprightparens, RIGHT PARENTHESIS UPPER HOOK */
	0x949f, /* 1560, 0x10010d1, U+10d1, KEY_Georgian_ban, GEORGIAN LETTER BAN */
	0x62ed, /* 1075, 0x8ae, U+23a0, KEY_botrightparens, RIGHT PARENTHESIS LOWER HOOK */
	0x6221, /* 1068, 0x8a7, U+23a1, KEY_topleftsqbracket, LEFT SQUARE BRACKET UPPER CORNER */
	0x94ed, /* 1563, 0x10010d4, U+10d4, KEY_Georgian_en, GEORGIAN LETTER EN */
	0x623f, /* 1069, 0x8a8, U+23a3, KEY_botleftsqbracket, LEFT SQUARE BRACKET LOWER CORNER */
	0x625d, /* 1070, 0x8a9, U+23a4, KEY_toprightsqbracket, RIGHT SQUARE BRACKET UPPER CORNER */
	0x953a, /* 1566, 0x10010d7, U+10d7, KEY_Georgian_tan, GEORGIAN LETTER TAN */
	0x627c, /* 1071, 0x8aa, U+23a6, KEY_botrightsqbracket, RIGHT SQUARE BRACKET LOWER CORNER */
	0x956d, /* 1568, 0x10010d9, U+10d9, KEY_Georgian_kan, GEORGIAN LETTER KAN */
	0x6309, /* 1076, 0x8af, U+23a8, KEY_leftmiddlecurlybrace, LEFT CURLY BRACKET MIDDLE PIECE */
	0x95a1, /* 1570, 0x10010db, U+10db, KEY_Georgian_man, GEORGIAN LETTER MAN */
	0x95bb, /* 1571, 0x10010dc, U+10dc, KEY_Georgian_nar, GEORGIAN LETTER NAR */
	0x95d5, /* 1572, 0x10010dd, U+10dd, KEY_Georgian_on, GEORGIAN LETTER ON */
	0x632b, /* 1077, 0x8b0, U+23ac, KEY_rightmiddlecurlybrace, RIGHT CURLY BRACKET MIDDLE PIECE */
	0x9608, /* 1574, 0x10010df, U+10df, KEY_Georgian_zhar, GEORGIAN LETTER ZHAR */
	0x9623, /* 1575, 0x10010e0, U+10e0, KEY_Georgian_rae, GEORGIAN LETTER RAE */
	0x963d, /* 1576, 0x10010e1, U+10e1, KEY_Georgian_san, GEORGIAN LETTER SAN */
	0x9657, /* 1577, 0x10010e2, U+10e2, KEY_Georgian_tar, GEORGIAN LETTER TAR */
	0x9671, /* 1578, 0x10010e3, U+10e3, KEY_Georgian_un, GEORGIAN LETTER UN */
	0x968a, /* 1579, 0x10010e4, U+10e4, KEY_Georgian_phar, GEORGIAN LETTER PHAR */
	0x96a5, /* 1580, 0x10010e5, U+10e5, KEY_Georgian_khar, GEORGIAN LETTER KHAR */
	0x96c0, /* 1581, 0x10010e6, U+10e6, KEY_Georgian_ghan, GEORGIAN LETTER GHAN */
	0x96db, /* 1582, 0x10010e7, U+10e7, KEY_Georgian_qar, GEORGIAN LETTER QAR */
	0x96f5, /* 1583, 0x10010e8, U+10e8, KEY_Georgian_shin, GEORGIAN LETTER SHIN */
	0x6183, /* 1062, 0x8a1, U+23b7, KEY_leftradical, RADICAL SYMBOL BOTTOM */
	0x972b, /* 1585, 0x10010ea, U+10ea, KEY_Georgian_can, GEORGIAN LETTER CAN */
	0x9745, /* 1586, 0x10010eb, U+10eb, KEY_Georgian_jil, GEORGIAN LETTER JIL */
	0x67c6, /* 1125, 0x9ef, U+23ba, KEY_horizlinescan1, HORIZONTAL SCAN LINE-1 */
	0x67e2, /* 1126, 0x9f0, U+23bb, KEY_horizlinescan3, HORIZONTAL SCAN LINE-3 */
	0x681a, /* 1128, 0x9f2, U+23bc, KEY_horizlinescan7, HORIZONTAL SCAN LINE-7 */
	0x6836, /* 1129, 0x9f3, U+23bd, KEY_horizlinescan9, HORIZONTAL SCAN LINE-9 */
	0x97c9, /* 1591, 0x10010f0, U+10f0, KEY_Georgian_hae, GEORGIAN LETTER HAE */
	0x97e3, /* 1592, 0x10010f1, U+10f1, KEY_Georgian_he, GEORGIAN LETTER HE */
	0x97fc, /* 1593, 0x10010f2, U+10f2, KEY_Georgian_hie, GEORGIAN LETTER HIE */
	0x9816, /* 1594, 0x10010f3, U+10f3, KEY_Georgian_we, GEORGIAN LETTER WE */
	0x982f, /* 1595, 0x10010f4, U+10f4, KEY_Georgian_har, GEORGIAN LETTER HAR */
	0x9849, /* 1596, 0x10010f5, U+10f5, KEY_Georgian_hoe, GEORGIAN LETTER HOE */
	0x9863, /* 1597, 0x10010f6, U+10f6, KEY_Georgian_fi, GEORGIAN LETTER FI */
	0x0000,
	0xac27, /* 1796, 0x1002821, U+2821, KEY_braille_dots_16, BRAILLE PATTERN DOTS-16 */
	0x0000,
	0xa93f, /* 1771, 0x1002808, U+2808, KEY_braille_dots_4, BRAILLE PATTERN DOTS-4 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xca02, /* 2051, 0x1000da6, U+0da6, KEY_Sinh_nja, SINHALA SANYAKA JAYANNA */
	0x0000,
	0x0000,
	0x68c7, /* 1136, 0xaa2, U+2002, KEY_enspace, EN SPACE */
	0xca18, /* 2052, 0x1000da7, U+0da7, KEY_Sinh_tta, SINHALA TTAYANNA */
	0x68b2, /* 1135, 0xaa1, U+2003, KEY_emspace, EM SPACE */
	0x0000,
	0x0000,
	0xca2e, /* 2053, 0x1000da8, U+0da8, KEY_Sinh_ttha, SINHALA MAHA. TTAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xca45, /* 2054, 0x1000da9, U+0da9, KEY_Sinh_dda, SINHALA DDAYANNA */
	0x0000,
	0x0000,
	0x6920, /* 1140, 0xaa6, U+2008, KEY_punctspace, PUNCTUATION SPACE */
	0x0000,
	0x0000,
	0x0000,
	0x694f, /* 1142, 0xaa8, U+200a, KEY_hairspace, HAIR SPACE */
	0x0000,
	0x0000,
	0x0000,
	0xad50, /* 1806, 0x100282b, U+282b, KEY_braille_dots_1246, BRAILLE PATTERN DOTS-1246 */
	0x0000,
	0x0000,
	0xad6f, /* 1807, 0x100282c, U+282c, KEY_braille_dots_346, BRAILLE PATTERN DOTS-346 */
	0x0000,
	0x0000,
	0xad8d, /* 1808, 0x100282d, U+282d, KEY_braille_dots_1346, BRAILLE PATTERN DOTS-1346 */
	0x0000,
	0x0000,
	0x9df9, /* 1655, 0x1001ec7, U+1ec7, KEY_ecircumflexbelowdot, LATIN SMALL LETTER E WITH CIRCUMFLEX AND DOT BELOW */
	0x0000,
	0x0000,
	0xadcb, /* 1810, 0x100282f, U+282f, KEY_braille_dots_12346, BRAILLE PATTERN DOTS-12346 */
	0x0000,
	0x0000,
	0xadeb, /* 1811, 0x1002830, U+2830, KEY_braille_dots_56, BRAILLE PATTERN DOTS-56 */
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
	0xae63, /* 1815, 0x1002834, U+2834, KEY_braille_dots_356, BRAILLE PATTERN DOTS-356 */
	0x0000,
	0x0000,
	0xae81, /* 1816, 0x1002835, U+2835, KEY_braille_dots_1356, BRAILLE PATTERN DOTS-1356 */
	0x0000,
	0x0000,
	0xaea0, /* 1817, 0x1002836, U+2836, KEY_braille_dots_2356, BRAILLE PATTERN DOTS-2356 */
	0x0000,
	0xaa47, /* 1780, 0x1002811, U+2811, KEY_braille_dots_15, BRAILLE PATTERN DOTS-15 */
	0xaebf, /* 1818, 0x1002837, U+2837, KEY_braille_dots_12356, BRAILLE PATTERN DOTS-12356 */
	0x66df, /* 1114, 0x9e2, U+2409, KEY_ht, SYMBOL FOR HORIZONTAL TABULATION */
	0x670f, /* 1117, 0x9e5, U+240a, KEY_lf, SYMBOL FOR LINE FEED */
	0x672f, /* 1119, 0x9e9, U+240b, KEY_vt, SYMBOL FOR VERTICAL TABULATION */
	0x66ef, /* 1115, 0x9e3, U+240c, KEY_ff, SYMBOL FOR FORM FEED */
	0x66ff, /* 1116, 0x9e4, U+240d, KEY_cr, SYMBOL FOR CARRIAGE RETURN */
	0xaefd, /* 1820, 0x1002839, U+2839, KEY_braille_dots_1456, BRAILLE PATTERN DOTS-1456 */
	0x0000,
	0x0000,
	0xaf1c, /* 1821, 0x100283a, U+283a, KEY_braille_dots_2456, BRAILLE PATTERN DOTS-2456 */
	0x0000,
	0x0000,
	0xaf3b, /* 1822, 0x100283b, U+283b, KEY_braille_dots_12456, BRAILLE PATTERN DOTS-12456 */
	0xcb7b, /* 2068, 0x1000db8, U+0db8, KEY_Sinh_ma, SINHALA MAYANNA */
	0x0000,
	0xaf5b, /* 1823, 0x100283c, U+283c, KEY_braille_dots_3456, BRAILLE PATTERN DOTS-3456 */
	0x0000,
	0xcb90, /* 2069, 0x1000db9, U+0db9, KEY_Sinh_mba, SINHALA AMBA BAYANNA */
	0xaf7a, /* 1824, 0x100283d, U+283d, KEY_braille_dots_13456, BRAILLE PATTERN DOTS-13456 */
	0x0000,
	0x0000,
	0xaf9a, /* 1825, 0x100283e, U+283e, KEY_braille_dots_23456, BRAILLE PATTERN DOTS-23456 */
	0x0000,
	0x0000,
	0xafba, /* 1826, 0x100283f, U+283f, KEY_braille_dots_123456, BRAILLE PATTERN DOTS-123456 */
	0xcbbb, /* 2071, 0x1000dbb, U+0dbb, KEY_Sinh_ra, SINHALA RAYANNA */
	0x0000,
	0xafdb, /* 1827, 0x1002840, U+2840, KEY_braille_dots_7, BRAILLE PATTERN DOTS-7 */
	0x671f, /* 1118, 0x9e8, U+2424, KEY_nl, SYMBOL FOR NEWLINE */
	0x0000,
	0x9ff2, /* 1674, 0x1001eda, U+1eda, KEY_Ohornacute, LATIN CAPITAL LETTER O WITH HORN AND ACUTE */
	0x0000,
	0x0000,
	0xb014, /* 1829, 0x1002842, U+2842, KEY_braille_dots_27, BRAILLE PATTERN DOTS-27 */
	0x0000,
	0x0000,
	0xb031, /* 1830, 0x1002843, U+2843, KEY_braille_dots_127, BRAILLE PATTERN DOTS-127 */
	0x0000,
	0x0000,
	0xb04f, /* 1831, 0x1002844, U+2844, KEY_braille_dots_37, BRAILLE PATTERN DOTS-37 */
	0x0000,
	0x0000,
	0xb06c, /* 1832, 0x1002845, U+2845, KEY_braille_dots_137, BRAILLE PATTERN DOTS-137 */
	0x0000,
	0x0000,
	0xb08a, /* 1833, 0x1002846, U+2846, KEY_braille_dots_237, BRAILLE PATTERN DOTS-237 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x70c0, /* 1215, 0xafc, U+2038, KEY_caret, CARET */
	0x0000,
	0xb0e4, /* 1836, 0x1002849, U+2849, KEY_braille_dots_147, BRAILLE PATTERN DOTS-147 */
	0x0000,
	0x0000,
	0xb102, /* 1837, 0x100284a, U+284a, KEY_braille_dots_247, BRAILLE PATTERN DOTS-247 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x732b, /* 1242, 0xce2, U+05d2, KEY_hebrew_gimel, HEBREW LETTER GIMEL */
	0xb13f, /* 1839, 0x100284c, U+284c, KEY_braille_dots_347, BRAILLE PATTERN DOTS-347 */
	0x521f, /*  913, 0x6b9, U+0409, KEY_Cyrillic_LJE, CYRILLIC CAPITAL LETTER LJE */
	0x0000,
	0xb15d, /* 1840, 0x100284d, U+284d, KEY_braille_dots_1347, BRAILLE PATTERN DOTS-1347 */
	0x0000,
	0x0000,
	0xb17c, /* 1841, 0x100284e, U+284e, KEY_braille_dots_2347, BRAILLE PATTERN DOTS-2347 */
	0x0000,
	0x0000,
	0xb19b, /* 1842, 0x100284f, U+284f, KEY_braille_dots_12347, BRAILLE PATTERN DOTS-12347 */
	0x0000,
	0x0000,
	0xb1bb, /* 1843, 0x1002850, U+2850, KEY_braille_dots_57, BRAILLE PATTERN DOTS-57 */
	0x0000,
	0x8d13, /* 1485, 0x1000562, U+0562, KEY_Armenian_ben, ARMENIAN SMALL LETTER BEN */
	0xb1d8, /* 1844, 0x1002851, U+2851, KEY_braille_dots_157, BRAILLE PATTERN DOTS-157 */
	0x0000,
	0x0000,
	0xb1f6, /* 1845, 0x1002852, U+2852, KEY_braille_dots_257, BRAILLE PATTERN DOTS-257 */
	0x0000,
	0x0000,
	0xb214, /* 1846, 0x1002853, U+2853, KEY_braille_dots_1257, BRAILLE PATTERN DOTS-1257 */
	0x0000,
	0x0000,
	0xb233, /* 1847, 0x1002854, U+2854, KEY_braille_dots_357, BRAILLE PATTERN DOTS-357 */
	0x0000,
	0x0000,
	0xb251, /* 1848, 0x1002855, U+2855, KEY_braille_dots_1357, BRAILLE PATTERN DOTS-1357 */
	0x0000,
	0x0000,
	0xb270, /* 1849, 0x1002856, U+2856, KEY_braille_dots_2357, BRAILLE PATTERN DOTS-2357 */
	0x0000,
	0x0000,
	0xb28f, /* 1850, 0x1002857, U+2857, KEY_braille_dots_12357, BRAILLE PATTERN DOTS-12357 */
	0x0000,
	0x0000,
	0xb2af, /* 1851, 0x1002858, U+2858, KEY_braille_dots_457, BRAILLE PATTERN DOTS-457 */
	0xc75b, /* 2019, 0x1000d82, U+0d82, KEY_Sinh_ng, SINHALA ANUSVARAYA */
	0x0000,
	0xb2cd, /* 1852, 0x1002859, U+2859, KEY_braille_dots_1457, BRAILLE PATTERN DOTS-1457 */
	0x0000,
	0x0000,
	0xb2ec, /* 1853, 0x100285a, U+285a, KEY_braille_dots_2457, BRAILLE PATTERN DOTS-2457 */
	0xc785, /* 2021, 0x1000d85, U+0d85, KEY_Sinh_a, SINHALA AYANNA */
	0x0000,
	0xb30b, /* 1854, 0x100285b, U+285b, KEY_braille_dots_12457, BRAILLE PATTERN DOTS-12457 */
	0x0000,
	0xc7ae, /* 2023, 0x1000d87, U+0d87, KEY_Sinh_ae, SINHALA AEYANNA */
	0xb32b, /* 1855, 0x100285c, U+285c, KEY_braille_dots_3457, BRAILLE PATTERN DOTS-3457 */
	0xc7c3, /* 2024, 0x1000d88, U+0d88, KEY_Sinh_aee, SINHALA AEEYANNA */
	0x0000,
	0xb34a, /* 1856, 0x100285d, U+285d, KEY_braille_dots_13457, BRAILLE PATTERN DOTS-13457 */
	0x0000,
	0xc7ed, /* 2026, 0x1000d8a, U+0d8a, KEY_Sinh_ii, SINHALA IIYANNA */
	0xb36a, /* 1857, 0x100285e, U+285e, KEY_braille_dots_23457, BRAILLE PATTERN DOTS-23457 */
	0xc802, /* 2027, 0x1000d8b, U+0d8b, KEY_Sinh_u, SINHALA UYANNA */
	0x0000,
	0xb38a, /* 1858, 0x100285f, U+285f, KEY_braille_dots_123457, BRAILLE PATTERN DOTS-123457 */
	0x0000,
	0xc82b, /* 2029, 0x1000d8d, U+0d8d, KEY_Sinh_ri, SINHALA IRUYANNA */
	0xb3ab, /* 1859, 0x1002860, U+2860, KEY_braille_dots_67, BRAILLE PATTERN DOTS-67 */
	0xc840, /* 2030, 0x1000d8e, U+0d8e, KEY_Sinh_rii, SINHALA IRUUYANNA */
	0xccff, /* 2086, 0x1000dd4, U+0dd4, KEY_Sinh_u2, SINHALA PAA-PILLA */
	0xc856, /* 2031, 0x1000d8f, U+0d8f, KEY_Sinh_lu, SINHALA ILUYANNA */
	0x0000,
	0xc86b, /* 2032, 0x1000d90, U+0d90, KEY_Sinh_luu, SINHALA ILUUYANNA */
	0x0000,
	0xc881, /* 2033, 0x1000d91, U+0d91, KEY_Sinh_e, SINHALA EYANNA */
	0x0000,
	0xc895, /* 2034, 0x1000d92, U+0d92, KEY_Sinh_ee, SINHALA EEYANNA */
	0xcd14, /* 2087, 0x1000dd6, U+0dd6, KEY_Sinh_uu2, SINHALA DIGA PAA-PILLA */
	0xc8aa, /* 2035, 0x1000d93, U+0d93, KEY_Sinh_ai, SINHALA AIYANNA */
	0x0000,
	0xc8bf, /* 2036, 0x1000d94, U+0d94, KEY_Sinh_o, SINHALA OYANNA */
	0x0000,
	0xc8d3, /* 2037, 0x1000d95, U+0d95, KEY_Sinh_oo, SINHALA OOYANNA */
	0x0000,
	0xc8e8, /* 2038, 0x1000d96, U+0d96, KEY_Sinh_au, SINHALA AUYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xc8fd, /* 2039, 0x1000d9a, U+0d9a, KEY_Sinh_ka, SINHALA KAYANNA */
	0x0000,
	0xc912, /* 2040, 0x1000d9b, U+0d9b, KEY_Sinh_kha, SINHALA MAHA. KAYANNA */
	0x0000,
	0xc928, /* 2041, 0x1000d9c, U+0d9c, KEY_Sinh_ga, SINHALA GAYANNA */
	0x0000,
	0xc93d, /* 2042, 0x1000d9d, U+0d9d, KEY_Sinh_gha, SINHALA MAHA. GAYANNA */
	0x0000,
	0xc953, /* 2043, 0x1000d9e, U+0d9e, KEY_Sinh_ng2, SINHALA KANTAJA NAASIKYAYA */
	0x0000,
	0xc969, /* 2044, 0x1000d9f, U+0d9f, KEY_Sinh_nga, SINHALA SANYAKA GAYANNA */
	0x0000,
	0xc97f, /* 2045, 0x1000da0, U+0da0, KEY_Sinh_ca, SINHALA CAYANNA */
	0x0000,
	0xc994, /* 2046, 0x1000da1, U+0da1, KEY_Sinh_cha, SINHALA MAHA. CAYANNA */
	0x0000,
	0xa422, /* 1721, 0x1002070, U+2070, KEY_zerosuperior, SUPERSCRIPT ZERO */
	0x0000,
	0xc9bf, /* 2048, 0x1000da3, U+0da3, KEY_Sinh_jha, SINHALA MAHA. JAYANNA */
	0x0000,
	0xc9d5, /* 2049, 0x1000da4, U+0da4, KEY_Sinh_nya, SINHALA TAALUJA NAASIKYAYA */
	0x0000,
	0xc9eb, /* 2050, 0x1000da5, U+0da5, KEY_Sinh_jnya, SINHALA TAALUJA SANYOOGA NAASIKYAYA */
	0x0000,
	0xa43c, /* 1722, 0x1002074, U+2074, KEY_foursuperior, SUPERSCRIPT FOUR */
	0x0000,
	0xa456, /* 1723, 0x1002075, U+2075, KEY_fivesuperior, SUPERSCRIPT FIVE */
	0x0000,
	0xa470, /* 1724, 0x1002076, U+2076, KEY_sixsuperior, SUPERSCRIPT SIX */
	0x0000,
	0xa489, /* 1725, 0x1002077, U+2077, KEY_sevensuperior, SUPERSCRIPT SEVEN */
	0x0000,
	0xa4a4, /* 1726, 0x1002078, U+2078, KEY_eightsuperior, SUPERSCRIPT EIGHT */
	0x0000,
	0xa4bf, /* 1727, 0x1002079, U+2079, KEY_ninesuperior, SUPERSCRIPT NINE */
	0x0000,
	0xca88, /* 2057, 0x1000dac, U+0dac, KEY_Sinh_ndda, SINHALA SANYAKA DDAYANNA */
	0x0000,
	0xca9f, /* 2058, 0x1000dad, U+0dad, KEY_Sinh_tha, SINHALA TAYANNA */
	0x0000,
	0xcab5, /* 2059, 0x1000dae, U+0dae, KEY_Sinh_thha, SINHALA MAHA. TAYANNA */
	0x0000,
	0xcacc, /* 2060, 0x1000daf, U+0daf, KEY_Sinh_dha, SINHALA DAYANNA */
	0x0000,
	0xb676, /* 1882, 0x1002877, U+2877, KEY_braille_dots_123567, BRAILLE PATTERN DOTS-123567 */
	0x0000,
	0xcaf9, /* 2062, 0x1000db1, U+0db1, KEY_Sinh_na, SINHALA DANTAJA NAYANNA */
	0x0000,
	0xa4d9, /* 1728, 0x1002080, U+2080, KEY_zerosubscript, SUBSCRIPT ZERO */
	0x0000,
	0xa4f4, /* 1729, 0x1002081, U+2081, KEY_onesubscript, SUBSCRIPT ONE */
	0x0000,
	0xa50e, /* 1730, 0x1002082, U+2082, KEY_twosubscript, SUBSCRIPT TWO */
	0x0000,
	0xa528, /* 1731, 0x1002083, U+2083, KEY_threesubscript, SUBSCRIPT THREE */
	0x0000,
	0xa544, /* 1732, 0x1002084, U+2084, KEY_foursubscript, SUBSCRIPT FOUR */
	0x0000,
	0xcb65, /* 2067, 0x1000db7, U+0db7, KEY_Sinh_bha, SINHALA MAHA. BAYANNA */
	0x0000,
	0xa57a, /* 1734, 0x1002086, U+2086, KEY_sixsubscript, SUBSCRIPT SIX */
	0x0000,
	0xa594, /* 1735, 0x1002087, U+2087, KEY_sevensubscript, SUBSCRIPT SEVEN */
	0x0000,
	0xa5b0, /* 1736, 0x1002088, U+2088, KEY_eightsubscript, SUBSCRIPT EIGHT */
	0x0000,
	0xa5cc, /* 1737, 0x1002089, U+2089, KEY_ninesubscript, SUBSCRIPT NINE */
	0x0000,
	0x0000,
	0x0000,
	0xcbd0, /* 2072, 0x1000dbd, U+0dbd, KEY_Sinh_la, SINHALA DANTAJA LAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0xcbe5, /* 2073, 0x1000dc0, U+0dc0, KEY_Sinh_va, SINHALA VAYANNA */
	0xb7d4, /* 1893, 0x1002882, U+2882, KEY_braille_dots_28, BRAILLE PATTERN DOTS-28 */
	0xcbfa, /* 2074, 0x1000dc1, U+0dc1, KEY_Sinh_sha, SINHALA TAALUJA SAYANNA */
	0x0000,
	0xcc10, /* 2075, 0x1000dc2, U+0dc2, KEY_Sinh_ssha, SINHALA MUURDHAJA SAYANNA */
	0x0000,
	0xcc27, /* 2076, 0x1000dc3, U+0dc3, KEY_Sinh_sa, SINHALA DANTAJA SAYANNA */
	0x0000,
	0x0000,
	0x0000,
	0xcc51, /* 2078, 0x1000dc5, U+0dc5, KEY_Sinh_lla, SINHALA MUURDHAJA LAYANNA */
	0x0000,
	0xcc67, /* 2079, 0x1000dc6, U+0dc6, KEY_Sinh_fa, SINHALA FAYANNA */
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
	0x67fe, /* 1127, 0x9f1, U+2500, KEY_horizlinescan5, BOX DRAWINGS LIGHT HORIZONTAL */
	0x0000,
	0x689d, /* 1134, 0x9f8, U+2502, KEY_vertbar, BOX DRAWINGS LIGHT VERTICAL */
	0x0000,
	0xb8e0, /* 1902, 0x100288b, U+288b, KEY_braille_dots_1248, BRAILLE PATTERN DOTS-1248 */
	0x0000,
	0x0000,
	0xb8ff, /* 1903, 0x100288c, U+288c, KEY_braille_dots_348, BRAILLE PATTERN DOTS-348 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6776, /* 1122, 0x9ec, U+250c, KEY_upleftcorner, BOX DRAWINGS LIGHT DOWN AND RIGHT */
	0xb93c, /* 1905, 0x100288e, U+288e, KEY_braille_dots_2348, BRAILLE PATTERN DOTS-2348 */
	0xcce9, /* 2085, 0x1000dd3, U+0dd3, KEY_Sinh_ii2, SINHALA DIGA IS-PILLA */
	0x0000,
	0x675b, /* 1121, 0x9eb, U+2510, KEY_uprightcorner, BOX DRAWINGS LIGHT DOWN AND LEFT */
	0x0000,
	0x0000,
	0xb97b, /* 1907, 0x1002890, U+2890, KEY_braille_dots_58, BRAILLE PATTERN DOTS-58 */
	0x6790, /* 1123, 0x9ed, U+2514, KEY_lowleftcorner, BOX DRAWINGS LIGHT UP AND RIGHT */
	0x0000,
	0x0000,
	0x0000,
	0x673f, /* 1120, 0x9ea, U+2518, KEY_lowrightcorner, BOX DRAWINGS LIGHT UP AND LEFT */
	0x0000,
	0xcd40, /* 2089, 0x1000dd9, U+0dd9, KEY_Sinh_e2, SINHALA KOMBUVA */
	0x0000,
	0x6852, /* 1130, 0x9f4, U+251c, KEY_leftt, BOX DRAWINGS LIGHT VERTICAL AND RIGHT */
	0x0000,
	0xcd6b, /* 2091, 0x1000ddb, U+0ddb, KEY_Sinh_ai2, SINHALA KOMBU DEKA */
	0x0000,
	0xcd81, /* 2092, 0x1000ddc, U+0ddc, KEY_Sinh_o2, SINHALA KOMBUVA HAA AELA-PILLA */
	0x0000,
	0xcd96, /* 2093, 0x1000ddd, U+0ddd, KEY_Sinh_oo2, SINHALA KOMBUVA HAA DIGA AELA-PILLA */
	0x0000,
	0x6865, /* 1131, 0x9f5, U+2524, KEY_rightt, BOX DRAWINGS LIGHT VERTICAL AND LEFT */
	0xba30, /* 1913, 0x1002896, U+2896, KEY_braille_dots_2358, BRAILLE PATTERN DOTS-2358 */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x688b, /* 1133, 0x9f7, U+252c, KEY_topt, BOX DRAWINGS LIGHT DOWN AND HORIZONTAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x6879, /* 1132, 0x9f6, U+2534, KEY_bott, BOX DRAWINGS LIGHT UP AND HORIZONTAL */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x67ab, /* 1124, 0x9ee, U+253c, KEY_crossinglines, BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL */
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
	0x76ca, /* 1278, 0xda1, U+0e01, KEY_Thai_kokai, THAI CHARACTER KO KAI */
	0x0000,
	0x76e2, /* 1279, 0xda2, U+0e02, KEY_Thai_khokhai, THAI CHARACTER KHO KHAI */
	0x0000,
	0x76fc, /* 1280, 0xda3, U+0e03, KEY_Thai_khokhuat, THAI CHARACTER KHO KHUAT */
	0x0000,
	0x7717, /* 1281, 0xda4, U+0e04, KEY_Thai_khokhwai, THAI CHARACTER KHO KHWAI */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x779c, /* 1286, 0xda9, U+0e09, KEY_Thai_choching, THAI CHARACTER CHO CHING */
	0x0000,
	0x77b7, /* 1287, 0xdaa, U+0e0a, KEY_Thai_chochang, THAI CHARACTER CHO CHANG */
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
	0x78d7, /* 1298, 0xdb5, U+0e15, KEY_Thai_totao, THAI CHARACTER TO TAO */
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x0000,
	0x66c5, /* 1113, 0x9e1, U+2592, KEY_checkerboard, MEDIUM SHADE */
	0x0000,
	0x78ef, /* 1299, 0xdb6, U+0e16, KEY_Thai_thothung, THAI CHARACTER THO THUNG */
	0x0000,
	0x790a, /* 1300, 0xdb7, U+0e17, KEY_Thai_thothahan, THAI CHARACTER THO THAHAN */
	0x0000,
	0x7926, /* 1301, 0xdb8, U+0e18, KEY_Thai_thothong, THAI CHARACTER THO THONG */
	0x0000,
	0x7941, /* 1302, 0xdb9, U+0e19, KEY_Thai_nonu, THAI CHARACTER NO NU */
	0x0000,
	};
#endif /* NEEDUTABLE */
