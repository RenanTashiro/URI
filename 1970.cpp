#include <bits/stdc++.h>

using namespace std;

int t[51];

int fit( int W )
{
    int w[W+1];
    memset( w, 0, sizeof( w ) );
    for( int i = 1; i <= W; i++ ) {
        if( t[i] > 0 ) {
            w[i] = i;
            t[i]--;
        }
        printf( "%d\n", i-w[i-1] );
        w[i] = max( w[i], w[i-1] + w[i-w[i-1]] );
    }
    for( int i = 1; i < W+1; i++ )
        printf( "%d ", w[i] );
    return w[W];
}

int main()
{
    int N;
    memset( t, 0, sizeof( t ) );

    scanf( "%d", &N );

    for( int i = 0; i < N; i++ ) {
        int n;
        scanf( "%d", &n );
        t[n]++;
    }

    printf( "\n%d\n", fit( 20 ) );

    return 0;
}
