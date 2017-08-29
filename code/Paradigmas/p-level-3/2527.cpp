/*
Nome:      Cheddar
ID:        2527
Resposta:  Accepted
Linguagem: C++
Tempo:     0.120s
Tamanho:   2,14 KB
Submissao: 24/06/17 12:38:29
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N, V;

    while(scanf("%d%d", &N, &V) != EOF)
    {
        double possible[2][6005] = {}; // [ROUND][SUM]
        bool next = true;

        // caso base
        possible[0][1] = 1.0;
        possible[0][2] = 1.0;
        possible[0][3] = 1.0;
        possible[0][4] = 1.0;
        possible[0][5] = 1.0;
        possible[0][6] = 1.0;

        double max_so_far = DBL_MIN;

        for(int i = 2; i <= N; i++)
        {
            for(int j = 1; j < i; j++) possible[next][j] = 0; // limpa a antepenultima solucao
            int max_sum =  6 * i, until = (max_sum + i) / 2;

            // Percorre so a primeira metada
            for(int j = i; j <= until; j++)
            {
                possible[next][j] = 0; // limpa a antepenultima solucao

                for(int k = 1; k <= 6; k++)
                {
                    if(j - k > 0)
                    {
                        possible[next][j] += possible[!next][j - k];
                    }
                }

                if(max_so_far < possible[next][j]) max_so_far = possible[next][j];
            }

            // a outra metada eh a primeira espelhada
            for(int j = until + 1, k = until - (i % 2 ? 0 : 1); j <= max_sum; j++, k--)
            {
                possible[next][j] = possible[next][k];
            }

            // caso o valor for estourar o limite de representacao, compacta ele
            if(max_so_far > 10e18)
            {
                for(int j = i; j <= max_sum; j++) possible[next][j] /= 10e18;
                max_so_far = DBL_MIN;
            }

            next = !next;
        }

        next = !next;

        // a resposta eh numero de casos favoraveis pelo numero total de eventos
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
