#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    scanf( "%d%d", &a, &b );

    double q;

    if( a >= 0 )
        q = a / b;
    else{
        q = ( double ) a / b;
        if( b < 0 )
            q = ceil( q );
        else
            q = floor( q );
    }

    printf( "%.0lf %.0lf\n", q, a - b * q );

    return 0;
}
