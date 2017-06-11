#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct tree{
    char species[31];
    long counter;
};

typedef struct tree Tree;

int compare( const void *a, const void *b )
{
    Tree *A = ( Tree* )a;
    Tree *B = ( Tree* )b;
    return strcmp( A->species, B->species );
}

int main()
{
    int N;
    char tmp[31];
    unsigned i, j;

    scanf( "%d ", &N );

    for( i = 0; i < N; i++ ){

        if( i > 0 ) puts( "" );

        Tree *statistic = NULL;
        int index = 0, counter = 0;
        bool flag = false;

        while( fgets( tmp, 30, stdin ) && tmp[0] != '\n' ){
            tmp[ strlen( tmp ) - 1 ] = '\0';

            for( j = 0; j < index; j++ ){
                if( strcmp( statistic[j].species, tmp ) == 0 ){
                    statistic[j].counter++;
                    flag = true;
                    break;
                }
            }

            if( !flag ){
                statistic = ( Tree* ) realloc( statistic, ( index + 1 ) * sizeof( Tree ) );
                strcpy( statistic[index].species, tmp );
                statistic[index].counter = 1;
                index++;
            }

            flag = false;
            counter++;
        }

        qsort( statistic, index, sizeof( Tree ), compare );

        for( j = 0; j < index; j++ ){
            printf( "%s %.4f\n", statistic[j].species, ( statistic[j].counter * 100.00 ) / counter  );
        }

        free( statistic );
    }

    return 0;
}
