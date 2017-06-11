#include <stdio.h>

#define TAM 20


int findValue( int key, int *arr )
{
    int i;

    for( i = 0; i < TAM; i++ )
    {
        if( arr[i] == key )
            return i;
    }

    return -1;
}

int main( void )
{
    int vet[TAM];
    int i;

    for( i = 0; i < TAM; i++ )
        scanf( "%d", &vet[i] );

    int X;

    scanf( "%d", &X );

    printf( "%d\n", findValue( X, vet ) );

    return 0;
}
