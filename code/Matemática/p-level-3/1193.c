/*
Nome:      Conversão entre Bases
ID:        1193
Resposta:  Accepted
Linguagem: C
Tempo:     0.040s
Tamanho:   1,43 KB
Submissao: 08/05/15 10:23:23
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dec2bin(int c);

int main()
{
    int N;
    long int converted_value;
    char type[4], value[33];
    unsigned i;

    scanf( "%d", &N );

    for( i = 0; i < N; i++ ){

        scanf( "%32s%3s", value, type );

        if( strcmp( type, "bin" ) == 0 ){
            converted_value = strtol( value, NULL, 2 );
            printf( "Case %d:\n", i + 1 );
            printf( "%ld dec\n", converted_value );
            printf( "%x hex\n\n", converted_value );
        }
        else if( strcmp( type, "dec" ) == 0 ){
            converted_value = strtol( value, NULL, 10 );
            printf( "Case %d:\n", i + 1 );
            printf( "%x hex\n", converted_value );
            dec2bin( converted_value );
            puts( " bin\n" );
        }
        else{
            char  hex_value[15] = "0x";
            strcat( hex_value, value );
            converted_value = strtol( hex_value, NULL, 0 );
            printf( "Case %d:\n", i + 1 );
            printf( "%ld dec\n", converted_value );
            dec2bin( converted_value );
            puts( " bin\n" );
        }
    }

    return 0;
}

void dec2bin(int c)
{
   int i = 0;
   _Bool ok = 0;

   for( i = 31; i >= 0; i-- ){

     if( (c & (1 << i)) != 0 ){
       printf( "%s", "1" );
       ok = 1;
     }

     else if( ok ){
       printf( "%s", "0" );
     }
   }
}
