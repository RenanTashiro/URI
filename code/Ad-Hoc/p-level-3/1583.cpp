/*
Nome:      Contaminação
ID:        1583
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   999 Bytes
Submissao: 27/12/15 20:26:49
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii; 

void flood_fill(string mapa[], int row, int col, int X, int Y)
{	
	int x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0, -1};
	queue<ii> Q;
	Q.push(ii(row,col));
	while(!Q.empty()) {
		ii act = Q.front(); Q.pop();
		for(int i = 0; i < 4; i++) {
			ii to(act.first+x[i], act.second+y[i]);
			if(to.first >= 0 && to.first < X && to.second >= 0 && to.second < Y) {
				if(mapa[to.first][to.second] == 'A') {
					mapa[to.first][to.second] = 'T';
					Q.push(to);
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);

	int N, M;
	
	while(cin >> N >> M && N != 0)
	{
		string mapa[N];
		
		for(int i = 0; i < N; i++) {
			cin >> mapa[i];
		}
		
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				if(mapa[i][j] == 'T') {
					flood_fill(mapa, i, j, N, M);
				}
			}
		}
		
		for(int i = 0; i < N; i++) {
			cout << mapa[i] << endl;
		}
		
		cout << endl;
	}
}
