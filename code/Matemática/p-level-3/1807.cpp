/*
Nome:      Triângulo Trinomial, a Vingança
ID:        1807
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   569 Bytes
Submissao: 09/06/17 16:26:21
*/
#include <bits/stdc++.h>
using namespace std;

#define MOD 2147483647

long long pow(int a, int b, int mod)
{
    long long x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}

int main()
{
	int R;
	
	scanf("%d", &R);

	long long int ans = 1;

	for(int i = 0; i < 32; i++)
	{
		ans = ((ans % MOD) * (pow(3, R & (1 << i), MOD) % MOD)) % MOD;
	}
	
	printf("%lld\n", ans);
} 


