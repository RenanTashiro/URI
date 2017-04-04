#include <stdio.h>

int main()
{
    int P, N, C;

    while( scanf( "%d%d%d", &P, &N, &C ) && P != 0 ){

        int nodes, counter[1000] = {0};
        unsigned i, j, toothpick = 0;

        for( i = 0; i < N; i++ ){
            for( j = 0; j < P; j++ ){
                scanf( "%d", &nodes );
                if( nodes == 1 ){
                    counter[j]++;
                }
                else{
                    if( counter[j] >= C ){
                        toothpick++;
                    }
                    counter[j] = 0;
                }
            }
        }

        for( i = 0; i < P; i++ ){
            if( counter[i] >= C )
                toothpick++;
        }

        printf( "%d\n", toothpick );
    }

    return 0;
}
