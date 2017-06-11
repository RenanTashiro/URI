#include <bits/stdc++.h>

using namespace std;

typedef pair<double, int> di;
typedef vector<di> vdi;

vector<int> taken;
priority_queue<di> PQ;

void process(int u, vector<vdi> &G) 
{
	taken[u] = 1;
	for(di to : G[u]) {
		di v = to;
		if(!taken[v.second]) PQ.push({-v.first, -v.second});
	}
}

double prim(vector<vdi> &G, const int SIZE)
{
	taken.assign(SIZE, 0), process(0, G);
	double min_cost = 1.0;
	while(!PQ.empty()) {
		di v = PQ.top(); PQ.pop();
		if(!taken[-v.second]) {
			min_cost *= -v.first; 
			process(-v.second, G);
		}
	}
	return min_cost;
}

int main()
{
	int N, M;
	
	while(scanf("%d%d", &N, &M)) 
	{
		if(N == 0) break;
		
		vector<vdi> G(N);
		int u, v;
		double p;
		
		for(int i = 0; i < M; i++) {
			scanf("%d%d%lf", &u, &v, &p);
			G[u-1].push_back(di(p, v-1));
			G[v-1].push_back(di(p, u-1));
		}
		
		printf("%.5lf", prim(G, N));
	}
}

