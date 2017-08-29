/*
Nome:      Libertadores
ID:        1536
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   1,4 KB
Submissao: 08/05/15 18:38:38
*/
#include <stdio.h>

int main()
{
    int N, teamA = 0, teamB = 0;
    int M, V, totalA = 0, totalB = 0, houseA, houseB;
    char x;

    scanf( "%d", &N );

    unsigned i;

    for( i = 0; i < N; i++ ){

        scanf( "%d %c %d", &M, &x, &V );

        totalA += M;
        totalB += V;
        houseA = V;

        if( M > V ){
            teamA += 3;
        }
        else if( M < V ){
            teamB += 3;
        }
        else{
            teamA += 1;
            teamB += 1;
        }

        scanf( "%d %c %d", &M, &x, &V );

        totalB += M;
        totalA += V;
        houseB = V;

        if( M > V ){
            teamB += 3;
        }
        else if( M < V ){
            teamA += 3;
        }
        else{
            teamA += 1;
            teamB += 1;
        }

        if( teamA > teamB ){
            puts( "Time 1" );
        }
        else if( teamA < teamB ){
            puts( "Time 2" );
        }
        else if( totalA > totalB){
            puts( "Time 1" );
        }
        else if( totalA < totalB){
            puts( "Time 2" );
        }
        else if( houseA < houseB ){
            puts( "Time 1" );
        }
        else if( houseA > houseB ){
            puts( "Time 2" );
        }
        else{
            puts( "Penaltis" );
        }

        totalA = teamA = totalB = teamB = 0;
    }

    return 0;
}
