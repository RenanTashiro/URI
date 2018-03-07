/*
Nome:      Espaço de Projeto
ID:        2683
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     1.376s
Tamanho:   1,6 KB
Submissao: 19/09/17 08:32:30
*/
#include <bits/stdc++.h>
using namespace std;

#define COST first
#define VERTEX second

typedef pair<int,int> ii;

int prim_max(vector<ii> graph[], int N)
{
    priority_queue<ii> next;
    vector<int> visited(N, 0);
    int cost = 0;

    for(int i = 0; i < (int)graph[0].size(); i++)
        next.push(graph[0][i]);

    visited[0] = 1;

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(visited[u.VERTEX])
            continue;

        visited[u.VERTEX] = 1;
        cost += u.COST;

        for(int i = 0; i < (int)graph[u.VERTEX].size(); i++)
            next.push(graph[u.VERTEX][i]);
    }

    return cost;
}

int prim_min(vector<ii> graph[], int N)
{
    priority_queue<ii, vector<ii>, greater<ii>> next;
    vector<int> visited(N, 0);
    int cost = 0;

    for(int i = 0; i < (int)graph[0].size(); i++)
        next.push(graph[0][i]);

    visited[0] = 1;

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(visited[u.VERTEX])
            continue;

        visited[u.VERTEX] = 1;
        cost += u.COST;

        for(int i = 0; i < (int)graph[u.VERTEX].size(); i++)
            next.push(graph[u.VERTEX][i]);
    }

    return cost;
}

int main()
{
    int N;

    cin >> N;

    vector<ii> graph[N];

    for(int i = 0; i < N; i++)
    {
        int u, v, w;

        cin >> u >> v >> w;

        graph[u-1].push_back({w,v-1});
        graph[v-1].push_back({w,u-1});
    }

    cout << prim_max(graph, N) << endl;
    cout << prim_min(graph, N) << endl;
}
