#include <bits/stdc++.h>

using namespace std;

#define MAXV 550
#define INF 999999999
#define EMPTY -1

int dijkstra(int pos, int dest, int **graph)
{
    int *w = ( int* ) malloc( sizeof( int ) * MAXV );
    for(int i = 0; i < MAXV; i++) w[i] = INF; w[pos] = 0;
    queue<int> toVisit; toVisit.push(pos);
    while(!toVisit.empty()) {
        int act = toVisit.front(); toVisit.pop();
        for(auto g : graph[act]) {
            if(w[g] > w[act] + graph[g]) {
                w[g] = w[act] + graph[g];
                toVisit.push(g);
            }
        }
    }
    return w[dest];
}

int main()
{
    int N, E;

    while( scanf( "%d%d", &N, &E ) && N != 0 ){

        int X, Y, H;
        unsigned i;

        list<int> graph[N+1];

        for( i = 0; i < E; i++ ){
            scanf( "%d%d%d", &X, &Y, &H );
            graph[X]push_back(H);
            if( adj[Y-1][X-1] != EMPTY ) {
                adj[X-1][Y-1] = 0;
                adj[Y-1][X-1] = 0;
            }
        }

        int K, O, D;

        scanf( "%d", &K );

        while( K-- ){
            scanf( "%d%d", &O, &D );
            // int ans = dijkstra( adj, O - 1, D - 1, N );
            if( ans == INF )
                puts( "Nao e possivel entregar a carta" );
            else
                printf( "%d\n", ans );
        }

        puts( "" );
    }

    return 0;
}
