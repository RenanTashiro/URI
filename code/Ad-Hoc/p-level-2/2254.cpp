/*
Nome:      Bem-me-quer, Malmequer Japonês
ID:        2254
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   650 Bytes
Submissao: 08/01/18 12:40:47
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int powers[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 
					4096, 8192, 16384, 32768, 65536, 131072, 262144,
					524288, 1048576, 2097152, 4194304, 8388608, 16777216, 
					33554432, 67108864, 134217728, 268435456, 536870912, 
					1073741824};

	int N;

	while(scanf("%d", &N) != EOF)
	{
		int count = 0;
		
		while(N) {
			int i;
			
			for(i = 0; i < 31; i++) {
				if(powers[i] > N) {
					N %= powers[i-1];
					count++;
					break;
				}
			}
		}
		
		if(count % 2 == 0)		
			puts("she loves not");
		else
			puts("she loves me");
	}
}