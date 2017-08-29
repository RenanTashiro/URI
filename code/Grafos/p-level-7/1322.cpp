/*
Nome:      Desejos das Crianças
ID:        1322
Resposta:  Accepted
Linguagem: C++
Tempo:     0.340s
Tamanho:   1,52 KB
Submissao: 27/05/17 14:42:35
*/
#include <bits/stdc++.h>
using namespace std;

bool _solve(int u, int d, int prev, int src, unordered_map<int,bool> &visited, unordered_map<int,set<int>> &graph, int N)
{
    bool ans = true;

    visited[u] = true;

    for(set<int>::iterator it = graph[u].begin(); ans && it != graph[u].end(); it++)
    {
        if(*it == prev) continue;

        if(*it == src)
        {
            return d + 1 == N;
        }

        ans = min(ans, _solve(*it, d + 1, u, src, visited, graph, N));
    }

    return ans;
}

bool solve(unordered_map<int,set<int>> &graph, int N)
{
    unordered_map<int,bool> visited;
    bool ans = true;

    for(unordered_map<int,set<int>>::iterator it = graph.begin(); ans && it != graph.end(); ++it)
    {
        if(!visited[it->first])
        {
            ans = min(ans, _solve(it->first, 0, -1, it->first, visited, graph, N));
        }
    }

    return ans;
}

int main()
{
    int K, W, c = 1;
    
    while(scanf("%d%d", &K, &W) && (K || W))
    {
        unordered_map<int, set<int>> graph;
        bool possible = true;

        for(int i = 0; i < W; i++)
        {
            int A, B;

            scanf("%d%d", &A, &B);

            graph[A-1].insert(B-1);
            graph[B-1].insert(A-1);

            if(graph[A-1].size() > 2 || graph[B-1].size() > 2) possible = false;
        }

        if(possible)
        {
            printf("%s\n", solve(graph, K) ? "Y" : "N");
        }
        else
        {
            puts("N");
        }
    }
}