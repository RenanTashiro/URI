/*
Nome:      Cheddar
ID:        2527
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.204s
Tamanho:   1,62 KB
Submissao: 24/06/17 11:41:25
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N, V;

    while(scanf("%d%d", &N, &V) != EOF)
    {
        double possible[2][6005] = {}; // ROUND, SUM
        bool next = true;

        // base case
        possible[0][1] = 1.0;
        possible[0][2] = 1.0;
        possible[0][3] = 1.0;
        possible[0][4] = 1.0;
        possible[0][5] = 1.0;
        possible[0][6] = 1.0;

        double max_so_far = DBL_MIN;

        for(int i = 2; i <= N; i++)
        {
            for(int j = 1; j < i; j++) possible[next][j] = 0; // clear solution

            for(int j = i; j <= 6 * i; j++)
            {
                possible[next][j] = 0; // clear solution

                for(int k = 1; k <= 6; k++)
                {
                    if(j - k > 0)
                    {
                        possible[next][j] += possible[!next][j - k];
                    }
                }

                if(max_so_far < possible[next][j]) max_so_far = possible[next][j];
            }

            if(max_so_far >= 10e18)
            {
                for(int j = i; j <= 6 * i; j++) possible[next][j] /= 10e17;
                max_so_far = DBL_MIN;
            }

            next = !next;
        }

        next = !next;

        double c = 0, total = 0;

        for(int i = N; i <= 6 * N; i++)
        {
            if(i >= V)
            {
                c += possible[next][i];
            }

            total += possible[next][i];
        }

        cout << fixed << setprecision(4) << (double)c / total << endl;
    }
}


