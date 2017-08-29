/*
Nome:      A Corrida de Lesmas
ID:        1789
Resposta:  Accepted
Linguagem: C++
Tempo:     0.028s
Tamanho:   531 Bytes
Submissao: 15/04/15 12:23:40
*/
#include <stdio.h>

int main()
{
    int L;
    int speed, faster;
    unsigned int i;
    while( scanf( "%d", &L ) != EOF ){

        faster = 0;

        for( i = 0; i < L; i++ ){

            scanf( "%d", &speed );

            if( speed > faster )
                faster = speed;
        }
        if( faster < 10 )
            printf( "%d", 1 );
        else if( faster < 20 )
            printf( "%d", 2 );
        else
            printf( "%d", 3 );

        puts( "" );
    }
    return 0;
}

