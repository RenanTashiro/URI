#include <stdio.h>

int main()
{
    int N, Fi[3];
    unsigned i;

    while( scanf( "%d", &N ) && N != 0 ){

        Fi[0] = 0;
        Fi[1] = 1;

        for( i = 0; i <= N; i++ ){
            Fi[2] = Fi[0] + Fi[1];
            Fi[0] = Fi[1];
            Fi[1] = Fi[2];
        }

        printf( "%d\n", Fi[3] );
    }
    return 0;
}
