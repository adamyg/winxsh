// -*- mode: mak; indent-tabs-mode: t; tab-width: 8 -*-
//
//  libssh build options ...
//

/*****************************************************************/

#include "../libw32/w32config.h"

#define PACKAGE "libssh"
#define VERSION "0.9.4"

#if defined(_MSC_VER)
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1
#define _CRT_NONSTDC_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#endif

#if defined(__WATCOMC__)
#define _MSC_VER 1400                           // used as _WIN32 alternative in many places.

#if !defined(__STDC_WANT_LIB_EXT1__)
#define __STDC_WANT_LIB_EXT1__ 1                // enable ISO TR24731, sprintf_s etc
#endif
#endif /*WATCOMC*/

#include <stdint.h>                             // include, otherwise defaults are assigned

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED
typedef signed ssize_t;
#endif

#if defined(__WATCOMC__)                        // stop redefinition
#define uid_t uid_t
#define gid_t gid_t
#else
#define mode_t mode_t
#endif


#define HAVE_GETTIMEOFDAY

#if (defined(_MSC_VER) && (_MSC_VER < 1400)) || \
	defined(__WATCOMC__)
extern /*LIBW32_API*/ const char * gai_strerror(int ecode);
#endif


/************************** HEADER FILES *************************/

/* Define to 1 if you have the <argp.h> header file. */
    /* #undef HAVE_ARGP_H */

/* Define to 1 if you have the <aprpa/inet.h> header file. */
    /* #undef HAVE_ARPA_INET_H */

/* Define to 1 if you have the <glob.h> header file. */
    /* #undef HAVE_GLOB_H */

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
    /* #undef HAVE_VALGRIND_VALGRIND_H 1 */

/* Define to 1 if you have the <pty.h> header file. */
    /* #undef HAVE_PTY_H */

/* Define to 1 if you have the <utmp.h> header file. */
    /* #undef HAVE_UTMP_H */

/* Define to 1 if you have the <util.h> header file. */
    /* #undef HAVE_UTIL_H */

/* Define to 1 if you have the <libutil.h> header file. */
    /* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the <sys/time.h> header file. */
    /* #undef HAVE_SYS_TIME_H */

/* Define to 1 if you have the <sys/utime.h> header file. */
    /* #undef HAVE_SYS_UTIME_H */

/* Define to 1 if you have the <io.h> header file. */
#define HAVE_IO_H 1

/* Define to 1 if you have the <termios.h> header file. */
    /* #undef HAVE_TERMIOS_H */

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the <stdint.h> header file. */
    #define HAVE_STDINT_H 1

/* Define to 1 if you have the <openssl/aes.h> header file. */
    /* #undef HAVE_OPENSSL_AES_H */

/* Define to 1 if you have the <wspiapi.h> header file. */
#if defined(_MSC_VER) && !defined(__WATCOMC__)
#define HAVE_WSPIAPI_H 1
#endif

/* Define to 1 if you have the <openssl/blowfish.h> header file. */
/* #undef HAVE_OPENSSL_BLOWFISH_H */

/* Define to 1 if you have the <openssl/des.h> header file. */
    /* #undef HAVE_OPENSSL_DES_H */

/* Define to 1 if you have the <openssl/ecdh.h> header file. */
    /* #undef HAVE_OPENSSL_ECDH_H */

/* Define to 1 if you have the <openssl/ec.h> header file. */
    /* #undef HAVE_OPENSSL_EC_H */

/* Define to 1 if you have the <openssl/ecdsa.h> header file. */
    /* #undef HAVE_OPENSSL_ECDSA_H */

/* Define to 1 if you have the <pthread.h> header file. */
    /* #undef HAVE_PTHREAD_H */

/* Define to 1 if you have eliptic curve cryptography in openssl */
    /* #undef HAVE_OPENSSL_ECC */

/* Define to 1 if you have eliptic curve cryptography in gcrypt */
    /* #define HAVE_GCRYPT_ECC 1 */

