/*
Nome:      Torre de Hanoi, Novamente!
ID:        1166
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   574 Bytes
Submissao: 01/07/16 16:02:49
*/
#include <bits/stdc++.h>

using namespace std;

bool isValid(int n)
{
	double sn = sqrt(n);
	return sn-(int)sn < 10e-6;
}

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int N, ball = 1;
		
		scanf("%d", &N);
		
		vector<stack<int> > varetas(N);
		
		while(true)
		{
			int i;
			
			for(i = 0; i < N; i++)
			{
				if(varetas[i].empty() || isValid(varetas[i].top() + ball)) 
				{
					varetas[i].push(ball);
					break;
				}
			}
			
			if(i == N)
				break;
			
			ball++;
		}
		
		printf("%d\n", ball-1);
	}
}
