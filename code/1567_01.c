#include <stdio.h>
#include <math.h>

int nS2( int side );
int nR2( int side );
int nS3( int side );
long long int nR3( int side );
int nS4( int side );
long long int nR4( int side );

int main()
{
    int N;
    int S2, R2, S3, S4;
    long long int R3;
    long long int R4;
    while( scanf( "%d", &N ) != EOF ){

        S2 = nS2( N );
        R2 = nR2( N );
        S3 = nS3( N );
        R3 = nR3( N );
        S4 = nS4( N );
        R4 = pow( S3, 2 ) - S4;

        printf( "%d %d %d %lld %d %llu\n", S2, R2, S3, R3, S4, R4 );
    }

    return 0;
}

int nS2( int side )
{
    int total_squares = 0;
    unsigned i;

    for( i = 0; i < side; i++ ){
        total_squares += pow( side - i, 2 ) ;
    }
    return total_squares;
}

int nR2( int side )
{
    int total_rectangles = 0;
    unsigned i, j;

    for( i = 0; i < side; i++ ){
        for( j = i + 1;  j < side; j++ ){
            total_rectangles += ( ( side - i ) * ( side - j ) ) * 2;
        }
    }
    return total_rectangles;
}

int nS3( int side )
{
    int total_cubes = 0;
    unsigned i;

    for( i = 0; i < side; i++ ){
        total_cubes += pow( side - i, 3 );
    }
    return total_cubes;
}

long long int nR3( int side )
{
    long long int total_boxes = 0;
    unsigned i, j , k;

    for( i = 0; i < side; i++ ){
        for( j = i;  j < side; j++ ){
            for( k = i + 1; k < side; k++ ){
                total_boxes += ( ( side - i ) * ( side - j ) * ( side - k )  ) * 3 ;
            }
        }
    }
    return total_boxes;
}

int nS4( int side )
{

    int total_hyper_cubes = 0;
    unsigned i;

    for( i = 0; i < side; i++ ){
        total_hyper_cubes += pow( side - i, 4 );
    }
    return total_hyper_cubes;
}

long long int nR4( int side )
{
    long long int total_hyper_boxes = 0;
    unsigned i, j , k, l;

    for( i = 0; i < side; i++ ){
        for( j = i; j < side; j++ ){
            for( k = j; k < side; k++ ){
                for( l = i + 1; l < side; l++ ){
                    total_hyper_boxes += ( ( side - i ) * ( side - j ) * ( side - k ) * ( side - l ) ) * 4 ;
                }
            }
        }
    }
    return total_hyper_boxes;
}
