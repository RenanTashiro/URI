/*
Nome:      Elevador
ID:        1124
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   429 Bytes
Submissao: 01/08/15 22:58:13
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int L, C, R1, R2;

    while( scanf( "%d%d%d%d", &L, &C, &R1, &R2 ) && L != 0 ){

        double hip = hypot( ( double ) R1 - ( L - R2 ), ( double ) R1 - ( C - R2 ) );

        if( ( double ) hip >= R1 + R2 && R1 * 2 <= L && R1 * 2 <= C && R2 * 2 <= L && R2 * 2 <= C )
            puts( "S" );
        else
            puts( "N" );
    }

    return 0;
}
