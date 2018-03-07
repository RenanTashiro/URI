/*
Nome:      Embaralhamento de Bits
ID:        1772
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.332s
Tamanho:   795 Bytes
Submissao: 12/10/15 10:17:46
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned N, K;

    while ( cin >> N >> K && ( N != 0 || K != 0 ) )
    {
        int A, B;
        unsigned MAX = N, MIN = N;

        for( unsigned i = 0; i < K; i++ )
        {
            cin >> A >> B;

            int bit_a = ( N & ( 1 << A ) ) >> A;
            int bit_b = ( N & ( 1 << B ) ) >> B;

            if( bit_a == 0 )
                N &= ~( 1 << B );
            else
                N |= ( 1 << B );
            if( bit_b == 0 )
                N &= ~( 1 << A );
            else
                N |= ( 1 << A );

            if( N > MAX ) MAX = N;
            if( N < MIN ) MIN = N;
        }

       cout << N << " " << MAX << " " << MIN << "\n";
    }

    return 0;
}
