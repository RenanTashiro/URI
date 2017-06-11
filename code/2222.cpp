#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int N;
		
		scanf("%d", &N);
		
		int values[10005][65] = {{0}};
		
		for(int i = 0; i < N; i++)
		{
			int M, Mi;
			
			scanf("%d", &M);
			
			for(int j = 0; j < M; j++)
			{
				scanf("%d", &Mi);
				values[i][Mi] = 1;
			}
				
		}
		
		int Q, op, X, Y;
		
		scanf("%d", &Q);
		
		for(int i = 0; i < Q; i++)
		{
			scanf("%d%d%d", &op, &X, &Y);
			int counter = 0;
			
			if(op == 1)
			{
				for(int i = 0; i < 60; i++)
					if(values[X-1][i] && values[Y-1][i])
						counter++;
			}
			else
			{
				for(int i = 0; i < 60; i++)
					if(values[X-1][i] || values[Y-1][i])
						counter++;				
			}
			
			printf("%d\n", counter);
		}
	}
}
