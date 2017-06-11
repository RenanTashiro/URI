#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, N, M;
	
	scanf("%d", &T);
	
	while(T--)
	{
		scanf("%d%d", &N, &M);
		
		N /= 2; // Wrong "-"
		
		int result = 1;
		
		for(int i = 2; i <= M; i++) {
			result *= i;
		}
		
		printf("%d<N> %d\n", N, result*6*2);
	}
}
//1 2 3 4 5 6 7 8 9 10
//^ ^ ^ ^ ^ ^ ^ ^ ^ ^
// N!/(n-k)!
