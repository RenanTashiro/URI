/*
Nome:      Formação de Robôs
ID:        1780
Resposta:  Accepted
Linguagem: C
Tempo:     0.008s
Tamanho:   1,08 KB
Submissao: 23/05/15 13:25:34
*/
#include <stdio.h>

int main()
{
    int T; 
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        int N;

        scanf( "%d", &N );

        int color;
        int odd = 0, number_of_robot = 0;
        unsigned j;

        for( j = 0; j < N; j++ ){
            scanf( "%d", &color );
            if( color % 2 != 0 ){
                number_of_robot += color - 1;
                odd++;
            }
            else{
                number_of_robot += color;
            }
        }

        if( odd != 0 ){
            while( odd <= ( number_of_robot / 2 ) ){
                if( ( number_of_robot / 2 ) % odd == 0 ){
                break;
            }
                odd += 2;
                number_of_robot -= 2;
            }
        }

        if( odd == 0 || ( number_of_robot != 0 && ( number_of_robot / 2 ) % odd == 0 ) ){
            printf( "Caso #%d: Challenge Accepted!\n", i + 1 );
        }
        else{
            printf( "Caso #%d: Run for your life!\n", i + 1 );
        }

    }

    return 0;
}
