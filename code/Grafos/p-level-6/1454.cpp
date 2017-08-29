/*
Nome:      O País das Bicicletas
ID:        1454
Resposta:  Accepted
Linguagem: C++
Tempo:     0.300s
Tamanho:   1,16 KB
Submissao: 22/01/16 18:29:07
*/
#include <bits/stdc++.h>

#define mk(x,y,z) {x,{y,z}}

using namespace std;

typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int dijkstra(vector<vector<ii>> &G, int src, int sink)
{
	priority_queue<iii, vector<iii>, greater<iii>> pq;
	vector<int> visited(G.size(), 0);
	pq.push(mk(0,INT_MIN,src)); // Edge, Max Edge, vertex
	int ans = INT_MAX;
	while(!pq.empty()) {
		iii u = pq.top(); pq.pop();
		if(u.second.second == sink) {
			ans = min(ans, u.second.first);
		}
		visited[u.second.second] = 1;
		for(ii i : G[u.second.second]) {
			if(!visited[i.first]) {
				pq.push(mk(i.second, max(u.second.first, i.second), i.first));
			}
		}
	}
	return ans == INT_MIN ? 0 : ans;
}

int main()
{
	int N, M, TC = 1;
	
	while(scanf("%d%d", &N, &M) && N != 0)
	{
		vector<vector<ii>> G(N);
		int u, v, h;
		
		for(int i = 0; i < M; i++) {
			scanf("%d%d%d", &u, &v, &h); u--, v--;
			G[u].push_back(ii(v, h));
			G[v].push_back(ii(u, h));
		}
		
		int Q;
		
		printf("Instancia %d\n", TC++);

		scanf("%d", &Q);
		
		while(Q--) {
			scanf("%d%d", &u, &v); u--, v--;			
			printf("%d\n", dijkstra(G, u, v));
		}

		puts("");
	}
}
