/*
Nome:      Poker do Rei
ID:        1337
Resposta:  Accepted
Linguagem: C (gcc 4.8.5, -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   2,59 KB
Submissao: 09/06/15 10:12:11
*/
#include <stdio.h>

int type_of_hand( const int *cards );
void sort_three( int *cards );
void print_hand_plus( const int index, int *cards );

int main()
{
    int cards[3], type;

    while( scanf( "%d%d%d", &cards[0] ,&cards[1] ,&cards[2] ) && cards[0] != 0 ){
        sort_three( cards );
        type = type_of_hand( cards );
        print_hand_plus( type, cards );
    }

    return 0;
}

int type_of_hand( const int *cards ){

    if( cards[0] == cards[1] && cards[1] == cards[2] ){
        return 3;
    }
    else if( cards[0] == cards[1] || cards[1] == cards[2] ){
        return 2;
    }
    else{
        return 1;
    }

    return 0;
}

void sort_three( int *cards )
{
    int tmp;

    if( cards[0] > cards[1] ){
        tmp = cards[0];
        cards[0] = cards[1];
        cards[1] = tmp;
    }
    if( cards[1] > cards[2] ){
        tmp = cards[1];
        cards[1] = cards[2];
        cards[2] = tmp;
        if( cards[0] > cards[1] ){
            tmp = cards[0];
            cards[0] = cards[1];
            cards[1] = tmp;
        }
    }
}

void print_hand_plus( const int index, int *cards )
{
    int Xpp;

    switch( index ){

    case 1: puts( "1 1 2" ); break;

    case 2:
        if( cards[0] == cards[1] ){
            if( cards[2] == 13 ){
                Xpp = cards[0] + 1;
                printf( "%d %d %d\n", 1, Xpp, Xpp );
            }
            else if( cards[2] != 13 ){
                Xpp = cards[2] + 1;
                printf( "%d %d %d\n", cards[0], cards[1], Xpp );
            }

        }
        else{
            if( cards[2] == 13 ){
                if( cards[0] == 12 ){
                    puts( "1 1 1" );
                }
                else{
                    printf( "%d %d %d\n", cards[0] + 1, cards[1], cards[2] );
                }
            }
            else{
                Xpp = cards[0] + 1;
                if( Xpp == cards[1] && Xpp != 13){
                    Xpp++;
                    printf( "%d %d %d\n", cards[1], cards[2], Xpp );
                }
                else if( Xpp == 13 ){
                    Xpp = cards[1] + 1;
                    printf( "%d %d %d\n", 1, Xpp, Xpp );
                }
                else{
                    printf( "%d %d %d\n", Xpp, cards[1], cards[2] );
                }
            }

        } break;

    //....
    case 3:
        if( cards[0] == 13 ){
            puts( "*" );
        }
        else{
             Xpp = cards[0] + 1;
             printf( "%d %d %d\n", Xpp, Xpp, Xpp );
        } break;
    }
}
