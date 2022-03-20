//
//  logger_arguments
//

#include "../config.h"

#include <stdio.h>
#include <stdlib.h>

#include <Windows.h>
#include "../Logger.h"


int
main()
{
#define KB  (1024)
#define MB  (1024 * 1024)
#define GB  (1024 * 1024 * 1024)
#define SS  (1)
#define MM  (60)
#define HH  (60*60)
#define DD  (24*60*60)

    assert(Logger::set_size_limit("0")      && MIN_SIZE_LIMIT   == size_limit_);
    assert(Logger::set_size_limit("1")      && MIN_SIZE_LIMIT   == size_limit_);
    assert(Logger::set_size_limit("1B")     && MIN_SIZE_LIMIT   == size_limit_);
    assert(Logger::set_size_limit("1K")     && MIN_SIZE_LIMIT   == size_limit_);
    assert(Logger::set_size_limit("32K")    && (32  * KB)       == size_limit_);
    assert(Logger::set_size_limit("1M")     && (1   * MB)       == size_limit_);
    assert(Logger::set_size_limit("100M")   && (100 * MB)       == size_limit_);
    assert(Logger::set_size_limit("1.5M")   && (unsigned)(1.5 * MB) == size_limit_);
    assert(Logger::set_size_limit("0.5G")   && (unsigned)(0.5 * GB) == size_limit_);
    assert(Logger::set_size_limit("2G")     && MAX_SIZE_LIMIT   == size_limit_);

    assert(Logger::set_time_limit("00:10")  && (10  * MM)       == time_limit_);
    assert(Logger::set_time_limit("12:00")  && (12  * HH)       == time_limit_);
    assert(Logger::set_time_limit("12:00:20")  && ((12  * HH) + (20 * SS)) == time_limit_);

    assert(Logger::set_time_limit("1")      && MIN_TIME_LIMIT   == time_limit_);
    assert(Logger::set_time_limit("2")      && MIN_TIME_LIMIT   == time_limit_);
    assert(Logger::set_time_limit("10M")    && (10  * MM)       == time_limit_);
    assert(Logger::set_time_limit("0.5H")   && (30  * MM)       == time_limit_);
    assert(Logger::set_time_limit("1H")     && (1   * HH)       == time_limit_);
    assert(Logger::set_time_limit("100H")   && (100 * HH)       == time_limit_);
    assert(Logger::set_time_limit("2.5H")   && (unsigned)(2.5 * HH) == time_limit_);
    assert(Logger::set_time_limit("0.5D")   && (12  * HH)       == time_limit_);
    assert(Logger::set_time_limit("100D")   && MAX_TIME_LIMIT   == time_limit_);

    return 0;
}

//end
