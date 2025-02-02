#include <edidentifier.h>
__CIDENT_RCSID(Logger_cpp, "$Id: Logger.cpp,v 1.10 2025/02/02 14:10:46 cvsuser Exp $")

/* -*- mode: c; indent-width: 4; -*- */
/*
 * Simple File logger.
 *
 * Copyright (c) 2020 - 2025, Adam Young.
 * All rights reserved.
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

#include "config.h"

#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <dirent.h>

#include "Logger.h"                             // public header
#include "syslog.h"

#ifndef  WINDOWS_MEAN_AND_LEAN
#define  WINDOWS_MEAN_AND_LEAN
#include <Windows.h>
#endif

#if defined(_MSC_VER)
#include <msvc_system_error.hpp>
#endif
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cassert>
#include <cctype>
#include <ctime>

#if defined(_MSC_VER)
#include <msvc_system_error.hpp>
#endif
#include <iostream>
#include <string>

//#define DO_LOGGER_TRACE
#if defined(DO_LOGGER_TRACE)                    // simple diagnostics; developer console mode.
#define LOGGER_TRACE(__x) __x
#else
#define LOGGER_TRACE(__x) /**/
#endif


/////////////////////////////////////////////////////////////////////////////////////////
//  Streamers

namespace {
    class FileStream {
        BOOST_DELETED_FUNCTION(FileStream(const FileStream &))
        BOOST_DELETED_FUNCTION(FileStream& operator=(const FileStream &))

        static const size_t suffixlen = (sizeof("_YYYYMMDD_HHMMSS.log") - 1);

    public:
        FileStream(const char *path = 0) :
                fp_(0), lasterror_(0), created_(std::time(NULL)), size_(0), blocks_(0) {
            if (path) open(path);
        }

        ~FileStream() {
            close();
        }

        void open(const char *path, size_t blockhint = 0) {
            close();
            if (NULL != (fp_ = std::fopen(path, "at"))) {
                struct _stat sb = { 0 };

                filename_ = path;
                (void) _stat(path, &sb);
                created_ = parse_timestamp(filename_);
                if (sb.st_ctime) {              // valid on NTFS but not on FAT formatted disk drives.
                    created_ = sb.st_ctime;
                }
                size_ = sb.st_size;             // size, in bytes.
                blocks_ = (size_ ? size_ / (blockhint ? blockhint : 60) /*guessiment*/: 0);
            }
        }

        bool is_open() const {
            return (fp_ != 0);
        }

        void close() {
            if (is_open()) {
                std::fclose(fp_), fp_ = 0;
                if (0 == size_) {               // remove empty images.
                    std::remove(filename_.c_str());
LOGGER_TRACE(std::cout << "LOG: purged empty volume <" << filename_ << ">\n";)
                }
                filename_.clear();
            }
        }

        void push(const char *buffer, const size_t len) {
            size_t cnt = 0, remaining = len;

            assert(fp_);
            if (is_open()) {
                lasterror_ = 0;
                do {
                    if ((cnt = write(buffer += cnt, remaining)) <= 0) {
                        lasterror_ = std::ferror(fp_);
                        break;
                    }
                    size_ += cnt;
                } while (0 != (remaining -= cnt));
                ++blocks_;
            }
        }

        void flush() {
            if (fp_) std::fflush(fp_);
        }

        const std::string& filename() const {
            return filename_;
        }

        time_t created() const {
            return created_;
        }

        unsigned size() const {
            return size_;
        }

        unsigned blocks() const {
            return blocks_;
        }

    public:
        static bool resolve_path(const std::string &basename, std::string &result, bool create = false) {
            char t_fullpathname[_MAX_PATH];
            DWORD len = ::GetFullPathNameA(basename.c_str(), sizeof(t_fullpathname), t_fullpathname, NULL);
                // Note: Shall resolve paths where components do not exist,
                //  ie The function does not verify that the resulting path and file name are valid,
                //     or that they see an existing file on the associated volume.
                //

            if (create) {                       // attempt to create parent directory.
                char t_directoryname[_MAX_PATH];

                strncpy(t_directoryname, (len ? t_fullpathname : basename.c_str()), sizeof(t_directoryname));
                t_directoryname[sizeof(t_directoryname) - 1] = 0;

                char *p1 = strrchr(t_directoryname, '/'), *p2 = strrchr(t_directoryname, '\\');
                if (p1 || p2) {                 // remove trailing name.
                    (p2 > p1 ? p2 : p1)[1] = 0;

                    if (::CreateDirectoryA(t_directoryname, NULL)) {
                        if (0 == len) {
                            len = ::GetFullPathNameA(basename.c_str(), sizeof(t_fullpathname), t_fullpathname, NULL);
                        }
                    }
                }
            }

            if (len) {
                result.assign(t_fullpathname, len);
                return true;
            }
            return false;
        }

