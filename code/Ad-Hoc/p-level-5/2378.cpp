/*
Nome:      Elevador
ID:        2378
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   424 Bytes
Submissao: 25/04/17 20:14:41
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, C;
    bool exceeded = false;

    cin >> N >> C;

    while(N--)
    {
        int S, E;

        cin >> S >> E;

        C += S - E;

        if(C < 0)
        {
            exceeded = true;
        }
    }

    if(exceeded)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
}
