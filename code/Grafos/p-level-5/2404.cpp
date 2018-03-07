/*
Nome:      Reduzindo Detalhes em um Mapa
ID:        2404
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.072s
Tamanho:   1,14 KB
Submissao: 15/06/17 17:02:38
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

void _prim(int u, vector<int> &visited, priority_queue<ii, vector<ii>, greater<ii>> &next, vector<vector<ii>> &graph)
{
    for(auto v : graph[u])
    {
        if(!visited[v.first])
        {
            next.push({v.second, v.first});
        }
    }
}


int prim(vector<vector<ii>> &graph)
{
    vector<int> visited(graph.size(), 0);
    priority_queue<ii, vector<ii>, greater<ii>> next;
    int ans = 0;

    visited[0] = 1;
    _prim(0, visited, next, graph);

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(!visited[u.second])
        {
            visited[u.second] = 1;
            ans += u.first;
            _prim(u.second, visited, next, graph);
        }
    }

    return ans;
}

int main()
{
    int N, M;

    cin >> N >> M;

    vector<vector<ii>> graph(N);

    for(int i = 0; i < M; i++)
    {
        int u, v, n;

        cin >> u >> v >> n;

        graph[u-1].push_back({v-1, n});
        graph[v-1].push_back({u-1, n});
    }

    cout << prim(graph) << endl;
}
