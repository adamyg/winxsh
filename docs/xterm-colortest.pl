#!/usr/bin/perl
# by entheon, do whatever the hell you want with this file

if( $ARGV[0] eq "-h" || $ARGV[0] eq "-1;1;0c-help" ) {
    print <<EOS;
XTERM 256 Color Test Chart

xterm-colortest.pl [options]

options:
    -w  wide display.
    -r  reversed; wide only.
    -s  extra space padding; wide only.
    -h  help.

EOS
    exit(3);
}


if( $ARGV[0] eq "-w" || $ARGV[1] eq "-w" || $ARGV[2] eq "-w" ) {

    # ANSI
    print "\nSystem colors (ANSI):\n";
    for ($color = 0; $color < 8; $color++) {
        print "\x1b[4${color}m  ";
    }
    print "\x1b[0m\n";
    for ($color = 0; $color < 8; $color++) {
        print "\x1b[5;4${color}m  ";
    }
    print "\x1b[0m\n\n";

    # System one
    print "\nSystem colors (256 colors):\n";
    for ($color = 0; $color < 8; $color++) {
        print "\x1b[48;5;${color}m  ";
    }
    print "\x1b[0m\n";
    for ($color = 8; $color < 16; $color++) {
        print "\x1b[48;5;${color}m  ";
    }
    print "\x1b[0m\n\n";

    # now the color cube
    print "\nColor cube, 6x6x6:\n";
    for ($green = 0; $green < 6; $green++) {
        for ($red = 0; $red < 6; $red++) {
            for ($blue = 0; $blue < 6; $blue++) {
                $color = 16 + ($red * 36) + ($green * 6) + $blue;
                print "\x1b[48;5;${color}m  ";
            }
            print "\x1b[0m ";
        }
        print "\n";
    }

    # now the grayscale ramp
    print "\nGrayscale ramp:\n";
    for ($color = 232; $color < 256; $color++) {
        print "\x1b[48;5;${color}m  ";
    }
    print "\x1b[0m\n";

    # RGB
    print "\nRGB Table\n";
    push(@arr, [(  "[38;5;16m 16:  00/00/00",     "[38;5;17m 17:  00/00/5f",     "[38;5;18m 18:  00/00/87",     "[38;5;19m 19:  00/00/af",     "[38;5;20m 20:  00/00/d7",     "[38;5;21m 21:  00/00/ff")] );
    push(@arr, [(  "[38;5;22m 22:  00/5f/00",     "[38;5;23m 23:  00/5f/5f",     "[38;5;24m 24:  00/5f/87",     "[38;5;25m 25:  00/5f/af",     "[38;5;26m 26:  00/5f/d7",     "[38;5;27m 27:  00/5f/ff")] );
    push(@arr, [(  "[38;5;28m 28:  00/87/00",     "[38;5;29m 29:  00/87/5f",     "[38;5;30m 30:  00/87/87",     "[38;5;31m 31:  00/87/af",     "[38;5;32m 32:  00/87/d7",     "[38;5;33m 33:  00/87/ff")] );
    push(@arr, [(  "[38;5;34m 34:  00/af/00",     "[38;5;35m 35:  00/af/5f",     "[38;5;36m 36:  00/af/87",     "[38;5;37m 37:  00/af/af",     "[38;5;38m 38:  00/af/d7",     "[38;5;39m 39:  00/af/ff")] );
    push(@arr, [(  "[38;5;40m 40:  00/d7/00",     "[38;5;41m 41:  00/d7/5f",     "[38;5;42m 42:  00/d7/87",     "[38;5;43m 43:  00/d7/af",     "[38;5;44m 44:  00/d7/d7",     "[38;5;45m 45:  00/d7/ff")] );
    push(@arr, [(  "[38;5;46m 46:  00/ff/00",     "[38;5;47m 47:  00/ff/5f",     "[38;5;48m 48:  00/ff/87",     "[38;5;49m 49:  00/ff/af",     "[38;5;50m 50:  00/ff/d7",     "[38;5;51m 51:  00/ff/ff")] );
    push(@arr, [(  "[38;5;52m 52:  5f/00/00",     "[38;5;53m 53:  5f/00/5f",     "[38;5;54m 54:  5f/00/87",     "[38;5;55m 55:  5f/00/af",     "[38;5;56m 56:  5f/00/d7",     "[38;5;57m 57:  5f/00/ff")] );
    push(@arr, [(  "[38;5;58m 58:  5f/5f/00",     "[38;5;59m 59:  5f/5f/5f",     "[38;5;60m 60:  5f/5f/87",     "[38;5;61m 61:  5f/5f/af",     "[38;5;62m 62:  5f/5f/d7",     "[38;5;63m 63:  5f/5f/ff")] );
    push(@arr, [(  "[38;5;64m 64:  5f/87/00",     "[38;5;65m 65:  5f/87/5f",     "[38;5;66m 66:  5f/87/87",     "[38;5;67m 67:  5f/87/af",     "[38;5;68m 68:  5f/87/d7",     "[38;5;69m 69:  5f/87/ff")] );
    push(@arr, [(  "[38;5;70m 70:  5f/af/00",     "[38;5;71m 71:  5f/af/5f",     "[38;5;72m 72:  5f/af/87",     "[38;5;73m 73:  5f/af/af",     "[38;5;74m 74:  5f/af/d7",     "[38;5;75m 75:  5f/af/ff")] );
    push(@arr, [(  "[38;5;76m 76:  5f/d7/00",     "[38;5;77m 77:  5f/d7/5f",     "[38;5;78m 78:  5f/d7/87",     "[38;5;79m 79:  5f/d7/af",     "[38;5;80m 80:  5f/d7/d7",     "[38;5;81m 81:  5f/d7/ff")] );
    push(@arr, [(  "[38;5;82m 82:  5f/ff/00",     "[38;5;83m 83:  5f/ff/5f",     "[38;5;84m 84:  5f/ff/87",     "[38;5;85m 85:  5f/ff/af",     "[38;5;86m 86:  5f/ff/d7",     "[38;5;87m 87:  5f/ff/ff")] );
    push(@arr, [(  "[38;5;88m 88:  87/00/00",     "[38;5;89m 89:  87/00/5f",     "[38;5;90m 90:  87/00/87",     "[38;5;91m 91:  87/00/af",     "[38;5;92m 92:  87/00/d7",     "[38;5;93m 93:  87/00/ff")] );
    push(@arr, [(  "[38;5;94m 94:  87/5f/00",     "[38;5;95m 95:  87/5f/5f",     "[38;5;96m 96:  87/5f/87",     "[38;5;97m 97:  87/5f/af",     "[38;5;98m 98:  87/5f/d7",     "[38;5;99m 99:  87/5f/ff")] );
    push(@arr, [( "[38;5;100m 100: 87/87/00",    "[38;5;101m 101: 87/87/5f",    "[38;5;102m 102: 87/87/87",    "[38;5;103m 103: 87/87/af",    "[38;5;104m 104: 87/87/d7",    "[38;5;105m 105: 87/87/ff")] );
    push(@arr, [( "[38;5;106m 106: 87/af/00",    "[38;5;107m 107: 87/af/5f",    "[38;5;108m 108: 87/af/87",    "[38;5;109m 109: 87/af/af",    "[38;5;110m 110: 87/af/d7",    "[38;5;111m 111: 87/af/ff")] );
    push(@arr, [( "[38;5;112m 112: 87/d7/00",    "[38;5;113m 113: 87/d7/5f",    "[38;5;114m 114: 87/d7/87",    "[38;5;115m 115: 87/d7/af",    "[38;5;116m 116: 87/d7/d7",    "[38;5;117m 117: 87/d7/ff")] );
    push(@arr, [( "[38;5;118m 118: 87/ff/00",    "[38;5;119m 119: 87/ff/5f",    "[38;5;120m 120: 87/ff/87",    "[38;5;121m 121: 87/ff/af",    "[38;5;122m 122: 87/ff/d7",    "[38;5;123m 123: 87/ff/ff")] );
    push(@arr, [( "[38;5;124m 124: af/00/00",    "[38;5;125m 125: af/00/5f",    "[38;5;126m 126: af/00/87",    "[38;5;127m 127: af/00/af",    "[38;5;128m 128: af/00/d7",    "[38;5;129m 129: af/00/ff")] );
    push(@arr, [( "[38;5;130m 130: af/5f/00",    "[38;5;131m 131: af/5f/5f",    "[38;5;132m 132: af/5f/87",    "[38;5;133m 133: af/5f/af",    "[38;5;134m 134: af/5f/d7",    "[38;5;135m 135: af/5f/ff")] );
    push(@arr, [( "[38;5;136m 136: af/87/00",    "[38;5;137m 137: af/87/5f",    "[38;5;138m 138: af/87/87",    "[38;5;139m 139: af/87/af",    "[38;5;140m 140: af/87/d7",    "[38;5;141m 141: af/87/ff")] );
    push(@arr, [( "[38;5;142m 142: af/af/00",    "[38;5;143m 143: af/af/5f",    "[38;5;144m 144: af/af/87",    "[38;5;145m 145: af/af/af",    "[38;5;146m 146: af/af/d7",    "[38;5;147m 147: af/af/ff")] );
    push(@arr, [( "[38;5;148m 148: af/d7/00",    "[38;5;149m 149: af/d7/5f",    "[38;5;150m 150: af/d7/87",    "[38;5;151m 151: af/d7/af",    "[38;5;152m 152: af/d7/d7",    "[38;5;153m 153: af/d7/ff")] );
    push(@arr, [( "[38;5;154m 154: af/ff/00",    "[38;5;155m 155: af/ff/5f",    "[38;5;156m 156: af/ff/87",    "[38;5;157m 157: af/ff/af",    "[38;5;158m 158: af/ff/d7",    "[38;5;159m 159: af/ff/ff")] );
    push(@arr, [( "[38;5;160m 160: d7/00/00",    "[38;5;161m 161: d7/00/5f",    "[38;5;162m 162: d7/00/87",    "[38;5;163m 163: d7/00/af",    "[38;5;164m 164: d7/00/d7",    "[38;5;165m 165: d7/00/ff")] );
    push(@arr, [( "[38;5;166m 166: d7/5f/00",    "[38;5;167m 167: d7/5f/5f",    "[38;5;168m 168: d7/5f/87",    "[38;5;169m 169: d7/5f/af",    "[38;5;170m 170: d7/5f/d7",    "[38;5;171m 171: d7/5f/ff")] );
    push(@arr, [( "[38;5;172m 172: d7/87/00",    "[38;5;173m 173: d7/87/5f",    "[38;5;174m 174: d7/87/87",    "[38;5;175m 175: d7/87/af",    "[38;5;176m 176: d7/87/d7",    "[38;5;177m 177: d7/87/ff")] );
    push(@arr, [( "[38;5;178m 178: d7/af/00",    "[38;5;179m 179: d7/af/5f",    "[38;5;180m 180: d7/af/87",    "[38;5;181m 181: d7/af/af",    "[38;5;182m 182: d7/af/d7",    "[38;5;183m 183: d7/af/ff")] );
    push(@arr, [( "[38;5;184m 184: d7/d7/00",    "[38;5;185m 185: d7/d7/5f",    "[38;5;186m 186: d7/d7/87",    "[38;5;187m 187: d7/d7/af",    "[38;5;188m 188: d7/d7/d7",    "[38;5;189m 189: d7/d7/ff")] );
    push(@arr, [( "[38;5;190m 190: d7/ff/00",    "[38;5;191m 191: d7/ff/5f",    "[38;5;192m 192: d7/ff/87",    "[38;5;193m 193: d7/ff/af",    "[38;5;194m 194: d7/ff/d7",    "[38;5;195m 195: d7/ff/ff")] );
    push(@arr, [( "[38;5;196m 196: ff/00/00",    "[38;5;197m 197: ff/00/5f",    "[38;5;198m 198: ff/00/87",    "[38;5;199m 199: ff/00/af",    "[38;5;200m 200: ff/00/d7",    "[38;5;201m 201: ff/00/ff")] );
    push(@arr, [( "[38;5;202m 202: ff/5f/00",    "[38;5;203m 203: ff/5f/5f",    "[38;5;204m 204: ff/5f/87",    "[38;5;205m 205: ff/5f/af",    "[38;5;206m 206: ff/5f/d7",    "[38;5;207m 207: ff/5f/ff")] );
    push(@arr, [( "[38;5;208m 208: ff/87/00",    "[38;5;209m 209: ff/87/5f",    "[38;5;210m 210: ff/87/87",    "[38;5;211m 211: ff/87/af",    "[38;5;212m 212: ff/87/d7",    "[38;5;213m 213: ff/87/ff")] );
    push(@arr, [( "[38;5;214m 214: ff/af/00",    "[38;5;215m 215: ff/af/5f",    "[38;5;216m 216: ff/af/87",    "[38;5;217m 217: ff/af/af",    "[38;5;218m 218: ff/af/d7",    "[38;5;219m 219: ff/af/ff")] );
    push(@arr, [( "[38;5;220m 220: ff/d7/00",    "[38;5;221m 221: ff/d7/5f",    "[38;5;222m 222: ff/d7/87",    "[38;5;223m 223: ff/d7/af",    "[38;5;224m 224: ff/d7/d7",    "[38;5;225m 225: ff/d7/ff")] );
    push(@arr, [( "[38;5;226m 226: ff/ff/00",    "[38;5;227m 227: ff/ff/5f",    "[38;5;228m 228: ff/ff/87",    "[38;5;229m 229: ff/ff/af",    "[38;5;230m 230: ff/ff/d7",    "[38;5;231m 231: ff/ff/ff")] );
    push(@arr, [( "[38;5;232m 232: 08/08/08",    "[38;5;233m 233: 12/12/12",    "[38;5;234m 234: 1c/1c/1c",    "[38;5;235m 235: 26/26/26",    "[38;5;236m 236: 30/30/30",    "[38;5;237m 237: 3a/3a/3a")] );
    push(@arr, [( "[38;5;238m 238: 44/44/44",    "[38;5;239m 239: 4e/4e/4e",    "[38;5;240m 240: 58/58/58",    "[38;5;241m 241: 62/62/62",    "[38;5;242m 242: 6c/6c/6c",    "[38;5;243m 243: 76/76/76")] );
    push(@arr, [( "[38;5;244m 244: 80/80/80",    "[38;5;245m 245: 8a/8a/8a",    "[38;5;246m 246: 94/94/94",    "[38;5;247m 247: 9e/9e/9e",    "[38;5;248m 248: a8/a8/a8",    "[38;5;249m 249: b2/b2/b2")] );
    push(@arr, [( "[38;5;250m 250: bc/bc/bc",    "[38;5;251m 251: c6/c6/c6",    "[38;5;252m 252: d0/d0/d0",    "[38;5;253m 253: da/da/da",    "[38;5;254m 254: e4/e4/e4",    "[38;5;255m 255: ee/ee/ee")] );

    if( $ARGV[0] eq "-s" || $ARGV[1] eq "-s" || $ARGV[2] eq "-s" ){
        $padding = "    ";
    }

    # display in reverse order
    if( $ARGV[0] eq "-r" || $ARGV[1] eq "-r" || $ARGV[2] eq "-r" ){
        for( $dimone = 0; $dimone < scalar @arr; $dimone++ ) {

            $seed = ($dimone % 6) * -1;
            for( $dimtwo = 0; $dimtwo < 6; $dimtwo++ ) {

                $movone = $seed;
                $movtwo = $seed * -1;

                print $arr[$dimone][$dimtwo] . $padding;

                $seed = $seed+1;
            }

            print "\n";
        }
    } else {
        for( $dimone = 0; $dimone < scalar @arr; $dimone++ ) {

            $seed = ($dimone % 6) * -1;
            for( $dimtwo = 0; $dimtwo < 6; $dimtwo++ ) {

                $movone = $seed;
                $movtwo = $seed * -1;

                $newone = $dimone+$movone;
                $newtwo = $dimtwo+$movtwo;

                if( $newone < scalar @arr ){
                    print $arr[$newone][$newtwo] . $padding;
                }

                $seed = $seed+1;
            }

            print "\n";
        }
    }
    print "\n";

    # 24-bit
    print "\n3-byte color mode:\n\n";
    for ($fgbg = 38; $fgbg <= 48; $fgbg += 10) {

        # now the color cube
        print "Color cube\n";
        for ($green = 0; $green < 256; $green += 51) {
            for ($red = 0; $red < 256; $red += 51) {
                for ($blue = 0; $blue < 256; $blue += 51) {
                    print "\x1b[${fgbg};2;${red};${green};${blue}m::";
                }
                print "\x1b[0m ";
            }
            print "\n";
        }

        # now the grayscale ramp
        print "Grayscale ramp:\n";
        for ($gray = 8; $gray < 256; $gray += 10) {
            print "\x1b[${fgbg};2;${gray};${gray};${gray}m::";
        }
        print "\x1b[0m\n\n";
    }

} else {
    # RGB
    print "\nRGB Table\n";
    print "[38;5;16m 16:  00/00/00\n";
    print "[38;5;17m 17:  00/00/5f\n";
    print "[38;5;18m 18:  00/00/87\n";
    print "[38;5;19m 19:  00/00/af\n";
    print "[38;5;20m 20:  00/00/d7\n";
    print "[38;5;21m 21:  00/00/ff\n";
    print "[38;5;22m 22:  00/5f/00\n";
    print "[38;5;23m 23:  00/5f/5f\n";
    print "[38;5;24m 24:  00/5f/87\n";
    print "[38;5;25m 25:  00/5f/af\n";
    print "[38;5;26m 26:  00/5f/d7\n";
    print "[38;5;27m 27:  00/5f/ff\n";
    print "[38;5;28m 28:  00/87/00\n";
    print "[38;5;29m 29:  00/87/5f\n";
    print "[38;5;30m 30:  00/87/87\n";
    print "[38;5;31m 31:  00/87/af\n";
    print "[38;5;32m 32:  00/87/d7\n";
    print "[38;5;33m 33:  00/87/ff\n";
    print "[38;5;34m 34:  00/af/00\n";
    print "[38;5;35m 35:  00/af/5f\n";
    print "[38;5;36m 36:  00/af/87\n";
    print "[38;5;37m 37:  00/af/af\n";
    print "[38;5;38m 38:  00/af/d7\n";
    print "[38;5;39m 39:  00/af/ff\n";
    print "[38;5;40m 40:  00/d7/00\n";
    print "[38;5;41m 41:  00/d7/5f\n";
    print "[38;5;42m 42:  00/d7/87\n";
    print "[38;5;43m 43:  00/d7/af\n";
    print "[38;5;44m 44:  00/d7/d7\n";
    print "[38;5;45m 45:  00/d7/ff\n";
    print "[38;5;46m 46:  00/ff/00\n";
    print "[38;5;47m 47:  00/ff/5f\n";
    print "[38;5;48m 48:  00/ff/87\n";
    print "[38;5;49m 49:  00/ff/af\n";
    print "[38;5;50m 50:  00/ff/d7\n";
    print "[38;5;51m 51:  00/ff/ff\n";
    print "[38;5;52m 52:  5f/00/00\n";
    print "[38;5;53m 53:  5f/00/5f\n";
    print "[38;5;54m 54:  5f/00/87\n";
    print "[38;5;55m 55:  5f/00/af\n";
    print "[38;5;56m 56:  5f/00/d7\n";
    print "[38;5;57m 57:  5f/00/ff\n";
    print "[38;5;58m 58:  5f/5f/00\n";
    print "[38;5;59m 59:  5f/5f/5f\n";
    print "[38;5;60m 60:  5f/5f/87\n";
    print "[38;5;61m 61:  5f/5f/af\n";
    print "[38;5;62m 62:  5f/5f/d7\n";
    print "[38;5;63m 63:  5f/5f/ff\n";
    print "[38;5;64m 64:  5f/87/00\n";
    print "[38;5;65m 65:  5f/87/5f\n";
    print "[38;5;66m 66:  5f/87/87\n";
    print "[38;5;67m 67:  5f/87/af\n";
    print "[38;5;68m 68:  5f/87/d7\n";
    print "[38;5;69m 69:  5f/87/ff\n";
    print "[38;5;70m 70:  5f/af/00\n";
    print "[38;5;71m 71:  5f/af/5f\n";
    print "[38;5;72m 72:  5f/af/87\n";
    print "[38;5;73m 73:  5f/af/af\n";
    print "[38;5;74m 74:  5f/af/d7\n";
    print "[38;5;75m 75:  5f/af/ff\n";
    print "[38;5;76m 76:  5f/d7/00\n";
    print "[38;5;77m 77:  5f/d7/5f\n";
    print "[38;5;78m 78:  5f/d7/87\n";
    print "[38;5;79m 79:  5f/d7/af\n";
    print "[38;5;80m 80:  5f/d7/d7\n";
    print "[38;5;81m 81:  5f/d7/ff\n";
    print "[38;5;82m 82:  5f/ff/00\n";
    print "[38;5;83m 83:  5f/ff/5f\n";
    print "[38;5;84m 84:  5f/ff/87\n";
    print "[38;5;85m 85:  5f/ff/af\n";
    print "[38;5;86m 86:  5f/ff/d7\n";
    print "[38;5;87m 87:  5f/ff/ff\n";
    print "[38;5;88m 88:  87/00/00\n";
    print "[38;5;89m 89:  87/00/5f\n";
    print "[38;5;90m 90:  87/00/87\n";
    print "[38;5;91m 91:  87/00/af\n";
    print "[38;5;92m 92:  87/00/d7\n";
    print "[38;5;93m 93:  87/00/ff\n";
    print "[38;5;94m 94:  87/5f/00\n";
    print "[38;5;95m 95:  87/5f/5f\n";
    print "[38;5;96m 96:  87/5f/87\n";
    print "[38;5;97m 97:  87/5f/af\n";
    print "[38;5;98m 98:  87/5f/d7\n";
    print "[38;5;99m 99:  87/5f/ff\n";
    print "[38;5;100m 100 :87/87/00\n";
    print "[38;5;101m 101 :87/87/5f\n";
    print "[38;5;102m 102 :87/87/87\n";
    print "[38;5;103m 103 :87/87/af\n";
    print "[38;5;104m 104 :87/87/d7\n";
    print "[38;5;105m 105 :87/87/ff\n";
    print "[38;5;106m 106 :87/af/00\n";
    print "[38;5;107m 107 :87/af/5f\n";
    print "[38;5;108m 108 :87/af/87\n";
    print "[38;5;109m 109 :87/af/af\n";
    print "[38;5;110m 110 :87/af/d7\n";
    print "[38;5;111m 111 :87/af/ff\n";
    print "[38;5;112m 112 :87/d7/00\n";
    print "[38;5;113m 113 :87/d7/5f\n";
    print "[38;5;114m 114 :87/d7/87\n";
    print "[38;5;115m 115 :87/d7/af\n";
    print "[38;5;116m 116 :87/d7/d7\n";
    print "[38;5;117m 117 :87/d7/ff\n";
    print "[38;5;118m 118 :87/ff/00\n";
    print "[38;5;119m 119 :87/ff/5f\n";
    print "[38;5;120m 120 :87/ff/87\n";
    print "[38;5;121m 121 :87/ff/af\n";
    print "[38;5;122m 122 :87/ff/d7\n";
    print "[38;5;123m 123 :87/ff/ff\n";
    print "[38;5;124m 124 :af/00/00\n";
    print "[38;5;125m 125 :af/00/5f\n";
    print "[38;5;126m 126 :af/00/87\n";
    print "[38;5;127m 127 :af/00/af\n";
    print "[38;5;128m 128 :af/00/d7\n";
    print "[38;5;129m 129 :af/00/ff\n";
    print "[38;5;130m 130 :af/5f/00\n";
    print "[38;5;131m 131 :af/5f/5f\n";
    print "[38;5;132m 132 :af/5f/87\n";
    print "[38;5;133m 133 :af/5f/af\n";
    print "[38;5;134m 134 :af/5f/d7\n";
    print "[38;5;135m 135 :af/5f/ff\n";
    print "[38;5;136m 136 :af/87/00\n";
    print "[38;5;137m 137 :af/87/5f\n";
    print "[38;5;138m 138 :af/87/87\n";
    print "[38;5;139m 139 :af/87/af\n";
    print "[38;5;140m 140 :af/87/d7\n";
    print "[38;5;141m 141 :af/87/ff\n";
    print "[38;5;142m 142 :af/af/00\n";
    print "[38;5;143m 143 :af/af/5f\n";
    print "[38;5;144m 144 :af/af/87\n";
    print "[38;5;145m 145 :af/af/af\n";
    print "[38;5;146m 146 :af/af/d7\n";
    print "[38;5;147m 147 :af/af/ff\n";
    print "[38;5;148m 148 :af/d7/00\n";
    print "[38;5;149m 149 :af/d7/5f\n";
    print "[38;5;150m 150 :af/d7/87\n";
    print "[38;5;151m 151 :af/d7/af\n";
    print "[38;5;152m 152 :af/d7/d7\n";
    print "[38;5;153m 153 :af/d7/ff\n";
    print "[38;5;154m 154 :af/ff/00\n";
    print "[38;5;155m 155 :af/ff/5f\n";
    print "[38;5;156m 156 :af/ff/87\n";
    print "[38;5;157m 157 :af/ff/af\n";
    print "[38;5;158m 158 :af/ff/d7\n";
    print "[38;5;159m 159 :af/ff/ff\n";
    print "[38;5;160m 160 :d7/00/00\n";
    print "[38;5;161m 161 :d7/00/5f\n";
    print "[38;5;162m 162 :d7/00/87\n";
    print "[38;5;163m 163 :d7/00/af\n";
    print "[38;5;164m 164 :d7/00/d7\n";
    print "[38;5;165m 165 :d7/00/ff\n";
    print "[38;5;166m 166 :d7/5f/00\n";
    print "[38;5;167m 167 :d7/5f/5f\n";
    print "[38;5;168m 168 :d7/5f/87\n";
    print "[38;5;169m 169 :d7/5f/af\n";
    print "[38;5;170m 170 :d7/5f/d7\n";
    print "[38;5;171m 171 :d7/5f/ff\n";
    print "[38;5;172m 172 :d7/87/00\n";
    print "[38;5;173m 173 :d7/87/5f\n";
    print "[38;5;174m 174 :d7/87/87\n";
    print "[38;5;175m 175 :d7/87/af\n";
    print "[38;5;176m 176 :d7/87/d7\n";
    print "[38;5;177m 177 :d7/87/ff\n";
    print "[38;5;178m 178 :d7/af/00\n";
    print "[38;5;179m 179 :d7/af/5f\n";
    print "[38;5;180m 180 :d7/af/87\n";
    print "[38;5;181m 181 :d7/af/af\n";
    print "[38;5;182m 182 :d7/af/d7\n";
    print "[38;5;183m 183 :d7/af/ff\n";
    print "[38;5;184m 184 :d7/d7/00\n";
    print "[38;5;185m 185 :d7/d7/5f\n";
    print "[38;5;186m 186 :d7/d7/87\n";
    print "[38;5;187m 187 :d7/d7/af\n";
    print "[38;5;188m 188 :d7/d7/d7\n";
    print "[38;5;189m 189 :d7/d7/ff\n";
    print "[38;5;190m 190 :d7/ff/00\n";
    print "[38;5;191m 191 :d7/ff/5f\n";
    print "[38;5;192m 192 :d7/ff/87\n";
    print "[38;5;193m 193 :d7/ff/af\n";
    print "[38;5;194m 194 :d7/ff/d7\n";
    print "[38;5;195m 195 :d7/ff/ff\n";
    print "[38;5;196m 196 :ff/00/00\n";
    print "[38;5;197m 197 :ff/00/5f\n";
    print "[38;5;198m 198 :ff/00/87\n";
    print "[38;5;199m 199 :ff/00/af\n";
    print "[38;5;200m 200 :ff/00/d7\n";
    print "[38;5;201m 201 :ff/00/ff\n";
    print "[38;5;202m 202 :ff/5f/00\n";
    print "[38;5;203m 203 :ff/5f/5f\n";
    print "[38;5;204m 204 :ff/5f/87\n";
    print "[38;5;205m 205 :ff/5f/af\n";
    print "[38;5;206m 206 :ff/5f/d7\n";
    print "[38;5;207m 207 :ff/5f/ff\n";
    print "[38;5;208m 208 :ff/87/00\n";
    print "[38;5;209m 209 :ff/87/5f\n";
    print "[38;5;210m 210 :ff/87/87\n";
    print "[38;5;211m 211 :ff/87/af\n";
    print "[38;5;212m 212 :ff/87/d7\n";
    print "[38;5;213m 213 :ff/87/ff\n";
    print "[38;5;214m 214 :ff/af/00\n";
    print "[38;5;215m 215 :ff/af/5f\n";
    print "[38;5;216m 216 :ff/af/87\n";
    print "[38;5;217m 217 :ff/af/af\n";
    print "[38;5;218m 218 :ff/af/d7\n";
    print "[38;5;219m 219 :ff/af/ff\n";
    print "[38;5;220m 220 :ff/d7/00\n";
    print "[38;5;221m 221 :ff/d7/5f\n";
    print "[38;5;222m 222 :ff/d7/87\n";
    print "[38;5;223m 223 :ff/d7/af\n";
    print "[38;5;224m 224 :ff/d7/d7\n";
    print "[38;5;225m 225 :ff/d7/ff\n";
    print "[38;5;226m 226 :ff/ff/00\n";
    print "[38;5;227m 227 :ff/ff/5f\n";
    print "[38;5;228m 228 :ff/ff/87\n";
    print "[38;5;229m 229 :ff/ff/af\n";
    print "[38;5;230m 230 :ff/ff/d7\n";
    print "[38;5;231m 231 :ff/ff/ff\n";
    print "[38;5;232m 232 :08/08/08\n";
    print "[38;5;233m 233 :12/12/12\n";
    print "[38;5;234m 234 :1c/1c/1c\n";
    print "[38;5;235m 235 :26/26/26\n";
    print "[38;5;236m 236 :30/30/30\n";
    print "[38;5;237m 237 :3a/3a/3a\n";
    print "[38;5;238m 238 :44/44/44\n";
    print "[38;5;239m 239 :4e/4e/4e\n";
    print "[38;5;240m 240 :58/58/58\n";
    print "[38;5;241m 241 :62/62/62\n";
    print "[38;5;242m 242 :6c/6c/6c\n";
    print "[38;5;243m 243 :76/76/76\n";
    print "[38;5;244m 244 :80/80/80\n";
    print "[38;5;245m 245 :8a/8a/8a\n";
    print "[38;5;246m 246 :94/94/94\n";
    print "[38;5;247m 247 :9e/9e/9e\n";
    print "[38;5;248m 248 :a8/a8/a8\n";
    print "[38;5;249m 249 :b2/b2/b2\n";
    print "[38;5;250m 250 :bc/bc/bc\n";
    print "[38;5;251m 251 :c6/c6/c6\n";
    print "[38;5;252m 252 :d0/d0/d0\n";
    print "[38;5;253m 253 :da/da/da\n";
    print "[38;5;254m 254 :e4/e4/e4\n";
    print "[38;5;255m 255 :ee/ee/ee\n";
    print "\n";
    print "\n";
}


print "[0m";

# type faces
print "typefaces\n";

print "  bold:                 [1mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  faint:                [2mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  italic:               [3mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  underline:            [4mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  blink:                [5mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  inverse:              [7mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  overscript:           [9mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
        
print "  bold+italic:          [1m[3mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  bold+underline:       [1m[4mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  bold+inverse:         [1m[7mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  bold+overscript:      [1m[9mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";

print "  italic+underline:     [3m[4mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  italic+inverse:       [3m[7mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  italic+overscript:    [3m[9mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";

print "  underline+inverse:    [4m[7mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";
print "  underline+overscript: [4m[9mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";

print "  inverse+overscript:   [7m[9mThe quick brown fox jumps over the lazy dog 0123456789 ![0m\n";

print "[0m";
exit;
