#include <stdio.h>
#define SIZE 5

int main()
{
    int number;
    int bingo[SIZE][SIZE];

    while( scanf( "%d", &number ) != EOF ){

        bingo[0][0] = number;

        unsigned i, j;

        for( i = 1; i < SIZE; i++ ){
            for( j = 0; j < SIZE; j++ ){

                if( i == 2 && j == 2 )
                    j++;
                scanf( "%d", &bingo[i][j] );
            }
        }

        for( i = 0; i < SIZE; i++ ){
            for( j = 0; j < SIZE; j++ ){
                if( i == 2 && j == 2 )
                    j++;
                printf( "%-4d", bingo[i][j] );
            }
            puts( "" );
        }
    }

    return 0;
}
