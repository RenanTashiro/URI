#include <stdio.h>
#include <math.h>

int main()
{
    int L, C, R1, R2;

    while( scanf( "%d%d%d%d", &L, &C, &R1, &R2 ) && L != 0 ){

        double hip = hypot( ( double ) R1 - ( L - R2 ), ( double ) R1 - ( C - R2 ) );

        if( ( double ) hip >= R1 + R2 && R1 * 2 <= L && R1 * 2 <= C && R2 * 2 <= L && R2 * 2 <= C )
            puts( "S" );
        else
            puts( "N" );
    }

    return 0;
}
