/*
Nome:      Em Dívida
ID:        2044
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   347 Bytes
Submissao: 25/04/16 20:05:47
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != -1)
	{
		int value, total = 0, c = 0;
	
		for(int i = 0; i < N; i++) 
		{
			scanf("%d", &value);
			
			total += value;
			
			if(total % 100 == 0)
			{
				total = 0;
				c++;
			}
		}	
		
		printf("%d\n", c);
	}
}
