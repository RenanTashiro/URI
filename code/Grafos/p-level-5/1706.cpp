/*
Nome:      Pontes Mágicas
ID:        1706
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.020s
Tamanho:   1,11 KB
Submissao: 01/07/17 19:00:35
*/
#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> &visited, vector<int> graph[], char note[], int &A, int &B)
{
    visited[u] = 1;

    if(note[u] == 'A') A++;
    else               B++;

    for(int i = 0; i < (int)graph[u].size(); i++)
    {
        int v = graph[u][i];

        if(!visited[v])
        {
            dfs(v, visited, graph, note, A, B);
        }
    }
}

int main()
{
    int N, M;

    while(scanf("%d%d", &N, &M) != EOF)
    {
        vector<int> graph[N], visited(N, 0);
        char note[1005];
        int A = 0, B = 0;

        for(int i = 0; i < N; i++)
        {
            cin >> note[i];
        }

        for(int i = 0; i < M; i++)
        {
            int a, b;

            scanf("%d%d", &a, &b);

            graph[a-1].push_back(b-1);
            graph[b-1].push_back(a-1);
        }

        for(int i = 0; i < N && B % 2 == 0; i++)
        {
            if(!visited[i])
            {
                dfs(i, visited, graph, note, A, B);
            }
        }

        printf("%s\n", B % 2 ? "N" : "Y");
    }
}