        static bool split_path(const std::string &basename, std::string &dir, std::string &suffix, bool rmext = true) {
            const size_t s = basename.find_last_of("/\\");
            if (s != std::string::npos) {       // last separator
                dir.assign(basename.c_str(), s);
                suffix.assign(basename.c_str() + s + 1);
            } else {
                dir.assign(".");
                suffix = basename;
            }

            if (rmext && suffix.length() > 4) { // remove trailing ".log"; if any
                if (0 == _stricmp(&suffix[suffix.length() - 4], ".log")) {
                    suffix.resize(suffix.length() - 4);
                }
            }
            return true;
        }

        static std::string generate_log_name(const std::string &basename, const time_t now) {
            std::string name(basename);
            struct std::tm *tm = std::gmtime(&now); // GMT/MTSafe
            char timestamp[32];

            (void) _snprintf(timestamp, sizeof(timestamp), "_%04u%02u%02u_%02u%02u%02u.log",
                        tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec);
            timestamp[sizeof(timestamp) - 1] = 0;

            if (name.length() > 4) {            // remove trailing ".log"; if any
                if (0 == _stricmp(&name[name.length() - 4], ".log")) {
                    name.resize(name.length() - 4);
                }
            }

            name.append(timestamp);
            assert(now == parse_timestamp(name));
            return name;
        }

        static time_t parse_timestamp(const std::string &name) {
            return parse_timestamp(name.c_str(), name.length());
        }

        static time_t parse_timestamp(const char *name, size_t namelen) {
            struct std::tm tm = {0};

            if (namelen < suffixlen ||
                    6 != std::sscanf(name + (namelen - suffixlen), "_%4u%2u%2u_%2u%2u%2u.log",
                            &tm.tm_year, &tm.tm_mon, &tm.tm_mday, &tm.tm_hour, &tm.tm_min, &tm.tm_sec) ||
                        tm.tm_year < 1900 || tm.tm_year > 2099 ||
                        tm.tm_mon  < 1 || tm.tm_mon  > 12 ||
                        tm.tm_mday < 1 || tm.tm_mday > 31) {
                return -1;                      // invalid
            }

            tm.tm_year -= 1900;                 // Year (current year minus 1900).
            tm.tm_mon -= 1;                     // Month (0 - 11; January = 0).

            return timegm(&tm);
        }

        static int purge_logs(const std::string &basename, const time_t now, unsigned period) {
            const time_t expired = now - period;
            std::string dir, prefix;
            int ret = -1;
            DIR *d;

            // iterate directory

            if (split_path(basename, dir, prefix) && dir.length() < _MAX_PATH) {
                if (NULL != (d = opendir(dir.c_str()))) {

                    char fullname[_MAX_PATH * 2] = {0};
                    struct dirent *entry;

                    memcpy(fullname, dir.c_str(), dir.length());
                    fullname[dir.length()] = '/';
                    ret = 0;

                    while (NULL != (entry = readdir(d))) {
                        const char *name = entry->d_name;

                        if (name[0] == '.') {
                            if (0 == strcmp(name, ".") || 0 == strcmp(name, "..")) {
                                continue;
                            }
                        }

                        if (entry->d_namlen == (prefix.length() + suffixlen)) {
                            if (0 == strncmp(name, prefix.c_str(), prefix.length())) {
                                const time_t timestamp =
                                    parse_timestamp(name, entry->d_namlen);
                                if (timestamp > 0 && timestamp < expired) {
                                    strcpy(fullname + dir.length() + 1, name);
                                    _unlink(fullname);
                                    ++ret;
                                }
                            }
                        }
                    }
                    closedir(d);
                }
            }
            return ret;
        }

