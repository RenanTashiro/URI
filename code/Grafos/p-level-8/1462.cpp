/*
Nome:      Popularidade no Facebook
ID:        1462
Resposta:  Accepted
Linguagem: C++
Tempo:     0.292s
Tamanho:   1,97 KB
Submissao: 08/07/17 14:45:06
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(scanf("%d", &N) != EOF)
    {
        vector<int> qtd(N);
        long long total = 0;
        bool not_possible = false;

        for(int i = 0; i < N; i++)
        {
            scanf("%d", &qtd[i]);

            total += qtd[i];

            if(qtd[i] >= N)
                not_possible = true;
        }

        if(not_possible || total % 2)
        {
            puts("impossivel");
            continue;
        }

        sort(qtd.rbegin(), qtd.rend());

        // solve()
        long long dec_o_dec[100005] = {};
        long long decremento = 0, inner = 0, outer = 0;

        for(int i = 0; i < N; i++)
        {
            decremento -= dec_o_dec[i];

            if(qtd[i] == 0) continue;

            if(decremento == 0 && inner != 0)
            {
                if(inner >= qtd[i])
                    inner -= qtd[i], qtd[i] = 0;
                else
                    qtd[i] -= inner, inner = 0;
            }

            if(decremento != 0 || inner == 0)
            {
                int rest = qtd[i] - decremento;

                if(inner != 0 && rest > 0)
                {
                    if(inner >= rest)
                        inner -= rest, rest = 0;
                    else
                        rest -= inner, inner = 0;
                }

                if(rest > 0)
                {
                    if(i + rest + 1 > N)
                        continue;
                    else if(i + rest + 1 == N)
                        outer++;

                    decremento++;

                    if(i + rest + 1 != N)
                        dec_o_dec[i + rest + 1]++;
                }
                else if(rest < 0)
                    inner -= rest;
            }
        }

        // print solution
        printf("%s\n", decremento - outer == 0 && inner == 0 ? "possivel" : "impossivel");
    }
}
