/*
Nome:      Elias e Golias
ID:        1592
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.780s
Tamanho:   1,43 KB
Submissao: 15/09/17 19:27:48
*/
#include <bits/stdc++.h>
using namespace std;

#define COST first.first
#define LENGTH first.second
#define VERTEX second

typedef pair<int,int> ii;
typedef pair<ii,int> iii;

int solve(vector<ii> graph[], int N, int K)
{
    priority_queue<iii, vector<iii>, greater<iii>> next;
    vector<vector<int>> ncost(N, vector<int>(N+1, INT_MAX));

    next.push({{0,1},0}); // cost, length, vertex
    ncost[0][1] = 0; // vertex length

    while(!next.empty())
    {
        iii u = next.top();
        next.pop();

        if(u.COST > ncost[u.VERTEX][u.LENGTH])
            continue;
        if(u.VERTEX == N-1) {
            return u.COST;
        }

        for(ii v : graph[u.VERTEX])
        {
            if(u.LENGTH + 1 <= K && ncost[u.VERTEX][u.LENGTH] + v.second < ncost[v.first][u.LENGTH+1])
            {
                ncost[v.first][u.LENGTH+1] = ncost[u.VERTEX][u.LENGTH] + v.second;
                next.push({{ncost[v.first][u.LENGTH+1], u.LENGTH + 1}, v.first});
            }
        }
    }

    return -1;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int N, M, K;

        scanf("%d%d%d", &N, &M, &K);

        vector<ii> graph[N];

        for(int i = 0; i < M; i++)
        {
            int u, v, c;

            scanf("%d%d%d", &u, &v, &c);

            graph[u].push_back({v, c});
        }

        cout << solve(graph, N, K) << endl;
    }
}
