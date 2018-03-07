/*
Nome:      Sequência de Sequência
ID:        2028
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.260s
Tamanho:   483 Bytes
Submissao: 26/02/16 18:04:43
*/
#include <bits/stdc++.h>

int main()
{
	int N, caso = 1;
	
	while(scanf("%d", &N) != EOF)
	{
		int counter = 0;
	
		for(int i = 0; i <= N; i++) 
		{
			if(i == 0 || i == 1)
			{
				counter += 1;
			}
			else 
			{
				counter += i;
			}
		}
	
		printf("Caso %d: %d numero%s\n0", caso++, counter, (counter > 1 ? "s" : ""));
	
		for(int i = 1; i <= N; i++)
		{
			for(int j = 0; j < i; j++)
			{
				printf(" %d", i);
			}
		}	
	
		puts("\n");
	}
}
