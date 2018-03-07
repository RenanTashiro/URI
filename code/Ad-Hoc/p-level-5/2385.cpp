/*
Nome:      Multiplicação de Matrizes
ID:        2385
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   401 Bytes
Submissao: 06/02/18 17:27:29
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int p, q, r, s, x, y;
	int i, j;
		
	scanf("%d", &n);	
	scanf("%d%d%d%d%d%d", &p, &q, &r, &s, &x, &y);		
	scanf("%d%d", &i, &j);
	
	long long C = 0;
	
	for(int k = 1; k <= n; k++)
		C += ((p*i + q*k) % x) * ((r*k + s*j) % y);
	
	printf("%lld\n", C);
}

//~ 100000
//~ 9999 9999 9999 9999 10000 10000
//~ 1 1
