/*
Nome:      Desvio de Rota
ID:        1123
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.012s
Tamanho:   1,6 KB
Submissao: 27/05/17 09:18:49
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii>  vii;
typedef vector<vii> vvii;

int dijkstra(vvii graph, int C, int K)
{
    if(graph[C-1].size() == 0)
    {
        return 0;
    }

    priority_queue<ii, vector<ii>, greater<ii>> next;
    vector<int> cost(graph.size(), INT_MAX), visited(graph.size(), 0);

    next.push(ii(0, K));
    cost[K] = 0;

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(u.second == C - 1) return u.first;

        if(visited[u.second]) continue;

        visited[u.second] = 1;

        for(int v = 0; v < (int)graph[u.second].size(); v++)
        {
            if(!visited[graph[u.second][v].first]&&(u.second < C && graph[u.second][v].first == u.second + 1) || u.second >= C)
            {
                if(cost[u.second] + graph[u.second][v].second <= cost[graph[u.second][v].first])
                {
                    cost[graph[u.second][v].first] = cost[u.second] + graph[u.second][v].second;
                    next.push(ii(cost[graph[u.second][v].first], graph[u.second][v].first));
                }
            }
        }
    }

    return 0;
}

int main()
{
    int N, M, C, K;

    while(scanf("%d%d%d%d", &N, &M, &C, &K) && N && M && C && K)
    {
        vvii graph(N);

        for(int i = 0; i < M; i++)
        {
            int u, v, p;

            scanf("%d%d%d", &u, &v, &p);

            graph[u].push_back(ii(v, p));
            graph[v].push_back(ii(u, p));
        }

        printf("%d\n", dijkstra(graph, C, K));
    }
}
