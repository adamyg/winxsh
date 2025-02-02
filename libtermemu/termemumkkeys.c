/*

Copyright (c) 2015 - 2025, Adam Young.
Copyright 1990, 1998 The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall
not be used in advertising or otherwise to promote the sale, use or
other dealings in this Software without prior written authorization
from The Open Group.

*/

static const char 
mkkeys_ident[] = "$Id: termemumkkeys.c,v 1.7 2025/02/02 16:52:25 cvsuser Exp $";

#if !defined(_CRT_SECURE_NO_WARNINGS)
#define  _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define KTNUM 4999

#define XKB_KEY_NoSymbol 0
#define XKB_VoidSymbol 0xffffff

typedef unsigned long Signature;        /* note: print's below */
typedef unsigned long KeySym;
static struct info {
    const char *    name;
    KeySym          val;
    int             nonunique;
    unsigned        unicode;
    const char *    comment;
} info[KTNUM];

#define MIN_REHASH 15
#define MATCHES 10

static char tab[KTNUM];
static unsigned short indexes[KTNUM];   /* object offset into object-table */
static unsigned short objects[KTNUM];   /* idx of object; hash order */
static unsigned short offsets[KTNUM];   /* offset of object (sourced from indexes); hash order */
static unsigned short dups[KTNUM];      /* duplicate objects */
static KeySym values[KTNUM];
static int ksnum = 0;

static int
parse_line(const char *buf, char *key, KeySym *val, unsigned *unicode, char *prefix, char *comment)
{
    int i;
    char alias[128];
    char *tmp, *tmpa;

    /* Common optional "[U+xxxx] DESCRIPTION" comment */
    *unicode = 0;
    comment[0] = 0;
    if (NULL != (tmp = strstr(buf, "/*"))) {

        tmp += 2;
        while (' ' == *tmp) ++tmp;

        if (tmp[0] == 'U' && tmp[1] == '+') {
            tmp += 2;
            if (1 == sscanf(tmp, "%4x ", unicode)) {
                tmp += 5;
            }
        }

        if (NULL != (tmpa = strstr(buf, "*/"))) {
            for (--tmpa; tmpa >= tmp;) {
                if (' ' != *tmpa) break;
                --tmpa;
            }

            if (tmpa >= tmp) {
                memcpy(comment, tmp, ++tmpa - tmp);
                comment[tmpa - tmp] = '\0';
            }
        }
    }

    /* See if we can catch a straight XK_foo 0x1234-style definition first;
     * the trickery around tmp is to account for prefices. */
    i = sscanf(buf, "#define %127s 0x%lx", key, val);
    if (i == 2 && (tmp = strstr(key, "XK_"))) {
        memcpy(prefix, key, tmp - key);
        prefix[tmp - key] = '\0';
        tmp += 3;
        memmove(key, tmp, strlen(tmp) + 1);
        return 1;

    } else if (i == 2 && (tmp = strstr(key, "XKB_"))) {
        memcpy(prefix, key, tmp - key);
        prefix[tmp - key] = '\0';
        tmp += 4;
        memmove(key, tmp, strlen(tmp) + 1);
        return 1;
    }

    /* Now try to catch alias (XK_foo XK_bar) definitions, and resolve them
     * immediately: if the target is in the form XF86XK_foo, we need to
     * canonicalise this to XF86foo before we do the lookup. */
    i = sscanf(buf, "#define %127s %127s", key, alias);
    if (i == 2 && (tmp = strstr(key, "XK_")) && (tmpa = strstr(alias, "XK_"))) {
        memcpy(prefix, key, tmp - key);
        prefix[tmp - key] = '\0';
        tmp += 3;
        memmove(key, tmp, strlen(tmp) + 1);
        memmove(tmpa, tmpa + 3, strlen(tmpa + 3) + 1);

        for (i = ksnum - 1; i >= 0; i--) {
            if (strcmp(info[i].name, alias) == 0) {
                *val = info[i].val;
                return 1;
            }
        }
        fprintf(stderr, "can't find matching definition %s for keysym %s%s\n", alias, prefix, key);

    } else if (i == 2 && (tmp = strstr(key, "XKB_")) && (tmpa = strstr(alias, "XKB_"))) {
        memcpy(prefix, key, tmp - key);
        prefix[tmp - key] = '\0';
        tmp += 3;
        memmove(key, tmp, strlen(tmp) + 1);
        memmove(tmpa, tmpa + 3, strlen(tmpa + 3) + 1);

        for (i = ksnum - 1; i >= 0; i--) {
            if (strcmp(info[i].name, alias) == 0) {
                *val = info[i].val;
                return 1;
            }
        }
        fprintf(stderr, "can't find matching definition %s for keysym %s%s\n", alias, prefix, key);
    }

    return 0;
}

