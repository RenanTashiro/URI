#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned i;
    srand( time(NULL) );

    for( i = 0; i < 20; i++ )
        printf( "%d\n", rand() % 100 + 1 );

    return 0;
}
