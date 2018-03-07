/*
Nome:      Corrida
ID:        2516
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   341 Bytes
Submissao: 19/04/17 19:29:04
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, Va, Vb;

    while(cin >> S >> Va >> Vb)
    {
        if(Vb >= Va)
        {
            cout << "impossivel" << endl;
        }
        else
        {
            cout << fixed << setprecision(2) << (double) S / (Va - Vb) << endl;
        }
    }
}
