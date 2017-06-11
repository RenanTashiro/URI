#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vector<vi> G; 
vi weight, dp;
int N;

int optimal_visit(int u, int time, int mask)
{
	mask |= (1 << u), time += weight[u];
	cout << mask << endl;
	int ans = INT_MAX;
	for(int i = 0; i < (int)G[u].size(); i++) {
		if(!(mask & (1 << i))) {
			if(dp[mask | (1 << i)] != INT_MAX) 
				ans = min(ans, dp[mask | (1 << i)]);
			else
				ans = min(ans, optimal_visit(i, time + G[u][i], mask));
		}
	}
	if(ans == INT_MAX) 
		return time;					
	dp[mask] = ans;
	return ans;
}

int visit(int N) {
	int ans = INT_MAX;
	for(int i = 0; i < N; i++) {
		ans = min(ans, optimal_visit(i, 0, 0));
	}
	return ans;
}

int main()
{
	while(scanf("%d", &N) && N != 0)
	{
		G.assign(N, vi(N)); weight.assign(N,0); dp.assign(1048580, INT_MAX);
		
		for(int i = 0; i < N; i++) {
			scanf("%d", &weight[i]);			
		}	
		
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				scanf("%d", &G[i][j]);
			}
		}
		
		printf("%d\n", visit(N));
	}
}
