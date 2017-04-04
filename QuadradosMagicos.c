#include <stdio.h>
#define SIZE 3

int main()
{
    int quadrado_magico[SIZE][SIZE];
    unsigned i, j;

    for( i = 0; i < SIZE; i++ )
        for( j = 0; j < SIZE; j++ )
            scanf( "%d", &quadrado_magico[i][j] );

    int zero_linha = 0, zero_coluna = 0, soma_linha = 0, soma_coluna = 0;

    for( i = 0; i < SIZE; i++ ){
        for( j = 0; j < SIZE; j++ ){
            soma_linha += quadrado_magico[i][j];
            soma_coluna += quadrado_magico[j][i];
            if( quadrado_magico[i][j] == 0 )
                zero_linha++;
            if( quadrado_magico[j][i] == 0 )
                zero_coluna++;
        }
        if( !zero_linha ){
            soma_coluna = 0;
            break;
        }
        else if( !zero_coluna ){
            soma_linha = 0;
            break;
        }
        else
            soma_linha = soma_coluna = zero_linha = zero_coluna = 0;
    }

    int soma = soma_linha + soma_coluna;
    printf( "%d\n", soma );

    for( i = 0; i < SIZE; i++ ){
        for( j = 0; j < SIZE; j++ ){
            if( quadrado_magico[i][j] == 0 ){
                printf( "%d\n", j );
                if( j == 0 )
                    quadrado_magico[i][j] = soma - quadrado_magico[i][j+1] - quadrado_magico[i][j+2];
                else if( j == 1 )
                    quadrado_magico[i][j] = soma - quadrado_magico[i][j-1] - quadrado_magico[i][j+1];
                else if( j == 2 )
                    quadrado_magico[i][j] = soma - quadrado_magico[i][j-2] - quadrado_magico[i][j-1];
            }
        }
    }

    for( i = 0; i < SIZE; i++ ){
        for( j = 0; j < SIZE; j++ )
            printf( "%d ", quadrado_magico[i][j] );
        puts( "" );
    }

    return 0;
}
