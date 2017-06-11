#include <stdio.h>

int main()
{
    int A, B, C;
    int X, Y, Z;

    scanf( "%d%d%d", &A, &B, &C );
    scanf( "%d%d%d", &X, &Y, &Z );

    printf( "%d\n", ( X / A ) * ( Y / B ) * ( Z / C ) );

    return 0;
}
