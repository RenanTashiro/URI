/*
Nome:      DFSr - Hierarquia de Profundidade
ID:        1081
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,27 KB
Submissao: 19/12/16 13:44:09
*/
// Autor: Renan Tashiro
#include <stdio.h>

#define Graph int
#define MAXV 20

int flag = 0;

void DFS( Graph matrix[MAXV][MAXV], size_t dim, const int actual, int visited[], int space )
{
    unsigned i;
    visited[actual] = 1;
    for( i = 0; i < dim; i++ ){
        if( matrix[actual][i] ){
            if( !visited[i] ) printf( "%*s%d-%d pathR(G,%d)\n", space, "  ", actual, i, i );
            else printf( "%*s%d-%d\n", space, "  ", actual, i );
            flag = 1;
            if( !visited[i] ){
                visited[i] = 1;
                DFS( matrix, dim, i, visited, space + 2 );
            }
        }
    }
}

int main()
{
    int N, caso = 1;

    scanf( "%d", &N );

    while( N-- ){

        int V, A;
        unsigned i;

        scanf( "%d%d", &V, &A );

        Graph adj[MAXV][MAXV] = {{0}};
        int v, w;

        for( i = 0; i < A; i++ ){
            scanf( "%d%d", &v, &w );
            adj[v][w] = 1;
        }

        int visited[MAXV] = {0};

        printf( "Caso %d:\n", caso++ );

        for( i = 0; i < V; i++ ){
            flag = 0;
            if( !visited[i] ){
                DFS( adj, V, i, visited, 2 );
                if( flag ) puts( "" );
            }
        }
    }

    return 0;
}