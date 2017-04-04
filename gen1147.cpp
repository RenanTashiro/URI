#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *pFile = fopen( "1147_input.txt", "w" );
    srand( time( NULL ) );

    int T;

    scanf( "%d", &T );

    while( T-- )
    {
        int mapa[1000] = {0};

        int p1 = rand() % 8 + 1, p2 = ( rand() % 8 ) + 97;
        fprintf( pFile, "%d%c\n", p1, p2 );
        mapa[p1*10+p2] = 1;

        int counter = 0;

        while( counter < 8 ) {
            p1 = rand() % 8 + 1, p2 = ( rand() % 8 ) + 97;
            if( mapa[p1*10+p2] == 0 ) {
                fprintf( pFile, "%d%c\n", p1, p2 );
                mapa[p1*10+p2] = 1;
                counter++;
            }
        }
    }

    fprintf( pFile, "0" );
    fclose( pFile );

    return 0;
}

