/*
Nome:      Costa
ID:        2419
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.236s
Tamanho:   1,71 KB
Submissao: 16/07/17 15:51:53
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

const int row[] = {-1, 0, 1, 0}, col[] = {0, 1, 0, -1};
int visited[1005][1005] = {{0}};

bool is_coast(int x, int y, string graph[], int N, int M)
{
    for(int i = 0; i < 4; i++)
    {
        ii v(x + row[i], y + col[i]);

        if(v.first >= 0 && v.first < N && v.second >= 0 && v.second < M)
        {
            if(graph[v.first][v.second] == '.')
                return true;
        }
        else return true;
    }

    return false;
}

int solve(int x, int y, string graph[], int N, int M)
{
    queue<ii> next;
    int ans = is_coast(x, y, graph, N, M);

    next.push({x, y});
    visited[x][y] = 1;

    int c = 0;

    while(!next.empty())
    {
        c++;
        ii u = next.front();
        next.pop();

        for(int i = 0; i < 4; i++)
        {
            ii v(u.first + row[i], u.second + col[i]);

            if(v.first >= 0 && v.first < N && v.second >= 0 && v.second < M)
            {
                if(graph[v.first][v.second] == '#' && !visited[v.first][v.second])
                {
                    next.push(v);
                    visited[v.first][v.second] = 1;

                    if(is_coast(v.first, v.second, graph, N, M)) ans++;
                }
            }
        }
    }

    return ans;
}

int main()
{
    int N, M;

    scanf("%d%d", &N, &M);

    string graph[N];

    for(int i = 0; i < N; i++)
        cin >> graph[i];

    int ans = 0;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            if(graph[i][j] == '#' && !visited[i][j])
                ans += solve(i, j, graph, N, M);

    printf("%d\n", ans);
}
