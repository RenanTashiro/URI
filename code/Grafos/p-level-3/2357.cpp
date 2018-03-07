/*
Nome:      Violência em Sildávia
ID:        2357
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.156s
Tamanho:   1.014 Bytes
Submissao: 01/07/17 19:55:05
*/
#include <bits/stdc++.h>
using namespace std;

bool dfs(int u, int anc, int visited[], vector<int> graph[])
{
    if(visited[u]) return false;

    visited[u] = 1;

    bool ans = true;

    for(int v = 0; v < (int)graph[u].size() && ans; v++)
    {
        if(graph[u][v] != anc)
            ans = min(ans, dfs(graph[u][v], u, visited, graph));
    }

    return ans;
}

int main()
{
    int N, M;

    while(scanf("%d%d", &N, &M) != EOF)
    {
        vector<int> graph[N];

        for(int i = 0; i < M; i++)
        {
            int u, v;

            scanf("%d%d", &u, &v);

            graph[u-1].push_back(v-1);
            graph[v-1].push_back(u-1);
        }

        int visited[10005] = {};
        bool ans = true;

        for(int i = 0; i < N; i++)
        {
            if(!visited[i])
            {
                ans = min(ans, dfs(i, -1, visited, graph));
            }
        }

        printf("%s\n", ans ? "Seguro" : "Inseguro");
    }
}
