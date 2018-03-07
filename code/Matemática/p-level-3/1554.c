/*
Nome:      Bilhar N+1
ID:        1554
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   875 Bytes
Submissao: 23/06/15 08:12:49
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int distanceBetween2points( int X, int Y, int x, int y )
{
    return( sqrt( pow( abs( X - x ), 2 ) + pow( abs( Y - y ), 2 )  ) );
}

int main()
{
    int C;
    unsigned i;

    scanf( "%d", &C );

    for( i = 0; i < C; i++ ){

        int N, X, Y, x, y, position = 350000, distance, index;
        unsigned j;

        scanf( "%d", &N );
        scanf( "%d%d", &X, &Y );

        X *= 100;
        Y *= 100;

        for( j = 0; j < N; j++ ){
            scanf( "%d%d", &x, &y );
            x *= 100;
            y *= 100;
            distance = distanceBetween2points( X, Y, x, y );
            if( distance < position ){
                position = distance;
                index = j + 1;
            }
        }

        printf( "%d\n", index );
    }

    return 0;
}