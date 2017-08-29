/*
Nome:      Filogenia
ID:        1894
Resposta:  Accepted
Linguagem: C++
Tempo:     0.200s
Tamanho:   1,88 KB
Submissao: 02/07/17 21:20:39
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> _merge(vector<int> &a, vector<int> &b, int &cost_)
{
    vector<int> c(a.size());

    for(int i = 0; i < (int)a.size(); i++)
    {
        if(!(a[i] & b[i])) c[i] = a[i] | b[i], cost_++;
        else               c[i] = a[i] & b[i];
    }

    return c;
}

// O(V) ~ O(10000)
vector<int> solve(int u, vector<int> gene[], vector<int> graph[], int &cost_)
{
    if(graph[u].empty()) return gene[u];

    vector<int> a = solve(graph[u][0], gene, graph, cost_);
    vector<int> b = solve(graph[u][1], gene, graph, cost_);
    vector<int> c = _merge(a, b, cost_); // O(N) ~ O(1000)

    return c;
}

int main()
{
    int N, L;

    scanf("%d%d", &N, &L);

    vector<int> gene[N];

    for(int i = 0; i < N; i++)
    {
        char g[1005];

        scanf("%s", g);

        for(int j = 0; j < L; j++)
        {
            gene[i].push_back(1 << (g[j] - 'a'));
        }
    }

    int root = N * 2 - 1, n_edges = (N - 1) * 2;
    vector<int> graph[root];

    for(int i = 0; i < n_edges; i++)
    {
        int u, v;

        //scanf("%d%d", &u, &v);
        cin >> v >> u;

        graph[u-1].push_back(v-1);
    }

    int cost = 0;
    vector<int> g = solve(root - 1, gene, graph, cost);

    //cout << cost << '\n';
    printf("%d\n", cost);

    for(auto c : g)
    {
        putchar(log2(c & (-c)) + 'a');
        //cout << char(log2(c & (-c)) + 'a');
    }

    cout << '\n';
}

/**
              abc|abc
              110 111
     abc|abc          abc|abc
     110 101          100 010
abc|abc    abc|abc
100 001    010 100


              dghks|dghks|dghks
              10110 01010 10001
     dghks|dghks|dghks          dghks|dghks|dghks
     00110 01010 10001          10000 01000 00001
dghks|dghks|dghks    dghks|dghks|dghks
00010 01000 00001    00100 00010 10000
*/
