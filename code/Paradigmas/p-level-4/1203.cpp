/*
Nome:      Pontes de São Petersburgo
ID:        1203
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.104s
Tamanho:   675 Bytes
Submissao: 03/03/16 15:10:41
*/
#include <bits/stdc++.h>

using namespace std;

bool possible(int sink[], int K, int len)
{	
	int dp[5000] = {0};
		
	for(int i = 1; i < len; i++)
	{			
		for(int j = 1; j <= K; j++)	
		{
			if(dp[j] && dp[j] != i) {
				if(j + sink[i] <= K && !dp[j + sink[i]])
					dp[j + sink[i]] = i;		
			}
		}
	
		dp[sink[i]] = i;
	}	

	return dp[K];
}

int main()
{
	int R, K;
	
	while(scanf("%d%d", &R, &K) != EOF)
	{				
		int A, B, sink[R+1];
		
		memset(sink, 0, sizeof sink);
	
		for(int i = 0; i < K; i++)
		{
			scanf("%d%d", &A, &B);

			sink[A]++;
			sink[B]++;
		}
		
		printf("%c\n", possible(sink, K, R+1) ? 'S' : 'N');			
	}
}