    private:
        int write(const char *buffer, size_t buflen) {
#if defined(__WATCOMC__)
            return std::fwrite(buffer, 1, buflen, fp_);
#else
            return _fwrite_nolock(buffer, 1, buflen, fp_);
#endif
        }

    private:
        std::string filename_;
        std::FILE *fp_;
        time_t created_;
        size_t size_, blocks_;
        int lasterror_;
    };
};


/////////////////////////////////////////////////////////////////////////////////////////
//  Buffer cursor

void
Logger::BufferCursor::append(const void *buffer, size_t buflen) {
    assert(is_valid());
    assert(buffer && buflen);
    assert((size_ + buflen) <= reserved_);
    memcpy(data_ + size_, buffer, buflen);
    size_ += buflen;
}


void
Logger::BufferCursor::append_nl() {
    assert(is_valid());
    assert((size_ + 1) <= reserved_);
    data_[size_++] = '\n';
}


void
Logger::BufferCursor::assign(const void *buffer, size_t buflen) {
    assert(is_valid());
    assert(buffer && buflen);
    assert(buflen <= reserved_);
    memcpy(data_, buffer, buflen);
    size_ = buflen;
}


void
Logger::BufferCursor::assign_nl(const void *buffer, size_t buflen)
{
    assert(is_valid());
    assert(buffer && buflen);
    assert(buflen < reserved_);
    memcpy(data_, buffer, buflen);
    data_[buflen] = '\n';
    size_ = buflen + 1;
}


/////////////////////////////////////////////////////////////////////////////////////////
//  Logger implementation

class Logger::LoggerImpl {
    BOOST_DELETED_FUNCTION(LoggerImpl(const LoggerImpl &))
    BOOST_DELETED_FUNCTION(LoggerImpl& operator=(const LoggerImpl &))

public:
    // Intrusive queue
    typedef TAILQ_HEAD(tagBufferQueue, Logger::BufferCursor) BufferQueue_t;
    struct BufferQueue : private BufferQueue_t {
        BufferQueue() : size_(0) {
            TAILQ_INIT(this);
        }

        bool empty() const {
            return TAILQ_EMPTY(this);
        }

        size_t size() const {
            return size_;
        }

        void clear() {
            TAILQ_INIT(this);
            size_ = 0;
        }

        void push_back(Logger::BufferCursor *node) {
            TAILQ_INSERT_TAIL(this, node, __entry);
            ++size_;
        }

        Logger::BufferCursor *begin() const {
            return TAILQ_FIRST(this);
        }

        static Logger::BufferCursor *next(Logger::BufferCursor *node) {
            return TAILQ_NEXT(node, __entry);
        }

        unsigned size_;
    };

    // Guarded intrusive queue
    struct BufferQueue_r : private BufferQueue {
        BufferQueue_r() {
            ::InitializeCriticalSection(&critical_section_);
        }

        ~BufferQueue_r() {
            ::DeleteCriticalSection(&critical_section_);
        }

        bool push_back(Logger::BufferCursor *node) {
            ::EnterCriticalSection(&critical_section_);
            const bool was_first = empty();
            BufferQueue::push_back(node);
            ::LeaveCriticalSection(&critical_section_);
            return was_first;
        }

        void steal(BufferQueue &queue) {
            ::EnterCriticalSection(&critical_section_);
            queue = *this;                      // copy
            clear();                            // reinitialise
            ::LeaveCriticalSection(&critical_section_);
        }

    private:
        CRITICAL_SECTION critical_section_;
    };

public:
    LoggerImpl() : thread_handle_(0), roll_time_(0), purge_time_(0) {
        wake_event_ = ::CreateEventA(NULL, FALSE /*auto*/, FALSE, NULL);
        stop_event_ = ::CreateEventA(NULL, TRUE /*manual*/, FALSE, NULL);
    }

    ~LoggerImpl() {
        stop();
        ::CloseHandle(stop_event_);
        ::CloseHandle(wake_event_);
    }

