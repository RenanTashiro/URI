#include <stdio.h>

int main()
{
    int N;
    int i;

    scanf( "%d", &N );

    char curso[500];

    for( i = 0; i < N; i++ )
        scanf( "%[^\n]", curso );

    printf( "%s\n", "Ciencia da Computacao" );

    return 0;
}
