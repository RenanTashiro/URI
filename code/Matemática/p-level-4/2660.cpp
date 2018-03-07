/*
Nome:      Cigarras Periódicas
ID:        2660
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.220s
Tamanho:   620 Bytes
Submissao: 13/09/17 17:53:59
*/
#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return a * (b / __gcd(a, b));
}

int main()
{
    long long N, L;

    cin >> N >> L;

    long long lcm_v = 1;

    for(long long i = 0; i < N; i++)
    {
        long long Ci;

        cin >> Ci;

        lcm_v = lcm(lcm_v, Ci);
    }

    long long max_t = 0, ans = 0;

    for(long long i = 1; i <= L; i++)
    {
        long long t = lcm(lcm_v, i);

        if(max_t < t && t <= L)
        {
            max_t = t;
            ans = i;
        }
    }

    cout << ans << endl;
}

