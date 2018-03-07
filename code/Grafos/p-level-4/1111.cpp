/*
Nome:      Desrugenstein
ID:        1111
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   1,81 KB
Submissao: 16/07/17 09:44:45
*/
#include <bits/stdc++.h>
using namespace std;

#define CTOV(i, j) (N * (i) + j)
#define INF 1000000

int x[] = {-1, 1, 0, 0}, y[] = {0, 0, -1, 1};

int main()
{
    int N;

    while(scanf("%d", &N) && N)
    {
        vector<vector<int>> graph(N * N, vector<int>(N * N, INF));

        for(int i = 0; i < N * N; i++)
            graph[i][i] = 0;

        // read input
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                for(int k = 0; k < 4; k++)
                {
                    int has_path;

                    scanf("%d", &has_path);

                    if(has_path)
                    {
                        int src = CTOV(i, j), dest = CTOV(i + x[k], j + y[k]);

                        graph[src][dest] = 1;
                    }
                }
            }
        }

        // Floyd-Warshall
        for(int k = 0; k < N * N; k++)
        {
            for(int i = 0; i < N * N; i++)
            {
                for(int j = 0; j < N * N; j++)
                {
                    if(graph[i][k] + graph[k][j] < graph[i][j])
                    {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                }
            }
        }

        int P;

        scanf("%d", &P);

        // query
        for(int i = 0; i < P; i++)
        {
            int x0, y0, x1, y1;

            scanf("%d%d%d%d", &x0, &y0, &x1, &y1);

            y0 = N - y0 - 1;
            y1 = N - y1 - 1;

            int src = CTOV(y0, x0), dest = CTOV(y1, x1);
            int cost = graph[src][dest];

            if(cost == INF)
                puts("Impossible");
            else
                printf("%d\n", cost);
        }

        puts("");
    }
}
