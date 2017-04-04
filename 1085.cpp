#include <bits/stdc++.h>

#define DIST first
#define VTX second

using namespace std;

typedef pair<string,string> ss;
typedef pair<int,string> is;

int dijkstra(map<string,vector<ss>> &G, string src, string sink)
{
	priority_queue<is, vector<is>, greater<is>> pq;
	map<string,int> dist;
	pq.push(is(0, src));
	while(!pq.empty()) {
		is u = pq.top(); pq.pop();
		if(u.DIST > dist[u.VTX]) continue;
		for(ss v : G[u.VTX]) {
			if((int)v.second.size() + dist[u.second] < dist[v.first]) {
				dist[v.first] = v.second.size() + dist[v.first];
				pq.push(is(dist[v.first], v.first));
			}
		}
	}
	return dist[sink];
}

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		map<string,vector<ss>> G;
		string src, sink, u, v, word;
		
		cin >> src >> sink;
		
		for(int i = 0; i < N; i++) {
			cin >> u >> v >> word;
			G[u].push_back(ss(v, word));
			G[v].push_back(ss(u, word));			
		}	
		
		int ans = dijkstra(G, src, sink);
		
		if(ans != INT_MAX) 
			printf("%d\n", ans);
		else    
			puts("impossivel");
	}
}
