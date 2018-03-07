/*
Nome:      Fibra Óptica
ID:        1270
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.632s
Tamanho:   2,1 KB
Submissao: 03/07/17 14:28:56
*/
// 30 min para implementar
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef pair<ii, double> iid;

#define ID first.first
#define POINT first.second
#define DIST second

double dp[1005][55]; // [city][point] 

double solve(int u, int p, int father, vector<vector<iid>> graph[])
{	
	if(dp[u][p] != 0.0) return dp[u][p];
	
	map<int,double> best_by_city;
	
	for(int v = 0; v < (int)graph[u][p].size(); v++)
	{
		iid vertex = graph[u][p][v];
		
		if(vertex.ID != father)
		{
			if(best_by_city.find(vertex.ID) == best_by_city.end())
			{
				best_by_city[vertex.ID] = vertex.DIST + solve(vertex.ID, vertex.POINT, u, graph);
			}
			else
			{
				best_by_city[vertex.ID] = min(best_by_city[vertex.ID], vertex.DIST + solve(vertex.ID, vertex.POINT, u, graph));
			}
		}
	}
	
	double ans = 0.0;
	
	for(auto cost : best_by_city)
	{
		ans += cost.second;
	}
	
	return dp[u][p] = ans;
}

int main()
{
	int N;
	
	while(scanf("%d", &N), N)
	{
		vector<vector<iid>> graph[N];
		vector<ii> vertex[N];
		map<string, int> dict;
		
		for(int i = 0; i < N; i++)
		{
			string city;
			int points;
			
			cin >> city >> points;
			
			dict[city] = i;
			
			graph[i] = vector<vector<iid>>(points);
			
			for(int j = 0; j < points; j++)
			{
				int x, y;
				
				scanf("%d%d", &x, &y);
				
				vertex[i].push_back(ii(x, y));
			}
		}
		
		for(int i = 0; i < N - 1; i++)
		{
			string u, v;
			
			cin >> u >> v;
			
			int iu = dict[u], iv = dict[v];
			
			for(int j = 0; j < (int)vertex[iu].size(); j++)
			{
				for(int k = 0; k < (int)vertex[iv].size(); k++)
				{
					double dist = hypot(
						vertex[iu][j].first - vertex[iv][k].first, 
						vertex[iu][j].second - vertex[iv][k].second
					);
					
					graph[iu][j].push_back(iid(ii(iv, k), dist));
					graph[iv][k].push_back(iid(ii(iu, j), dist));
				}
			}
		}
				
		memset(dp, 0, sizeof dp);
		
		double ans = DBL_MAX;
		
		for(int i = 0; i < (int)graph[0].size(); i++)
		{
			ans = min(ans, solve(0, i, -1, graph));	
		}
		
		printf("%.1lf\n", ans);
		
	}
}
