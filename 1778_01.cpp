#include <bits/stdc++.h>

#define INF 1000000
#define MAXV 1005

using namespace std;

void setTowerDmg( int pos, int dmg, int reach, list<int> *graph, int *dmgTable )
{
    queue<pair<int,int>> fil;
    int visited[MAXV] = {0};
    fil.push( {pos,0} );
    while( !fil.empty() ) {
        pair<int,int> act = fil.front();
        visited[get<0>(act)] = 1;
        fil.pop();
        for( auto& a : graph[get<0>(act)] ) {
            if( get<1>(act) < reach && !visited[a] ) {
                fil.push( {a,get<1>(act)+1} );
                dmgTable[a] += dmg;
            }
        }
    }
}

int dijkstra( int pos, int dest, list<int> *graph, int *dmgTable )
{
    int w[MAXV] = {INF};
    int visited[MAXV] = {0};
    queue<int> fil;
    fil.push( pos ), w[pos] = 0, visited[pos] = 1;
    while( !fil.empty() ) {
        int act = fil.front();
        fil.pop();
        for( auto& a : graph[act] ) {
            if( !visited[a] )
                fil.push( a ), visited[a] = 1;
            w[a] = max( w[act] + dmgTable[act], w[a] );
        }
    }
    return w[dest];
}

int main()
{
    ios::sync_with_stdio( false );

    int T, caso = 1;

    cin >> T;

    while( T-- )
    {
        int N, M, F; // Number of vertex, edge and castle position

        cin >> N >> M >> F;

        list<int> graph[N+1];
        int dmgTable[N+1];
        memset( dmgTable, 0, sizeof( dmgTable ) );

        while( M-- )
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back( v );
            graph[v].push_back( u );
        }

        int P; // Number of Tower

        cin >> P;

        while( P-- )
        {
            int V, A, C; // Tower position, attack and reach
            cin >> V >> A >> C;
            setTowerDmg( V, A, C, graph, dmgTable );
        }

        dmgTable[F] = 0; // Castle has no damage

        int Q, succeful = 0; //  Number of monster and number of monster that
                             //  reach the castle
        cin >> Q;

        int w[N+1];

        for( int i = 1; i <= Q; i++ )
        {
            int K, H; // Spawn vertex and life points
            cin >> K >> H;
            w[i] = dijkstra( K, F, graph, dmgTable );
            if( K == F || H > w[i] ) succeful++;
        }

        for( int i = 1; i <= N; i++ )
            cout << i << ' ' << w[i] << "\n";

        cout << "Caso #" << caso++ << ": " << succeful << "\n";
    }

    return 0;
}
