/*
Nome:      Dobradura
ID:        2229
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   261 Bytes
Submissao: 13/02/18 11:09:21
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t = 1;
	
	while(scanf("%d", &n) && n != -1)	
	{
		int f = 0;
		
		for(int i = 1; i <= n; i++)
			f = 2 * f + 1;
			
		printf("Teste %d\n%d\n\n", t++, (int)pow(f + 2, 2));
	}
}
