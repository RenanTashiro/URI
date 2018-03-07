/*
Nome:      Montagem
ID:        2106
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.780s
Tamanho:   811 Bytes
Submissao: 26/06/16 16:49:16
*/
#include <bits/stdc++.h>

#define SET_BIT(value, pos) ((value) | (1 << pos))
#define CHECK_BIT(value, pos) ((value) & (1 << pos))

using namespace std;

int dp[20][262150]; // 2^18 & 18 pos
int prices[20][20], N;

int solve(int pos, int mask)
{
	if(pos == N) 
		return 0;
	
	if(dp[pos][mask] != 0)
		return dp[pos][mask];
	
	int ans = INT_MAX;
	
	for(int i = 0; i < N; i++)
	{
		if(!CHECK_BIT(mask, i)) {
			int tmp = SET_BIT(mask, i);
			ans = min(ans, solve(pos+1, tmp) + prices[i][pos]);
		}
	}
	
	return dp[pos][mask] = ans;
}

int main()
{
	while(scanf("%d", &N) && N != 0)
	{
		for(int i = 0; i < N; i++) 
		{
			for(int j = 0; j < N; j++)
			{
				scanf("%d", &prices[i][j]);
			}
		}	
		
		memset(dp, 0, sizeof dp);
		
		printf("%d\n", solve(0, 0));
	}
}
