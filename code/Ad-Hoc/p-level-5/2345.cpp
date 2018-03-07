/*
Nome:      Assigning Teams
ID:        2345
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   168 Bytes
Submissao: 23/04/17 10:34:56
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    cout << abs((A + D) - (B + C)) << endl;
}
