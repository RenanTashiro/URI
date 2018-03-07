/*
Nome:      Cartelas de Bingo Aleatórias
ID:        1771
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,96 KB
Submissao: 29/06/15 19:56:42
*/
#include <stdio.h>

#define SIZE 5

int indexX( int number ){

    if( number < 16 ){
        number = 0;
    }
    else if( number < 31 ){
        number = 1;
    }
    else if( number < 46 ){
        number = 2;
    }
    else if( number < 61 ){
        number = 3;
    }
    else{
        number = 4;
    }

    return number;
 }

int main()
{
    int bingo[SIZE][SIZE];
    unsigned i, j;

    bingo[2][2] = -1;

    while( scanf( "%d%d%d%d%d", &bingo[0][0], &bingo[0][1], &bingo[0][2], &bingo[0][3], &bingo[0][4] ) != EOF ){

        scanf( "%d%d%d%d%d", &bingo[1][0], &bingo[1][1], &bingo[1][2], &bingo[1][3], &bingo[1][4] );
        scanf( "%d%d%d%d", &bingo[2][0], &bingo[2][1], &bingo[2][3], &bingo[2][4] );
        scanf( "%d%d%d%d%d", &bingo[3][0], &bingo[3][1], &bingo[3][2], &bingo[3][3], &bingo[3][4] );
        scanf( "%d%d%d%d%d", &bingo[4][0], &bingo[4][1], &bingo[4][2], &bingo[4][3], &bingo[4][4] );

        for( i = 0; i < SIZE; i++ ){
            for( j = 0; j < SIZE; j++ ){
                if( bingo[i][j] != -1 ) bingo[i][j] = indexX( bingo[i][j] );
            }
        }

        int bingo_column[5] = {0};

        /**Verifica se eh possivel**/
        for( i = 0; i < SIZE; i++ ){
            for( j = 0; j < SIZE; j++ ){
                if( bingo[i][j] != -1 ){
                    bingo_column[bingo[i][j]]++;
                }
            }
        }
        for( i = 0; i < SIZE; i++ ){
            if( ( bingo_column[i] != 5 && i != 2 ) || ( i == 2 && bingo_column[i] != 4 ) ){
                puts( "DESCARTAVEL" );
                goto end;
            }
        }
        /**/

        for( i = 0; i < SIZE; i++ ){
            for( j = 0; j < SIZE; j++ ){
                if( bingo[i][j] != j && bingo[i][j] != -1 ){
                    puts( "RECICLAVEL" );
                    goto end;
                }
            }
        }

        puts( "OK" );
        end:;
    }

    return 0;
}

