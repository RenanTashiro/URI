/*
Nome:      Dividindo os Trabalhos II
ID:        2716
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.244s
Tamanho:   687 Bytes
Submissao: 04/02/18 15:28:36
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int work[n], sum = 0;
				
		for(int i = 0; i < n; i++) {
			scanf("%d", &work[i]);
			sum += work[i];
		}		
			
		vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));

		dp[0][0] = 1;		
		
		for(int i = 1; i <= n; i++) {
			for(int j = sum; j >= 0; j--) {
				if(dp[i-1][j] != -1) {
					if(j + work[i-1] <= sum)
						dp[i][j+work[i-1]] = 1;
					dp[i][j] = 1;					
				}				
			}
		}
					
		int ans = INT_MAX;
		
		for(int i = 0; i <= sum; i++)
			if(dp[n][i] != -1)
				ans = min(ans, abs((sum - i) - i));
		
		printf("%d\n", ans);
	}
}
