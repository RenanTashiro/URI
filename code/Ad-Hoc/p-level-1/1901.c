/*
Nome:      Borboletas
ID:        1901
Resposta:  Accepted
Linguagem: C
Tempo:     0.004s
Tamanho:   615 Bytes
Submissao: 24/08/15 19:30:30
*/
#include <stdio.h>
#define MAXN 1500

int main()
{
    int different_species[MAXN] = {0};
    int N;

    scanf( "%d", &N );

    int campo[N+1][N+1];
    unsigned i, j;

    for( i = 1; i <= N; i++ )
        for( j = 1; j <= N; j++ )
            scanf( "%d", &campo[i][j] );

    int counter = 0;

    for( i = 0; i < N * 2; i++ )
    {
        int x, y;
        scanf( "%d%d", &x, &y );
        if( !different_species[campo[x][y]] )
        {
            different_species[campo[x][y]] = 1;
            counter++;
        }
    }

    printf( "%d\n", counter );

    return 0;
}
