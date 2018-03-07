/*
Nome:      Plantação
ID:        2442
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.020s
Tamanho:   923 Bytes
Submissao: 15/06/17 13:47:19
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int N, K;

	scanf("%lld%lld", &N, &K);

	long long int production[101]= {}, k = K, total = 0, balance = 0, lowest_balance = 0;

	for(long long int i = 0; i < K; i++)
	{
	    long long int a;

		scanf("%lld", &a);

		production[a]++;
		total += a;
	}

	long long int ans = 0;

	for(long long int i = 0; i < N; i++)
    {
        char weather[2];

        scanf("%s", weather);

        if(weather[0] == 'C')
        {
            balance++;
        }
        else
        {
            balance--;
        }

        if(balance < 0 && balance >= -100 && balance < lowest_balance)
        {
            k -= production[-balance];
            total -= -balance * production[-balance];
            lowest_balance = balance;
        }

        ans += total + balance * k;
    }

    printf("%lld\n", ans);
}
