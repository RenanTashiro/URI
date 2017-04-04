#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

#define MAXV 550
#define INF 999999999
#define EMPTY -1

int minDistance( int dist[], int visited[], const int V )
{
    int min = INF, min_index;
    int v;
    for( v = 0; v < V; v++ ) {
        if( visited[v] == EMPTY && dist[v] <= min ) {
            min = dist[v], min_index = v;
        }
    }

    return min_index;
}

int dijkstra( int** graph, const int src, const int dest, const int V )
{
    int dist[V];
    int visited[V];
    unsigned i;

    for( i = 0; i < V; i++ )
        dist[i] = INF, visited[i] = EMPTY;

    dist[src] = 0;

    int count;

    for( count = 0; count < V - 1; count++ ) {
        int u = minDistance( dist, visited, V );
        int v;

        visited[u] = 1;

        for( v = 0; v < V; v++ ) {
            if( visited[v] == EMPTY && graph[u][v] != EMPTY && dist[u] != INF
                                    && dist[u] + graph[u][v] < dist[v] )
                dist[v] = dist[u] + graph[u][v];
        }
    }

    return dist[dest];
}

int main()
{
    int N, E;

    while( scanf( "%d%d", &N, &E ) && N != 0 ){

        int X, Y, H;
        unsigned i;

        int** adj = ( int** ) malloc( N * sizeof( int* ) );

        for( i = 0; i < N; i++ )
            adj[i] = ( int* ) malloc( N * sizeof( int ) );

        for( i = 0; i < N; i++ )
            memset( adj[i], EMPTY, sizeof( int ) * N );

        for( i = 0; i < E; i++ ){
            scanf( "%d%d%d", &X, &Y, &H );
            adj[X-1][Y-1] = H;
            if( adj[Y-1][X-1] != EMPTY ) {
                adj[X-1][Y-1] = 0;
                adj[Y-1][X-1] = 0;
            }
        }

        int K, O, D;

        scanf( "%d", &K );

        while( K-- ){
            scanf( "%d%d", &O, &D );
            int ans = dijkstra( adj, O - 1, D - 1, N );
            if( ans == INF )
                puts( "Nao e possivel entregar a carta" );
            else
                printf( "%d\n", ans );
        }

        puts( "" );
    }

    return 0;
}
