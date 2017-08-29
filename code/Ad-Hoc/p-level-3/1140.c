/*
Nome:      Flores Florescem da França
ID:        1140
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   650 Bytes
Submissao: 24/04/15 17:38:11
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool isTautogram( const char str[], char key );

int main()
{
    char str[1100];

    while( fgets( str, 1100, stdin ) && str[0] != '*' ){

        if( isTautogram( str, toupper( str[0] ) ) ){
            puts( "Y" );
        }
        else{
            puts( "N" );
        }
    }

    return 0;
}

bool isTautogram( const char str[], char key )
{
    unsigned i;

    for( i = 1; str[i] != '\0'; i++ ){

        if( isblank( str[i-1] ) && key != toupper( str[i] ) ){
            return false;
        }
    }

    return true;
}
