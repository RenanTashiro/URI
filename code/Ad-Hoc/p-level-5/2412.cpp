/*
Nome:      Tarzan
ID:        2412
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.032s
Tamanho:   856 Bytes
Submissao: 19/01/18 12:16:59
*/
#include <bits/stdc++.h>
using namespace std;

int c = 0;

void dfs(int u, int visited[], vector<int> graph[])
{
	visited[u] = 1;
	c++;
	
	for(int i = 0; i < (int)graph[u].size(); i++) {
		int v = graph[u][i];
		
		if(!visited[v])
			dfs(v, visited, graph);			
	}	
}

int main()
{
	int N, D;
	
	scanf("%d%d", &N, &D);
	
	pair<int,int> tree[N];
	
	for(int i = 0; i < N; i++)
		scanf("%d%d", &tree[i].first, &tree[i].second);
		
	vector<int> graph[N];
		
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(hypot((double)tree[i].first - tree[j].first, (double)tree[i].second - tree[j].second) <= D) {
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
		}
	}
	
	int visited[N];
	
	memset(visited, 0, sizeof visited);
	
	dfs(0, visited, graph);
	
	printf("%s\n", (c == N ? "S" : "N"));
}
