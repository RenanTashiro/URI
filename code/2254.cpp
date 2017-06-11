#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	char even[] = "0110", odd[] = "1001";
	
	while(scanf("%d", &N) != EOF)
	{
		char cadeia = (N / 4) % 2 == 0 ? even[N%4] : odd[N%4];
		
		if(cadeia == '0')		
			puts("she loves not");
		else
			puts("she loves me");
	}
}

/*

0110 0110 0110 0110
0110 1001 1001 0110 1001 0110  0110 1001  1001 0110 0110 1001  0110 1001 1001 0110
*/
