/*
Nome:      Onde Estão Minhas Chaves
ID:        1800
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   629 Bytes
Submissao: 28/05/15 18:00:12
*/
#include <stdio.h>

int main()
{
    int Q, E;

    scanf( "%d%d", &Q, &E );

    int visitados[1001] = {0};
    unsigned i, j;

    for( i = 0; i < E; i++ ){
        scanf( "%d", &visitados[i] );
    }

    int verificar;

    for( i = 0; i < Q; i++ ){
        scanf( "%d", &verificar );
        for( j = 0; j < E; j++ ){
            if( verificar == visitados[j] ){
                printf( "%d\n", 0 );
                break;
            }
        }
        if( j == E ){
            printf( "%d\n", 1 );
            visitados[E] = verificar;
            E++;
        }
    }

    return 0;
}
