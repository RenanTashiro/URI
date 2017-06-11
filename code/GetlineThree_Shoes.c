#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    const char *sex = "F";
    char N[3], str[10000000];
    int n_F = 0, n_M = 0, number = 0;
    bool equal = false;

    while( scanf( "%c", N ) != EOF){

        fgets( str, 10000000, stdin );

        /*char *tokenPtr;

        tokenPtr = strtok( str, " " );

        while( tokenPtr != NULL ){

            if( memcmp( N, tokenPtr, 2 ) == 0 ){
                number++;
                equal = true;
            }
            else if( equal ){

                if( memcmp( tokenPtr, sex, 1 ) == 0 ){
                    n_F++;
                }
                else{
                    n_M++;
                }
                equal = false;
            }

            tokenPtr = strtok( NULL, " " );
        }

        puts( "OK" );
*/
    }

    return 0;
}
