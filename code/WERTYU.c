#include <stdio.h>
#include <string.h>

int main()
{
    char text_line[10001];
    unsigned i;

    while( fgets( text_line, 10000, stdin ) ){

        for( i = 0; i < strlen( text_line ); i++ ){

            switch( text_line[i] ){

            case '1': printf( "%c", '`' ); break;
            case '2': printf( "%c", '1' ); break;
            case '3': printf( "%c", '2' ); break;
            case '4': printf( "%c", '3' ); break;
            case '5': printf( "%c", '4' ); break;
            case '6': printf( "%c", '5' ); break;
            case '7': printf( "%c", '6' ); break;
            case '8': printf( "%c", '7' ); break;
            case '9': printf( "%c", '8' ); break;
            case '0': printf( "%c", '9' ); break;
            case '-': printf( "%c", '0' ); break;
            case '=': printf( "%c", '-' ); break;

            case 'W': printf( "%c", 'Q' ); break;
            case 'E': printf( "%c", 'W' ); break;
            case 'R': printf( "%c", 'E' ); break;
            case 'T': printf( "%c", 'R' ); break;
            case 'Y': printf( "%c", 'T' ); break;
            case 'U': printf( "%c", 'Y' ); break;
            case 'I': printf( "%c", 'U' ); break;
            case 'O': printf( "%c", 'I' ); break;
            case 'P': printf( "%c", 'O' ); break;
            case '[': printf( "%c", 'P' ); break;
            case ']': printf( "%c", '[' ); break;
            case '\\': printf( "%c", ']' ); break;

            case 'S': printf( "%c", 'A' ); break;
            case 'D': printf( "%c", 'S' ); break;
            case 'F': printf( "%c", 'D' ); break;
            case 'G': printf( "%c", 'F' ); break;
            case 'H': printf( "%c", 'G' ); break;
            case 'J': printf( "%c", 'H' ); break;
            case 'K': printf( "%c", 'J' ); break;
            case 'L': printf( "%c", 'K' ); break;
            case ';': printf( "%c", 'L' ); break;
            case '\'': printf( "%c", ';' ); break;

            case 'X': printf( "%c", 'Z' ); break;
            case 'C': printf( "%c", 'X' ); break;
            case 'V': printf( "%c", 'C' ); break;
            case 'B': printf( "%c", 'V' ); break;
            case 'N': printf( "%c", 'B' ); break;
            case 'M': printf( "%c", 'N' ); break;
            case ',': printf( "%c", 'M' ); break;
            case '.': printf( "%c", ',' ); break;
            case '/': printf( "%c", '.' ); break;

            case ' ': printf( "%c", ' ' ); break;

            }
        }
        puts( "" );
    }

    return 0;
}
