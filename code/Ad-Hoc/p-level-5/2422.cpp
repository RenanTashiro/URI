/*
Nome:      Soma das Casas
ID:        2422
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   936 Bytes
Submissao: 15/06/17 17:21:18
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Bsearch( const int *arry, const int key, size_t size );

int main( void )
{
    int N, K;

    scanf( "%d", &N );

    int Ni[N];
    unsigned i;

    for( i = 0; i < N; i++ ){
        scanf( "%d", &Ni[i] );
    }

    scanf( "%d", &K );

    for( i = 0; i < N; i++ ){
        if( Bsearch( Ni, K - Ni[i], N ) == 1 ){
            printf( "%d %d\n", Ni[i], K - Ni[i] );
            break;
        }
    }

    return 0;
}

int Bsearch( const int *arry, const int key, size_t size )
{
    int min = 0, max = size - 1;
    int mid = ( max + min ) / 2;

    while( min <= max ){

        if( key == arry[mid] ){
            return 1;
        }
        else if( key < arry[mid] ){
            max = mid - 1;
        }
        else{
            min = mid + 1;
        }

        mid = ( max + min ) / 2;
    }

    return -1;
}