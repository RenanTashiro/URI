/*
Nome:      Brasil e Alemanha
ID:        2355
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   313 Bytes
Submissao: 21/04/17 09:51:33
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N;

    while(cin >> N && N != 0)
    {
        double bgol = N / 90.0;
        double agol = 7.0 * (N / 90.0);

        cout << "Brasil " << (long long) floor(bgol) << " x Alemanha " << (long long) ceil(agol) << endl;
    }
}
