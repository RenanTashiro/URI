/*
Nome:      ABC
ID:        2336
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.084s
Tamanho:   986 Bytes
Submissao: 23/04/17 11:25:13
*/
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX_LEN 1000

// source: https://en.wikipedia.org/wiki/Modular_arithmetic
long long mul_mod(long long a, long long b, long long m)
{
   long double x;
   long long c;
   long long r;

   if (a >= m)
   {
        a %= m;
   }

   if (b >= m)
   {
        b %= m;
   }

   x = a;
   c = x * b / m;
   r = (long long)(a * b - c * m) % (long long)m;

   return r < 0 ? r + m : r;
}

int main()
{
    int base = 1, memo[MAX_LEN];

    for(int i = 0; i < MAX_LEN; i++)
    {
        memo[i] = base;
        base = mul_mod(base, 26, MOD);
    }

    char str[MAX_LEN + 1];

    while(scanf("%s", str) != EOF)
    {
        long long dec = 0;
        int len = strlen(str);

        for(int i = 0; i < len; i++)
        {
            dec += mul_mod(str[i] - 'A', memo[len - i - 1], MOD);
            dec %= MOD;
        }

        cout << dec << endl;
    }
}
