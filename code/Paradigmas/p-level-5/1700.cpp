/*
Nome:      Antenas
ID:        1700
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.972s
Tamanho:   874 Bytes
Submissao: 13/01/18 13:45:05
*/
#include <bits/stdc++.h>
using namespace std;

int irelu(int v)
{
	return v < 0 ? -v : 0;
}

int dp[1001][50001];

int solve(int i, int d, int h[], int N, int sum)
{
	if(d > sum)
		return INT_MIN;
	if(i == N)
		return d == 0 ? d : INT_MIN;
	if(dp[i][d] != -1)
		return dp[i][d];		
	
	int ans = INT_MIN;
	
	ans = max(ans, h[i] + solve(i+1, d + h[i], h, N, sum));
	ans = max(ans, irelu(d - h[i]) + solve(i+1, abs(d - h[i]), h, N, sum));
	ans = max(ans, solve(i+1, d, h, N, sum));
	
	return dp[i][d] = ans;
}

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{
		int h[N], sum = 0;
		
		for(int i = 0; i < N; i++)
			scanf("%d", &h[i]), sum += h[i];
		
		sum = sum / 2 + 1;
		
		for(int i = 0; i < N; i++)
			for(int j = 0; j <= sum+1; j++)
				dp[i][j] = -1;			
			
		printf("%d\n", solve(0, 0, h, N, sum));
	}
}



