/*
Nome:      A Base de um Grafo
ID:        1677
Resposta:  Accepted
Linguagem: C++
Tempo:     2.872s
Tamanho:   997 Bytes
Submissao: 18/08/17 19:31:46
*/
#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> &visited, vector<int> graph[])
{
	visited[u] = 1;
	
	for(int i = 0; i < (int)graph[u].size(); i++)
	{
		int v = graph[u][i];
		
		if(!visited[v])
			dfs(v, visited, graph);
	}
}
int main()
{
	int V, E;
	
	while(scanf("%d", &V) && V)
	{
		scanf("%d", &E);
		
		vector<int> graph[V];
		int u, v;
		
		for(int i = 0; i < E; i++)
		{
			scanf("%d%d", &u, &v);
			
			graph[u-1].push_back(v-1);
		}
		
		vector<vector<int>> visited(V, vector<int>(V, 0)); 
		
		for(int i = 0; i < V; i++)
			dfs(i, visited[i], graph);
		
		bool at_least_one = false;	
			
		for(int i = 0; i < V; i++)
		{
			bool base = true;
			
			for(int j = 0; j < V && base; j++)
				if(visited[i][j] && !visited[j][i])
					base = false;
			
			if(base)
			{
				if(at_least_one)
					printf(" ");
				else
					at_least_one = true;
					
				printf("%d", i + 1);
			}
		}
		
		puts("");
	}
}
