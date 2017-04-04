#include <bits/stdc++.h>

using namespace std;

int main()
{
	int W1, W2, R, cont = 0;
	double median = 0.0;
	
	while(scanf("%d%d%d", &W1, &W2, &R) && W1 != 0)
	{
		double M = (W1*(1+R/30.0) + W2*(1+R/30.0)) / 2.0;
		
		if(M < 13)
			puts("Nao vai da nao");
		else if(M < 14)
			puts("E 13");
		else if(M < 40)
			puts("Bora, hora do show! BIIR!");
		else if(M <= 60)
			puts("Ta saindo da jaula o monstro!");
		else
			puts("AQUI E BODYBUILDER!!");
		
		median += M;
		cont++;
	}
	
	if(median / cont > 40)
		puts("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!");
}
