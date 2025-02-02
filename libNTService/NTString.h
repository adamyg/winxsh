#pragma once
#ifndef NTSTRING_H_INCLUDED
#define NTSTRING_H_INCLUDED
/*
 * CNTService - Classic window services framework (tweaked).
 *
 * Copyright (c) 2020 - 2025, Adam Young.
 * All rights reserved.
 *
 * Simple String - OpenWATCOM has unresolved dbgsym linker issues with <string>.
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
 * license for more details.
 * ==end==
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

namespace NTService {

class CString
{
        const char *buffer_;
        unsigned length_;

public:
        CString() : buffer_(NULL), length_(0)
        {
        }

        CString(const char *buffer) : buffer_(NULL), length_(0)
        {
               assign(buffer);
        }

        CString(const char *buffer, unsigned length) : buffer_(NULL), length_(0)
        {
                assign(buffer, length);
        }

        CString(const CString &other) : buffer_(NULL), length_(0)
        {
                assign(other.buffer_, other.length_);
        }

        ~CString()
        {
                clear();
        }

        CString& operator=(const CString& other)
        {
                if (this != &other) {
                        assign(other.buffer_, other.length_);
                }
                return *this;
        }

        CString& operator+=(const CString& other)
        {
                append(other.buffer_, other.length_);
                return *this;
        }

        CString& operator+=(const char *buffer)
        {
                append(buffer);
                return *this;
        }

        friend CString operator+(CString a, const CString &b)
        {
                a += b;
                return a;
        }

        bool operator==(const CString& other) const
        {
                return (length_ == other.length_ && 0 == ::memcmp(buffer_, other.buffer_, length_));
        }

        bool operator!=(const CString& other) const
        {
                return !(*this == other);
        }

        void assign(const char *buffer, unsigned length)
        {
                if (NULL == buffer)
                {
                        ::free((void *)buffer_);
                        buffer_ = NULL;
                        length_ = 0;
                        return;
                }

                char *t_buffer = (char *) ::malloc(length + 1 /*NUL*/);
                memcpy(t_buffer, buffer, length);
                t_buffer[length] = 0;

                ::free((void *)buffer_);
                buffer_ = t_buffer;
                length_ = length;
        }

        void assign(const char *buffer)
        {
                assign(buffer, strlen(buffer));
        }

        void append(const char *buffer, unsigned length)
        {
                const unsigned t_length = length_ + length;
                char *t_buffer = (char *) ::malloc(t_length + 1 /*NUL*/);

                memcpy(t_buffer, buffer_, length_);
                memcpy(t_buffer + length_, buffer, length);
                t_buffer[t_length] = 0;

                free((void *)buffer_);
                buffer_ = t_buffer;
                length_ = t_length;
        }

        void append(const char *buffer)
        {
                append(buffer, strlen(buffer));
        }

        void clear()
        {
                ::free((void *)buffer_);
                buffer_ = NULL;
                length_ = 0;
        }

        const char *c_str() const
        {
                return buffer_;
        }

        const char *data() const
        {
                return buffer_;
        }

        unsigned length() const
        {
                return length_;
        }

        bool empty() const
        {
                return (0 == length_);
        }
};

} // namespace NTService

#endif  // NTSTRING_H_INCLUDED
