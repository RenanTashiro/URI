#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N, C;
    int i;

    scanf( "%d%d", &N, &C );

    FILE* pFile = fopen( "caso1932.txt", "w" );
    srand( time( NULL ) );

    fprintf( pFile, "%d %d\n", N, C );

    for( i = 0; i < N; i++ )
    {
        fprintf( pFile, "%d ", rand() % 1000 + 1 );
    }

    fprintf( pFile, "\n" );

    fclose( pFile );

    return 0;
}
