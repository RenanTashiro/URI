#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi visited, top;

void topological_sort(vector<vi> &G, int u)
{
	visited[u] = 1;
	for(int i : G[u]) {
		if(!visited[i]) {
			topological_sort(G, i);
		}
	}
	top.push_back(u);
}

int main()
{
	int V, E;
	
	while(scanf("%d", &V) && V != 0) 
	{
		scanf("%d", &E);
		
		vector<vi> G(V);
		int u, v;
		
		for(int i = 0; i < E; i++) {
			scanf("%d%d", &u, &v);
			G[u-1].push_back(v-1);
		}
			
		top.clear(); visited.assign(V, 0);
		topological_sort(G, 0);
		
		for(int i : top) {
			printf("%d\n", i);
		}
	}
}
