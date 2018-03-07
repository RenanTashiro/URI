/*
Nome:      Sacoleiro
ID:        2326
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,76 KB
Submissao: 13/02/18 10:01:25
*/
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> &visited, vector<int> graph[])
{
	visited[u] = 1;
	
	for(int v : graph[u])
		if(!visited[v])
			dfs(v, visited, graph);
}

vector<int> maxsubsetsum(vector<int> group)
{
	vector<int> set(101, 0);
	
	set[0] = 1;
	
	bool change = true;
	
	while(change) 
	{
		change = false;
		
		for(int i = 0; i < (int)group.size(); i++)
			for(int j = 100; j >= 0; j--)
				if(set[j] == 1 && j + group[i] <= 100 && set[j + group[i]] == 0) {
					set[j + group[i]] = 1;
					change = true;
				}				
	}
	
	return set;
}

int main()
{
	int n, t;
	
	scanf("%d%d", &n, &t);
	
	vector<int> graph[n];
	vector<int> cost(n, -1), type(n, -1);
	int x, p, c, v;
	char tt;
	
	for(int i = 0; i < n; i++)	
	{
		scanf("%d %d %c %d", &x, &p, &tt, &c);
		
		cost[x] = p;
		type[x] = (tt == 'A') ? 1 : 0;
		
		for(int j = 0; j < c; j++)
		{
			scanf("%d", &v);
			
			graph[x].push_back(v);
		}
	}
	
	vector<int> visited(n, 0);
	
	// acha as cidades que sao atingiveis
	dfs(0, visited, graph);
	
	vector<int> A, B;
	
	// pega os indices das cidades para cada grupo
	for(int i = 0; i < n; i++)
	{
		if(visited[i])
		{
			if(type[i] == 1)
				A.push_back(cost[i]);
			else if(type[i] == 0)
				B.push_back(cost[i]);
		}
	}
	
	// calcula todas as possibilidades de somas de cada grupo
	vector<int> As = maxsubsetsum(A), Bs = maxsubsetsum(B);
	int ans = INT_MAX;
	
	// exaustivamente acha aquela que a diferenca eh minima e satisfaz
	// as restricoes
	for(int i = 0; i <= t; i++)
		for(int j = 0; j <= t; j++)
			if(As[i] == 1 && Bs[j] == 1 && i + j != 0 && i + j <= t)
				ans = min(ans, abs(i - j));
				
	printf("%d\n", ans);
}

