/*
Nome:      Sonhos, Acredite Neles!
ID:        2081
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     1.228s
Tamanho:   2,12 KB
Submissao: 11/09/17 17:03:41
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

const int y[] = {-1, 0, 1, 0}, x[] = {0, 1, 0, -1};

bool in_limits(ii a, int N, int M)
{
	return a.first >= 0 && a.first < N && a.second >= 0 && a.second < M;
}

int bfs(ii pos_r1, ii pos_r2, string M1[], string M2[], int N, int M)
{
	queue<ii> next1, next2;
	int cost[N][M][N][M];
	
	memset(cost, -1, sizeof cost);
	
	next1.push(pos_r1);
	next2.push(pos_r2);
	cost[pos_r1.first][pos_r1.second][pos_r2.first][pos_r2.second] = 0;

	while(!next1.empty())
	{
		ii u1 = next1.front(), u2 = next2.front();
		next1.pop(), next2.pop();
		
		if(M1[u1.first][u1.second] == 'F' and M2[u2.first][u2.second] == 'F')
			return cost[u1.first][u1.second][u2.first][u2.second];
			
		for(int i = 0; i < 4; i++)
		{
			ii v1(u1.first + y[i], u1.second + x[i]);
			ii v2(u2.first + y[i], u2.second + x[i]);
			
			if(in_limits(v1, N, M) && in_limits(v2, N, M))
			{	
				if(M1[v1.first][v1.second] == '#')
					v1 = u1;
				if(M2[v2.first][v2.second] == '#')
					v2 = u2;
				if(M1[v1.first][v1.second] == 'B' or M2[v2.first][v2.second] == 'B')
					continue;

				if(cost[v1.first][v1.second][v2.first][v2.second] == -1)
				{
					cost[v1.first][v1.second][v2.first][v2.second] = cost[u1.first][u1.second][u2.first][u2.second] + 1;
					
					if(cost[v1.first][v1.second][v2.first][v2.second] <= 50)
					{
						next1.push(v1);
						next2.push(v2);
					}
				}
			}
		}
	}
	
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int N, M;
		
		cin >> N >> M;
		
		string M1[N], M2[N];
		ii pos_r1, pos_r2;
		
		
		for(int i = 0; i < N; i++)
		{
			cin >> M1[i];
			
			for(int j = 0; j < M; j++)
				if(M1[i][j] == 'R')
					pos_r1 = {i, j}, M1[i][j] = '.';
		}
		
		for(int i = 0; i < N; i++)
		{
			cin >> M2[i];
			
			for(int j = 0; j < M; j++)
				if(M2[i][j] == 'R')
					pos_r2 = {i, j}, M2[i][j] = '.';
		}
		
		
		int ans = bfs(pos_r1, pos_r2, M1, M2, N, M);
		
		if(ans == -1)
			cout << "impossivel\n";
		else
			cout << ans << endl;
	}
}
