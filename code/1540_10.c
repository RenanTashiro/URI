#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main( void ) {

    int N;

    setlocale( LC_ALL, "portuguese_brazil" );

    scanf( "%d", &N );

    while( N-- ){

        int year1, cons1, year2, cons2;
        double ans;

        scanf( "%d%d%d%d", &year1, &cons1, &year2, &cons2 );

        ans = ( double ) ( ( cons2 - cons1 ) ) / ( ( year2 - year1 ) );
        ans = trunc( ans * 100 ) / 100;

        printf( "%.2lf", ans );
    }

    return 0;

}
