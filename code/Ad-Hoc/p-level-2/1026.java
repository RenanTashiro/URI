/*
Nome:      Carrega ou não Carrega?
ID:        1026
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.044s
Tamanho:   167 Bytes
Submissao: 07/06/16 13:46:51
*/
#include <stdio.h>

int main()
{
    unsigned x, y;
    
    while(scanf("%u%u", &x, &y) != EOF) {
        printf("%u\n", x ^ y);
    }
    
    return 0;
}