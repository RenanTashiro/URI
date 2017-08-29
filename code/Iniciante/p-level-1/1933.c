/*
Nome:      Tri-du
ID:        1933
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   206 Bytes
Submissao: 19/09/15 08:47:25
*/
#include <stdio.h>

int main()
{
    int A, B;

    scanf( "%d%d", &A, &B );

    if( A == B )
        printf( "%d\n", A );
    else
        printf( "%d\n", A > B ? A : B );

    return 0;
}
