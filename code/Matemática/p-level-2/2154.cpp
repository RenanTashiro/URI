/*
Nome:      Derivada de Polinômios
ID:        2154
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   659 Bytes
Submissao: 22/07/16 11:24:00
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	
	while(scanf("%d", &T) != EOF)
	{
		vector<pair<int,int>> members(T);
		
		scanf("%dx%d", &members[0].first, &members[0].second);
		
		for(int i = 1; i < T; i++)
		{
			scanf(" + %dx%d", &members[i].first, &members[i].second);
		}
		
		printf("%dx", members[0].first*members[0].second);	
		
		if(members[0].second-1 != 1)
			 printf("%d", members[0].second-1);
		
		for(int i = 1; i < T; i++)
		{
			printf(" + %dx", members[i].first*members[i].second);
			
			if(members[i].second-1 != 1)
				printf("%d", members[i].second-1);
		}
		
		puts("");
	}
}
