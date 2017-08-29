/*
Nome:      Passeio em FdI
ID:        2553
Resposta:  Accepted
Linguagem: C++
Tempo:     0.868s
Tamanho:   875 Bytes
Submissao: 14/08/17 13:34:15
*/
#include <bits/stdc++.h>
using namespace std;

int dp[50][850][850];

int solve(int i, int V, int A, int v[], int a[], int N)
{
    if(i == N)
        return 0;

    if(dp[i][V][A])
        return dp[i][V][A];

    int ans = INT_MIN;

    if(v[i] < 0 && V + v[i] >= 0)
        ans = max(ans, 1 + solve(i + 1, V + v[i], A + a[i], v, a, N));
    else if(v[i] >= 0 && A + a[i] >= 0)
        ans = max(ans, 1 + solve(i + 1, V + v[i], A + a[i], v, a, N));

    ans = max(ans, solve(i + 1, V, A, v, a, N));

    return dp[i][V][A] = ans;
}

int main()
{
    int N;

    while(scanf("%d", &N) != EOF)
    {
        int V, A, v[N], a[N];

        scanf("%d%d", &V, &A);

        for(int i = 0; i < N; i++)
            scanf("%d%d", &v[i], &a[i]);

        memset(dp, 0, sizeof dp);

        printf("%d\n", solve(0, V, A, v, a, N));
    }
}
