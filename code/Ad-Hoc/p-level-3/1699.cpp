/*
Nome:      Jogo Entediante
ID:        1699
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     1.116s
Tamanho:   837 Bytes
Submissao: 15/09/17 09:27:58
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX 100000000

int main()
{
    int N;

    vector<short> is_sq(MAX, -1);

    while(cin >> N && N)
    {
        int div = 0;

        for(int i = 0; i < N; i++)
        {
            long long x;

            cin >> x;

            if(x < MAX && is_sq[x] != -1)  {
                if(is_sq[x] == 1)
                    div++;
            } else {
                long long y = sqrt(x);

                if(y * y == x) {
                    div++;
                    if(x < MAX)
                        is_sq[x] = 1;
                }
                else if(x < MAX)
                    is_sq[x] = 0;
            }

        }

        if(div % 2 == 1)
            cout << "Annie\n";
        else
            cout << "Garen\n";
    }
}
