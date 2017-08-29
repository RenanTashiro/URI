/*
Nome:      Em Braille
ID:        1357
Resposta:  Accepted
Linguagem: C
Tempo:     0.020s
Tamanho:   3,7 KB
Submissao: 26/04/15 08:11:11
*/
#include <stdio.h>

void printL1( char *nPtr );
void printL2( char *nPtr );
void printL3( size_t size );

int main( void )
{
    int D;
    char SorD;

    while( scanf( "%d", &D ) && D != 0 ){

        scanf( " %c", &SorD );

            if( SorD == 'S' ){

                char number[D];

                scanf( "%s", number );

                printL1( number );
                printL2( number );
                printL3( D );
            }
            else{

                int val[D];
                char braille[3][ D * 2 ];

                unsigned i, j;

                for( i = 0; i < D; i++ ){
                    val[i] = 0;
                }

                for( i = 0; i < 3; i++ ){
                    for( j = 0; j < D * 2; j += 2 ){
                        scanf( " %c%c", &braille[i][j], &braille[i][j+1] );
                    }
                }

                for( i = 0, j = 0; j < D * 2; j += 2, i++ ){

                    if( braille[0][j] == '*' )
                        val[i] += 2;
                    if( braille[0][j+1] == '*' )
                        val[i] += 3;
                    if( braille[1][j] == '*' )
                        val[i] += 5;
                    if( braille[1][j+1] == '*' )
                        val[i] += 7;
                }

                for( i = 0; i < D; i++ ){

                    switch( val[i] ){

                    case 2: printf( "%d", 1 ); break;
                    case 7: printf( "%d", 2 ); break;
                    case 5: printf( "%d", 3 ); break;
                    case 12: printf( "%d", 4 ); break;
                    case 9: printf( "%d", 5 ); break;
                    case 10: printf( "%d", 6 ); break;
                    case 17: printf( "%d", 7 ); break;
                    case 14: printf( "%d", 8 ); break;
                    case 8: printf( "%d", 9 ); break;
                    case 15: printf( "%d", 0 ); break;
                    }
                }
                puts( "" );
            }
    }

    return 0;
}
void printL1( char *nPtr ){

    switch( *nPtr ){

        case '1': case '2': case '5': case '8':
            printf( "%2s", "*." ); break;
        case '3': case '4': case '6': case '7':
            printf( "%2s", "**" ); break;
        case '9': case '0':
            printf( "%2s", ".*" ); break;
    }
    ++nPtr;

    while( *nPtr != '\0' ){

        switch( *nPtr ){

        case '1': case '2': case '5': case '8':
            printf( "%3s", "*." ); break;
        case '3': case '4': case '6': case '7':
            printf( "%3s", "**" ); break;
        case '9': case '0':
            printf( "%3s", ".*" ); break;
        }
        ++nPtr;
    }
    puts( "" );
}

void printL2( char *nPtr ){

    switch( *nPtr ){

        case '2': case '6': case '9':
            printf( "%2s", "*." ); break;
        case '4': case '5':
            printf( "%2s", ".*" ); break;
        case '7': case '8': case '0':
            printf( "%2s", "**" ); break;
        case '1': case '3':
            printf( "%2s", ".." ); break;
    }
    ++nPtr;

    while( *nPtr != '\0' ){

        switch( *nPtr ){

        case '2': case '6': case '9':
            printf( "%3s", "*." ); break;
        case '4': case '5':
            printf( "%3s", ".*" ); break;
        case '7': case '8': case '0':
            printf( "%3s", "**" ); break;
        case '1': case '3':
            printf( "%3s", ".." ); break;
        }
        ++nPtr;
    }
    puts( "" );
}

void printL3( size_t size ){

    unsigned j;

    printf( "%2s", ".." );

    for( j = 1; j < size; j++ ){
        printf( "%3s", ".." );
    }
    puts( "" );
}