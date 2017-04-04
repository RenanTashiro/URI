#include <stdio.h>
#include <ctype.h>

int main()
{
    int N, counter = 0;
    char str[1005];

    scanf( "%d ", &N );

    unsigned i;

    for( i = 0; i < N; i++ ){

        fgets( str, 1000, stdin );

        unsigned j;
        _Bool alphaOK[26] = {0};

        for( j = 0; str[j] != '\0'; j++ ){

            if( isalpha(str[j]) && alphaOK[str[j] - 97] == 0 ){
                alphaOK[str[j] - 97] = 1;
                counter++;

                if( counter == 26 ){
                    break;
                }
            }
        }

        if( counter == 26 ){
            printf( "%s\n", "frase completa" );
        }
        else if( counter >= 13 ){
            printf( "%s\n", "frase quase completa" );
        }
        else{
            printf( "%s\n", "frase mal elaborada" );
        }
        counter = 0;
    }
    return 0;
}
