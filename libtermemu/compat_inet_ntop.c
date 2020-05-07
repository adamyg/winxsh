/*
 *  inet_ntop --- compat interface
 */

#include "config.h"
#include <sys/socket.h>

#if !defined(HAVE_INET_NTOP) && \
	(!defined(_MSC_VER) || (_MSC_VER < 1500)) /*FIXME*/
	
#pragma comment(lib, "Ws2_32.lib")

/*
//  NAME
//  
//      inet_ntop, inet_pton - convert IPv4 and IPv6 addresses between binary and text form
//  
//  SYNOPSIS
//  
//      #include <arpa/inet.h>
//  
//      const char *inet_ntop(int af, const void *restrict src, char *restrict dst, socklen_t size);
//      int inet_pton(int af, const char *restrict src, void *restrict dst);
//  
//  DESCRIPTION
//  
//      The inet_ntop() function shall convert a numeric address into a text string suitable for presentation. The af
//      argument shall specify the family of the address. This can be AF_INET [IP6] [Option Start] or AF_INET6. [Option
//      End] The src argument points to a buffer holding an IPv4 address if the af argument is AF_INET, [IP6] [Option
//      Start] or an IPv6 address if the af argument is AF_INET6; [Option End] the address must be in network byte order.
//      The dst argument points to a buffer where the function stores the resulting text string; it shall not be NULL.
//      The size argument specifies the size of this buffer, which shall be large enough to hold the text string
//      (INET_ADDRSTRLEN characters for IPv4, [IP6] [Option Start] INET6_ADDRSTRLEN characters for IPv6). [Option End]
//  
//      The inet_pton() function shall convert an address in its standard text presentation form into its numeric binary
//      form. The af argument shall specify the family of the address. The AF_INET [IP6] [Option Start] and AF_INET6
//      [Option End] address families shall be supported. The src argument points to the string being passed in. The dst
//      argument points to a buffer into which the function stores the numeric address; this shall be large enough to
//      hold the numeric address (32 bits for AF_INET, [IP6] [Option Start] 128 bits for AF_INET6). [Option End]
//  
//      If the af argument of inet_pton() is AF_INET, the src string shall be in the standard IPv4 dotted-decimal form:
//  
//          ddd.ddd.ddd.ddd
//  
//      where "ddd" is a one to three digit decimal number between 0 and 255 (see inet_addr()). The inet_pton() function
//      does not accept other formats (such as the octal numbers, hexadecimal numbers, and fewer than four numbers that
//      inet_addr() accepts).
//  
//      [IP6] [Option Start] If the af argument of inet_pton() is AF_INET6, the src string shall be in one of the
//      following standard IPv6 text forms:
//  
//          The preferred form is "x:x:x:x:x:x:x:x", where the 'x' s are the hexadecimal values of the eight 16-bit
//          pieces of the address. Leading zeros in individual fields can be omitted, but there shall be at least one
//          numeral in every field.
//  
//          A string of contiguous zero fields in the preferred form can be shown as "::". The "::" can only appear once
//          in an address. Unspecified addresses ( "0:0:0:0:0:0:0:0" ) may be represented simply as "::".
//  
//          A third form that is sometimes more convenient when dealing with a mixed environment of IPv4 and IPv6 nodes
//          is "x:x:x:x:x:x:d.d.d.d", where the 'x' s are the hexadecimal values of the six high-order 16-bit pieces of
//          the address, and the 'd' s are the decimal values of the four low-order 8-bit pieces of the address (standard
//          IPv4 representation).
//  
//      Note:
//          A more extensive description of the standard representations of IPv6 addresses can be found in RFC 2373.
//  
//      [Option End]
//  
//  RETURN VALUE
//  
//      The inet_ntop() function shall return a pointer to the buffer containing the text string if the conversion
//      succeeds, and NULL otherwise, and set errno to indicate the error.
//  
//      The inet_pton() function shall return 1 if the conversion succeeds, with the address pointed to by dst in network
//      byte order. It shall return 0 if the input is not a valid IPv4 dotted-decimal string [IP6] [Option Start] or a
//      valid IPv6 address string, [Option End] or -1 with errno set to [EAFNOSUPPORT] if the af argument is unknown.
//  
//  ERRORS
//  
//      The inet_ntop() and inet_pton() functions shall fail if:
//  
//      [EAFNOSUPPORT]   The af argument is invalid.
//      [ENOSPC]         The size of the inet_ntop() result buffer is inadequate.
//  
*/

const char *
inet_ntop(int af, const void *src, char *dst, /*socklen_t*/ size_t size)
{
	struct sockaddr_storage ss = {0};
	unsigned long s = (unsigned long)size;

	ss.ss_family = af;
	switch (af) {
	case AF_INET:
		((struct sockaddr_in *)&ss)->sin_addr = *(struct in_addr *)src;
		break;
	case AF_INET6:
		((struct sockaddr_in6 *)&ss)->sin6_addr = *(struct in6_addr *)src;
		break;
	default:
		return NULL;
	}
	return (WSAAddressToStringA((struct sockaddr *)&ss, sizeof(ss), NULL, dst, &s) == 0) ? dst : NULL;
}

#else

extern void __native_inet_ntop_available(void);
void __native_inet_ntop_available(void)
{
}

#endif

