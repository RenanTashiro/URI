/*
Nome:      A Maior e Menor Caixa
ID:        1294
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.060s
Tamanho:   842 Bytes
Submissao: 04/01/18 10:37:42
*/
#include <bits/stdc++.h>
using namespace std;

double W, L;

double func(double x)
{ 
    return x * (L - 2*x) * (W - 2*x); 
}

double busca_ternaria(double inicio, double fim, bool minimizar=false)
{
    double l = inicio, r = fim;    

    for(int i = 0; i < 120; i++) 
    {
        double l1 = l + (r - l) / 3;
        double l2 = r - (r - l) / 3;
        
        if(minimizar) {
			if(func(l1) < func(l2))
				r = l2; 
			else 
				l = l1;
		} else {
			if(func(l1) > func(l2))
				r = l2; 
			else 
				l = l1;			
		}
    }

    return (l + r) / 2.0;
}

int main()
{
	while(cin >> L >> W)
	{
		double inicio = 0.0, fim = min(L/2, W/2);
		double maior = busca_ternaria(inicio, fim);
		double menor = busca_ternaria(inicio, fim, true);
		
		printf("%.3lf 0.000 %.3lf\n", maior, menor);
	}
}
