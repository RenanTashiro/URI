#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    while( scanf( "%d", &n) && n != 0 ){

        int casas[100005];
        long long unsigned i, unit_work = 0;

        scanf( "%d", &casas[0] );
        unit_work += abs( casas[0] );

        for( i = 1; i < n; i++ ){
            scanf( "%d", &casas[i] );
            casas[i] += casas[i-1];
            unit_work += abs( casas[i] );
        }

        printf( "%lld\n", unit_work );
    }

    return 0;
}
