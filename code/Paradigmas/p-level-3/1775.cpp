/*
Nome:      André e os Mentos
ID:        1775
Resposta:  Accepted
Linguagem: C++
Tempo:     0.540s
Tamanho:   947 Bytes
Submissao: 13/08/17 09:14:50
*/
#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int solve(int i, int j, int mentos[])
{
    if(i > j)
        return 0;
    else if(i == j)
        return 1;

    if(dp[i][j] != -1)
        return dp[i][j];

    int ans = INT_MAX;

    if(mentos[i] == mentos[j])
        ans = min(ans, 1 + solve(i + 1, j - 1, mentos));
    else {
        ans = min(ans, 1 + solve(i + 1, j, mentos));
        ans = min(ans, 1 + solve(i, j - 1, mentos));
    }

    return dp[i][j] = ans;
}

int main()
{
    int T;

    scanf("%d", &T);

    for(int TC = 1; TC <= T; TC++)
    {
        int N;

        scanf("%d", &N);

        int mentos[N];

        for(int i = 0; i < N; i++)
            scanf("%d", &mentos[i]);

        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                dp[i][j] = -1;

        printf("Caso #%d: %d\n", TC, solve(0, N-1, mentos));
    }
}
