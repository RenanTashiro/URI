#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 10000

void decto32( char* buffer, int number )
{
    int rest;
    char tmp;

    buffer[0] = '\0';

    while( number >= 32 )
    {
        rest = number % 32;
        tmp = rest < 10 ? 48 + rest : 55 + rest;
        strcat( buffer, &tmp );
        number /= 32;
    }

    tmp = number < 10 ? 48 + number : 55 + number;
    printf( "%c\n", tmp );
    strcat( buffer, &tmp );
    printf( "%s\n", buffer );
}

int main()
{
    int number;

    while( scanf( "%d", &number ) && number != 0 )
    {
        char b32[MAXN];
        unsigned i;

        decto32( b32, number );

        for( i = 0; b32[i] != '\0'; i++ )
        {
            printf( "%c", b32[i] );
        }

        puts( "" );
    }

    return 0;
}
