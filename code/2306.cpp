#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int stacks[N], mini = INT_MAX, acc = 0, c_acc = 0;
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &stacks[i]);
		mini = min(mini, stacks[i]);
		acc += i;
	}

	int ans = 0;

	for(int i = 0; i < N; i++)
	{
		c_acc += stacks[i] - mini;
		if(stacks[i] - mini > i)
			ans += stacks[i] - mini - i;
	}
	
	if(acc != c_acc)
		printf("%d\n", -1);
	else
		printf("%d\n", ans);
}
//~ 1 2 3 4 5 6 7
//~ 1 3 6 10 15 21 

//~ 4 5 6 7 8 9 10


//~ 3 2 3 2 0
//~ 0 1 2 3 4
