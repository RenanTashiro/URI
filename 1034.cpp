#include <cstdio>
#include <cstdlib>

#define INT_MAX 1000001

int minBlocN( short* arr, int N, int M )
{
    int table[M+1];

    table[0] = 0;

    for( int i = 1; i <= M; i++ )
    {
        table[i] = INT_MAX;
    }

    for( int i = 1; i <= M; i++ )
    {
        for( int j = 0; j < N; j++ )
        {
            if( arr[j] <= i )
            {
                int sub_res = table[ i-arr[j] ];
                if( sub_res != INT_MAX && sub_res + 1 < table[i] )
                    table[i] = sub_res + 1;
            }
        }
    }

    return table[M];
}


int main()
{
    int T;

    scanf( "%d", &T );

    while( T-- )
    {
        int N, M;

        scanf( "%d%d", &N, &M );

        short* blocos = ( short* ) malloc( sizeof( short ) * N );
		int max = 0;

        for( int i = 0; i < N; i++ )
        {
            scanf( "%hd", &blocos[i] );
            if( blocos[i] > max )
            	max = blocos[i];
        }

		int sim = M / max;
		sim *= ( double ) 0.99;
		M -= sim * max;

        short newBlocos[N-1], idx = 0;

        for( int i = 0; i < N; i++ )
        {
            if( blocos[i] < M )
                newBlocos[idx++] = blocos[i];
        }

        printf( "%d\n", sim + minBlocN( newBlocos, idx, M ) );
    }

    return 0;
}
