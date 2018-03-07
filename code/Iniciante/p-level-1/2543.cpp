/*
Nome:      Jogatina UFPR
ID:        2543
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.064s
Tamanho:   363 Bytes
Submissao: 09/05/17 17:29:57
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, I;

    while(cin >> N >> I)
    {
        int c = 0;

        while(N--)
        {
            int id, t;

            cin >> id >> t;

            if(id == I && t == 0)
            {
                c++;
            }
        }

        cout << c << endl;
    }
}
