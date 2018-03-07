/*
Nome:      Pedágio
ID:        2230
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.016s
Tamanho:   1,01 KB
Submissao: 04/02/18 17:40:49
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int src, vector<int> G[], int p, int n)
{
	vector<int> visited(n, 0), achievable;
	queue<pair<int,int>> next;
	
	next.push({src, 0});
	visited[src] = 1;
		
	while(!next.empty())
	{
		int u = next.front().first;
		int dist = next.front().second;
		
		next.pop();
		
		if(dist == p)
			continue;
		
		for(int v : G[u]) {
			if(!visited[v]) {
				next.push({v, dist+1});
				achievable.push_back(v);
				visited[v] = 1;
			}
		}
	}
	
	return achievable;
}

int main()
{
	int c, e, l, p, t = 1;
	
	while(scanf("%d%d%d%d", &c, &e, &l, &p) && c != 0)
	{
		l--;
		
		vector<int> G[c];
		int a, b;
		
		for(int i = 0; i < e; i++)
		{
			scanf("%d%d", &a, &b); a--; b--;
			
			G[a].push_back(b);
			G[b].push_back(a);
		}
		
		auto ans = bfs(l, G, p, c);
		
		sort(ans.begin(), ans.end());
		 
		printf("Teste %d\n", t++);
		
		for(int i = 0; i < (int)ans.size(); i++)
			printf("%d ", ans[i]+1);
			
		puts("\n");
	}
}
