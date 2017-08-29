/*
Nome:      A Corrida de Lesmas
ID:        1789
Resposta:  Accepted
Linguagem: C
Tempo:     0.012s
Tamanho:   550 Bytes
Submissao: 20/04/15 18:53:02
*/
#include <stdio.h>

int main()
{
    int L;
    int speed, level;

    unsigned int i;

    while( scanf( "%d", &L ) != EOF ){

        level = 1;

        for( i = 0; i < L; i++ ){

            scanf( "%d", &speed );

            if( speed > 9 )
                level = 2;
            if( speed > 19 ){
                level = 3;
                i++;
                break;
            }
        }
        for( ; i < L; i++ )
            scanf( "%d", &speed );

        printf( "%d\n", level );
    }
    return 0;
}
