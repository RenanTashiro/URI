/*
Nome:      Perguntas mais Frequentes
ID:        1553
Resposta:  Accepted
Linguagem: C
Tempo:     0.004s
Tamanho:   780 Bytes
Submissao: 20/04/15 16:55:48
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N, K;
    unsigned int couter = 0;

    while( scanf( "%d%d", &N, &K) && N != 0 ){

        int question_frequency[105];
        bool flag[105];

        int i;

        for( i = 0; i < 105; i++ ){
            question_frequency[i] = 0;
            flag[i] = true;
        }

        int P[N];

        for( i = 0; i < N; i++ ){
            scanf( "%d", &P[i] );
            question_frequency[P[i]] += 1;
        }

        for( i = 0; i < N; i++ ){
            if( question_frequency[P[i]] >= K && flag[P[i]] ){
                couter++;
                flag[P[i]] = false;
            }
        }

        printf( "%u\n", couter );
        couter = 0;
    }

    return 0;
}
