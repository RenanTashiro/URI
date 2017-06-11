#include <stdio.h>
#define DIV_2(x) x / 2

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 ){

        int size, number;
        int pair_number = 0;
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d%d", &size, &number );
            pair_number += DIV_2( number );
        }

        printf( "%d\n", DIV_2( pair_number ) );

    }

    return 0;
}
