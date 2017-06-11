#include <stdio.h>
#include <string.h>

int zeroCount( char number[] );

int main()
{
    char  A[10], B[10];
    //int digits_count[10];

    while( scanf( "%s%s", A, B ) && A != 0 ){

        printf( "%s %s", A, B );


    }
    return 0;

int zeroCount( char number[] ){

    int len = strlen( number );
    unsigned i, counter = 0;

    for( i = 0; i < len; i++){

        switch( number[i] ){

            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':

        }
    }
    return counter;
}
