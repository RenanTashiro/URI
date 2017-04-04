#include <stdio.h>
#include <math.h>

int main( void )
{
    int n;
    int iaverage = 0, iequalize_cost = 0, temp;
    double equalize_cost = 0;

    while( scanf( "%d", &n ) && n != 0 ){

        int ini[n];
        double ni[n];
        unsigned i;

        for( i = 0; i < n; i++ ){
            scanf( "%lf", &ni[i] );
            ini[i] = ni[i] * 100;
            printf( "(i) = %d\n", ini[i] );
            iaverage += ini[i];
        }
        printf( "%d\n", iaverage );
        iaverage = ( iaverage % n == 0 ? iaverage / n : iaverage / n + 1 );
        printf( "%d\n", iaverage );

        for( i = 0; i < n; i++ ){
            temp = iaverage - ini[i];
            printf( "TEMP = %d\n", temp );
            if( temp < 0){
                iequalize_cost += temp;
                printf( "equalize_cost = %d\n", iequalize_cost );
            }
        }

		equalize_cost = ( float ) iequalize_cost / 100 * -1;
        printf( "$%.2lf\n", equalize_cost );
        iaverage = iequalize_cost = 0;

    }

    return 0;
}
