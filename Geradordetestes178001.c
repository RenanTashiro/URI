#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero_de_testes;

    printf( "%s", "Insira o numero de testes: " );
    scanf( "%d",&numero_de_testes );

    FILE *pFile;
    pFile = fopen( "CasosTestes1780.text", "w" );
    fprintf( pFile, "%d\n", numero_de_testes );

    unsigned i;
    srand( time( NULL ) );

    for( i = 0; i < numero_de_testes; i++ ){


        int numero_de_cores = rand() % 100 + 1;
        int cores[numero_de_cores];

        unsigned j;

        for( j = 0; j < numero_de_cores; j++ ){

            cores[j] = rand() % 1000 + 1;
        }

        fprintf( pFile, "%d\n", numero_de_cores );

        for( j = 0; j < numero_de_cores; j++ ){
            fprintf( pFile, "%d ", cores[j] );
        }

        fprintf( pFile, "%s", "\n" );
    }

    fclose( pFile );
    puts( "Arquivo Gerado." );

    return 0;
}