/* Define to 1 if you have eliptic curve cryptography */
#define HAVE_ECC 1

/* Define to 1 if you have DSA */
#define HAVE_DSA 1

/* Define to 1 if you have gl_flags as a glob_t sturct member */
    /* #undef HAVE_GLOB_GL_FLAGS_MEMBER */

/* Define to 1 if you have OpenSSL with Ed25519 support */
    /* #undef HAVE_OPENSSL_ED25519 */

/* Define to 1 if you have OpenSSL with X25519 support */
    /* #undef HAVE_OPENSSL_X25519 */

/*************************** FUNCTIONS ***************************/

/* Define to 1 if you have the `EVP_aes128_ctr' function. */
    /* #undef HAVE_OPENSSL_EVP_AES_CTR */

/* Define to 1 if you have the `EVP_aes128_cbc' function. */
    /* #undef HAVE_OPENSSL_EVP_AES_CBC */

/* Define to 1 if you have the `EVP_aes128_gcm' function. */
    /* #undef HAVE_OPENSSL_EVP_AES_GCM 1 */

/* Define to 1 if you have the `CRYPTO_THREADID_set_callback' function. */
    /* #undef HAVE_OPENSSL_CRYPTO_THREADID_SET_CALLBACK */

/* Define to 1 if you have the `CRYPTO_ctr128_encrypt' function. */
    /* #undef HAVE_OPENSSL_CRYPTO_CTR128_ENCRYPT */

/* Define to 1 if you have the `EVP_CIPHER_CTX_new' function. */
    /* #undef HAVE_OPENSSL_EVP_CIPHER_CTX_NEW */

/* Define to 1 if you have the `EVP_KDF_CTX_new_id' function. */
    /* #undef HAVE_OPENSSL_EVP_KDF_CTX_NEW_ID */

/* Define to 1 if you have the `FIPS_mode' function. */
    /* #undef HAVE_OPENSSL_FIPS_MODE */

/* Define to 1 if you have the `EVP_DigestSign' function. */
    /* #undef HAVE_OPENSSL_EVP_DIGESTSIGN */

/* Define to 1 if you have the `EVP_DigestVerify' function. */
    /* #undef HAVE_OPENSSL_EVP_DIGESTVERIFY */

/* Define to 1 if you have the `OPENSSL_ia32cap_loc' function. */
    /* #undef HAVE_OPENSSL_IA32CAP_LOC */

/* Define to 1 if you have the `snprintf' function. */
    /* #undef HAVE_SNPRINTF */

/* Define to 1 if you have the `_snprintf' function. */
#define HAVE__SNPRINTF 1

/* Define to 1 if you have the `_snprintf_s' function. */
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#define HAVE__SNPRINTF_S 1
#endif

/* Define to 1 if you have the `vsnprintf' function. */
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#define HAVE_VSNPRINTF 1
#endif

/* Define to 1 if you have the `_vsnprintf' function. */
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#define HAVE__VSNPRINTF 1
#endif

/* Define to 1 if you have the `_vsnprintf_s' function. */
#if defined(_MSC_VER) && (_MSC_VER >= 1600)
#define HAVE__VSNPRINTF_S 1
#endif

/* Define to 1 if you have the `isblank' function. */
#if defined(_MSC_VER) && (_MSC_VER >= 1800)
#define HAVE_ISBLANK 1
#endif

/* Define to 1 if you have the `strncpy' function. */
#define HAVE_STRNCPY 1

/* Define to 1 if you have the `strndup' function. */
    //#define HAVE_STRNDUP 1

/* Define to 1 if you have the `cfmakeraw' function. */
    //#define HAVE_CFMAKERAW 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the `ntohll' function. */
#if !defined(_WIN32_WINNT) || _WIN32_WINNT >= 0x0602
#define HAVE_NTOHLL 1
#endif

