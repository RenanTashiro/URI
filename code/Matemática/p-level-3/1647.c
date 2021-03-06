/*
Nome:      Um Jogo com Bolas de Gude
ID:        1647
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   539 Bytes
Submissao: 20/05/15 15:04:10
*/
#include <stdio.h>

int main()
{
    int N;
    long long int total_steps = 0;

    while( scanf( "%d", &N ) && N != 0 ){

        long long int Mi[N];
        int i, j;

        for( i = 0; i < N; i++ ){
            scanf( "%lld", &Mi[i] );
        }

        for( i = N - 1; i >= 0; i-- ){
            total_steps += Mi[i];
            for( j = 0; j < i; j++ ){
                Mi[j] += Mi[i];
            }
        }

        printf( "%lld\n", total_steps );
        total_steps = 0;

    }
    return 0;
}
