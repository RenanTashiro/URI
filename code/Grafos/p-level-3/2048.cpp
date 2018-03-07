/*
Nome:      Houston, Nós Temos Um Problema!
ID:        2048
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   1,57 KB
Submissao: 02/07/17 10:01:56
*/
#include <bits/stdc++.h>
using namespace std;

#define INF 10e5

typedef pair<double,int> di;

double graph[105][105];

void _prim(int u, priority_queue<di, vector<di>, greater<di>> &next, int visited[], int N)
{
    for(int i = 0; i < N; i++)
    {
        if(graph[u][i] != INF && !visited[i])
        {
            //cout << fixed << setprecision(2) << graph[u][i] << endl;
            next.push(di(graph[u][i], i));
        }
    }
}

vector<double> prim(int N)
{
    priority_queue<di, vector<di>, greater<di>> next;
    int visited[105] = {};
    vector<double> ans;

    _prim(0, next, visited, N);
    visited[0] = 1;

    while(!next.empty())
    {
        di u = next.top();
        next.pop();

        if(visited[u.second]) continue;

        ans.push_back(u.first);
        visited[u.second] = 1;

        _prim(u.second, next, visited, N);
    }

    return ans;
}

int main()
{
    int N, M, instance = 1;

    while(scanf("%d%d", &N, &M) && N)
    {
        if(instance > 1) cout << endl;
        cout << "Instancia " << instance++ << endl;

        memset(graph, INF, sizeof graph);

        for(int i = 0; i < M; i++)
        {
            int a, b;
            double prob;

            cin >> a >> b >> prob;

            graph[a-1][b-1] = prob;
            graph[b-1][a-1] = prob;
        }

        vector<double> conn = prim(N);
        double ans = 1.0;

        for(auto prob : conn)
        {
            ans *= 1.0 - prob;
        }

        cout << fixed << setprecision(5) << 1.0 - ans << endl;
    }
}
