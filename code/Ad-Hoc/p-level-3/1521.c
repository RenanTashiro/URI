/*
Nome:      O Culpado
ID:        1521
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   385 Bytes
Submissao: 12/06/15 15:21:57
*/
#include <stdio.h>

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 ){

        int Ni[N], K;
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d", &Ni[i] );
        }

        scanf( "%d", &K );

        while( K !=  Ni[K-1] ){
            K = Ni[K-1];
        }

        printf( "%d\n", K );
    }

    return 0;
}
