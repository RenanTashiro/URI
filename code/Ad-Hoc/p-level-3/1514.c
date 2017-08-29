/*
Nome:      Competição
ID:        1514
Resposta:  Accepted
Linguagem: C
Tempo:     0.012s
Tamanho:   1,34 KB
Submissao: 26/05/15 08:18:02
*/
#include <stdio.h>
#include <stdlib.h>

int One( int *ID, size_t number, size_t problem );
int Two( int *ID, size_t numberProblem );

int main()
{
    int contestants, problem;

    while( scanf( "%d%d", &contestants, &problem ) && contestants != 0 ){

        unsigned i, j;
        int answer;
        int contestantIND[ 100 ] = {0};
        int caracteristic[ 100 ] = {0};

        for( i = 0; i < contestants; i++ ){

            contestantIND[ i ] = 0;

            for( j = 0; j < problem; j++ ){

                scanf( "%d", &answer );

                contestantIND[ i ] += answer;
                caracteristic[ j ] += answer;
            }
        }

        int OK = 0;

        OK += One( contestantIND, contestants, problem );
        OK += Two( caracteristic, problem );
        OK += One( caracteristic, problem, contestants );
        OK += Two( contestantIND, contestants );

        printf( "%d\n", OK );

    }
    return 0;
}

int One( int *ID, size_t number, size_t problem ){

    unsigned i;

    for( i = 0; i < number; i++ ){
        if( ID[i] == problem ){
            return 0;
        }
    }
    return 1;
}

int Two( int *ID, size_t problem ){

    unsigned i;

    for( i = 0; i < problem; i++ ){
        if( ID[i] == 0 ){
            return 0;
        }
    }

    return 1;
}
