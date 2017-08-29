/*
Nome:      Quantas Chamadas Recursivas?
ID:        1033
Resposta:  Accepted
Linguagem: C++
Tempo:     0.116s
Tamanho:   607 Bytes
Submissao: 29/04/16 17:51:42
*/
#include <bits/stdc++.h>

#define MAX 30000

using namespace std;

int main()
{
	long long int n, b;
	unsigned Case = 1;
	
	while(scanf("%lld%lld", &n, &b) && (n != 0 || b != 0))
	{
		int pattern[MAX] = {1, 1}, fib[] = {1, 1}, c = 2;
		bool flag = false;
		
		for(int i = 2; i <= n; i++)
		{
			int hold = fib[1];
			
			fib[1] = (fib[0]+fib[1]+1)%b;
			fib[0] = hold;
			
			if(fib[0] == 1 && fib[1] == 1)
			{
				flag = true;
				break;
			}
			
			pattern[c++] = fib[1];
		}
		
		printf("Case %d: %lld %lld %d\n", Case++, n, b, flag ? pattern[n%(c-1)] : fib[1]);
	}
}
