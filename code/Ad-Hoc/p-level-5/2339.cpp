/*
Nome:      Aviões de Papel
ID:        2339
Resposta:  Accepted
Linguagem: C++
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
