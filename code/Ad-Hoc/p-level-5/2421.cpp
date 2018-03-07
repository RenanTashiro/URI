/*
Nome:      Álbum de Fotos
ID:        2421
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   478 Bytes
Submissao: 07/02/18 16:13:05
*/
#include <bits/stdc++.h>
using namespace std;

bool inside(int l, int h, int x, int y)
{
	return (l <= x && h <= y) || (h <= x && l <= y);
}

int main()
{
	int x, y;
	
	scanf("%d%d", &x, &y);
	
	int l1, l2, h1, h2;
	
	scanf("%d%d", &l1, &h1);
	scanf("%d%d", &l2, &h2);
	
	if(inside(max(l1,l2), h1+h2, x, y) 
	|| inside(max(l1,h2), h1+l2, x, y)
	|| inside(l1+l2, max(h1,h2), x, y)
	|| inside(l1+h2, max(h1,l2), x, y))
		puts("S");
	else
		puts("N");
}
