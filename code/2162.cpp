#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int prev, act, actual_state = -1, ans = 1;
	
	scanf("%d", &prev);
	
	for(int i = 1; i < N; i++)
	{
		scanf("%d", &act);
		
		if(act > prev && (actual_state == 0 || actual_state == -1))
			actual_state = 1;			
		else if(act < prev && (actual_state == 1 || actual_state == -1))
			actual_state = 0;
		else
			ans = 0;
		
		prev = act;
	}
	
	printf("%d\n", ans);
}
