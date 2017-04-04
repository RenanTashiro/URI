#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, teste = 1;
	
	while(scanf("%d", &n) && n != 0)
	{
		int value, winner;
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &value);
			
			if(i + 1 == value)
				winner = value;
		}
		
		printf("Teste %d\n%d\n\n", teste++, winner);
	}
}
