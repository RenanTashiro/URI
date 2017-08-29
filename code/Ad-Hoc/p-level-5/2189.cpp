/*
Nome:      Quermesse
ID:        2189
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   326 Bytes
Submissao: 29/08/16 12:25:45
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, teste = 1;
	
	while(scanf("%d", &n) && n != 0)
	{
		int value, winner;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &value);
			
			if(i + 1 == value)
				winner = value;
		}
		
		printf("Teste %d\n%d\n\n", teste++, winner);
	}
}
