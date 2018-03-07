/*
Nome:      Tomadas
ID:        1930
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   199 Bytes
Submissao: 20/09/15 08:54:11
*/
#include <cstdio>
using namespace std;

int main()
{
    int T1, T2, T3, T4;

    scanf( "%d%d%d%d", &T1, &T2, &T3, &T4 );

    printf( "%d\n", T1 + T2 + T3 + T4 - 3 );

    return 0;
}
