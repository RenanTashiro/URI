/*
Nome:      Triângulo Interno
ID:        2499
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   290 Bytes
Submissao: 28/04/17 16:02:00
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, N, M, C1, C2, C3;

    while(cin >> S >> N >> M && S + N + M != 0)
    {
        cin >> C1 >> C2 >> C3;

        cout << int(ceil(S * ((double)C1 / (N+1)) * ((double)abs(C2-C3) / (M+1)))) << endl;
    }
}
