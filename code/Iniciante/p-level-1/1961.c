/*
Nome:      Pula Sapo
ID:        1961
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   393 Bytes
Submissao: 27/10/15 08:56:09
*/
#include <stdio.h>

int main()
{
    int P, N;
    int i;

    scanf( "%d%d", &P, &N );

    int h, ph = 15;

    for( i = 0; i < N; i++ ) {
        scanf( "%d", &h );
        if( ph < 10 && abs( h - ph ) > P ) {
            puts( "GAME OVER" );
            break;
        }
        ph = h;
    }

    if( i == N ) {
        puts( "YOU WIN" );
    }

    return 0;
}
