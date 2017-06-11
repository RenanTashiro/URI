#include <stdio.h>
#include <stdlib.h>

int binarySearch( int *arry, int key, int len );

int main()
{
    int N, B;

    while( scanf( "%d%d", &N, &B ) && N != 0 ){

        int Bi[B];
        unsigned i;

        for( i = 0; i < B; i++ ){
            scanf( "%d", &Bi[i] );
        }

        unsigned k, l, OK = 0;

        for( k = 0; k <= N; k++ ){
            for( l = 0; l < B; l++ ){
                if( binarySearch( Bi, abs(  k - Bi[l] ), B ) ){
                    OK++;
                    break;
                }
            }
        }

        printf( "%d\n", OK );

        if( OK == N + 1 ){
            puts( "Y" );
        }
        else{
            puts( "N" );
        }
    }

    return 0;
}

int binarySearch( int *arry, int key, int len )
{
    int min = 0, mid, max = len - 1;

    mid = ( max + min ) / 2;

    while( min <= max ){

        if( key == arry[mid] ){
            return 1;
        }
        else if( key < arry[mid] ){
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }

    return 0;
}
