/*
Nome:      Roteadores
ID:        1774
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,08 KB
Submissao: 11/07/17 20:50:02
*/
/**
// Floyd-Warshall
for(int k = 0; k < V; k++)
	for(int i = 0; i < V; i++)
		for(int j = 0; j < V; j++)
			if(graph[i][k] + graph[k][j] < graph[i][j])
				graph[i][j] = graph[i][k] + graph[k][j];
*/
#include <bits/stdc++.h>
using namespace std;

#define COST first
#define VERTEX second

typedef pair<int,int> ii;

int prim(vector<ii> graph[], int N)
{
	priority_queue<ii, vector<ii>, greater<ii>> next;
	vector<int> visited(N, 0);
	int cost = 0;
	
	next.push(ii(0, 0));
	
	while(!next.empty())
	{
		ii u = next.top();
		next.pop();
	
		if(visited[u.VERTEX]) 
			continue;
		
		cost += u.COST;
		visited[u.VERTEX] = 1;
		
		for(int i = 0; i < (int)graph[u.VERTEX].size(); i++)
		{
			ii v = graph[u.VERTEX][i];
			
			if(!visited[v.VERTEX])
				next.push(v);
		}
	}
	
	return cost;
}

int main()
{
	int R, C;
	
	cin >> R >> C;
	
	vector<ii> graph[R]; 
	
	for(int i = 0; i < C; i++)
	{
		int u, v, c;
		
		cin >> u >> v >> c;
		
		graph[u-1].push_back(ii(c, v-1));
		graph[v-1].push_back(ii(c, u-1));
	}
	
	cout << prim(graph, R) << endl;
}
