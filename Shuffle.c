#include <stdio.h>
#include <stdbool.h>

int main()
{
    int M, K;
    int time = 0;

    while( scanf( "%d%d", &M, &K ) != EOF ){

        int m[M];
        int k;
        int val = 0;
        bool ind_cond[M];
        bool flag = false;

        unsigned int i;

            for( i = M; i > 0; i--){
                val += i;
            }
            for( i = 0; i < M; i++ ){
                scanf( "%d", &m[i] );
            }
            for( i = 0; i < K; i++ ){
                scanf( "%d", &k );

                if( !flag ){
                    time += m[k-1];
                }
                if( !ind_cond[k-1] ){
                    ind_cond[k-1] = true;
                    val -= k;
                        if( val == 0 )
                            flag = true;
                }
            }
            if( flag ){
                printf( "%d", time );
                puts( "" );
            }
            else{
                printf( "%d", -1 );
                puts( "" );
            }

            time = 0;
    }
    return 0;
}
