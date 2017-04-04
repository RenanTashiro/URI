#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *pFile;

    pFile = fopen( "1639gen.txt", "w" );

    int N;
    unsigned i;
    scanf( "%d", &N );

    srand( time( NULL ) );

    for( i = 0; i < N; i++ ){
        fprintf( pFile, "%o ", rand() % 255 );
    }

    fclose( pFile );

    return 0;
}
