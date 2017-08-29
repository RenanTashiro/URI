/*
Nome:      Transporte de Painéis Solares
ID:        1579
Resposta:  Accepted
Linguagem: C++
Tempo:     0.172s
Tamanho:   1,1 KB
Submissao: 15/08/17 14:00:42
*/
#include <bits/stdc++.h>
using namespace std;

/// dp[n_truck][i|j]

int cost(int i, int j, int panel_weight[])
{
    int w = 0;

    for(int k = i; k <= j; k++)
        w += panel_weight[k];

    return w;
}

int dp[11][101];

int solve(int i, int n_truck, int panel_weight[], int N)
{
    if(n_truck == 1)
        return cost(i, N - 1, panel_weight);

    if(dp[n_truck][i])
        return dp[n_truck][i];

    int ans = INT_MAX;

    for(int j = i; j < N - n_truck + 1; j++)
        ans = min(ans, max(cost(i, j, panel_weight), solve(j + 1, n_truck - 1, panel_weight, N)));

    return dp[n_truck][i] = ans;
}

int main()
{
    int N;

    scanf("%d", &N);

    while(N--)
    {
        int n_panels, n_truck, shipping;

        scanf("%d%d%d", &n_panels, &n_truck, &shipping);

        int panel_weight[n_panels];

        for(int i = 0; i < n_panels; i++)
            scanf("%d", &panel_weight[i]);

        memset(dp, 0, sizeof dp);

        int ans = solve(0, n_truck, panel_weight, n_panels);

        printf("%d $%d\n", ans, ans * n_truck * shipping);
    }
}
