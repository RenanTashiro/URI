#include <bits/stdc++.h>

#define NEIGHBOR first
#define RANK second.first
#define VTX second.second

using namespace std;

typedef vector<int>   vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

priority_queue<iii> comp_vtx_size(vector<vi> &G)
{
	priority_queue<iii> pq;
	for(int i = 0; i < (int)G.size(); i++) {
		int counter = 0;
		for(int v : G[i])  counter += (int)G[v].size();
		pq.push({(int)G[i].size(), {counter, i}});
	}
	return pq;
}

iii merge_vtx(vector<vi> &G, iii src, vi &p)
{
	unordered_map<int,bool> connected;	
	connected[src.VTX] = true;
	queue<int> Q;
	for(int i : G[src.VTX]) {
		connected[p[i]] = true;
		Q.push(p[i]);
		p[p[i]] = src.VTX;
	}
	G[src.VTX].clear(); // O(n)
	while(!Q.empty()) {
		int u = Q.front(); Q.pop();
		for(int i : G[u]) {
			if(p[i] == i && !connected[i]) {
				G[src.VTX].push_back(i);
				connected[i] = true;
			}
		}
	}
	return {(int)G[src.VTX].size(), {src.RANK ,src.VTX}};
}

int steps_count(vector<vi> &G, vi &p)
{
	priority_queue<iii> pq = comp_vtx_size(G);
	int counter = 0;
	while(!pq.empty()) {
		iii u = pq.top(); pq.pop();
		if(p[u.VTX] != u.VTX) continue;
		if(u.NEIGHBOR == 0) break;
		pq.push(merge_vtx(G, u, p));
		counter++;
	}
	return counter;
}

int main()
{
	int N;
	
	while(scanf("%d", &N))
	{
		if(N == -1) break;
	
		vector<vi> G(N);
		vi parent(N, 0);
		int v;
		
		for(int u = 1; u < N; u++) {
			scanf("%d", &v); v--;
			G[u].push_back(v);
			G[v].push_back(u);
			parent[u] = u;
		}

		printf("%d\n", steps_count(G, parent));
	}
}
