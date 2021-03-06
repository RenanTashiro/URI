/*
Nome:      Mergulho
ID:        1471
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   625 Bytes
Submissao: 24/07/15 12:31:30
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int N, R;

    while( scanf( "%d%d", &N, &R ) != EOF ){

        int placas[N+1], id;
        unsigned i, counter = 0;
        memset( placas, 0, sizeof( placas ) );

        for( i = 0; i < R; i++ ){
            scanf( "%d", &id );
            placas[id] = 1;
        }

        for( i = 1; i <= N; i++ ){
            if( placas[i] == 0 )
                printf( "%d ", i );
            else
                counter++;
        }

        if( counter == N )
            printf( "%c", '*' );

        puts( "" );
    }

    return 0;
}
