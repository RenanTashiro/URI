#include <bits/stdc++.h>

using namespace std;

bool pairCompare( pair<int,int> &FirstP, pair<int,int> &SecondP )
{
    return FirstP.second < SecondP.second;
}

void KuskalMST( list<pair<int,int>> *graph )
{
    int V = graph.size();

}

int main()
{
    ios::sync_with_stdio( false );

    int M, N; // Number of junctions ( Vertex ) and roads ( Edges )

    while( cin >> M >> N && M != 0 )
    {
        list<pair<int,int>> graph[M]; // List adjacent graph {connection,weight}
        int x, y, z, totalCost = 0;   // Bidirectional road between x and y, with weight z
                                      // and total road weight
        for( int i = 0; i < N; i++ )
        {
            cin >> x >> y >> z;
            graph[x].push_back({y,z});
            graph[y].push_back({x,z});
            totalCost += z;
        }
    }

    return 0;
}
