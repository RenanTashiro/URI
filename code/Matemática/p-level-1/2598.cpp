/*
Nome:      Colocando Radares
ID:        2598
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   215 Bytes
Submissao: 17/07/17 09:09:24
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	scanf("%d", &N);
	
	while(N--)
	{
		int a, b;
		
		scanf("%d%d", &a, &b);
		
		printf("%d\n", (int)ceil((double)a / b));
	}
}
