/*
Nome:      Remendo
ID:        1475
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   751 Bytes
Submissao: 14/08/17 16:39:07
*/
#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int solve(int i, int pos[], int T1, int T2, int N)
{
    if(i == N)
        return 0;

    if(dp[i] != -1)
        return dp[i];

    int ans = INT_MAX, j;

    for(j = i; j < N && pos[j] <= pos[i] + T1; j++);
    ans = min(ans, T1 + solve(j, pos, T1, T2, N));

    for(j = i; j < N && pos[j] <= pos[i] + T2; j++);
    ans = min(ans, T2 + solve(j, pos, T1, T2, N));

    return dp[i] = ans;
}

int main()
{
    int N, C, T1, T2;

    while(scanf("%d%d%d%d", &N, &C, &T1, &T2) != EOF)
    {
        int pos[N];

        for(int i = 0; i < N; i++)
            scanf("%d", &pos[i]), dp[i] = -1;

        printf("%d\n", solve(0, pos, T1, T2, N));
    }
}
