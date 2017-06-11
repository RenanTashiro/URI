#include <bits/stdc++.h>

using namespace std;

int main()
{
	long double valor, juros;
	int meses;
	
	while(scanf("%Lf", &valor) != EOF)
	{
		scanf("%Lf%d", &juros, &meses);		
		long double simples  = valor * juros * meses;
		long double composto = valor * powl(1 + juros, meses) - valor;					
		printf("DIFERENÇA DE VALOR = %.2Lf\n", fabs(simples - composto));
		printf("JUROS SIMPLES = %.2Lf\n", simples);
		printf("JUROS COMPOSTO = %.2Lf\n\n", composto);
	}
}

