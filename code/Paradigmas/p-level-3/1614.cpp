/*
Nome:      Ajude o Turista
ID:        1614
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.988s
Tamanho:   982 Bytes
Submissao: 10/09/17 22:49:32
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N, M, K;

        scanf("%d%d%d", &N, &M, &K);

        vii spot(N), metro(M);

        for(int i = 0; i < N; i++)
            scanf("%d%d", &spot[i].first, &spot[i].second);

        for(int i = 0; i < M; i++)
            scanf("%d%d", &metro[i].first, &metro[i].second);

        vector<int> best_dist;

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                int dist = abs(spot[i].first - metro[j].first) + abs(spot[i].second - metro[j].second);

                best_dist.push_back(dist);
            }
        }

        sort(best_dist.begin(), best_dist.end());

        int ans = 0;

        for(int i = 0; i < K; i++)
            ans += best_dist[i];

        printf("%d\n", ans);
    }
}
