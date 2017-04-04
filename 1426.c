#include <stdio.h>

int who_is_this_number( int, int, int );

int main()
{
    int N;
    unsigned i, j, k;

    scanf( "%d", &N );

    for( i = 0; i < N; i++ ){

        int triangle[9][9];
        int aux = 1;

        for( j = 0; j < 9; j += 2 ){
            for( k = 0; k < aux; k += 2 ){
                scanf( "%d", &triangle[j][k] );
            }
        aux += 2;
        }

        for( j = 1; j < 9; j += 2 ){
            triangle[8][j] = who_is_this_number( triangle[8][j-1], triangle[8][j+1], triangle[6][j-1] );
        }

        aux = 8;

        for( j = 7; j > 0; j-- ){
            if( ( ( j + 1 ) & 1 ) == 0 ){
                for( k = 0; k < aux; k++ ){
                    triangle[j][k] = triangle[j+1][k] + triangle[j+1][k+1];
                }
            }
            else{
                for( k = 1; k < aux; k += 2 ){
                    triangle[j][k] = triangle[j+1][k] + triangle[j+1][k+1];
                }
            }
            aux--;
        }

        aux = 1;

        for( j = 0; j < 9; j++ ){
            printf( "%d", triangle[j][0] );
            for( k = 1; k < aux; k++ ){
                printf( " %d", triangle[j][k] );
            }
        aux++;
        puts( "" );
        }

    }

    return 0;
}

int who_is_this_number( int a, int b, int c )
{
    return( c - ( a + b ) ) / 2;
}
