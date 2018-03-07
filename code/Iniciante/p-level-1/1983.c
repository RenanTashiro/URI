/*
Nome:      O Escolhido
ID:        1983
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   470 Bytes
Submissao: 29/10/15 17:55:28
*/
#include <stdio.h>

int main()
{
    int N, ID = 0;
    double notaMax = 0;

    scanf( "%d", &N );

    while( N-- )
    {
        int id;
        double nota;

        scanf( "%d%lf", &id, &nota );

        if( nota > notaMax ) {
            notaMax = nota;
            ID = id;
        }
    }

    if( notaMax >= 8.0 ) {
        printf( "%d\n", ID );
    }
    else {
        puts( "Minimum note not reached" );
    }

    return 0;
}
