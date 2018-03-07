/*
Nome:      Maior Número de Um Algarismo
ID:        1867
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   768 Bytes
Submissao: 17/08/15 12:28:01
*/
#include <stdio.h>
#include <string.h>
#define MAXL 150

int unodigit( char* strn )
{
    int number;
    unsigned i, len;

    do{
        number = 0;

        for( i = 0; i < strlen( strn ); i++ )
            number += strn[i] - 48;

        sprintf( strn, "%d", number );
    }while( ( len = strlen( strn ) ) != 1 );

    return number;
}

int main()
{
    char N[MAXL], M[MAXL];

    while( scanf( "%105s%105s", N, M ) && ( strcmp( N, "0" ) != 0 || strcmp( M, "0" ) != 0 ) )
    {
        int N_int = unodigit( N );
        int M_int = unodigit( M );

        if( N_int > M_int )
            puts( "1" );
        else if( N_int < M_int )
            puts( "2" );
        else
            puts( "0" );
    }

    return 0;
}
