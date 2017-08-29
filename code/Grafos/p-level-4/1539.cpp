/*
Nome:      Empresa de Telecom
ID:        1539
Resposta:  Accepted
Linguagem: C++
Tempo:     0.036s
Tamanho:   1,35 KB
Submissao: 06/01/16 19:26:26
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,double> ii;

vector<vector<ii>> construct_graph(pair<int,int> p[], int r[], int SIZE)
{
	vector<vector<ii>> G(SIZE);
	for(int i = 0; i < SIZE; i++) {
		for(int j = 0; j < SIZE; j++) {
			if(i == j) continue;
			double dist = (double) hypot((double) p[i].first - p[j].first,
			                             (double) p[i].second - p[j].second);
			if(dist <= (double) r[i]) {;
				G[i].push_back(ii(j, dist));
			}
		}
	}
	return G;
}

int dijkstra(vector<vector<ii>> &G, int ori, int dest)
{
	vector<double> W(G.size(), DBL_MAX);
	queue<int> Q;
	Q.push(ori); W[ori] = 0;
	while(!Q.empty()) {
		int act = Q.front(); Q.pop();
		for(ii to : G[act]) {
			if(W[act] + to.second < W[to.first]) {
				W[to.first] = W[act] + to.second;
				Q.push(to.first);
			}
		}
	}	
	return W[dest]  == DBL_MAX ? -1 : trunc(W[dest]);
}

int main()
{
	ios::sync_with_stdio(false);

	int N;
	
	while(cin >> N && N != 0)
	{
		pair<int,int> points[N];
		int range[N];
		
		for(int i = 0; i < N; i++) {
			cin >> points[i].first >> points[i].second >> range[i];
		}
		
		vector<vector<ii>> G = construct_graph(points, range, N);
		
		int C, u, v;		
		
		cin >> C;
		
		while(C--) {
			cin >> u >> v;
			cout << dijkstra(G, u-1, v-1) << endl;
		}
	}
}
