#include <stdio.h>
#include <stdlib.h>

struct schedule{
    int request;
    int duration;
};

typedef struct schedule Schedule;


int compare( const void *a, const void *b )
{
    Schedule cmpA = *( Schedule* )a;
    Schedule cmpB = *( Schedule* )b;
    return( cmpA.request - cmpB.request );
}

int main()
{
    int N;

    while( scanf( "%d", &N ) != EOF ){

        Schedule task[N];
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d%d", &task[i].request, &task[i].duration );
        }

        qsort( task, N, sizeof( Schedule ), compare );

        for( i = 0; i < N; i++ ){
            printf( "%d %d\n", task[i].request, task[i].duration );
        }

    }

    return 0;
}
