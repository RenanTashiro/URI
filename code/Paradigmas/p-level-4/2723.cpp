/*
Nome:      Equilibrando Presentes
ID:        2723
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   846 Bytes
Submissao: 23/12/17 10:17:31
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX_LENGTH 10005
#define MAX_DIFF 10

int dp[MAX_LENGTH][MAX_DIFF];

int solve(int i, int a, int b, int W[], int N)
{
	if(i == N)
		return 1;
	if(dp[i][abs(a - b)] != -1)
		return dp[i][abs(a - b)];
	
	int ans = 0;
	
	if(abs(a + W[i] - b) <= 5)
		ans = max(ans, solve(i + 1, a + W[i], b, W, N));
		
	if(abs(b + W[i] - a) <= 5)		
		ans = max(ans, solve(i + 1, a, b + W[i], W, N));
		
	return dp[i][abs(a - b)] = ans;
}

int main()
{
	int T;
	
	cin >> T;
	
	while(T--)
	{
		int N;
		
		cin >> N;
		
		int W[N];
		
		for(int i = 0; i < N; i++)
			scanf("%d", &W[i]);		
		
		for(int i = 0; i <= N; i++)
			for(int j = 0; j < MAX_DIFF; j++)
				dp[i][j] = -1;
		
		cout << (solve(0, 0, 0, W, N) == 1 ? "Feliz Natal!" : "Ho Ho Ho!") << endl;
	}
}
