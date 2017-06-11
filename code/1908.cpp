#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int BFS(vector<vector<ii>> &graph, const int N)
{
	queue<pair<int,ii>> Q;
	vector<bool> V(N+1, false);
	// Q.push(ii(0,ii(0,))); // (act, tickets, line)	
	while(!Q.empty()) 
	{
		ii act = Q.front(); Q.pop();		
		if(act.first == N) {
			return act.second;
		}		
		for(auto &g : graph[act.first]) {
			if(!V[g.first]) {
				Q.push(ii(g.first, act.second+1));
				V[g.first] = true;
			}
		}		
	}	
	return -1; // Fail
}

int main()
{
	ios::sync_with_stdio(false);

	int N, K, L;
	
	cin >> N >> K;
	
	vector<vector<ii>> graph(N); // (dest, line)
	
	for(int k = 0; k < K; k++)
	{		
		cin >> L;
		
		int c[L];
		
		for(int i = 0; i < L; i++) {
			cin >> c[i]; c[i]--;
		}
		
		for(int i = 0; i < L-1; i++) {
			graph[c[i]].push_back(ii(c[i+1], k));
		}	
	}
	
	cout << BFS(graph, N-1) << "\n";
}
