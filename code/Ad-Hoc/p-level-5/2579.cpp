/*
Nome:      Nagol
ID:        2579
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   286 Bytes
Submissao: 12/06/17 19:44:53
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L, C, X, Y;

    scanf("%d%d%d%d", &L, &C, &X, &Y);

    if((X * C + Y + 1) % 2 == 0)
    {
        puts("Esquerda");
    }
    else
    {
        puts("Direita");
    }
}

// D = IMPAR
// E = PAR
