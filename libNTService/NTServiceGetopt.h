#pragma once
#ifndef NTSERVICEGETOPT_H_INCLUDED
#define NTSERVICEGETOPT_H_INCLUDED

/*
 *  Unix like getopt_long()
 *
 *  Diagnostic Messages:
 *
 *      o short
 *
 *          "%s: unknown option -- %c"
 *          "%s: option requires an argument -- %c"
 *
 *      o long
 *
 *          %s: unknown option -- %s"
 *          %s: option requires an argument -- %s"
 *          %s: option doesn't take an argument -- %s"
 *          %s: ambiguous option -- %s"
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>

#include "NTServiceIO.h"

namespace NTService {

class Getopt {
        Getopt(const class Getopt &) /*=delete*/;
        Getopt& operator=(const Getopt &) /*=delete*/;

public:
        enum argument_flag {
                argument_none = 1,
                argument_required,
                argument_optional,
        };

        enum error_code {
                OPT_UNKNOWN = 1,
                OPT_ARGUMENT_REQUIRED,
                OPT_NO_ARGUMENT,
                OPT_AMBIGUOUS
        };

        struct Option {
                const char *name;               /* name of long option */
                /*
                 *  one of no_argument, required_argument, and optional_argument:
                 *  whether option takes an argument
                 */
                enum argument_flag has_arg;
                int *flag;                      /* if not NULL, set *flag to val when option found */
                int val;                        /* if flag not NULL, value to set *flag to; else return value */
        };

public:
        Getopt(NTService::IDiagnostics &diags, const char *ostr, const char *progname = NULL) :
                    diags_(diags),
                    ostr_(ostr), long_options_(NULL),
                    progname_(progname),
                    place_(NULL), optarg_(NULL), optind_(1), longindex_(-1), optopt_(0), optret_(0),
                    optmissing_('?'), opterr_(1) {

                assert(ostr_);
                if (ostr_ && ':' == ostr[0]) {
                        optmissing_ = ':';
                        opterr_ = 0;
                        ++ostr;
                }
        }

        Getopt(NTService::IDiagnostics &diags, const char *ostr, struct Option *long_options, const char *progname = 0) :
                    diags_(diags),
                    ostr_(ostr), long_options_(long_options),
                    progname_(progname),
                    place_(NULL), optarg_(NULL), optind_(1), longindex_(-1), optopt_(0), optret_(0),
                    optmissing_('?'), opterr_(1) {

                assert(ostr_);
                if (ostr_ && ':' == ostr_[0]) {
                        optmissing_ = ':';
                        opterr_ = 0;
                        ++ostr_;
                }
        }

        const char *progname() const {
                return progname_;
        }

        int optret() const {
                return optret_;
        }

        int optind() const {
                return optind_;
        }

        int optopt() const {
                return optopt_;
        }

        const char *optarg() const {
                return optarg_;
        }

        void opterr(int flag) {
                opterr_ = flag;
        }

        int opterr() const {
                return opterr_;
        }

        int longindex() const {
                return longindex_;
        }

        int shift(int nargc, const char * const *nargv) {
                return optret_ = pop_argument(nargc, nargv);
        }

public:
        virtual void error_report(enum error_code code, const char *message) {
                diags_.error(message);
        }

