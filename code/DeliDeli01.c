#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_SIZE 20

int main()
{
    int L, N;
    unsigned i, j;
    bool printed = false;

    scanf( "%d%d", &L, &N );

    char irregular_singular[ L ][ MAX_SIZE ], irregular_plural[L][ MAX_SIZE ];
    char words[ N ][ MAX_SIZE ];


    for( i = 0; i < L; i++ ){   //Le L palavras irregulares e seu respectivo plural
        scanf( "%20s%20s", irregular_singular[i], irregular_plural[i] );
    }

    for( i = 0; i < N; i++ ){   //Le N palavras no singular
        scanf( "%20s", words[i] );
    }

    for( i = 0; i < N; i++ ){   //Imprime o respectivo plural das N palavras


        for( j = 0; j < L; j++ ){   //Verifica se uma palavra é irrgular

            if( strcmp( words[i], irregular_singular[j] ) == 0 ){
                printf( "%s", irregular_plural[j] );
                printed = true;

            }
        }

        if( !printed ){

            for( j = 0; words[i][j] != '\0'; j++ ){    //descobre o tamanho da palavra
                ;
            }

            if( words[i][j] == 'y' ){
                words[i][j] = '\0';
                printf( "%sies", words[i] );
            }


        }
    }

    return 0;
}
