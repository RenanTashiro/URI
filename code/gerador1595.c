#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    FILE* pFile;

    pFile = fopen( "1595g.txt", "w" );

    srand( time( NULL ) );

    int testes = rand() % 100 + 1;
    unsigned i;

    fprintf( pFile, "%d\n", testes );

    for( i = 0; i < testes; i++ ){

        int S, C, R;
        unsigned j;

        S = rand() % 100 + 1;
        C = rand() % S + 1;
        R = rand() % 100 + 1;

        fprintf( pFile, "%d %d %d\n", S, C, R );

        for( j = 0; j < S; j++ ){
            fprintf( pFile, "%d ", rand() % 100 );
        }

        fprintf( pFile, "\n" );
    }

    puts( "Teste Gerado!" );

    return 0;
}

