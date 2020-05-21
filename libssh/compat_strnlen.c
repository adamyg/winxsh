#include <edidentifier.h>
__CIDENT_RCSID(compat_strnlen_c,"$Id: compat_strnlen.c,v 1.2 2020/05/21 00:40:36 cvsuser Exp $")

//
//  strnlen -- library compat
//

#include "config.h"

#if defined(__WATCOMC__)

#include <sys/types.h>
#include <string.h>

size_t
strnlen(const char *str, size_t maxlen)
{
	const char *cp;

	for (cp = str; maxlen != 0 && *cp != '\0'; cp++, maxlen--)
		;

	return (size_t)(cp - str);
}


#else
extern void __stdlibrary_has_strnlen(void);

void
__stdlibrary_has_strnlen(void)
{
}

#endif

//end
