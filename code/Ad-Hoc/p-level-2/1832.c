/*
Nome:      EBCDIC
ID:        1832
Resposta:  Accepted
Linguagem: C
Tempo:     0.012s
Tamanho:   3,36 KB
Submissao: 09/07/15 18:28:43
*/
#include <stdio.h>

int main()
{
    int X;

    while( scanf( "%o", &X ) != EOF ){

        switch( X ){
            case 64: printf( "%c", ' ' ); break;

            case 129: printf( "%c", 'a' ); break;
            case 130: printf( "%c", 'b' ); break;
            case 131: printf( "%c", 'c' ); break;
            case 132: printf( "%c", 'd' ); break;
            case 133: printf( "%c", 'e' ); break;
            case 134: printf( "%c", 'f' ); break;
            case 135: printf( "%c", 'g' ); break;
            case 136: printf( "%c", 'h' ); break;
            case 137: printf( "%c", 'i' ); break;

            case 145: printf( "%c", 'j' ); break;
            case 146: printf( "%c", 'k' ); break;
            case 147: printf( "%c", 'l' ); break;
            case 148: printf( "%c", 'm' ); break;
            case 149: printf( "%c", 'n' ); break;
            case 150: printf( "%c", 'o' ); break;
            case 151: printf( "%c", 'p' ); break;
            case 152: printf( "%c", 'q' ); break;
            case 153: printf( "%c", 'r' ); break;

            case 162: printf( "%c", 's' ); break;
            case 163: printf( "%c", 't' ); break;
            case 164: printf( "%c", 'u' ); break;
            case 165: printf( "%c", 'v' ); break;
            case 166: printf( "%c", 'w' ); break;
            case 167: printf( "%c", 'x' ); break;
            case 168: printf( "%c", 'y' ); break;
            case 169: printf( "%c", 'z' ); break;

            case 193: printf( "%c", 'A' ); break;
            case 194: printf( "%c", 'B' ); break;
            case 195: printf( "%c", 'C' ); break;
            case 196: printf( "%c", 'D' ); break;
            case 197: printf( "%c", 'E' ); break;
            case 198: printf( "%c", 'F' ); break;
            case 199: printf( "%c", 'G' ); break;
            case 200: printf( "%c", 'H' ); break;
            case 201: printf( "%c", 'I' ); break;

            case 209: printf( "%c", 'J' ); break;
            case 210: printf( "%c", 'K' ); break;
            case 211: printf( "%c", 'L' ); break;
            case 212: printf( "%c", 'M' ); break;
            case 213: printf( "%c", 'N' ); break;
            case 214: printf( "%c", 'O' ); break;
            case 215: printf( "%c", 'P' ); break;
            case 216: printf( "%c", 'Q' ); break;
            case 217: printf( "%c", 'R' ); break;

            case 226: printf( "%c", 'S' ); break;
            case 227: printf( "%c", 'T' ); break;
            case 228: printf( "%c", 'U' ); break;
            case 229: printf( "%c", 'V' ); break;
            case 230: printf( "%c", 'W' ); break;
            case 231: printf( "%c", 'X' ); break;
            case 232: printf( "%c", 'Y' ); break;
            case 233: printf( "%c", 'Z' ); break;

            case 240: printf( "%c", '0' ); break;
            case 241: printf( "%c", '1' ); break;
            case 242: printf( "%c", '2' ); break;
            case 243: printf( "%c", '3' ); break;
            case 244: printf( "%c", '4' ); break;
            case 245: printf( "%c", '5' ); break;
            case 246: printf( "%c", '6' ); break;
            case 247: printf( "%c", '7' ); break;
            case 248: printf( "%c", '8' ); break;
            case 249: printf( "%c", '9' ); break;
        }

        if( getchar() == '\n' ) puts( "" );
    }

    puts( "" );

    return 0;
}