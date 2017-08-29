/*
Nome:      Volume da TV
ID:        2444
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   383 Bytes
Submissao: 25/04/17 19:39:33
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V, T;

    cin >> V >> T;

    for(int i = 0; i < T; i++)
    {
        int number;

        cin >> number;

        V += number;

        if(V < 0)
        {
            V = 0;
        }
        else if(V > 100)
        {
            V = 100;
        }
    }

    cout << V << endl;
}
