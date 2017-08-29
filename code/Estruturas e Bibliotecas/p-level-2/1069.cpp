/*
Nome:      Diamantes e Areia
ID:        1069
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   420 Bytes
Submissao: 01/08/16 14:04:13
*/
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	while(N--)
	{
		char expr[1005];
		
		scanf("%s", expr);
		
		int memory = 0, counter = 0, len = strlen(expr);
	
		for(int i = 0; i < len; i++)
		{
			if(expr[i] == '<')
				memory++;
			else if(expr[i] == '>' and memory)
				counter++, memory--;
		}

		printf("%d\n", counter);
	}
}

