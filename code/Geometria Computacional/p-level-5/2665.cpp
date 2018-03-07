/*
Nome:      Hipercampo
ID:        2665
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.028s
Tamanho:   1,94 KB
Submissao: 14/09/17 15:02:16
*/
#include <bits/stdc++.h>
using namespace std;

#define cost first
#define id second
#define x first
#define y second
#define COLINEAR 0
#define CLOCK_WISE 1
#define COUNTER_CLOCK_WISE  2

typedef pair<int,int> ii;

int cross_product(ii p, ii q, ii r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if(val == 0)
        return COLINEAR;
    else
        return val > 0 ? CLOCK_WISE : COUNTER_CLOCK_WISE;
}

int solve(int src, vector<int> graph[], int N)
{
    priority_queue<ii> next; // {cost, vertex}
    vector<int> cost(N, INT_MIN);

    next.push({1, src});
    cost[src] = 1;

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(u.cost < cost[u.id])
            continue;

        for(int i = 0; i < (int)graph[u.id].size(); i++)
        {
            int v = graph[u.id][i];

            if(cost[u.id] + 1 > cost[v])
            {
                cost[v] = cost[u.id] + 1;
                next.push({cost[v], v});
            }
        }
    }

    int ans = 0;

    for(int i = 0; i < N; i++)
        ans = max(ans, cost[i]);

    return ans;
}

int main()
{
    int N, Xa, Xb;

    scanf("%d%d%d", &N, &Xa, &Xb);

    ii point[N], Ap(Xa, 0), Bp(Xb, 0);

    for(int i = 0; i < N; i++)
        scanf("%d%d", &point[i].x, &point[i].y);

    vector<int> graph[N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i != j && point[i].y > point[j].y)
            {
                int AIJ = cross_product(Ap, point[i], point[j]);
                int BIJ = cross_product(Bp, point[i], point[j]);

                if(AIJ == CLOCK_WISE && BIJ == COUNTER_CLOCK_WISE)
                    graph[i].push_back(j);
            }
        }
    }

    int ans = 0;

    for(int i = 0; i < N; i++)
        ans = max(ans, solve(i, graph, N));

    printf("%d\n", ans);
}
