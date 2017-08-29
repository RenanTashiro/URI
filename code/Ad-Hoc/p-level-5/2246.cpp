/*
Nome:      Ladrilhos
ID:        2246
Resposta:  Accepted
Linguagem: C++
Tempo:     0.012s
Tamanho:   811 Bytes
Submissao: 13/09/16 14:57:52
*/
#include <bits/stdc++.h>
using namespace std;

int matrix[205][205], visited[205][205] = {{0}}, H, L;
int x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0, -1};

int solve(int row, int col, int c)
{
	visited[row][col] = 1;
	
	int ans = 1;
	
	for(int i = 0; i < 4; i++)
	{
		int nrow = row + x[i], ncol = col + y[i];
		
		if(nrow >= 0 && nrow < H && ncol >= 0 && ncol < L && !visited[nrow][ncol] && matrix[nrow][ncol] == c)
			ans += solve(nrow, ncol, c);
	}
	
	return ans;
}

int main()
{
	int ans = INT_MAX;
	
	scanf("%d%d", &H, &L);
	
	for(int i = 0; i < H; i++)
		for(int j = 0; j < L; j++)
			scanf("%d", &matrix[i][j]);
			
	for(int i = 0; i < H; i++)
		for(int j = 0; j < L; j++)
			if(!visited[i][j])
				ans = min(ans, solve(i, j, matrix[i][j]));
				
	printf("%d\n", ans);
}
