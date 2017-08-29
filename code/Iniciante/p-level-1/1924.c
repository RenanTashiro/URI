/*
Nome:      Vitória e a Indecisão
ID:        1924
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   248 Bytes
Submissao: 19/09/15 08:56:48
*/
#include <stdio.h>

int main()
{
    int N;
    int i;

    scanf( "%d", &N );

    char curso[500];

    for( i = 0; i < N; i++ )
        scanf( "%[^\n]", curso );

    printf( "%s\n", "Ciencia da Computacao" );

    return 0;
}
