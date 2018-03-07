/*
Nome:      Preso no Castelo
ID:        1773
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.096s
Tamanho:   1.005 Bytes
Submissao: 14/01/16 12:19:57
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

int counter;

void BFS(vector<vi> &G, vi keys)
{
	vi in_queue(G.size(), 0), visited(G.size(), 0);
	queue<int> Q;
	Q.push(0), in_queue[0] = 1, visited[0] = 1;
	int cont = 0;
	while(!Q.empty()) {
		int u = Q.front(); Q.pop();
		if(!visited[keys[u]]) {
			Q.push(u); 
			cont++;
			if(cont > 10000) break;
			continue;
		}
		for(int i : G[u]) {
			if(!in_queue[i]) {
				Q.push(i);
				in_queue[i] = 1;
			}
		}
		visited[u] = 1;
		counter++;
	}
}

int main()
{
	int N, M;

	while(scanf("%d%d", &N, &M) != EOF)
	{
		vector<vi> G(N);
		int u, v;
		
		for(int i = 0; i < M; i++) {
			scanf("%d%d", &u, &v); u--, v--;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		
		vi keys(N, 0);
		
		for(int i = 1; i < N; i++) {
			scanf("%d", &keys[i]); keys[i]--;
		}
		
		counter = 0;
		BFS(G, keys);
		
		printf("%s\n", counter == N ? "sim" : "nao");
	}
}
