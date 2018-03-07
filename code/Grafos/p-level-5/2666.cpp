/*
Nome:      Imposto Real
ID:        2666
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.028s
Tamanho:   959 Bytes
Submissao: 13/09/17 18:11:19
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int visited[10005], total_km = 0;

int solve(int u, int gold[], vector<ii> graph[], int C)
{
    visited[u] = 1;

    for(int i = 0; i < (int)graph[u].size(); i++)
    {
        ii v = graph[u][i];

        if(!visited[v.first])
        {
            int extra_trip = solve(v.first, gold, graph, C);

            gold[u] += extra_trip;
            total_km += ceil((double)extra_trip/C) * v.second;
        }
    }

    return gold[u];
}

int main()
{
    int N, C;

    cin >> N >> C;

    int gold[N];

    for(int i = 0; i < N; i++)
        cin >> gold[i];

    vector<ii> graph[N];

    for(int i = 0; i < N-1; i++)
    {
        int u, v, c;

        cin >> u >> v >> c;

        graph[u-1].push_back({v-1, c});
        graph[v-1].push_back({u-1, c});
    }

    solve(0, gold, graph, C);

    cout << 2 * total_km << endl;
}
