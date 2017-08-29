/*
Nome:      Lajotas Hexagonais
ID:        1393
Resposta:  Accepted
Linguagem: C
Tempo:     0.004s
Tamanho:   361 Bytes
Submissao: 14/05/15 10:02:38
*/
#include <stdio.h>

int main()
{
    int N, Fi[3];
    unsigned i;

    while( scanf( "%d", &N ) && N != 0 ){

        Fi[0] = 0;
        Fi[1] = 1;

        for( i = 0; i < N; i++ ){
            Fi[2] = Fi[0] + Fi[1];
            Fi[0] = Fi[1];
            Fi[1] = Fi[2];
        }

        printf( "%d\n", Fi[2] );
    }
    return 0;
}
