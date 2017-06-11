#include <bits/stdc++.h>

#define INF 100000
#define MAXV 1005

using namespace std;

void setTowerDmg(int pos, int dmg, int reach, list<int> *graph, int *dmgTable, int *visited) {
    for(auto a : graph[pos]) {
        if(!visited[a] && reach > 0) {
            dmgTable[a] += dmg;
            visited[a] = 1;
            setTowerDmg(a, dmg, reach-1, graph, dmgTable, visited);
        }
    }
}

int* dijkstra(int pos, list<int> *graph, int *dmgTable)
{
    int *w = ( int* ) malloc( sizeof( int ) * MAXV );
    for(int i = 0; i < MAXV; i++) w[i] = INF; w[pos] = 0;
    queue<int> toVisit; toVisit.push(pos);
    while(!toVisit.empty()) {
        int act = toVisit.front(); toVisit.pop();
        for(auto g : graph[act]) {
            if(w[g] > w[act] + dmgTable[g]) {
                w[g] = w[act] + dmgTable[g];
                toVisit.push(g);
            }
        }
    }
    return w;
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
            int visited[MAXV] = {0}; visited[V] = 1;
            setTowerDmg( V, A, C, graph, dmgTable, visited );
        }

        for(int i = 1; i <= N; i++) {
            cout << dmgTable[i] << "\n";
        }

        dmgTable[F] = 0; // Castle has no damage
        int *vert = dijkstra( F, graph, dmgTable );

        int Q, succeful = 0; //  Number of monster and number of monster that
                             //  reach the castle
        cin >> Q;

        while( Q-- )
        {
            int K, H; // Spawn vertex and life points
            cin >> K >> H;
            if( K == F || vert[K] < H ) succeful++;
        }

        cout << "Caso #" << caso++ << ": " << succeful << "\n";
    }

    return 0;
}
