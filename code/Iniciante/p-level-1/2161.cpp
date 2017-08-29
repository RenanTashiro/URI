/*
Nome:      Raiz Quadrada de 10
ID:        2161
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   237 Bytes
Submissao: 26/07/16 12:43:42
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double result = 0;
	int N;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		result = 1.0 / (result + 6.0);
	}
	
	printf("%.10lf\n", 3.0 + result);
}

