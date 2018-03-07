/*
Nome:      Lagoa Azul
ID:        2178
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.084s
Tamanho:   491 Bytes
Submissao: 06/01/18 08:14:41
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int A, P, ans = 0;
	
	scanf("%d%d", &A, &P);
	
	for(int i = 0; i < A; i++)
	{
		int N, Ni;
		
		scanf("%d", &N);
		
		int prev, counter = 0;
		
		scanf("%d", &prev);
		
		for(int j = 1; j < N; j++)
		{
			scanf("%d", &Ni);
			
			if(Ni < prev && Ni != 0)
				counter++;
			else if(prev == 0)
				counter++;
			
			prev = Ni;
		}
		
		ans = max(ans, counter);
	}
	
	printf("%d\n", ans + 1);
}
