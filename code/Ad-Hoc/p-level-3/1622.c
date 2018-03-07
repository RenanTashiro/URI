/*
Nome:      Lâmpadas
ID:        1622
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   768 Bytes
Submissao: 03/10/15 18:03:57
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int N, Q;

    while( scanf( "%d%d", &N, &Q ) && N != 0 ){

        char lamp[N+1];
        unsigned i;

        scanf( "%s", lamp );

        for( i = 0; i < Q; i++ ){

            int K, M;
            unsigned j;

            scanf( "%d%d", &K, &M );

            M %= N * 2;

            int index = K;
            char tmp_lamp[N+1];

            strcpy( tmp_lamp, lamp );

            if( M > 0 ) tmp_lamp[0] = tmp_lamp[0] == 'o' ? 'x' : 'o';

            for( j = 1; j < M; j++ ){
                tmp_lamp[index%N] = tmp_lamp[index%N] == 'o' ? 'x' : 'o';
                index += K;
            }

            puts( tmp_lamp );
        }

    }

    return 0;
}
