/*
Nome:      Fui ao Mercado e Comprei...
ID:        2090
Resposta:  Accepted
Linguagem: C++
Tempo:     0.016s
Tamanho:   463 Bytes
Submissao: 18/06/16 18:00:33
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int N, K;
	
	while(scanf("%lld%lld", &N, &K) && N != 0) 
	{
		char products[N][25];
		
		for(int i = 0; i < N; i++) {
			scanf("%s", products[i]);
		}
		
		long long int r = (sqrt(1 + 8 * K) - 1) / 2;	
		
		if((r*r+r)/2 > K) r--;
		else if((r*r+r)/2 < K) r++;
			
		long long int index = K - ((r * r + r) / 2 - r + 1);
		
		printf("%s\n", products[index]);
	}	
}

