/*
Nome:      Descobrindo Senha
ID:        2252
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   467 Bytes
Submissao: 19/09/16 21:32:41
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, caso = 1;
	
	while(scanf("%d", &N) != EOF)
	{
		vector<pair<double,int>> level;
		double oil;
		
		for(int i = 0; i < 10; i++)
		{
			scanf("%lf", &oil);
			level.push_back(pair<double,int>(oil,-i));
		}
		
		sort(level.rbegin(), level.rend());
		
		printf("Caso %d: ", caso++);
		
		for(int i = 0; i < N; i++)
			printf("%d", -level[i].second);
			
		puts("");
	}
}

