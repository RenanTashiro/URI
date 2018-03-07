/*
Nome:      Super Primos: Ativar!
ID:        2674
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.048s
Tamanho:   1,01 KB
Submissao: 19/09/17 08:15:53
*/
#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int MAX_PRIME)
{
    vector<bool> is_prime(MAX_PRIME+1, false);
    for(int i = 2; i <= MAX_PRIME; i++)
        is_prime[i] = true;
    is_prime[1] = false;
    for(int p = 4; p <= MAX_PRIME; p += 2)
        is_prime[p] = false;
    for(int p = 3; p <= MAX_PRIME; p += 2) {
        if(is_prime[p] == true) {
            for(int i = 2*p; i <= MAX_PRIME; i += p)
                is_prime[i] = false;
        }
    }
    return is_prime;
}

int main()
{
    vector<bool> prime = sieve(100000);
    int N;

    while(cin >> N)
    {
        if(prime[N])
        {
            bool super = true;

            while(N != 0 && super)
            {
                if(!prime[N % 10])
                    super = false;
                N /= 10;
            }

            if(super)
                cout << "Super\n";
            else
                cout << "Primo\n";
        }
        else
            cout << "Nada\n";
    }
}
