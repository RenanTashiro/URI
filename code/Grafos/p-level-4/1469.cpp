/*
Nome:      Chefe
ID:        1469
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.084s
Tamanho:   1,53 KB
Submissao: 21/12/15 11:16:39
*/
#include <bits/stdc++.h>

#define WHITE 0
#define GREY 1
#define BLACK 2

using namespace std;

struct Vertice {
	vector<int> adj;
	int age, visited;
};

int min_age;

void DFS_Visit(vector<Vertice> &graph, int orign)
{
	if(graph[orign].visited != BLACK && graph[orign].age < min_age) {
		min_age = graph[orign].age;
	}
	
	for(int i = 0; i < (int) graph[orign].adj.size(); i++) {
		int v = graph[orign].adj[i];
		if(graph[v].visited == WHITE) {
			graph[orign].visited = GREY;
			DFS_Visit(graph, v);
		}
	}
	
	graph[orign].visited = BLACK;
}

inline void DFS(vector<Vertice> &graph, int orign)
{
	for(int i = 0; i < (int) graph.size(); i++) {
		graph[i].visited = WHITE;
	}
	
	min_age = INT_MAX;
	graph[orign].visited = BLACK;
	DFS_Visit(graph, orign);
}

int main()
{
	ios::sync_with_stdio(false);

	int N, M, I;
	
	while(cin >> N >> M >> I)
	{
		vector<Vertice> graph(N);
		vector<int> pos(N);
		
		for(int i = 0; i < N; i++) {
			int age;
			cin >> age;
			graph[i].age = age;
			pos[i] = i;
		}
		
		for(int i = 0; i < M; i++) {
			int u, v;
			cin >> u >> v;
			graph[v-1].adj.push_back(u-1);
		}
			
		for(int i = 0; i < I; i++) {
			char query;
			int A, B;
			cin >> query;			
			if(query == 'T') {
				cin >> A >> B;
				swap(graph[pos[A-1]].age, graph[pos[B-1]].age);				
				swap(pos[A-1], pos[B-1]);
			} else {
				cin >> A;
				DFS(graph, pos[A-1]);
				if(min_age == INT_MAX) {
					cout << "*\n";
				} else {
					cout << min_age << endl;					
				}
			}
		}		
	}
}