#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int n, m;
		
		scanf("%d%d", &n, &m);
		
		vector<int> dist(m+2);
		
		dist[0] = 0;
		
		for(int i = 1; i <= m; i++)
			scanf("%d", &dist[i]);
			
		dist[m+1] = n;
		
		sort(dist.begin(), dist.end());
		
		int ans = 0;
		
		for(int i = 1; i <= m + 1; i++)
			ans = max(ans, dist[i] - dist[i-1]);
		
		printf("%d\n", ans);
	}
}
