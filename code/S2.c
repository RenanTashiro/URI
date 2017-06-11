#include <stdio.h>
#include <string.h>

#define MAXL 100

void findSubString( char *str, char *substr )
{
    int i, j, l;

    for( i = 0; i < strlen( str ); i++ ) {
        if( str[i] == substr[0] ) {
            for( j = i, l = 0; j < strlen( str ) && l < strlen( substr ) && str[j] == substr[l]; j++, l++  );
            if( l == strlen( substr ) ) {
                printf( "Sub-string: %d\n", i );
                i += l - 1;
            }
        }
    }
}


int main()
{
    char str[MAXL], substr[MAXL];

    scanf( "%[^\n] %[^\n]", str, substr );

    findSubString( str, substr );

    return 0;
}
