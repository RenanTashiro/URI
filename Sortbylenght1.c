#include <stdio.h>
#include <string.h>

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

        char *tokenPtr;

        tokenPtr = strtok( str, " \n" );
        el[counter].element = tokenPtr;
        el[counter].len = strlen( el[counter].element );

        while( tokenPtr != NULL ){
            counter++;
            tokenPtr = strtok( NULL, " \n" );

            if( tokenPtr != NULL ){
                el[counter].element = tokenPtr;
                el[counter].len = strlen( el[counter].element );
            }
        }

        int j, k;
        elementsLen temp;

        for( j = 1; j < counter; j++ ){

            k = j;
            temp.len = el[k].len;
            temp.element = el[k].element;

            while( el[k-1].len < temp.len && j > 0 ){
                el[k] = el[k-1];
                k--;
            }
            el[k] = temp;
        }

        printf( "%s", el[0].element );

        for( j = 1; j < counter; j++ ){
            printf( " %s", el[j].element );
        }

        puts( "" );
        counter = 0;
    }

    return 0;
}
