/*
Nome:      Escada do DINF
ID:        2518
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   262 Bytes
Submissao: 19/04/17 19:56:24
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, H, C, L;

    while(cin >> N)
    {
        cin >> H >> C >> L;

        cout << fixed << setprecision(4) << (double) (N * (L * sqrt(C * C + H * H))) / 10000 << endl;
    }
}

