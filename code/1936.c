#include <stdio.h>

int main()
{
    int fat[8];
    int i;

    fat[0] = 1;

    for( i = 2; i <= 8; i++ )
    {
        fat[i-1] = fat[i-2] * i;
    }

    int N;
    int counter = 0, idx = 7;

    scanf( "%d", &N );

    while( N > 0 )
    {
        if( N - fat[idx] >= 0 )
            N -= fat[idx], counter++;
        else
            idx--;
    }

    printf( "%d\n", counter );

    return 0;
}