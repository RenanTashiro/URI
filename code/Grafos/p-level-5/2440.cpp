/*
Nome:      Famílias de Troia
ID:        2440
Resposta:  Accepted
Linguagem: C++
Tempo:     0.160s
Tamanho:   675 Bytes
Submissao: 10/06/17 18:50:53
*/
#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>> &graph, vector<int> &visited)
{
	visited[u] = 1;
	
	for(int i = 0; i < (int)graph[u].size(); i++)
	{
		if(!visited[graph[u][i]]) 
			dfs(graph[u][i], graph, visited);
	}
}

int main()
{
	int N, M;
	
	cin >> N >> M;
	
	vector<vector<int>> graph(N);
	vector<int> visited(N, 0);
	
	for(int i = 0; i < M; i++)
	{
		int a, b;
		
		cin >> a >> b;
		
		graph[a-1].push_back(b-1);
		graph[b-1].push_back(a-1);
	}
	
	int ans = 0;
	
	for(int i = 0; i < N; i++)
	{
		if(!visited[i])
		{
			dfs(i, graph, visited);
			ans++;
		}
	}
	
	cout << ans << endl;
}
