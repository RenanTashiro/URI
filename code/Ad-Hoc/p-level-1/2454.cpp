/*
Nome:      Flíper
ID:        2454
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   286 Bytes
Submissao: 21/04/17 09:32:55
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int P, R;

    cin >> P >> R;

    if(P == 0)
    {
        cout << "C" << endl;
    }
    else if(R == 0)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "A" << endl;
    }
}
