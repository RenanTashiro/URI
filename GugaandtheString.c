#include <stdio.h>
#include <string.h>

int isVogal( const char c );
void Vogal( int *arry, char *str, int len );

int main()
{
    int T, op, operation, op_aux, len;
    unsigned i, j;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        int index[10005] = {0};
        char c;
        printf( "Caso #%d:\n", i + 1 );

        scanf( "%10000s", str );
        len = strlen( str ) - 1;
        mapVogal( index, str, len + 1 );

        while( ( c = getchar() ) && c != '\n' ){

        }

    }

    return 0;
}

int isVogal( const char c )
{
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        return 1;
    }
    else{
        return 0;
    }
}

