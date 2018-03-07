/*
Nome:      Feira de Bactérias
ID:        2340
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   417 Bytes
Submissao: 10/06/17 23:24:12
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    scanf("%d", &N);

    double best_value = 0;
    int best_idx = 0;

    for(int i = 0; i < N; i++)
    {
        int D, C;

        scanf("%d%d", &D, &C);

        if(C * log(D) > best_value)
        {
            best_value = C * log(D);
            best_idx = i;
        }
    }

    printf("%d\n", best_idx);
}
