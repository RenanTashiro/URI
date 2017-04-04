#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	
	while(scanf("%d", &T) && T != 0)
	{
		int N;
		
		while(T--)
		{
			scanf("%d", &N);
			
			if(N % 2 == 0)
				printf("%d\n", N * 2 - 2);
			else
				printf("%d\n", N * 2 - 1);
		}
	}
}
