/*
Nome:      Surf Aquático
ID:        2560
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.116s
Tamanho:   1,67 KB
Submissao: 14/07/17 15:32:55
*/
// Pode dar tanta diferenca no tempo por causa da cache, e como ela esta
// no servidor
#include <bits/stdc++.h>
using namespace std;

// Fast int reader, procurar outros metodos assim para outros tipos de dados
static int parseint(void)
{
    int c, n;

    n = getchar_unlocked() - '0';
    while (isdigit((c = getchar_unlocked())))
        n = 10*n + c-'0';

    return n;
}

int main()
{
    int N, B;

    while(scanf("%d%d", &N, &B) != EOF)
    {
        char score[N];
		getchar_unlocked();
		
        for(int i = 0; i < N; i++)
        {			
			score[i] = parseint();
        }

        set<char> interval;
        unsigned short n_count[101] = {0};
        int sum = 0;

        for(int i = 0; i < B; i++)
        {
            sum += score[i];
            n_count[score[i]]++;
            
            if(n_count[score[i]] == 1)
            {
				interval.insert(score[i]);
			}
        }

        unsigned ans = sum - *interval.begin() - *interval.rbegin();	
        long long lans = 0;

        for(int i = B; i < N; i++)
        {
            sum += score[i] - score[i-B];
            n_count[score[i]]++;
            n_count[score[i-B]]--;
            
            if(n_count[score[i]] == 1)
				interval.insert(score[i]);

			while(n_count[*interval.begin()] == 0)
				interval.erase(interval.begin());
			
			while(n_count[*interval.rbegin()] == 0)
				interval.erase(*interval.rbegin());

			if(ans > 4284967295) // 2^32 - (1e7+1)
			{
				lans += ans;
				ans = 0;
			}
			
			ans += sum - *interval.begin() - *interval.rbegin();
        }
        
        lans += ans;
        
		printf("%lld\n", lans);	
    }
}
