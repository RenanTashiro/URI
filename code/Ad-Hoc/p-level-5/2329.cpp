/*
Nome:      Pão a Metro
ID:        2329
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   956 Bytes
Submissao: 15/06/17 17:05:30
*/
#include <stdio.h>

#define print(X,Y) printf("%d %d\n",X,Y);

int bsearch( const int *arr, size_t len, size_t max, const int n )
{
    int ini = 0, fim = max, mid;
    unsigned i, total = 0, fatia_max = 0;

    while( ini <= fim ){

        mid = ( ini + fim ) / 2;

        for( i = 0; i < len; i++ )
            total += arr[i] / mid;

        if( total >= n ){
            fatia_max = mid;
            ini = mid + 1;
        }
        else if( total < n ){
            fim = mid - 1;
        }

        total = 0;
    }

    return fatia_max;
}

int main()
{
    int N, K;
    unsigned i;

    scanf( "%d%d", &N, &K );

    int sanduiches[K], max = 0;

    for( i = 0; i < K; i++ ){
        scanf( "%d", &sanduiches[i] );
        if( max < sanduiches[i] )
            max = sanduiches[i];
    }

    int fatia_max = bsearch( sanduiches, K, max, N );

    printf( "%d\n", fatia_max );

    return 0;
}  