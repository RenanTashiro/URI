#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, digit = 0;
    int zero = 0, one = 0;
    _Bool one_zero = 0;

    while( scanf( "%d", &N ) && N != 0 ){

        char str[1005];
        unsigned  i;

        for( i = 0; i < N; i++ ){

            scanf( "%1000s", str );

            unsigned j;

            for( j = 0; str[j] != '\0'; j++ ){
                if( !one_zero ){
                    zero += str[j] - '0';
                    one_zero = 1;
                }
                else{
                    one += str[j] - '0';
                    one_zero = 0;
                }
            }
            if( one < 100){
                digit += one / 10 + one % 10;
            }
            else if( one < 1000){
                digit += one / 100 + (one % 100 / 10) + one % 10;
            }
            else{
                digit += one / 1000 + (one % 1000 / 100) + (one % 100 / 10) + one % 10;
            }

            if( zero < 100){
                digit += zero / 10 + zero % 10;
            }
            else if( zero < 1000){
                digit += zero / 100 + (zero % 100 / 10) + zero % 10;
            }
            else{
                digit += zero / 1000 + (zero % 1000 / 100) + (zero % 100 / 10) + zero % 10;
            }
            printf( "%d\n", digit);

            digit = one = zero = one_zero = 0;
        }
    }
    return 0;
}
