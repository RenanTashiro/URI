/*
Nome:      Componentes Conexos
ID:        1082
Resposta:  Accepted
Linguagem: C++
Tempo:     0.056s
Tamanho:   1,5 KB
Submissao: 19/12/16 13:45:29
*/
// Autor: Renan Tashiro
#include <bits/stdc++.h>

#define WHITE 0
#define GREY 1
#define BLACK 2

using namespace std;

struct Vertice {
	vector<int> adj;
	int visited;
};

vector<char> sub_graph[26];
int connected;

void DFS_Visit(vector<Vertice> &graph, int u)
{
	graph[u].visited = GREY;
	
	for(int i = 0; i < (int) graph[u].adj.size(); i++) {
		int v = graph[u].adj[i];
		if(graph[v].visited == WHITE) {
			DFS_Visit(graph, v);
		}
	}
	
	graph[u].visited = BLACK;
	sub_graph[connected].push_back((char)u+97);
}

int DFS(vector<Vertice> &graph)
{
	connected = 0;
	
	for(int i = 0; i < (int) graph.size(); i++) {
		graph[i].visited = WHITE;
	}
	
	for(int i = 0; i < (int) graph.size(); i++) {
		if(graph[i].visited == WHITE) {
			sub_graph[connected].clear();
			DFS_Visit(graph, i);			
			sort(sub_graph[connected].begin(), sub_graph[connected].end());
			for(int j = 0; j < (int) sub_graph[connected].size(); j++) {
				cout << sub_graph[connected][j] << ',';
			} cout << endl;			
			connected++;
		}		
	}
	
	return connected;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int N;
	
	cin >> N;
	
	for(int i = 1; i <= N; i++)
	{
		int V, E;
		
		cin >> V >> E;
		
		vector<Vertice> graph(V);

		while(E--)
		{
			char v, w;
			
			cin >> v >> w;
			
			graph[(int)v-97].adj.push_back((int)w-97);
			graph[(int)w-97].adj.push_back((int)v-97);
		}
		
		cout << "Case #" << i << ":\n";	
		cout << DFS(graph) << " connected components\n" << endl;
	}
}
