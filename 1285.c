#include <stdio.h>
#include <string.h>

#define INT(x) x - 48

int differentDigit( char *number, const int length )
{
    const int first = INT( number[0] ), second = INT( number[1] ), third = INT( number[2] ), fourth = INT( number[2] );
    int different_digit;

    switch( length ){

    case 1:
         different_digit = ( first == 1 ? 0 : first ); break;
    case 2:
         different_digit = ( ( first - 1 ) * 9 + 10 ) + ( second < first ? second : second - 1 ); break;
    case 3:
         different_digit = ( ( first - 1 ) * 9  * 8 + 90 ) + ( second < first ? second * 9 : ( second - 1 ) * 9 ) + third;
            if( third >= second ) different_digit--; if( third >= first )different_digit--; break;
    case 4:
        different_digit = 738;
        different_digit += ( first - 1 ) * 504;
        if( second > 0 ) different_digit += ( second - 1 ) * 56 ;
        if( third > 0 ) different_digit += ( third - 1 ) * 7 ;


    }

    return different_digit;
}

int isdif( char *number, const int length )
{
    unsigned i, j;

    for( i = 0; i < length; i++ ){
        for( j = i + 1; j < length; j++ ){
            if( number[i] == number[j] ){
                return -1;
            }
        }
    }

    return 1;
}

int main()
{
    char N[5], M[5];

    while( scanf( "%4s%4s", N, M ) != EOF ){

        if( strcmp( N, M ) == 0 ){
            printf( "%d\n", 1 ); continue;
        }

        int length_N = strlen( N ), length_M = strlen( M );
        int different_digit_N = 0,different_digit_M = 0;

        different_digit_N = differentDigit( N, length_N );
        different_digit_M = differentDigit( M, length_M );

        printf( "%d\n", isdif( N, length_N ) ? different_digit_M - different_digit_N + 1 : different_digit_M - different_digit_N );
    }

    return 0;
}
