/*
Nome:      Sudoku
ID:        1383
Resposta:  Accepted
Linguagem: C
Tempo:     0.016s
Tamanho:   1,94 KB
Submissao: 28/09/15 12:48:51
*/
#include <stdio.h>

#define DIM 9

int isSudokuRow( int arr[DIM][DIM] )
{
    int i, j;

    for( i = 0; i < DIM; i++ )
    {
        int set[DIM+1] = {0};

        for( j = 0; j < DIM; j++ )
        {
            if( !set[ arr[i][j] ] )
                set[ arr[i][j] ] = 1;
            else
                return 0;
        }
    }

    return 1;
}

int isSudokuColumn( int arr[DIM][DIM] )
{
    int i, j;

    for( i = 0; i < DIM; i++ )
    {
        int set[DIM+1] = {0};

        for( j = 0; j < DIM; j++ )
        {
            if( !set[ arr[j][i] ] )
                set[ arr[j][i] ] = 1;
            else
                return 0;
        }
    }

    return 1;
}

int isSudokuPlace( int arr[DIM][DIM], int initRow, int initColumn )
{
    int i, j;
    int set[DIM+1] = {0};

    for( i = initRow; i < initRow + 3; i++ )
    {
        for( j = initColumn; j < initColumn + 3; j++ )
        {
            if( !set[ arr[i][j] ] )
                set[ arr[i][j] ] = 1;
            else
                return 0;
        }
    }

    return 1;
}

int main( void )
{
    int matrix[DIM][DIM], instancia = 1;
    int T, k;

    scanf( "%d", &T );

    for( k = 0; k < T; k++ )
    {
        int i, j;

        for( i = 0; i < DIM; i++ )
            for( j = 0; j < DIM; j++ )
                scanf( "%d", &matrix[i][j] );

        int flag = 1;

        flag = isSudokuRow( matrix );

        if( flag )
            flag = isSudokuColumn( matrix );

        for( i = 0; i < DIM; i += 3 )
        {
            for( j = 0; j < DIM; j += 3 )
            {
                if( flag )
                    flag = isSudokuPlace( matrix, i, j );
                else
                    break;
            }
        }

        printf( "Instancia %d\n", instancia++ );

        if( flag == 1 )
            puts( "SIM\n" );
        else
            puts( "NAO\n" );
    }

    return 0;
}
