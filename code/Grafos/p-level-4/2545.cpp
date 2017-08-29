/*
Nome:      Manyfile
ID:        2545
Resposta:  Accepted
Linguagem: C++
Tempo:     0.232s
Tamanho:   1,83 KB
Submissao: 17/05/17 23:37:01
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int solve(vector<vector<int>> graph, vector<int> n_depen)
{
    priority_queue<ii, vector<ii>, greater<ii>> next;
    vector<bool> visited(graph.size(), false);
    int n_visited = 0, step = 0;

    for(int i = 0; i < (int)graph.size(); i++)
    {
        next.push(ii(n_depen[i], i));
    }

    while(!next.empty() && next.top().first == 0)
    {
        vector<int> new_finished;

        while(!next.empty() && next.top().first == 0)
        {
            ii u = next.top();
            next.pop();

            if(!visited[u.second])
            {
                new_finished.push_back(u.second);
                visited[u.second] = true;
                n_visited++;
            }
        }

        for(int i = 0; i < (int)graph.size(); i++)
        {
            if(!visited[i])
            {
                for(int j = 0; j < (int)new_finished.size(); j++)
                {
                    if(graph[i][new_finished[j]]) n_depen[i]--;
                }

                next.push(ii(n_depen[i], i));
            }
        }

        step++;
    }

    return n_visited == (int)graph.size() ? step : -1;
}

int main()
{
    int N;

    while(scanf("%d", &N) != EOF)
    {
        vector<vector<int>> graph(N, vector<int>(N));
        vector<int> n_depen(N, 0);

        for(int i = 0; i < N; i++)
        {
            int M;

            scanf("%d", &M);

            for(int j = 0; j < M; j++)
            {
                int Mi;

                scanf("%d", &Mi);

                graph[i][Mi-1]= 1;
                n_depen[i]++;
            }
        }

        if(N == 1)
        {
            puts("1");
            continue;
        }

        printf("%d\n", solve(graph, n_depen));
    }
}
