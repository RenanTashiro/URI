#include <stdio.h>

int main()
{
    int T; /* Numero de testes casos */
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        int N; /* Numero de cores diferentes */

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
