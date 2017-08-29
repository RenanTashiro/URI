/*
Nome:      Recuperação
ID:        2135
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   494 Bytes
Submissao: 14/07/16 21:16:36
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, instance = 1;
	
	while(scanf("%d", &N) != EOF)
	{			
		printf("Instancia %d\n", instance++);
			
		int numbers, sum = 0;
		bool flag = false;
		
		for(int i = 0; i < N; i++)
		{
			scanf("%d", &numbers);
			
			if(!flag && sum == numbers)
			{
				printf("%d\n", numbers);
				flag = true;
			}
			
			sum += numbers;		
		}
		
		if(!flag)
		{
			puts("nao achei");
		}
		
		puts("");
	}
}
