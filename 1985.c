#include <stdio.h>

int main()
{
    int p;
    double total = 0;

    scanf( "%d", &p );

    while( p-- )
    {
        int id, qt;
        scanf( "%d%d", &id, &qt );
        total += ( id % 1000 + 0.50 ) * qt;
    }

    printf( "%.2lf\n", total );

    return 0;
}
