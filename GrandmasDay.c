#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    int row, column;

    scanf( "%d", &T );

    unsigned i;

    for( i = 0; i < T; i++ ){

        scanf( "%d%d", &row, &column );

        char table[row][column];

        unsigned j, k;

        for( j = 0; j < row; j++ ){

            scanf( "%s", table[j] );
        }

        char column_line[column][row];

        for( j = 0; j < column; j++ ){
            memset( column_line[j], '\0', 1 );
        }

        for( j = 0; j < column; j++ ){

            for( k = 0; k < row; k++ ){
                strcat( column_line[j], &table[row][column] );
            }
        }

        for( j = 0; j < column; j++ ){
            puts( column_line[j] );
        }


    }

    return 0;
}
