/*
Nome:      Soma Natural
ID:        1805
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   194 Bytes
Submissao: 28/05/15 18:08:43
*/
#include <iostream>
using namespace std;

int main()
{
    long long int A, B;

    cin >> A >> B;

    cout << ( ( B * ( B + 1 ) ) / 2 ) - ( ( ( A - 1 ) * ( A ) ) / 2 ) << endl;

}
