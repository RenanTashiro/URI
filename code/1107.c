#include <stdio.h>

int main()
{
    int height, length;

    while( scanf( "%d%d", &height, &length ) && height != 0 ){

        int final_height[length], deep = 10e4;
        int n_times = 0;
        unsigned i, j;

        for( i = 0; i < length; i++ ){
            scanf( "%d", &final_height[i] );
            if( final_height[i] < deep ){
                deep = final_height[i];
            }
        }

        for( i = 0; i < length; i++ ){
            if( final_height[i] < final_height[i+1] ){
                for( j = i+2; j < length; j++ ){
                    if( final_height[j] == final_height[i] ){
                        n_times++;
                    }
                }
            }
        }

        printf( "%d\n",  n_times + height - deep );
    }

    return 0;
}
