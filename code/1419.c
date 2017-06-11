#include <stdio.h>

int main()
{
    int R, flag = 0;

    while( scanf( "%d", &R ) && R != 0 ){

        int Mi[R], Li[R], M_pts = 0, L_pts = 0;
        unsigned i;

        for( i = 0; i < R; i++ ){
            scanf( "%d", &Mi[i] );
        }

        for( i = 0; i < R; i++ ){
            scanf( "%d", &Li[i] );
        }

        for( i = 0; i < R; i++ ){
            M_pts += Mi[i];
            L_pts += Li[i];
            if( !flag && i < R - 2 ){
                if( Mi[i] == Mi[i+1] && Mi[i] == Mi[i+2] && Li[i] == Li[i+1] && Li[i] == Li[i+2] ){
                    flag = 1;
                }
                else if( Mi[i] == Mi[i+1] && Mi[i] == Mi[i+2] ){
                    M_pts += 30;
                    flag = 1;
                }
                else if( Li[i] == Li[i+1] && Li[i] == Li[i+2] ){
                    L_pts += 30;
                    flag = 1;
                }
            }
        }

        if( M_pts > L_pts ){
            puts( "M" );
        }
        else if( M_pts < L_pts ){
            puts( "L" );
        }
        else{
            puts( "T" );
        }

        flag = 0;
    }

    return 0;
}
