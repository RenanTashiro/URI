#include <stdio.h>

int main( void )
{
    long  y = 651;
    int *yPtr = &y;

    printf( "%p %p", y, yPtr);
    puts( "" );
    printf( "%d %p", y, *&yPtr);
}
