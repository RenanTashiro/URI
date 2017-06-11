#include <bits/stdc++.h>

using namespace std;

int square[205][205];

int solve_util(int row, int col, int N, int M)
{
	int count = 0;
	
	for(int i = row, j = col; i < N && j < M; i++, j++)
	{
		if(square[i][j]) {
			for(int k = i, l = j; k >= row && l >= col; k--, l--)			
				if(!square[i][l] || !square[k][j])		
					return count;						
			count++;
		} else {
			break;
		}
	}

	return count;	
}

int solve(int N, int M)
{
	int ans = 0;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			ans = max(ans, solve_util(i, j, N, M));
		}
	}	
	
	return ans;
}

int main()
{
	int N, M;
	
	scanf("%d%d", &N, &M);
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			scanf("%d", &square[i][j]);
		}	
	}
	
	int Q, S, MAX = solve(N, M);

	scanf("%d", &Q);
	
	while(Q--)
	{
		scanf("%d", &S);
		if(S <= MAX)			
			puts("yes");
		else
			puts("no");
	}
}
