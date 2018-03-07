/*
Nome:      Tustin e Seu Dado Novo
ID:        2600
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   596 Bytes
Submissao: 17/07/17 09:06:32
*/
#include <bits/stdc++.h>
using namespace std;

bool opposite_sum_is_seven(int face[])
{
	return face[0] + face[5] == 7 
	    && face[1] + face[3] == 7
	    && face[2] + face[4] == 7;
}

int main()
{
	int N;
	
	scanf("%d", &N);
	
	while(N--)
	{
		int face[6], has_number[6] = {}, c = 0;
		
		for(int i = 0; i < 6; i++)
		{
			scanf("%d", &face[i]);
			
			if(1 <= face[i] && face[i] <= 6 && !has_number[face[i]-1])
			{
				has_number[face[i]-1] = 1;
				c++;
			}
		}
		
		if(c == 6 && opposite_sum_is_seven(face))
			puts("SIM");
		else
			puts("NAO");
	}
}
