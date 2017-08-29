/*
Nome:      Distância de Manhattan
ID:        2437
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   181 Bytes
Submissao: 25/04/17 19:36:18
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X1, Y1, X2, Y2;

    cin >> X1 >> Y1 >> X2 >> Y2;

    cout << abs(X1 - X2) + abs(Y1 - Y2) << endl;
}
