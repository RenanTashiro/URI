#include <stdio.h>
#include <string.h>

int main()
{
    char number[20];
    int i;

    scanf( "%s", number );

    for( i = strlen( number ) - 1; i >= 0; i-- ) {
        printf( "%c", number[i] );
    }

    puts( "" );

    return 0;
}
