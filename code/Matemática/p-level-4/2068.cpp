/*
Nome:      Marcando um Encontro
ID:        2068
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   306 Bytes
Submissao: 15/09/17 20:55:41
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t1, t2, N;

    cin >> t1 >> t2 >> N;

    t1 *= 60;
    t2 *= 60;

    long long R = t2 - t1;
    long long D = N*(2*R-N), Q = R * R;
    long long gcd = __gcd(D, Q);

    cout << D/gcd << '/' << Q/gcd << endl;
}
