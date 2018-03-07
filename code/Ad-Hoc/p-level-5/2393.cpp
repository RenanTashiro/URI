/*
Nome:      O Mar não está para Peixe
ID:        2393
Resposta:  Accepted
Linguagem: C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
Tempo:     0.000s
Tamanho:   494 Bytes
Submissao: 07/02/18 10:15:04
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, xi, xf, yi, yf;
	
	scanf("%d", &n);
	
	int ocean[101][101];
	
	memset(ocean, 0, sizeof ocean);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d%d%d", &xi, &xf, &yi, &yf);
		
		for(int i = xi; i < xf; i++)
			for(int j = yi; j < yf; j++)
				ocean[i][j] = 1;
	}
	
	int ans = 0;
	
	for(int i = 1; i <= 100; i++)
		for(int j = 1; j <= 100; j++)
			if(ocean[i][j])
				ans++;

	printf("%d\n", ans);
}
