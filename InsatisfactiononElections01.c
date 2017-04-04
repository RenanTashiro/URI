#include <stdio.h>
#include <stdbool.h>

int main()
{
    int T;
    int N, M, vote;
    bool winner = false;

    scanf( "%d", &T );

    unsigned int i;

    for( i = 0; i < T; i++ ){

        scanf( "%d%d", &N, &M );

        double couter[N];
        unsigned int j;

        for( j = 0; j < N; j++ ){
            couter[j] = 0;
        }

        for( j = 0; j < M; j++ ){
            scanf( "%d", &vote );
            couter[vote-1]++;
        }

        for( j = 0; j < N; j++ ){
            if( couter[j] > (float) M / 2 ){
                printf( "%d", j + 1 );
                winner = true;
                break;
            }
        }
        if( !winner ){
            printf( "%d", -1);
        }
        winner = false;
        puts( "" );
    }

    return 0;
}
