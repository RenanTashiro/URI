/*
Nome:      Efeito Ruído
ID:        1349
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.084s
Tamanho:   1,6 KB
Submissao: 16/09/17 22:49:00
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX 400

void R(int s[MAX][MAX], int N)
{
    for(int x = 0; x < N / 2; x++)
    {
        for(int y = x; y < N-x-1; y++)
        {
            int temp = s[x][y];

            s[x][y] = s[y][N-1-x];
            s[y][N-1-x] = s[N-1-x][N-1-y];
            s[N-1-x][N-1-y] = s[N-1-y][x];
            s[N-1-y][x] = temp;
        }
    }
}

void M(int s[MAX][MAX], int N)
{
    for(int i = 0; i < N; i++)
        for(int j = 0, k = N-1; j < k; j++, k--)
            swap(s[i][j], s[i][k]);
}

void print(int s[MAX][MAX], int N)
{
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cout << s[i][j] << ' ';
        cout << endl;
    }
}

int precision(int b[MAX][MAX], int s[MAX][MAX], int N)
{
    int best = 0;

    for(int k = 0; k < 4; k++)
    {
        int sum = 0;

        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                if(abs(b[i][j] - s[i][j]) <= 100)
                    sum++;

        best = max(best, sum);
        R(s, N);
    }

    return best;
}

int main()
{

    int N, b[MAX][MAX], s[MAX][MAX];

    while(cin >> N && N)
    {
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                cin >> b[i][j];

        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                cin >> s[i][j];

        int best = precision(b, s, N);

        M(s, N);
        best = max(best, precision(b, s, N));

        cout << fixed << setprecision(2) << 100.0*best / (N*N) << endl;
    }
}

