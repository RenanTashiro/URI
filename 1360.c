#include <stdio.h>
#define SUIT 4

typedef struct{
    int number;
    int suit;
    int index;
}Deck;

void Sort( Deck *arr )
{
    int i, j;
    Deck tmp;

    for( i = 2; i < SUIT; i++ ){
        j = i;
        tmp = arr[j];
        while( tmp.suit > arr[j-1].suit && j > 1 ){
            arr[j] = arr[j-1];
            j--;
        }
        while( tmp.suit == arr[j-1].suit && tmp.number > arr[j-1].number && j > 1 ){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = tmp;
    }
}

int main()
{
    int N;
    unsigned i;

    scanf( "%d", &N );

    for( i = 0; i < N; i++ ){

        Deck card[SUIT];
        char number, suit;
        unsigned j;

        for( j = 0; j < SUIT; j++ ){
            card[j].index = j;
        }

        for( j = 0; j < SUIT; j++ ){

            scanf( " %c%c", &number, &suit );

            switch( number ){
                case 'T': card[j].number = 10; break;
                case 'J': card[j].number = 11; break;
                case 'Q': card[j].number = 12; break;
                case 'K': card[j].number = 13; break;
                default: card[j].number = ( int ) number - 48;
            }

            switch( suit ){
                case 'H': card[j].suit = 0; break;
                case 'C': card[j].suit = 1; break;
                case 'D': card[j].suit = 2; break;
                case 'S': card[j].suit = 3; break;
            }
        }

        Sort( card );

        int leap = 0;
        /// greatest / second greatest / lowest ///
        ///    1    /       2         /   3    ///
        if( card[1].index == 1 ){
            if( card[2].index == 2 ){
                leap = 6;
            }
            else{
                leap = 5;
            }
        }
        else if( card[1].index == 2 ){
            if( card[2].index == 1 ){
                leap = 4;
            }
            else{
                leap = 2;
            }
        }
        else{
            if( card[2].index == 2 ){
                leap = 1;
            }
            else{
                leap = 3;
            }
        }

        switch( leap + card[0].number ){
            case 10: printf( "%c", 'T' ); break;
            case 11: printf( "%c", 'J' ); break;
            case 12: printf( "%c", 'Q' ); break;
            case 13: printf( "%c", 'K' ); break;
            default: printf( "%d", ( card[0].number + leap ) % 13 );
        }

        switch( card[0].suit ){
                case 0: puts( "H" ); break;
                case 1: puts( "C" ); break;
                case 2: puts( "D" ); break;
                case 3: puts( "S" ); break;
        }
    }

    return 0;
}


