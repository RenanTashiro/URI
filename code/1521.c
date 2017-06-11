#include <stdio.h>

int main()
{
    int N;

    while( scanf( "%d", &N ) && N != 0 ){

        int Ni[N], K;
        unsigned i;

        for( i = 0; i < N; i++ ){
            scanf( "%d", &Ni[i] );
        }

        scanf( "%d", &K );

        while( K !=  Ni[K-1] ){
            K = Ni[K-1];
        }

        printf( "%d\n", K );
    }

    return 0;
}
