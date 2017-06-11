#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    unsigned long number;

    while( scanf( "%li", &number ) &&  number != -1  ){

        printf( "%010lu\n\n", number );
        printf( "0x%lX\n", number );
    }

    return 0;
}
