/*
Nome:      Imagem
ID:        1516
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   795 Bytes
Submissao: 10/05/15 11:06:21
*/
#include <stdio.h>

int main()
{
    int height, width;

    while( scanf( "%d%d", &height, &width ) && height != 0 ){

        char image[height][width];
        unsigned i;

        for( i = 0; i < height; i++ ){
            scanf( "%s", image[i] );
        }

        int r_height, r_width;
        unsigned j, k, l;

        scanf( "%d%d", &r_height, &r_width );

        for( i = 0; i < height; i++ ){
            for( k = 0; k < ( r_height / height ); k++ ){
                for( j = 0; j < width; j++ ){
                    for( l = 0; l < ( r_width /  width ); l++ ){
                        printf( "%c", image[i][j] );
                    }
                }
            puts( "" );
            }
        }
        puts( "" );
    }

    return 0;
}
