/*
Nome:      Saldo do Vovô
ID:        2434
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   302 Bytes
Submissao: 25/04/17 19:32:11
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S;

    cin >> N >> S;

    int lesser = S;

    for(int i = 0; i < N; i++)
    {
        int op;

        cin >> op;

        S += op;

        lesser = min(lesser, S);
    }

    cout << lesser << endl;
}
