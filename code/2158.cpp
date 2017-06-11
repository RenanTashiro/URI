#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int FP, FH;
	int molecula = 1;
	
	while(scanf("%lld%lld", &FP, &FH) != EOF)
	{
		printf("Molecula #%d.:.\n", molecula++);
		printf("Possui %lld atomos e %lld ligacoes\n\n", (long long int)(FP*1.5)+FH*2+2, (FP*5+FH*6)/2);
	}
}
