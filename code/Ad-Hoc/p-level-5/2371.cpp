/*
Nome:      Batalha Naval
ID:        2371
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,16 KB
Submissao: 06/02/18 17:10:11
*/
#include <bits/stdc++.h>
using namespace std;

#define VALID(v, l) (v >= 0 && v < l)

string G[105];
bool target[105][105];
bool visited[105][105];
const int mx[] = {-1, 0, 1, 0}, my[] = {0, 1, 0, -1};

bool bfs(int x, int y, int n, int m)
{
	queue<pair<int,int>> next;
	bool possible = true;
	
	next.push({x, y});
	visited[x][y] = true;
	
	while(!next.empty())
	{
		auto u = next.front(); next.pop();
		
		if(!target[u.first][u.second])
			possible = false;
		
		for(int i = 0; i < 4; i++)
		{
			int nx = u.first + mx[i], ny = u.second + my[i];
			
			if(VALID(nx, n) && VALID(ny, m) && !visited[nx][ny] && G[nx][ny] == '#')
			{
				next.push({nx, ny});
				visited[nx][ny] = true;
			}
		
		}
	}	
	
	return possible;
}

int main()
{
	int n, m;
	
	scanf("%d%d", &n, &m);
	
	for(int i = 0; i < n; i++)
		cin >> G[i];
	
	int k, x, y;
	
	scanf("%d", &k);
	
	for(int i = 0; i < k; i++)
	{
		scanf("%d%d", &x, &y); x--; y--;
		target[x][y] = 1;
	}		
		
	int ans = 0;
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(!visited[i][j] && G[i][j] == '#' && bfs(i, j, n, m))
				ans++;
				
	printf("%d\n", ans);
}
