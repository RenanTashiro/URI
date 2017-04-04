#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int dijkstra(vector<vector<ii>> &G)
{
	queue<int> Q;
	vector<int> W(G.size(), INT_MAX);
	Q.push(0);
	W[0] = 0;
	while(!Q.empty()) {
		int act = Q.front(); Q.pop();
		for(auto &g : G[act]) {
			if(W[act] + g.second < W[g.first]) {
				W[g.first] = W[act] + g.second;
				Q.push(g.first);
			}
		}
	}
	return W[G.size()-1] == INT_MAX ? -1 : W[G.size()-1];
}

int main()
{
	ios::sync_with_stdio(false);

	int C, V, u, v, w;
	
	cin >> C >> V;

	vector<vector<ii>> G(C);
	
	for(int i = 0; i < V; i++) {
		cin >> u >> v >> w;
		G[u-1].push_back(ii(v-1,w));
		G[v-1].push_back(ii(u-1,w));
	}
	
	vector<vector<ii>> new_G(C);
	
	for(int i = 0; i < C; i++) {
		for(auto &g : G[i]) {			
			for(auto &v : G[g.first]) {
				if(v.first != i) 
					new_G[i].push_back(ii(v.first,g.second+v.second));
			}
		}
	}
	
	cout << dijkstra(new_G) << endl;
}
