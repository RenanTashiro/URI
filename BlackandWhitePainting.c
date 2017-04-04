#include <stdio.h>

int main()
{
    int row, column, last_square_color; // 0 mean black and 1 mean white
    int number_of_chess_boards;

    while( scanf( "%d%d%d", &row, &column, &last_square_color ) && row != 0 ){

        if( last_square_color == 1 ){
            number_of_chess_boards = 1;
            number_of_chess_boards += ( ( row - 8 ) / 2 ) * ( ( column - 8 ) / 2  );
            number_of_chess_boards += ( ( row - 7 ) / 2 ) * ( ( column - 7 ) / 2  );

        }
        else{

            number_of_chess_boards += ( ( row - 8 ) / 2 ) * ( ( column - 8 ) / 2  );
            number_of_chess_boards += ( ( row - 7 ) / 2 ) * ( ( column - 7 ) / 2  );
        }

        printf( "%d\n", number_of_chess_boards );
    }

    return 0;
}
