/*
Nome:      Polígonos Regulares Simples
ID:        1959
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   176 Bytes
Submissao: 27/10/15 09:23:34
*/
#include <stdio.h>

#define R3 1.73205080757

int main()
{
    long long N, L;

    scanf( "%lld%lld", &N, &L );

    printf( "%lld\n", N * L );

    return 0;
}
