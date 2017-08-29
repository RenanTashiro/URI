/*
Nome:      Abelha Maja
ID:        1732
Resposta:  Accepted
Linguagem: C
Tempo:     0.000s
Tamanho:   1,51 KB
Submissao: 06/07/15 19:07:53
*/
#include <stdio.h>

int main()
{
    int N;

    while( scanf( "%d", &N ) != EOF ){

        int start_index = 1, new_circle = 6;
        int x = 0, y = 0, limit, counterX = 0, counterY = 0;

        while( start_index + new_circle <= N ){
            start_index += new_circle;
            new_circle += 6;
            x++;
        }

        limit = x + 1;
        int stage_x = 0, stage_y = 0;
        unsigned i;

        for( i = start_index; i < N; i++ ){

            if( stage_x == 0 ){
                stage_x++;
            }
            else if( stage_x == 1 ){
                x--;
                if( x == -limit ) stage_x++;
            }
            else if( stage_x == 2 ){
                counterX++;
                if( counterX == limit ) stage_x++;
            }
            else if( x < limit ){
                x++;
            }

            if( stage_y == 0 ){
                y++;
                if( y == limit ) stage_y++;
            }
            else if( stage_y == 1 ){
                counterY++;
                if( counterY == limit ) { stage_y++; counterY = 0; }
            }
            else if( stage_y == 2 ){
                y--;
                if( y == -limit ) stage_y++;
            }
            else if( stage_y == 3 ){
                counterY++;
                if( counterY == limit ) stage_y++;
            }
            else{
                y++;
            }
        }

        printf( "%d %d\n", x, y );
    }

    return 0;
}
