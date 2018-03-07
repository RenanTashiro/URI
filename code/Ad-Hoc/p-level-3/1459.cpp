/*
Nome:      Foco
ID:        1459
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.944s
Tamanho:   591 Bytes
Submissao: 21/10/15 15:53:15
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while( cin >> N )
    {
        map<int,int> foco;
        int A, B;

        for( int i = 0; i < N; i++ ) {
            cin >> A >> B;
            if( foco[B] < A ) {
                foco[B] = A;
             }
        }

        int maximum = -1, counter = 0;

        for( auto& a : foco ) {
            if( get<1>(a) > maximum ) {
                maximum = get<0>(a);
                counter++;
            }
        }

        cout << counter << "\n";
    }

    return 0;
}
