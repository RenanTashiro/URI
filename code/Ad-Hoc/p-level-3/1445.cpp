/*
Nome:      Quem Vai à Festa?
ID:        1445
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.024s
Tamanho:   567 Bytes
Submissao: 07/01/16 18:40:20
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi visited;
int counter = 0;

void DFS(vector<vi> &G, int u) 
{
	visited[u] = 1; counter++;
	for(int i : G[u]) {
		if(!visited[i]) {
			DFS(G, i);
		}
	}
}

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		vector<vi> G(1001);
		int u, v;
		
		for(int i = 0; i < N; i++) {
			scanf(" (%d,%d)", &u, &v);
			G[u].push_back(v);
			G[v].push_back(u);
		}
		
		visited.assign(1001, 0); counter = 0;
		DFS(G, 1);
		
		printf("%d\n", counter);
	}
}
