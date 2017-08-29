/*
Nome:      Planejando a Energia
ID:        1540
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   467 Bytes
Submissao: 16/10/15 09:21:52
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf( "%d", &N );

    while( N-- )
    {
        int A, B, C, D;

        scanf( "%d%d%d%d", &A, &B, &C, &D );

        double rate = ( double ) ( D - B ) / ( C - A );
        long long pos = abs( ( long long ) trunc( rate * 100 ) % 100 );

        printf( "%lld,%s%lld\n", ( long long ) trunc( rate ), pos < 10 ? "0" : "", pos );
    }

    return 0;
}
