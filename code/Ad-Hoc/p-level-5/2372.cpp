/*
Nome:      Reunião
ID:        2372
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   683 Bytes
Submissao: 06/02/18 16:30:58
*/
#include <bits/stdc++.h>
using namespace std;

#define INF (int)10e7

int main()
{
	int n, m;
	
	scanf("%d%d", &n, &m);
	
	vector<vector<int>> G(n, vector<int>(n, INF));
	int u, v, w;
	
	for(int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &u, &v, &w);
		G[u][v] = w;
		G[v][u] = w;
	}
	
	int ans = INT_MAX;
	
	for(int k = 0; k < n; k++) 
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				G[i][j] = min(G[i][j], G[i][k] + G[k][j]);			
			
	for(int j = 0; j < n; j++) {
		int lans = 0;
		
		for(int i = 0; i < n; i++)	{
			if(G[i][j] != INF)
				lans = max(lans, G[i][j]);
		}
		
		ans = min(ans, lans);
	}
			
	printf("%d\n", ans);
}
