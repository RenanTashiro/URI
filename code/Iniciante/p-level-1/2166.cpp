/*
Nome:      Raiz Quadrada de 2
ID:        2166
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   235 Bytes
Submissao: 26/07/16 12:42:44
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
		result = 1.0 / (result + 2.0);
	}
	
	printf("%.10lf\n", 1.0 + result);
}
