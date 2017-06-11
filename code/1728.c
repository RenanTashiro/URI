#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 8
#define p(x) puts( x );

int r_strtoi( const char *str )
{
    char aux[MAX] = "\0";
    int i;
    p( str );
    for( i = strlen( str ) - 1; i >= 0; i-- ){
        strcat( aux, &str[i] );
    }
    p( aux );
    return( atoi( aux ) );
}

int main()
{
    char number_one[MAX], number_two[MAX], result[MAX], op;

    while( scanf( "%7[^+]%c%7[^=]%c%7s", number_one, &op, number_two, &op, result ) ){

        if( strcmp( number_one, "0" ) == 0 && strcmp( number_two, "0" ) == 0 && strcmp( result, "0" ) == 0 ){
            puts( "true" );
            break;
        }

        int n1 = r_strtoi( number_one );
        int n2 = r_strtoi( number_two );
        int r = r_strtoi( result );

        if( n1 + n2 == r ){
            puts( "true" );
        }
        else{
            puts( "false" );
        }
    }

    return 0;
}
