#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, instance = 1;
	
	while(scanf("%d", &N) != EOF)
	{			
		printf("Instancia %d\n", instance++);
			
		int numbers, sum = 0;
		bool flag = false;
		
		for(int i = 0; i < N; i++)
		{
			scanf("%d", &numbers);
			
			if(!flag && sum == numbers)
			{
				printf("%d\n", numbers);
				flag = true;
			}
			
			sum += numbers;		
		}
		
		if(!flag)
		{
			puts("nao achei");
		}
		
		puts("");
	}
}
