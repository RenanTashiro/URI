#include <stdio.h>
#include <string.h>

#define Graph int
#define MAXV 20

int flag = 0;
int global_visited[MAXV];

void DFS( Graph matrix[MAXV][MAXV], size_t dim, const int actual, int visited[], int space )
{
    global_visited[actual] = 1;
    unsigned i;

    for( i = 0; i < dim; i++ ){
        if( matrix[actual][i] && !visited[i] ){
            if( global_visited[i] == 0 ) printf( "%*s%d-%d pathR(G,%d)\n", space, "  ", actual, i, i );
            else printf( "%*s%d-%d\n", space, "  ", actual, i );
            global_visited[i] = visited[i] = flag = 1;
            DFS( matrix, dim, i, visited, space + 2 );
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
        memset( global_visited, 0, sizeof( global_visited ) );

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
