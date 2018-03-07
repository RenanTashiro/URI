/*
Nome:      Bonde de Autômatos
ID:        2627
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.324s
Tamanho:   772 Bytes
Submissao: 31/01/18 14:50:04
*/
#include <bits/stdc++.h>
using namespace std;

#define VAL(c) (26 - (c - 'a'))

int dp[30][100005];

int solve(int pos, char c, const string &chain)
{
	if(pos == (int)chain.size())
		return 0;
	
	if(c != ' ' && dp[VAL(c)-1][pos] != -1)
		return dp[VAL(c)-1][pos];
		
	int ans = 0;
	
	if(c <= chain[pos])
		ans = solve(pos + 1, chain[pos], chain) + VAL(chain[pos]);
		
	ans = max(ans, solve(pos+1, c, chain));
	
	if(c != ' ')
		dp[VAL(c)-1][pos] = ans;
	
	return ans;
}

int main()
{	
	int n, k;
	string chain;
	
	while(scanf("%d%d", &n, &k) != EOF)	
	{
		cin >> chain;
	
		for(int i = 0; i < 26; i++)
			for(int j = 0; j < n; j++)
				dp[i][j] = -1;
		
		printf("%s\n", solve(0, ' ', chain) >= k ? "Aceita" : "Rejeita");		
	}
}
