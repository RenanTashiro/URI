/*
Nome:      Ajude Bob
ID:        1648
Resposta:  Accepted
Linguagem: C++
Tempo:     0.404s
Tamanho:   1,46 KB
Submissao: 12/08/17 19:50:42
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M;

    while(scanf("%d", &M) && M)
    {
        double discount[M][M];
        int price[M], area[M];

        for(int i = 0; i < M; i++)
            for(int j = 0; j < M; j++)
                discount[i][j] = 1.0;

        for(int i = 0; i < M; i++)
        {
            int c;

            scanf("%d%d%d", &price[i], &area[i], &c);

            for(int j = 0; j < c; j++)
            {
                int idx, disc;

                scanf("%d%d", &idx, &disc);

                discount[i][idx-1] = (100.0 - disc) / 100.0;
            }
        }

        double dp[1 << M], ans = 1e20;

        for(int i = 0; i < (1 << M); i++)
            dp[i] = 1e20;

        dp[0] = 0.0;

        for(int mask = 0; mask < (1 << M); mask++)
        {
            int A = 0;

            for(int i = 0; i < M; i++)
            {
                if((mask >> i) & 1) {
                    A += area[i];
                } else {
                    double c = price[i];

                    for(int j = 0; j < M; j++)
                        if((mask >> j) & 1)
                            c *= discount[j][i];

                    dp[mask | (1 << i)] = min(dp[mask | (1 << i)], dp[mask] + c);
                }
            }

            if(mask)
                ans = min(ans, dp[mask] / A);
        }

        cout << fixed << setprecision(4) << ans << endl;
    }
}


