/*
Nome:      Viagem Barril
ID:        1757
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.076s
Tamanho:   1,16 KB
Submissao: 02/07/17 09:28:12
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int graph[105][105];

void _prim(int u, priority_queue<ii, vector<ii>, greater<ii>> &next, int visited[], int N)
{
    for(int i = 0; i < N; i++)
    {
        if(i != u && !visited[i])
        {
            next.push(ii(graph[u][i], i));
        }
    }
}

int prim(int N)
{
    priority_queue<ii, vector<ii>, greater<ii>> next;
    int visited[105] = {}, ans = 0;

    _prim(0, next, visited, N);
    visited[0] = 1;

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(visited[u.second]) continue;
        if(u.first == 1) ans++;

        visited[u.second] = 1;
        _prim(u.second, next, visited, N);
    }

    return ans;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N, V;

        scanf("%d%d", &N, &V);

        memset(graph, 0, sizeof graph);

        for(int i = 0; i < V; i++)
        {
            int a, b;

            scanf("%d%d", &a, &b);

            graph[a][b] = 1;
            graph[b][a] = 1;
        }

        printf("%d\n", prim(N));
    }
}
