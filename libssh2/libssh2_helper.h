//$Id: libssh2_helper.h,v 1.1 2020/04/30 20:52:42 cvsuser Exp $
//
//  libssh2 support
//

#include <libssh2.h>

#ifdef __cplusplus
extern "C" {
#endif

LIBSSH2_API int libssh2_helper_trace(void);
LIBSSH2_API const char *libssh2_helper_engine(void);

#ifdef __cplusplus
} /* extern "C" */
#endif
 
//end

