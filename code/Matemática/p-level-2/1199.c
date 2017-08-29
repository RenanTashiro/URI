/*
Nome:      Conversão Simples de Base
ID:        1199
Resposta:  Accepted
Linguagem: C
Tempo:     0.020s
Tamanho:   522 Bytes
Submissao: 08/05/15 08:56:42
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char string_number[13];
    unsigned int number;

    while( scanf( "%12s", string_number) &&  strcmp( string_number, "-1" ) != 0 ){

        if( string_number[1] != 'x' ){
            number = strtoll( string_number, NULL, 10 );
            printf( "0x%X\n", number );
        }
        else{
            number = strtoll( string_number , NULL, 0 );
            printf( "%u\n", number );
        }

    }
    return 0;
}
