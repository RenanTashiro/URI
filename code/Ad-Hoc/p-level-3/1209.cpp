/*
Nome:      Festas de São Petersburgo
ID:        1209
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     1.472s
Tamanho:   1,27 KB
Submissao: 11/01/16 22:12:51
*/
#include <bits/stdc++.h>

#define INVALID -1
#define UNVISITED 0
#define UNCHECKED 1
#define VALID 2

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

// GREADY? YES!!!
vi gready_BFS(vector<vi> &G, int K) 
{
	priority_queue<ii, vector<ii>, greater<ii>> PQ;
	vi size(G.size()), visited(G.size(), 0);
	for(int i = 0; i < (int)G.size(); i++) {
		size[i] = G[i].size();
		PQ.push(ii(size[i], i));
	}
	while(!PQ.empty()) {
		ii u = PQ.top(); PQ.pop();
		if(!visited[u.second] && u.first < K) {
			for(int i : G[u.second]) {
				size[i]--;
				PQ.push(ii(size[i],i));
			}
		}
		visited[u.second] = 1;
	}
	vi ans;
	for(int i = 0; i < (int)G.size(); i++) {
		if(size[i] >= K) {
			ans.push_back(i);
		}
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);

	int N, M, K;
	
	while(cin >> N >> M >> K)
	{
		vector<vi> G(N);
		int u, v;
		
		for(int i = 0; i < M; i++) {
			cin >> u >> v; u--, v--;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		
		vi invite_list = gready_BFS(G, K);
			
		if(invite_list.size() == 0) {
			cout << "0\n";
		} else {		
			cout << invite_list[0]+1;
			for(int i = 1; i < (int)invite_list.size(); i++) {
				cout << ' ' << invite_list[i]+1;
			}
			cout << '\n';
		}
	}
}
