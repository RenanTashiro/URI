/*
Nome:      Bingo!
ID:        1136
Resposta:  Accepted
Linguagem: C
Tempo:     0.060s
Tamanho:   1,51 KB
Submissao: 13/05/15 15:49:44
*/
#include <stdio.h>
#include <stdlib.h>


void insercionSort( int *arry, int size );
int binarySearch( int *arry, int key, int len );

int main()
{
    int N, B;

    while( scanf( "%d%d", &N, &B ) && N != 0 ){

        int Bi[B];
        unsigned i;

        for( i = 0; i < B; i++ ){
            scanf( "%d", &Bi[i] );
        }

        insercionSort( Bi, B );
        unsigned k, l, OK = 0;

        for( k = 1; k <= N; k++ ){
            for( l = 0; l < B; l++ ){
                if( binarySearch( Bi, abs(  k + Bi[l] ), B ) ){
                    OK++;
                    break;
                }
            }
        }

        if( OK == N  ){
            puts( "Y" );
        }
        else{
            puts( "N" );
        }
    }

    return 0;
}

void insercionSort( int *arry, int size )
{
    int i, j, temp;

    for( i = 1; i < size; i++ ){

        j = i;
        temp = arry[j];

        while( arry[j - 1] > temp && j > 0 ){
            arry[j] = arry[j- 1];
            j--;
        }
        arry[j] = temp;
    }
}

int binarySearch( int *arry, int key, int len )
{
    int min = 0, mid, max = len - 1;

    mid = ( max + min ) / 2;

    while( min <= max ){

        if( key == arry[mid] ){
            return 1;
        }
        else if( key < arry[mid] ){
            max = mid - 1;
            mid = ( max + min ) / 2;
        }
        else{
            min = mid + 1;
            mid = ( max + min ) / 2;
        }
    }

    return 0;
}
