/*
Nome:      3-RSA
ID:        2636
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.764s
Tamanho:   892 Bytes
Submissao: 04/02/18 09:51:22
*/
#include <bits/stdc++.h>
using namespace std;

vector<long long> factorize(long long n)
{
	vector<long long> f;
    int count = 0;
 
    // count the number of times 2 divides 
    while (!(n % 2)) {
        n >>= 1; // equivalent to n=n/2;
        count++;
    }
 
    // if 2 divides it
    if (count) {
		f.push_back(2);
	}
 
    // check for all the possible numbers that can 
    // divide it
    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
			f.push_back(i);
    }
 
    // if n at the end is a prime number.
    if (n > 2) 
		f.push_back(n);
		
	return f;
}

int main()
{	
	long long n;
	
	while(cin >> n && n != 0)
	{
		auto f = factorize(n);
	
		printf("%lld = %lld x %lld x %lld\n", n, f[0], f[1], f[2]);
	}
}
