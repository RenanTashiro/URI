/*
Nome:      Top N
ID:        1943
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   321 Bytes
Submissao: 20/10/15 20:21:57
*/
#include <stdio.h>

int main()
{
    int rank[] = { 1, 3, 5, 10, 25, 50, 100 };
    int K, i;

    scanf( "%d", &K );

    for( i = 0; i < sizeof( rank ) / sizeof( int ); i++ ) {
        if( K <= rank[i] ) {
            printf( "Top %d\n", rank[i] );
            break;
        }
    }

    return 0;
}
