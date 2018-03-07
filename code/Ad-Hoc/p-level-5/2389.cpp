/*
Nome:      Floresta
ID:        2389
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   523 Bytes
Submissao: 06/02/18 17:52:44
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, c = 0;
	
	scanf("%d", &n);
	
	for(int m = 1; m < (int)sqrt(n); m++)
		if((n-m-1) % (2*m+1) == 0) {
			if((n-m-1) / (2*m+1) < m)
				break;
			c++;
		}
	
	printf("%d\n", c);
}

//~ 1x1=5
//~ 1x2=8
//~ 1x3=11
//~ ---
//~ 1x1=5
//~ 2x1=8
//~ 3x1=11
//~ ---
//~ 1x1=5
//~ 2x2=13
//~ 3x3=25

//~ inner=MxN OK
//~ outer=(M+1)x(N+1) ALOK

//~ 2.M.N + M + N + 1
//~ 2MN+N = VALUE-1-M
//~ N*(2M+1)=

//~ N=(VALUE-M-1)/(2M+1)
