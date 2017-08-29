/*
Nome:      Lobo Mau
ID:        2317
Resposta:  Accepted
Linguagem: C++
Tempo:     0.012s
Tamanho:   2,19 KB
Submissao: 21/04/17 22:00:47
*/
#include <bits/stdc++.h>
using namespace std;

int visited[251][251] = {{0}};
int x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0, -1};

int bfs(int row, int col, int R, int C, vector<string> farm)
{
    int n_sheeps = 0, n_wolves = 0;

    if(farm[row][col] == 'k')
    {
        n_sheeps++;
    }
    else if(farm[row][col] == 'v')
    {
        n_wolves++;
    }

    queue<pair<int,int>> Q;

    Q.push(pair<int,int>(row, col));
    visited[row][col] = 1;

    while(!Q.empty())
    {
        pair<int,int> u = Q.front();  Q.pop();

        for(int i = 0; i < 4; i ++)
        {
            pair<int,int> v(u.first + x[i], u.second + y[i]);

            if(!visited[v.first][v.second] && v.first < R && v.second < C && v.first >= 0 && v.second >= 0)
            {
                if(farm[v.first][v.second] == '.')
                {
                    visited[v.first][v.second] = 1;
                    Q.push(v);
                }
                else if(farm[v.first][v.second] == 'k')
                {
                    n_sheeps++;
                    visited[v.first][v.second] = 1;
                    Q.push(v);
                }
                else if(farm[v.first][v.second] == 'v')
                {
                    n_wolves++;
                    visited[v.first][v.second] = 1;
                    Q.push(v);
                }
            }
        }
    }

    if(n_sheeps > n_wolves)
    {
        return n_sheeps;
    }

    return -n_wolves;
}

int main()
{
    int R, C;

    cin >> R >> C;

    vector<string> farm(R);

    for(int i = 0; i < R; i++)
    {
        cin >> farm[i];
    }

    int n_sheeps = 0, n_wolves = 0;

    for(int i =- 0; i < R; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(!visited[i][j] && farm[i][j] != '#')
            {
                int survivors = bfs(i, j, R, C, farm);

                if(survivors > 0)
                {
                    n_sheeps += survivors;
                }
                else
                {
                    n_wolves += -survivors;
                }
            }
        }
    }

    cout << n_sheeps << ' ' << n_wolves << endl;
}
