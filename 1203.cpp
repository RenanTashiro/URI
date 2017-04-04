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
