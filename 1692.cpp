#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

int best_ans;

int BFS(vector<vector<int>> &G, int src, int K)
{
	vector<int> visited(G.size(),0);
	queue<ii> Q;
	Q.push(ii(src,0)); visited[src] = 1;	
	int ans = 0, distance = 0;
	while(!Q.empty()) {
		ii act = Q.front(); Q.pop();
		distance = act.second;
		ans++;
		for(int i : G[act.first]) {
			if(!visited[i] && act.second + 1 <= K) {
				Q.push(ii(i,act.second+1));
				visited[i] = 1;
			}
		}
	}
	cout << src << ' ' << distance << endl;
	for(int i : visited) {
		cout << i << ' ' ;
	}
	cout << endl;
	if(distance == K && ans > best_ans) best_ans = ans;
	return distance;
}

int main()
{
	ios::sync_with_stdio(false);
	
	int N, K;
	
	while(cin >> N >> K)
	{
		vector<vector<int>> G(N);
		int u, v;
		
		for(int i = 1; i < N; i++) {
			cin >> u >> v; u--, v--;
			G[u].push_back(v);
			G[v].push_back(u);
		}
		
		bool flag = false;
		best_ans = 0;
		
		for(int i = 0; i < N; i++) {
			if(BFS(G, i, K) == K) {
				flag = true;
			}	
		}
		
		if(flag) cout << best_ans << endl;
		else     cout << "Imposible revenge!\n";
	}
}
