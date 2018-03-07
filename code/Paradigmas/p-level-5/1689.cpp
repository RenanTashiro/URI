/*
Nome:      Radares
ID:        1689
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.468s
Tamanho:   834 Bytes
Submissao: 16/08/17 20:32:49
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX 1000005

int main()
{
    vector<int> position(MAX), profit, dp;
    vector<bool> has;

	int T, N, K;

	scanf("%d", &T);

	while(T--)
	{
		profit.assign(MAX, 0);
		dp.assign(MAX, 0);
		has.assign(MAX, false);

		scanf("%d%d", &N, &K);

		for(int i = 0; i < N; i++)
        {
			scanf("%d", &position[i]);
            has[position[i]] = true;
		}

        int p;

		for(int i = 0; i < N; i++)
        {
			scanf("%d", &p);
            profit[position[i]] = max(profit[position[i]], p);
        }

		for(int i = MAX; i >= 0; i--)
        {
            if( i + K <= MAX && has[i])
                dp[i] = max(dp[i+1], dp[i+K] + profit[i]);
            else
                dp[i] = dp[i+1];
        }

		printf("%d\n", dp[0]);
	}
}
