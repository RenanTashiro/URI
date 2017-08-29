/*
Nome:      Divisores
ID:        2238
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   1,36 KB
Submissao: 18/09/16 16:40:23
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
	vector<int> primes;
 
    for (int p=2; p<=n; p++)
       if (prime[p])
          primes.push_back(p);
     
	return primes;
}

int main()
{
	vector<int> primes = SieveOfEratosthenes((int)sqrt(1000000000));
	
	int A, B, C, D;
	
	while(scanf("%d%d%d%d", &A, &B, &C, &D) != EOF)
	{
		vector<int> dividers;
		
		for(int i : primes)
			if(C % i == 0)
				dividers.push_back(i);
		
		vector<int> factors;
				
		for(int i : dividers)
		{		
			factors.push_back(i);			
			
			long long int u = i;
			
			while(u * i <= 1000000000 && u * i < C)
			{
				factors.push_back(u);
				u *= i;
			}
		}		
		
		vector<int> factorsv2(factors);		
		
		for(int i : factors)
			for(int j : factors)
				factorsv2.push_back(i * j);
				
		sort(factorsv2.begin(), factorsv2.end());
		
		bool flag = false;
		
		for(int i : factorsv2)
		{
			if(i % A == 0 && i % B != 0 && C % i == 0 && D % i != 0)
			{
				printf("%d\n", i);
				flag = true;
				break;
			}
		}
		
		if(!flag)
			puts("-1");
	}
}

