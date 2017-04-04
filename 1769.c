#include <stdio.h>

int main()
{
    char cpf[15];

    while( scanf( "%14s", cpf ) != EOF ){

        int a[9], b[2];
        int bt[2] = {0};
        unsigned i;

        a[0] = cpf[0] - 48;
        a[1] = cpf[1] - 48;
        a[2] = cpf[2] - 48;
        a[3] = cpf[4] - 48;
        a[4] = cpf[5] - 48;
        a[5] = cpf[6] - 48;
        a[6] = cpf[8] - 48;
        a[7] = cpf[9] - 48;
        a[8] = cpf[10] - 48;

        b[0] = cpf[12] -48;
        b[1] = cpf[13] - 48;

        for( i = 0; i < 9; i++ ){
            bt[0] += a[i] * ( i  + 1 );
        }
        for( i = 0; i < 9; i++ ){
            bt[1] += a[i] * ( 9 - i);
        }

        bt[0] %=  11; if( bt[0] == 10 ) bt[0] = 0;
        bt[1] %=  11; if( bt[1] == 10 ) bt[1] = 0;

        if( bt[0] == b[0] && bt[1] == b[1] ){
            puts( "CPF valido" );
        }
        else{
            puts( "CPF invalido" );
        }
    }

    return 0;
}
