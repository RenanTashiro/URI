/*
Nome:      Ir e Vir
ID:        1128
Resposta:  Accepted
Linguagem: C++
Tempo:     0.068s
Tamanho:   770 Bytes
Submissao: 06/01/16 17:38:27
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int counter;

void DFS(vector<vi> &G, vi &visited, int u)
{
	visited[u] = 1;
	for(int i : G[u]) {
		if(visited[i] == 0) {
			DFS(G, visited, i);
		}
	}
	counter++;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int N, M;
	
	while(cin >> N >> M && N != 0)
	{
		vector<vi> G(N), rG(N);
		int V, W, P;
		
		for(int i = 0; i < M; i++) {
			cin >> V >> W >> P; V--, W--;
			G[V].push_back(W);			
			rG[W].push_back(V);			
			if(P == 2) {
				G[W].push_back(V);
				rG[V].push_back(W);			
			}
		}
				
		vi visited(N, 0), rvisited(N, 0);
		counter = 0;
		DFS(G, visited, 0);
		DFS(rG, rvisited, 0);
		
		cout << (counter == 2 * N ? 1 : 0) << '\n';
	}	
}