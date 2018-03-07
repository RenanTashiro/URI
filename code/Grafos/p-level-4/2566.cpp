/*
Nome:      Viagem Para BH
ID:        2566
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.152s
Tamanho:   1,48 KB
Submissao: 14/05/17 21:00:02
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int dijkstra(vector<vector<ii>> graph)
{
    priority_queue<ii, vector<ii>, greater<ii>> Q;
    vector<int> cost(graph.size(), INT_MAX);

    Q.push(ii(0, 0));
    cost[0] = 0;

    while(!Q.empty())
    {
        ii u = Q.top(); Q.pop();

        if(u.second == (int)graph.size() - 1)
        {
            return cost[graph.size() - 1];
        }

        for(int i = 0; i < (int)graph[u.second].size(); i++)
        {
            if(graph[u.second][i].first + cost[u.second] < cost[graph[u.second][i].second])
            {
                cost[graph[u.second][i].second] = graph[u.second][i].first + cost[u.second];
                Q.push(ii(cost[graph[u.second][i].second], graph[u.second][i].second));
            }
        }
    }

    return -1;
}

int main()
{
    int N, M;

    while(cin >> N >> M)
    {
        vector<vector<ii>> bus(N), air(N);

        for(int i = 0; i < M; i++)
        {
            int A, B, T, R;

            cin >> A >> B >> T >> R;

            if(T == 0)
            {
                bus[A-1].push_back(ii(R, B-1));
            }
            else
            {
                air[A-1].push_back(ii(R, B-1));
            }
        }

        int bus_sol = dijkstra(bus), air_sol = dijkstra(air);

        int ans = min(bus_sol, air_sol);

        if(ans == -1) ans = max(bus_sol, air_sol);

        cout << ans << endl;
    }
}
