/*
 *  strtonum --- compat interface
 */

#include "config.h"

#if !defined(HAVE_STRTONUM)

#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#if defined(HAVE_UNISTD_H)
#include <unistd.h>
#endif
#include "compat.h"

#define	INVALID	    1
#define	TOOSMALL    2
#define	TOOLARGE    3

long long
strtonum(const char *numstr, long long minval, long long maxval, const char **errstrp)
{
        static const struct errval {
		const char *errstr;
		int err;
	} ev[4] = {
		{ NULL,		0 },
		{ "invalid",	EINVAL },
		{ "too small",	ERANGE },
		{ "too large",	ERANGE },
	        };
	long long ll = 0;
	int oerrno = errno, error = 0;
	char *ep;

	if (minval > maxval) {
		error = INVALID;
	} else {
#if defined(_MSC_VER)
#define strtoll _strtoi64
#endif
                errno = 0;
		ll = strtoll(numstr, &ep, 10);
		if (numstr == ep || *ep != '\0')
			error = INVALID;
		else if ((ll == LLONG_MIN && errno == ERANGE) || ll < minval)
			error = TOOSMALL;
		else if ((ll == LLONG_MAX && errno == ERANGE) || ll > maxval)
			error = TOOLARGE;
	}
	if (errstrp != NULL)
		*errstrp = ev[error].errstr;
        errno = (error ? ev[error].err : oerrno /*restore*/);
	if (error)
		ll = 0;
	return ll;
}

#else   /*!HAVE_STRTONUM*/

extern void __native_strtonum_available(void);
void __native_strtonum_available(void)
{
}

#endif

