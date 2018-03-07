/*
Nome:      Kage Bunshin no Jutsu
ID:        2544
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   156 Bytes
Submissao: 09/05/17 17:03:17
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        cout << (int)log2(N) << endl;
    }
}
