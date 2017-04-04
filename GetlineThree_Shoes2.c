#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    const char *sex = "F";
    char N[3], str[1000000];
    int n_F = 0, n_M = 0, number = 0, caso = 1;
    bool equal = false;

    while( scanf( "%2s ", N ) != EOF){

        if( caso > 1 ){
            puts( "" );
        }

        fgets( str, 1000000, stdin );

        char *tokenPtr;

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

        printf( "Caso %d:\n", caso );
        printf( "Pares Iguais: %d\n", number );
        printf( "F: %d\nM: %d\n", n_F, n_M );

        number = n_F = n_M = 0;
        caso++;

    }

    return 0;
}
