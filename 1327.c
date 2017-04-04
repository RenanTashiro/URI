#include <stdio.h>
#include <string.h>

#define ROW 4
#define COLUMN 13

typedef struct{
    char names[17];
    int inGame;

}DropOut;

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 ){

        DropOut players[N];
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%16s", players[i].names );
            players[i].inGame = 1;
        }

        int cards[ROW*COLUMN];

        for( i = 0; i < ROW; i++ ){
            scanf( "%d", &cards[i] );
        }

        int inNumber = N, counter = 0, lowest;

        for( i = 0; i < ROW * COLUMN; i++ ){
            if( players[i].inGame == 1 ){

            }
        }


    }

    return 0;
}
