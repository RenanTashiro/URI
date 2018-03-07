/*
Nome:      Sociedade Brasileira Casamenteira
ID:        1902
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.332s
Tamanho:   1 KB
Submissao: 15/07/17 19:45:02
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100005

int visited[MAX_SIZE] = {};
int lvisited[MAX_SIZE] = {};

bool dfs(int u, int graph[])
{
    if(lvisited[u])
        return true;
    if(visited[u])
        return false;

    visited[u] = 1;
    lvisited[u] = 1;

    bool cycle = false;

    if(graph[u])
        cycle = max(cycle, dfs(graph[u], graph));

    lvisited[u] = 0;

    return cycle;
}

int main()
{
    ios::sync_with_stdio(false);

    map<string,int> name_id;
    string u, v;
    int id = 1;

    int graph[MAX_SIZE] = {};

    while(cin >> u >> v)
    {
        if(name_id.find(u) == name_id.end())
            name_id[u] = id++;
        if(name_id.find(v) == name_id.end())
            name_id[v] = id++;

        graph[name_id[u]] = name_id[v];
    }

    int n_cc = 0;

    for(int i = 1; i < id; i++)
    {
        if(!visited[i])
        {
            n_cc += dfs(i, graph);
        }
    }

    printf("%d\n", n_cc);
}
