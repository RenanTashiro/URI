/*
Nome:      Cerco a Leningrado
ID:        1205
Resposta:  Accepted
Linguagem: C++
Tempo:     0.372s
Tamanho:   1,25 KB
Submissao: 27/12/15 10:33:39
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int*> ipi; // (Dest, Weight)
typedef pair<int,int> ii; // ...

int dijkstra(vector<vector<ipi>> &graph, int O, int Wo, int D)
{
	vector<int> W(graph.size(), INT_MAX);
	priority_queue<ii> Q;
	W[O] = Wo;
	Q.push(ii(-Wo,O));
	while(!Q.empty()) {
		ii act = Q.top(); Q.pop();
		for(auto &g : graph[act.second]) {
			if(W[act.second] + *g.second < W[g.first]) {
				W[g.first] = W[act.second] + *g.second;
				Q.push(ii(-W[g.first], g.first));
			}
		}
	}
	return W[D];
}

int main()
{
	ios::sync_with_stdio(false);
	
	int N, M, K;
	double P;
	
	while(cin >> N >> M >> K >> P)
	{
		vector<vector<ipi>> graph(N);
		int u, v, weight[2015] = {0};
		
		for(int i = 0; i < M; i++) {
			cin >> u >> v;		
			graph[u-1].push_back(ipi(v-1,&weight[v-1]));
			graph[v-1].push_back(ipi(u-1,&weight[u-1]));	
		}
		
		int A, soldiers;
		
		cin >> A;
		
		for(int i = 0; i < A; i++) {
			cin >> soldiers;
			weight[soldiers-1]++;			
		}
		
		int O, D, ans;
		
		cin >> O >> D;
			
		ans = dijkstra(graph, O-1, weight[O-1], D-1);

		if(ans != INT_MAX && ans <= K) {
			cout << fixed << setprecision(3) << pow(P, ans) << endl;
		}
		else {
			cout << "0.000\n"; 
		}
	}
}