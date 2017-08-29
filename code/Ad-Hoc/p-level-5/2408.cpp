/*
Nome:      Vice-Campeão
ID:        2408
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   179 Bytes
Submissao: 25/04/17 19:17:11
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;

    cin >> A >> B >> C;

    cout << min(max(A, B), min(max(B, C), max(A, C))) << endl;
}
