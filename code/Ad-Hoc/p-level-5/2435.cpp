/*
Nome:      Corrida
ID:        2435
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   300 Bytes
Submissao: 25/04/17 19:35:09
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N1, D1, V1, N2, D2, V2;

    cin >> N1 >> D1 >> V1;
    cin >> N2 >> D2 >> V2;

    if((double)D1 / V1 < (double)D2 / V2)
    {
        cout << N1 << endl;
    }
    else
    {
        cout << N2 << endl;
    }
}
