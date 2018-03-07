/*
Nome:      Fila do SUS
ID:        2506
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   573 Bytes
Submissao: 07/01/18 16:33:31
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	
	while(scanf("%d", &N) != EOF)
	{
		int h, m, c;
		int count = 0, act_hour = 7 * 60;
		
		for(int i = 0; i < N; i++)
		{
			scanf("%d%d%d", &h, &m, &c);
			
			int hour = h * 60 + m;
			
			if(act_hour < hour) {
				if(m == 0 || m == 30)
					act_hour = h * 60 + m;
				else if(m <= 30)
					act_hour = h * 60 + 30;
				else
					act_hour = (h+1) * 60;
			}

			if(act_hour - hour > c) {
				count++;
			}
			
			act_hour += 30;
		}
		
		printf("%d\n", count);
	}
}