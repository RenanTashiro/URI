#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf( "%d", &N );

    while( N-- )
    {
        int A, B, C, D;

        scanf( "%d%d%d%d", &A, &B, &C, &D );

        double rate = ( double ) ( D - B ) / ( C - A );

        printf( "%lf %d\n",  rate, (int)( rate * 100.00 ) );

        int pos = abs( ( int ) ( rate * 100 ) % 100 );

        printf( "%d,%s%d", ( int ) trunc( rate ), pos < 10 ? "0" : "", pos );
    }

    return 0;
}
