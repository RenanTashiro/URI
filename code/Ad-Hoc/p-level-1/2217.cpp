/*
Nome:      Nove
ID:        2217
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   213 Bytes
Submissao: 07/09/16 11:51:25
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	
	scanf("%d", &T);
	
	while(T--)
	{
		int N;
		
		scanf("%d", &N);
			
		if(N & 1)
			puts("9");
		else
			puts("1");
	}
}
