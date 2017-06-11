#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int counter = 0;
    char word[81];
    bool space = false;

    while( scanf( "%80s", word ) != EOF ){

        char *tokenPtr;

        tokenPtr = strtok( word, " \t" );

        while( tokenPtr != NULL ){

            counter += strlen( tokenPtr );
            printf( "%d\n", counter );
            if( memcmp( tokenPtr, "<br>", 4 ) == 0 ){
                puts( "" );
                space = false;
                counter = 0;
            }
            else if( memcmp( tokenPtr, "<hr>", 4 ) == 0){

                if( counter > 4 ){
                    puts( "" );
                    space = false;
                }
               puts( "--------------------------------------------------------------------------------" );
               counter = 0;
            }
            else{
                if( space ){
                    printf( "%s", " " );
                }
                printf( "%s", tokenPtr );
                space = true;
            }

            if( counter >= 81 ){
                puts( "" );
                space = false;
                counter = 0;
            }

            tokenPtr = strtok( NULL, " \t" );
        }
    }

    puts( "" );
    return 0;
}
