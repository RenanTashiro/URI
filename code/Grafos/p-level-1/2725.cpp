/*
Nome:      Vila Natalina
ID:        2725
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.032s
Tamanho:   1,76 KB
Submissao: 31/12/17 09:37:03
*/
#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int dist(ii a, ii b)
{	
	int dx = a.x - b.x;
	int dy = a.y - b.y;

	if(dx == 0)
		return abs(dy) - 1;
	if(dy == 0)
		return abs(dx) - 1;
		
	int gcd = __gcd(dx, dy);
	
	return (abs(dy) - 1) / abs(floor(dy / gcd)); // looks good
}

int prim(vvi graph)
{
	int cost = 0;
	
	priority_queue<ii, vector<ii>, greater<ii>> next; // weight, id
	vi visited(graph.size(), 0);
	
	visited[0] = 1;
	next.push({0, 0});
	
	for(int id = 1; id < (int)graph.size(); id++)
		next.push({graph[0][id], id});
	
	while(!next.empty())
	{
		ii u = next.top(); next.pop();
		
		if(visited[u.second]) continue;
		
		visited[u.second] = 1;
		cost += u.first;
		
		for(int id = 0; id < (int)graph.size(); id++)
			if(!visited[id])
				next.push({graph[u.second][id], id});		
	}
	
	return cost;
}

int main()
{
	//~ ii a, b;
	
	//~ while(cin >> a.x >> a.y >> b.x >> b.y)
		//~ cout << dist(a, b) << endl;
	
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int N, K;
		
		scanf("%d%d", &N, &K);
		
		vector<ii> coord(N);
		vvi graph(N, vi(N, INT_MAX));
		
		for(int i = 0; i < N; i++)
			scanf("%d%d", &coord[i].x, &coord[i].y);

		for(int i = 0; i < N; i++)
		{
			for(int j = i+1; j < N; j++)
			{
				int d = dist(coord[i], coord[j]);
				
				graph[i][j] = d;
				graph[j][i] = d;				
			}
		}
		
		//~ for(int i = 0; i < N; i++)
		//~ {
			//~ printf("%d, %d: ", coord[i].x, coord[i].y);
			
			//~ for(int j = 0; j < N; j++)
			//~ {
				//~ printf("%d ", graph[i][j] == INT_MAX ? -1 : graph[i][j]);
			//~ }
			
			//~ puts("");
		//~ }
		
		printf("%d\n", K * prim(graph));
	}
}
