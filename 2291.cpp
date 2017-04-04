#include <bits/stdc++.h>
using namespace std;

int div_sum(int n, int dsum[])
{
	if(n == 1)
		return 1;
	
	int sum = 0;	
	
	for(int i = ceil(n / 2); i > 0; i--)
	{
		if(n % i == 0)
		{
			sum = dsum[i];
			break;
		}
	}
	
	return sum + n;
}

int main()
{
	int N, dsum[1000001];
	
	for(int i = 1; i <= 1000000; i++) {
		dsum[i] = div_sum(i, dsum);
		printf("%d: %d\n", i, dsum[i]);
		getchar();		
		//~ if(i > 100000) {
			//~ printf("%d: %d\n", i, dsum[i]);
			//~ getchar();
		//~ }
	}
	
	puts("ok");
	
	while(scanf("%d", &N) && N != 0)
	{
		int sum = 0;
		
		for(int i = 1; i <= N; i++)
		{
			if(N % i == 0)
			{
				sum += dsum[i];
			}
		}
		
		printf("%d\n", sum);
	}
}
