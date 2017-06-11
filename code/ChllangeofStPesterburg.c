#include <stdio.h>

int main()
{
    int N;

    while( scanf( "%d", &N ) != EOF ){

        int line[N + 1];
        char column[N + 1];
        char piece[N + 1];

        size_t i;

        for( i = 0; i < N + 1; i++ ){
            scanf( " %c%c%d", &piece[i], &column[i], &line[i] );
        }
        for( i = 0; i < N; i++ ){



        }
    }
    return 0;
}
