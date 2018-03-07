/*
Nome:      Transfira Para o Professor
ID:        2563
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.056s
Tamanho:   902 Bytes
Submissao: 16/05/17 17:16:19
*/
#include <bits/stdc++.h>
using namespace std;

int solve(int D[], int P[], int K, int N)
{
    int sol[N+1][K+1];

    for(int i = 0; i <= N; i++)
    {
        for(int j = 0; j <= K; j++)
        {
            if(i == 0 || j == 0)
            {
                sol[i][j] = 0;
            }
            else if(P[i-1] <= j)
            {
                sol[i][j] = max(sol[i-1][j], sol[i-1][j-P[i-1]] + D[i-1]);
            }
            else
            {
                sol[i][j] = sol[i-1][j];
            }
        }
    }

    return sol[N][K];
}

int main()
{
    int N, K;

    while(cin >> N >> K)
    {
        int D[N], P[N];

        for(int i = 0; i < N; i++)
        {
            cin >> D[i];
        }

        for(int i = 0; i < N; i++)
        {
            cin >> P[i];
        }

        cout << solve(D, P, K, N) << endl;
    }
}
