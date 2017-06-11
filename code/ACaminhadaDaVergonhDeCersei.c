#include <stdio.h>
#include <math.h>

typedef struct{
    int x, y;
}Coordenadas;

int bsearch( int* arr, size_t len, const int key )
{
    int min = 0, max = len - 1;
    int mid = ( max - min ) / 2;

    while( min <= max ){
        if( key < arr[mid] )
            max = mid - 1;
        else if( key > arr[mid] )
            min = mid + 1;
        else
            return mid;

        mid = ( max - min ) / 2;
    }

    return -1;
}

int main()
{
    int N, X;
    unsigned i;

    while( scanf( "%d%d", &N, &X ) ){

    Coordenadas pontos[N];

    for( i = 0; i < N; i++ )
        scanf( "%d%d", &pontos[i].x, &pontos[i].y );


    }

    return 0;
}
