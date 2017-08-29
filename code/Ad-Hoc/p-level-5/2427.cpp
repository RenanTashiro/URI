/*
Nome:      Chocolate
ID:        2427
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   156 Bytes
Submissao: 25/04/17 19:56:30
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L;

    cin >> L;

    cout << (long long) pow(4, (int)log2(L)) << endl;
}

