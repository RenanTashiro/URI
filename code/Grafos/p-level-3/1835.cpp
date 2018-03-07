/*
Nome:      Promessa de Campanha
ID:        1835
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.024s
Tamanho:   1 KB
Submissao: 20/05/16 14:45:35
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

void dfs_util(int u, vector<vi> &G, int visited[])
{
	visited[u] = 1;
	
	for(int i = 0; i < int(G[u].size()); i++) {
		if(!visited[G[u][i]]) {
			dfs_util(G[u][i], G, visited);
		}
	}
}

int dfs(vector<vi> &G, int visited[])
{
	int counter = 0;
	
	for(int i = 0; i < int(G.size()); i++) {
		if(!visited[i]) {			
			dfs_util(i, G, visited);
			counter++;
		}
	}
	
	return counter;
}

int main()
{
	int T;
	
	scanf("%d", &T);
	
	for(int t = 1; t <= T; t++) 
	{
		int N, M;
		
		scanf("%d%d", &N, &M);
		
		vector<vi> G(N);
		int x, y, visited[N];
		
		memset(visited, 0, sizeof visited);
		
		for(int i = 0; i < M; i++) {
			scanf("%d%d", &x, &y);
			G[x-1].push_back(y-1);
			G[y-1].push_back(x-1);
		}
		
		printf("Caso #%d: ", t);			
		
		int ans = dfs(G, visited);
		
		if(ans == 1)
			puts("a promessa foi cumprida");
		else 
			printf("ainda falta(m) %d estrada(s)\n", ans-1);		
	}
}
