/*
Nome:      Anacrônico?
ID:        1813
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   2,21 KB
Submissao: 16/07/17 11:08:30
*/
#include <bits/stdc++.h>
using namespace std;

#define INF 10000000
#define DDIST first
#define DTIME second
#define VERTEX second
#define DIST first.first
#define TIME first.second

typedef pair<int,int> ii;
typedef pair<ii,int> iii;

ii dijkstra(int src, int dest, int max_time, vector<iii> graph[], int N)
{
    priority_queue<iii, vector<iii>, greater<iii>> next;
    vector<ii> cost(N, {INF, INF});

    next.push({{0, 0}, src});

    while(!next.empty())
    {
        iii u = next.top();
        next.pop();

        if(u.VERTEX == dest)
            return u.first;

        if(u.DIST > cost[u.VERTEX].DDIST)
            continue;

        for(int i = 0; i < (int)graph[u.VERTEX].size(); i++)
        {
            iii v = graph[u.VERTEX][i];

            if(u.TIME + v.TIME > max_time)
                continue;

            if(u.DIST + v.DIST < cost[v.VERTEX].DDIST)
            {
                cost[v.VERTEX].DDIST = u.DIST + v.DIST;
                cost[v.VERTEX].DTIME = u.TIME + v.TIME;
                next.push({cost[v.VERTEX], v.VERTEX});
            }
            else if(u.TIME + v.TIME < cost[v.VERTEX].DTIME)
            {
                cost[v.VERTEX].DDIST = u.DIST + v.DIST;
                cost[v.VERTEX].DTIME = u.TIME + v.TIME;
                next.push({cost[v.VERTEX], v.VERTEX});
            }
        }
    }

    return {INF, INF};
}

int main()
{
    int N, M, instance = 1;

    while(scanf("%d%d", &N, &M) && N)
    {
        vector<iii> graph[N];

        for(int i = 0; i < M; i++)
        {
            int u, v, c, t;

            scanf("%d%d%d%d", &u, &v, &c, &t);

            graph[u-1].push_back({{c, t}, v-1});
        }

        int K;

        scanf("%d", &K);

        printf("Instancia %d\n", instance++);

        while(K--)
        {
            int u, v, t;

            scanf("%d%d%d", &u, &v, &t);

            ii cost = dijkstra(u-1, v-1, t, graph, N);

            if(cost.DTIME > t)
                puts("Impossivel");
            else
                printf("Possivel - %d km, %d min\n", cost.DDIST, cost.DTIME);
        }

        puts("");
    }
}
/*
4 4
1 2 3 10
1 3 2 1
3 2 2 1
2 4 2 1
1
1 4 10
*/
