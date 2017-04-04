#include <bits/stdc++.h>

int main()
{
	int N, caso = 1;
	
	while(scanf("%d", &N) != EOF)
	{
		int counter = 0;
	
		for(int i = 0; i <= N; i++) 
		{
			if(i == 0 || i == 1)
			{
				counter += 1;
			}
			else 
			{
				counter += i;
			}
		}
	
		printf("Caso %d: %d numero%s\n0", caso++, counter, (counter > 1 ? "s" : ""));
	
		for(int i = 1; i <= N; i++)
		{
			for(int j = 0; j < i; j++)
			{
				printf(" %d", i);
			}
		}	
	
		puts("\n");
	}
}
