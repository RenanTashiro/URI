#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *pFile;
    srand( time( NULL ) );

    pFile = fopen( "1811_gen", "w" );

    int x, y;
    unsigned i, j;
    while( scanf( "%d%d", &x, &y ) && x != 0 ){

        fprintf( pFile, "%d %d\n", x, y );

        for( i = 0; i < x; i++ ){
            for( j = 0; j < y; j++ ){
                fprintf( pFile, "%d ", rand() % 201 );
            }
            fprintf( pFile, "\n" );
        }
    }

    fprintf( pFile, "%d", 0 );

    return 0;
}
