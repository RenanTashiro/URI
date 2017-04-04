#include <stdio.h>

int main()
{
    int T, N;

    while( scanf( "%d%d", &T, &N ) && T != 0 ){

        char time[20];
        int pts, total = 0;
        unsigned i;

        for( i = 0; i < T; i++ ){
            scanf( "%s%d", time, &pts );
            total += pts;
        }

        printf( "%d\n", 3 * N - total );
    }

    return 0;
}
