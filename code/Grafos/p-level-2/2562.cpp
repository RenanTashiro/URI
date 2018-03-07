/*
Nome:      Tipos Analógimôn
ID:        2562
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.288s
Tamanho:   998 Bytes
Submissao: 14/05/17 15:39:24
*/
#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> graph, int src)
{
    queue<int> Q;
    vector<int> visited(graph.size(), 0);

    int c = 1;

    Q.push(src);
    visited[src] = 1;

    while(!Q.empty())
    {
        int u = Q.front(); Q.pop();

        for(int i = 0; i < (int)graph[u].size(); i++)
        {
            if(!visited[graph[u][i]])
            {
                Q.push(graph[u][i]);
                visited[graph[u][i]] = 1;
                c++;
            }
        }
    }

    return c;
}

int main()
{
    int N, M;

    while(scanf("%d%d", &N, &M) != EOF)
    {
        vector<vector<int>> graph(N);

        for(int i = 0; i < M; i++)
        {
            int a, b;

            scanf("%d%d", &a, &b);

            graph[a-1].push_back(b-1);
            graph[b-1].push_back(a-1);
        }

        int e;

        scanf("%d", &e);

        cout << solve(graph, e - 1) << endl;
    }
}
