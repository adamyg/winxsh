#ifndef COMPAT_H_INCLUDED
#define COMPAT_H_INCLUDED
#include <edidentifier.h>
__CIDENT_RCSID(compat_h,"$Id: compat.h,v 1.2 2017/03/23 16:16:06 cvsuser Exp $")
__CPRAGMA_ONCE

/*
 *  compat interfaces
 */

#ifndef HAVE_CONFIG_H
#error HAVE_CONFIG_H assumed ...
#endif
#include "config.h"
#include <sys/cdefs.h>

__BEGIN_DECLS
 
#ifndef HAVE_STRTONUM
extern long long strtonum(const char *numstr, long long minval, long long maxval, const char **errstrp);
#endif
#if !defined(HAVE_INET_NTOP) && \
    (!defined(_MSC_VER) || (_MSC_VER < 1500)) /*FIXME: makelib.pl*/
extern const char *inet_ntop(int af, const void *src, char *dst, size_t /*socklen_t*/ size);
extern int inet_pton(int af, const char *src, void *dst);
#endif

__END_DECLS

#endif //COMPAT_H_INCLUDED






