/*
Nome:      Desenhando Labirintos
ID:        1076
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   590 Bytes
Submissao: 19/12/16 13:45:08
*/
// Autor: Renan Tashiro
#include <stdio.h>
#define MAXV 55

int main()
{
    int T;

    scanf( "%d", &T );

    while( T-- ){

        int N;
        int V, A;

        scanf( "%d", &N );
        scanf( "%d%d", &V, &A );

        int graph[MAXV][MAXV] = {{0}};

        int counter = 0, v, w;

        while( A-- ){
            scanf( "%d%d", &v, &w );
            if( graph[v][w] == 0 && graph[w][v] == 0 ){
                counter++;
            }
            graph[v][w] = 1;
        }

        printf( "%d\n", counter * 2 );
    }


    return 0;
}
