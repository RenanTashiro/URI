/*
Nome:      TV da Vovó
ID:        2288
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.224s
Tamanho:   705 Bytes
Submissao: 05/02/18 10:55:05
*/
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b)
{
	int ret = a % b;
	if(ret < 0)
		ret += b;
	return ret;
}

int main()
{
	int m, n, t = 1;
	
	while(scanf("%d%d", &m, &n) && m != 0)
	{
		int tv[m][n];
		
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				scanf("%d", &tv[i][j]);
				
		int dh = 0, dv = 0, x, y;
		
		while(scanf("%d%d", &x, &y)) {
			if(x == 0 && y == 0) break;
			dh += x;
			dv += y;
		}
		
		printf("Teste %d\n", t++);
		
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++)  {
				if(j != 0) printf(" ");
				printf("%d", tv[mod(i+dv, m)][mod(j-dh, n)]);
			}
			puts("");
		}
		
		puts("");
	}
}

