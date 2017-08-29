/*
Nome:      Vende-se
ID:        2433
Resposta:  Accepted
Linguagem: C
Tempo:     0.040s
Tamanho:   699 Bytes
Submissao: 15/06/17 17:17:42
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXDIST 1000100
int compare( const void *a, const void *b )
{
    return( *( int* )a - *( int* )b );
}
int main()
{
    int N, K;
    unsigned i;

    scanf( "%d%d", &N, &K );

    int building[N];

    for( i = 0; i < N; i++ ){
        scanf( "%d", &building[i] );
    }

    qsort( building, N, sizeof( int ), compare );

    int min_so_far = MAXDIST;
    int min_here, leap = N - K;;

    for( i = leap - 1; i < N; i++ ){
        min_here = building[i] - building[i+1-leap];
        if( min_so_far > min_here ){
            min_so_far = min_here;
        }
    }

    printf( "%d\n", min_so_far );

    return 0;
}