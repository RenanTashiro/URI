/*
Nome:      Ferramenta Irritante de Pintura
ID:        1649
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.076s
Tamanho:   977 Bytes
Submissao: 13/08/17 16:09:36
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, R, C;

    while(scanf("%d%d%d%d", &N, &M, &R, &C) && N)
    {
        string square[N];

        for(int i = 0; i < N; i++)
            cin >> square[i];

        int changes = 0;

        for(int i = 0; i < N - R + 1; i++)
            for(int j = 0; j < M - C + 1; j++)
                if(square[i][j] == '1') {
                    for(int k = i; k < i + R; k++)
                        for(int l = j; l < j + C; l++)
                            square[k][l] = square[k][l] == '0' ? '1' : '0';
                    changes++;
                }

        bool possible = true;

        for(int i = 0; i < N && possible; i++)
            for(int j = 0; j < M && possible; j++)
                if(square[i][j] == '1')
                    possible = false;

        if(possible)
            cout << changes << endl;
        else
            cout << -1 << endl;
    }
}
