#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)  
	{
		int permutation[N], inverse_permutation[N];
	
		for(int i = 0; i < N; i++) {
			scanf("%d", &permutation[i]);
		}			
		
		for(int i = 0; i < N; i++) {
			inverse_permutation[permutation[i]-1] = i+1;
		}
		
		bool ans = true;
		
		for(int i = 0; i < N; i++) {
			if(permutation[i] != inverse_permutation[i]) {
				ans = false;
			}
		}
		
		printf("%s\n", ans ? "ambiguous" : "not ambiguous");
	}
}
