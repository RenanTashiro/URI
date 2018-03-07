/*
Nome:      Jogo da Estratégia
ID:        1940
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   486 Bytes
Submissao: 19/09/15 08:41:31
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int J, R;

    scanf( "%d%d", &J, &R );

    int pts[J];
    int i;

    memset( pts, 0, sizeof( pts ) );

    for( i = 0; i < R * J; i++ )
    {
        int ponto;
        scanf( "%d", &ponto );
        pts[i%J] += ponto;
    }

    int max = 0, pos = 0;

    for( i = 0; i < J; i++ )
        if( max <= pts[i] )
            max = pts[i], pos = i;

    printf( "%d\n", pos + 1 );

    return 0;
}
