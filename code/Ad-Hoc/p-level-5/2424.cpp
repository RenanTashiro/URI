/*
Nome:      Tira-teima
ID:        2424
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   259 Bytes
Submissao: 25/04/17 19:43:31
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y;

    cin >> X >> Y;

    if(X < 0 || X > 432 || Y < 0 || Y > 468)
    {
        cout << "fora" << endl;
    }
    else
    {
        cout << "dentro" << endl;
    }
}
