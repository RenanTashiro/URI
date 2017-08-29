/*
Nome:      Colchão
ID:        2409
Resposta:  Accepted
Linguagem: C++
Tempo:     0.000s
Tamanho:   349 Bytes
Submissao: 10/06/17 18:37:40
*/
#include <bits/stdc++.h>
using namespace std;

#define MIN(a, b, c) min(a, min(b, c))
#define MAX(a, b, c) max(a, max(b, c))

int main()
{
	int A, B, C, H, L;
	
	cin >> A >> B >> C >> H >> L;
 	
	if(MIN(A, B, C) < min(H, L) && (A + B + C) - MAX(A, B, C) - MIN(A, B, C) < max(H, L))
	{
		puts("S");
	}
	else
	{
		puts("N");
	}
}
