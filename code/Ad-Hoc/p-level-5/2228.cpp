/*
Nome:      Caça ao Tesouro
ID:        2228
Resposta:  Accepted
Linguagem: C++
Tempo:     0.064s
Tamanho:   867 Bytes
Submissao: 08/06/17 20:21:17
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int X, Y, N, teste = 1;
	
	while(scanf("%d%d%d", &X, &Y, &N))
	{	
		if(X == 0 && Y == 0 && N == 0) break;
		
		vector<int> values(N);
		int total = 0;
		
		for(int i = 0; i < N; i++)
		{
			scanf("%d", &values[i]);
			total += values[i];
		}
		
		printf("Teste %d\n", teste++);		

		if((total + X + Y) % 2 || (total - abs(X - Y) < 0))
		{
			puts("N\n");
			continue;
		}

		int to_find = (total + X + Y) / 2 - X;
				
		vector<bool> dp(10500, false);
		dp[0] = true;
		
		int max = 0;
		
		for(int i = 0; i < N && !dp[to_find]; i++)
		{
			for(int j = max; j >= 0; j--)
			{
				if(dp[j])
				{
					dp[j + values[i]] = true;
				}
			}
			
			max += values[i];
		}
		
		if(dp[to_find])
		{
			puts("S\n");
		}
		else
		{
			puts("N\n");
		}
	}
}
