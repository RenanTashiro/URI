/*
Nome:      Impostos Galácticos
ID:        2011
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.168s
Tamanho:   1,49 KB
Submissao: 23/02/18 08:27:02
*/
#include <bits/stdc++.h>
using namespace std;

#define TO first
#define A second.first
#define B second.second

typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef pair<double,int> di;

double dijkstra(vector<iii> G[], double t, int n)
{
	priority_queue<di, vector<di>, greater<di>> next; // cost, vertice
	vector<double> cost(n, DBL_MAX); // vertices, time

	next.push({0.0, 0});
	cost[0] = 0;
	
	while(!next.empty())
	{
		di node = next.top(); next.pop();
		double c = node.first;
		int u = node.second;
		
		if(c > cost[u])
			continue;
			
		for(iii node : G[u]) {
			double C = c + node.A * t + node.B;

			if(C < cost[node.TO]) {
				cost[node.TO] = C;
				next.push({C, node.TO});
			}
		}
	}
	
	return cost[n-1];
}

double busca_ternaria(double inicio, double fim, vector<iii> G[], int n)
{
    double l = inicio, r = fim;

    for(int i = 0; i < 200; i++) 
    {
        double l1 = (l * 2 + r) / 3;
        double l2 = (l + 2 * r) / 3;

        if(dijkstra(G, l1, n) > dijkstra(G, l2, n))
            r = l2; 
        else 
            l = l1;
    }

    double x = l;
    
    return dijkstra(G, x, n);
}

int main()
{
	int n, m;
	
	scanf("%d%d", &n, &m);
	
	vector<iii> G[n];
	int u, v, a, b;
	
	for(int i = 0; i < m; i++)
	{
		scanf("%d%d%d%d", &u, &v, &a, &b); u--, v--;
		
		G[u].push_back({v, {a, b}});
		G[v].push_back({u, {a, b}});
	}
	
	double ans = busca_ternaria(0.0, 1440.0, G, n);
	
	printf("%.5lf\n", ans);
}
