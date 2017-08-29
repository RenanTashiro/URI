/*
Nome:      Catálogo de Livros
ID:        1802
Resposta:  Accepted
Linguagem: C
Tempo:     0.004s
Tamanho:   1,4 KB
Submissao: 24/06/15 09:53:43
*/
#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a > *(int*)b );
}

int main()
{
    int P, M, F, Q, B;
    unsigned i;

    scanf( "%d", &P );
    int Pi[P];

    for( i = 0; i < P; i++ ){
        scanf( "%d", &Pi[i] );
    }

    scanf( "%d", &M );
    int Mi[M];

    for( i = 0; i < M; i++ ){
        scanf( "%d", &Mi[i] );
    }

    scanf( "%d", &F );
    int Fi[F];

    for( i = 0; i < F; i++ ){
        scanf( "%d", &Fi[i] );
    }

    scanf( "%d", &Q );
    int Qi[Q];

    for( i = 0; i < Q; i++ ){
        scanf( "%d", &Qi[i] );
    }

    scanf( "%d", &B );
    int Bi[B];

    for( i = 0; i < B; i++ ){
        scanf( "%d", &Bi[i] );
    }

    int K[M*P*Q*F*B];
    unsigned j,k,l,m, index = 0, Kn;

    for( i = 0; i < P; i++ ){
        for( j = 0; j < M; j++ ){
            for( k = 0; k < F; k++ ){
                for( l = 0; l < Q; l++ ){
                    for( m = 0; m < B; m++ ){
                        K[index] = Pi[i] + Mi[j] + Fi[k] + Qi[l] + Bi[m];
                        index++;
                    }
                }
            }
        }
    }

    qsort( K, index, sizeof( int ), compare );

    long long int total = 0;
    scanf( "%d", &Kn );

    for( i = index-1; Kn-- > 0; i-- ){
        total += K[i];
    }

    printf( "%lld\n", total );

    return 0;
}
