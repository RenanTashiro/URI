#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20

int main()
{
    int L, N;
    unsigned i;

    scanf( "%d%d", &L, &N );

    char irregular_singular[ L ][ MAX_SIZE ], irregular_plural[L][ MAX_SIZE ];
    char regular_words[ N ][ MAX_SIZE ];

    for( i = 0; i < L; i++ ){
        scanf( "%20s%20s", irregular_singular[i], irregular_plural[i] );
    }

    for( i = 0; i < N; i++ ){
        scanf( "%20s", regular_words[i] );
    }

    return 0;
}
