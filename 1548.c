#include <stdio.h>
#include <stdlib.h>

int compare( const void *a, const void *b )
{
    return( *( int* )a < *( int* )b );
}

int main()
{
    int N;
    unsigned i;

    scanf( "%d", &N );

    for( i = 0; i < N; i++ ){

        int M;

        scanf( "%d", &M );

        int P[M], Pn[M];
        unsigned j, counter = 0;

        for( j = 0; j < M; j++ ){
            scanf( "%d", &P[j] );
            Pn[j] = P[j];
        }

        qsort( Pn, M, sizeof( int ), compare );

        for( j = 0; j < M; j++ ){
            if( P[j] == Pn[j] )
                counter++;
        }

        printf( "%u\n", counter );
    }

    return 0;
}
