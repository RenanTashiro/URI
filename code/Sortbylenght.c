#include <stdio.h>
#include <string.h>
#define MAX 50

typedef struct
{
    char *element;
    int len;
}elementsLen;

int main()
{
    int N, counter = 0;
    char str[2600];
    unsigned i;

    scanf( "%d ", &N );
    elementsLen el[50];

    for( i = 0; i < N; i++ ){

        fgets( str, 2560, stdin );
        puts( str );

        char *tokenPtr;

        tokenPtr = strtok( str, " " );
        el[counter].element = tokenPtr;
        el[counter].len = strlen( el[counter].element );

        while( tokenPtr != NULL ){
            counter++;
            tokenPtr = strtok( NULL, " " );
            el[counter].element = tokenPtr;
            el[counter].len = strlen( el[counter].element );
        }

        int j, k, temp;

        for( j = 1; j <= counter; j++ ){

            k = j;
            temp = el[k].len;

            while( el[k-1].len < temp && j > 0 ){
                el[k].len = el[k-1].len;
            }
            el[k].len = temp;
        }

        for( j = 0; j <= counter; j++ ){
            printf( "%s ", el[j].element );
        }

        puts( "" );
    }

    return 0;
}
