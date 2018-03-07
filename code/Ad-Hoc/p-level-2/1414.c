/*
Nome:      Copa do Mundo
ID:        1414
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   367 Bytes
Submissao: 24/07/15 12:21:02
*/
#include <stdio.h>

int main()
{
    int T, N;

    while( scanf( "%d%d", &T, &N ) && T != 0 ){

        char time[20];
        int pts, total = 0;
        unsigned i;

        for( i = 0; i < T; i++ ){
            scanf( "%s%d", time, &pts );
            total += pts;
        }

        printf( "%d\n", 3 * N - total );
    }

    return 0;
}
