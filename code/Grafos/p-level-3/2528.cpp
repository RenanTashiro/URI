/*
Nome:      Cidade Proibida
ID:        2528
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   1,18 KB
Submissao: 18/05/17 13:31:10
*/
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

int solve(vector<vi> graph, int src, int dst, int restriction)
{
    queue<ii> next;
    vi visited(graph.size(), 0); // node, step

    next.push(ii(src, 0));

    while(!next.empty())
    {
        ii u = next.front();
        next.pop();

        if(u.first == dst)
        {
            return u.second;
        }

        visited[u.first] = 1;

        for(int i = 0; i < (int)graph[u.first].size(); i++)
        {
            if(!visited[graph[u.first][i]] && graph[u.first][i] != restriction)
            {
                next.push(ii(graph[u.first][i], u.second + 1));
            }
        }
    }

    return -1;
}

int main()
{
    int N, M;

    while(scanf("%d%d", &N, &M) != EOF)
    {
        vector<vi> graph(N);

        for(int i = 0; i < M; i++)
        {
            int A, B;

            scanf("%d%d", &A, &B);

            graph[A-1].push_back(B-1);
            graph[B-1].push_back(A-1);
        }

        int C, R, E;

        scanf("%d%d%d", &C, &R, &E);

        printf("%d\n", solve(graph, C-1, R-1, E-1));
    }
}
