#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char str[1100];

    while( fgets( str, 1100, stdin )  ){

        if( str[0] == '*' )
            break;

        printf( "%s", str );

    }

    return 0;
}
