#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    FILE *filePtr;

    srand( time( NULL ) );
    filePtr = fopen( "generator1337.txt", "w" );

    if( filePtr != NULL ){

        int N, A, B, C;
        unsigned i;

        scanf( "%d", &N );

        for( i = 0; i < N; i++ ){
            A =  rand() % 13 + 1;
            B =  rand() % 13 + 1;
            C = rand() % 13 + 1;
            fprintf( filePtr, "%d %d %d\n", A, B, C );
        }

        fprintf( filePtr, "%d %d %d\n", 0, 0, 0 );

        fclose( filePtr );
    }

    return 0;
}
