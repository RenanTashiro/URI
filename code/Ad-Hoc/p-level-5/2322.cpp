/*
Nome:      Peça Perdida
ID:        2322
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   374 Bytes
Submissao: 23/04/17 08:50:43
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<int> check(N, 0);

    for(int i = 0; i < N - 1; i++)
    {
        int n;

        cin >> n;

        check[n-1] = 1;
    }

    for(int i = 0; i < N; i++)
    {
        if(!check[i])
        {
            cout << i + 1 << endl;
        }
    }
}
