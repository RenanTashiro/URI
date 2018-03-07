/*
Nome:      Casa de Rogério
ID:        2002
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.440s
Tamanho:   1,37 KB
Submissao: 13/01/16 10:58:22
*/
#include <bits/stdc++.h>

using namespace std;

typedef vector<long long> vi;
typedef pair<int,int> ii;
typedef pair<long long, ii> iii;

int x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0, -1};

long long f(long long v) {
	long long res[] = {v, 1, v+1, 0};
	return res[v%4];
}

long long C(long long x, long long y) {
	return f(max(x, y))^f(min(x, y)-1);
}

long long opt_dijkstra(vector<vi> &G, int N, int M)
{
	priority_queue<iii, vector<iii>, greater<iii>> pq;
	vector<vi> W(N, vi(M, LLONG_MAX));
	pq.push({0,{0,0}}); W[0][0] = 0;
	while(!pq.empty()) {
		iii u = pq.top(); pq.pop();
		if(u.first > W[u.second.first][u.second.second]) continue;
		for(int i = 0; i < 4; i++) {
			ii v(u.second.first+x[i], u.second.second+y[i]);
			if(v.first >= 0 && v.first < N && v.second >= 0 && v.second < M) {
				long long cost = C(G[u.second.first][u.second.second], G[v.first][v.second]);
				if(W[u.second.first][u.second.second] + cost < W[v.first][v.second]) {
					W[v.first][v.second] = W[u.second.first][u.second.second] + cost;
					pq.push({W[v.first][v.second],{v}});
				}
			}
		}
	}
	return W[N-1][M-1];
}

int main()
{
	int N, M;	
	
	while(scanf("%d%d", &N, &M) != EOF)
	{
		vector<vi> G(N,vi(M));
	
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				scanf("%lld", &G[i][j]);
			}
		}
		
		printf("%lld\n", opt_dijkstra(G, N, M));
	}
}
