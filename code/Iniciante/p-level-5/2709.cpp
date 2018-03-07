/*
Nome:      As Moedas de Robbie
ID:        2709
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   550 Bytes
Submissao: 28/12/17 09:38:02
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int M;
	
	while(cin >> M)
	{
		int coins[M];
		
		for(int i = 0; i < M; i++)
			cin >> coins[i];
			
		int V;
		
		cin >> V;
		
		int sum = 0, index = M-1;
		
		while(index >= 0)
		{
			sum += coins[index];
			index -= V;
		}
		
		int div = 0;
		
		for(int i = 2; i <= sum; i++)
			if(sum % i == 0)
				div++;
		
		if(div == 1)
			puts("You’re a coastal aircraft, Robbie, a large silver aircraft.");
		else
			puts("Bad boy! I’ll hit you.");
	}
}
