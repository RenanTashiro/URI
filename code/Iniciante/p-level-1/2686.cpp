/*
Nome:      A Mudança Continua!!
ID:        2686
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   604 Bytes
Submissao: 23/02/18 08:42:46
*/
#include <bits/stdc++.h>
using namespace std;

int aa(int a)
{
	if(a / 10 == 0)
		printf("0");
	return a;
}

int main()
{
	double M;
	
	while(scanf("%lf", &M) != EOF)
	{
		// 24*60*60/360=240
		int total = M * 240.0;
		int h = total / 3600; total %= 3600;
		int m = total / 60; total %= 60;
		int s = total;
		
		if(M < 90 || M == 360) puts("Bom Dia!!");
		else if(M < 180) puts("Boa Tarde!!");
		else if(M < 270) puts("Boa Noite!!");
		else if(M < 360) puts("De Madrugada!!");
		
		printf("%d:", aa((h + 6) % 24));
		printf("%d:", aa(m));
		printf("%d\n", aa(s));		
	}
}
