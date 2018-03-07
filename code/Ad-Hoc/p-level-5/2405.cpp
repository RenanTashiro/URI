/*
Nome:      Colorindo
ID:        2405
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,03 KB
Submissao: 04/02/18 18:11:01
*/
#include <bits/stdc++.h>
using namespace std;

#define VALID(v, L) (v >= 0 && v < L)

int flood(int x, int y, vector<vector<int>> G, int n, int m)
{
	const int mx[] = {-1, -1, -1, 0, 1, 1, 1, 0}, my[] = {-1, 0, 1, 1, 1, 0, -1, -1};
	queue<pair<int,int>> next;
	vector<vector<int>> visited(n, vector<int>(m, 0));
	int count = 1;
	
	next.push({x, y});
	visited[x][y] = 1;
	
	while(!next.empty())
	{
		pair<int,int> u = next.front(); next.pop();
		
		for(int i = 0; i < 8; i++)
		{
			int nx = u.first + mx[i], ny = u.second + my[i];
			
			if(VALID(nx, n) && VALID(ny, m) && !visited[nx][ny] && G[nx][ny] == -1)
			{
				next.push({nx, ny});
				visited[nx][ny] = 1;
				count++;
			}
		}
	}
	
	return count;
}

int main()
{
	int n, m, x, y, k;
	
	scanf("%d%d%d%d%d", &n, &m, &x, &y, &k); x--; y--;
	
	vector<vector<int>> board(n, vector<int>(m, -1));
	int a, b;
	
	for(int i = 0; i < k; i++)
	{
		scanf("%d%d", &a, &b); a--; b--;
		board[a][b] = 1;
	}
	
	printf("%d\n", flood(x, y, board, n, m));
}
