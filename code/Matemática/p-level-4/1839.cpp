/*
Nome:      A Câmara Secreta
ID:        1839
Resposta:  Accepted
Linguagem: C++
Tempo:     0.348s
Tamanho:   2,24 KB
Submissao: 20/08/15 19:59:03
*/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

#define MOD 1000000007

char** create_matrix( const int row, const int column )
{
    char** matrix = ( char** ) malloc( sizeof( char* ) * row );
    for( int i = 0; i < row; i++ )
        matrix[i] = ( char* ) malloc( sizeof( char ) * column );
    return matrix;
}

void find_data( char** matrix, int Xa, int Ya, int Xb, int Yb, int &wall, int &nothing )
{
    wall = nothing = 0;

    for( int i = Xa-1; i < Xb; i++ )
    {
        for( int j = Ya-1; j < Yb; j++ )
        {
            if( matrix[i][j] == '#' )
                wall++;
            else
                nothing++;
        }
    }
}

int fast_pow( long long base, long long n, long long M )
{
    if( n == 0 )
       return 1;

    if( n == 1 )
        return base;

    long long halfn = fast_pow( base, n / 2, M );

    if( n % 2 == 0 )
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}

int findMMI_fermat( int n, int M )
{
    return fast_pow( n, M-2, M );
}

int total_permutation( const int dim, const int sharp, const int dot )
{
    long long ans = 1, actual_value = 1;
    int until = sharp >= dot ? sharp : dot;

    for( int i = dim; i > until; i-- )
    {
        actual_value *= i;

        if( actual_value > MOD )
            actual_value %= MOD;
    }

    long long division = 1;

    for( int i = ( sharp + dot ) - until; i > 1; i-- )
    {
        division *= i;

        if( division > MOD )
            division %= MOD;
    }

    division = findMMI_fermat( division, MOD );

    ans = ( ( actual_value % MOD )  * ( division % MOD ) ) % MOD;

    return ans;
}

int main()
{
    int N, M;
    char** camara;

    cin >> N >> M;

    camara = create_matrix( N, M );

    for( int i = 0; i < N; i++ )
    {
        for( int j = 0; j < M; j++ )
            cin >> camara[i][j];
    }

    int wall, nothing ;
    int Xa, Ya, Xb, Yb;

    while( cin >> Xa >> Ya >> Xb >> Yb )
    {
        find_data( camara, Xa, Ya, Xb, Yb, wall, nothing );

        cout << total_permutation( ( fabs( Xa - Xb ) + 1 ) * ( fabs( Ya - Yb ) + 1 ), wall, nothing ) - 1 << '\n' ;
    }
}
