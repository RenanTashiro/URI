/*
Nome:      Bolos da Maria
ID:        1608
Resposta:  Accepted
Linguagem: C
Tempo:     0.028s
Tamanho:   881 Bytes
Submissao: 26/05/15 08:35:41
*/
#include <stdio.h>

int main()
{
    int T;
    int D, I, B;

    scanf( "%d", &T );

    unsigned int i;

    for( i = 0; i < T; i++){

        scanf( "%d%d%d", &D, &I, &B );

        int price[I];
        unsigned j;

        for( j = 0; j < I; j++ ){
            scanf( "%d", &price[j] );
        }

        int Qi, index, amount;
        int total_price = 0;
        int lower = 10e7;
        unsigned int k;

        for( j = 0; j < B; j++ ){
            scanf( "%d", &Qi );

            for( k = 0; k < Qi; k++ ){
                scanf( "%d%d", &index, &amount );

                total_price += ( price[index] * amount );
            }

            if( total_price < lower ){
                lower = total_price;
            }
            total_price = 0;
        }

        printf( "%d\n", D / lower );
    }

    return 0;
}
