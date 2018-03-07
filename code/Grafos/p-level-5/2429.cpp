/*
Nome:      Rodovia
ID:        2429
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   639 Bytes
Submissao: 06/02/18 17:59:20
*/
#include <bits/stdc++.h>
using namespace std;

void dfs(int u, int &c, vector<int> &visited, vector<int> graph[], int n)
{
	visited[u] = 1;
	c++;
	
	for(int v : graph[u])
		if(!visited[v])
			dfs(v, c, visited, graph, n);
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	vector<int> g[n], rg[n];
	int u, v;
	
	for(int i = 0; i < n; i++) {
		scanf("%d%d", &u, &v); u--; v--;
		g[u].push_back(v);
		rg[v].push_back(u);
	}

	vector<int> v1(n, 0), v2(n, 0);
	int c1 = 0, c2 = 0;
	
	dfs(0, c1, v1, g, n);
	
	if(c1 == n)
		dfs(0, c2, v2, rg, n);
	
	if(c1 == n && c2 == n)
		puts("S");
	else
		puts("N");
}
