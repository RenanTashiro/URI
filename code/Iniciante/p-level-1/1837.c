/*
Nome:      Prefácio
ID:        1837
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   369 Bytes
Submissao: 28/07/15 22:18:40
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    scanf( "%d%d", &a, &b );

    double q;

    if( a >= 0 )
        q = a / b;
    else{
        q = ( double ) a / b;
        if( b < 0 )
            q = ceil( q );
        else
            q = floor( q );
    }

    printf( "%.0lf %.0lf\n", q, a - b * q );

    return 0;
}
