/*
Nome:      Bicho da Goiaba
ID:        2485
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   1,52 KB
Submissao: 27/05/17 15:10:50
*/
#include <bits/stdc++.h>
using namespace std;

struct Solve
{
    int x, y, step;

    Solve(int _x, int _y, int _step)
    {
        x = _x;
        y = _y;
        step = _step;
    }
};

const int pX[] = {-1, -1, 0, 1, 1, 1, 0, -1}, pY[] = {0, 1, 1, 1, 0, -1 ,-1, -1};

int solve(int guava[100][100], int n_infected, int X, int Y, int A, int B)
{
    queue<Solve> next;
    int visited[100][100] = {{}};

    next.push(Solve(X, Y, 0));
    visited[X][Y] = 1;

    while(!next.empty())
    {
        Solve u = next.front();
        next.pop();

        if(guava[X][Y]) n_infected--;
        if(n_infected == 0) return u.step;

        for(int i = 0; i < 8; i++)
        {
            Solve v(u.x + pX[i], u.y + pY[i], u.step + 1);

            if(v.x >= 0 && v.x < A && v.y >= 0 && v.y < B && !visited[v.x][v.y] && guava[v.x][v.y])
            {
                next.push(v);
                visited[v.x][v.y] = 1;
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
        int A, B, n_infected = 0;

        scanf("%d%d", &A, &B);

        int guava[100][100];

        for(int i = 0; i < A; i++)
        {
            for(int j = 0; j < B; j++)
            {
                scanf("%d", &guava[i][j]);

                if(guava[i][j]) n_infected++;
            }
        }

        int X, Y;

        scanf("%d%d", &X, &Y);

        printf("%d\n", solve(guava, n_infected, X - 1, Y - 1, A, B));
    }
}
