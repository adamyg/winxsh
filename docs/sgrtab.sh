#!/bin/sh
# sgrtab - Display standard/custom table of SGR combinations (terminal colors)
# Copyright 2017, Avi Halachmi  https://github.com/avih/sgrtab  License: MIT.

if [ "$1" = '-h' ] || [ "$1" = '--help' ]; then
    echo "Usage: $(basename "$0") [[-g] G1..] [-m MODE] [-t TXT [-w W]] [-[xXyYzZ] S1..] ..."
    echo "Display terminal colors (SGR sequences) in various modes."
    echo "  MODE : table(default)/256/true/info"
    echo "  G1.. : Global individual SGR modifiers added to all table cells."
    echo
    echo "-m MODE or --MODE:"
    echo "  256  : 256 colors indexed palette (accepts -g, ignores others)."
    echo "  true : true-colors surface (accepts -[gt], ignores others)."
    echo "  info : attributes and their SGR codes (accepts -[gty], ignores others)."
    echo "  table: (default) display standard/custom table of terminal colors:"
    echo "   - The Z axis repeats each row with the different z values."
    echo "   - Default: X: 40-47 (bg colors), Y: 30-37 (fg), Z: -/1 (normal/bold)."
    echo
    echo "TXT   : Sample text. The default is ' gYw ', or ' ' with mode 'true'."
    echo "W     : On-screen width of txt (work around locale/alignment issues)."
    echo "S1..  : Axis SGR sequences. Use '-' as an empty sequence."
    echo "-[xyz]: S1 S2 ... are added to the axis. -[XYZ]: replace axis values."
    echo "Each cell uses an SGR sequence of: [x-seq][y-seq][z-seq][G1;G2...] ."
    echo "Example: $(basename "$0") -g 3 -y 7 '33;7' -X '- 2 4 48;5;40'"
    echo "         > global italic (3), two extra rows (-y), four columns (-X).";
    exit
fi

T=" gYw "
X="- 40 41 42 43 44 45 46 47"
Y="- 30 31 32 33 34 35 36 37"
Z="- 1"
G=     # global modifiers ("g1;g2...")
W=     # on-screen text width. set if different than ${#T} e.g. maybe for UTF8
ylen=2 # the widest y sequence, for row-headers alignment. considers ${#G} too
zlen=2 # widest non-empty z +1, or 0 if empty (empty z headers are suppressed)
mode=table  # table/256/true/info

# for SGR. ignore empty or -* args, combine the rest with semicolon delimiter.
# hot function. sets seq_out rather than printing from a (slow) subshell.
seq_set() {
    seq_out=
    for c; do
        [ "${c##-*}" ] && seq_out="$seq_out;$c"
    done
    seq_out="${seq_out#;}"  # strip leading ';' from first concat
}