    bool start(const Profile &profile, bool toconsole) {
        if (thread_handle_) {
            return false;
        }

        // Open initial file instance
        const time_t now = std::time(NULL);     // current time stamp.

        profile_ = profile;
        profile_.toconsole_ |= toconsole;
        FileStream::resolve_path(profile.base_path_, profile_.base_path_, true);

LOGGER_TRACE(std::cout << "LOG: starting\n";)
LOGGER_TRACE(std::cout << "LOG: base path:    " << profile_.base_path_    << "\n";)
LOGGER_TRACE(std::cout << "LOG: roll period:  " << profile_.time_period_  << " seconds\n";)
LOGGER_TRACE(std::cout << "LOG: size limit:   " << profile_.size_limit_   << " bytes\n";)
LOGGER_TRACE(std::cout << "LOG: item limit:   " << profile_.line_limit_   << "\n";)
LOGGER_TRACE(std::cout << "LOG: purge period: " << profile_.purge_period_ << "\n";)

        stream_.open(FileStream::generate_log_name(profile_.base_path_, now).c_str());
        if (stream_.is_open()) {

            // Start consumer thread

            ::ResetEvent(stop_event_);
            roll_time_ = roll_time(now, profile.time_period_);
            if (profile.purge_period_) purge_time_ = roll_time(now, profile.purge_period_  / 2);
            thread_handle_ =
                ::CreateThread(NULL, 0, __consumer_thread, (LPVOID)this, 0, NULL);
            return true;
        }
        return false;
    }

    void stop() {
        if (thread_handle_) {
            ::SetEvent(stop_event_);
            ::WaitForSingleObject(thread_handle_, INFINITE);
            thread_handle_ = 0;
        }
    }

    Logger::BufferCursor *LoggerImpl::allocate(size_t buflen) {
        BufferCursor *cursor;
        if (NULL != (cursor =
                (BufferCursor *)malloc(sizeof(Logger::BufferCursor) + buflen))) {
            // TODO: pull from a buffer/circular pool.

            cursor->size_ = 0;
            cursor->data_ = (char *)(cursor + 1);
            cursor->reserved_ = buflen;
            cursor->parent_ = NULL;
        }
        return cursor;
    }

    void release(Logger::BufferCursor *cursor) {
        if (cursor) {
            assert((void *)(cursor + 1) == cursor->data_);
            ::free((void *)cursor);
        }
    }

    bool push(Logger::BufferCursor *cursor) {
        if (cursor && cursor->is_valid()) {
            if (cursor->size()) {
                if (queue_.push_back(cursor)) { // is_first?
                    ::SetEvent(wake_event_);    // start consumer.
                }
            } else {
                release(cursor);
            }
            return true;
        }
        return false;
    }

public:
    static time_t roll_time(const time_t now, unsigned period) {
        time_t cursor = now - (now % 86400),
            tomorrow = cursor + 86400;

        if (period) {
            while ((cursor += period) <= now) {
                ;   // iterate until we exceed now.
            }
            if (cursor < tomorrow) {
                return cursor; // roll to top of day.
            }
        }
        return tomorrow;                        // default next day.
    }

#if defined(DO_LOGGER_TRACE)                    // diagnostics, Non-MtSafe
    static const char *time_to_string(const time_t utc) {
        static char t_buffer[32];
        const struct tm *tm = gmtime(&utc);
        sprintf(t_buffer, "%02u:%02u:%02u UTC", tm->tm_hour, tm->tm_min, tm->tm_sec);
        return t_buffer;
    }
#endif

public:
    static DWORD WINAPI
    __consumer_thread(LPVOID lpParam) {
        Logger::LoggerImpl *self = (class Logger::LoggerImpl *)lpParam;
        self->__consumer();
        return 0;
    }

