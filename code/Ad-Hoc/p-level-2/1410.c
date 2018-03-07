/*
Nome:      Ele Está Impedido!
ID:        1410
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   810 Bytes
Submissao: 15/06/15 09:28:58
*/
#include <stdio.h>

int main()
{
    int A, D;

    while( scanf( "%d%d", &A, &D ) && A != 0 ){

        int B, lower_B = 10000, C, lower_C = 10000, last2_lower_C = 10000;
        unsigned i;

        for( i = 0; i < A; i++ ){
            scanf( "%d", &B );
            if( B < lower_B ){
                lower_B = B;
            }
        }

        for( i = 0; i < D; i++ ){
            scanf( "%d", &C );
            if( C < lower_C ){
                last2_lower_C = lower_C;
                lower_C = C;
            }
            else if( C < last2_lower_C ){
                last2_lower_C = C;
            }
        }

        if( lower_B < last2_lower_C ){
            puts( "Y" );
        }
        else{
            puts( "N" );
        }
    }

    return 0;
}
