#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    int row, column;
    char c;

    scanf( "%d", &T );

    unsigned i;

    for( i = 0; i < T; i++ ){

        scanf( "%d%d", &row, &column );

        char table[row][column] = "";
        char column_line[column][row];

        unsigned j, k;

        for( j = 0; j < row; j++ ){

            for( k = 0; k < column; k++ ){
                scanf( "%c", &c );
                strcat( table[j], &c );
                //strcat( column_line[k], &c );
            }

            puts( table[j] );
        }

        /*for( j = 0; j < row; j++ ){
            printf( "%s \n", table[j] );
        }*/

    }

    return 0;
}
