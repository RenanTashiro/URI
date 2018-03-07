/*
Nome:      Semente
ID:        2452
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   372 Bytes
Submissao: 10/06/17 17:41:29
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int F, R;
	
	scanf("%d%d", &F, &R);
	
	int ans = 0, prev, actual;
	
	scanf("%d", &prev);
	
	ans = prev - 1;
	
	for(int i = 1; i < R; i ++)
	{	
		scanf("%d", &actual);
		
		ans = max(ans, (actual - prev) / 2);
		prev = actual;
	}
	
	ans = max(ans, F - prev);
	
	printf("%d\n", ans);
}
