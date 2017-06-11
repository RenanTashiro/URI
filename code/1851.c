#include <stdio.h>
#define MAXQ 500000

typedef struct
{
    int day, cost;
}Queue;

int main()
{
    int T, F;
    int begin = 0, end = 0;
    Queue dragon[MAXQ];

    while( scanf( "%d%d", &T, &F ) != EOF )
    {
        int max_cost = 0, idx = begin;
        unsigned i;

        dragon[end].day = T;
        dragon[end++].cost = T * F;

        for( i = begin; i < end; i++ )
        {
            if( dragon[i].cost > max_cost )
            {
                max_cost = dragon[i].cost;
                idx = i;
            }
        }
    }

    return 0;
}
