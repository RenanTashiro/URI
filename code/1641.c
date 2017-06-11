#include <stdio.h>
#include <math.h>

int main()
{
    int R, W, L, pizza = 1;

    while( scanf( "%d%d%d", &R, &W, &L ) && R != 0 ){

        double dist = hypot( ( double ) W / 2, ( double ) L / 2 );

        if( dist <= R )
            printf( "Pizza %d fits on the table.\n", pizza++ );
        else
            printf( "Pizza %d does not fit on the table.\n", pizza++ );
    }

    return 0;
}
