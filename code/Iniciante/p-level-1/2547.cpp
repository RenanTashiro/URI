/*
Nome:      Montanha-Russa
ID:        2547
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   378 Bytes
Submissao: 09/05/17 17:26:12
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Amin, Amax;

    while(cin >> N >> Amin >> Amax)
    {
        int c = 0;

        while(N--)
        {
            int h;

            cin >> h;

            if(Amin <= h && h <= Amax)
            {
                c++;
            }
        }

        cout << c << endl;
    }
}
