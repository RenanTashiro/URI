/*
Nome:      Ones
ID:        1213
Resposta:  Accepted
Linguagem: C
Tempo:     0.012s
Tamanho:   533 Bytes
Submissao: 11/05/15 14:38:52
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int counter = 2, remain, actual_value, tmp_value;
    unsigned i;

    while( scanf( "%d", &n ) != EOF ){

        remain = 10 % n;
        actual_value = remain + 1;
        tmp_value = remain;

        while( actual_value % n != 0 ){
            tmp_value = ( remain * tmp_value ) % n;
            actual_value += tmp_value;
            counter++;
        }

        printf( "%d\n", counter );
        counter = 2;
    }

    return 0;
}
