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
