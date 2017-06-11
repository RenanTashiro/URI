#include <stdio.h>

int main()
{
    int T;
    int i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        int D, N;

        scanf( "%d%d", &D, &N );

        float prices;
        int value = 0;
        int j;

        for( j = 0; j < N; j++ ){

            scanf( "%f", &prices );
            prices *= 100.0;
            int prices_i = ( int ) prices;

            int D100 = D * 100;

            if( prices_i < D100 ){

                while( D100 > 0 ){
                    D100 -= prices_i;
                }
                if( D100 < 0 ){
                    D100 += prices_i;
                }
                if( value < D100 ){
                    value = D100;
                }
            }
        }
        prices = ( float ) value / 100 ;
        printf( "%.2f\n", prices );
    }

    return 0;
}