    void
    __consumer() {
        HANDLE events[2] = { stop_event_, wake_event_ };
        time_t last_purge = 0;
        bool term = false;

LOGGER_TRACE(std::cout << "LOG: open <" << stream_.filename() << ">, created " << time_to_string(stream_.created()) << ", size " << stream_.size() << "\n";)
LOGGER_TRACE(std::cout << "LOG: next roll time " << time_to_string(roll_time_) << ", now " << time_to_string(time(NULL)) << std::endl;)
LOGGER_TRACE(if (purge_time_) std::cout << "LOG: next purge time " << time_to_string(purge_time_) << ", now " << time_to_string(time(NULL)) << std::endl;)

        while (! term) {
            if (WAIT_OBJECT_0 ==                // TODO: align sleep with roll_time
                    ::WaitForMultipleObjects(2, events, FALSE, 60 * 1000 /*1 minute*/)) {
LOGGER_TRACE(std::cout << "LOG: termination signaled" << std::endl;)
                term = true;                    // termination, otherwise wake.
            }
            consumer_purge(consumer_drain());
        }
        consumer_drain();
    }

private:
    time_t
    consumer_drain() {
        BufferQueue t_queue;
        time_t last_purge = 0, now = 0;
        unsigned block = 0;

        queue_.steal(t_queue);

        if (! t_queue.empty()) {                // consume slice.
            Logger::BufferCursor *cursor = t_queue.begin();

LOGGER_TRACE(std::cout << "LOG: draining: " << t_queue.size() << std::endl;)
            while (cursor) {
                Logger::BufferCursor *current = cursor;

                stream_.push(current->data(), current->size());
            //  if (profile_.sync) stream_.flush();

                if (profile_.toconsole_) {      // optional concurrent console.
                    std::fwrite(current->data(), current->size(), 1, stderr);
                }

                if (0 == (++block & 0x1f)) {    // periodic check
                    if (consumer_check(now = time(NULL))) {
                        consumer_roll(now);
                    }
                }

                cursor = t_queue.next(cursor);
                release(current);
            }
        }

        if (profile_.toconsole_) {
            std::fflush(stderr);
        }
        stream_.flush();

LOGGER_TRACE(std::cout << "LOG: draining, complete" << std::endl;)
        if (consumer_check(now = time(NULL))) {
            consumer_roll(now);
        }
        return now;
    }

    bool
    consumer_check(const time_t now) {
        if (now >= roll_time_)
            return true;
        if (profile_.size_limit_ && profile_.size_limit_ <= stream_.size())
            return true;
        if (profile_.line_limit_ && profile_.line_limit_ <= stream_.blocks())
            return true;
        return false;
    }

    void
    consumer_roll(const time_t now) {
        const time_t timestamp = (now > roll_time_ ? roll_time_ : now);
            // Align with current roll_time if exceeed.

        stream_.open(FileStream::generate_log_name(profile_.base_path_, timestamp).c_str());
        roll_time_ = roll_time(timestamp, profile_.time_period_);

LOGGER_TRACE(std::cout << "LOG: open <" << stream_.filename() << ">\n";)
LOGGER_TRACE(std::cout << "LOG: next roll time " << time_to_string(roll_time_) << ", now " << time_to_string(now) << std::endl;)
    }

    void
    consumer_purge(const time_t now) {
        if (0 == purge_time_ || now < purge_time_)
            return;

        const time_t timestamp = (now > purge_time_ ? purge_time_ : now);
            // Align with current purge_time if exceeed.

        stream_.purge_logs(profile_.base_path_, timestamp, profile_.purge_period_);
        purge_time_ = roll_time(timestamp, profile_.purge_period_ / 2);

LOGGER_TRACE(std::cout << "LOG: next purge time " << time_to_string(purge_time_) << ", now " << time_to_string(now) << std::endl;)
    }

private:
    HANDLE thread_handle_;
    HANDLE wake_event_, stop_event_;
    BufferQueue_r queue_;
    Profile profile_;
    FileStream stream_;
    time_t roll_time_;
    time_t purge_time_;
};


/////////////////////////////////////////////////////////////////////////////////////////
//  Logger profile

Logger::Profile::Profile() :
        toconsole_(false),
        size_limit_(DEF_SIZE_LIMIT), time_period_(DEF_TIME_LIMIT), line_limit_(0),
        time_epoch_(0), time_rounding_(false), purge_period_(0)
{
    base_path_ = "./logs/logger.log";           // FIXME
}


void
Logger::Profile::toconsole(bool state)
{
    toconsole_ = state;
}


void
Logger::Profile::base_path(const std::string &path)
{
    assert(path.length());
    base_path_ = path;
}

