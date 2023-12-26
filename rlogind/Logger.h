#pragma once
#ifndef LOGGER_H_INCLUDED
#define LOGGER_H_INCLUDED
/* -*- mode: c; indent-width: 8; -*- */
/*
 * Simple logger
 *
 * Copyright (c) 2020 - 2023, Adam Young.
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

#include <sys/queue.h>

#if defined(_MSC_VER)
#include <msvc_system_error.hpp>
#endif
#include <string>
#include <memory>

#include "w32support.h"


/////////////////////////////////////////////////////////////////////////////////////////
//  Application logger

class Logger {
    BOOST_DELETED_FUNCTION(Logger(const class Logger &))
    BOOST_DELETED_FUNCTION(Logger& operator=(const Logger &))

public:
    class LoggerImpl;

    // Logger profile/configuration
    class Profile {
    public:
        static const unsigned MIN_SIZE_LIMIT = 32 * 1024; // 32Kb
        static const unsigned DEF_SIZE_LIMIT = 1024 * 1024; // 1Mb
        static const unsigned MAX_SIZE_LIMIT = 1024 * 1024 * 1024; // 1Gb
        static const unsigned MIN_TIME_LIMIT = 5 * 60; // 5 minutes
        static const unsigned DEF_TIME_LIMIT = 4 * 60 * 60; // 4 hours
        static const unsigned MAX_TIME_LIMIT = 7 * 24 * 60 * 60; // 7 days
        static const unsigned MIN_LINE_LIMIT = 1000;
        static const unsigned DEF_LINE_LIMIT = 0;

    public:
        Profile();

        void toconsole(bool state);
        void base_path(const std::string &path);
        void base_path(const char *path);
        bool size_limit(const char *limit = 0);
        bool line_limit(const char *limit = 0);
        bool time_period(const char *period = 0);
        void time_rounding(bool state, const char *epoch = 0);
        bool purge_period(const char *period = 0);

        const char *base_path() const;

    private:
        friend class LoggerImpl;
        std::string base_path_;
        bool toconsole_;
        unsigned size_limit_;
        unsigned time_period_;
        unsigned line_limit_;
        unsigned time_epoch_;
        bool time_rounding_;
        unsigned purge_period_;
    };

protected:
    // Managed buffer cursor
    struct BufferCursor {
    public:
        BufferCursor() : magic_(0), reserved_(0), size_(0), data_(0), parent_(0) {
        }
        bool is_valid() const
            { return (data_ != 0); }
        const char *data() const
            { return data_; }
        void append(const void *buffer, size_t buflen);
        void append_nl();
        void assign(const void *buffer, size_t buflen);
        void assign_nl(const void *buffer, size_t buflen);
        char *data()
            { return data_; }
        unsigned reserved() const
            { return reserved_; }
        unsigned size() const
            { return size_; }
    public:
        TAILQ_ENTRY(BufferCursor) __entry;      // intrusive queue member; private
    private:
        BOOST_DELETED_FUNCTION(BufferCursor(const BufferCursor &))
        BOOST_DELETED_FUNCTION(BufferCursor& operator=(const BufferCursor &))
        ~BufferCursor() {
        }
        friend class LoggerImpl;
        unsigned magic_, reserved_, size_;
        char *data_;
        void *parent_;
    };

public:
    // log on the console, if not open.
    static const unsigned CONSOLE_DEFAULT = 0x01;

    // log to stderr as well, synchronously
    static const unsigned CONSOLE_SYNCHRONOUS = 0x02;

    // log to stderr as well, asynchronously (via streamer)
    static const unsigned CONSOLE_ASYNCHRONOUS = 0x04;

    struct liovec {
        void * liov_base;
        size_t liov_len;
    };

public:
    Logger(unsigned flags = Logger::CONSOLE_DEFAULT);
    virtual ~Logger();

    void attach_to_syslog();
    bool start(const Profile &profile);
    void stop();
    bool push(const char *buffer, size_t length);
    bool pushv(const struct liovec *iov, int iovcnt);

public:
    static bool parse_size_limit(const char *limit, unsigned &result);
    static bool parse_time_limit(const char *limit, unsigned &result);

private:
    std::shared_ptr<LoggerImpl> impl_;
    unsigned flags_;
};

#endif  //LOGGER_H_INCLUDED

//end
