#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int T;

    scanf( "%d", &T );

    srand( time( NULL ) );

    FILE* open = fopen( "entrada1912.txt", "w" );


    while( T-- )
    {
        int N = rand() % 100; // <--
        int A = rand() % 100000;

        fprintf( open, "%d %d\n", N, A );

        while( N-- )
        {
            fprintf( open, "%d ", rand() % 10000 );
        }

        fprintf( open, "\n");

    }

    fprintf( open, "%d %d\n", 0, 0 );

    fclose( open );

    return 0;
}
