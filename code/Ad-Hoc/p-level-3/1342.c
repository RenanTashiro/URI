/*
Nome:      Dado
ID:        1342
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   1,52 KB
Submissao: 24/04/15 09:43:41
*/
#include <stdio.h>
#include <stdbool.h>
#define TRAP_SIZE 3

int main()
{
    int P, S;
    int winnerID;

    while( scanf( "%d%d", &P, &S ) && P != 0 ){

        int position[10] = {0};
        int trap[ TRAP_SIZE ];
        bool notOK[10] = {0}, next, winner = false;
        unsigned i;

        for( i = 0; i < TRAP_SIZE; i++ ){
            scanf( "%d", &trap[i] );
        }

        int rolls;
        int total, D1, D2;
        unsigned j = 0;
        unsigned k;

        scanf( "%d", &rolls );

        for( i = 0; i < rolls; i++ ){

            scanf( "%d%d", &D1, &D2 );

            total = D1 + D2;

            next = false;

            while( !winner && !next ){

                if( j == P){
                    j = 0;
                }
                if( !notOK[j] ){
                    position[j] += total;
                    next = true;

                        for( k = 0; k < TRAP_SIZE; k++ ){
                            if( position[j] == trap[k] ){
                                notOK[j] = true;
                            }
                        }
                }
                else{
                    notOK[j] = false;
                }
                if( !winner && position[j] > S ){
                    winnerID = j + 1;
                    winner = true;
                    break;
                }
            j++;
            }
        }
        printf( "%d", winnerID );
        puts( "" );
        winner = false;
    }
    return 0;
}
