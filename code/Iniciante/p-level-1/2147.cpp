/*
Nome:      Galopeira
ID:        2147
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   213 Bytes
Submissao: 19/07/16 12:45:35
*/
#include <cstdio>
#include <cstring>

int main()
{
	int N;
	
	scanf("%d", &N);
	
	while(N--)
	{
		char word[10005];
		
		scanf("%s", word);
		
		printf("%.2lf\n", (double)strlen(word)/100);
	}
}
