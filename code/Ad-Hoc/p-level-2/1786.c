/*
Nome:      CPF 2
ID:        1786
Resposta:  Accepted
Linguagem: C
Tempo:     0.016s
Tamanho:   592 Bytes
Submissao: 21/05/15 13:57:10
*/
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

        printf( "%c%c%c%c%c%c%c%c%c%c%c%c%d%d\n", cpf[0], cpf[1], cpf[2],
               '.', cpf[3], cpf[4], cpf[5], '.', cpf[6], cpf[7], cpf[8],
               '-', b1, b2 );
    }

    return 0;
}
