/*
Nome:      Passa Bolinha
ID:        2465
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   807 Bytes
Submissao: 15/06/17 14:33:06
*/
#include <bits/stdc++.h>
using namespace std;

const int next_x[] = {-1, 0, 1, 0}, next_y[] = {0, 1, 0, -1};
int square[105][105], visited[105][105] = {};

int solve(int x, int y, int N)
{
    if(x < 0 || x >= N || y < 0 || y >= N)
        return 0;

    visited[x][y] = 1;

    int ans = 1;

    for(int i = 0; i < 4; i++)
    {
        int nx = x + next_x[i], ny = y + next_y[i];

        if(!visited[nx][ny] && square[x][y] <= square[nx][ny])
        {
            ans += solve(nx, ny, N);
        }
    }

    return ans;
}

int main()
{
    int N, X, Y;

    cin >> N >> X >> Y;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> square[i][j];
        }
    }

    cout << solve(X - 1, Y - 1, N) << endl;
}
