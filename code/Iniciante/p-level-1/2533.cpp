/*
Nome:      Estágio
ID:        2533
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   385 Bytes
Submissao: 19/04/17 18:27:16
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M;

    while(cin >> M)
    {
        int N, C, dividend = 0, divider = 0;

        for(int i = 0; i < M; i++)
        {
            cin >> N >> C;

            dividend += N * C;
            divider += C;
        }

        printf("%.4f\n", (float) dividend / (float) (divider * 100));
    }
}
