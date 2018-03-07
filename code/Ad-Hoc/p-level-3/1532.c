/*
Nome:      Arremesso de Bolas
ID:        1532
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   829 Bytes
Submissao: 18/06/15 18:10:30
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int N, V;
    unsigned i, j;

    while( scanf( "%d%d", &N, &V ) && N != 0 ){

        int actual_position = 0, counter = 0, flag = 0;

        for( i = 1; i <= V; i++ ){
            j = i;
            while( actual_position < N && j > 0 ){
                actual_position += j;
                counter++;
                if( counter == j ){
                    counter = 0;
                    j--;
                }
            }
            if( actual_position == N ){
                flag = 1;
                break;
            }
            actual_position = counter = 0;
        }

        if( flag == 1 ){
            puts( "possivel" );
        }
        else{
            puts( "impossivel" );
        }
    }

    return 0;
}