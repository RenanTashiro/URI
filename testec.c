#include<stdio.h>

int main ( int argc, char *argv[] )
{

    int i = 5;
    int *end = &i;

    printf( "%d\n", end );
    printf( "%d\n", end + 2 );

    return 0;
}
