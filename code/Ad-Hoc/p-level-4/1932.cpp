/*
Nome:      Bolsa de Valores
ID:        1932
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.052s
Tamanho:   796 Bytes
Submissao: 25/09/15 20:13:13
*/
#include <bits/stdc++.h>

typedef long long int64;
typedef unsigned long long uint64;

using namespace std;

int P[1<<18];
int dp[2][1<<18];

int N, C;
int counter = 0;

int solve( int has, int day )
{
    if( day == N ) return 0;
    int &ret = dp[has][day];
    if( ret == -1 )
    {
        ret = solve( has, day + 1 );
        if( has )
            ret = max( ret, P[day] + solve( 0, day + 1 ) );
        else
            ret = max( ret, -P[day] - C + solve( 1, day + 1 ) );
    }
    return ret;
}

int main( int argc, char *argv[] )
{
    ios::sync_with_stdio( false );

    cin >> N >> C;

    for( int i = 0; i < N; i++ )
    {
        cin >> P[i];
        dp[0][i] = dp[1][i] = -1;
    }

    cout << solve( 0, 0 ) << "\n";


    return 0;
}
