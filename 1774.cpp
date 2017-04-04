#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

priority_queue<ii> Q;

void process(vector<ii> graph[], vector<bool> &visited, const int V)
{
	visited[V] = true;
	for(auto &u : graph[V]) {
		if(!visited[u.first]) Q.push(ii(-u.second,-u.first));
	}
}

int Prim(vector<ii> graph[], int SIZE)
{
	vector<bool> visited(SIZE, false);
	int cost = 0;
	process(graph, visited, 0);
	while(!Q.empty()) {
		ii u = Q.top(); Q.pop();
		if(!visited[-u.second]) {
			cost += -u.first, process(graph, visited, -u.second);
		}
	}
	return cost;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int R, C;
	
	cin >> R >> C;
	
	vector<ii> graph[R]; // ii(Dest, Weight)
	int V, W, P;
	
	for(int i = 0; i < C; i++) 
	{
		cin >> V >> W >> P;
		graph[V-1].push_back(ii(W-1,P));
		graph[W-1].push_back(ii(V-1,P));
	}
	
	cout << Prim(graph, R) << endl;
}
