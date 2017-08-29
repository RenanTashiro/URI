/*
Nome:      Banco Imobiliário
ID:        2304
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   986 Bytes
Submissao: 27/10/16 10:44:00
*/
#include <bits/stdc++.h>
using namespace std;

int D, E ,F;

inline void decrease(char J, int X)
{
    switch(J)
    {
        case 'D': D -= X; break;
        case 'E': E -= X; break;
        case 'F': F -= X; break;
    }
}

inline void increase(char J, int X)
{
    switch(J)
    {
        case 'D': D += X; break;
        case 'E': E += X; break;
        case 'F': F += X; break;
    }
}

int main()
{
    int I, N;

    scanf("%d%d", &I, &N);

    D = E = F = I;

    for(int i = 0; i < N; i++)
    {
        char op, J, K;
        int X;

        scanf("\n%c", &op);

        if(op == 'A')
        {
            scanf(" %c %c %d", &J, &K, &X);
            increase(J, X);
            decrease(K, X);
        }
        else {
            scanf(" %c %d", &J, &X);
            if(op == 'C')
                decrease(J, X);
            else
                increase(J, X);
        }
    }

    printf("%d %d %d\n", D, E, F);
}
