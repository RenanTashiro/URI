#include <stdio.h>

int cOneorThree( int *ID, size_t number );
int cTwoorFour( int *ID, size_t numberProblem );

int main()
{
    int contestants, problem;
    int answer;

    while( scanf( "%d%d", &contestants, &problem ) && contestants != 0 ){

        int contestantIND[ 100 ] = {0};
        int problemIND[ 100 ] = {0};

        unsigned i, j;

        for( i = 0; i < contestants; i++ ){

            for( j = 0; j < problem; j++ ){

                scanf( "%d", &answer );

                contestantIND[ i ] += answer;
                problemIND[ j ] += answer;
            }
        }

        for( i = 0; i < contestants; i++ ){
            printf( "(%d)%d  ", i, contestantIND[i] );
        }

        puts( "" );

        for( i = 0; i < problem; i++ ){
            printf( "(%d)%d  ", i, problemIND[i] );
        }
        puts( "" );


        int OK = 0;

        OK += cOneorThree( contestantIND, problem );
        OK += cTwoorFour( problemIND, problem );
        OK += cOneorThree( problemIND, contestants );
        OK += cTwoorFour( contestantIND, contestants );

        printf( "%d\n", OK );

    }
    return 0;
}

int cOneorThree( int *ID, size_t number ){

    unsigned i;

    for( i = 0; i < number; i++ ){

        if( ID[i] == number ){
            return 0;
        }
    }
    return 1;
}

int cTwoorFour( int *ID, size_t problem ){

    unsigned i;

    for( i = 0; i < problem; i++ ){

        if( ID[i] == 0 ){
            return 0;
        }
    }
    return 1;
}
