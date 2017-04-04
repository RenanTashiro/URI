#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi low, num, visited;
int counter;

void Tarjan(vector<vi> &G, int u)
{
	low[u] = num[u] = counter++;
	visited[u] = 1;
	for(int i : G[u]) {
		if(num[i] == -1) {
			Tarjan(G, i);
		}
		if(visited[i]) {
			low[u] = min(low[u], low[i]);
		}
	}
}

int main()
{
	int T;

	scanf("%d", &T);
	
	while(T--) 
	{
		int N, M;
		
		scanf("%d%d", &N, &M);
		
		vector<vi> G(N);
		int u, v;
		
		for(int i = 0; i < M; i++) {
			scanf("%d%d", &u, &v);
			G[u].push_back(v);
			G[v].push_back(u);
		}
		
		low.assign(N, 0); num.assign(N, -1); visited.assign(N, 0);
		counter = 0;
		
		for(int i = 0; i < N; i++) {
			if(num[i] == -1)
				Tarjan(G, 0);		
		}
		
		for(int i = 0; i < N; i++) {
			printf("Num: %d Low: %d\n", num[i], low[i]);
		}
	}
}
