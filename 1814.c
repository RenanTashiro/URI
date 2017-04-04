#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct string{
    char length[1005];
};

typedef struct string String;

int compare_str( const void *a, const void *b )
{
    String *compareA = ( String* )a;
    String *compareB = ( String* )b;
    return( strcmp( compareA->length, compareB->length ) );
}

int main()
{
    int n, m;

    while( scanf( "%d%d", &n, &m ) && n != 0 ){

        String chain[n];
        unsigned i;

        for( i = 0; i < n; i++ ){
            scanf( "%1000s", chain[i].length );
        }

        qsort( chain, n, sizeof( String ), compare_str );

        for( i = 0; i < n; i++ ){
            puts( chain[i].length );
        }


    }

    return 0;
}
