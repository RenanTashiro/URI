/*
Nome:      Rede do DINF
ID:        2522
Resposta:  Accepted
Linguagem: C++
Tempo:     0.232s
Tamanho:   1,84 KB
Submissao: 18/05/17 13:55:43
*/
#include <bits/stdc++.h>
using namespace std;

typedef vector<double> vd;
typedef pair<int,int> ii;
typedef pair<double,int> di;

vector<vd> create_graph(vector<ii> nodes)
{
    vector<vd> graph(nodes.size(), vd(nodes.size()));

    for(int i = 0; i < (int)nodes.size(); i++)
    {
        for(int j = i + 1; j < (int)nodes.size(); j++)
        {
            double cost = hypot(
                (double)nodes[i].first - nodes[j].first, (double)nodes[i].second - nodes[j].second
            );

            graph[i][j] = cost;
            graph[j][i] = cost;
        }
    }

    return graph;
}

void _solve(int u, const vector<vd> &graph, priority_queue<di, vector<di>, greater<di>> &next, vector<int> &visited)
{
    for(int i = 0; i < (int)graph.size(); i++)
    {
        if(i != u && !visited[i])
        {
            next.push(di(graph[u][i], i));
        }
    }
}

double solve(const vector<vd> &graph)
{
    priority_queue<di, vector<di>, greater<di>> next;
    vector<int> visited(graph.size(), 0);
    double ans = 0.0;
    int n_visited = 0;

    visited[0] = 1;
    _solve(0, graph, next, visited);

    while(!next.empty())
    {
        di u = next.top();
        next.pop();

        if(!visited[u.second])
        {
            ans += u.first;
            visited[u.second] = 1;
            n_visited++;

            if(n_visited == (int)graph.size()) break;

            _solve(u.second, graph, next, visited);
        }
    }

    return ans;
}

int main()
{
    int N;

    while(scanf("%d", &N) != EOF)
    {
        vector<ii> nodes(N);

        for(int i = 0; i < N; i++)
        {
            scanf("%d%d", &nodes[i].first, &nodes[i].second);
        }

        vector<vd> graph = create_graph(nodes);

        cout << fixed << setprecision(2) << solve(graph) << endl;
    }
}
