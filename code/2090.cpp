#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int N, K;
	
	while(scanf("%lld%lld", &N, &K) && N != 0) 
	{
		char products[N][25];
		
		for(int i = 0; i < N; i++) {
			scanf("%s", products[i]);
		}
		
		long long int r = (sqrt(1 + 8 * K) - 1) / 2;	
		
		if((r*r+r)/2 < K) r++;
			
		long long int index = K - ((r * r + r) / 2 - r + 1);
		
		printf("%s\n", products[index]);
	}	
}

