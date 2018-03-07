/*
Nome:      Lendo Livros
ID:        1542
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   379 Bytes
Submissao: 22/06/15 10:33:43
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int Q, D, P;

    while( scanf( "%d%d%d", &Q, &D, &P ) && Q != 0 ){

        float pag = ( float ) ( P * D ) / ( P - Q ) * Q;

        if( floor( pag ) == 1 ){
            puts( "1 pagina" );
        }
        else{
            printf( "%.0f paginas\n", floor( pag ) );
        }
    }

    return 0;
}
