/*
Nome:      Passando Pelos PokeStops
ID:        2219
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.072s
Tamanho:   513 Bytes
Submissao: 06/01/18 16:55:58
*/
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
		
		for(int i = 1; i <= m; i++) {
			scanf("%d", &dist[i]);
			if(dist[i] > n)
				dist[i] = n;
		}
			
		dist[m+1] = n;
		
		sort(dist.begin(), dist.end());
		
		int ans = 0;
		
		for(int i = 1; i <= m + 1; i++)
			ans = max(ans, dist[i] - dist[i-1]);
		
		printf("%d\n", ans);
	}
}
