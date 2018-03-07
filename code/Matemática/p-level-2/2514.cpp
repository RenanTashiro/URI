/*
Nome:      Alinhamento Lunar
ID:        2514
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   268 Bytes
Submissao: 09/01/18 08:56:37
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M, L1, L2, L3;

    while(cin >> M)
    {
        cin >> L1 >> L2 >> L3;

        int L23 = (L2 * L3) / __gcd(L2, L3);

        cout <<  (L1 * L23) / __gcd(L1, L23) - M << endl;
    }
}