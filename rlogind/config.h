//
//  rlogind - configuration
//

#define _BSD_SOURCE                             // BSD types etc.
#define INET6                                   // enable INET6 support.

#define HAVE_SYSLOG                             // utilise syslog() (see rcmd).

#if !defined(_WIN32_WINNT) || (_WIN32_WINNT < 0x0600)
#undef  _WIN32_WINNT
#define _WIN32_WINNT 0x0600                     // min requirement.
#endif

#if defined(__WATCOMC__) && !defined(__STDC_WANT_LIB_EXT1__)
#define __STDC_WANT_LIB_EXT1__ 1                // enable ISO TR24731, sprintf_s etc
#endif

//  #define DO_STDOUT_TRACE
#if defined(DO_STDOUT_TRACE)                    // simple diagnostics; developer console mode.
#define STDOUT_TRACE(__x) __x
#else
#define STDOUT_TRACE(__x) /**/
#endif

//end
