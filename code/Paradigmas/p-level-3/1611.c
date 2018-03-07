/*
Nome:      Elevador Lotado
ID:        1611
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.100s
Tamanho:   661 Bytes
Submissao: 26/06/15 11:35:36
*/
#include <stdio.h>
#include <stdlib.h>

int compare( const void *a, const void *b )
{
    return( *( int* )b - *( int* )a );
}

int main()
{
    int T;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        int N, C, M;
        unsigned j;

        scanf( "%d%d%d", &N, &C, &M );

        int Mi[M], energy_cost = 0;

        for( j = 0; j < M; j++ ){
            scanf( "%d", &Mi[j] );
        }

        qsort( Mi, M, sizeof( int ), compare );


        for( j = 0; j < M; j += C ){
            energy_cost += Mi[j] * 2;
        }

        printf( "%d\n", energy_cost );
    }

    return 0;
}
