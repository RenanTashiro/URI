#include <stdio.h>

int main()
{
    char numero[100];
    unsigned i;

    scanf( "%100s", numero );

    for( i = 0; numero[i] != '\0'; i++ ){

        switch( numero[i] ){
            case 'A': case 'B': case 'C': printf( "%c", '2' ); break;
            case 'D': case 'E': case 'F': printf( "%c", '3' ); break;
            case 'G': case 'H': case 'I': printf( "%c", '4' ); break;
            case 'J': case 'K': case 'L': printf( "%c", '5' ); break;
            case 'M': case 'N': case 'O': printf( "%c", '6' ); break;
            case 'P': case 'Q': case 'R': case 'S': printf( "%c", '7' ); break;
            case 'T': case 'U': case 'V': printf( "%c", '8' ); break;
            case 'W': case 'X': case 'Y': case 'Z': printf( "%c", '9' ); break;
            default: printf( "%c", '-' );
        }
    }

    puts( "" );

    return 0;
}
