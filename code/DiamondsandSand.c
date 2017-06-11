#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char str[1001] = "", c[2];
    unsigned i;

    scanf( "%d ", &N );

    for( i = 0; i < N; i++ ){

        scanf( "%c", c );
        strcat( str, c );
        printf( "%s", str );
    }

    return 0;
}
