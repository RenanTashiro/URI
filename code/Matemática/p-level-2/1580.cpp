/*
Nome:      Quid Est Veritas? Est Vir Qui Adest!
ID:        1580
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   1,09 KB
Submissao: 13/12/15 10:27:53
*/
#include <bits/stdc++.h>

using namespace std;

// F(a,b) = (a^b)%MOD
long long int pow(int a, int b, int MOD)
{
    long long x = 1, y = a;

    while(b > 0) {
        if(b % 2 == 1) {
            x = (x * y);
            if(x > MOD) x %= MOD;
        }
        y *= y;
        if(y > MOD) y %= MOD;
        b /= 2;
    }

    return x;
}

long long int InverseEuler(int n, int MOD)
{
    return pow(n, MOD-2, MOD);
}

long long int Fat_Mod(int n, int MOD)
{
    long long int fat = 1;

    for(int i = 2; i <= n; i++) {
        fat = (fat * i) % MOD;
    }

    return fat;
}

int main()
{
    const long long int MOD = 1000000007;
    string C;

    while(cin >> C)
    {
        vector<int> alfa(26, 0);
        int S = (int) C.size();

        for(int i = 0; i < S; i++) {
            alfa[C[i]-65]++;
        }

        long long int ans = Fat_Mod(S, MOD);

        for(int i : alfa) {
            if(i > 1) {
                ans = (ans * InverseEuler(Fat_Mod(i, MOD), MOD)) % MOD;
            }
        }

        cout << ans << "\n";
    }
}
