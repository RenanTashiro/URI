#include <stdio.h>
#include <string.h>

#define INT(x) x - 48
#define print(x,y) printf( "(%d)%d\n", y, x )

int differentDigit( char *number, const int length )
{
    const int first = INT( number[0] ), second = INT( number[1] ), third = INT( number[2] ), fourth = INT( number[3] );
    int different_digit;

    switch( length ){

    case 1:///ok
         different_digit = first; break;
    case 2:///ok
         different_digit = ( ( first - 1 ) * 9 + 10 ) + ( second < first ? second : second - 1 ); break;
    case 3:///ok
         different_digit = ( ( first - 1 ) * 9  * 8 + 90 );
         different_digit += ( second <= first ? second * 8: ( second - 1 ) * 8 + 1 ); if( first > second && second != 0 ) different_digit++;
         if( second != first ){
             if( third > 0 ){
             different_digit += third;
             if( third >= first ) different_digit--;
             if( third >= second && second != 0 ) different_digit--;;
            }
         }
         break;
    case 4://!ok
        different_digit = ( first - 1 ) * 504 + 738;
        if( second != 0 )different_digit += ( second > first ? ( second - 1 ) * 56 : ( second ) * 56 ) ;
        if( third != 0 ) { different_digit += ( third * 7 ); if( third >= second ) different_digit -= 7; if( third >= first && third > 1 ) different_digit -= 7; }
        if( first != second && first != third  && second != third ){
             if( fourth != 0 ){
             different_digit += fourth;
             if( fourth >= first ) { different_digit--; }
             if( fourth >= second && second != 0 ) { different_digit--; }
             if( fourth >= third && third != 0 ) { different_digit--; }
            }
            if( third > first && third > second && second != 0 && third != 0 ){
                different_digit++;
            }
         }
        break;
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

        printf( "%d\n", isdif( N, length_N ) == 1 ? different_digit_M - different_digit_N + 1 : different_digit_M - different_digit_N );
    }

    return 0;
}
