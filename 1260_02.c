#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int binarySearch( const char *key, const Tree *arry, size_t len );

int main()
{
    int N;
    char tmp[32];
    unsigned i, j;

    scanf( "%d ", &N );

    for( i = 0; i < N; i++ ){

        Tree statistic[10005];

        if( i > 0 ) puts( "" );

        int counter = 0, index = 0, key;

        while( fgets( tmp, 30, stdin ) && tmp[0] != '\n' ){
            tmp[ strlen( tmp ) - 1 ] = '\0';

            if( ( key = binarySearch( tmp, statistic, index ) ) != -1 ){
                statistic[key].counter++;
            }
            else{
                strcpy( statistic[index].species, tmp );
                statistic[index].counter = 1;
                index++;
                qsort( statistic, index, sizeof( Tree ), compare );

            }

            counter++;
        }

        for( j = 0; j < index; j++ ){
            printf( "%s %.4f\n", statistic[j].species, ( statistic[j].counter * 100.00 ) / counter  );
        }
    }

    return 0;
}

int binarySearch( const char *key, const Tree *arry, size_t len )
{
    int min = 0, max = len - 1, cmp;
    int mid = ( max + min ) / 2;

    while( min <= max ){

        cmp = strcmp( key, arry[mid].species );

        if( cmp == 0 ){
            return mid;
        }
        else if( cmp < 0 ){
            max = mid - 1;
        }
        else{
            min = mid + 1;
        }

        mid = ( max + min ) / 2;
    }

    return -1;
}

