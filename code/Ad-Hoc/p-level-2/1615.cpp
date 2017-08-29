/*
Nome:      Insatisfação nas Eleições
ID:        1615
Resposta:  Accepted
Linguagem: C++
Tempo:     0.056s
Tamanho:   825 Bytes
Submissao: 20/04/15 18:17:55
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int T;
    int N, M, vote;
    bool winner = false;

    scanf( "%d", &T );

    unsigned int i;

    for( i = 0; i < T; i++ ){

        scanf( "%d%d", &N, &M );

        double couter[N];
        unsigned int j;

        for( j = 0; j < N; j++ ){
            couter[j] = 0;
        }

        for( j = 0; j < M; j++ ){
            scanf( "%d", &vote );
            couter[vote-1]++;
        }

        for( j = 0; j < N; j++ ){
            if( couter[j] > (float) M / 2 ){
                printf( "%d", j + 1 );
                winner = true;
                break;
            }
        }
        if( !winner ){
            printf( "%d", -1);
        }
        winner = false;
        puts( "" );
    }

    return 0;
}
