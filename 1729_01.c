#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, flag = 1;
    float D;

    scanf( "%d%f", &N, &D );

    int team_number;

    while( scanf( "%d", &team_number ) != EOF ){

        int minute, second, total_time = 0;
        char hour, colon;
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( " %c%c%d%c%d", &hour, &colon, &minute, &colon, &second );
            if( flag && hour != '-' ){
                total_time += ( ( int )atoi( &hour ) * 3600 ) + ( minute * 60 ) + ( second );
            }
            else{
                flag = 0;
            }
        }

        if( flag ){
            total_time /= D;

            printf( "%3d: %d:%d min/km\n", team_number, ( total_time / 60 ), ( total_time % 60 ) );
        }
        else{
            printf( "%3d: -\n", team_number );
        }
        flag = 1;
    }

    return 0;
}
