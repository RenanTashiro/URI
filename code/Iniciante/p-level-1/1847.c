/*
Nome:      Bem-vindos e Bem-vindas ao Inverno!
ID:        1847
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   615 Bytes
Submissao: 07/08/15 09:28:51
*/
#include <stdio.h>

int main()
{
    int A, B, C;

    scanf( "%d%d%d", &A, &B, &C );

    if( A > B && C >= B )
        puts( ":)" );
    else if( B > A && B >= C )
        puts( ":(" );
    else if( A < B && C > B && B - A > C - B )
        puts( ":(" );
    else if( A < B && B < C && B - A <= C - B )
        puts( ":)" );
    else if( A > B && C < B && A - B > B - C )
        puts( ":)" );
    else if( A > B && C < B && A - B <= B - C )
        puts( ":(" );
    else if( A == B && C > B )
        puts( ":)" );
    else if( A == B && C <= B )
        puts( ":(" );

    return 0;
}