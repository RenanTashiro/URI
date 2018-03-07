/*
Nome:      Cartas
ID:        2456
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   457 Bytes
Submissao: 28/04/17 16:34:08
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> card(5);

    for(int i = 0; i < 5; i++)
    {
        cin >> card[i];
    }

    vector<int> C(card), D(card);

    sort(C.begin(), C.end());
    sort(D.rbegin(), D.rend());

    if(card == C)
    {
        cout << "C" << endl;
    }
    else if(card == D)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}
