/*
Nome:      Sobe e Desce
ID:        1569
Resposta:  Accepted
Linguagem: C
Tempo:     0.576s
Tamanho:   1,25 KB
Submissao: 24/06/15 15:00:51
*/
#include <stdio.h>

struct updown{
    int p1;
    int p2;
};

typedef struct updown UpDown;

int main()
{
    int T;
    unsigned i;

    scanf( "%d", &T );

    for( i = 0; i < T; i++ ){

        int a, b, c;

        scanf( "%d%d%d", &a, &b, &c );

        int position[a], index = 0, dice, flag = 0;
        UpDown E[b];
        unsigned j, k;

        for( j = 0; j < a; j++ ) position[j] = 1;

        for( j = 0; j < b; j++ ){
            scanf( "%d%d", &E[j].p1, &E[j].p2 );
        }

        for( j = 0; j < c; j++ ){

            scanf( "%d", &dice );

            if( !flag ){

                position[ index % a ] += dice;

                for( k = 0; k < b; k++ ){
                    if( position[ index % a ] == E[k].p1 ){
                        position[ index % a ] = E[k].p2;
                        break;
                    }
                }

                if( position[ index % a ] >= 100 ){
                    position[ index % a ] = 100;
                    flag = 1;
                }

                index++;
            }
        }

        for( j = 0; j < a; j++ ){
            printf( "Position of player %d is %d.\n", j + 1, position[j] );
        }
    }

    return 0;
}
