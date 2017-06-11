#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertString( char str[] );

int main()
{
    char key[] = "0+0=0";
    char str[30];

    while( strcmp( key, str) != 0){

        scanf( "%s", str );

        size_t size = sizeof( str ) / sizeof( str[0] );
        unsigned i;

        printf( "%u %u %d\n", size, sizeof( str ), sizeof( str[1] ) );

        //char c[7];

           /* for( i = size - 1; i >= 0; i-- ){

                if( str[i] != '=' ){
                    strcat( c, &str[i] );
                }
                else{
                    break;
                }
            }*/

        //printf( "%s\n", c );
    }

    return 0;
}
