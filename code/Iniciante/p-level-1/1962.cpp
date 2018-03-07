/*
Nome:      Há Muito, Muito Tempo Atrás
ID:        1962
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   489 Bytes
Submissao: 27/10/15 08:29:02
*/
#include <bits/stdc++.h>

#define REF 2015

using namespace std;

int main()
{
    int N;

    scanf( "%d", &N );

    while( N-- )
    {
        int T;

        scanf( "%d", &T );

        int ans = REF - T;

        if( ans > 0 ) {
            printf( "%d D.C.\n", ans );
        }
        else if( ans < 0 ) {
            printf( "%d A.C.\n", -( ans - 1 ) );
        }
        else {
            printf( "%d A.C.\n", 1 );
        }
    }

    return 0;
}