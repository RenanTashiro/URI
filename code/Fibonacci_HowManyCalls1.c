#include <stdio.h>

int fib[39];
int call[39];

void fibGen( void );
void callGen( void );

int main()
{
    fibGen();


    int N, X;

    scanf( "%d", &N );

    int i;

    for( i = 0; i < N; i++ ){

        scanf( "%d", &X );

        printf( "fib(%d) = %d calls = %d\n", X, call[X] - 1, fib[X] );
    }

    return 0;
}

void fibGen( void ){

    fib[0] = 0;
    fib[1] = 1;

    call[0] = 1;
    call[1] = 1;

    int i;

    for( i = 2; i < 40; i++ ){

        fib[i] = fib[i-1] + fib[i-2];
        call[i] = call[i-1] + call[i-2] + 1;
    }
}
