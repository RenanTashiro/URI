/*
Nome:      Lençol
ID:        2431
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   842 Bytes
Submissao: 11/06/17 14:08:36
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A1, B1, A2, B2, A, B;
	
	cin >> A1 >> B1 >> A2 >> B2 >> A >> B;
	
	int ca1 = (A1 + A2), cb1 = min(B1, B2);
	int ca2 = (A1 + B2), cb2 = min(B1, A2);
	int ca3 = (B1 + A2), cb3 = min(A1, B2);
	int ca4 = (B1 + B2), cb4 = min(A1, A2);
	int a = min(A, B), b = max(A, B);
	
	if(min(A1, B1) >= min(A, B) && max(A1, B1) >= max(A, B))
	{
		puts("S");
	}
	else if(min(A2, B2) >= min(A, B) && max(A2, B2) >= max(A, B))
	{
		puts("S");
	}
	else if(min(ca1, cb1) >= a && max(ca1, cb1) >= b)
	{
		puts("S");
	}
	else if(min(ca2, cb2) >= a && max(ca2, cb2) >= b)
	{
		puts("S");
	}
	else if(min(ca3, cb3) >= a && max(ca3, cb3) >= b)
	{
		puts("S");
	}
	else if(min(ca4, cb4) >= a && max(ca4, cb4) >= b)
	{
		puts("S");
	}
	else
	{
		puts("N");
	}
}
