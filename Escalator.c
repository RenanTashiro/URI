#include <stdio.h>

int main( void )
{
    int N;
    int total_time = 0;

    while( scanf( "%d", &N ) && N != 0 ){

        unsigned i;
        int arrived_time[2] = {-10, 0};

        for( i = 0; i < N; i++ ){

            scanf( "%d", &arrived_time[1] );

            if( arrived_time[0] + 10 < arrived_time[1] ){
                total_time += 10;
            }
            else{
                total_time += arrived_time[1] - arrived_time[0];
            }

            arrived_time[0] = arrived_time[1];
        }

    total_time = 0;
    }

    return 0;
}
