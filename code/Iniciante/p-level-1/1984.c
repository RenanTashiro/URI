/*
Nome:      O Enigma do Pronalândia
ID:        1984
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   258 Bytes
Submissao: 29/10/15 17:46:51
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char number[20];
    int i;

    scanf( "%s", number );

    for( i = strlen( number ) - 1; i >= 0; i-- ) {
        printf( "%c", number[i] );
    }

    puts( "" );

    return 0;
}
