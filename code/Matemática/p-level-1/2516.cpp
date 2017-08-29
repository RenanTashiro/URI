/*
Nome:      Corrida
ID:        2516
Resposta:  Accepted
Linguagem: C++
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