private:
        int pop_argument(int nargc, const char * const *nargv) {
                assert(nargc >= 1);
                assert(nargv);

                longindex_ = -1;
                int ret = short_argument(nargc, nargv);
                if (-100 == ret) {
                        if (! long_options_) {
                                return EOF;         // "--", we are done
                        }
                        ret = long_argument(nargc, nargv);
                }
                return ret;
        }

        int short_argument(int nargc, const char * const *nargv) {
                const char *oli = NULL;

                if (NULL == place_ || !*place_) {
                        if (1 == optind_ && !progname_) {
                                progname_ = (NULL != (progname_ = strrchr(nargv[0], '/'))) ||
                                (NULL != (progname_ = strrchr(nargv[0], '\\'))) ? progname_ + 1 : nargv[0];
                        }

                        if (NULL == ostr_ || nargc < 1) {
                                return EOF;
                        }

                        if (optind_ >= nargc || *(place_ = nargv[optind_]) != '-' || !*++place_) {
                                place_ = NULL;
                                return EOF;
                        }

                        if (*place_ == '-') {       // "--", we are done
                                ++optind_;
                                return -100;
                        }
                }


                if ((optopt_ = (int)*place_++) == (int)':' || NULL == (oli = strchr(ostr_, optopt_))) {
                        if (!*place_) ++optind_;
                        short_fatal(OPT_UNKNOWN, "unknown option");
                        return (int)'?';
                }

                if (*++oli != ':') {
                        optarg_ = NULL;
                        if (!*place_) ++optind_;
                } else {
                        if (*place_) {
                                optarg_ = place_;

                        } else if (nargc <= ++optind_) {
                                short_fatal(OPT_ARGUMENT_REQUIRED, "option requires an argument");
                                place_ = optarg_ = NULL;
                                return optmissing_;

                        } else {
                                optarg_ = nargv[optind_];
                        }

                        place_ = NULL;
                        ++optind_;
                }
                return optopt_;
        }


        int
        long_argument(int nargc, const char * const *nargv) {
                const char *arg, *has_equal;
                int ambiguous = 0, match = -1, arglen, i;

                arg = place_ + 1;
                if (*arg == '\0') {
                        return EOF;
                }

                match = -1;
                ambiguous = 0;
                place_ = "";

                if ((has_equal = strchr(arg, '=')) != NULL) {
                        arglen = has_equal - arg;
                        ++has_equal;
                } else {
                        arglen = (int)strlen(arg);
                }

                for (i = 0; long_options_[i].name; ++i) {
                        /* find matching long option */
                        if (strncmp(arg, long_options_[i].name, arglen))
                            continue;

                        if (strlen(long_options_[i].name) == (unsigned)arglen) {
                            match = i;
                            ambiguous = 0;
                            break;
                        }

                        /* partial match */
                        if (match == -1)
                            match = i;
                        else ambiguous = 1;
                }

                if (ambiguous) {
                        long_fatal(OPT_AMBIGUOUS, "ambiguous option", arg, arglen);
                        optopt_ = 0;
                        return (int)'?';
                }

                if (match != -1) {
                        if (long_options_[match].has_arg == argument_none && has_equal) {
                                long_fatal(OPT_NO_ARGUMENT, "option doesn't take an argument", arg, arglen);
                                optopt_ = (NULL == long_options_[match].flag ? long_options_[match].val : 0);
                                return optmissing_;
                        }

                        if (long_options_[match].has_arg == argument_required ||
                            long_options_[match].has_arg == argument_optional) {
                                if (has_equal) {
                                        optarg_ = has_equal;

                                } else if (long_options_[match].has_arg == argument_required) {
                                        // optional argument doesn't use next nargv
                                        optarg_ = nargv[optind_++];
                                }
                        }

                        if ((long_options_[match].has_arg == argument_required) && (NULL == optarg_)) {
                                // Missing argument; leading ':' indicates no error should be generated
                                long_fatal(OPT_ARGUMENT_REQUIRED, "option requires an argument", arg);
                                optopt_ = (NULL == long_options_[match].flag ? long_options_[match].val : 0);
                                --optind_;
                                return optmissing_;
                        }

                } else {
                        long_fatal(OPT_UNKNOWN, "unknown option", arg);
                        optopt_ = 0;
                        return (int)'?';
                }

                longindex_ = match;
                if (long_options_[match].flag) {
                        *long_options_[match].flag = long_options_[match].val;
                        return 0;
                }

                return optopt_ = long_options_[match].val;
        }

private:
        void
        short_fatal(enum error_code code, const char *msg) {
                if (!opterr_) return;

                char buffer[1024];
                (void) _snprintf(buffer, sizeof(buffer), "%s: %s -- %c", progname(), msg, optopt_);
                buffer[sizeof(buffer) - 1] = 0;
                error_report(code, buffer);
        }

        void
        long_fatal(enum error_code code, const char *msg, const char *arg, int arglen = -1) {
                if (!opterr_) return;

                char buffer[1024];
                if (arglen < 0) arglen = strlen(arg);
                (void) _snprintf(buffer, sizeof(buffer), "%s: %s -- %.*s", progname(), msg, arglen, arg);
                buffer[sizeof(buffer) - 1] = 0;
                error_report(code, buffer);
        }

private:
        NTService::IDiagnostics &diags_;
        const char *ostr_;
        struct Option *long_options_;
        const char *progname_;
        const char *place_;
        const char *optarg_;
        int optind_;
        int longindex_;
        int optopt_;
        int optret_;
        int optmissing_;
        int opterr_;
};

}   //namspace NTService

#endif  NTSERVICEGETOPT_HPP_INCLUDED


