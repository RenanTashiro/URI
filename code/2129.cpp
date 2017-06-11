#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k, instance = 1;
	
	while(scanf("%d", &k) != EOF)
	{		
		printf("Instancia %d\n", instance++);
		
		long long int fac = 1;
		
		for(int i = 2; i <= k; i++)
		{		
			printf("%lld\n", fac);
			if(i%10 != 0) {
				fac *= (i%10);
				if(fac % 10 != 0)
					fac %= 10;
				else 
					fac /= 10;
			}
		}
		
		printf("%lld\n", fac);
		
		puts("");
	}
} 
/*
1 2 6 4 2 2 4 2 8 8 8 6 8 2 1 6 2 4 4
1 2 6 4 2 2 4 2 8 8 8 6 8 2 8 8 6 8 2 4 4 8 4 6
1 2 6 4 2 2 4 2 8 8 8 6 8 2 8 8 6 8 2 4
1
2
6
24
120
720
5040
40320
362880
3628800
39916800
479001600
6227020800
87178291200
1307674368000
20922789888000
355687428096000
6402373705728000
121645100408832000
2432902008176640000
*/

