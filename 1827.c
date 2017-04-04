#include <stdio.h>

int main()
{
    int N;
    unsigned i = 0, j;

    while( scanf( "%d", &N ) != EOF ){

        int ones = N / 3;

        for( i = 1; i <= N; i++ ){
            for( j = 1; j <= N; j++ ){
                if( i == ( N + 1 ) / 2 && j == ( N + 1 ) / 2 ){
                    printf( "%c", '4' );
                }
                else if( i > ones && i <= N - ones && j > ones && j <= N - ones ){
                    printf( "%c", '1' );
                }
                else if( i == j ){
                    printf( "%c", '2' );
                }
                else if( j == N + 1 - i ){
                    printf( "%c", '3' );
                }
                else{
                    printf( "%c", '0' );
                }
            }
            puts( "" );
        }
        puts( "" );
    }

    return 0;
}
