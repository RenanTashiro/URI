/*
Nome:      Triângulos
ID:        2397
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   561 Bytes
Submissao: 11/06/17 09:55:40
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, C;
	
	cin >> A >> B >> C;
	
	bool a_ok = abs(B - C) < A && A < B + C;
	bool b_ok = abs(A - C) < B && B < A + C;
	bool c_ok = abs(A - B) < C && C < A + B;
	
	if(a_ok && b_ok && c_ok)
	{
		int b = max(A, max(B, C)), l = min(A, min(B, C)), m = (A + B + C) - b - l;
		int sb = b * b, sl = l * l, sm = m * m;
		
		if(sb == sl + sm)
		{
			puts("r");
		}
		else if(sb < sl + sm)
		{
			puts("a");
		}
		else
		{
			puts("o");
		}
	}
	else
	{
		puts("n");
	}
}
