#include <bits/stdc++.h>

#define INF 100000
#define MAXV 1005

using namespace std;

typedef pair<int,int> ii;

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

vector<int> dijkstra( int pos, list<int> graph[], int dmg[])
{
	priority_queue<ii> PQ;
	vector<int> W(MAXV, INF);
	PQ.push(ii(0,pos)); W[pos] = 0;
	while(!PQ.empty()) {
		ii u = PQ.top(); PQ.pop();
		if(u.first > W[u.second]) continue;
		for(int v : graph[u.second]) {
			if(W[u.second] + dmg[v] < W[v]) {
				W[v] = W[u.second] + dmg[v];
				PQ.push(ii(W[v], v));
			}
		}
	}
	return W;
}

int main()
{
    int T, caso = 1;

    scanf("%d", &T);

    while( T-- )
    {
        int N, M, F; // Number of vertex, edge and castle position

        scanf("%d%d%d", &N, &M, &F);

        list<int> graph[N+1];
        int dmgTable[N+1];
        memset( dmgTable, 0, sizeof( dmgTable ) );

        while( M-- )
        {
            int u, v;
            scanf("%d%d", &u, &v);
            graph[u].push_back( v );
            graph[v].push_back( u );
        }

        int P; // Number of Tower

        scanf("%d", &P);

        while( P-- )
        {
            int V, A, C; // Tower position, attack and reach
            scanf("%d%d%d", &V, &A, &C);
            setTowerDmg( V, A, C, graph, dmgTable );
        }

        dmgTable[F] = 0; // Castle has no damage
        vector<int> vert = dijkstra( F, graph, dmgTable );

        int Q, succeful = 0; //  Number of monster and number of monster that
                             //  reach the castle
        scanf("%d", &Q);

        while( Q-- )
        {
            int K, H; // Spawn vertex and life points
            scanf("%d%d", &K, &H);
            if( K == F || vert[K] < H ) succeful++;
        }

		printf("Caso #%d: %d\n", caso++, succeful);        
    }

    return 0;
}
