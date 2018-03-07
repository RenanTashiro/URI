/*
Nome:      Gruntz
ID:        1525
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.052s
Tamanho:   1,81 KB
Submissao: 14/01/16 13:20:32
*/
#include <bits/stdc++.h>

#define ROW second.first
#define COL second.second 
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

using namespace std;

typedef pair<int,int> ii;

int x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0 ,-1};
vector<vector<int>> visited;

bool on_limit(int i, int j, int N, int M)
{
	return i >= 0 && i < N && j >= 0 && j < M;
}

bool enqueue(string G[], queue<pair<int,ii>> &Q, pair<int,ii> u, int dir, char ori, char rev, int N, int M) 
{
	if(on_limit(u.ROW + x[dir], u.COL + y[dir], N, M)) {
		if(G[u.ROW + x[dir]][u.COL + y[dir]] == ori && u.first > visited[u.ROW + x[dir]][u.COL + y[dir]]) {
			Q.push({u.first , {u.ROW + x[dir], u.COL + y[dir]}});		
			visited[u.ROW + x[dir]][u.COL + y[dir]] = u.first;
		}
		else if(G[u.ROW + x[dir]][u.COL + y[dir]] == rev && u.first > 0 && u.first - 1 > visited[u.ROW + x[dir]][u.COL + y[dir]])  {
			Q.push({u.first - 1, {u.ROW + x[dir], u.COL + y[dir]}});
			visited[u.ROW + x[dir]][u.COL + y[dir]] = u.first - 1;
		}
		return false;
	} 
	return true;
}

bool BFS(string G[], int N, int M, int K)
{
	queue<pair<int,ii>> Q;
	visited.assign(N, vector<int>(M, -1));
	bool up = false, right = false, down = false, left = false;
	Q.push({K, {N/2, M/2}});
	while(!Q.empty()) {
		pair<int,ii> u = Q.front(); Q.pop();
		up =    enqueue(G, Q, u, UP,    'v', '^', N, M); 
		right = enqueue(G, Q, u, RIGHT, '<', '>', N, M);
		down =  enqueue(G, Q, u, DOWN,  '^', 'v', N, M);
		left =  enqueue(G, Q, u, LEFT,  '>', '<', N, M);
		if(up || right || down || left) return true;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);

	int N, M, K;

	while(cin >> N >> M >> K && N != 0)
	{
		string G[N];
		
		for(int i = 0; i < N; i++) {
			cin >> G[i];
		}

		cout << (BFS(G, N, M, K) ? "Sim" : "Nao") << endl;
	}
}
