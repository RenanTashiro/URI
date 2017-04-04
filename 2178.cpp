#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, P, ans = 0;
	
	scanf("%d%d", &A, &P);
	
	for(int i = 0; i < A; i++)
	{
		int N, Ni;
		
		scanf("%d", &N);
		
		int prev, counter = 0;
		
		scanf("%d", &prev);
		
		for(int j = 1; j < N; j++)
		{
			scanf("%d", &Ni);
			
			if(Ni < prev)
				counter++;
			
			prev = Ni;
		}
		
		ans = max(ans, counter);
	}
	
	printf("%d\n", ans + 1);
}
