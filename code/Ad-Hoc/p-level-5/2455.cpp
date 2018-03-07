/*
Nome:      Gangorra
ID:        2455
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   353 Bytes
Submissao: 25/04/17 19:29:41
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P1, C1, P2, C2;

    cin >> P1 >> C1 >> P2 >> C2;

    int r1 = P1 * C1, r2 = P2 * C2;

    if(r1 == r2)
    {
        cout << "0" << endl;
    }
    else if(r1 < r2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
