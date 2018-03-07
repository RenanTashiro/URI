/*
Nome:      Jogo do Labirinto
ID:        2332
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,53 KB
Submissao: 12/02/18 17:53:34
*/
#include <bits/stdc++.h>
using namespace std;

#define INSIDE(v, l) (v >= 0 && v < l)

typedef pair<int,int> ii;
typedef pair<ii,int> iii;

// cima, direita, baixo, esquerda
const int mx[] = {-1, 0, 1, 0}, my[] = {0, 1, 0, -1};

int main()
{
	int n, m;
	
	scanf("%d%d", &n, &m);
	
	int G[n][m];
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &G[i][j]);
	
	// processing		
	queue<iii> next;
	int visited[n][m][10], ans = -1;
	
	memset(visited, 0, sizeof visited);
	next.push({{0, 0}, 0}); // (pos), dist
	visited[0][0][G[0][0]] = 1;
	
	while(!next.empty())
	{ 
		iii node = next.front(); next.pop();
		int x = node.first.first;
		int y = node.first.second;
		int d = node.second;
		int h = (G[x][y] + d) % 10;
		
		//~ cout << x << ' ' << y << ' ' << d << ' ' << h << endl;
		
		if(x == n-1 && y == m-1) {
			ans = d;
			break;
		}
		
		for(int i = 0; i < 4; i++)
		{
			int nx = x + mx[i], ny = y + my[i];
			
			if(INSIDE(nx, n) && INSIDE(ny, m))
			{
				int nh = (G[nx][ny] + d) % 10;
				
				if(nh <= h + 1 && !visited[nx][ny][nh])
				{
					next.push({{nx, ny}, d + 1});
					visited[nx][ny][nh] = 1;
				}
			}
		}
		
		// fica no mesmo lugar
		int nh = (h + 1) % 10;
		
		if(!visited[x][y][nh])
		{
			next.push({{x, y}, d + 1});
			visited[x][y][nh] = 1;			
		}
	}
	
	printf("%d\n", ans);
}
    

//~ 4 3
//~ 0 0 0
//~ 0 0 0
//~ 0 0 0
//~ 0 0 0

//~ 3 3
//~ 1 2 3
//~ 4 5 6
//~ 7 8 9


//~ 3 5
//~ 1 3 1 1 1
//~ 1 3 1 3 1
//~ 1 1 1 3 1
