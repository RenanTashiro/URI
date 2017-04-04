#include <stdio.h>
#include <string.h>

typedef struct{
    int entrada, permanencia;
}Fila;

void sort( int *arr, size_t len )
{
    int i, j, tmp;

    for( i = 1; i < len; i++ ){
        j = i;
        tmp = arr[j];
        while( tmp < arr[j-1] && j > 0 ){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = tmp;
    }
}

int main()
{
    int C, N;
    unsigned i;

    scanf( "%d%d", &C, &N );

    int caixas[C], counter = 0;
    Fila tempo[N];

    for( i = 0; i < N; i++ ){
        scanf( "%d%d", &tempo[i].entrada, &tempo[i].permanencia );
    }

    memset( caixas, 0, sizeof( caixas ) );

    for( i = 0; i < N; i++ ){
        if( tempo[i].entrada > caixas[0] ) caixas[0] = tempo[i].entrada;
        else if( caixas[0] - tempo[i].entrada > 20 ) counter++;
        caixas[0] += tempo[i].permanencia;
        sort( caixas, C );
    }

    printf( "%d\n", counter );

    return 0;
}
