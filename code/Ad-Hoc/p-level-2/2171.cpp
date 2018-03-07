/*
Nome:      Dividindo com Fink
ID:        2171
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   483 Bytes
Submissao: 10/09/17 22:39:23
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N && N)
    {
        int fink = 0, picapau = 0;
        int fink_fac = 1, n = N;

        while(n > 0)
        {
            picapau++;
            fink += fink_fac;
            n -= (1 + fink_fac);
            fink_fac++;
        }

        if(fink + picapau > N)
            picapau -= (fink + picapau) - N;

        cout << fink << ' ' << picapau << endl;
    }
}
