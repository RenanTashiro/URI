/*
Nome:      Humm.. Andar ou Correr.. Eis a Questão
ID:        1595
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.104s
Tamanho:   760 Bytes
Submissao: 26/07/15 20:15:33
*/
#include <stdio.h>
#include <stdlib.h>

int cmp( const void* a, const void* b )
{
    return( *( int* )a - *( int* )b );
}

int main()
{
    int T;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        int S, C, R;
        unsigned j;

        scanf( "%d%d%d", &S, &C, &R );

        int Vj[S];

        for( j = 0; j < S; j++ ){
            scanf( "%d", &Vj[j] );
        }

        qsort( Vj, S, sizeof( int ), cmp );

        double tempo_total = 0.0;

        for( j = 0; j < C; j++ )
            tempo_total += ( double ) 1 / ( R + Vj[j] );
        for( j = C; j < S; j++ )
            tempo_total += ( double ) 1 / Vj[j];

        printf( "%.2lf\n", tempo_total );
    }

    return 0;
}