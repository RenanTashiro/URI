/*
Nome:      Efeito Dominó
ID:        2036
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.012s
Tamanho:   831 Bytes
Submissao: 13/01/18 11:54:14
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

map<ii,int> dp;

int solve(int i, int d, int dom[], int H, int N)
{	
	if(dp.find({i,d}) != dp.end())
		return dp[{i,d}];
	if(N-2 == i)
		return d <= H ? 0 : (int)1e8;
		
	int ans = INT_MAX;	
		
	if(d <= H) {
		ans = solve(i+1, dom[i+1], dom, H, N);
		
		if(d < H)
			ans = min(ans, 1 + solve(i+1, dom[i+1]-(H-d), dom, H, N));
	}
	else if(d > H)
		ans = 1 + solve(i+1, dom[i+1]+(d-H), dom, H, N);
	
	return dp[{i,d}] = ans;
}

int main()
{
	int N, H;
	
	while(scanf("%d%d", &N, &H) && N != -1)
	{
		int dom[N], sum = 0;
		
		for(int i = 0; i < N-1; i++)
			scanf("%d", &dom[i]), sum += dom[i];		
		
		dp.clear();
		
		int ans = solve(0, dom[0], dom, H, N);
		
		printf("%d\n", (ans >= (int)5000 ? -1 : ans));
	}
}