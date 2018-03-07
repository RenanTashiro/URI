/*
Nome:      Parceiros de Telecomunicação
ID:        1344
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.068s
Tamanho:   1,4 KB
Submissao: 14/01/16 18:01:01
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

vi max_set(vector<vi> &G, int K)
{
	priority_queue<ii, vector<ii>, greater<ii>> pq; // (size, vertex)
	vi size(G.size());
	for(int i = 0; i < (int)G.size(); i++) {
		pq.push(ii((int)G[i].size(), i));
		size[i] = (int)G[i].size();
	}
	vi visited(G.size(), 0);
	while(!pq.empty()) {
		ii u = pq.top(); pq.pop();		
		if(visited[u.second]) continue;
		if(u.first < K) {
			for(int i : G[u.second]) {				
				pq.push(ii(--size[i], i));
			}
		} 
		visited[u.second] = 1;
	}
	return size;
}

vi visited;

int BFS(vector<vi> &G, vi size, int src, int K)
{
	queue<int> Q;
	Q.push(src); visited[src] = 1;
	int counter = 0;
	while(!Q.empty()) {
		int u = Q.front(); Q.pop();
		counter++;
		for(int i : G[u]) {
			if(!visited[i] && size[i] >= K) {
				Q.push(i);
				visited[i] = 1;
			}
		}
	}	
	return counter;
}

int main()
{
	ios::sync_with_stdio(false);

	int N, P, K;
	
	while(cin >> N >> P >> K && N != 0) 
	{
		vector<vi> G(N);
		int u, v;
		
		while(P--) {
			cin >> u >> v; u--, v--;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		
		vi size = max_set(G, K);
					
		int ans = 0;
		visited.assign(N, 0);
		
		for(int i = 0; i < N; i++) {
			if(size[i] >= K && !visited[i]) {
				ans = max(ans, BFS(G, size, i, K));
			}
		}
		
		cout << ans << endl;
	}
}