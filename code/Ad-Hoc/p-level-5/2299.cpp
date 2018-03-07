/*
Nome:      Pedido de Desculpas
ID:        2299
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.116s
Tamanho:   776 Bytes
Submissao: 28/07/17 18:01:28
*/
#include <bits/stdc++.h>
using namespace std;

#define LEN first
#define FREQ second

typedef pair<int,int> ii;

int dp[55][1005];

int solve(int i, int C, const vector<ii> &card)
{
	if(i >= (int)card.size()) return 0;
	if(dp[i][C] != -1) return dp[i][C];
	
	int ans = 0;
	
	if(C- card[i].LEN >= 0)
		ans = max(ans, solve(i + 1, C - card[i].LEN, card) + card[i].FREQ);
		
	ans = max(ans, solve(i + 1, C, card));
	
	return dp[i][C] = ans;
}

int main()
{
	int C, F, teste = 1;
	
	while(scanf("%d%d", &C, &F) && C && F)
	{
		vector<ii> card(F);
		
		for(int i = 0; i < F; i++)
			scanf("%d%d", &card[i].LEN, &card[i].FREQ);
	
		memset(dp, -1, sizeof dp);
			
		printf("Teste %d\n", teste++);
		printf("%d\n\n", solve(0, C, card));
	}
}
