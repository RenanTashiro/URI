/*
Nome:      Fibonacci Rápido
ID:        2164
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   194 Bytes
Submissao: 25/07/16 22:15:18
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%.1lf\n", (double)(pow(((1+sqrt(5))/2), n)-pow(((1-sqrt(5))/2), n))/sqrt(5));
}

