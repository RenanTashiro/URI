/*
Nome:      Competição de Chocolate
ID:        2367
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   795 Bytes
Submissao: 16/02/18 16:57:07
*/
#include <bits/stdc++.h>

int solve(int n, int m)
{
	int forbid[n+1], count[n+1];
  
	memset(forbid, 0, sizeof forbid);
	memset(count, 0, sizeof count);

	for(int i = 0; i <= n; i++) 
	{
		if(count[i] == 0) {
			for(int j = 1; j <= m && i + j <= n; j++) {
				count[i + j]++;
				forbid[i + j] = j;
			}
		} else if(count[i] == 1 && i + forbid[i] <= n) {
			count[i + forbid[i]]++;
			forbid[i + forbid[i]] = forbid[i];
		}

		//~ for(int i = 0; i <= n; i++)
			//~ printf("%d ", count[i]); puts("");
		//~ for(int i = 0; i <= n; i++)
			//~ printf("%d ", forbid[i]); puts("");		
		//~ puts("-------------");
	}
    
	return forbid[n];
}

int main()
{
	int n, m;
  
	scanf("%d %d", &n, &m);
	
	if(solve(n, m))
		puts("Paula");
	else
		puts("Carlos");
}
