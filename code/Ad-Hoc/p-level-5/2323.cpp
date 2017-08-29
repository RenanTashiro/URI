/*
Nome:      Móbile
ID:        2323
Resposta:  Accepted
Linguagem: C++
Tempo:     0.008s
Tamanho:   873 Bytes
Submissao: 15/06/17 16:47:43
*/
#include <bits/stdc++.h>
using namespace std;

bool balanced = true;

int dfs(int u, int level, const vector<vector<int>> &graph)
{
    if(!balanced)
    {
        return 0;
    }

    if(graph[u].size() == 0)
    {
        return 1;
    }

    int value = -1;

    for(auto v : graph[u])
    {
        int nvalue = dfs(v, level + 1, graph);

        if(value == -1)
        {
            value = nvalue;
        }
        else if(value != nvalue)
        {
            balanced = false;
        }
    }

    return 1 + graph[u].size() * value;
}

int main()
{
    int N;

    cin >> N;

    vector<vector<int>> graph(N+1);

    for(int i = 0; i < N; i++)
    {
        int u, v;

        cin >> v >> u;

        graph[u].push_back(v);
    }

    dfs(0, 0, graph);

    cout << (balanced ? "bem" : "mal") << endl;
}
