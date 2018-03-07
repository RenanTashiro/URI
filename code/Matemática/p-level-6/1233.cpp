/*
Nome:      Estrela
ID:        1233
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.276s
Tamanho:   1,27 KB
Submissao: 19/01/18 12:00:00
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int MAX_PRIME)
{
    vector<int> prime_list;
    bool is_prime[MAX_PRIME];
    for(int i = 2; i <= MAX_PRIME; i++)
        is_prime[i] = true;
    is_prime[1] = false;
    for(int p = 4; p <= MAX_PRIME; p += 2)
        is_prime[p] = false;
    prime_list.push_back(2);
    for(int p = 3; p <= MAX_PRIME; p += 2) {
        if(is_prime[p] == true) {
            prime_list.push_back(p);
            for(int i = 2*p; i <= MAX_PRIME; i += p)
                is_prime[i] = false;
        }
    }
    return prime_list;
}

int count_coprimes(int N, const vector<int> &prime_list)
{
    int ans = 1;
    vector<int> primes;
    
    for(int p : prime_list) {
		bool flag = N % p == 0;
        int c = 1;
        
        while(N % p == 0) {
            N /= p;
            c *= p;
        }
        
        if(flag) {
			ans *= (p - 1) * (c / p); // Totiente de Euler
		}
        
        if(N == 1)
            break;
    }
    
    if(N != 1)
		ans *= (N - 1);
    
    return ans;
}

int main()
{
	vector<int> prime_list = sieve(50000);
	int N;
	
	while(scanf("%d", &N) != EOF)
	{		
		int coprimes = count_coprimes(N, prime_list);
		
		printf("%d\n", coprimes / 2);
	}
}
