/*
Nome:      O Rato no Labirinto
ID:        1799
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   862 Bytes
Submissao: 06/01/16 17:52:20
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<string,int> si;

int BFS(unordered_map<string,vector<string>> &G, string ori, string dest)
{
	queue<si> Q;
	unordered_map<string,bool> visited;
	Q.push(si(ori,0));
	visited[ori] = true;
	while(!Q.empty()) {
		si act = Q.front(); Q.pop();
		if(act.first == dest) return act.second;
		for(string to : G[act.first]) {
			if(!visited[to]) {
				Q.push(si(to, act.second+1));
				visited[to] = true;
			}
		}
	}
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int V, E;
	
	cin >> V >> E;
	
	unordered_map<string,vector<string>> G;
	string u, v;
	
	for(int i = 0; i < E; i++) {
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	int ans = 0;
	
	ans += BFS(G, "Entrada", "*");
	ans += BFS(G, "*", "Saida");
	
	cout << ans << endl;
}
