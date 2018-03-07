/*
Nome:      Jogo de Boca
ID:        2667
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   211 Bytes
Submissao: 13/09/17 17:29:38
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;

    cin >> N;

    int acc = 0;

    for(int i = 0; N[i]; i++)
        acc += N[i]-'0';

    cout << acc % 3 << endl;
}
