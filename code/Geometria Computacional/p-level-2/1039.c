/*
Nome:      Flores de Fogo
ID:        1039
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   378 Bytes
Submissao: 30/07/15 15:06:02
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double R1, X1, Y1;
    double R2, X2, Y2;

    while( scanf( "%lf%lf%lf%lf%lf%lf", &R1, &X1, &Y1, &R2, &X2, &Y2 ) != EOF ){

        double hip = hypot( ( X1 - X2 ), ( Y1 - Y2 ) );

        if( R1 - hip  >= R2 )
            puts( "RICO" );
        else
            puts( "MORTO" );
    }

    return 0;
}