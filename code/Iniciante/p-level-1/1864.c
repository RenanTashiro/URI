/*
Nome:      Nossos Dias Nunca Voltarão
ID:        1864
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   286 Bytes
Submissao: 07/08/15 09:08:13
*/
#include <stdio.h>
 
int main()
{
    char soren_kierkegaard[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
 
    int N;
    unsigned i;
 
    scanf( "%d", &N );
 
    for( i = 0; i < N; i++ )
        printf( "%c", soren_kierkegaard[i] );
 
    puts( "" );
 
    return 0;
}