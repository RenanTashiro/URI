#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, teste = 1;
	
	while(scanf("%d", &N) && N != 0)
	{
		printf("Teste %d\n", teste++);
		
		int fifty = N / 50; N %= 50;
		int ten = N / 10; N %= 10;
		int five = N / 5; N %= 5;
		
		printf("%d %d %d %d\n\n", fifty, ten, five, N);		
	}
}

