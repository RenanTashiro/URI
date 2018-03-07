/*
Nome:      Transmissão de Energia
ID:        2300
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.076s
Tamanho:   779 Bytes
Submissao: 11/10/16 09:58:46
*/
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool solve(vector<vi> &G)
{
	queue<int> Q;
	int c = 1, visited[105] = {0};
	Q.push(0);
	visited[0] = 1;
	while(!Q.empty())
	{
		int u = Q.front(); Q.pop();
		for(auto v : G[u])
		{
			if(!visited[v])
			{
				Q.push(v);
				visited[v] = 1;
				c++;
			}
		}
	}
	
	return c == (int)G.size();
}

int main()
{
	int E, L, teste = 1;
	
	while(scanf("%d%d", &E, &L) && E != 0)
	{
		vector<vi> G(E);
		
		for(int i = 0; i < L; i++)
		{
			int X, Y;
			scanf("%d%d", &X, &Y);
			G[X-1].push_back(Y-1);
			G[Y-1].push_back(X-1);
		}
		
		printf("Teste %d\n", teste++);
		
		if(solve(G))
		{
			puts("normal\n");
		}
		else
		{
			puts("falha\n");
		}
		
	}
}
