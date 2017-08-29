/*
Nome:      Escada Rolante
ID:        1793
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   631 Bytes
Submissao: 04/05/15 15:51:34
*/
#include <stdio.h>

int main( void )
{
    int N;
    int total_time = 0;

    while( scanf( "%d", &N ) && N != 0 ){

        unsigned i;
        int arrived_time[2] = {-10, 0};

        for( i = 0; i < N; i++ ){

            scanf( "%d", &arrived_time[1] );

            if( arrived_time[0] + 10 < arrived_time[1] ){
                total_time += 10;
            }
            else{
                total_time += arrived_time[1] - arrived_time[0];
            }

            arrived_time[0] = arrived_time[1];
        }

    printf( "%d\n", total_time );
    total_time = 0;
    }

    return 0;
}