static void
usage(void)
{
    printf("termemumkkeys - keysym database generator\n" \
        "\n" \
        "usage: termemumkkeys [-p] keysymheader ..\n" \
        "\n" \
        "   -p      pretty print; makes exported table more human readable.\n" \
        "\n");
    exit(3);
    /*NOTREACHED*/
}

static void
printinfo(int idx, const struct info *info)
{
    printf(" /* %4d, 0x%x", idx, info->val);
    if (info->unicode) printf(", U+%04x", info->unicode);
    printf(", %s", info->name);
    if (info->comment) printf(", %s", info->comment);
    printf(" */");
}

static int
sort_dups(const void *a, const void *b)
{
    return ((int)info[*((const unsigned short *)a)].val - (int)info[*((const unsigned short *)b)].val);
}

int
main(int argc, char *argv[])
{
    int pretty = 0;
    int max_rehash;
    Signature sig;
    int i, j, k, l, z;
    int dsnum, dup_max;
    FILE *fptr;
    const char *name;
    char c;
    int first;
    int best_max_rehash, best_z;
    int num_found;
    KeySym val, uc;
    unsigned unicode;
    char key[128], prefix[128], comment[256];
    static char buf[1024];
    time_t now;

    for (l = 1; l < argc && argv[l][0] == '-'; ++l) {
        if (0 == argv[1][2]) { //single character options
            switch(argv[l][1]) {
            case 'p':
                pretty = 1;
                break;
            case '?':
                usage();
            default:
                fprintf(stderr, "mkkeys: invalid option -- %s\n", argv[l]);
                usage();
            }
        } else { //others
            fprintf(stderr, "mkkeys: invalid option -- %s\n", argv[l]);
            usage();
        }
    }

    /*
     *  Import key-symbols.
     */
    for (; l < argc; ++l) {
        fptr = fopen(argv[l], "r");
        if (!fptr) {
            fprintf(stderr, "couldn't open %s\n", argv[l]);
            continue;
        }

        while (fgets(buf, sizeof(buf), fptr)) {
            if (!parse_line(buf, key, &val, &unicode, prefix, comment))
                continue;

            if (val == XKB_KEY_NoSymbol) continue;
            if (val == XKB_VoidSymbol) val = 0;
            if (val > 0x1fffffff) {
                fprintf(stderr, "ignoring illegal keysym (%s, %lx)\n", key, val);
                continue;
            }

            if (NULL == (name = malloc(strlen(prefix) + strlen(key) + 1))) {
                fprintf(stderr, "mkkeys: out of memory!\n");
                exit(1);
            }

            sprintf((void *)name, "%s%s", prefix, key);
            info[ksnum].name    = name;
            info[ksnum].val     = val;
            info[ksnum].unicode = unicode;
            info[ksnum].comment = (comment[0] ? _strdup(comment) : NULL);
            ksnum++;
            if (ksnum == KTNUM) {
                fprintf(stderr, "mkkeys: too many keysyms!\n");
                exit(1);
            }
        }

        fclose(fptr);
    }

    /*
     *  Build KeyName to object index
     */
    best_max_rehash = ksnum;
    num_found = 0;
    best_z = 0;
    for (z = ksnum; z < KTNUM; z++) {
        max_rehash = 0;
        memset(tab, 0, sizeof(tab));
        for (i = 0; i < ksnum; i++) {
            name = info[i].name;
            sig = 0;
            while ((c = *name++))
                sig = (sig << 1) + c;
            first = j = sig % z;
            for (k = 0; tab[j]; k++) {
                j += first + 1; //duplicate; rehash
                if (j >= z)
                    j -= z;
                if (j == first)
                    goto next1; //too many collisions; restart
            }
            tab[j] = 1;
            if (k > max_rehash)
                max_rehash = k;
        }
        if (max_rehash < MIN_REHASH) {
            if (max_rehash < best_max_rehash) {
                best_max_rehash = max_rehash;
                best_z = z;
            }
            num_found++;
            if (num_found >= MATCHES)
                break;
        }
next1:  ;
    }

    z = best_z;
    if (z == 0) {
        fprintf(stderr, "mkkeys: failed to find small enough hash!\n"
                "Try increasing KTNUM in mkkeys\n");
        exit(1);
    }

    /*
     *  Export key object table.
     */
    now = time(NULL);
    printf("/* This file is generated from <mkkeys> on %.24s */\n", ctime(&now));
    printf("/* termemumkkeys: %.*s */\n", (int)(strlen(mkkeys_ident) - 6), mkkeys_ident + 5);
    printf("/* $" "Id: $ */\n");
    printf("/* ------------------------ do not edit ------------------------ */\n");
    printf("\n" \
"/*\n" \
" *  Object Structure:\n" \
" * \n" \
" *     struct ktableobject {\n" \
" *         unsigned char sg[2];     // signature: 0 .. 1\n" \
" *         unsigned char ks[4];     // keysymbol: 2 .. 5\n" \
" *         unsigned char uc[3];     // unicode:   6 .. 8 (1 - 0x10ffff)\n" \
" *         unsigned char nm[1];     // name:      9 .. #<nul>\n" \
" *     };\n" \
" * \n" \
" */\n" \
"#define KTABLESG 0\n" \
"#define KTABLEKS 2\n" \
"#define KTABLEUC 6\n" \
"#define KTABLENM 9\n" \
"\n");
    printf("#ifdef NEEDKTABLE\n");
    printf("static const unsigned char _XkeyTable[] = {\n");
    printf("0,\n");
    k = 1;
    for (i = 0; i < ksnum; i++) {
        name = info[i].name;
        sig = 0;
        while ((c = *name++))
            sig = (sig << 1) + c;
        first = j = sig % z;
        while (offsets[j]) {
            j += first + 1;
            if (j >= z)
                j -= z;
        }
        indexes[i] = k;
        objects[j] = i;
        offsets[j] = k;
        val = info[i].val;
        uc  = info[i].unicode;

        printf("0x%.2lx, 0x%.2lx, 0x%.2lx, 0x%.2lx, 0x%.2lx, 0x%.2lx, 0x%.2lx, 0x%.2lx, 0x%.2lx, ",
               (sig >> 8)  & 0xff, (sig &  0xff),
               (val >> 24) & 0xff, (val >> 16) & 0xff, (val >> 8) & 0xff, (val & 0xff),
               (uc >> 16) & 0xff, (uc >> 8) & 0xff, (uc & 0xff));

        for (name = info[i].name, k += (2 + 4 + 3 + 1); (c = *name++); k++)
            printf("'%c',", c);
        printf((i == (ksnum-1)) ? "0" : "0,");
        if (pretty) printinfo(k, info + i);
        printf("\n");
    }
    printf("};\n");
    printf("\n");
    fflush(stdout);

printf("\n"\
"/*\n" \
" *  KeySymbolName to object index.\n" \
" */\n");
    printf("#define KTABLESIZE %d\n", z);
    printf("#define KMAXHASH %d\n", best_max_rehash + 1);
    printf("\n");
    printf("static const unsigned short hashString[KTABLESIZE] = {\n");
        if (pretty) {
            for (i = 0; i < z; ++i) {
                printf("\t0x%.4x,", offsets[i]);
                if (offsets[i]) {
                    k = objects[i], printinfo(k, info + k);
                }
                printf("\n");
            }
            printf("\t};\n");
        } else {
            for (i = 0; i < z;) {
                printf("0x%.4x", offsets[i]);
                i++;
                if (i == z)
                    break;
                printf((i & 7) ? ", " : ",\n");
            }
            printf("\n");
            printf("};\n");
        }
    printf("#endif /* NEEDKTABLE */\n");
    fflush(stdout);

    /*
     *  Build KeySymbol to object index
     */
    best_max_rehash = ksnum;
    num_found = 0;
    best_z = 0;
    for (z = ksnum; z < KTNUM; z++) {
        max_rehash = 0;
        memset(tab, 0, sizeof(tab));
        for (i = 0; i < ksnum; i++) {
            val = info[i].val;
            first = j = val % z;
            for (k = 0; tab[j]; k++) {
                if (values[j] == val) {
                    goto ksskip1; //duplicate; ignored
                }
                j += first + 1;
                if (j >= z)
                    j -= z;
                if (j == first)
                    goto ksnext2; //too many collisions; restart
            }
            tab[j] = 1;
            values[j] = val;
            if (k > max_rehash)
                max_rehash = k;
ksskip1:;
        }
        if (max_rehash < MIN_REHASH) {
            if (max_rehash < best_max_rehash) {
                best_max_rehash = max_rehash;
                best_z = z;
            }
            num_found++;
            if (num_found >= MATCHES)
                break;
        }
ksnext2:;
    }

    z = best_z;
    if (z == 0) {
        fprintf(stderr, "mkkeys: failed to find small enough hash!\n"
                "Try increasing KTNUM in mkkeys\n");
        exit(1);
    }

    memset(offsets, 0, sizeof(offsets));
    memset(objects, 0, sizeof(objects));
    for (i = 0, dsnum = 0; i < ksnum; i++) {
        val = info[i].val;
        first = j = val % z;
        while (offsets[j]) {
            if (values[j] == val) {
                dups[dsnum++] = i; //duplicate report.
		++info[objects[j]].nonunique; //parent non-unique count.
                goto ksskip2; //duplicate; ignored.
            }
            j += first + 1;
            if (j >= z)
                j -= z;
        }
        objects[j] = i;
        offsets[j] = indexes[i];
        values[j]  = val;
ksskip2:;
    }

    /*
     *  Export KeySymbol to object index
     */
printf("\n"\
"/*\n" \
" *  KeySymbol to object index.\n" \
" */\n");
    printf("#ifdef NEEDVTABLE\n");
    printf("#define VTABLESIZE %d\n", z);
    printf("#define VMAXHASH %d\n", best_max_rehash + 1);
    printf("\n");
    printf("static const unsigned short hashKeysym[VTABLESIZE] = {\n");
        if (pretty) {
            for (i = 0; i < z; ++i) {
                printf("\t0x%.4x,", offsets[i]);
                if (offsets[i]) {
                    k = objects[i], printinfo(k, info + k);
                }
                printf("\n");
            }
            printf("\t};\n");
        } else {
            for (i = 0; i < z;) {
                printf("0x%.4x", offsets[i]);
                i++;
                if (i == z)
                    break;
                printf((i & 7) ? ", " : ",\n");
            }
            printf("\n");
            printf("};\n");
        }
    printf("#endif /* NEEDVTABLE */\n");
    fflush(stdout);

    /*
     *  Export duplicate keySymbol to object index
     */
    best_max_rehash = dsnum;
    num_found = 0;
    best_z = 0;
    qsort(dups, dsnum, sizeof(dups[0]), sort_dups);
    for (z = dsnum; z < KTNUM; z++) {
        max_rehash = 0;
        memset(tab, 0, sizeof(tab));
        for (i = 0; i < dsnum; i++) {
            val = info[dups[i]].val;
            first = j = val % z;
            for (k = 0; tab[j]; k++) {
                j += first + 1;
                if (j >= z)
                    j -= z;
                if (j == first)
                    goto dpnext2; //too many collisions; restart
            }
            tab[j] = 1;
            values[j] = val;
            if (k > max_rehash)
                max_rehash = k;
        }
        if (max_rehash < MIN_REHASH) {
            if (max_rehash < best_max_rehash) {
                best_max_rehash = max_rehash;
                best_z = z;
            }
            num_found++;
            if (num_found >= MATCHES)
                break;
        }
dpnext2:;
    }

    z = best_z;
    if (z == 0) {
        fprintf(stderr, "mkkeys: failed to find small enough hash!\n"
                "Try increasing KTNUM in mkkeys\n");
        exit(1);
    }

    memset(offsets, 0, sizeof(offsets));
    memset(objects, 0, sizeof(objects));
    for (i = 0; i < dsnum; i++) {
        max_rehash = 0;
        val = info[dups[i]].val;
        first = j = val % z;
        while (offsets[j]) {
            j += first + 1;
            if (j >= z)
                j -= z;
        }
        objects[j] = dups[i];
        offsets[j] = indexes[dups[i]];
        values[j] = val;
    }

    dup_max = 0;
    for (i = 0; i < ksnum; i++) {
        if (info[i].nonunique > dup_max) {
            dup_max = info[i].nonunique;
        }
    }

printf("\n"\
"/*\n" \
" *  KeySymbol duplicate to object index.\n" \
" */\n");
    printf("#ifdef NEEDDTABLE\n");
    printf("#define DTABLESIZE %d\n", z);
    printf("#define DMAXHASH %d\n", best_max_rehash + 1);
    printf("#define DMAXDUP %d\n", dup_max + 1);
    printf("static const unsigned short hashDupsym[DTABLESIZE] = {\n");
            for (i = 0; i < z; ++i) {
                printf("\t0x%.4x,", offsets[i]);
                if (offsets[i]) {
                    k = objects[i], printinfo(k, info + k);
                }
                printf("\n");
            }
            printf("\t};\n");
    printf("#endif /* NEEDDTABLE */\n");
    fflush(stdout);

    /*
     *  Build KeyUnicode to object index
     */
    best_max_rehash = ksnum;
    num_found = 0;
    best_z = 0;
    for (z = ksnum; z < KTNUM; z++) {
        max_rehash = 0;
        memset(tab, 0, sizeof(tab));
        for (i = 0; i < ksnum; i++) {
            if (0 == (val = info[i].unicode))
                goto ucskip1; //null unicode
            first = j = val % z;
            for (k = 0; tab[j]; k++) {
                if (values[j] == val)
                    goto ucskip1; //duplicate; ignored
                j += first + 1;
                if (j >= z)
                    j -= z;
                if (j == first)
                    goto ucnext2;
            }
            tab[j] = 1;
            values[j] = val;
            if (k > max_rehash)
                max_rehash = k;
ucskip1:;
        }
        if (max_rehash < MIN_REHASH) {
            if (max_rehash < best_max_rehash) {
                best_max_rehash = max_rehash;
                best_z = z;
            }
            num_found++;
            if (num_found >= MATCHES)
                break;
        }
ucnext2:;
    }

    z = best_z;
    if (z == 0) {
        fprintf(stderr, "mkkeys: failed to find small enough hash!\n"
                "Try increasing KTNUM in mkkeys\n");
        exit(1);
    }

    memset(offsets, 0, sizeof(offsets));
    memset(objects, 0, sizeof(objects));
    for (i = 0; i < ksnum; i++) {
        if (0 == (val = info[i].unicode)) {
            goto ucskip2; //null unicode
        }
        first = j = val % z;
        while (offsets[j]) {
            if (values[j] == val)
                goto ucskip2; //duplicate; ignored
            j += first + 1;
            if (j >= z)
                j -= z;
        }
        objects[j] = i;
        offsets[j] = indexes[i];
        values[j] = val;
ucskip2:;
    }

printf("\n"\
"/*\n" \
" *  KeyUnicode to object index.\n" \
" */\n");
    printf("#ifdef NEEDUTABLE\n");
    printf("#define UTABLESIZE %d\n", z);
    printf("#define UMAXHASH %d\n", best_max_rehash + 1);
    printf("\n");
    printf("static const unsigned short hashKeyuc[UTABLESIZE] = {\n");
        if (pretty) {
            for (i = 0; i < z;) {
                printf("\t0x%.4x,", offsets[i]);
                if (offsets[i]) {
                    k = objects[i], printinfo(k, info + k);
                }
                printf("\n");
                ++i;
            }
            printf("\t};\n");
        } else {
            for (i = 0; i < z;) {
                printf("0x%.4x", offsets[i]);
                i++;
                if (i == z)
                    break;
                printf((i & 7) ? ", " : ",\n");
            }
            printf("\n");
            printf("};\n");
        }
    printf("#endif /* NEEDUTABLE */\n");

    exit(0);
}

/*end*/
