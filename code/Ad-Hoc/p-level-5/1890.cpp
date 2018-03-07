/*
Nome:      Emplacando os Tuk-tuks
ID:        1890
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   483 Bytes
Submissao: 05/02/16 08:34:50
*/
#include <bits/stdc++.h>

using namespace std;

int ipow(int base, int exp)
{
    if(exp == 0) return 1;
    int ans = base;
    for(int i = 1; i < exp; i++) {
        ans *= base;
    }
    return ans;
}

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int C, D;

        scanf("%d%d", &C, &D);

        if(C == 0 && D == 0)
            puts("0");
        else
            printf("%d\n", ipow(26, C) * ipow(10, D));
    }
}