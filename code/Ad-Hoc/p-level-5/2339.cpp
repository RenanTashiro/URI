/*
Nome:      Aviões de Papel
ID:        2339
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   232 Bytes
Submissao: 25/04/17 19:06:31
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int C, P, F;

    cin >> C >> P >> F;

    if(C * F > P)
    {
        cout << "N" << endl;
    }
    else
    {
        cout << "S" << endl;
    }
}
