#include <stdio.h>

int main()
{
    int rank[] = { 1, 3, 5, 10, 25, 50, 100 };
    int K, i;

    scanf( "%d", &K );

    for( i = 0; i < sizeof( rank ) / sizeof( int ); i++ ) {
        if( K <= rank[i] ) {
            printf( "Top %d\n", rank[i] );
            break;
        }
    }

    return 0;
}
