#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int times, index;
}Set;

int cmp( const void *a, const void *b )
{
    Set cmpA = *( Set* )a;
    Set cmpB = *( Set* )b;
    return( cmpA.times == cmpB.times ?  cmpA.index - cmpB.index : cmpA.times - cmpB.times );
}

int main()
{
    int N, C, K;

    while( scanf( "%d%d%d", &N, &C, &K ) && N != 0 ){

        Set numbers[K+1];
        int aux;
        unsigned i, j;

        for( i = 0; i <= K; i++ ){
            numbers[i].times = 0;
            numbers[i].index = i;
        }

        for( i = 0; i < N; i++ ){
            for( j = 0; j < C; j++ ){
                scanf( "%d", &aux );
                numbers[aux].times++;
            }
        }

        qsort( numbers, K+1, sizeof( Set ), cmp );

        printf( "%d", numbers[1].index );

        for( i = 2; numbers[i].times == numbers[1].times && i <= K; i++ ){
            printf( " %d", numbers[i].index );
        }

        puts( "" );
    }

    return 0;
}
