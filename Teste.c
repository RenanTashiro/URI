#include <stdio.h>

int main()
{
    int C, Va, Vb, T, D;

    scanf( "%d%d%d%d%d", &C, &Va, &Vb, &T, &D );

    T *= 60;
    int Ta = ( double ) ( Va / 100 ) * T + D;
    int Tb = ( double ) ( Vb / 100 ) * T + D;

    Ta %= C;
    Tb %= C;

    if( Ta != 0 ) {
        Ta = ( C - Ta ) * 100 / Va;
    }
    if( Tb != 0 ) {
        Tb = ( C - Tb ) * 100 / Vb;
    }

    if( Ta <= Tb ) {
        puts( "Ana" );
    }
    else {
        puts( "Bia" );
    }

    return 0;
}
