#include <stdio.h>
#include <stdlib.h>

struct task{
    int profit;
    int cost;
};

typedef struct task Task;

int compare( const void *a, const void *b )
{
    Task compA = *( Task* )a;
    Task compB = *( Task* )b;
    return( compA.profit < compB.profit );
}

int main()
{
    int N, H, p_profit = 0, bigger = 0;

    while( scanf( "%d%d", &N, &H ) != EOF ){

        Task company[N];
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d%d", &company[i].profit, &company[i].cost );
            p_profit += company[i].profit;
            if( company[i].cost > bigger ) bigger = company[i].cost;
        }

        qsort( company, N, sizeof( Task ), compare );

        int total_profit = 0;

        while( bigger > 0 ){
            for( i = 0; i < N; i++ ){
                if( company[i].cost >= bigger && company[i].profit != 0 ){
                    total_profit += company[i].profit;
                    company[i].profit = 0;
                    break;
                }
            }
            bigger--;
        }

        printf( "%d\n", p_profit - total_profit );

        p_profit = bigger = 0;
    }

    return 0;
}
