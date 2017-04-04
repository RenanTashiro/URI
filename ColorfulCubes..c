#include <stdio.h>
#define FACES 6

int sameColor( const int X[], const int Y[] );

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 ){

        int cube[ FACES ];

        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d", &cube[i] );
            scanf( "%d%d%d%d", &cube[i], &cube[i], &cube[i], &cube[i] );
            scanf( "%d", &cube[i] );
        }
        if( sameColor == 6){

        }

    }
    return 0;
}

int sameColor( const int cubeFacesOne[], const int cubeFaceTwo[] )
{
    int condition = 0;
    unsigned i, j;

    for( i = 0; i < FACES; i++ ){

        for( j = 0; j < FACES; j++){

            if( cubeFacesOne[i] == cubeFaceTwo[j] ){
                condition++;
                break;
            }
        }
    }
    return condition;
}
