#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

pair<vi,vi> dijkstra(vector<vi> &G, int src)
{
	priority_queue<ii, vector<ii>, greater<ii>> PQ;
	vi dist(G.size(), INT_MAX), parent(G.size(), src);
	PQ.push(ii(0,src)), dist[src] = 0;
	while(!PQ.empty()) {
		ii u = PQ.top(); PQ.pop();
		if(u.first > dist[u.second]) continue;
		for(int v = 0; v < (int)G.size(); v++) {
			if(u.second == v) continue;
			if(dist[u.second] + G[u.second][v] < dist[v]) {
				dist[v] = dist[u.second] + G[u.second][v];
				PQ.push(ii(dist[v], v));
				parent[v] = u.second;
			}
		}
	}
	return {dist, parent};
}

int main()
{
	int TC;
	
	scanf("%d", &TC);
	
	while(TC--)
	{
		int N;
		
		scanf("%d", &N);
		
		unordered_map<string,int> vtx_index;
		string name;
		
		for(int i = 0 ; i < N; i++) {
			cin >> name;
			vtx_index[name] = i;
		}
		
		vector<vi> G(N, vi(N));
		
		for(int i = 0; i < N; i++) 
			for(int j = 0; j < N; j++)
				scanf("%d", &G[i][j]);
				
		vector<pair<vi,vi>> table(N);
		string employ, u, v;
		int Q;
		
		scanf("%d", &Q);
		
		while(Q--) {
			cin >> employ >> u >> v;			
			int src = vtx_index[u], dest = vtx_index[v];
			if(table[src].first.empty()) {
				table[src] = dijkstra(G, src);
			}
			printf("%d\n", table[src].first[dest]);
		}			
	}
}
