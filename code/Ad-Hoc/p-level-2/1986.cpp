/*
Nome:      Perdido em Marte
ID:        1986
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   280 Bytes
Submissao: 16/09/17 00:29:43
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    string msg = "";

    for(int i = 0; i < N; i++)
    {
        int digit;

        cin >> hex >> digit;

        msg += (char)digit;
    }

    cout << msg << endl;
}
