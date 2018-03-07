/*
Nome:      Robô Aspirador
ID:        2558
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.824s
Tamanho:   3,27 KB
Submissao: 14/05/17 20:41:55
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int best_sol = -1;

void _solve(int u, vector<int> visited, vector<vector<ii>> graph, int M, int n_visited)
{
    if(n_visited == (int)graph.size() - 1)
    {
        return;
    }

    visited[u] = 1;

    if(M < 0)
    {
        return;
    }

    if(u == (int)graph.size() - 1)
    {
        best_sol = max(best_sol, n_visited);
        return;
    }

    for(int i = 1; i < (int)graph[u].size(); i++)
    {
        if(!visited[graph[u][i].first])
        {
            _solve(i, visited, graph, M - graph[u][i].second, n_visited + 1);
        }
    }
}

void solve(vector<vector<ii>> graph, int M)
{
    best_sol = -1;

    for(int i = 1; i < (int)graph[0].size(); i++)
    {
        if(graph[0][i].second <= M)
        {
            _solve(graph[0][i].first, vector<int>(graph.size(), 0), graph, M - graph[0][i].second, 0);
        }
    }
}


int bfs(ii src, ii dest, vector<string> world)
{
    queue<pair<int,ii>> Q; // step, i, j
    vector<vector<int>> visited(world.size(), vector<int>(world[0].size(), 0));

    Q.push(pair<int,ii>(0, src));
    visited[src.first][src.second] = 1;

    while(!Q.empty())
    {
        pair<int,ii> cu = Q.front(); Q.pop();

        int c = cu.first;
        ii u = cu.second;

        if(u == dest)
        {
            return c;
        }

        int x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0, -1};

        for(int i = 0; i < 4; i++)
        {
            ii v(u);

            v.first += x[i];
            v.second += y[i];

            if(v.first >= 0 && v.first < (int)world.size() && v.second >= 0 && v.second < (int)world[0].size())
            {
                if(!visited[v.first][v.second] && world[v.first][v.second] != '#')
                {
                    Q.push(pair<int,ii>(c + 1, v));
                    visited[v.first][v.second] = 1;
                }
            }
        }
    }

    return INT_MAX;
}

vector<vector<ii>> init_graph(vector<ii> vertex, vector<string> world)
{
    vector<vector<ii>> graph(vertex.size());

    for(int i = 0; i < (int)vertex.size(); i++)
    {
        for(int j = 0; j < (int)vertex.size(); j++)
        {
            graph[i].push_back(ii(j, bfs(vertex[i], vertex[j], world))); // index, cost
        }
    }

    return graph;
}

int main()
{
    int N, M, H, W;

    while(cin >> N >> M)
    {
        cin >> W >> H;

        ii src, dest;
        vector<ii> vertex;
        vector<string> world(H);

        for(int i = 0; i < H; i++)
        {
            cin >> world[i];

            for(int j = 0; j < W; j++)
            {
                if(world[i][j] == '*')
                {
                    vertex.push_back(ii(i, j));
                }
                else if(world[i][j] == 'S')
                {
                    dest = ii(i, j);
                }
                else if(world[i][j] == 'R')
                {
                    src = ii(i, j);
                }
            }
        }

        vertex.insert(vertex.begin(), src);
        vertex.push_back(dest);

        vector<vector<ii>> graph = init_graph(vertex, world);

        solve(graph, M);

        cout << best_sol << endl;
    }
}

