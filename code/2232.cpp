#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int N;
		
		scanf("%d", &N);
		printf("%d\n", (int)pow(2, N)-1);
	}
}
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
