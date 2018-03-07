/*
Nome:      Mjölnir
ID:        1865
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   371 Bytes
Submissao: 11/08/15 09:53:01
*/
#include <stdio.h>
#include <string.h>
#define MAXL 1000

int main()
{
    int N;

    scanf( "%d", &N );

    while( N-- )
    {
        char hero[MAXL];
        int newton;

        scanf( " %s%d", hero, &newton );

        if( strcmp( hero, "Thor" ) == 0 )
            puts( "Y" );
        else
            puts( "N" );
    }

    return 0;
}
