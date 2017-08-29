/*
Nome:      Trilhos Novamente... Traçando Movimentos
ID:        1063
Resposta:  Accepted
Linguagem: C++
Tempo:     0.024s
Tamanho:   580 Bytes
Submissao: 02/08/16 14:08:50
*/
#include <cstdio>
#include <stack>

int main()
{
	int N;
	
	while(scanf("%d", &N) && N != 0)
	{		
		std::stack<char> stk;
		char in[N], out[N];
		
		for(int i = 0; i < N; i++)
			scanf(" %c", &in[i]);
			
		for(int i = 0; i < N; i++)
			scanf(" %c", &out[i]);
		
		int i, j;
			
		for(i = 0, j = 0; i < N && j < N; )
		{
			stk.push(in[j++]);
			putchar('I');
			
			while(!stk.empty() && stk.top() == out[i]) {
				putchar('R');
				stk.pop();
				i++;
			}
		}
		
		if(i != N) {
			puts(" Impossible");
		} else {
			puts("");
		}			
	}
}
