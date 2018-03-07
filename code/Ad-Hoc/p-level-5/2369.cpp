/*
Nome:      Conta de Água
ID:        2369
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   387 Bytes
Submissao: 26/04/17 18:29:54
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    if(N < 11)
    {
        cout << 7 << endl;
    }
    else if(N < 31)
    {
        cout << 7 + (N - 10) * 1 << endl;
    }
    else if(N < 101)
    {
        cout << 27 + (N - 30) * 2 << endl;
    }
    else
    {
        cout << 167 + (N - 100) * 5 << endl;
    }

}