# from (CLI) args: possibly update T/W/G/X/Y/Z/ylen/zlen with minimal validation
process_args() {
    ylen=0 zlen=0 state=g
    for a; do
        case $a in
        -[twgxyzm])
            state=${a#-}; continue;;
        -[XYZ])
            state=${a#-}; eval $state=; continue;;
        --table|--256|--true|--info)
            state=m; a=${a#??};;  # fall to the next case..esac
        esac
        case $state in
            t) T="$a";;
            w) W="$a";;
            g) G="$G $a";;
          x|X) X="$X $a";;
          y|Y) Y="$Y $a";;
          z|Z) Z="$Z $a";;
            m) mode=$a
               [ "$mode" = true ] && T=" "
               [ "$mode" = info ] && Y= ;;
        esac
        case $state in t|w|m) state=g; esac  # one arg, back to -g
    done
    case "$W$G$X$Y$Z" in *[!0-9\ \;-]*) echo Invalid arguments; exit 1; esac
    seq_set $G; G="$seq_out"
    has $X || X=-;  has $Y || [ $mode = info ] || Y=-;  has $Z || Z=-;  # be nice.
    for a in $Y; do [ ${#a} -gt $ylen ] && ylen=${#a}; done
    for a in $Z; do
        [ "${a##-*}" ] && [ ${#a} -ge $zlen ] && zlen=$((1 + ${#a}))
    done
    [ "$G" ] && [ ${#G} -gt $(($ylen + $zlen - 1)) ] && ylen=$((${#G} + 1 - $zlen))
}

# args: field width, text width, fmt, args... . pad pre/post spaces if shorter
print_center() {
    [ $1 -le $2 ] && shift 2 && printf "$@" && return

    post=$(( ($1 - $2) / 2 ))  # post is smaller if non-even
    pre=$(( $1 - $post - $2 ))
    fmt="$3"; shift 3
    printf "%${pre}s$fmt%${post}s" "" "$@" ""
}

has() { [ $# -gt 0 ]; }
print_row_header() { printf " %${ylen}s%${zlen}s" "$1" "${2##-*}"; }

# -- main --
has "$@" && process_args "$@"
[ "$W" ] || W=${#T}
echo() { printf %s\\n ${1+"$*"}; }

case $mode in
256) ESC=$(printf \\033)
    # $1: from, $2: len, $3: FG color sequence
    print_256_line() {
        i=$1 out=
        while [ $i -lt $(($1+$2)) ]; do
            case ${#i} in 1) pad="  ";; 2) pad=" ";; 3) pad=; esac
            out=$out"$ESC[$3m$ESC[48;5;${i}m${G:+$ESC[${G}m} $pad$i$ESC[m"
            i=$((i+1))
        done; echo "$out"
    }

    black="38;5;16"
    white="38;5;231"

    print_256_line 0 8 $black
    print_256_line 8 8 $black
    for from in 16 52 88 124 160 196 34 70 106 142 178 214; do
        case $from in 16|52|88|124|160|196) fg=$white;; *) fg=$black; esac
        print_256_line $from 18 $fg
    done
    print_256_line 232 12 $white
    print_256_line 244 12 $black
    ;;

true) ESC=$(printf \\033)
    y=1
    while [ $y -le 16 ]; do
        x=1 out=
        while [ $x -le 64 ]; do
            top=$((256-y*16)); left=$((256-x*4)); bottomright=$((x*2+y*8-1))
            out=$out"$ESC[48;2;${top};${left};${bottomright}m${G:+$ESC[${G}m}$T$ESC[m"
            x=$((x+1))
        done; echo "$out"
        y=$((y+1))
    done
    ;;

info) ESC=$(printf \\033)
    # $1: title, $2...: SGR code[s] to append
    print_var_line() {
        printf "%${ylen}s " "$1"; shift
        out=
        for x in - 30 31 32 33 34 35 36 37; do
            seq_set $* $x $G
            out=$out"$ESC[${seq_out}m$T$ESC[m"
        done; echo "$out"
    }

    # blink(5) and bright fg/bg (90-97,100-107) should be be used, so we don't
    ylen=28
    print_var_line "Normal"
    print_var_line "Bold (1)" 1
    print_var_line "Inverse (7)" 7
    print_var_line "Bold + Inverse (1;7)" "1;7"
    print_var_line "Italic (3)" 3
    print_var_line "Underline (4)" 4
    print_var_line "Crossed-out (9)" 9
    print_var_line "Dim (2)" 2
    print_var_line "Conceal (8)" 8

    v2q() { q=$(($1<48 ? 0 : $1<115 ? 1 : ($1-35)/40  )); }  # 0-255 -> 0-5
    printf "%${ylen}s " "256 colors (38/48;5;N)"
    i=0 out=
    while [ $i -lt 45 ]; do
        v2q $((255-i*5)); r=$q
        v2q $((20+i*5));  b=$q
        out=$out"$ESC[48;5;$((16 + 36*r + 6*0 + b))${G:+;$G}m $ESC[m"
        i=$((i+1))
    done; echo "$out"

    printf "%${ylen}s " "True colors (38/48;2;R;G;B)"
    i=0 out=
    while [ $i -lt 45 ]; do
        out=$out"$ESC[48;2;$((255-i*5));0;$((20+i*5))${G:+;$G}m $ESC[m"
        i=$((i+1))
    done; echo "$out"

    for y in $Y; do
        print_var_line "($y)" "$y"
    done
    ;;

table)
    [ "$G" ] && printf " %$(($ylen + $zlen))s" "+$G" || print_row_header "" ""
    for x in $X; do
        print_center $W ${#x} " %s" $x  # headers line. center narrow headers
    done; echo

    for y in $Y; do
        for z in $Z; do
            print_row_header $y $z
            for x in $X; do
                seq_set $x $y $z $G
                print_center ${#x} $W " \033[%sm%s\033[m" "$seq_out" "$T"
            done; echo
        done
    done
    ;;

*) >&2 printf "Invalid mode '%s'\n" "$mode"; exit 1
esac
