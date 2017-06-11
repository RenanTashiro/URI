#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *pFile;

    pFile = fopen( "1771.text", "w" );

    int T, i, j;
    scanf( "%d", &T );

    srand( time( NULL ) );

    for( i = 0; i < T; i++ ){
        for( j = 0; j < 24; j++ ){
            fprintf( pFile, "%d ", rand() % 75 + 1 );
        }
        fprintf( pFile, "\n" );
    }

    fclose( pFile );

    return 0;
}
