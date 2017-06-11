#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *pFile;

    pFile = fopen( "gen_1661.txt", "w" );

    int T, i;
    scanf( "%d", &T );

    fprintf( pFile, "%d\n", T );

    srand( time( NULL ) );

    for( i = 0; i < T; i++ ){

        int N = rand() % 10000 + 1, M = rand() % 10000 + 1;
        unsigned j;

        fprintf( pFile, "%d %d %d\n", N, rand() % M + 1, M );

        for( j = 0; j < M; j++ ){
            fprintf( pFile, "%d ", rand() % N );
        }

        fprintf( pFile, "\n" );
    }

    return 0;
}
