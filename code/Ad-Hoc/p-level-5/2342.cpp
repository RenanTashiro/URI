/*
Nome:      Overflow
ID:        2342
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   237 Bytes
Submissao: 10/06/17 22:55:58
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, P, Q;
    char op;

    cin >> N >> P >> op >> Q;

    int result = op == '+' ? P + Q : P * Q;

    cout << (result > N ? "OVERFLOW" : "OK") << endl;
}
