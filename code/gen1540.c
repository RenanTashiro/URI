#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand( time( NULL ) );
    FILE *pFile = fopen( "input1540.txt", "w" );

    int T;

    scanf( "%d", &T );
    fprintf( pFile, "%d\n", T );

    while( T-- )
    {
        int year_one = rand();

        fprintf( pFile, "%d %d %d %d\n", year_one, rand(), year_one + rand(), rand() );
    }

    fclose( pFile );

    return 0;
}
