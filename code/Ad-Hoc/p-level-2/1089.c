/*
Nome:      Loop Musical
ID:        1089
Resposta:  Accepted
Linguagem: C
Tempo:     0.004s
Tamanho:   616 Bytes
Submissao: 25/05/15 16:43:18
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 ){

        int magnitude[N], peak = 0;
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d", &magnitude[i] );
        }

        for( i = 1; i <= N; i++ ){
            if( ( magnitude[i-1] < magnitude[i%N] && magnitude[(i+1)%N] < magnitude[i%N] ) ||
                ( magnitude[i-1] > magnitude[i%N] && magnitude[(i+1)%N] > magnitude[i%N] ) ){
                    peak++;
                }
        }

        printf( "%d\n", peak );
    }

    return 0;
}
