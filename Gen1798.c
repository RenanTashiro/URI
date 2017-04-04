#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand( time( NULL ) );
    FILE *pFile;
    pFile = fopen( "CasosTestes1798.text", "w" );

    int N = rand() % 1000 + 1;
    int T = rand() % 2000 + 1;

    fprintf( pFile, "%d %d\n", N, T );

    int C, V;
    unsigned i;

    for( i = 0; i < N; i++ ){
        C = rand() % 5000 + 1;
        V = rand() % 5000 + 1;
        fprintf( pFile, "%d %d\n", C, V );
    }

    fclose( pFile );
    puts( "Arquivo Gerado." );
    return 0;
}
