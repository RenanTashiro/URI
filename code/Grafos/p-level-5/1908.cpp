/*
Nome:      UFFS Multicampi
ID:        1908
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.412s
Tamanho:   1,19 KB
Submissao: 16/07/17 15:13:57
*/
#include <bits/stdc++.h>
using namespace std;

int bfs(vector<int> graph[], int N)
{
    queue<int> next;
    vector<int> cost(N, -1);

    next.push(0);
    cost[0] = 0;

    while(!next.empty())
    {
        int u = next.front();
        next.pop();

        for(int i = 0; i < (int)graph[u].size(); i++)
        {
            int v = graph[u][i];

            if(cost[v] == -1)
            {
                next.push(v);
                cost[v] = cost[u] + 1;
            }
        }
    }

    return cost[N-1];
}

int main()
{
    int N, K;

    scanf("%d%d", &N, &K);

    vector<int> graph[N];

    for(int i = 0; i < K; i++)
    {
        int L;

        scanf("%d", &L);

        int line[L];

        for(int j = 0; j < L; j++)
            scanf("%d", &line[j]);

        for(int n = 0; n < L; n++)
        {
            for(int m = 0; m < L; m++)
            {
                if(n != m)
                {
                    int u = line[n], v = line[m];

                    graph[u-1].push_back(v-1);
                    graph[v-1].push_back(u-1);
                }
            }
        }
    }

    printf("%d\n", bfs(graph, N));
}
