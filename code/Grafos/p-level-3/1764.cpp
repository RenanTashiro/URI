/*
Nome:      Itinerário do Papai Noel
ID:        1764
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.044s
Tamanho:   1 KB
Submissao: 21/12/15 15:41:20
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

struct Vertex {
	vector<ii> adj;
};

vi taken;
priority_queue<ii> Q;

void process(int u, vector<Vertex> &graph)
{
	taken[u] = 1;
	for(int i = 0; i < (int) graph[u].adj.size(); i++) {
		ii v = graph[u].adj[i];
		if(!taken[v.first]) Q.push(ii(-v.second, -v.first));
	}
}

int Prim(vector<Vertex> &graph, int src, const int N)
{
	taken.assign(N, 0);
	process(0, graph);
	int min_cost = 0;
	while(!Q.empty()) {
		ii v = Q.top(); Q.pop();
		int u = -v.second, w = -v.first;
		if(!taken[u]) {
			min_cost += w, process(u, graph);
		}
	}
	
	return min_cost;
}


int main()
{
	ios::sync_with_stdio(false);
	
	int M, N;
	
	while(cin >> M >> N && M != 0)
	{
		int X, Y, Z;
		vector<Vertex> graph(M);
		
		for(int i = 0; i < N; i++) {
			cin >> X >> Y >> Z;
			graph[X].adj.push_back(ii(Y, Z));
			graph[Y].adj.push_back(ii(X, Z));
		}
		
		cout << Prim(graph, 0, M) << endl;
	}
}