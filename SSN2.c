#include <stdio.h>

int main()
{
    char cpf[10];

    while( scanf( "%10s", cpf ) != EOF ){

        int b1 = 0, b2 = 0;
        unsigned i;

        for( i = 0; i < 9; i++ ){
            b1 += ( cpf[i] - 48 ) * ( i + 1 );
            b2 += ( cpf[i] - 48 ) * ( 9 - i );
        }

        b1 %= 11; if( b1 == 10 ) b1 = 0;
        b2 %= 11; if( b2 == 10 ) b2 = 0;

        for( i = 0; i < 9; i++ ){
            if( i % 3 == 0 && i != 0 ){
                printf( "%c", '.' );
            }
            printf( "%c", cpf[i] );
        }

        printf( "%c%d%d\n", '-', b1, b2 );
    }

    return 0;
}
