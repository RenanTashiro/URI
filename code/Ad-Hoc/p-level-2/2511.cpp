/*
Nome:      WWW
ID:        2511
Resposta:  Accepted
Linguagem: C++
Tempo:     0.252s
Tamanho:   1,14 KB
Submissao: 21/04/17 11:26:54
*/
#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int limit)
{
    vector<bool> primes(limit, true);

    primes[0] = false;
    primes[1] = false;

    for(long long i = 2; i < (int)sqrt(limit) + 1; i++)
    {
        if(primes[i])
        {
            for(long long j = i + i; j < limit; j += i)
            {
                primes[j] = false;
            }
        }
    }

    return primes;
}

int main()
{
    vector<bool> primes = sieve(1000001);
    int N;

    while(scanf("%d", &N) != EOF)
    {
        vector<int> call_police;
        int neighbor;

        for(int i = 0; i < N; i++)
        {
            scanf("%d", &neighbor);

            if(primes[neighbor])
            {
                call_police.push_back(neighbor);
            }
        }

        if(call_police.size() != 0)
        {
            printf("%d", call_police[0]);

            for(unsigned i = 1; i < call_police.size(); i++)
            {
                printf(" %d", call_police[i]);
            }

            puts("");
        }
        else
        {
            puts("*");
        }
    }
}
