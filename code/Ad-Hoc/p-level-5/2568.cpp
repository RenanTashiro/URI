/*
Nome:      Ações
ID:        2568
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   298 Bytes
Submissao: 12/06/17 19:43:47
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D, I, X, F;

    scanf("%d%d%d%d", &D, &I, &X, &F);

    if(D % 2 != 0)
    {
        I += (D + F) % 2 == 0 ? X : 0;
    }
    else
    {
        I += (D + F) % 2 == 0 ? 0 : -X;
    }

    printf("%d\n", I);
}
