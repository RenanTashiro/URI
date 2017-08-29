/*
Nome:      Contando Radares
ID:        2599
Resposta:  Accepted
Linguagem: C++
Tempo:     2.104s
Tamanho:   676 Bytes
Submissao: 17/07/17 19:30:59
*/
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int dp[10005];

int solve(int length, const vector<int> &radar)
{	
	if(length <= 0)
		return 1;

	if(dp[length] != 0) 
		return dp[length];
	
	int ans = 0;
	
	for(int i = 0; i < (int)radar.size(); i++)
	{
		ans += solve(length - radar[i], radar);
		ans %= MOD;
	}	
	
	return dp[length] = ans;
}

int main()
{
	int C;
	
	scanf("%d", &C);
	
	while(C--)
	{
		int N, M;
		
		scanf("%d%d", &N, &M);
		
		vector<int> radar(M);		
		
		for(int i = 0; i < M; i++)	
			scanf("%d", &radar[i]);
		
		memset(dp, 0, sizeof dp);
		
		printf("%d\n", solve(N, radar));
	}
}
