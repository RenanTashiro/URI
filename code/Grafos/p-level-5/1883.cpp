/*
Nome:      Fuga de Ayutthaya
ID:        1883
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.256s
Tamanho:   2,17 KB
Submissao: 17/02/18 14:54:09
*/
#include <bits/stdc++.h>
using namespace std;

#define IN(v, l) (v >= 0 && v < l)
#define x first
#define y second

typedef pair<int,int> ii;

const int mx[] = {-1, 0, 1, 0}, my[] = {0, 1, 0, -1};

int main()
{
	int t;
	
	scanf("%d", &t);
	
	while(t--)
	{
		int n, m;
	
		scanf("%d%d", &n, &m);
		
		char graph[n][m];
		vector<ii> fire;
		ii init;
		
		// input
		getchar();
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				scanf("%c", &graph[i][j]);
				
				if(graph[i][j] == 'S')
					init = {i, j};
				if(graph[i][j] == 'F')
					fire.push_back({i, j});
			}
			
			getchar();
		}
		
		// processing
		queue<pair<ii,int>> next, fire_next;
		int visited[n][m], fire_visited[n][m], round = 0;
		bool possible = false;		
		
		//	init variables
		memset(visited, 0, sizeof visited);
		memset(fire_visited, 0, sizeof fire_visited);
		
		next.push({init, 0});
		visited[init.x][init.y] = 1;
		
		for(ii f : fire) {
			fire_visited[f.x][f.y] = 1;
			fire_next.push({f, 0});
		}
		
		while(!next.empty())
		{
			auto node = next.front(); next.pop();
			ii u = node.first;
			
			round = max(round, node.second);
	
			if(fire_visited[u.x][u.y]) {
				continue;
			} else if(graph[u.x][u.y] == 'E') {
				possible = true;
				break;
			}
			  
			// proximas possiveis posicoes da pessoa presa
			for(int i = 0; i < 4; i++)
			{
				int nx = u.x + mx[i], ny = u.y + my[i];
				
				if(IN(nx, n) && IN(ny, m) && !visited[nx][ny] && graph[nx][ny] != '#') {
					visited[nx][ny] = 1;
					next.push({{nx, ny}, node.second+1});
				}
			}
			
			// proximas possiveis posicoes do fogo
			while(!fire_next.empty() && fire_next.front().second == round) {
				auto node = fire_next.front(); fire_next.pop();				
				ii u = node.first;
				
				for(int i = 0; i < 4; i++)
				{
					int nx = u.x + mx[i], ny = u.y + my[i];
					
					if(IN(nx, n) && IN(ny, m) && !fire_visited[nx][ny] && graph[nx][ny] != '#') {
						fire_visited[nx][ny] = 1;
						fire_next.push({{nx, ny}, node.second+1});
					}
				}				
			} 		
		}
		
		// response
		if(possible)
			puts("Y");
		else
			puts("N");
	}
}
