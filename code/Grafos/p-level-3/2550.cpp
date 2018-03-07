/*
Nome:      Novo Campus
ID:        2550
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.528s
Tamanho:   1,51 KB
Submissao: 17/05/17 22:23:27
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;


void _solve(int u, vector<vii> &graph,  priority_queue<ii, vector<ii>, greater<ii>> &next, vi &visited)
{
    for(int i = 0; i < (int)graph[u].size(); i++)
    {
        if(!visited[graph[u][i].first])
        {
            next.push(ii(graph[u][i].second, graph[u][i].first));
        }
    }
}

int solve(vector<vii> graph, int N)
{
    priority_queue<ii, vector<ii>, greater<ii>> next;
    vi visited(N, 0);
    int ans = 0, n_visited = 1;

    _solve(0, graph, next, visited);
    visited[0] = 1;

    while(!next.empty())
    {
        //if(n_visited == N) return ans;

        ii u = next.top(); next.pop();

        if(!visited[u.second])
        {
            visited[u.second] = 1;
            n_visited++;
            ans += u.first;
            _solve(u.second, graph, next, visited);
        }
    }

    return n_visited == N ? ans : -1;
}

int main()
{
    int N, M;

    while(cin >> N >> M)
    {
        vector<vii> graph(N);

        for(int i = 0; i < M; i++)
        {
            int A, B, C;

            scanf("%d%d%d", &A, &B, &C);

            graph[A-1].push_back(ii(B-1, C));
            graph[B-1].push_back(ii(A-1, C));
        }

        int ans = solve(graph, N);

        if(ans != -1)
        {
            printf("%d\n", ans);
        }
        else
        {
            puts("impossivel");
        }
    }
}
