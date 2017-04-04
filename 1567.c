#include <stdio.h>
#include <math.h>

int nS2( int side );
int nR2( int side );
int nS3( int side );
int nS4( int side );
int main()
{
    int N;
    int S2, R2, S3, S4;

    while( scanf( "%d", &N ) != EOF ){

        S2 = nS2( N );
        R2 = nR2( N );
        S3 = nS3( N );

        S4 = nS4( N );

        printf( "%d %d %d    %d\n", S2, R2, S3 , S4 );
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




int nS4( int side )
{
    int total_hyper_cubes = 0;
    unsigned i;

    for( i = 0; i < side; i++ ){
        total_hyper_cubes += pow( side - i, 4 );
    }
    return total_hyper_cubes;
}
