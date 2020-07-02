#ifndef LIBW32_MSVC_ERRNO_H_INCLUDED
#define LIBW32_MSVC_ERRNO_H_INCLUDED
/*
 *  $Id: msvc_errno.h,v 1.2 2020/07/02 21:31:41 cvsuser Exp $
 *  MSVC errno filter
 * The applications are free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
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
 * license for details.
 *
 * This file is part of the WinRSH/WinSSH project.
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

#undef EADDRINUSE       //100
#undef EADDRNOTAVAIL    //101
#undef EAFNOSUPPORT     //102
#undef EALREADY         //103
//#define EBADMSG       104
//#define ECANCELED     105
#undef ECONNABORTED     //106
#undef ECONNREFUSED     //107
#undef ECONNRESET       //108
#undef EDESTADDRREQ     //109
#undef EHOSTUNREACH     //110
//#define EIDRM         111
#undef EINPROGRESS      //112
#undef EISCONN          //113
#undef ELOOP            //114
#undef EMSGSIZE         //115g
#undef ENETDOWN         //116
#undef ENETRESET        //117
#undef ENETUNREACH      //118
#undef ENOBUFS          //119
//#define ENODATA       120
//#define ENOLINK       121
//#define ENOMSG        122
#undef ENOPROTOOPT      //123
//#define ENOSR         124
//#define ENOSTR        125
//#define ENOTCONN      126
#undef ENOTCONN         //126
#undef ENOTRECOVERABLE  //127
#undef ENOTSOCK         //128
//#define ENOTSUP       129
#undef EOPNOTSUPP       //130
//#define EOTHER        131
//#define EOVERFLOW     132
//#define EOWNERDEAD    133
//#define EPROTO        134
#undef EPROTONOSUPPORT  //135
#undef EPROTOTYPE       //136
//#define ETIME         137
#undef ETIMEDOUT        //138
//#define ETXTBSY       139
#undef EWOULDBLOCK      //140

//end
#endif /*LIBW32_MSVC_ERRNO_H_INCLUDED*/
