/*
Nome:      Guloso
ID:        1594
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.148s
Tamanho:   1,52 KB
Submissao: 06/07/15 12:06:04
*/
#include <stdio.h>
#include <stdlib.h>

struct greatest{
    long first;
    int first_index;
};

int main()
{
    int T;
    unsigned k;

    scanf( "%d", &T );

    for( k = 0; k < T; k++ ){

        int N, K, S;

        scanf( "%d%d%d", &N, &K, &S );

        long *arr = malloc( N * sizeof( long ) );
        unsigned i, j;

        arr[0] = S;

        for ( i  = 1; i < N; ++i ){
            arr[i] = (1LL*arr[i-1]*1103515245 + 12345) % (2147483648LL);
        }

        struct greatest sub_vector;
        long long sum;

        sub_vector.first = arr[0];
        sub_vector.first_index = 0;

        for( i = 1; i < K; i++ ){
            if( arr[i] > sub_vector.first ){
                sub_vector.first = arr[i];
                sub_vector.first_index = i;
            }
        }

        sum = sub_vector.first;

        for( i = K; i < N; i++ ){
            if( arr[i] > sub_vector.first ){
                sub_vector.first = arr[i];
                sub_vector.first_index = i;
            }
            else if( sub_vector.first_index < i - K + 1){
                sub_vector.first = 0;
                for( j = i - K + 1; j <= i; j++ ){
                    if( arr[j] > sub_vector.first ){
                        sub_vector.first = arr[j];
                        sub_vector.first_index = j;
                    }
                }
            }
            sum += sub_vector.first;
        }

        printf( "%lld\n", sum );
        free( arr );
    }

    return 0;
}