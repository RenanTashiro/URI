/*
Nome:      Fila do Recreio
ID:        1548
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   684 Bytes
Submissao: 12/06/15 08:44:12
*/
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
