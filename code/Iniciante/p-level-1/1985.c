/*
Nome:      MacPRONALTS
ID:        1985
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   289 Bytes
Submissao: 29/10/15 17:51:00
*/
#include <stdio.h>

int main()
{
    int p;
    double total = 0;

    scanf( "%d", &p );

    while( p-- )
    {
        int id, qt;
        scanf( "%d%d", &id, &qt );
        total += ( id % 1000 + 0.50 ) * qt;
    }

    printf( "%.2lf\n", total );

    return 0;
}
