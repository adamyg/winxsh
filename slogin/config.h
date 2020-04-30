/*
 *  local <config.h>
 */

#include <w32config.h>                          // common configuration

#if defined(_MSC_VER)
#pragma warning (disable : 4127)                // conditional expression is constant
#pragma warning (disable : 4201)                // nonstandard extension used : nameless struct/union
#pragma warning (disable : 4204)                // nonstandard extension used : non-constant aggregate initializer
#pragma warning (disable : 4702)                // unreachable code
#pragma warning (disable : 4706)                // assignment within conditional expression
#pragma warning (disable : 4996)                // 'xxx' was declared deprecated

#elif defined(__WATCOMC__)
#pragma disable_message(136)                    // Comparison equivalent to 'unsigned == 0'
#pragma disable_message(201)                    // Unreachable code
#pragma disable_message(202)                    // Unreferenced
#pragma disable_message(124)                    // Comparison result always 0
#endif

/*end*/
