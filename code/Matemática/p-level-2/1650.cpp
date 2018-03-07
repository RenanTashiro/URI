/*
Nome:      Pintura Preto e Branco
ID:        1650
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.008s
Tamanho:   554 Bytes
Submissao: 24/10/15 16:55:04
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, C;

    while( cin >> N >> M >> C && N != 0 )
    {
        int ans = 0;
        int row = M - 7, column = N - 7;

        int i = 0;

        if( C == 1 ) {
            i = 1, row++;
        }

        for( ; i < row; i++ ) {
            if( i % 2 == 0 ) {
                ans += column / 2;
            }
            else {
                ans += ( column + 1 ) / 2;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
