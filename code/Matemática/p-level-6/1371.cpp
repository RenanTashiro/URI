/*
Nome:      Fechem as Portas!
ID:        1371
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   277 Bytes
Submissao: 18/05/17 18:28:16
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    while(cin >> N && N)
    {
        cout << 1;

        for(int i = 4, j = 5; i <= N; i += j, j += 2)
        {
            cout << ' ' << i;
        }

        cout << endl;
    }
}
