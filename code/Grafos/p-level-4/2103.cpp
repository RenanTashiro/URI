/*
Nome:      Harbin é Muita Grana!
ID:        2103
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.032s
Tamanho:   1,39 KB
Submissao: 30/01/18 19:20:55
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

long long num_nodes, root;
vector<long long> dist;

int set_ds(int u, int d, vector<ii> graph[], vector<int> &visited, vector<long long> &lca_count)
{
	visited[u] = 1;
	dist[u] = d;		
	
	vector<int> c_count;
	int base = 0;
	
	for(ii v : graph[u]) {
		if(!visited[v.first]) {
			int count = set_ds(v.first, d + v.second, graph, visited, lca_count) + 1;
			c_count.push_back(count);
			base += count;
		}
	}

	lca_count[u] = base;
	
	for(int i = 0; i < (int)c_count.size(); i++)
		for(int j = i+1; j < (int)c_count.size(); j++)
			lca_count[u] += c_count[i] * c_count[j];
	
	return base;
}

int main()
{	
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		scanf("%lld", &num_nodes);
		
		vector<ii> graph[num_nodes];
		int a, b, d;
		
		for(int i = 0; i < num_nodes-1; i++)
		{
			scanf("%d%d%d", &a, &b, &d);			
			graph[a-1].push_back({b-1, d});
			graph[b-1].push_back({a-1, d});
		}

		// set parents
		vector<int> visited(num_nodes, 0);
		vector<long long> lca_count(num_nodes, 0);
		dist.assign(num_nodes, 0);
		set_ds(0, 0, graph, visited, lca_count);
		root = 0;
		
		long long ans = 0;		
		
		// ans += dist[i] + dist[j] - 2*dist[lca(i, j)]
		for(int i = 0; i < num_nodes; i++) {
			ans += dist[i] * ((num_nodes-1) - 2*lca_count[i]);
		}

		printf("%lld\n", ans % 1300031);
	}
}
