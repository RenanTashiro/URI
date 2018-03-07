/*
Nome:      Juros do Projeto
ID:        2170
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.004s
Tamanho:   287 Bytes
Submissao: 12/08/16 14:24:03
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double X, Y;
	int project_id = 1;
	
	while(scanf("%lf%lf", &X, &Y) != EOF)
	{
		printf("Projeto %d:\n", project_id++);
		printf("Percentual dos juros da aplicacao: %.2lf %%\n\n", Y * 100.00 / X - 100.00);
	}
}
