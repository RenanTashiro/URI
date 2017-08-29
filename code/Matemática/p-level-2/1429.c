/*
Nome:      Fatorial de Novo!
ID:        1429
Resposta:  Accepted
Linguagem: C
Tempo:     0.028s
Tamanho:   512 Bytes
Submissao: 14/05/15 10:39:53
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char number[6];
    int factorial[5] = { 1, 2, 6, 24, 120 };
    int decimal_number = 0, size;
    unsigned i;

    while( scanf( "%5s", number ) && strcmp( number, "0" ) != 0 ){

        size = strlen( number );

        for( i = 0; i < size; i++ ){
            decimal_number += ( number[i] - 48 ) * factorial[ size - 1 - i ];
        }
        printf( "%d\n", decimal_number );
        decimal_number = 0;
    }

    return 0;
}
