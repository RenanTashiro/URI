#include <stdio.h>
#include <string.h>

int main()
{
    int N, miss = 0, min_posts = 0, index;
    char cat[2] = "";

    while( scanf( "%d", &N ) && N != 0 ){

        char fence[5001] = "\0";
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%1s", cat );
            strcat( fence, cat );
        }

        index = 0;

        for( i = 0; i < N; i++ ){
            if( fence[i] == '1' ){
                index = i;
                break;
            }
        }

        for( i = index; i < N; i++ ){

            if( fence[i] == '0' ){
                miss++;
                if( miss == 2 ){
                    min_posts++;
                    miss = 0;
                }
            }
            else{
                miss = 0;
            }
        }

        for( i = 0; i <= index; i++ ){

            if( fence[i] == '0' ){
                miss++;
                if( miss == 2 ){
                    min_posts++;
                    miss = 0;
                }
            }
            else{
                miss = 0;
            }
        }

        printf( "%d\n", min_posts );
        min_posts = miss = 0;
    }

    return 0;
}
