#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double b_raio;

    while( scanf( "%d%d%d", &a, &b, &c ) != EOF ){

        b_raio = ( float ) ( a * b * c ) / sqrt( ( a + b + c ) * ( b + c - a ) * ( a + b - c ) );

        printf( "%lf\b", b_raio );
    }

    return 0;
}
