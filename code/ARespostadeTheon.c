#include <stdio.h>

int main()
{
    int N;
    unsigned i;

    scanf( "%d", &N );

    int idx, min = 25, Ti;

    for( i = 0; i < N; i++ ){
        scanf( "%d", &Ti );
        if( Ti < min ){
            min = Ti;
            idx = i + 1;
        }
    }

    printf( "%d\n", idx );

    return 0;
}
