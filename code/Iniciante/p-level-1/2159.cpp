/*
Nome:      Número Aproximado de Primos
ID:        2159
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   167 Bytes
Submissao: 25/07/16 21:59:41
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%.1lf %.1lf\n", (double)n/log(n), 1.25506*n/log(n));
}
