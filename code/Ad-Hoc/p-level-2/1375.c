/*
Nome:      Painel de Posições
ID:        1375
Resposta:  Accepted
Linguagem: C
Tempo:     0.012s
Tamanho:   782 Bytes
Submissao: 27/05/15 14:49:11
*/
#include <stdio.h>

int main()
{
    int N, ok = 1;

    while( scanf( "%d", &N ) && N != 0 ){

        int index;
        long wl, start_grid[1005] = {0};
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d%ld", &index, &wl );
            if( ok && i + wl >= 0 && i + wl < N && start_grid[i+wl] == 0 ){
                start_grid[i+wl] = index;
            }
            else{
                ok = 0;
            }
        }

        if( ok ){

            printf( "%ld", start_grid[0] );

            for( i = 1; i < N; i++ ){
                printf( " %ld", start_grid[i] );
            }
            puts( "" );
        }
        else{
            puts( "-1" );
        }

        ok = 1;
    }

    return 0;
}