/* Define to 1 if you have the `htonll' function. */
#if !defined(_WIN32_WINNT) || _WIN32_WINNT >= 0x0602
#define HAVE_HTONLL 1
#endif

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if you have the `__strtoull' function. */
#define HAVE___STRTOULL 1

/* Define to 1 if you have the `_strtoui64' function. */
#define HAVE__STRTOUI64 1

/* Define to 1 if you have the `glob' function. */
    /* #define HAVE_GLOB 1 */

/* Define to 1 if you have the `explicit_bzero' function. */
    /* #define HAVE_EXPLICIT_BZERO 1 */

/* Define to 1 if you have the `memset_s' function. */
    /* #define HAVE_MEMSET_S 1 * */

/* Define to 1 if you have the `SecureZeroMemory' function. */
#if defined(_MSC_VER) && !defined(__WATCOMC__)
#define HAVE_SECURE_ZERO_MEMORY 1
#endif

/* Define to 1 if you have the `cmocka_set_test_filter' function. */
    /* #define HAVE_CMOCKA_SET_TEST_FILTER 1 */


/*************************** LIBRARIES ***************************/

/* Define to 1 if you have the `crypto' library (-lcrypto). */
    /* #undef HAVE_LIBCRYPTO */

/* Define to 1 if you have the `gcrypt' library (-lgcrypt). */
    /* #define HAVE_LIBGCRYPT 1 */

/* Define to 1 if you have the 'mbedTLS' library (-lmbedtls). */
#define HAVE_LIBMBEDCRYPTO 1
#define MBEDTLS_CONFIG_FILE "../libmbedtls/mbedtls-2.13.0/include/mbedtls/config.h"

/* Define to 1 if you have the `pthread' library (-lpthread). */
    /* #undef HAVE_PTHREAD */

/* Define to 1 if you have the `cmocka' library (-lcmocka). */
    /* #undef HAVE_CMOCKA */


/**************************** OPTIONS ****************************/

/* #undef HAVE_GCC_THREAD_LOCAL_STORAGE */
#define HAVE_MSC_THREAD_LOCAL_STORAGE 1

/* #undef HAVE_FALLTHROUGH_ATTRIBUTE */
/* #undef HAVE_UNUSED_ATTRIBUTE */

/* #undef HAVE_CONSTRUCTOR_ATTRIBUTE */
/* #undef HAVE_DESTRUCTOR_ATTRIBUTE */

/* #undef HAVE_GCC_VOLATILE_MEMORY_PROTECTION */

/* #undef HAVE_COMPILER__FUNC__ */
#if defined(__WATCOMC__)
#define HAVE_COMPILER__FUNC__ 1
#endif
#define HAVE_COMPILER__FUNCTION__ 1

/* #undef HAVE_GCC_BOUNDED_ATTRIBUTE */

/* Define to 1 if you want to enable GSSAPI */
    /* #undef WITH_GSSAPI */

/* Define to 1 if you want to enable ZLIB */
#define WITH_ZLIB 1

/* Define to 1 if you want to enable SFTP */
#define WITH_SFTP 1

/* Define to 1 if you want to enable server support */
#define WITH_SERVER 1

/* Define to 1 if you want to enable DH group exchange algorithms */
#define WITH_GEX 1

/* Define to 1 if you want to enable blowfish cipher support */
#define WITH_BLOWFISH_CIPHER 1

/* Define to 1 if you want to enable debug output for crypto functions */
    /* #undef DEBUG_CRYPTO */

/* Define to 1 if you want to enable debug output for packet functions */
    /* #undef DEBUG_PACKET */

/* Define to 1 if you want to enable pcap output support (experimental) */
    #define WITH_PCAP 1

/* Define to 1 if you want to enable calltrace debug output */
    /* #undef DEBUG_CALLTRACE */

/* Define to 1 if you want to enable NaCl support */
    /* #undef WITH_NACL */


/*************************** ENDIAN *****************************/

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
/* #undef WORDS_BIGENDIAN */


#define GLOBAL_BIND_CONFIG ".ssh/libssh_server_config"

#define GLOBAL_CLIENT_CONFIG ".ssh/ssh_config"

//end
