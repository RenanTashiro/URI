/*
Nome:      Estradas Escuras
ID:        1152
Resposta:  Accepted
Linguagem: C++
Tempo:     0.072s
Tamanho:   1,34 KB
Submissao: 07/10/15 10:34:34
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

vi taken;
priority_queue<ii> pq;

void process( int vtx, list<ii> *graph )
{
    taken[vtx] = 1;
    for( auto &a : graph[vtx] ) {
        ii v = a;
        if( !taken[v.first] ) pq.push( ii( -v.second, -v.first ) );
    }
}

int prim( list<ii> *graph, int dim )
{
    taken.assign( dim, 0 );
    process( 0, graph );
    int minCost = 0;
    while( !pq.empty() ) {
        ii front = pq.top(); pq.pop();
        int u = -front.second, w = -front.first;
        if( !taken[u] )
            minCost += w, process( u, graph );
    }

    return minCost;
}

int main()
{
    ios::sync_with_stdio( false );

    int M, N; // Number of junctions ( Vertex ) and roads ( Edges )

    while( cin >> M >> N && M != 0 )
    {
        list<ii> graph[M]; // List adjacent graph {connection,weight}
        int x, y, z, totalCost = 0;   // Bidirectional road between x and y, with weight z
                                      // and total road weight
        for( int i = 0; i < N; i++ )
        {
            cin >> x >> y >> z;
            graph[x].push_back({y,z});
            graph[y].push_back({x,z});
            totalCost += z;
        }

        cout << totalCost - prim( graph, M ) << "\n";
    }

    return 0;
}
