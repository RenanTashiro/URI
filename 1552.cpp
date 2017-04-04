#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef pair<int,double> ib;

vector<int> taken;
priority_queue<pair<double,int>> PQ;

vector<vector<ib>> create_graph(ii p[], const int SIZE)
{
	vector<vector<ib>> G(SIZE);
	for(int i = 0; i < SIZE; i++) {
		for(int j = 0; j < SIZE; j++) {
			if(i == j) continue;
			G[i].push_back({j, hypot(
				(double)p[i].first-p[j].first, (double)p[i].second-p[j].second)		
			});
		}
	}
	return G;
}

void process(int u, vector<vector<ib>> &G) 
{
	taken[u] = 1;
	for(ib to : G[u]) {
		ib v = to;
		if(!taken[v.first]) PQ.push({-v.second, -v.first});
	}
}

double prim(vector<vector<ib>> &G, const int SIZE)
{
	taken.assign(SIZE, 0);
	process(0, G);
	double min_cost = 0.0;
	while(!PQ.empty()) {
		pair<double,int> act = PQ.top(); PQ.pop();
		if(!taken[-act.second]) {
			min_cost += -act.first; process(-act.second, G);
		}
	}
	return min_cost;
}

int main()
{
	int TC;
	
	scanf("%d", &TC);
	
	while(TC--)
	{
		int N;
		
		scanf("%d", &N);
		
		ii points[N];
		
		for(int i = 0; i < N; i++) {
			scanf("%d%d", &points[i].first, &points[i].second);
		}
		
		vector<vector<ib>> G = create_graph(points, N);
		
		double ans = prim(G, N);
		
		printf("%.2lf\n", ans / 100.00);
	}
}
