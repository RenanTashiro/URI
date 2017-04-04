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

        if( M > V ){
            teamA += 3;
        }
        else if( M < V ){
            teamB += 3;
        }
        else{
            teamA += 1;
            teamB += 1;
            houseA = V;
        }

        scanf( "%d %c %d", &M, &x, &V );

        totalB += M;
        totalA += V;

        if( M > V ){
            teamB += 3;
        }
        else if( M < V ){
            teamA += 3;
        }
        else{
            teamA += 1;
            teamB += 1;
            houseB = V;
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
