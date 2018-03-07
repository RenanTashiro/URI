/*
Nome:      Escada Rolante
ID:        2390
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   378 Bytes
Submissao: 10/06/17 18:18:20
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	int ans = 0, act_time = 0;
	
	while(N--)
	{
		int T;
		
		scanf("%d", &T);
		
		if(act_time <= T)
		{
			ans += 10;
			act_time = T + 10;
		}
		else if(act_time > T)
		{
			ans += (T + 10) - act_time;
			act_time = T + 10;
		}
	}
	
	printf("%d\n", ans);
}
