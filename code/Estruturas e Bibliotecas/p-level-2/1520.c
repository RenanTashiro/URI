/*
Nome:      Parafusos e Porcas
ID:        1520
Resposta:  Accepted
Linguagem: C
Tempo:     0.100s
Tamanho:   1,21 KB
Submissao: 19/06/15 10:59:31
*/
#include <stdio.h>
#include <string.h>

#define RANGE 100

int main()
{
    int N, X, Y, counter = 0;

    while( scanf( "%d", &N ) != EOF ){

        int rack[10001] = {0};
        unsigned i, j;

        for( i = 0; i < N; i++ ){
            scanf( "%d%d", &X, &Y );
            while( X <= Y ){
                rack[counter++] = X++;
            }
        }

        ///Counting Sort
        int count[RANGE+1], output[counter];
        memset( count, 0, sizeof( count ) );

        for( i = 0; i < counter; i++ ){
            count[ rack[i] ]++;
        }
        for( i = 1; i <= RANGE; i++ ){
            count[i] += count[i-1];
        }
        for( i = 0; i < counter; i++ ){
            output[ count[ rack[i] ] - 1 ] = rack[i];
            count[ rack[i] ]--;
        }
        ///End

        int Num;
        scanf( "%d", &Num );

        for( i = 0; output[i] != Num && i < counter; i++ );
        for( j = i; output[j] == Num && j < counter; j++ );

        if( i < counter ){
            printf( "%d found from %d to %d\n", Num, i, --j );
        }
        else{
            printf( "%d not found\n", Num );
        }

        counter = 0;
    }


    return 0;
}
