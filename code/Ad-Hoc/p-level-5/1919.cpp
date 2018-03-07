/*
Nome:      Ajude Nhonho
ID:        1919
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   735 Bytes
Submissao: 13/10/15 08:44:42
*/
#include <bits/stdc++.h>

#define SUM_PERMUT_FAC 266664

using namespace std;

void genPermut( int sum )
{
    int counter = 0;

    for( int i = 0; i <= 9; i++ )
    for( int j = i + 1; j <= 9; j++ )
    for( int k = j + 1; k <= 9; k++ )
    for( int l = k + 1; l <= 9; l++ )
    for( int n = l + 1; n <= 9; n++ )
        if( ( i + j + k + l + n ) * SUM_PERMUT_FAC == sum )
            printf( "{%d,%d,%d,%d,%d}\n", i, j, k, l, n ), counter++;

    if( counter == 0 )
        printf( "%s\n", "impossivel" );
}
int main()
{
    int T;

    scanf( "%d", &T );

    while( T-- )
    {
        int K;

        scanf( "%d", &K );

        genPermut( K );

        puts( "" );
    }

    return 0;
}