void
Logger::Profile::base_path(const char *path)
{
    assert(path && *path);
    if (path) base_path_ = path;
}


const char *
Logger::Profile::base_path() const
{
    return base_path_.c_str();
}


bool
Logger::Profile::size_limit(const char *limit)
{
    if (! limit) {
        size_limit_ = DEF_SIZE_LIMIT;           // default
        return true;
    }

    if (! parse_size_limit(limit, size_limit_)) {
        return false;
    }

    if (size_limit_ < MIN_SIZE_LIMIT) size_limit_ = MIN_SIZE_LIMIT;
    if (size_limit_ > MAX_SIZE_LIMIT) size_limit_ = MAX_SIZE_LIMIT;
    return true;
}


bool
Logger::Profile::time_period(const char *period)
{
    if (! period) {
        time_period_ = DEF_TIME_LIMIT;          // default
        return true;
    }

    if (! parse_time_limit(period, time_period_)) {
        return false;                           // pase error
    }

    if (time_period_ < MIN_TIME_LIMIT) time_period_ = MIN_TIME_LIMIT;
    if (time_period_ > MAX_TIME_LIMIT) time_period_ = MAX_TIME_LIMIT;
    return true;
}


bool
Logger::Profile::line_limit(const char *limit)
{
    if (! limit) {
        line_limit_ = DEF_LINE_LIMIT;           // default
        return true;
    }

    if (! parse_time_limit(limit, line_limit_)) {
        return false;                           // pase error
    }

    if (line_limit_ < MIN_LINE_LIMIT) line_limit_ = MIN_LINE_LIMIT;
    return true;
}


void
Logger::Profile::time_rounding(bool state, const char *epoch)
{
    time_rounding_ = state;
    if (epoch && parse_time_limit(epoch, time_epoch_)) {
        if (time_epoch_ >= (24 * 60 * 60)) {
            time_epoch_ = 0;                    // midnight
        }
    }
}


