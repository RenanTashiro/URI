/*
Nome:      Alocando Ambulâncias
ID:        2359
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.608s
Tamanho:   1,58 KB
Submissao: 16/07/17 16:18:59
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int dijkstra(int src, vector<int> has_hospital, vector<ii> graph[], int N)
{
    priority_queue<ii, vector<ii>, greater<ii>> next;
    vector<int> cost(N, INT_MAX);

    next.push({0, src});
    cost[src] = 0;

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(has_hospital[u.second]) return u.first;
        if(u.first > cost[u.second]) continue;

        for(int i = 0; i < (int)graph[u.second].size(); i++)
        {
            ii v = graph[u.second][i];

            if(u.first + v.first < cost[v.second])
            {
                cost[v.second] = u.first + v.first;
                next.push({cost[v.second], v.second});
            }
        }
    }

    return -1;
}

int main()
{
    int N, M, Q;

    while(scanf("%d%d%d", &N, &M, &Q) != EOF)
    {
        vector<ii> graph[N];
        vector<int> has_hospital(N, 0);

        // read input
        for(int i = 0; i < M; i++)
        {
            int u, v, w;

            scanf("%d%d%d", &u, &v, &w);

            graph[u-1].push_back({w, v-1});
            graph[v-1].push_back({w, u-1});
        }

        for(int i = 0; i < Q; i++)
        {
            int city_id;

            scanf("%d", &city_id);

            has_hospital[city_id-1] = 1;
        }

        int ans = 0;

        // find solution
        for(int i = 0; i < N; i++)
        {
            ans = max(ans, dijkstra(i, has_hospital, graph, N));
        }

        printf("%d\n", ans);
    }
}
