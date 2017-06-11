#include <stdio.h>
#define MAX 24

int insercionSort( int *arry, int len );

int main()
{
    int N, index, overtakes;
    int competitors_i[MAX], competitors_f[MAX];

    while( scanf( "%d", &N ) != EOF ){

        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d", &index );
            competitors_i[ index-1] = i;
        }

        for( i = 0; i < N; i++ ){
            scanf( "%d", &index );
            competitors_f[i] = competitors_i[index - 1];
        }

        overtakes = insercionSort( competitors_f, N );

        printf( "%d\n", overtakes );
    }

    return 0;
}

int insercionSort( int *arry, int len )
{
    int i, j, temp, counter = 0;

    for( i = 1; i < len; i++ ){

        j = i;
        temp = arry[j];

        while( arry[j-1] > temp && j > 0 ){
            arry[j] = arry[j-1];
            counter++;
            j--;
        }
        arry[j] = temp;
    }

    return counter;
}
