/*
Nome:      Apenas Outro Problema de Física
ID:        1693
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.036s
Tamanho:   279 Bytes
Submissao: 12/01/18 09:23:13
*/
#include <bits/stdc++.h>
using namespace std;
			
int main()
{
	int R, H, V, G;
	
	while(scanf("%d%d%d%d", &R, &H, &V, &G) != EOF)
	{
		double dist = sqrt(pow(V, 4) / pow(G, 2) + 2 * pow(V, 2) * H / G);
		
		if(dist > R) 
			puts("Y");
		else
			puts("N");
	}
}
