/*
Nome:      A Terra Herdada por Tio Tom
ID:        1330
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.012s
Tamanho:   2,14 KB
Submissao: 02/02/18 10:49:43
*/
#include <bits/stdc++.h>
using namespace std;

#define IN_BOUND(v, l) (v >= 0 && v < l)
const int mx[] = {-1, 0, 1, 0}, my[] = {0, 1, 0, -1};
 
bool bpm(int u, bool seen[], int matchR[], int invalid[], vector<int> graph[], int app)
{
    for(int v : graph[u])
    {
        if(!seen[v] && !invalid[v]) {
            seen[v] = true; 
            
            if(matchR[v] < 0 || bpm(matchR[v], seen, matchR, invalid, graph, app)) {
                matchR[v] = u;
                return true;
            }
        }
    }
    
    return false;
}
 
int maxBPM(vector<int> graph[], int invalid[], int candy, int app)
{
    int matchR[app];
 
    memset(matchR, -1, sizeof(matchR));
 
    int result = 0;
    
    for (int u = 0; u < candy; u++)
    {
        bool seen[app];
        
        memset(seen, 0, sizeof(seen));
 
        if (bpm(u, seen, matchR, invalid, graph, app))
            result++;
    }
    
    return result;
}

int main()
{
	int m, n;
	
	while(scanf("%d%d", &m, &n) && m != 0)
	{		
		int candy_index[m][n], app_index[m][n];
		int candy = 0;
		
		memset(candy_index, -1, sizeof candy_index);
		memset(app_index, -1, sizeof app_index);
		
		for(int i = 0; i < m; i++) {
			for(int j = i % 2; j < n; j += 2) {
				candy_index[i][j] = candy++;	
			}
		}
		
		vector<int> graph[candy];
		int app = 0;
		
		for(int x = 0; x < m; x++) {
			for(int y = (x+1) % 2; y < n; y += 2) {
				for(int k = 0; k < 4; k++) {
					int nx = x + mx[k], ny = y + my[k];
					
					if(IN_BOUND(nx, m) && IN_BOUND(ny, n)) {
						int u = candy_index[nx][ny];
						
						graph[u].push_back(app);
					}
				}
				
				app_index[x][y] = app++;
			}
		}
		
		int k, x, y;
		int invalid[app];
		
		memset(invalid, 0, sizeof invalid);
		
		scanf("%d", &k);
		
		for(int i = 0; i < k; i++)
		{
			scanf("%d%d", &x, &y); x--; y--;
			
			if(candy_index[x][y] != -1) {
				int u = candy_index[x][y];				
				
				// lugar invalido
				graph[u].clear();
			} else {
				int u = app_index[x][y];
				
				invalid[u] = 1;
			}
		}
		
		printf("%d\n", maxBPM(graph, invalid, candy, app));
	}
}
