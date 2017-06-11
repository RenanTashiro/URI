#include <stdio.h>

#define NUMPLAYERS 4

typedef struct{
    char name[15];
    int rounds;
}Dammit;

typedef struct{
    int number;
    char suit;
}Deck;

int main()
{
    char number_ordem[] = { '4', '5', '6', '7', 'Q', 'K', 'A', '2', '3' };
    char suit_ordem[] = { 'D', 'S', 'H', 'C' };

    Dammit players[NUMPLAYERS];
    Deck trump;

    int n;
    unsigned i, j;

    scanf( "%d%d%c", &n, &trump.number, &trump.suit );

    for( i = 0; i < NUMPLAYERS; i++ ){
        printf( "%s%d", players[i].name, players[i].rounds );
    }

    Deck card[NUMPLAYERS];
    int players_pts[NUMPLAYERS] = {0}, greatest_number, greatest_suit = 0, index;

    for( i = 0; i < n; i++ ){
        for( j = 0; j < NUMPLAYERS; j++ ){
            scanf( "%d%c", &card[j].number, &card[j].suit );
        }
        if( card[j].suit >=  greatest )
    }



    return 0;
}
