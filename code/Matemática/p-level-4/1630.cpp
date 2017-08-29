/*
Nome:      Estacas
ID:        1630
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   271 Bytes
Submissao: 16/01/16 23:04:42
*/
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b); }

int main()
{
	int X, Y;
	
	while(scanf("%d%d", &X, &Y) != EOF)
	{
		int commum = gcd(X, Y);
		printf("%d\n", 2 * (X / commum + Y / commum));
	}
}
