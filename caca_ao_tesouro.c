#include <stdio.h>
#include <string.h>

int main()
{
    int N, K;
    int X, Y, D;
    unsigned i;

    scanf( "%d%d", &N, &K );

    int mapa[N][N];

    for( i = 0; i < N; i++ ){
        memset( mapa[i], 0, N * sizeof( int ) );
    }

    for( i = 0; i < K; i++ ){
        scanf( "%d%d%d", &X, &Y, &D );
    }


    return 0;
}
