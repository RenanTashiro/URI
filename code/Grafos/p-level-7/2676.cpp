/*
Nome:      Cidade no Centro
ID:        2676
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   1,01 KB
Submissao: 19/09/17 16:08:22
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	
	while(cin >> N >> M && N)
	{
		int graph[N][N];
		
		for(int i = 0; i < N; i++)
			for(int j = 0; j < N; j++)
				if(i == j)
					graph[i][j] = 0;
				else
					graph[i][j] = 20000;
		
		for(int i = 0; i < M; i++)
		{
			int u, v, w;
			
			cin >> u >> v >> w;
			
			graph[u-1][v-1] = min(graph[u-1][v-1], w);
			graph[v-1][u-1] = min(graph[u-1][v-1], w);
		}
		
		for(int k = 0; k < N; k++)
			for(int i = 0; i < N; i++)
				for(int j = 0; j < N; j++)
					graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
					
		vector<pair<int,int>> v_dist;
		
		for(int i = 0; i < N; i++) {
			v_dist.push_back({0, i+1});
			for(int j = 0; j < N; j++)
				v_dist[i].first += graph[i][j];
		}
		
		sort(v_dist.begin(), v_dist.end());
		
		int min_dist = v_dist[0].first;
		
		for(int i = 0; i < (int)v_dist.size() && v_dist[i].first == min_dist; i++)
			cout << v_dist[i].second << ' ';
		
		cout << endl;
	}
}
