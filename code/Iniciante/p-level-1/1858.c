/*
Nome:      A Resposta de Theon
ID:        1858
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   330 Bytes
Submissao: 07/08/15 09:08:53
*/
#include <stdio.h>
 
int main()
{
    int N;
    unsigned i;
 
    scanf( "%d", &N );
 
    int idx, min = 25, Ti;
 
    for( i = 0; i < N; i++ ){
        scanf( "%d", &Ti );
        if( Ti < min ){
            min = Ti;
            idx = i + 1;
        }
    }
 
    printf( "%d\n", idx );
 
    return 0;
}