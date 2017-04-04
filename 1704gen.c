#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *pFile;
    pFile = fopen( "1704.txt", "w" );

    srand( time( NULL ) );

    int T; /// numero de casos testes
    unsigned i;

    puts( "Entre com o Numero de Entradas: " );
    scanf( "%d", &T );

    int N, H;

    for( i = 0; i < T; i++ ){

        N = rand() % 50 + 1;
        H = rand() % 1000 + 1;

        fprintf( pFile, "%d %d\n", N, H );
        unsigned j;

        for( j = 0; j < N; j++ ){
            fprintf( pFile, "%d %d\n", rand() % 1000 + 1, rand() % H + 1 );
        }
    }


    fclose( pFile );
    puts( "Arquivo gerado. Cheque o seu diretorio." );

    return 0;
}
