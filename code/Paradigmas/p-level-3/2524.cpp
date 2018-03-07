/*
Nome:      Balas de Morango
ID:        2524
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.056s
Tamanho:   961 Bytes
Submissao: 13/01/18 14:31:07
*/
#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int solve(int i, int qtd, int candy[], int N, int M)
{	
    if(i == M) {
        return qtd == 0 ? 0 : INT_MIN;
	}
	
    if(dp[i][qtd] != -1)
        return dp[i][qtd];

    int ans = INT_MIN;

    ans = max(ans, 1 + solve(i + 1, (qtd + candy[i]) % N, candy, N, M));
    ans = max(ans, solve(i + 1, qtd, candy, N, M));

    return dp[i][qtd] = ans;
}

int solve(int candy[], int N, int M)
{
	int ans = 0;
	
	for(int i = 0; i < M; i++)
		ans = max(ans, 1 + solve(i+1, candy[i] % N, candy, N, M));
	
	return ans;	
}


int main()
{
    int N, M;

    while(scanf("%d%d", &N, &M) != EOF)
    {
        int candy[M];

        for(int i = 0; i < M; i++)
            scanf("%d", &candy[i]);
            
        for(int i = 0; i < M; i++)
			for(int j = 0; j < N; j++)
				dp[i][j] = -1;

        printf("%d\n", max(0, solve(candy, N, M)));
    }
}
