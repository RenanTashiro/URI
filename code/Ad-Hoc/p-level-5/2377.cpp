/*
Nome:      Pedágio
ID:        2377
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   168 Bytes
Submissao: 25/04/17 19:12:24
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L, D, K, P;

    cin >> L >> D >> K >> P;

    cout << int(L / D) * P + L * K << endl;
}
