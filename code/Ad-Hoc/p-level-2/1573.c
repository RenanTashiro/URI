/*
Nome:      Fábrica de Chocolate
ID:        1573
Resposta:  Accepted
Linguagem: C
Tempo:     0.004s
Tamanho:   213 Bytes
Submissao: 24/07/15 12:35:31
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;

    while( scanf( "%d%d%d", &A, &B, &C ) && A != 0 ){

        printf( "%d\n", ( int ) cbrt( A * B * C) );
    }

    return 0;
}
