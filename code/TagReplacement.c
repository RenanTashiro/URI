#include <stdio.h>
#include <string.h>
#include <ctype.h>

void allToLower( char *str );

int main()
{
    char tag[11];
    int replace_tag;
    char str[51];

    while( scanf( "%10s", tag ) != EOF ){

        scanf( "%d ", &replace_tag );
        fgets( str, 50, stdin );

        allToLower( tag );
        allToLower( str );


    }

    return 0;
}

void allToLower( char *str )
{
    unsigned i;

    for( i = 0; str[i] != '\0'; i++ ){
        str[i] = tolower( str[i] );
    }
}
