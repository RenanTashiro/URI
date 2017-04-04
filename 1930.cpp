#include <cstdio>
using namespace std;

int main()
{
    int N;

    scanf( "%d", &N );

    if( N & 1 )
        printf( "%lld\n", ( long long int ) ( N - 3 ) * ( N / 2 ) + ( N / 2 - 1) );
    else
        printf( "%lld\n", ( long long int ) ( N - 3 ) * ( N / 2 ) );

    return 0;
}
