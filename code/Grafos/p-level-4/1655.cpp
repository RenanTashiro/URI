/*
Nome:      106 Milhas Para Chicago
ID:        1655
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.116s
Tamanho:   604 Bytes
Submissao: 11/01/16 22:45:47
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int V, E;
	
	while(cin >> V && V != 0) 
	{
		cin >> E;
		
		double G[V][V];
		int u, v, p;
		
		for(int i = 0; i < V; i++)
			for(int j = 0; j < V; j++)
				G[i][j] = 0.0;

		for(int i = 0; i < E; i++) {
			cin >> u >> v >> p;
			G[u-1][v-1] = p / 100.0;
			G[v-1][u-1] = p / 100.0;
		}
		
		for(int k = 0; k < V; k++) {
			for(int i = 0; i < V; i++) {
				for(int j = 0; j < V; j++) {
					G[i][j] = max(G[i][j], G[i][k] * G[k][j]);
				}
			}
		}		
		
		printf("%.6lf percent\n", G[0][V-1] * 100);
	}	
}
