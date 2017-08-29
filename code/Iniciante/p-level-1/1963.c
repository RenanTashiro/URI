/*
Nome:      O Filme
ID:        1963
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   217 Bytes
Submissao: 27/10/15 08:49:56
*/
#include <stdio.h>

int main()
{
    double A, B;

    scanf( "%lf%lf", &A, &B );

    if( A == 0.0 )
        puts( "inf%" );
    else
        printf( "%.2lf%%\n", B * 100 / A - 100 );

    return 0;
}
