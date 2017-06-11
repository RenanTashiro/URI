#include <stdio.h>

int main()
{
    int C, Va, Vb, T, D;

    scanf( "%d%d%d%d%d", &C, &Va, &Vb, &T, &D );

    C *= 100;
    D *= 100;

    int Ta = Va * T + D;
    int Tb = Vb * T + D;

    printf( "%d %d\n", Ta, Tb );
    printf( "%d %d\n", C - Ta % C, C - Tb % C );

    if( ( double ) ( C - ( Ta % C ) ) / Va <= ( double ) ( C - ( Tb % C ) ) / Vb ) {
        puts( "Ana" );
    }
    else {
        puts( "Bia" );
    }

    return 0;
}
