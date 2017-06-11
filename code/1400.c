#include <stdio.h>

int main()
{
    int n, m, k;

    while( scanf( "%d%d%d", &n, &m, &k ) && n != 0 ){

        int sentido = 1, value = 1, counter = 0;
        unsigned i = 0;

        while( counter != k ){
            if( value == m ){
                printf( "%d ", i + 1);
                if( i % 7 == 0 ){
                    counter++;
                }
            }
            if( sentido ){
                if( value == n ){
                    sentido = 0;
                }else
                value++;
            }
            if( !sentido ){
                if( value == 1 ){
                    sentido = 1;
                    value++;
                }else{
                value--;
                }
            }
            i++;
        }

        printf( "%d\n", i );
        puts( "" );
    }
    return 0;
}
