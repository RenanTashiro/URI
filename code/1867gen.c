#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 4294967296
int main()
{
    FILE* filePtr;

    filePtr = fopen( "1867.txt", "w" );

    int i; scanf( "%d", &i );
    srand( time( NULL ) );

    while( i-- )
    {
        fprintf( filePtr, "%lld %lld\n", rand() % MAX, rand() % MAX );
    }

    fprintf( filePtr, "%d %d\n", 0, 0 );

    fclose( filePtr );

    return 0;
}
