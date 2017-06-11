#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;

    while( scanf( "%d%d%d", &A, &B, &C ) && A != 0 ){

        printf( "%d\n", ( int ) cbrt( A * B * C) );
    }

    return 0;
}
