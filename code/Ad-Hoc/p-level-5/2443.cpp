/*
Nome:      Soma de Frações
ID:        2443
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   277 Bytes
Submissao: 10/06/17 18:23:02
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	int divisor = b * d;
	int dividend = a * d + c * b;
	int gcd = __gcd(divisor, dividend);
	
	printf("%d %d\n", dividend / gcd, divisor / gcd);
}