bool
Logger::Profile::purge_period(const char *period)
{
    if (! period) {
        purge_period_ = 0;                      // default; none
        return true;
    }

    if (! parse_time_limit(period, purge_period_)) {
        return false;                           // pase error
    }

    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////
//  Logger framework

Logger::Logger(unsigned flags) :
        impl_(), flags_(flags)
{
}


Logger::~Logger() {
}


bool
Logger::start(const Profile &profile)
{
    if (! impl_) {
        Logger::LoggerImpl *impl = new(std::nothrow) Logger::LoggerImpl;
        if (! impl) {
            return false;                       // fatal
        }
        impl->start(profile, 0 != (flags_ & Logger::CONSOLE_ASYNCHRONOUS));
        impl_.reset(impl);
    }
    return true;
}


void
Logger::stop()
{
    if (impl_) {
        impl_->stop();
        impl_.reset();
    }
}


//static
static int
syslog_hook(void *self, int op, int pri, const char *msg, size_t msglen)
{
    Logger *logger = (Logger *)self;
    logger->push(msg, msglen);
    return 1;
}


void 
Logger::attach_to_syslog()
{
    setlogproxy(&syslog_hook, (void *) this);
}


bool
Logger::push(const char *buffer, size_t buflen)
{
    const bool need_nl = (buflen && buffer[buflen - 1] != '\n');
    bool ret = false;

    if (impl_) {                                // push to consumer
        if (need_nl) {
            BufferCursor *cursor(impl_->allocate(buflen + 1));
            if (cursor && cursor->is_valid()) {
                cursor->assign_nl(buffer, buflen);
                impl_->push(cursor);
                ret = true;
            }
        } else {
            BufferCursor *cursor(impl_->allocate(buflen));
            if (cursor && cursor->is_valid()) {
                cursor->assign(buffer, buflen);
                impl_->push(cursor);
                ret = true;
            }
        }
    }

    if ((flags_ & Logger::CONSOLE_SYNCHRONOUS) || // as well to console.
            (!ret && (flags_ & Logger::CONSOLE_DEFAULT))) { // no error/default.
        std::fwrite(buffer, buflen, 1, stderr);
        if (need_nl) {
            std::fputc('\n', stderr);
        }
    }

    return ret;
}


bool
Logger::pushv(const struct liovec *iov, int iovcnt)
{
    if (iovcnt <= 0)
        return true;

    size_t buflen = 0, need_nl = 0;
    bool ret = false;

    for (int v = 0; v < iovcnt; ++v) {          // storage needs
        if (size_t len = iov[v].liov_len) {
            need_nl = (((const char *)iov[v].liov_base)[len - 1] != '\n');
            buflen += len;
        }
    }

    if (0 == buflen)
        return false;

    if (impl_) {                                // push to consumer.
        BufferCursor *cursor(impl_->allocate(buflen + need_nl));
        if (cursor && cursor->is_valid()) {
            for (int v = 0; v < iovcnt; ++v) {
                if (size_t len = iov[v].liov_len) {
                    cursor->append(iov[v].liov_base, len);
                }
            }
            if (need_nl) cursor->append_nl();
            impl_->push(cursor);
            ret = true;
        }
    }

    if ((flags_ & Logger::CONSOLE_SYNCHRONOUS) || // as well to console.
            (!ret && (flags_ & Logger::CONSOLE_DEFAULT))) { // no error/default.
        for (int v = 0; v < iovcnt; ++v) {
            if (size_t len = iov[v].liov_len) {
                std::fwrite(iov[v].liov_base, len, 1, stderr);
            }
        }
        if (need_nl) {
            std::fputc('\n', stderr);
        }
    }

    return ret;
}


/////////////////////////////////////////////////////////////////////////////////////////
//  Support

//static
bool
Logger::parse_size_limit(const char *limit, unsigned &result)
{
    assert(limit);
    if (!limit) return false;

    char *end = 0;
    float bits = 0;
    unsigned long units = 1,
        size = (unsigned)strtoul(limit, &end, 10);

    if (end[0]) {
        char spec = (char)std::toupper(*end);

        if ('.' == spec) {                      // x.x
            char *end2 = 0;
#if defined(__WATCOMC__)        //XXX: strtof() linkage issues
            bits = (float)std::strtod(end, &end2);
#else
            bits = std::strtof(end, &end2);
#endif
            spec = end2[0];
        }

        if (spec) {
            if ('B' == spec) {
            } else if ('K' == spec) {
                units = 1024;
            } else if ('M' == spec) {
                units = 1024 * 1024;
            } else if ('G' == spec) {
                units = 1024 * 1024 * 1024;
            } else {
                units = 0;                      // error
            }
        }
    }

    if (ULONG_MAX == size || !units)
        return false;

    result = (unsigned)(size * units);          // whole units
    if (bits && units > 1)                      // partial
        result += (unsigned)(bits * units);

    return true;
}


//static
bool
Logger::parse_time_limit(const char *limit, unsigned &result)
{
    assert(limit);
    if (!limit) return false;

    int ret;

    // hh:mm[:ss]
    if (std::strchr(limit, ':')) {
        unsigned hour, minute, second;

        if ((ret = std::sscanf(limit, "%2u:%2u:%2u", &hour, &minute, &second)) >= 2) {
            result = (hour * 60 * 60) + (minute * 60) + (3 == ret ? second : 0);
            return true;
        }
        return false;
    }

    // <value><unit>
    char *end = 0;
    float bits = 0;
    unsigned long units = 1,
        age = (unsigned)strtoul(limit, &end, 10);

    if (end[0]) {
        char spec = (char)std::toupper(*end);

        if ('.' == spec) {                      // x.x
            char *end2 = 0;
#if defined(__WATCOMC__)        //XXX: strtof() linkage issues
            bits = (float)std::strtod(end, &end2);
#else
            bits = std::strtof(end, &end2);
#endif
            spec = end2[0];
        }

        if (spec) {
            if ('S' == spec) {
            } else if ('M' == spec) {
                units = 60;
            } else if ('H' == spec) {
                units = 60*60;
            } else if ('D' == spec) {
                units = 24*60*60;
            } else {
                units = 0;                      // error
            }
        }
    }

    if (ULONG_MAX == age || !units)
        return false;

    result = (unsigned)(age * units);           // whole
    if (bits && units > 1)                      // partial
        result += (unsigned)(bits * units);

    return true;
}

//end
