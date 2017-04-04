#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char tag[11];
    int replace;

    while( scanf( "%10s", tag ) != EOF ){


        scanf( "%d ", &replace );

        char text[51];
        scanf( "%[^\n]", text );

        strtok( text, tag );
    }

    return 0;
}
