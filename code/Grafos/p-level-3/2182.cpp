/*
Nome:      Luciano e a Bicicletinha
ID:        2182
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   1,4 KB
Submissao: 11/01/18 13:33:32
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

pair<int,double> bfs(const vector<vii> &graph, int visited[], int src)
{
	queue<int> Q;
	
	Q.push(src);
	
	int greater = src;
	int total = 0, number = 0;
	
	vector<bool> lvisited(graph.size(), false);
	
	while(!Q.empty())
	{
		int u = Q.front(); Q.pop();
		
		lvisited[u] = true;
		
		for(auto i : graph[u])
		{	
			if(!lvisited[i.first]) {
				total += i.second;
				number++;
			}
						
			if(!visited[i.first])
			{
				visited[i.first] = 1;
				Q.push(i.first);
				greater = max(greater, i.first);
			}
		}
	}
	
	if(number == 0)
		return {src, 0};
	
	return {greater, (double)total / number};
}

int main()
{
	int N, M;
	
	scanf("%d%d", &N, &M);
	
	vector<vii> graph(N);
	int X, Y, B;
	
	for(int i = 0; i < M; i++) {
		scanf("%d%d%d", &X, &Y, &B);
		graph[X-1].push_back(ii(Y-1, B));
		graph[Y-1].push_back(ii(X-1, B));
	}
	
	double min_average = DBL_MAX;
	int visited[N], pos = -1;
	
	memset(visited, 0, sizeof visited);
	
	for(int i = 0; i < N; i++)
	{
		if(!visited[i]) {
			visited[i] = 1;
			pair<int, double> sol = bfs(graph, visited, i);

			if(sol.second < min_average) {
				min_average = sol.second;
				pos = sol.first;
			} else if(sol.second == min_average) {
				pos = max(pos, sol.first);
			}
		}
	}
	
	printf("%d\n", pos + 1);
}
