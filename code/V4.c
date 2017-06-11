#include <stdio.h>

#define TAM 1000

void fillVet( int T, int *arr )
{
    int i;

    for( i = 0; i < TAM; i++ )
        arr[i] = i % T;
}

int main( void )
{
    int T, vet[TAM];
    int i;

    scanf( "%d", &T );

    fillVet( T, vet );

    for( i = 0; i < 8; i++ )
        printf( "N[%d] = %d\n", i, vet[i] );

    return 0;
}
