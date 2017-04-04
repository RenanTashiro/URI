#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char str[81];

    while( scanf( "%d ", &N ) && N != 0 ){

        char strc[5121];
        unsigned i;

        for( i = 0; i < N; i++ ){

            fgets( str, 80, stdin );
            strcat( strc, str );
        }

        // printf( "%s", strc );
    }

    return 0;
}

