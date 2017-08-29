/*
Nome:      Pares e Ímpares
ID:        1259
Resposta:  Accepted
Linguagem: C
Tempo:     0.052s
Tamanho:   907 Bytes
Submissao: 20/05/15 15:48:11
*/
#include <stdio.h>
#include <stdlib.h>

int compareA (const void * a, const void * b)
{
  return ( *(int*)a > *(int*)b );
}

int compareB (const void * a, const void * b)
{
  return ( *(int*)a < *(int*)b );
}

int main()
{
    int N, number;
    unsigned i, j;

    scanf( "%d", &N );

    int even[N], n_even = 0;
    int odd[N], n_odd = 0;

    for( i = 0; i < N; i++ ){

        scanf( "%d", &number );

        if( number % 2 == 0 ){
            even[n_even] = number;
            n_even++;
        }
        else{
            odd[n_odd] = number;
            n_odd++;
        }
    }

    qsort( even, n_even, sizeof( int ), compareA );
    qsort( odd, n_odd, sizeof( int ), compareB );

    for( j = 0; j < n_even; j++){
        printf( "%d\n", even[j] );
    }

    for( j = 0; j < n_odd; j++){
        printf( "%d\n", odd[j] );
    }

    return 0;
}