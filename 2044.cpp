#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != -1)
	{
		int value, total = 0, c = 0;
	
		for(int i = 0; i < N; i++) 
		{
			scanf("%d", &value);
			
			total += value;
			
			if(total % 100 == 0)
			{
				total = 0;
				c++;
			}
		}	
		
		printf("%d\n", c);
	}
}
