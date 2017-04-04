#include <stdio.h>

int main()
{
    FILE *pFile;
    unsigned i;

    pFile = fopen( "10000numbers", "w" );

    for( i = 1; i <= 10000; i++ ){
        fprintf( pFile, "%d ", i );
    }

    fclose( pFile );

    return 0;
}
