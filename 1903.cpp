#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

void DFS(vector<vi> &G, vi &visited, int u) 
{
	visited[u] = 1;
	for(int i : G[u]) {
		if(!visited[i]) {
			DFS(G, visited, i);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	
	int N, M;
	
	cin >> N >> M;

	vector<vi> G(N), rG(N);
	int u, v;
	
	for(int i = 0; i < M; i++) {
		cin >> u >> v; u--, v--;
		G[u].push_back(v);
		rG[v].push_back(u);
	}
	
	vi visited(N,0), rvisited(N,0);
	DFS(G, visited, 0);
	DFS(rG, rvisited, 0);
	
	bool flag = true;
	
	for(int i = 0; i < N; i++) {
		if(!visited[i] && !rvisited[i]) flag = false;
	}
	
	cout << (flag ? "Bolada" : "Nao Bolada") << endl;
}
