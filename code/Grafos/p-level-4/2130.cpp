/*
Nome:      Final Mundial de 2008
ID:        2130
Resposta:  Accepted
Linguagem: C++
Tempo:     0.068s
Tamanho:   1,59 KB
Submissao: 16/07/17 18:12:05
*/
#include <bits/stdc++.h>
using namespace std;

#define INF 10000000

int main()
{
    int N, M, instance = 1;

    while(scanf("%d%d", &N, &M) != EOF)
    {
        int graph[N][N][N+1];

        // memset(graph, INF, sizeof graph);

        for(int k = 0; k < N + 1; k++)
        {
            for(int i = 0; i < N; i++)
            {
                for(int j = 0; j < N; j++)
                {
                    graph[i][j][k] = INF;
                }
            }

            if(k < N)
                graph[k][k][0] = 0;
        } //----

        for(int i = 0; i < M; i++)
        {
            int u, v, w;

            scanf("%d%d%d", &u, &v, &w);

            graph[u-1][v-1][0] = min(graph[u-1][v-1][0], w);
        }

        // K determina se um vertice pode ser usado no caminho
        for(int k = 0; k < N; k++)
        {
            for(int i = 0; i < N; i++)
            {
                for(int j = 0; j < N; j++)
                {
                    //if(graph[i][k][k] != INF && graph[k][j][k] != INF)
                    //{
                        graph[i][j][k+1] = min(graph[i][j][k], graph[i][k][k] + graph[k][j][k]);
                    //}
                }
            }
        }

        int n_query;

        scanf("%d", &n_query);

        printf("Instancia %d\n", instance++);

        while(n_query--)
        {
            int src, dest, t;

            scanf("%d%d%d", &src, &dest, &t);

            printf("%d\n", graph[src-1][dest-1][t] == INF ? -1 : graph[src-1][dest-1][t]);
        }

        puts("");
    }
}
