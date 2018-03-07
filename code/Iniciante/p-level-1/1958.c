/*
Nome:      Notação Científica
ID:        1958
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   126 Bytes
Submissao: 08/11/15 10:39:11
*/
#include <stdio.h>

int main()
{
    double n;

    scanf( "%lE", &n );
	printf( "%+.4lE\n", n );

    return 0;
}
