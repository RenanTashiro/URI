/*
Nome:      Tempestade de Corvos
ID:        2203
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   293 Bytes
Submissao: 30/08/16 21:12:12
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Xf, Yf, Xi, Yi, Vi, R1, R2;
	
	while(scanf("%d%d%d%d%d%d%d", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF)
	{
		if(hypot((double)Xf - Xi, (double)Yf - Yi) + Vi*1.5 <= R1 + R2)
			puts("Y");
		else
			puts("N");
	}
}
