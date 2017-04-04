#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi partner, visited;
int counter;
void BFS(vector<vi> &G, int u)
{
	queue<int> Q;
	Q.push(u); visited[u] = 1;
	while(!Q.empty()) {
		int u = Q.front(); Q.pop();
		if(partner[u] == -1 && partner[G[u].front()] == -1) {
			partner[u] = G[u].front();
			partner[G[u].front()] = u;
			counter += 2;
		}
		if(visited[G[u].front()] == 0) {
			Q.push(G[u].front());		
			visited[G[u].front()] = 1;
		}
	}			
}

int main()
{
	int N;
	
	while(scanf("%d", &N) != EOF) 
	{
		vector<vi> G(N+1);
		int v;
		
		for(int u = 1; u <= N; u++) {
			scanf("%d", &v);
			G[u].push_back(v);			
		}		
		
		partner.assign(N+1, -1), visited.assign(N+1, 0);
		counter = 0;
		
		for(int i = 1; i <= N; i++) {
			if(!visited[i]) {
				BFS(G, i);
			}
		}
		
		if(counter == N) {
			printf("%d", partner[1]);
			for(int i = 2; i < (int)G.size(); i++) {
				printf(" %d", partner[i]);
			}
			puts("");
		}
		else {
			puts("IMPOSSIBLE");
		}
	}
}
