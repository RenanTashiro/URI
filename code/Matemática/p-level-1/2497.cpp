/*
Nome:      Contando Ciclos
ID:        2497
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   237 Bytes
Submissao: 19/04/17 19:50:46
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, experiment = 1;

    while(cin >> N && N != -1)
    {
        cout << "Experiment " << experiment++ << ": " << N / 2 << " full cycle(s)" << endl;
    }
}
