/*
Nome:      Supermercado
ID:        1351
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.204s
Tamanho:   1,42 KB
Submissao: 13/01/16 19:12:16
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int,double> ii;

vector<int>  shopping_list;
vector<ii>   products; // (id,price)

double shopping(int M, int N)
{
	vector<vector<ii>> dp(M, vector<ii>(N, {0, DBL_MAX}));
	
	if(shopping_list[0] == products[0].first) 
		dp[0][0] = {0, products[0].second};
		
	for(int i = 1; i < N; i++) {
		if(shopping_list[0] == products[i].first && products[i].second < dp[0][i-1].second) 
			dp[0][i] = {i, products[i].second};
		else 
			dp[0][i] = dp[0][i-1];			
	}
	
	for(int i = 1; i < M; i++) {
		for(int j = 1; j < N; j++) {
			if(shopping_list[i] == products[j].first && dp[i-1][j-1].second != DBL_MAX && dp[i-1][j-1].first < j) { // antes < j
				if(dp[i][j-1].second > dp[i-1][j-1].second + products[j].second) 					
					dp[i][j] = {j, dp[i-1][j-1].second + products[j].second};
				else 
					dp[i][j] = dp[i][j-1];
			}
			else 
				dp[i][j] = dp[i][j-1];
		}
	}
	return dp[M-1][N-1].second;
}

int main()
{
	int M, N;
	
	while(scanf("%d%d", &M, &N) && M != 0)
	{
		shopping_list.assign(M, 0), products.assign(N, ii(0,0.0));
		
		for(int i = 0; i < M; i++) {
			scanf("%d", &shopping_list[i]);
		}			
		
		for(int i = 0; i < N; i++) {
			scanf("%d%lf", &products[i].first, &products[i].second);
		}
		
		double ans = shopping(M, N);
		
		if(ans != DBL_MAX) {
			printf("%.2lf\n", ans);
		}
		else {
			puts("Impossible");
		}
	}
}