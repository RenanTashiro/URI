/*
Nome:      Quadro Premiado
ID:        1543
Resposta:  Accepted
Linguagem: C++
Tempo:     0.580s
Tamanho:   1,49 KB
Submissao: 14/08/17 14:17:42
*/
#include <bits/stdc++.h>
using namespace std;

int board[100][100];

int profit(int i, int M, string pattern)
{
    int p = 0;

    for(int j = 0; j < M; j++)
        if(pattern[j] == '+')
            p += board[i][j];
        else if(pattern[j] == '-')
            p -= board[i][j];

    return p;
}

bool valid_pattern(string prev_pattern, string pattern)
{
    for(int i = 0; i < (int)prev_pattern.size(); i++)
        if(prev_pattern[i] != '.' && prev_pattern[i] == pattern[i])
            return false;

    return true;
}

int dp[100][100];

// O(N*K*K*2M) == TLE?
int solve(int k, int i, string prev_pattern, string pattern[], int N, int M, int K)
{
    if(i == N)
        return 0;

    if(k != -1 && dp[k][i])
        return dp[k][i];

    int ans = (int)-1e8;

    for(int j = 0; j < K; j++)
        if(valid_pattern(prev_pattern, pattern[j]))
            ans = max(ans, profit(i, M, pattern[j]) + solve(j, i + 1, pattern[j], pattern, N, M, K));

    if(k != -1)
        dp[k][i] = ans;

    return ans;
}

int main()
{
    int N, M;

    while(scanf("%d%d", &N, &M) && N)
    {
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                scanf("%d", &board[i][j]);

        int K;

        scanf("%d", &K);

        string pattern[K];

        for(int i = 0; i < K; i++)
            cin >> pattern[i];

        memset(dp, 0, sizeof dp);

        printf("%d\n", solve(-1, 0, "", pattern, N, M, K));
    }
}
