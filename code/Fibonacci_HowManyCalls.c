#include <stdio.h>

int calls = 0;

int fibGen( int n ){

    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    int i;

    for( i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    return *fib;
}

int main()
{
    int N, X;

    scanf( "%d", &N );

    int i;

    for( i = 0; i < N; i++ ){

        scanf( "%d", &X );



        //printf( "fib(%d) = %d calls = %d", X, )
    }

    return 0;
}
