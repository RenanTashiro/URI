#include <bits/stdc++.h>

#define INF 1000

using namespace std;

vector<vector<int>> floyd_warshell(vector<vector<int>> graph, int SIZE)
{
	for(int k = 0; k < SIZE; k++) {
		for(int i = 0; i < SIZE; i++) {
			for(int j = 0; j < SIZE; j++) {
				if(graph[i][k] + graph[k][j] < graph[i][j])
					graph[i][j] = graph[i][k] + graph[k][j];
			}
		}
	}
	for(int i = 0; i < SIZE; i++) {
		for(int j = 0; j < SIZE; j++) {		
			printf("%d ", graph[i][j] == INF ? 0 : graph[i][j]);
		}
		puts("");
	}	
	return graph;
}

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		vector<vector<int>> G(N*N, vector<int>(N*N, INF));
		int north, south, west, east, idx = 0;	
	
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				scanf("%d%d%d%d", &north, &south, &west, &east);
				if(north)
					G[idx][idx+N] = 1;
				if(south)
					G[idx][idx-N] = 1;
				if(west)
					G[idx][idx-1] = 1;
				if(east)
					G[idx][idx+1] = 1;
				idx++;
			}
		}
		
		vector<vector<int>> dist = floyd_warshell(G, N*N);
		
		int P, x1, y1, x2, y2;
		
		scanf("%d", &P);
		
		int index[N][N], value = N*N;
		
		for(int i = N-1; i >= 0; i--) {
			for(int j = N-1; j >= 0; j--) {
				index[i][j] = --value;
			}
		}
		
		while(P--) {
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			/*if(ans == INF) {
				puts("Impossible");
			}
			else {
				printf("%d\n", ans);
			}*/
			printf("%d\n", dist[index[x1][y1]][index[x2][y2]]);
		}
	}
}
/*
 0  1  2  3  
 4  5  6  7
 8  9 10 11
12 13 14 15

14 15 16 17
10 11 12 13
 5  6  7  8
 1  2  3  4 
*/
